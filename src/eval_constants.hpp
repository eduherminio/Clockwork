#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(213, 416);
inline const PParam KNIGHT_MAT = S(923, 1247);
inline const PParam BISHOP_MAT = S(932, 1237);
inline const PParam ROOK_MAT   = S(1140, 1769);
inline const PParam QUEEN_MAT  = S(2547, 2549);

inline const PParam TEMPO_VAL  = S(72, 57);

inline const PParam BISHOP_XRAY_PAWNS   = S(-17, -1);
inline const PParam BISHOP_PAIR_VAL   = S(66, 212);
inline const PParam ROOK_OPEN_VAL     = S(123, -7);
inline const PParam ROOK_SEMIOPEN_VAL = S(48, 18);
inline const PParam MINOR_BEHIND_PAWN = S(18, 39);
inline const PParam RESTRICTED_SQUARES = S(19, 7);

inline const PParam DOUBLED_PAWN_VAL = S(-25, -76);
inline const PParam ISOLATED_PAWN_VAL = S(-17, -35);

inline const PParam POTENTIAL_CHECKER_VAL = S(-49, -36);
inline const PParam OUTPOST_KNIGHT_VAL    = S(55, 37);
inline const PParam OUTPOST_BISHOP_VAL    = S(42, 35);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(42, 36);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(46, 0);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(22, 54);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(59, -42);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(10, -3), S(36, 26), S(64, 64), S(141, 186), S(485, 350), S(399, 541),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(50, 28), S(44, 19), S(65, 52), S(121, 156), S(485, 175),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-88, -234), S(-92, -197), S(-63, -81), S(-20, 27), S(54, 237), S(238, 400),
};
inline const std::array<PParam, 6> PASSED_CLEAR_STOPPERS = {
    S(-67, 35), S(-56, 13), S(-79, 94), S(-120, 205), S(-100, 328), S(41, 299),
};
inline const std::array<PParam, 6> PASSED_CLEAR_FORWARD = {
    S(-27, 67), S(-45, 53), S(-76, 92), S(-34, 114), S(72, 153), S(40, 232),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(18, -32), S(28, -4), S(17, 21), S(14, 106), S(106, 219), S(255, 283),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(3, -36), S(-2, 7), S(-7, -35), S(13, -74), S(5, -180), S(-205, -471),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(26, 211), S(5, 158), S(-5, 99), S(7, 69), S(26, 73), S(69, 69), S(61, 52),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-183, 8), S(9, 18), S(10, 99), S(37, 131), S(43, 161), S(53, 169), S(25, 170),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-108, -231), S(-17, -61), S(14, 74), S(41, 114), S(73, 140), S(82, 179), S(102, 183), S(120, 181), S(141, 152),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-24, -11), S(26, 82), S(70, 121), S(88, 169), S(119, 196), S(131, 222), S(138, 238), S(138, 258), S(142, 264), S(149, 272), S(155, 266), S(181, 246), S(208, 229), S(213, 224),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(169, 46), S(48, 229), S(65, 261), S(82, 273), S(93, 291), S(96, 304), S(101, 316), S(106, 320), S(110, 330), S(117, 335), S(121, 340), S(119, 346), S(122, 348), S(128, 340), S(148, 317),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-69, 35), S(129, 243), S(206, 371), S(227, 481), S(241, 534), S(246, 584), S(251, 616), S(254, 642), S(263, 650), S(264, 672), S(268, 683), S(273, 693), S(277, 691), S(282, 691), S(281, 698), S(281, 694), S(270, 711), S(270, 699), S(288, 676), S(281, 679), S(311, 644), S(304, 633), S(337, 589), S(352, 561), S(438, 425), S(447, 387), S(415, 403), S(316, 316),
};

inline const PParam PAWN_THREAT_KNIGHT = S(229, 141);
inline const PParam PAWN_THREAT_BISHOP = S(215, 214);
inline const PParam PAWN_THREAT_ROOK   = S(243, 118);
inline const PParam PAWN_THREAT_QUEEN  = S(184, -26);

inline const std::array<PParam, 6> MINOR_THREAT = {
    S(9, 46), S(93, 80), S(100, 122), S(229, 112), S(177, 10), S(0, 0),
};
inline const std::array<PParam, 6> ROOK_THREAT = {
    S(5, 54), S(68, 84), S(92, 77), S(11, 26), S(147, -21), S(0, 0),
};
inline const PParam KING_THREAT  = S(21, 128);
inline const PParam HANGING_PAWN  = S(29, 93);
inline const PParam HANGING_NON_PAWN  = S(74, 39);

inline const std::array<PParam, 2> KNIGHT_ON_QUEEN = {
    S(21, -13), S(126, -105),
};
inline const std::array<PParam, 2> BISHOP_ON_QUEEN = {
    S(44, 34), S(206, -167),
};
inline const std::array<PParam, 2> ROOK_ON_QUEEN = {
    S(42, 6), S(133, -122),
};

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(4, -10), S(3, -13), S(-0, -19), S(-4, -28), S(-10, -35), S(-15, -44), S(-18, -52), S(-19, -56), S(-30, -58),
};

