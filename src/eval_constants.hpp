#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(215, 457);
inline const PParam KNIGHT_MAT = S(884, 1297);
inline const PParam BISHOP_MAT = S(932, 1305);
inline const PParam ROOK_MAT   = S(1127, 1885);
inline const PParam QUEEN_MAT  = S(2669, 2560);

inline const PParam TEMPO_VAL  = S(57, 59);

inline const PParam BISHOP_XRAY_PAWNS   = S(-15, -0);
inline const PParam BISHOP_PAIR_VAL   = S(68, 209);
inline const PParam ROOK_OPEN_VAL     = S(102, 7);
inline const PParam ROOK_SEMIOPEN_VAL = S(41, 24);
inline const PParam MINOR_BEHIND_PAWN = S(14, 43);
inline const PParam RESTRICTED_SQUARES = S(15, 9);

inline const PParam DOUBLED_PAWN_VAL = S(-29, -81);
inline const PParam ISOLATED_PAWN_VAL = S(-20, -39);

inline const PParam POTENTIAL_CHECKER_VAL = S(-35, -42);
inline const PParam OUTPOST_KNIGHT_VAL    = S(57, 39);
inline const PParam OUTPOST_BISHOP_VAL    = S(62, 14);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(34, 47);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(36, 4);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(19, 54);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(43, -10);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(18, -9), S(36, 26), S(58, 60), S(104, 224), S(459, 419), S(310, 578),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(46, 29), S(36, 21), S(64, 48), S(117, 159), S(416, 224),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-81, -244), S(-78, -206), S(-50, -90), S(-5, 28), S(35, 256), S(209, 412),
};
inline const std::array<PParam, 6> PASSED_CLEAR_STOPPERS = {
    S(-138, 41), S(-65, 3), S(-158, 122), S(-169, 220), S(-120, 319), S(74, 268),
};
inline const std::array<PParam, 6> PASSED_CLEAR_FORWARD = {
    S(-51, 67), S(-69, 62), S(-108, 105), S(-28, 119), S(153, 117), S(42, 241),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(25, -48), S(29, -16), S(19, 23), S(19, 98), S(101, 245), S(237, 219),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(6, -36), S(-6, 3), S(-8, -28), S(13, -72), S(9, -202), S(-168, -474),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(8, 228), S(-7, 163), S(-6, 95), S(2, 64), S(21, 75), S(63, 79), S(39, 71),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-172, 11), S(-10, 27), S(2, 102), S(23, 146), S(35, 178), S(43, 187), S(23, 176),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(-80, -248), S(-19, -34), S(19, 81), S(45, 124), S(70, 158), S(84, 188), S(101, 196), S(115, 200), S(135, 170),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-24, -36), S(17, 60), S(63, 107), S(72, 170), S(98, 203), S(109, 228), S(114, 249), S(119, 262), S(118, 277), S(123, 284), S(130, 276), S(163, 267), S(130, 283), S(157, 260),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(113, 78), S(30, 230), S(48, 269), S(59, 287), S(69, 311), S(73, 322), S(77, 333), S(82, 340), S(87, 350), S(96, 354), S(99, 359), S(100, 365), S(102, 364), S(109, 356), S(124, 342),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(-21, 7), S(63, 266), S(106, 449), S(147, 530), S(157, 607), S(162, 659), S(168, 670), S(172, 692), S(178, 707), S(181, 719), S(182, 738), S(188, 750), S(189, 751), S(190, 761), S(191, 758), S(186, 766), S(183, 765), S(176, 764), S(185, 749), S(195, 742), S(204, 721), S(215, 688), S(260, 620), S(259, 615), S(332, 519), S(362, 469), S(346, 418), S(281, 289),
};

inline const PParam PAWN_THREAT_KNIGHT = S(172, 156);
inline const PParam PAWN_THREAT_BISHOP = S(149, 229);
inline const PParam PAWN_THREAT_ROOK   = S(148, 158);
inline const PParam PAWN_THREAT_QUEEN  = S(139, 44);

inline const std::array<PParam, 6> MINOR_THREAT = {
    S(12, 51), S(75, 103), S(104, 108), S(179, 105), S(128, 86), S(0, 0),
};
inline const std::array<PParam, 6> ROOK_THREAT = {
    S(11, 58), S(51, 101), S(69, 98), S(19, 17), S(113, 35), S(0, 0),
};
inline const PParam KING_THREAT  = S(-1, 142);
inline const PParam HANGING_PAWN  = S(37, 97);
inline const PParam HANGING_NON_PAWN  = S(52, 39);

inline const std::array<PParam, 2> KNIGHT_ON_QUEEN = {
    S(21, -5), S(106, -77),
};
inline const std::array<PParam, 2> BISHOP_ON_QUEEN = {
    S(29, 80), S(219, -204),
};
inline const std::array<PParam, 2> ROOK_ON_QUEEN = {
    S(38, 11), S(165, -150),
};

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(5, -9), S(3, -11), S(0, -21), S(-4, -32), S(-9, -40), S(-13, -56), S(-16, -62), S(-20, -79), S(-25, -95),
};

