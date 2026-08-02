#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(208, 392);
inline const PParam KNIGHT_MAT = S(861, 1001);
inline const PParam BISHOP_MAT = S(914, 1031);
inline const PParam ROOK_MAT   = S(1142, 1556);
inline const PParam QUEEN_MAT  = S(2402, 2288);

inline const PParam TEMPO_VAL  = S(85, 60);

inline const PParam BISHOP_XRAY_PAWNS   = S(-22, 1);
inline const PParam BISHOP_PAIR_VAL   = S(76, 179);
inline const PParam ROOK_OPEN_VAL     = S(121, -3);
inline const PParam ROOK_SEMIOPEN_VAL = S(53, 16);
inline const PParam MINOR_BEHIND_PAWN = S(11, 40);
inline const PParam RESTRICTED_SQUARES = S(21, 7);

inline const PParam DOUBLED_PAWN_VAL = S(-25, -61);
inline const PParam ISOLATED_PAWN_VAL = S(-18, -28);

inline const PParam POTENTIAL_CHECKER_VAL = S(-45, -37);
inline const PParam OUTPOST_KNIGHT_VAL    = S(60, 34);
inline const PParam OUTPOST_BISHOP_VAL    = S(57, 30);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(38, 43);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(44, -5);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(7, 59);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(61, -68);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(19, -2), S(34, 41), S(58, 60), S(105, 192), S(342, 391), S(344, 515),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(54, 30), S(45, 27), S(58, 60), S(115, 143), S(423, 245),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-60, -220), S(-49, -192), S(-44, -78), S(-24, 33), S(28, 254), S(171, 411),
};
inline const std::array<PParam, 6> PASSED_CLEAR_STOPPERS = {
    S(-95, 49), S(-126, 48), S(-125, 130), S(-235, 292), S(-251, 504), S(-50, 519),
};
inline const std::array<PParam, 6> PASSED_CLEAR_FORWARD = {
    S(-12, 63), S(-76, 71), S(-95, 107), S(-58, 150), S(44, 229), S(-39, 363),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(22, -34), S(31, -26), S(4, 28), S(3, 108), S(98, 230), S(282, 219),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(7, -41), S(-3, 6), S(-3, -32), S(12, -77), S(52, -221), S(-79, -565),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(5, 207), S(-6, 163), S(-7, 100), S(11, 62), S(32, 64), S(73, 56), S(27, 71),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-111, -20), S(7, -5), S(-5, 88), S(20, 129), S(20, 158), S(34, 160), S(-9, 196),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-51, -128), S(-6, 41), S(23, 137), S(37, 185), S(65, 214), S(80, 239), S(97, 242), S(110, 249), S(130, 213),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-37, 30), S(-1, 101), S(49, 143), S(71, 183), S(91, 217), S(104, 233), S(111, 248), S(106, 265), S(107, 273), S(112, 275), S(120, 269), S(120, 268), S(183, 210), S(166, 196),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(92, 100), S(11, 218), S(28, 253), S(40, 271), S(50, 284), S(55, 297), S(58, 310), S(62, 314), S(68, 319), S(73, 328), S(77, 329), S(76, 336), S(76, 342), S(79, 331), S(87, 324),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-53, -7), S(93, 145), S(195, 318), S(205, 412), S(215, 485), S(227, 521), S(226, 560), S(236, 572), S(244, 576), S(249, 593), S(253, 598), S(258, 606), S(266, 603), S(268, 606), S(266, 610), S(258, 632), S(258, 627), S(259, 622), S(262, 619), S(274, 596), S(291, 577), S(302, 560), S(322, 513), S(324, 488), S(311, 454), S(357, 412), S(327, 387), S(322, 330),
};

inline const PParam PAWN_THREAT_KNIGHT = S(203, 152);
inline const PParam PAWN_THREAT_BISHOP = S(197, 219);
inline const PParam PAWN_THREAT_ROOK   = S(233, 177);
inline const PParam PAWN_THREAT_QUEEN  = S(167, 51);

inline const std::array<PParam, 6> MINOR_THREAT = {
    S(8, 46), S(90, 81), S(129, 94), S(199, 125), S(167, 80), S(0, 0),
};
inline const std::array<PParam, 6> ROOK_THREAT = {
    S(2, 46), S(65, 90), S(93, 85), S(15, 18), S(167, -29), S(0, 0),
};
inline const PParam KING_THREAT  = S(27, 131);
inline const PParam HANGING_PAWN  = S(40, 91);
inline const PParam HANGING_NON_PAWN  = S(84, 43);

inline const std::array<PParam, 2> KNIGHT_ON_QUEEN = {
    S(21, -7), S(133, -98),
};
inline const std::array<PParam, 2> BISHOP_ON_QUEEN = {
    S(43, 52), S(200, -159),
};
inline const std::array<PParam, 2> ROOK_ON_QUEEN = {
    S(44, 2), S(103, -62),
};

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(-3, -9), S(0, -8), S(-2, -12), S(-7, -16), S(-12, -19), S(-17, -19), S(-19, -30), S(-19, -41), S(-28, -32),
};