inline const PParam ROOK_LINEUP = S(19, 82);

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(177, 316),    S(22, 370),     S(99, 290),     S(185, 252),    S(232, 155),    S(163, 214),    S(120, 279),    S(243, 267),    //
    S(56, 99),      S(43, 102),     S(39, 58),      S(74, -39),     S(51, -55),     S(27, -15),     S(21, 32),      S(6, 73),       //
    S(23, 40),      S(0, 23),       S(39, -9),      S(30, -41),     S(12, -52),     S(-15, -33),    S(-43, -1),     S(-46, 46),     //
    S(-9, -21),     S(-35, -10),    S(7, -34),      S(-1, -41),     S(-25, -53),    S(-43, -38),    S(-87, -12),    S(-86, -7),     //
    S(-13, -49),    S(24, -60),     S(13, -4),      S(0, -15),      S(-30, -23),    S(-51, -24),    S(-86, -22),    S(-95, -14),    //
    S(18, -47),     S(95, -50),     S(84, -5),      S(40, 23),      S(1, -2),       S(-21, -8),     S(-44, -5),     S(-70, 5),      //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-300, -375),  S(-65, 14),     S(-343, 75),    S(71, 5),       S(-128, 95),    S(-251, 106),   S(-294, 102),   S(-406, -289),  //
    S(12, -1),      S(10, 64),      S(133, 9),      S(118, 63),     S(105, 82),     S(65, 76),      S(-20, 59),     S(-34, 54),     //
    S(50, 0),       S(62, 47),      S(114, 59),     S(110, 100),    S(80, 88),      S(38, 95),      S(4, 82),       S(-43, 61),     //
    S(131, 44),     S(103, 75),     S(126, 69),     S(117, 130),    S(118, 127),    S(87, 101),     S(59, 67),      S(62, 63),      //
    S(88, 56),      S(115, 36),     S(108, 84),     S(91, 108),     S(92, 108),     S(81, 93),      S(74, 48),      S(25, 85),      //
    S(10, 16),      S(61, 6),       S(58, 51),      S(77, 78),      S(65, 73),      S(38, 52),      S(29, 39),      S(-24, 16),     //
    S(44, 29),      S(19, 58),      S(25, 15),      S(38, 50),      S(28, 57),      S(2, -4),       S(-66, 52),     S(-38, -23),    //
    S(-69, 55),     S(4, 20),       S(34, -7),      S(33, 42),      S(13, 59),      S(-56, 28),     S(-25, 42),     S(-130, -23),   //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-79, 79),     S(-110, 171),   S(-428, 248),   S(-219, 161),   S(-275, 199),   S(-264, 212),   S(-115, 154),   S(-78, 94),     //
    S(-11, 66),     S(-102, 198),   S(-26, 136),    S(-44, 171),    S(-25, 140),    S(-0, 124),     S(-8, 130),     S(-26, 118),    //
    S(76, 90),      S(45, 112),     S(36, 155),     S(62, 143),     S(68, 105),     S(28, 134),     S(44, 111),     S(33, 113),     //
    S(48, 64),      S(83, 100),     S(92, 108),     S(102, 120),    S(130, 119),    S(70, 105),     S(81, 80),      S(15, 91),      //
    S(95, 21),      S(71, 78),      S(102, 88),     S(120, 95),     S(107, 110),    S(97, 101),     S(34, 102),     S(65, 55),      //
    S(95, 46),      S(112, 44),     S(112, 82),     S(97, 107),     S(96, 94),      S(85, 105),     S(107, 67),     S(54, 70),      //
    S(64, 3),       S(138, 26),     S(100, 45),     S(68, 81),      S(47, 98),      S(99, 34),      S(81, 38),      S(78, 19),      //
    S(80, 17),      S(76, 51),      S(33, 85),      S(57, 65),      S(47, 59),      S(53, 91),      S(87, 17),      S(73, 22),      //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(228, 229),    S(209, 266),    S(181, 258),    S(162, 239),    S(187, 252),    S(189, 245),    S(201, 254),    S(170, 260),    //
    S(207, 216),    S(161, 267),    S(212, 219),    S(177, 209),    S(212, 220),    S(168, 244),    S(78, 299),     S(123, 274),    //
    S(110, 227),    S(213, 192),    S(216, 176),    S(191, 169),    S(213, 170),    S(142, 230),    S(127, 255),    S(92, 277),     //
    S(43, 225),     S(114, 219),    S(139, 194),    S(100, 185),    S(114, 208),    S(110, 234),    S(88, 262),     S(38, 283),     //
    S(8, 180),      S(98, 163),     S(66, 189),     S(41, 190),     S(54, 205),     S(46, 239),     S(26, 238),     S(-4, 242),     //
    S(20, 119),     S(119, 97),     S(87, 142),     S(65, 146),     S(73, 165),     S(52, 180),     S(61, 178),     S(-2, 191),     //
    S(-74, 123),    S(71, 85),      S(101, 84),     S(85, 108),     S(70, 136),     S(63, 146),     S(37, 142),     S(15, 137),     //
    S(-1, 87),      S(-22, 152),    S(93, 101),     S(103, 102),    S(90, 126),     S(74, 150),     S(77, 131),     S(61, 144),     //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(191, 326),    S(250, 328),    S(228, 358),    S(187, 430),    S(180, 468),    S(265, 323),    S(160, 372),    S(68, 434),     //
    S(219, 310),    S(191, 386),    S(175, 418),    S(46, 536),     S(103, 529),    S(136, 409),    S(170, 300),    S(129, 350),    //
    S(153, 356),    S(199, 378),    S(151, 425),    S(139, 449),    S(159, 427),    S(182, 365),    S(208, 296),    S(177, 269),    //
    S(162, 261),    S(155, 327),    S(142, 338),    S(116, 424),    S(115, 477),    S(141, 365),    S(182, 292),    S(147, 296),    //
    S(155, 223),    S(147, 246),    S(110, 328),    S(89, 387),     S(108, 424),    S(125, 386),    S(130, 321),    S(147, 279),    //
    S(144, 175),    S(164, 156),    S(154, 234),    S(123, 280),    S(124, 331),    S(126, 363),    S(145, 312),    S(139, 241),    //
    S(117, 24),     S(114, 72),     S(135, 92),     S(144, 172),    S(135, 232),    S(132, 232),    S(100, 262),    S(136, 218),    //
    S(66, 106),     S(57, -45),     S(88, -44),     S(106, 98),     S(124, 164),    S(139, 85),     S(148, 93),     S(94, 198),     //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-15, -153),   S(119, 155),    S(66, 155),     S(-29, 151),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(78, 60),      S(145, 230),    S(36, 257),     S(-62, 244),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(56, 89),      S(150, 199),    S(-15, 262),    S(-68, 249),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-71, 53),     S(10, 147),     S(-61, 188),    S(-132, 208),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-142, -3),    S(-68, 71),     S(-171, 145),   S(-220, 182),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-65, -39),    S(5, 12),       S(-100, 99),    S(-152, 147),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(51, -114),    S(47, -39),     S(-24, 25),     S(-104, 83),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(28, -222),    S(37, -114),    S(-73, -29),    S(-27, -87),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

