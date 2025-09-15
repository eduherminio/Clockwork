#pragma once

#include "../util/types.hpp"
#include "graph.hpp"
#include "util/vec/sse2.hpp"

#include <cmath>
#include <memory>
#include <vector>

namespace Clockwork {
namespace Autograd {

class SGD {
private:
    std::vector<ValuePtr> m_value_params;
    std::vector<PairPtr>  m_pair_params;

    f64 m_lr;
    f64 m_momentum;

    std::vector<f64>  m_value_velocity;
    std::vector<f128> m_pair_velocity;

public:
    explicit SGD(f64 lr, f64 momentum = 0.9) :
        m_lr(lr),
        m_momentum(momentum) {
        auto graph     = Graph::get();
        m_value_params = graph->get_parameters();
        m_pair_params  = graph->get_pair_parameters();

        m_value_velocity.resize(m_value_params.size(), 0.0);
        m_pair_velocity.resize(m_pair_params.size(), f128::zero());
    }

    void step() {
        // ---- Value parameters ----
        for (size_t i = 0; i < m_value_params.size(); ++i) {
            auto& p = m_value_params[i];
            auto& v = m_value_velocity[i];

            v = m_momentum * v - m_lr * p->get_gradient();

            p->change_value(v);
        }

        // ---- Pair parameters ----
        for (size_t i = 0; i < m_pair_params.size(); ++i) {
            auto& p = m_pair_params[i];
            auto& v = m_pair_velocity[i];

            const f128 lr_grad = f128::make(m_lr * p->grad_first(), m_lr * p->grad_second());

            const f128 mom_v       = f128::mul_scalar(v, m_momentum);
            const f128 neg_lr_grad = f128::neg(lr_grad);
            v                      = f128::add(mom_v, neg_lr_grad);

            p->m_values = f128::add(p->m_values, v);
        }
    }

    void set_lr(f64 lr) {
        m_lr = lr;
    }
    f64 get_lr() const {
        return m_lr;
    }
};


class AdamW {
private:
    std::vector<ValuePtr> m_value_params;
    std::vector<PairPtr>  m_pair_params;

    f64       m_lr;
    f64       m_beta1;
    f64       m_beta2;
    f64       m_eps;
    f64       m_weight_decay;
    long long m_t;

    std::vector<f64>  m_m;
    std::vector<f64>  m_v;
    std::vector<f128> m_pair_m;
    std::vector<f128> m_pair_v;

public:
    explicit AdamW(
      f64 lr = 1e-3, f64 beta1 = 0.9, f64 beta2 = 0.999, f64 eps = 1e-8, f64 weight_decay = 0.01) :
        m_lr(lr),
        m_beta1(beta1),
        m_beta2(beta2),
        m_eps(eps),
        m_weight_decay(weight_decay),
        m_t(0) {
        auto graph     = Graph::get();
        m_value_params = graph->get_parameters();
        m_pair_params  = graph->get_pair_parameters();

        m_m.resize(m_value_params.size(), 0.0);
        m_v.resize(m_value_params.size(), 0.0);

        m_pair_m.resize(m_pair_params.size(), f128::zero());
        m_pair_v.resize(m_pair_params.size(), f128::zero());
    }

    void step() {
        m_t += 1;

        const f64 b1t      = std::pow(m_beta1, static_cast<f64>(m_t));
        const f64 b2t      = std::pow(m_beta2, static_cast<f64>(m_t));
        const f64 inv1mb1t = 1.0 / (1.0 - b1t);
        const f64 inv1mb2t = 1.0 / (1.0 - b2t);

        // ---------------- Value parameters ----------------
        for (size_t i = 0; i < m_value_params.size(); ++i) {
            auto&     p = m_value_params[i];
            const f64 g = p->get_gradient();

            m_m[i] = m_beta1 * m_m[i] + (1.0 - m_beta1) * g;

            m_v[i] = m_beta2 * m_v[i] + (1.0 - m_beta2) * g * g;

            const f64 m_hat = m_m[i] * inv1mb1t;
            const f64 v_hat = m_v[i] * inv1mb2t;

            const f64 adam_update = m_lr * m_hat / (std::sqrt(v_hat) + m_eps);

            const f64 weight_decay_update = m_lr * m_weight_decay * p->get_value();

            const f64 total_update = -(adam_update + weight_decay_update);

            p->change_value(total_update);
        }

        // ---------------- Pair parameters ----------------
        for (size_t i = 0; i < m_pair_params.size(); ++i) {
            auto& p = m_pair_params[i];
            auto& m = m_pair_m[i];
            auto& v = m_pair_v[i];

            const f128 g_vec = f128::make(p->grad_first(), p->grad_second());
            const f128 g2_vec =
              f128::make(p->grad_first() * p->grad_first(), p->grad_second() * p->grad_second());

            const f128 m_scaled = f128::mul_scalar(m, m_beta1);
            const f128 g_scaled = f128::mul_scalar(g_vec, (1.0 - m_beta1));
            m                   = f128::add(m_scaled, g_scaled);

            const f128 v_scaled  = f128::mul_scalar(v, m_beta2);
            const f128 g2_scaled = f128::mul_scalar(g2_vec, (1.0 - m_beta2));
            v                    = f128::add(v_scaled, g2_scaled);

            const f128 m_hat = f128::mul_scalar(m, inv1mb1t);
            const f128 v_hat = f128::mul_scalar(v, inv1mb2t);

            const f64 adam_upd_f = m_lr * m_hat.first() / (std::sqrt(v_hat.first()) + m_eps);
            const f64 adam_upd_s = m_lr * m_hat.second() / (std::sqrt(v_hat.second()) + m_eps);

            const f64 decay_upd_f = m_lr * m_weight_decay * p->first();
            const f64 decay_upd_s = m_lr * m_weight_decay * p->second();

            const f64 total_upd_f = -(adam_upd_f + decay_upd_f);
            const f64 total_upd_s = -(adam_upd_s + decay_upd_s);

            p->m_values = f128::add(p->m_values, f128::make(total_upd_f, total_upd_s));
        }
    }

    void set_lr(f64 lr) {
        m_lr = lr;
    }
    f64 get_lr() const {
        return m_lr;
    }
};

}  // namespace Autograd
}  // namespace Clockwork