inline const PParam ROOK_LINEUP = S(29, 53);

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(142, 321),    S(10, 318),     S(35, 312),     S(109, 311),    S(199, 176),    S(87, 202),     S(64, 243),     S(229, 186),    //
    S(62, 50),      S(12, 102),     S(-4, 53),      S(63, -23),     S(58, -60),     S(27, -41),     S(10, 14),      S(34, 33),      //
    S(24, 5),       S(14, -2),      S(32, -15),     S(36, -43),     S(25, -62),     S(-15, -38),    S(-23, -19),    S(-22, 10),     //
    S(-22, -50),    S(-40, -21),    S(22, -56),     S(10, -55),     S(-11, -65),    S(-35, -47),    S(-90, -14),    S(-86, -26),    //
    S(-11, -83),    S(28, -87),     S(5, -29),      S(5, -31),      S(-38, -41),    S(-51, -35),    S(-88, -33),    S(-86, -40),    //
    S(8, -73),      S(90, -69),     S(88, -22),     S(34, 3),       S(3, -13),      S(-7, -22),     S(-38, -12),    S(-74, -20),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-230, -277),  S(-147, 69),    S(-281, 138),   S(52, 39),      S(-54, 71),     S(-257, 126),   S(-235, 55),    S(-329, -161),  //
    S(38, 15),      S(-73, 116),    S(146, 20),     S(102, 64),     S(27, 138),     S(48, 81),      S(-36, 72),     S(-12, 34),     //
    S(84, 3),       S(55, 75),      S(118, 68),     S(109, 83),     S(83, 102),     S(36, 116),     S(-3, 119),     S(-6, 54),      //
    S(138, 57),     S(112, 92),     S(122, 103),    S(124, 150),    S(105, 178),    S(69, 122),     S(62, 99),      S(63, 96),      //
    S(97, 69),      S(101, 75),     S(134, 92),     S(99, 130),     S(89, 116),     S(72, 135),     S(27, 108),     S(22, 105),     //
    S(15, 50),      S(85, 39),      S(74, 76),      S(86, 106),     S(70, 102),     S(48, 82),      S(31, 86),      S(-25, 67),     //
    S(29, 44),      S(56, 44),      S(35, 79),      S(55, 67),      S(33, 87),      S(-1, 51),      S(-37, 81),     S(-90, 26),     //
    S(-66, 7),      S(-9, 54),      S(43, 27),      S(51, 47),      S(11, 103),     S(-48, 43),     S(-45, 66),     S(-129, 27),    //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-41, 46),     S(-179, 125),   S(-464, 258),   S(-181, 125),   S(-293, 175),   S(-178, 145),   S(-181, 155),   S(-72, 62),     //
    S(27, 27),      S(-87, 125),    S(-8, 106),     S(-82, 159),    S(-34, 128),    S(-9, 111),     S(-36, 140),    S(-38, 111),    //
    S(71, 98),      S(48, 107),     S(67, 133),     S(52, 123),     S(46, 109),     S(32, 140),     S(31, 114),     S(27, 121),     //
    S(76, 51),      S(95, 74),      S(93, 94),      S(99, 116),     S(126, 107),    S(44, 131),     S(71, 95),      S(7, 111),      //
    S(52, 65),      S(35, 94),      S(105, 82),     S(123, 79),     S(82, 120),     S(89, 112),     S(22, 127),     S(37, 50),      //
    S(64, 65),      S(121, 30),     S(117, 78),     S(82, 107),     S(83, 106),     S(83, 120),     S(111, 90),     S(36, 83),      //
    S(72, 41),      S(128, 40),     S(77, 66),      S(56, 96),      S(27, 95),      S(71, 60),      S(77, 58),      S(102, 25),     //
    S(100, -21),    S(88, 25),      S(-5, 127),     S(24, 84),      S(10, 101),     S(14, 99),      S(81, 24),      S(49, 73),      //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(142, 244),    S(211, 217),    S(152, 248),    S(83, 271),     S(133, 235),    S(179, 215),    S(157, 255),    S(122, 269),    //
    S(89, 245),     S(46, 275),     S(163, 186),    S(171, 161),    S(170, 195),    S(102, 243),    S(58, 263),     S(68, 274),     //
    S(55, 212),     S(162, 168),    S(172, 132),    S(154, 150),    S(160, 156),    S(85, 212),     S(86, 222),     S(59, 269),     //
    S(23, 205),     S(47, 201),     S(119, 155),    S(88, 158),     S(85, 182),     S(41, 223),     S(40, 246),     S(-0, 268),     //
    S(2, 161),      S(60, 135),     S(46, 159),     S(19, 175),     S(35, 167),     S(4, 223),      S(-21, 231),    S(-8, 216),     //
    S(-14, 121),    S(83, 80),      S(60, 126),     S(36, 134),     S(46, 152),     S(2, 191),      S(27, 186),     S(-16, 176),    //
    S(-122, 123),   S(45, 53),      S(81, 66),      S(57, 108),     S(64, 108),     S(36, 150),     S(10, 144),     S(-23, 154),    //
    S(-27, 96),     S(-29, 145),    S(74, 92),      S(91, 88),      S(61, 123),     S(44, 138),     S(41, 132),     S(24, 142),     //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(173, 241),    S(260, 225),    S(215, 282),    S(270, 275),    S(208, 359),    S(224, 260),    S(185, 257),    S(65, 384),     //
    S(174, 241),    S(156, 301),    S(161, 352),    S(76, 414),     S(98, 431),     S(127, 353),    S(124, 319),    S(105, 300),    //
    S(141, 285),    S(225, 248),    S(152, 356),    S(148, 324),    S(132, 383),    S(154, 372),    S(152, 292),    S(160, 220),    //
    S(190, 144),    S(136, 286),    S(132, 304),    S(96, 384),     S(83, 465),     S(126, 304),    S(157, 279),    S(128, 246),    //
    S(135, 210),    S(137, 173),    S(131, 220),    S(92, 330),     S(73, 403),     S(130, 298),    S(112, 295),    S(117, 218),    //
    S(145, 103),    S(142, 157),    S(146, 188),    S(108, 234),    S(118, 265),    S(110, 307),    S(136, 251),    S(89, 273),     //
    S(92, 55),      S(137, -11),    S(124, 49),     S(137, 129),    S(131, 174),    S(124, 184),    S(106, 179),    S(128, 170),    //
    S(107, 10),     S(28, 43),      S(62, 11),      S(88, 72),      S(112, 88),     S(71, 153),     S(119, 98),     S(69, 169),     //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-34, -151),   S(176, 116),    S(116, 160),    S(156, 143),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(11, -12),     S(127, 228),    S(126, 191),    S(176, 185),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(66, 97),      S(64, 231),     S(124, 182),    S(128, 154),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-102, 61),    S(-24, 142),    S(-69, 152),    S(-101, 170),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-171, 1),     S(-104, 70),    S(-202, 135),   S(-246, 174),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-51, -53),    S(25, -7),      S(-143, 110),   S(-160, 149),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(62, -133),    S(30, -43),     S(-36, 29),     S(-88, 65),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(55, -232),    S(18, -78),     S(-69, -31),    S(-34, -78),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