inline const PParam KS_NO_QUEEN = S(-88, -429);

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(10, 3), S(15, 19), S(15, 13), S(6, 5), S(1, -6),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(4, -5), S(8, 4), S(4, 1), S(4, 1), S(4, 1),
};

inline const PParam KS_FLANK_ATTACK = S(6, -2);
inline const PParam KS_FLANK_DEFENSE = S(-5, -4);
inline const PParam KS_FLANK_DOUBLE_ATTACK   = S(5, -1);
inline const PParam KS_FLANK_DOUBLE_DEFENSE  = S(-3, -1);

inline const std::array<std::array<PParam, 7>, 4> KING_SHELTER = {{
  {{ S(25, 10), S(-14, 31), S(-6, 9), S(11, 9), S(17, -7), S(4, -38), S(2, -140), }},
  {{ S(4, 13), S(-32, -10), S(-22, -1), S(-13, 16), S(-12, 15), S(-20, -13), S(-23, -91), }},
  {{ S(-3, 18), S(-16, -4), S(-16, 36), S(-5, 32), S(-4, 23), S(-14, -2), S(-14, -128), }},
  {{ S(8, 41), S(-11, 32), S(-7, 72), S(2, 70), S(1, 56), S(-1, 54), S(24, -28), }},
}};
inline const std::array<PParam, 7> BLOCKED_SHELTER_STORM = {
    S(0, 0), S(0, 0), S(21, 27), S(-7, 10), S(-11, 21), S(-4, 39), S(11, 56),
};
inline const std::array<std::array<PParam, 7>, 4> SHELTER_STORM = {{
  {{ S(11, 27), S(-61, -149), S(-19, -37), S(5, 6), S(-4, 15), S(-9, 19), S(-7, 18), }},
  {{ S(15, 14), S(-26, -146), S(-13, -28), S(-4, 6), S(-3, 8), S(-15, 9), S(1, 11), }},
  {{ S(1, 19), S(-3, -71), S(12, -8), S(5, 11), S(-3, 16), S(-15, 27), S(-7, 23), }},
  {{ S(3, 10), S(6, -36), S(7, 80), S(-2, 99), S(-10, 22), S(-19, 9), S(-19, 20), }},
}};
inline TunableSigmoid<32> KING_SAFETY_ACTIVATION(
        819, 692, -22, 9
);

inline VParam WINNABLE_PAWNS = V(-16);
inline VParam WINNABLE_SYM = V(61);
inline VParam WINNABLE_ASYM = V(44);
inline VParam WINNABLE_PAWN_ENDGAME = V(113);
inline VParam WINNABLE_BIAS = V(-143);

// Epoch duration: 1.2404s
// clang-format on
}  // namespace Clockwork