inline const PParam ROOK_LINEUP = S(24, 70);

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(160, 332),    S(-27, 384),    S(76, 351),     S(177, 228),    S(194, 178),    S(139, 214),    S(93, 270),     S(228, 243),    //
    S(55, 102),     S(12, 118),     S(50, 48),      S(76, -25),     S(72, -62),     S(27, -27),     S(11, 40),      S(19, 58),      //
    S(29, 35),      S(1, 23),       S(49, -23),     S(61, -63),     S(43, -72),     S(4, -46),      S(-24, -17),    S(-17, 19),     //
    S(-9, -23),     S(-22, -13),    S(32, -46),     S(33, -63),     S(11, -74),     S(-14, -56),    S(-64, -29),    S(-56, -25),    //
    S(-11, -52),    S(34, -64),     S(23, -17),     S(18, -30),     S(-11, -39),    S(-26, -47),    S(-62, -39),    S(-62, -45),    //
    S(15, -51),     S(88, -45),     S(96, -20),     S(40, 11),      S(18, -27),     S(-7, -22),     S(-28, -22),    S(-45, -19),    //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-312, -313),  S(-143, 81),    S(-327, 111),   S(170, 11),     S(1, 77),       S(-285, 127),   S(-182, 98),    S(-432, -255),  //
    S(21, 23),      S(34, 54),      S(97, 38),      S(99, 97),      S(120, 99),     S(71, 65),      S(23, 44),      S(-4, 54),      //
    S(61, 9),       S(50, 35),      S(83, 83),      S(91, 109),     S(77, 105),     S(46, 101),     S(40, 55),      S(-2, 42),      //
    S(117, 48),     S(88, 89),      S(89, 108),     S(92, 148),     S(93, 139),     S(73, 123),     S(67, 73),      S(80, 59),      //
    S(81, 54),      S(96, 43),      S(108, 79),     S(81, 126),     S(81, 110),     S(87, 95),      S(62, 65),      S(50, 49),      //
    S(18, 4),       S(60, 20),      S(59, 44),      S(81, 78),      S(69, 83),      S(41, 49),      S(28, 44),      S(-4, -3),      //
    S(37, 8),       S(40, 24),      S(31, 18),      S(41, 48),      S(39, 44),      S(23, -8),      S(-8, 20),      S(-26, -50),    //
    S(-43, -29),    S(9, 20),       S(23, 4),       S(63, 30),      S(37, 36),      S(-17, -6),     S(-5, 10),      S(-65, -49),    //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-75, 86),     S(-135, 151),   S(-363, 236),   S(-217, 167),   S(-231, 195),   S(-227, 185),   S(-136, 164),   S(-124, 136),   //
    S(-29, 75),     S(-121, 184),   S(-23, 137),    S(-28, 157),    S(-18, 136),    S(-11, 128),    S(-16, 100),    S(-22, 94),     //
    S(60, 88),      S(35, 117),     S(64, 149),     S(50, 138),     S(42, 130),     S(5, 136),      S(31, 106),     S(15, 103),     //
    S(40, 72),      S(60, 96),      S(62, 114),     S(62, 138),     S(85, 131),     S(59, 91),      S(54, 89),      S(23, 74),      //
    S(65, 45),      S(52, 58),      S(80, 88),      S(93, 103),     S(79, 114),     S(77, 102),     S(36, 93),      S(37, 44),      //
    S(73, 50),      S(89, 47),      S(96, 71),      S(74, 109),     S(74, 93),      S(68, 104),     S(93, 65),      S(52, 45),      //
    S(65, 14),      S(123, 22),     S(90, 43),      S(57, 76),      S(36, 81),      S(82, 31),      S(74, 31),      S(83, -4),      //
    S(97, -11),     S(24, 58),      S(12, 84),      S(45, 62),      S(26, 60),      S(37, 90),      S(93, -5),      S(84, 20),      //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(190, 237),    S(205, 248),    S(159, 252),    S(129, 241),    S(135, 251),    S(152, 250),    S(206, 241),    S(159, 259),    //
    S(145, 219),    S(82, 268),     S(185, 201),    S(142, 203),    S(183, 205),    S(135, 226),    S(67, 264),     S(106, 247),    //
    S(64, 247),     S(151, 220),    S(196, 171),    S(170, 162),    S(154, 188),    S(117, 223),    S(116, 241),    S(69, 276),     //
    S(20, 221),     S(62, 231),     S(100, 195),    S(52, 219),     S(101, 194),    S(71, 238),     S(61, 252),     S(43, 265),     //
    S(-11, 168),    S(46, 191),     S(34, 196),     S(9, 195),      S(36, 200),     S(17, 230),     S(19, 225),     S(-4, 224),     //
    S(4, 110),      S(68, 110),     S(52, 133),     S(41, 146),     S(47, 163),     S(24, 188),     S(58, 154),     S(0, 162),      //
    S(-84, 119),    S(34, 77),      S(74, 79),      S(64, 105),     S(69, 114),     S(48, 146),     S(33, 114),     S(19, 108),     //
    S(2, 56),       S(-43, 141),    S(69, 97),      S(98, 73),      S(82, 109),     S(67, 130),     S(70, 109),     S(52, 118),     //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(169, 290),    S(257, 291),    S(241, 341),    S(185, 439),    S(182, 434),    S(198, 357),    S(149, 349),    S(9, 447),      //
    S(122, 410),    S(90, 486),     S(152, 413),    S(16, 539),     S(72, 516),     S(116, 423),    S(98, 370),     S(68, 380),     //
    S(106, 396),    S(172, 408),    S(108, 465),    S(127, 417),    S(95, 485),     S(130, 424),    S(167, 303),    S(137, 291),    //
    S(131, 267),    S(96, 389),     S(110, 375),    S(65, 459),     S(75, 512),     S(125, 353),    S(143, 332),    S(125, 282),    //
    S(114, 279),    S(83, 306),     S(93, 293),     S(35, 431),     S(58, 456),     S(86, 421),     S(89, 349),     S(113, 279),    //
    S(108, 193),    S(116, 208),    S(110, 254),    S(93, 269),     S(93, 327),     S(95, 375),     S(115, 323),    S(101, 272),    //
    S(88, 6),       S(95, 26),      S(104, 115),    S(116, 162),    S(111, 206),    S(114, 221),    S(95, 209),     S(117, 183),    //
    S(93, 12),      S(14, -39),     S(26, 48),      S(92, 63),      S(99, 163),     S(97, 127),     S(104, 127),    S(96, 149),     //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(39, -150),    S(99, 143),     S(11, 146),     S(-61, 148),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(100, 22),     S(59, 208),     S(8, 238),      S(-53, 228),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(62, 60),      S(83, 185),     S(27, 218),     S(-104, 250),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-31, 27),     S(29, 125),     S(-57, 180),    S(-126, 201),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-155, -12),   S(-12, 43),     S(-137, 123),   S(-213, 167),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-34, -59),    S(2, 8),        S(-115, 92),    S(-180, 139),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(61, -137),    S(38, -44),     S(-43, 23),     S(-132, 81),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(37, -245),    S(49, -139),    S(-75, -39),    S(-25, -101),   S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

