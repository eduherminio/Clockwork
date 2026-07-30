#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(228, 409);
inline const PParam KNIGHT_MAT = S(953, 1226);
inline const PParam BISHOP_MAT = S(968, 1211);
inline const PParam ROOK_MAT   = S(1182, 1746);
inline const PParam QUEEN_MAT  = S(2538, 2532);

inline const PParam TEMPO_VAL  = S(77, 45);

inline const PParam BISHOP_XRAY_PAWNS   = S(-17, -1);
inline const PParam BISHOP_PAIR_VAL   = S(73, 213);
inline const PParam ROOK_OPEN_VAL     = S(129, -9);
inline const PParam ROOK_SEMIOPEN_VAL = S(52, 10);
inline const PParam MINOR_BEHIND_PAWN = S(18, 41);
inline const PParam RESTRICTED_SQUARES = S(20, 8);

inline const PParam DOUBLED_PAWN_VAL = S(-27, -76);
inline const PParam ISOLATED_PAWN_VAL = S(-14, -37);

inline const PParam POTENTIAL_CHECKER_VAL = S(-55, -29);
inline const PParam OUTPOST_KNIGHT_VAL    = S(61, 40);
inline const PParam OUTPOST_BISHOP_VAL    = S(50, 33);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(40, 43);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(45, -2);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(22, 61);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(66, -48);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(12, -8), S(37, 25), S(70, 55), S(142, 182), S(454, 340), S(348, 404),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(50, 25), S(42, 19), S(65, 49), S(119, 161), S(485, 90),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-96, -221), S(-93, -189), S(-59, -75), S(-10, 37), S(75, 221), S(237, 393),
};
inline const std::array<PParam, 6> PASSED_CLEAR_STOPPERS = {
    S(-87, 45), S(-112, 51), S(-66, 108), S(-121, 218), S(-135, 333), S(26, 196),
};
inline const std::array<PParam, 6> PASSED_CLEAR_FORWARD = {
    S(-21, 64), S(-23, 52), S(-61, 100), S(-31, 123), S(78, 135), S(46, 160),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(30, -48), S(23, -8), S(11, 36), S(20, 92), S(73, 255), S(283, 240),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(3, -25), S(-7, 17), S(-13, -22), S(-11, -53), S(-2, -168), S(-192, -400),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(26, 209), S(-0, 165), S(-8, 96), S(12, 53), S(37, 49), S(85, 39), S(76, 17),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-149, -25), S(31, -8), S(5, 93), S(37, 127), S(42, 166), S(57, 170), S(32, 160),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-110, -229), S(-25, -36), S(15, 75), S(41, 117), S(69, 145), S(86, 174), S(107, 176), S(126, 180), S(146, 131),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-27, 13), S(18, 80), S(72, 106), S(89, 160), S(116, 193), S(130, 218), S(139, 236), S(141, 253), S(146, 256), S(155, 256), S(169, 241), S(192, 219), S(209, 193), S(147, 175),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(160, 24), S(41, 220), S(60, 252), S(77, 266), S(91, 281), S(95, 291), S(101, 306), S(107, 309), S(112, 317), S(120, 322), S(127, 323), S(127, 328), S(129, 330), S(134, 317), S(159, 271),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-2, -5), S(152, 256), S(199, 369), S(231, 493), S(252, 515), S(256, 569), S(261, 603), S(267, 615), S(272, 638), S(275, 652), S(279, 664), S(286, 665), S(286, 676), S(293, 671), S(291, 679), S(293, 675), S(287, 679), S(294, 661), S(291, 665), S(311, 640), S(318, 613), S(339, 581), S(322, 593), S(298, 571), S(287, 557), S(253, 596), S(318, 500), S(333, 431),
};

inline const PParam PAWN_THREAT_KNIGHT = S(220, 131);
inline const PParam PAWN_THREAT_BISHOP = S(186, 199);
inline const PParam PAWN_THREAT_ROOK   = S(213, 126);
inline const PParam PAWN_THREAT_QUEEN  = S(175, 2);

inline const std::array<PParam, 6> MINOR_THREAT = {
    S(7, 48), S(98, 77), S(109, 108), S(225, 98), S(190, -23), S(0, 0),
};
inline const std::array<PParam, 6> ROOK_THREAT = {
    S(4, 53), S(59, 85), S(88, 74), S(9, 31), S(177, -77), S(0, 0),
};
inline const PParam KING_THREAT  = S(-23, 157);
inline const PParam HANGING_PAWN  = S(31, 85);
inline const PParam HANGING_NON_PAWN  = S(71, 25);

inline const std::array<PParam, 2> KNIGHT_ON_QUEEN = {
    S(24, -21), S(101, -80),
};
inline const std::array<PParam, 2> BISHOP_ON_QUEEN = {
    S(52, 25), S(152, -125),
};
inline const std::array<PParam, 2> ROOK_ON_QUEEN = {
    S(42, 6), S(102, -85),
};

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(1, -13), S(2, -10), S(-1, -16), S(-6, -25), S(-13, -31), S(-19, -35), S(-21, -45), S(-27, -45), S(-7, -108),
};