inline const PParam KS_NO_QUEEN = S(-63, -435);

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(9, 6), S(16, 21), S(16, 11), S(5, 7), S(2, -6),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(3, -5), S(8, 4), S(2, 3), S(5, -1), S(6, -1),
};

inline const PParam KS_FLANK_ATTACK = S(5, -1);
inline const PParam KS_FLANK_DEFENSE = S(-5, -4);
inline const PParam KS_FLANK_DOUBLE_ATTACK   = S(4, 1);
inline const PParam KS_FLANK_DOUBLE_DEFENSE  = S(-2, -0);

inline const std::array<std::array<PParam, 7>, 4> KING_SHELTER = {{
  {{ S(31, 15), S(-12, 32), S(-1, 13), S(14, 12), S(21, 6), S(4, -26), S(-15, -51), }},
  {{ S(3, 3), S(-36, -27), S(-25, -15), S(-16, 5), S(-13, 7), S(-14, -55), S(-44, -87), }},
  {{ S(-1, 21), S(-18, -7), S(-17, 36), S(-6, 35), S(-2, 33), S(-13, -14), S(-10, -117), }},
  {{ S(13, 46), S(-10, 31), S(-6, 64), S(5, 68), S(0, 61), S(2, 64), S(49, -50), }},
}};
inline const std::array<PParam, 7> BLOCKED_SHELTER_STORM = {
    S(0, 0), S(0, 0), S(31, 26), S(-2, 8), S(-9, 12), S(-7, 25), S(12, 46),
};
inline const std::array<std::array<PParam, 7>, 4> SHELTER_STORM = {{
  {{ S(11, 20), S(-60, -69), S(-26, -19), S(-1, 6), S(-0, 10), S(-2, 9), S(-4, 11), }},
  {{ S(14, 18), S(-22, -97), S(-11, -32), S(-4, 11), S(-6, 17), S(-14, 11), S(-1, 14), }},
  {{ S(1, 10), S(-18, -34), S(8, -4), S(3, 19), S(-6, 8), S(-13, 22), S(-9, 15), }},
  {{ S(3, 7), S(-18, -59), S(-2, 115), S(-3, 67), S(-8, 14), S(-19, 5), S(-17, 17), }},
}};
inline TunableSigmoid<32> KING_SAFETY_ACTIVATION(
        737, 714, -23, 16
);

inline VParam WINNABLE_PAWNS = V(-7);
inline VParam WINNABLE_SYM = V(52);
inline VParam WINNABLE_ASYM = V(39);
inline VParam WINNABLE_PAWN_ENDGAME = V(167);
inline VParam WINNABLE_BIAS = V(-189);

// Epoch duration: 1.5929s
// clang-format on
}  // namespace Clockwork