inline const PParam KS_NO_QUEEN = S(-104, -435);

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(7, 3), S(12, 21), S(13, 10), S(5, 5), S(-0, -2),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(4, -7), S(7, 7), S(4, 1), S(5, -2), S(3, 2),
};

inline const PParam KS_FLANK_ATTACK = S(5, -3);
inline const PParam KS_FLANK_DEFENSE = S(-5, -3);
inline const PParam KS_FLANK_DOUBLE_ATTACK   = S(6, -2);
inline const PParam KS_FLANK_DOUBLE_DEFENSE  = S(-3, -1);

inline const std::array<std::array<PParam, 7>, 4> KING_SHELTER = {{
  {{ S(22, 14), S(-17, 38), S(-9, 17), S(10, 14), S(18, -1), S(13, -39), S(-8, -104), }},
  {{ S(5, -5), S(-31, -22), S(-22, -13), S(-11, 4), S(-11, 3), S(-18, -46), S(-32, -88), }},
  {{ S(-3, 18), S(-12, -2), S(-13, 37), S(-4, 35), S(-6, 22), S(-18, 10), S(-25, -124), }},
  {{ S(5, 45), S(-15, 46), S(-12, 100), S(-4, 88), S(-1, 70), S(5, 44), S(10, -29), }},
}};
inline const std::array<PParam, 7> BLOCKED_SHELTER_STORM = {
    S(0, 0), S(0, 0), S(17, 31), S(-7, 12), S(-10, 20), S(-9, 40), S(7, 58),
};
inline const std::array<std::array<PParam, 7>, 4> SHELTER_STORM = {{
  {{ S(17, 27), S(-65, -124), S(-8, -26), S(16, -1), S(5, 14), S(-2, 19), S(-1, 19), }},
  {{ S(19, 8), S(-21, -109), S(-13, -31), S(0, 6), S(7, 3), S(-15, 9), S(3, 7), }},
  {{ S(3, 13), S(-10, -94), S(8, 14), S(6, 7), S(-3, 13), S(-13, 25), S(-9, 24), }},
  {{ S(7, 0), S(4, -32), S(4, 75), S(-7, 133), S(-8, 27), S(-19, 12), S(-21, 22), }},
}};
inline TunableSigmoid<32> KING_SAFETY_ACTIVATION(
        784, 727, -20, 19
);

inline VParam WINNABLE_PAWNS = V(-19);
inline VParam WINNABLE_SYM = V(75);
inline VParam WINNABLE_ASYM = V(58);
inline VParam WINNABLE_PAWN_ENDGAME = V(141);
inline VParam WINNABLE_BIAS = V(-217);

// Epoch duration: 1.33754s
// clang-format on
}  // namespace Clockwork