inline const PParam ROOK_LINEUP = S(20, 82);

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(199, 244),    S(1, 382),      S(107, 338),    S(169, 252),    S(224, 166),    S(153, 226),    S(98, 261),     S(284, 192),    //
    S(84, 52),      S(77, 74),      S(70, 32),      S(75, -31),     S(55, -46),     S(34, -14),     S(25, 35),      S(1, 77),       //
    S(44, 9),       S(13, 12),      S(58, -39),     S(42, -52),     S(16, -56),     S(-13, -37),    S(-50, -1),     S(-52, 43),     //
    S(-0, -45),     S(-31, -25),    S(8, -43),      S(3, -49),      S(-25, -54),    S(-54, -29),    S(-100, -8),    S(-97, -5),     //
    S(1, -84),      S(34, -85),     S(17, -21),     S(-4, -19),     S(-32, -26),    S(-62, -19),    S(-99, -17),    S(-103, -21),   //
    S(27, -81),     S(107, -74),    S(83, -15),     S(26, 31),      S(-7, -11),     S(-28, -13),    S(-56, -7),     S(-76, -4),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-298, -388),  S(-147, 37),    S(-300, 118),   S(168, -18),    S(-59, 73),     S(-289, 154),   S(-237, 92),    S(-418, -271),  //
    S(39, 16),      S(30, 41),      S(128, 25),     S(100, 97),     S(123, 68),     S(70, 51),      S(-11, 57),     S(-3, 48),      //
    S(92, -20),     S(63, 40),      S(105, 45),     S(98, 89),      S(95, 79),      S(25, 97),      S(4, 72),       S(-58, 63),     //
    S(137, 51),     S(113, 62),     S(113, 85),     S(119, 123),    S(116, 122),    S(81, 98),      S(58, 62),      S(47, 85),      //
    S(85, 50),      S(115, 21),     S(119, 66),     S(89, 113),     S(90, 104),     S(72, 105),     S(75, 30),      S(19, 67),      //
    S(21, -9),      S(61, 8),       S(57, 47),      S(78, 83),      S(62, 89),      S(31, 55),      S(16, 45),      S(-37, 16),     //
    S(38, 23),      S(28, 56),      S(32, 8),       S(31, 54),      S(26, 51),      S(3, 5),        S(-48, 49),     S(-46, -48),    //
    S(-12, 19),     S(-1, 24),      S(31, -3),      S(43, 18),      S(20, 35),      S(-54, 10),     S(-39, 50),     S(-128, -39),   //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-68, 30),     S(-138, 142),   S(-417, 268),   S(-189, 134),   S(-223, 180),   S(-174, 157),   S(-94, 145),    S(-116, 148),   //
    S(-25, 61),     S(-91, 170),    S(4, 119),      S(-22, 145),    S(-29, 147),    S(-6, 110),     S(-9, 122),     S(-21, 99),     //
    S(86, 76),      S(60, 105),     S(64, 129),     S(61, 122),     S(65, 99),      S(21, 143),     S(35, 121),     S(61, 68),      //
    S(37, 71),      S(89, 86),      S(111, 92),     S(110, 124),    S(125, 121),    S(78, 107),     S(69, 91),      S(19, 91),      //
    S(76, 39),      S(58, 86),      S(104, 82),     S(124, 98),     S(111, 114),    S(97, 102),     S(36, 102),     S(52, 48),      //
    S(86, 49),      S(114, 38),     S(125, 63),     S(95, 103),     S(93, 94),      S(85, 103),     S(102, 72),     S(55, 53),      //
    S(64, -12),     S(142, 23),     S(90, 60),      S(60, 92),      S(44, 91),      S(96, 26),      S(78, 42),      S(74, 22),      //
    S(92, -1),      S(52, 83),      S(27, 85),      S(65, 56),      S(47, 45),      S(50, 87),      S(81, 22),      S(69, 42),      //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(212, 237),    S(254, 232),    S(185, 255),    S(172, 227),    S(237, 197),    S(172, 238),    S(214, 244),    S(186, 249),    //
    S(168, 259),    S(159, 275),    S(258, 193),    S(199, 205),    S(239, 210),    S(177, 234),    S(106, 283),    S(107, 291),    //
    S(125, 240),    S(229, 190),    S(286, 143),    S(232, 130),    S(212, 182),    S(135, 228),    S(133, 240),    S(90, 288),     //
    S(87, 196),     S(127, 208),    S(161, 170),    S(110, 183),    S(136, 187),    S(107, 231),    S(83, 259),     S(26, 283),     //
    S(16, 166),     S(93, 164),     S(76, 178),     S(32, 199),     S(43, 206),     S(40, 224),     S(26, 240),     S(-12, 250),    //
    S(17, 100),     S(106, 107),    S(88, 124),     S(62, 139),     S(65, 165),     S(52, 182),     S(44, 178),     S(-11, 188),    //
    S(-65, 107),    S(82, 46),      S(79, 85),      S(65, 122),     S(75, 120),     S(50, 139),     S(33, 139),     S(9, 128),      //
    S(-12, 75),     S(-30, 142),    S(87, 92),      S(94, 92),      S(92, 108),     S(65, 142),     S(71, 121),     S(54, 128),     //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(200, 324),    S(348, 234),    S(241, 356),    S(212, 395),    S(222, 423),    S(267, 334),    S(186, 327),    S(88, 395),     //
    S(204, 323),    S(197, 364),    S(203, 383),    S(55, 504),     S(111, 507),    S(140, 410),    S(163, 337),    S(126, 352),    //
    S(183, 303),    S(249, 323),    S(166, 429),    S(159, 417),    S(160, 457),    S(187, 394),    S(238, 284),    S(196, 241),    //
    S(178, 255),    S(162, 343),    S(147, 364),    S(105, 459),    S(124, 477),    S(146, 376),    S(181, 311),    S(164, 283),    //
    S(145, 269),    S(153, 237),    S(137, 294),    S(100, 386),    S(97, 450),     S(133, 369),    S(125, 327),    S(145, 266),    //
    S(147, 182),    S(169, 156),    S(155, 247),    S(124, 289),    S(133, 307),    S(125, 366),    S(141, 321),    S(138, 266),    //
    S(74, 67),      S(132, 32),     S(128, 118),    S(145, 178),    S(137, 228),    S(139, 221),    S(116, 235),    S(149, 191),    //
    S(81, 100),     S(36, -37),     S(78, -8),      S(106, 82),     S(134, 145),    S(134, 104),    S(131, 127),    S(105, 186),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(24, -275),    S(499, 85),     S(477, 130),    S(39, 191),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(235, -79),    S(313, 198),    S(238, 183),    S(2, 163),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(149, 60),     S(174, 191),    S(93, 183),     S(-138, 219),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-55, 60),     S(55, 117),     S(-72, 176),    S(-169, 206),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-151, 28),    S(-84, 90),     S(-165, 155),   S(-235, 204),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-65, -21),    S(-14, 33),     S(-124, 120),   S(-184, 174),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(42, -109),    S(41, -36),     S(-38, 31),     S(-120, 98),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(4, -203),     S(25, -109),    S(-87, -28),    S(-40, -76),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

inline const PParam KS_NO_QUEEN = S(-72, -404);

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(6, 4), S(15, 19), S(15, 12), S(5, 7), S(2, -4),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(4, -4), S(7, 7), S(3, 4), S(4, 2), S(5, 0),
};

inline const PParam KS_FLANK_ATTACK = S(5, -2);
inline const PParam KS_FLANK_DEFENSE = S(-7, -1);
inline const PParam KS_FLANK_DOUBLE_ATTACK   = S(5, -1);
inline const PParam KS_FLANK_DOUBLE_DEFENSE  = S(-4, -0);

inline const std::array<std::array<PParam, 7>, 4> KING_SHELTER = {{
  {{ S(33, -5), S(-3, 13), S(2, -4), S(19, -6), S(24, -18), S(9, -39), S(-18, -53), }},
  {{ S(6, 9), S(-32, -5), S(-22, 2), S(-13, 15), S(-12, 16), S(-25, -4), S(-40, -33), }},
  {{ S(6, 6), S(-8, -8), S(-10, 27), S(-0, 24), S(0, 13), S(-9, -5), S(-9, -93), }},
  {{ S(20, 11), S(-6, 21), S(-1, 47), S(6, 49), S(3, 50), S(7, 26), S(24, -19), }},
}};
inline const std::array<PParam, 7> BLOCKED_SHELTER_STORM = {
    S(0, 0), S(0, 0), S(30, 20), S(0, 1), S(-4, 10), S(-0, 30), S(17, 44),
};
inline const std::array<std::array<PParam, 7>, 4> SHELTER_STORM = {{
  {{ S(17, 17), S(-83, -120), S(-15, -44), S(12, -4), S(1, 7), S(-3, 12), S(-3, 9), }},
  {{ S(22, 2), S(-26, -106), S(-6, -38), S(2, 0), S(3, -2), S(-10, 2), S(6, 3), }},
  {{ S(10, 10), S(-9, -81), S(9, 5), S(11, 6), S(1, 13), S(-9, 22), S(-1, 20), }},
  {{ S(10, 3), S(-3, -17), S(3, 59), S(-2, 49), S(-7, 20), S(-17, 16), S(-19, 23), }},
}};
inline TunableSigmoid<32> KING_SAFETY_ACTIVATION(
        779, 743, -8, 6
);

inline VParam WINNABLE_PAWNS = V(-19);
inline VParam WINNABLE_SYM = V(88);
inline VParam WINNABLE_ASYM = V(78);
inline VParam WINNABLE_PAWN_ENDGAME = V(42);
inline VParam WINNABLE_BIAS = V(-264);

// Epoch duration: 1.33121s
// clang-format on
}  // namespace Clockwork
