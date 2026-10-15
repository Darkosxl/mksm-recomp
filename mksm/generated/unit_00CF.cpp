#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00CF[4096] = {
    1, 2, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0,
    0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0,
    0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117,
    0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0,
    0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0,
    0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0,
    0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 378,
    0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    389, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0,
    0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0,
    0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    449, 0, 0, 0, 0, 450, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    454, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0,
    0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0,
    0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 476,
    0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0,
    0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494,
    0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0,
    0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 514,
    0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 524, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0,
    0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0,
    0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 0,
    0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 0,
    559, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0,
    0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0,
};

void unit_00CF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0043C000;
    case 2u: goto L_0043C004;
    case 3u: goto L_0043C014;
    case 4u: goto L_0043C020;
    case 5u: goto L_0043C028;
    case 6u: goto L_0043C030;
    case 7u: goto L_0043C044;
    case 8u: goto L_0043C068;
    case 9u: goto L_0043C078;
    case 10u: goto L_0043C088;
    case 11u: goto L_0043C0A0;
    case 12u: goto L_0043C0CC;
    case 13u: goto L_0043C0DC;
    case 14u: goto L_0043C0F8;
    case 15u: goto L_0043C128;
    case 16u: goto L_0043C170;
    case 17u: goto L_0043C1A4;
    case 18u: goto L_0043C1C0;
    case 19u: goto L_0043C208;
    case 20u: goto L_0043C234;
    case 21u: goto L_0043C264;
    case 22u: goto L_0043C278;
    case 23u: goto L_0043C288;
    case 24u: goto L_0043C29C;
    case 25u: goto L_0043C310;
    case 26u: goto L_0043C320;
    case 27u: goto L_0043C334;
    case 28u: goto L_0043C3A0;
    case 29u: goto L_0043C3D8;
    case 30u: goto L_0043C438;
    case 31u: goto L_0043C468;
    case 32u: goto L_0043C4A8;
    case 33u: goto L_0043C4FC;
    case 34u: goto L_0043C510;
    case 35u: goto L_0043C578;
    case 36u: goto L_0043C580;
    case 37u: goto L_0043C59C;
    case 38u: goto L_0043C5C8;
    case 39u: goto L_0043C610;
    case 40u: goto L_0043C660;
    case 41u: goto L_0043C690;
    case 42u: goto L_0043C6A8;
    case 43u: goto L_0043C6C8;
    case 44u: goto L_0043C710;
    case 45u: goto L_0043C71C;
    case 46u: goto L_0043C730;
    case 47u: goto L_0043C760;
    case 48u: goto L_0043C774;
    case 49u: goto L_0043C78C;
    case 50u: goto L_0043C7A0;
    case 51u: goto L_0043C7D0;
    case 52u: goto L_0043C7E8;
    case 53u: goto L_0043C7F8;
    case 54u: goto L_0043C818;
    case 55u: goto L_0043C820;
    case 56u: goto L_0043C834;
    case 57u: goto L_0043C868;
    case 58u: goto L_0043C870;
    case 59u: goto L_0043C878;
    case 60u: goto L_0043C880;
    case 61u: goto L_0043C890;
    case 62u: goto L_0043C8B8;
    case 63u: goto L_0043C8F8;
    case 64u: goto L_0043C924;
    case 65u: goto L_0043C948;
    case 66u: goto L_0043C990;
    case 67u: goto L_0043C9A8;
    case 68u: goto L_0043C9CC;
    case 69u: goto L_0043C9E0;
    case 70u: goto L_0043C9EC;
    case 71u: goto L_0043C9F8;
    case 72u: goto L_0043CA6C;
    case 73u: goto L_0043CA90;
    case 74u: goto L_0043CAB0;
    case 75u: goto L_0043CADC;
    case 76u: goto L_0043CB10;
    case 77u: goto L_0043CB18;
    case 78u: goto L_0043CB28;
    case 79u: goto L_0043CB40;
    case 80u: goto L_0043CB68;
    case 81u: goto L_0043CB7C;
    case 82u: goto L_0043CBD8;
    case 83u: goto L_0043CBE0;
    case 84u: goto L_0043CC04;
    case 85u: goto L_0043CC0C;
    case 86u: goto L_0043CC14;
    case 87u: goto L_0043CC1C;
    case 88u: goto L_0043CC24;
    case 89u: goto L_0043CC34;
    case 90u: goto L_0043CC40;
    case 91u: goto L_0043CC48;
    case 92u: goto L_0043CC80;
    case 93u: goto L_0043CC94;
    case 94u: goto L_0043CCA8;
    case 95u: goto L_0043CCB0;
    case 96u: goto L_0043CCC0;
    case 97u: goto L_0043CCC8;
    case 98u: goto L_0043CCD0;
    case 99u: goto L_0043CCF8;
    case 100u: goto L_0043CD1C;
    case 101u: goto L_0043CD34;
    case 102u: goto L_0043CD4C;
    case 103u: goto L_0043CD58;
    case 104u: goto L_0043CD70;
    case 105u: goto L_0043CD84;
    case 106u: goto L_0043CD8C;
    case 107u: goto L_0043CE00;
    case 108u: goto L_0043CE10;
    case 109u: goto L_0043CE20;
    case 110u: goto L_0043CE30;
    case 111u: goto L_0043CE40;
    case 112u: goto L_0043CE60;
    case 113u: goto L_0043CE78;
    case 114u: goto L_0043CE98;
    case 115u: goto L_0043CEC8;
    case 116u: goto L_0043CEE0;
    case 117u: goto L_0043CEFC;
    case 118u: goto L_0043CF04;
    case 119u: goto L_0043CF10;
    case 120u: goto L_0043CF18;
    case 121u: goto L_0043CF20;
    case 122u: goto L_0043CF28;
    case 123u: goto L_0043CF30;
    case 124u: goto L_0043CF38;
    case 125u: goto L_0043CF40;
    case 126u: goto L_0043CF48;
    case 127u: goto L_0043CF50;
    case 128u: goto L_0043CF58;
    case 129u: goto L_0043CF60;
    case 130u: goto L_0043CF68;
    case 131u: goto L_0043CF70;
    case 132u: goto L_0043CF78;
    case 133u: goto L_0043CFB8;
    case 134u: goto L_0043CFCC;
    case 135u: goto L_0043CFE8;
    case 136u: goto L_0043D01C;
    case 137u: goto L_0043D034;
    case 138u: goto L_0043D048;
    case 139u: goto L_0043D058;
    case 140u: goto L_0043D070;
    case 141u: goto L_0043D080;
    case 142u: goto L_0043D090;
    case 143u: goto L_0043D0A0;
    case 144u: goto L_0043D0B0;
    case 145u: goto L_0043D0E4;
    case 146u: goto L_0043D250;
    case 147u: goto L_0043D260;
    case 148u: goto L_0043D278;
    case 149u: goto L_0043D2A4;
    case 150u: goto L_0043D2C4;
    case 151u: goto L_0043D2E8;
    case 152u: goto L_0043D304;
    case 153u: goto L_0043D324;
    case 154u: goto L_0043D360;
    case 155u: goto L_0043D370;
    case 156u: goto L_0043D380;
    case 157u: goto L_0043D38C;
    case 158u: goto L_0043D3A0;
    case 159u: goto L_0043D3B0;
    case 160u: goto L_0043D3C0;
    case 161u: goto L_0043D3CC;
    case 162u: goto L_0043D3E0;
    case 163u: goto L_0043D3F0;
    case 164u: goto L_0043D40C;
    case 165u: goto L_0043D420;
    case 166u: goto L_0043D448;
    case 167u: goto L_0043D450;
    case 168u: goto L_0043D458;
    case 169u: goto L_0043D488;
    case 170u: goto L_0043D490;
    case 171u: goto L_0043D498;
    case 172u: goto L_0043D4A0;
    case 173u: goto L_0043D4AC;
    case 174u: goto L_0043D4B8;
    case 175u: goto L_0043D4C0;
    case 176u: goto L_0043D4E8;
    case 177u: goto L_0043D4F8;
    case 178u: goto L_0043D510;
    case 179u: goto L_0043D52C;
    case 180u: goto L_0043D598;
    case 181u: goto L_0043D5CC;
    case 182u: goto L_0043D5D4;
    case 183u: goto L_0043D5E0;
    case 184u: goto L_0043D5F0;
    case 185u: goto L_0043D630;
    case 186u: goto L_0043D658;
    case 187u: goto L_0043D668;
    case 188u: goto L_0043D678;
    case 189u: goto L_0043D684;
    case 190u: goto L_0043D690;
    case 191u: goto L_0043D6A8;
    case 192u: goto L_0043D6D8;
    case 193u: goto L_0043D6F0;
    case 194u: goto L_0043D704;
    case 195u: goto L_0043D730;
    case 196u: goto L_0043D73C;
    case 197u: goto L_0043D758;
    case 198u: goto L_0043D77C;
    case 199u: goto L_0043D794;
    case 200u: goto L_0043D7BC;
    case 201u: goto L_0043D7DC;
    case 202u: goto L_0043D7F4;
    case 203u: goto L_0043D808;
    case 204u: goto L_0043D814;
    case 205u: goto L_0043D824;
    case 206u: goto L_0043D850;
    case 207u: goto L_0043D85C;
    case 208u: goto L_0043D880;
    case 209u: goto L_0043D8A0;
    case 210u: goto L_0043D8B0;
    case 211u: goto L_0043D8B8;
    case 212u: goto L_0043D8D8;
    case 213u: goto L_0043D8FC;
    case 214u: goto L_0043D930;
    case 215u: goto L_0043D950;
    case 216u: goto L_0043D970;
    case 217u: goto L_0043D9A8;
    case 218u: goto L_0043D9C8;
    case 219u: goto L_0043D9EC;
    case 220u: goto L_0043DA18;
    case 221u: goto L_0043DA20;
    case 222u: goto L_0043DA38;
    case 223u: goto L_0043DA50;
    case 224u: goto L_0043DA68;
    case 225u: goto L_0043DA90;
    case 226u: goto L_0043DAA4;
    case 227u: goto L_0043DAAC;
    case 228u: goto L_0043DAC0;
    case 229u: goto L_0043DAC8;
    case 230u: goto L_0043DAE0;
    case 231u: goto L_0043DAF4;
    case 232u: goto L_0043DB18;
    case 233u: goto L_0043DB2C;
    case 234u: goto L_0043DB34;
    case 235u: goto L_0043DB48;
    case 236u: goto L_0043DB50;
    case 237u: goto L_0043DB68;
    case 238u: goto L_0043DB80;
    case 239u: goto L_0043DB90;
    case 240u: goto L_0043DBA0;
    case 241u: goto L_0043DBB0;
    case 242u: goto L_0043DBC4;
    case 243u: goto L_0043DBE0;
    case 244u: goto L_0043DBF0;
    case 245u: goto L_0043DC18;
    case 246u: goto L_0043DC28;
    case 247u: goto L_0043DC38;
    case 248u: goto L_0043DC54;
    case 249u: goto L_0043DC68;
    case 250u: goto L_0043DC78;
    case 251u: goto L_0043DC9C;
    case 252u: goto L_0043DCB0;
    case 253u: goto L_0043DCD8;
    case 254u: goto L_0043DCF8;
    case 255u: goto L_0043DD18;
    case 256u: goto L_0043DD34;
    case 257u: goto L_0043DD48;
    case 258u: goto L_0043DD58;
    case 259u: goto L_0043DD78;
    case 260u: goto L_0043DD88;
    case 261u: goto L_0043DDB0;
    case 262u: goto L_0043DDD0;
    case 263u: goto L_0043DDF0;
    case 264u: goto L_0043DE00;
    case 265u: goto L_0043DE14;
    case 266u: goto L_0043DE20;
    case 267u: goto L_0043DE2C;
    case 268u: goto L_0043DE48;
    case 269u: goto L_0043DE60;
    case 270u: goto L_0043DE78;
    case 271u: goto L_0043DE90;
    case 272u: goto L_0043DE98;
    case 273u: goto L_0043DEA0;
    case 274u: goto L_0043DEA8;
    case 275u: goto L_0043DEBC;
    case 276u: goto L_0043DED4;
    case 277u: goto L_0043DEF8;
    case 278u: goto L_0043DF10;
    case 279u: goto L_0043DF2C;
    case 280u: goto L_0043DF60;
    case 281u: goto L_0043DF98;
    case 282u: goto L_0043DFC8;
    case 283u: goto L_0043DFF8;
    case 284u: goto L_0043E018;
    case 285u: goto L_0043E038;
    case 286u: goto L_0043E050;
    case 287u: goto L_0043E058;
    case 288u: goto L_0043E070;
    case 289u: goto L_0043E08C;
    case 290u: goto L_0043E098;
    case 291u: goto L_0043E0B4;
    case 292u: goto L_0043E0F0;
    case 293u: goto L_0043E120;
    case 294u: goto L_0043E13C;
    case 295u: goto L_0043E170;
    case 296u: goto L_0043E208;
    case 297u: goto L_0043E218;
    case 298u: goto L_0043E230;
    case 299u: goto L_0043E248;
    case 300u: goto L_0043E260;
    case 301u: goto L_0043E268;
    case 302u: goto L_0043E280;
    case 303u: goto L_0043E298;
    case 304u: goto L_0043E2A0;
    case 305u: goto L_0043E300;
    case 306u: goto L_0043E314;
    case 307u: goto L_0043E360;
    case 308u: goto L_0043E370;
    case 309u: goto L_0043E398;
    case 310u: goto L_0043E3B0;
    case 311u: goto L_0043E3C8;
    case 312u: goto L_0043E3DC;
    case 313u: goto L_0043E3E4;
    case 314u: goto L_0043E3F8;
    case 315u: goto L_0043E41C;
    case 316u: goto L_0043E428;
    case 317u: goto L_0043E43C;
    case 318u: goto L_0043E46C;
    case 319u: goto L_0043E488;
    case 320u: goto L_0043E4A8;
    case 321u: goto L_0043E4CC;
    case 322u: goto L_0043E4D8;
    case 323u: goto L_0043E4FC;
    case 324u: goto L_0043E520;
    case 325u: goto L_0043E558;
    case 326u: goto L_0043E588;
    case 327u: goto L_0043E5C0;
    case 328u: goto L_0043E5FC;
    case 329u: goto L_0043E614;
    case 330u: goto L_0043E624;
    case 331u: goto L_0043E650;
    case 332u: goto L_0043E670;
    case 333u: goto L_0043E678;
    case 334u: goto L_0043E6AC;
    case 335u: goto L_0043E6DC;
    case 336u: goto L_0043E6F4;
    case 337u: goto L_0043E710;
    case 338u: goto L_0043E720;
    case 339u: goto L_0043E734;
    case 340u: goto L_0043E764;
    case 341u: goto L_0043E780;
    case 342u: goto L_0043E800;
    case 343u: goto L_0043E810;
    case 344u: goto L_0043E828;
    case 345u: goto L_0043E858;
    case 346u: goto L_0043E860;
    case 347u: goto L_0043E87C;
    case 348u: goto L_0043E8DC;
    case 349u: goto L_0043E8F0;
    case 350u: goto L_0043E908;
    case 351u: goto L_0043E910;
    case 352u: goto L_0043E928;
    case 353u: goto L_0043E938;
    case 354u: goto L_0043E948;
    case 355u: goto L_0043E978;
    case 356u: goto L_0043E980;
    case 357u: goto L_0043E998;
    case 358u: goto L_0043E9DC;
    case 359u: goto L_0043E9F4;
    case 360u: goto L_0043EA18;
    case 361u: goto L_0043EA2C;
    case 362u: goto L_0043EA34;
    case 363u: goto L_0043EA60;
    case 364u: goto L_0043EA80;
    case 365u: goto L_0043EA94;
    case 366u: goto L_0043EA9C;
    case 367u: goto L_0043EAD0;
    case 368u: goto L_0043EAE0;
    case 369u: goto L_0043EB04;
    case 370u: goto L_0043EB24;
    case 371u: goto L_0043EB48;
    case 372u: goto L_0043EB64;
    case 373u: goto L_0043EB80;
    case 374u: goto L_0043EBA0;
    case 375u: goto L_0043EBB4;
    case 376u: goto L_0043EBD8;
    case 377u: goto L_0043EBE8;
    case 378u: goto L_0043EBFC;
    case 379u: goto L_0043EC10;
    case 380u: goto L_0043EC30;
    case 381u: goto L_0043EC40;
    case 382u: goto L_0043EC54;
    case 383u: goto L_0043EC68;
    case 384u: goto L_0043EC84;
    case 385u: goto L_0043EC98;
    case 386u: goto L_0043ECB4;
    case 387u: goto L_0043ECC8;
    case 388u: goto L_0043ECE4;
    case 389u: goto L_0043ED00;
    case 390u: goto L_0043ED08;
    case 391u: goto L_0043ED24;
    case 392u: goto L_0043ED38;
    case 393u: goto L_0043ED54;
    case 394u: goto L_0043ED68;
    case 395u: goto L_0043ED84;
    case 396u: goto L_0043ED98;
    case 397u: goto L_0043EDB4;
    case 398u: goto L_0043EDC8;
    case 399u: goto L_0043EE00;
    case 400u: goto L_0043EE10;
    case 401u: goto L_0043EE30;
    case 402u: goto L_0043EE54;
    case 403u: goto L_0043EE7C;
    case 404u: goto L_0043EEA8;
    case 405u: goto L_0043EEC0;
    case 406u: goto L_0043EEE8;
    case 407u: goto L_0043EF0C;
    case 408u: goto L_0043EF20;
    case 409u: goto L_0043EF3C;
    case 410u: goto L_0043EF4C;
    case 411u: goto L_0043EF98;
    case 412u: goto L_0043EFB4;
    case 413u: goto L_0043EFC8;
    case 414u: goto L_0043EFDC;
    case 415u: goto L_0043EFE4;
    case 416u: goto L_0043EFF0;
    case 417u: goto L_0043F000;
    case 418u: goto L_0043F038;
    case 419u: goto L_0043F048;
    case 420u: goto L_0043F058;
    case 421u: goto L_0043F068;
    case 422u: goto L_0043F07C;
    case 423u: goto L_0043F0A8;
    case 424u: goto L_0043F0B8;
    case 425u: goto L_0043F0E8;
    case 426u: goto L_0043F100;
    case 427u: goto L_0043F130;
    case 428u: goto L_0043F148;
    case 429u: goto L_0043F168;
    case 430u: goto L_0043F18C;
    case 431u: goto L_0043F1A0;
    case 432u: goto L_0043F1C0;
    case 433u: goto L_0043F1E4;
    case 434u: goto L_0043F1F8;
    case 435u: goto L_0043F230;
    case 436u: goto L_0043F248;
    case 437u: goto L_0043F25C;
    case 438u: goto L_0043F270;
    case 439u: goto L_0043F288;
    case 440u: goto L_0043F2C0;
    case 441u: goto L_0043F2D8;
    case 442u: goto L_0043F340;
    case 443u: goto L_0043F350;
    case 444u: goto L_0043F358;
    case 445u: goto L_0043F370;
    case 446u: goto L_0043F390;
    case 447u: goto L_0043F3B0;
    case 448u: goto L_0043F3D8;
    case 449u: goto L_0043F400;
    case 450u: goto L_0043F414;
    case 451u: goto L_0043F41C;
    case 452u: goto L_0043F428;
    case 453u: goto L_0043F450;
    case 454u: goto L_0043F480;
    case 455u: goto L_0043F490;
    case 456u: goto L_0043F498;
    case 457u: goto L_0043F4D0;
    case 458u: goto L_0043F4F8;
    case 459u: goto L_0043F51C;
    case 460u: goto L_0043F528;
    case 461u: goto L_0043F558;
    case 462u: goto L_0043F568;
    case 463u: goto L_0043F580;
    case 464u: goto L_0043F598;
    case 465u: goto L_0043F5AC;
    case 466u: goto L_0043F5F0;
    case 467u: goto L_0043F608;
    case 468u: goto L_0043F61C;
    case 469u: goto L_0043F634;
    case 470u: goto L_0043F64C;
    case 471u: goto L_0043F678;
    case 472u: goto L_0043F690;
    case 473u: goto L_0043F6C0;
    case 474u: goto L_0043F6D8;
    case 475u: goto L_0043F6E0;
    case 476u: goto L_0043F6FC;
    case 477u: goto L_0043F70C;
    case 478u: goto L_0043F720;
    case 479u: goto L_0043F738;
    case 480u: goto L_0043F764;
    case 481u: goto L_0043F774;
    case 482u: goto L_0043F788;
    case 483u: goto L_0043F7A0;
    case 484u: goto L_0043F7B0;
    case 485u: goto L_0043F7B8;
    case 486u: goto L_0043F7E0;
    case 487u: goto L_0043F818;
    case 488u: goto L_0043F820;
    case 489u: goto L_0043F828;
    case 490u: goto L_0043F830;
    case 491u: goto L_0043F838;
    case 492u: goto L_0043F840;
    case 493u: goto L_0043F858;
    case 494u: goto L_0043F87C;
    case 495u: goto L_0043F89C;
    case 496u: goto L_0043F8C0;
    case 497u: goto L_0043F8D8;
    case 498u: goto L_0043F8EC;
    case 499u: goto L_0043F904;
    case 500u: goto L_0043F920;
    case 501u: goto L_0043F934;
    case 502u: goto L_0043F94C;
    case 503u: goto L_0043F968;
    case 504u: goto L_0043F978;
    case 505u: goto L_0043F988;
    case 506u: goto L_0043F998;
    case 507u: goto L_0043F9A8;
    case 508u: goto L_0043FA04;
    case 509u: goto L_0043FA10;
    case 510u: goto L_0043FA30;
    case 511u: goto L_0043FA50;
    case 512u: goto L_0043FA58;
    case 513u: goto L_0043FA68;
    case 514u: goto L_0043FA7C;
    case 515u: goto L_0043FA88;
    case 516u: goto L_0043FA98;
    case 517u: goto L_0043FAAC;
    case 518u: goto L_0043FAB8;
    case 519u: goto L_0043FAC8;
    case 520u: goto L_0043FADC;
    case 521u: goto L_0043FAE8;
    case 522u: goto L_0043FB14;
    case 523u: goto L_0043FB20;
    case 524u: goto L_0043FB30;
    case 525u: goto L_0043FB38;
    case 526u: goto L_0043FB48;
    case 527u: goto L_0043FB60;
    case 528u: goto L_0043FB68;
    case 529u: goto L_0043FB74;
    case 530u: goto L_0043FB84;
    case 531u: goto L_0043FB94;
    case 532u: goto L_0043FBB0;
    case 533u: goto L_0043FC04;
    case 534u: goto L_0043FC24;
    case 535u: goto L_0043FC34;
    case 536u: goto L_0043FC68;
    case 537u: goto L_0043FC8C;
    case 538u: goto L_0043FCA8;
    case 539u: goto L_0043FCBC;
    case 540u: goto L_0043FCC4;
    case 541u: goto L_0043FCD0;
    case 542u: goto L_0043FCF0;
    case 543u: goto L_0043FCFC;
    case 544u: goto L_0043FD04;
    case 545u: goto L_0043FD28;
    case 546u: goto L_0043FD3C;
    case 547u: goto L_0043FD50;
    case 548u: goto L_0043FD58;
    case 549u: goto L_0043FD60;
    case 550u: goto L_0043FD68;
    case 551u: goto L_0043FD70;
    case 552u: goto L_0043FD8C;
    case 553u: goto L_0043FDB0;
    case 554u: goto L_0043FDC0;
    case 555u: goto L_0043FDD0;
    case 556u: goto L_0043FDD8;
    case 557u: goto L_0043FDEC;
    case 558u: goto L_0043FDF8;
    case 559u: goto L_0043FE00;
    case 560u: goto L_0043FE0C;
    case 561u: goto L_0043FE14;
    case 562u: goto L_0043FE30;
    case 563u: goto L_0043FE38;
    case 564u: goto L_0043FE40;
    case 565u: goto L_0043FE50;
    case 566u: goto L_0043FE68;
    case 567u: goto L_0043FE90;
    case 568u: goto L_0043FEA0;
    case 569u: goto L_0043FEB8;
    case 570u: goto L_0043FED0;
    case 571u: goto L_0043FF04;
    case 572u: goto L_0043FF1C;
    case 573u: goto L_0043FF48;
    case 574u: goto L_0043FF60;
    case 575u: goto L_0043FF74;
    case 576u: goto L_0043FF88;
    case 577u: goto L_0043FFA8;
    case 578u: goto L_0043FFC8;
    case 579u: goto L_0043FFE8;
    default: bad_entry(c, 0x0043C000u); return;
    }
L_0043C000:
    set32(c.r[4], c.r[4].w[0] - 19296u);
    c.budget -= 1;
L_0043C004:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C014u); set32(c.r[6], 0u + 144u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0043C014u) [[unlikely]] return; }
L_0043C014:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), 0u);  if (t) { goto L_0043C104; } }
    c.budget -= 1;
L_0043C020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C028u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 15u, depth + 1u); else { c.pc = 0x0043C128u; return; } if (c.pc != 0x0043C028u) [[unlikely]] return; }
L_0043C028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C030u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 274u, depth + 1u); else { c.pc = 0x0043DEA8u; return; } if (c.pc != 0x0043C030u) [[unlikely]] return; }
L_0043C030:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043C004u | kUnwind; return; } goto L_0043C004; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C044u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 388u, depth + 1u); else { c.pc = 0x0044F490u; return; } if (c.pc != 0x0043C044u) [[unlikely]] return; }
L_0043C044:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { st32((c.r[18].w[0]), 0u);  goto L_0043C104; }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_0043C0AC; } }
    set32(c.r[20], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[21], 0u + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_0043C068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_0043C0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C078u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 47u, depth + 1u); else { c.pc = 0x0043C760u; return; } if (c.pc != 0x0043C078u) [[unlikely]] return; }
L_0043C078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043C0A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C088u); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00D3(c, 394u, depth + 1u); else { c.pc = 0x0044F588u; return; } if (c.pc != 0x0043C088u) [[unlikely]] return; }
L_0043C088:
    set32(c.r[3], ld32((c.r[16].w[0] + 132u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C0A0u); st32((c.r[16].w[0] + 132u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00D3(c, 388u, depth + 1u); else { c.pc = 0x0044F490u; return; } if (c.pc != 0x0043C0A0u) [[unlikely]] return; }
L_0043C0A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[19].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043C068u | kUnwind; return; } goto L_0043C068; } }
L_0043C0A8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_0043C0AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043C100; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    st32((c.r[16].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C0CCu); st32((c.r[16].w[0] + 124u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 38u, depth + 1u); else { c.pc = 0x0043C5C8u; return; } if (c.pc != 0x0043C0CCu) [[unlikely]] return; }
L_0043C0CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C0DCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 18u, depth + 1u); else { c.pc = 0x0043C1C0u; return; } if (c.pc != 0x0043C0DCu) [[unlikely]] return; }
L_0043C0DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 48u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C0F8u); st32((c.r[16].w[0] + 184u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 16u, depth + 1u); else { c.pc = 0x0043C170u; return; } if (c.pc != 0x0043C0F8u) [[unlikely]] return; }
L_0043C0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043C108; } }
L_0043C100:
    st32((c.r[18].w[0]), 0u);
    c.budget -= 1;
L_0043C104:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043C108:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043C128:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 680u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043C148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 680u), c.r[5].w[0]);  if (t) { goto L_0043C160; } }
    c.budget -= 1;
L_0043C148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043C160; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 19248u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043F2D8; }
L_0043C160:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043C170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 400u), c.r[3].w[0]);  goto L_0043C1AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C1A4u);  if (depth < kMaxDepth) unit_00CF(c, 322u, depth + 1u); else { c.pc = 0x0043E4D8u; return; } if (c.pc != 0x0043C1A4u) [[unlikely]] return; }
L_0043C1A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    st32((c.r[16].w[0] + 400u), c.r[3].w[0]);
    c.budget -= 2;
L_0043C1AC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C1C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 88u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[16], ld32((c.r[20].w[0] + 60u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C208u); set32(c.r[23], ld32((c.r[18].w[0] + 32u)));  if (depth < kMaxDepth) unit_00CF(c, 31u, depth + 1u); else { c.pc = 0x0043C468u; return; } if (c.pc != 0x0043C208u) [[unlikely]] return; }
L_0043C208:
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C234u); st32((c.r[29].w[0] + 20u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 32u, depth + 1u); else { c.pc = 0x0043C4A8u; return; } if (c.pc != 0x0043C234u) [[unlikely]] return; }
L_0043C234:
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[19], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[21], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[22], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[30], ld32((c.r[18].w[0] + 44u)));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C264u); st32((c.r[29].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 174u, depth + 1u); else { c.pc = 0x004519A0u; return; } if (c.pc != 0x0043C264u) [[unlikely]] return; }
L_0043C264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[29].w[0])));  if (t) { goto L_0043C27C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C278u); set32(c.r[4], c.r[4].w[0] - 19184u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043C278u) [[unlikely]] return; }
L_0043C278:
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_0043C27C:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C288u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 30u, depth + 1u); else { c.pc = 0x0043C438u; return; } if (c.pc != 0x0043C288u) [[unlikely]] return; }
L_0043C288:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C29Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 30u, depth + 1u); else { c.pc = 0x0043C438u; return; } if (c.pc != 0x0043C29Cu) [[unlikely]] return; }
L_0043C29C:
    st32((c.r[17].w[0]), c.r[23].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[17].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[21].w[0]);
    st32((c.r[17].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[17].w[0] + 48u), c.r[30].w[0]);
    st32((c.r[17].w[0] + 56u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C310u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 28u, depth + 1u); else { c.pc = 0x0043C3A0u; return; } if (c.pc != 0x0043C310u) [[unlikely]] return; }
L_0043C310:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C320u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 39u, depth + 1u); else { c.pc = 0x0043C610u; return; } if (c.pc != 0x0043C320u) [[unlikely]] return; }
L_0043C320:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 136u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C334u); set32(c.r[7], ld32((c.r[17].w[0] + 140u)));  if (depth < kMaxDepth) unit_00CF(c, 34u, depth + 1u); else { c.pc = 0x0043C510u; return; } if (c.pc != 0x0043C334u) [[unlikely]] return; }
L_0043C334:
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = ld64((c.r[18].w[0] + 72u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    st64((c.r[17].w[0] + 80u), c.r[2].d[0]);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[3].d[0] = ld64((c.r[18].w[0] + 80u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 88u));
    st64((c.r[17].w[0] + 88u), c.r[3].d[0]);
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[2].d[0] = ld64((c.r[18].w[0] + 88u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 104u));
    st64((c.r[17].w[0] + 96u), c.r[2].d[0]);
    c.r[30].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[3].d[0] = ld64((c.r[18].w[0] + 96u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 120u));
    st64((c.r[17].w[0] + 104u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 104u));
    st64((c.r[17].w[0] + 112u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 112u));
    st64((c.r[17].w[0] + 120u), c.r[3].d[0]);
    c.r[2].d[0] = ld64((c.r[18].w[0] + 120u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    st64((c.r[17].w[0] + 128u), c.r[2].d[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0043C3A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    set32(c.r[19], c.r[4].w[0] + 352u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[20], ld32((c.r[4].w[0] + 376u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C3D8u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_00CF(c, 107u, depth + 1u); else { c.pc = 0x0043CE00u; return; } if (c.pc != 0x0043C3D8u) [[unlikely]] return; }
L_0043C3D8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[18].w[0] + 72u), 0u);  goto L_0043C3F0; }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != c.r[19].d[0];  if (t) { goto L_0043C3F8; } }
    st32((c.r[18].w[0] + 72u), 0u);
    c.budget -= 1;
L_0043C3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 68u), 0u);  if (t) { goto L_0043C418; } }
L_0043C3F8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;  if (t) { goto L_0043C410; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[18].w[0] + 72u), c.r[17].w[0]);  goto L_0043C414; }
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 4u);
    c.budget -= 2;
L_0043C410:
    st32((c.r[18].w[0] + 72u), c.r[17].w[0]);
    c.budget -= 1;
L_0043C414:
    st32((c.r[18].w[0] + 68u), c.r[16].w[0]);
    c.budget -= 1;
L_0043C418:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043C438:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[2].w[0] << 5);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D7(c, 36u, depth); }
L_0043C468:
    set32(c.r[2], 0u + 2u);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0043C49C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_0043C490; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0043C494; } }
    c.budget -= 1;
L_0043C490:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_0043C494:
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[3], 0u + 3u);  goto L_0043C49C; }
L_0043C49C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_0043C4A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0043C500; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_0043C4D8; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0043C4E8; } }
    c.budget -= 1;
L_0043C4D8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[3], 0u + 3u);  if (t) { goto L_0043C500; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 4u);
    c.budget -= 2;
L_0043C4E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043C504; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C4FCu); set32(c.r[4], c.r[4].w[0] - 19152u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043C4FCu) [[unlikely]] return; }
L_0043C4FC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0043C500:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043C504:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043C510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0043C550; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], 0u + 2u);  goto L_0043C578; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043C570; } }
L_0043C550:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043C570; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043C578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_0043C578; } }
L_0043C570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C578u); set32(c.r[4], c.r[4].w[0] - 19112u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043C578u) [[unlikely]] return; }
L_0043C578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C580u);  if (depth < kMaxDepth) unit_00CF(c, 107u, depth + 1u); else { c.pc = 0x0043CE00u; return; } if (c.pc != 0x0043C580u) [[unlikely]] return; }
L_0043C580:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0043C5AC; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C59Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 220u, depth + 1u); else { c.pc = 0x00456018u; return; } if (c.pc != 0x0043C59Cu) [[unlikely]] return; }
L_0043C59C:
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_0043C5AC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043C5C8:
    set32(c.r[3], ld32((c.r[5].w[0] + 88u)));
    set32(c.r[4], c.r[4].w[0] + 136u);
    set32(c.r[6], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 92u)));
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 108u)));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 109u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 110u)));
    st32((c.r[4].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    st32((c.r[4].w[0] + 28u), 0u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 24u), c.r[2].w[0]);  c.pc = t; return; }
L_0043C610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 4u), 0u);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[16].w[0] + 140u), 0u);  if (t) { goto L_0043C660; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_0043C664; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 4u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C660u); set32(c.r[7], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D5(c, 223u, depth + 1u); else { c.pc = 0x00456088u; return; } if (c.pc != 0x0043C660u) [[unlikely]] return; }
L_0043C660:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_0043C664:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0043C67C; } }
    c.budget -= 2;
    if (c.r[2].sd[0] <= 0) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0043C680; }
    st32((c.r[16].w[0] + 140u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 136u), c.r[3].w[0]);
    c.budget -= 2;
L_0043C67C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043C680:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C690:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
L_0043C6A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C6C8u); c.r[19].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043C6C8u) [[unlikely]] return; }
L_0043C6C8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0043C700; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 18968u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_0043F2D8; }
L_0043C700:
    set32(c.r[17], ld32((c.r[19].w[0] + 124u)));
    set32(c.r[16], ld32((c.r[19].w[0] + 128u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C710u); set32(c.r[18], ld32((c.r[19].w[0] + 120u)));  if (depth < kMaxDepth) unit_00CF(c, 15u, depth + 1u); else { c.pc = 0x0043C128u; return; } if (c.pc != 0x0043C710u) [[unlikely]] return; }
L_0043C710:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C71Cu); c.r[16].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00CF(c, 274u, depth + 1u); else { c.pc = 0x0043DEA8u; return; } if (c.pc != 0x0043C71Cu) [[unlikely]] return; }
L_0043C71C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043C740; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C730u);  if (depth < kMaxDepth) unit_00D3(c, 394u, depth + 1u); else { c.pc = 0x0044F588u; return; } if (c.pc != 0x0043C730u) [[unlikely]] return; }
L_0043C730:
    set32(c.r[3], ld32((c.r[19].w[0] + 128u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[19].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 128u), c.r[3].w[0]);
    c.budget -= 4;
L_0043C740:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043C760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C774u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043C774u) [[unlikely]] return; }
L_0043C774:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043C798; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C78Cu); set32(c.r[4], c.r[4].w[0] - 18920u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043C78Cu) [[unlikely]] return; }
L_0043C78C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043C7C0; } }
    c.budget -= 1;
L_0043C798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C7A0u);  if (depth < kMaxDepth) unit_00CF(c, 274u, depth + 1u); else { c.pc = 0x0043DEA8u; return; } if (c.pc != 0x0043C7A0u) [[unlikely]] return; }
L_0043C7A0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0043C7C0; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D2(c, 287u, depth); }
L_0043C7C0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043C7D0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
L_0043C7E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C7F8u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 29u, depth + 1u); else { c.pc = 0x00454428u; return; } if (c.pc != 0x0043C7F8u) [[unlikely]] return; }
L_0043C7F8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], 0u - 1u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C818:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_0043C820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 224u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C834u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 80u, depth + 1u); else { c.pc = 0x00454C10u; return; } if (c.pc != 0x0043C834u) [[unlikely]] return; }
L_0043C834:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_0043C884; } }
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 17u);  if (t) { goto L_0043C884; } }
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 18752u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0043C000u < 16384u) { entry = entries_00CF[(t - 0x0043C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0043C868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 33u);  if (t) { goto L_0043C884; } }
L_0043C870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 81u);  if (t) { goto L_0043C884; } }
L_0043C878:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 97u);  if (t) { goto L_0043C884; } }
L_0043C880:
    set32(c.r[2], 0u + 17u);
    c.budget -= 1;
L_0043C884:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043C890:
    st32((c.r[4].w[0] + 180u), 0u);
    set32(c.r[11], 0u + 17u);
    st32((c.r[4].w[0] + 184u), 0u);
    set32(c.r[5], c.r[4].w[0] + 208u);
    st32((c.r[4].w[0] + 188u), 0u);
    set32(c.r[10], c.r[4].w[0] + 4u);
    set32(c.r[9], c.r[4].w[0] + 8u);
    set32(c.r[8], c.r[4].w[0] + 12u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 7u);
    c.budget -= 10;
L_0043C8B8:
    set32(c.r[2], c.r[7].w[0] + 192u);
    set32(c.r[7], c.r[7].w[0] + 20u);
    set32(c.r[4], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0] - 16u), 0u);
    st32((c.r[3].w[0]), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[5].w[0]), c.r[11].w[0]);
    c.budget -= 13;
    { const bool t = c.r[6].sd[0] >= 0; set32(c.r[5], c.r[5].w[0] + 20u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043C8B8u | kUnwind; return; } goto L_0043C8B8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043C8F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00440000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 14008u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[5], 0u + 75u);
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C924u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 18u, depth + 1u); else { c.pc = 0x004502D8u; return; } if (c.pc != 0x0043C924u) [[unlikely]] return; }
L_0043C924:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], 0u + 76u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00D4(c, 18u, depth); }
L_0043C948:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].d[0] = c.r[6].sd[0] < 2048ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[19].w[0] + 180u), c.r[2].w[0]);  if (t) { goto L_0043CA6C; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0043CA70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C990u); c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 403u, depth + 1u); else { c.pc = 0x004539B8u; return; } if (c.pc != 0x0043C990u) [[unlikely]] return; }
L_0043C990:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0043CA6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C9A8u);  if (depth < kMaxDepth) unit_00D4(c, 420u, depth + 1u); else { c.pc = 0x00453BD0u; return; } if (c.pc != 0x0043C9A8u) [[unlikely]] return; }
L_0043C9A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0043C9C4; } }
    set32(c.r[20], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_0043C9D8; } }
L_0043C9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C9CCu);  if (depth < kMaxDepth) unit_00D4(c, 407u, depth + 1u); else { c.pc = 0x00453A80u; return; } if (c.pc != 0x0043C9CCu) [[unlikely]] return; }
L_0043C9CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043CA70; } }
    c.budget -= 1;
L_0043C9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C9E0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 73u, depth + 1u); else { c.pc = 0x0043CA90u; return; } if (c.pc != 0x0043C9E0u) [[unlikely]] return; }
L_0043C9E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C9ECu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 52u, depth + 1u); else { c.pc = 0x0043C7E8u; return; } if (c.pc != 0x0043C9ECu) [[unlikely]] return; }
L_0043C9EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043C9F8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 55u, depth + 1u); else { c.pc = 0x0043C820u; return; } if (c.pc != 0x0043C9F8u) [[unlikely]] return; }
L_0043C9F8:
    set32(c.r[5], ld32((c.r[19].w[0] + 188u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 180u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[9], c.r[19].w[0] + c.r[5].w[0]);
    c.r[7].d[0] = c.r[9].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[7].w[0] + 4u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[8].w[0] + 8u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 12u), c.r[16].w[0]);
    st32((c.r[3].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[9].w[0]), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 188u)));
    set32(c.r[5], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[6].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[6].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CA6Cu); st32((c.r[19].w[0] + 188u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00D4(c, 407u, depth + 1u); else { c.pc = 0x00453A80u; return; } if (c.pc != 0x0043CA6Cu) [[unlikely]] return; }
L_0043CA6C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043CA70:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043CA90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 224u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CAB0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 424u, depth + 1u); else { c.pc = 0x00453CC0u; return; } if (c.pc != 0x0043CAB0u) [[unlikely]] return; }
L_0043CAB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043CAF0; } }
    set32(c.r[16], ld32((c.r[29].w[0])));
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0043CAF4; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 224u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CADCu); set32(c.r[6], c.r[29].w[0] + 4u);  if (depth < kMaxDepth) unit_00D5(c, 59u, depth + 1u); else { c.pc = 0x004548C8u; return; } if (c.pc != 0x0043CADCu) [[unlikely]] return; }
L_0043CADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043CAF0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0043CAF0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043CAF4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043CB10:
    set32(c.r[2], c.r[2].w[0]);
    c.budget -= 2;
L_0043CB18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 7696u);  c.pc = t; return; }
L_0043CB28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043F2D8; }
L_0043CB40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_0043CB70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CB68u); set32(c.r[4], c.r[4].w[0] - 18496u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043CB68u) [[unlikely]] return; }
L_0043CB68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0043CCE4; } }
L_0043CB70:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CB7Cu); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0043CB7Cu) [[unlikely]] return; }
L_0043CB7C:
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 4224u);
    set32(c.r[2], c.r[2].w[0] - 18656u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[10], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[9], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CBD8u); st32((c.r[29].w[0] + 28u), c.r[10].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 423u, depth + 1u); else { c.pc = 0x0043F0A8u; return; } if (c.pc != 0x0043CBD8u) [[unlikely]] return; }
L_0043CBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CBE0u);  if (depth < kMaxDepth) unit_00CF(c, 221u, depth + 1u); else { c.pc = 0x0043DA20u; return; } if (c.pc != 0x0043CBE0u) [[unlikely]] return; }
L_0043CBE0:
    set32(c.r[4], ld32((c.r[17].w[0] - 7704u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0043CCD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC04u);  if (depth < kMaxDepth) unit_00C5(c, 6u, depth + 1u); else { c.pc = 0x00414048u; return; } if (c.pc != 0x0043CC04u) [[unlikely]] return; }
L_0043CC04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC0Cu);  if (depth < kMaxDepth) unit_00C9(c, 93u, depth + 1u); else { c.pc = 0x00424D78u; return; } if (c.pc != 0x0043CC0Cu) [[unlikely]] return; }
L_0043CC0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC14u);  if (depth < kMaxDepth) unit_00C9(c, 25u, depth + 1u); else { c.pc = 0x00424368u; return; } if (c.pc != 0x0043CC14u) [[unlikely]] return; }
L_0043CC14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC1Cu);  if (depth < kMaxDepth) unit_00C9(c, 159u, depth + 1u); else { c.pc = 0x00425968u; return; } if (c.pc != 0x0043CC1Cu) [[unlikely]] return; }
L_0043CC1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC24u);  if (depth < kMaxDepth) unit_00CF(c, 562u, depth + 1u); else { c.pc = 0x0043FE30u; return; } if (c.pc != 0x0043CC24u) [[unlikely]] return; }
L_0043CC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0043CC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC34u); set32(c.r[4], 0u - 101u);  if (depth < kMaxDepth) unit_00CF(c, 133u, depth + 1u); else { c.pc = 0x0043CFB8u; return; } if (c.pc != 0x0043CC34u) [[unlikely]] return; }
L_0043CC34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC40u); set32(c.r[4], c.r[4].w[0] - 18456u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043CC40u) [[unlikely]] return; }
L_0043CC40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC48u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 103u, depth + 1u); else { c.pc = 0x0043CD58u; return; } if (c.pc != 0x0043CC48u) [[unlikely]] return; }
L_0043CC48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] - 2076u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[2].w[0]), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC80u);  if (depth < kMaxDepth) unit_00CF(c, 135u, depth + 1u); else { c.pc = 0x0043CFE8u; return; } if (c.pc != 0x0043CC80u) [[unlikely]] return; }
L_0043CC80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - 18416u);  if (t) { goto L_0043CC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CC94u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043CC94u) [[unlikely]] return; }
L_0043CC94:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CCA8u); st32((c.r[2].w[0] - 7700u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 111u, depth + 1u); else { c.pc = 0x0043CE40u; return; } if (c.pc != 0x0043CCA8u) [[unlikely]] return; }
L_0043CCA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CCB0u);  if (depth < kMaxDepth) unit_00C8(c, 204u, depth + 1u); else { c.pc = 0x00421640u; return; } if (c.pc != 0x0043CCB0u) [[unlikely]] return; }
L_0043CCB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[4].w[0] - 13528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CCC0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C8(c, 197u, depth + 1u); else { c.pc = 0x00421578u; return; } if (c.pc != 0x0043CCC0u) [[unlikely]] return; }
L_0043CCC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CCC8u);  if (depth < kMaxDepth) unit_00CF(c, 296u, depth + 1u); else { c.pc = 0x0043E208u; return; } if (c.pc != 0x0043CCC8u) [[unlikely]] return; }
L_0043CCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CCD0u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 99u, depth + 1u); else { c.pc = 0x0043CCF8u; return; } if (c.pc != 0x0043CCD0u) [[unlikely]] return; }
L_0043CCD0:
    set32(c.r[3], c.r[17].w[0] - 7704u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
L_0043CCE4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043CCF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], c.r[7].w[0] - 18384u);
    set32(c.r[5], c.r[5].w[0] - 1856u);
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CD1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 426u, depth + 1u); else { c.pc = 0x0043F100u; return; } if (c.pc != 0x0043CD1Cu) [[unlikely]] return; }
L_0043CD1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 1832u);
    set32(c.r[6], c.r[6].w[0] - 18360u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CD34u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 432u, depth + 1u); else { c.pc = 0x0043F1C0u; return; } if (c.pc != 0x0043CD34u) [[unlikely]] return; }
L_0043CD34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 1760u);
    set32(c.r[6], c.r[6].w[0] - 18336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CD4Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 429u, depth + 1u); else { c.pc = 0x0043F168u; return; } if (c.pc != 0x0043CD4Cu) [[unlikely]] return; }
L_0043CD4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043F218; }
L_0043CD58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CD70u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043CD70u) [[unlikely]] return; }
L_0043CD70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CD84u); set32(c.r[6], 0u + 5580u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0043CD84u) [[unlikely]] return; }
L_0043CD84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CD8Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 545u, depth + 1u); else { c.pc = 0x0043FD28u; return; } if (c.pc != 0x0043CD8Cu) [[unlikely]] return; }
L_0043CD8C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 92u), 0u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[5], c.r[17].w[0] + 4u);  if (t) { goto L_0043CDC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0043CDDC; } }
L_0043CDC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x426F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49807ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0]), c.f[0]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
L_0043CDDC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 60u), 0u);
    st32((c.r[17].w[0] + 56u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043CE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CE10u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043CE10u) [[unlikely]] return; }
L_0043CE10:
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043CE20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CE30u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043CE30u) [[unlikely]] return; }
L_0043CE30:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043CE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 27u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CE60u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 282u, depth + 1u); else { c.pc = 0x0043DFC8u; return; } if (c.pc != 0x0043CE60u) [[unlikely]] return; }
L_0043CE60:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043DFC8; }
L_0043CE78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CE98u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043CE98u) [[unlikely]] return; }
L_0043CE98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 7704u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0043CF98; } }
    set32(c.r[16], c.r[4].w[0] + 108u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[17], 0u + 7u);
    c.budget -= 5;
L_0043CEC8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[19].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0043CEE4; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CEE0u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_00CE(c, 223u, depth + 1u); else { c.pc = 0x0043BBF0u; return; } if (c.pc != 0x0043CEE0u) [[unlikely]] return; }
L_0043CEE0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0043CEE4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 684u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043CEC8u | kUnwind; return; } goto L_0043CEC8; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0043CF10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CEFCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CF(c, 551u, depth + 1u); else { c.pc = 0x0043FD70u; return; } if (c.pc != 0x0043CEFCu) [[unlikely]] return; }
L_0043CEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF04u);  if (depth < kMaxDepth) unit_00CF(c, 445u, depth + 1u); else { c.pc = 0x0043F370u; return; } if (c.pc != 0x0043CF04u) [[unlikely]] return; }
L_0043CF04:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF10u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 551u, depth + 1u); else { c.pc = 0x0043FD70u; return; } if (c.pc != 0x0043CF10u) [[unlikely]] return; }
L_0043CF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF18u);  if (depth < kMaxDepth) unit_00CF(c, 436u, depth + 1u); else { c.pc = 0x0043F248u; return; } if (c.pc != 0x0043CF18u) [[unlikely]] return; }
L_0043CF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF20u);  if (depth < kMaxDepth) unit_00CF(c, 428u, depth + 1u); else { c.pc = 0x0043F148u; return; } if (c.pc != 0x0043CF20u) [[unlikely]] return; }
L_0043CF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF28u);  if (depth < kMaxDepth) unit_00CF(c, 434u, depth + 1u); else { c.pc = 0x0043F1F8u; return; } if (c.pc != 0x0043CF28u) [[unlikely]] return; }
L_0043CF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF30u);  if (depth < kMaxDepth) unit_00CF(c, 431u, depth + 1u); else { c.pc = 0x0043F1A0u; return; } if (c.pc != 0x0043CF30u) [[unlikely]] return; }
L_0043CF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF38u);  if (depth < kMaxDepth) unit_00CF(c, 299u, depth + 1u); else { c.pc = 0x0043E248u; return; } if (c.pc != 0x0043CF38u) [[unlikely]] return; }
L_0043CF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF40u);  if (depth < kMaxDepth) unit_00C8(c, 210u, depth + 1u); else { c.pc = 0x004216C0u; return; } if (c.pc != 0x0043CF40u) [[unlikely]] return; }
L_0043CF40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF48u);  if (depth < kMaxDepth) unit_00CF(c, 142u, depth + 1u); else { c.pc = 0x0043D090u; return; } if (c.pc != 0x0043CF48u) [[unlikely]] return; }
L_0043CF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF50u);  if (depth < kMaxDepth) unit_00C5(c, 28u, depth + 1u); else { c.pc = 0x004141C0u; return; } if (c.pc != 0x0043CF50u) [[unlikely]] return; }
L_0043CF50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF58u);  if (depth < kMaxDepth) unit_00CF(c, 563u, depth + 1u); else { c.pc = 0x0043FE38u; return; } if (c.pc != 0x0043CF58u) [[unlikely]] return; }
L_0043CF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF60u);  if (depth < kMaxDepth) unit_00C9(c, 165u, depth + 1u); else { c.pc = 0x004259E8u; return; } if (c.pc != 0x0043CF60u) [[unlikely]] return; }
L_0043CF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF68u);  if (depth < kMaxDepth) unit_00C9(c, 31u, depth + 1u); else { c.pc = 0x004243E8u; return; } if (c.pc != 0x0043CF68u) [[unlikely]] return; }
L_0043CF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF70u);  if (depth < kMaxDepth) unit_00C9(c, 99u, depth + 1u); else { c.pc = 0x00424DF8u; return; } if (c.pc != 0x0043CF70u) [[unlikely]] return; }
L_0043CF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CF78u);  if (depth < kMaxDepth) unit_00CF(c, 222u, depth + 1u); else { c.pc = 0x0043DA38u; return; } if (c.pc != 0x0043CF78u) [[unlikely]] return; }
L_0043CF78:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_0043F0E8; }
L_0043CF98:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043CFB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043CFCCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043CFCCu) [[unlikely]] return; }
L_0043CFCC:
    st32((c.r[2].w[0] + 104u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043CFE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[8], c.r[2].w[0] - 18512u);
    ldl(c.r[5], (c.r[8].w[0] + 7u));
    ldr(c.r[5], (c.r[8].w[0]));
    sdl(c.r[5], (c.r[29].w[0] + 7u));
    sdr(c.r[5], (c.r[29].w[0]));
    set32(c.r[5], 0u + 14256u);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D01Cu); set32(c.r[4], c.r[3].w[0] - 18312u);  if (depth < kMaxDepth) unit_00D0(c, 480u, depth + 1u); else { c.pc = 0x00443F28u; return; } if (c.pc != 0x0043D01Cu) [[unlikely]] return; }
L_0043D01C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0043D040; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D034u); set32(c.r[4], c.r[4].w[0] - 18304u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043D034u) [[unlikely]] return; }
L_0043D034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0043D080; } }
    c.budget -= 1;
L_0043D040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D048u);  if (depth < kMaxDepth) unit_00D0(c, 481u, depth + 1u); else { c.pc = 0x00443F38u; return; } if (c.pc != 0x0043D048u) [[unlikely]] return; }
L_0043D048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00440000u);  if (t) { goto L_0043D060; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D058u); set32(c.r[4], 0u - 301u);  if (depth < kMaxDepth) unit_00CF(c, 133u, depth + 1u); else { c.pc = 0x0043CFB8u; return; } if (c.pc != 0x0043D058u) [[unlikely]] return; }
L_0043D058:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043D084; } }
L_0043D060:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 12112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D070u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 24u, depth + 1u); else { c.pc = 0x004441F8u; return; } if (c.pc != 0x0043D070u) [[unlikely]] return; }
L_0043D070:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 303u);  if (t) { goto L_0043D080; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D080u);  if (depth < kMaxDepth) unit_00CF(c, 133u, depth + 1u); else { c.pc = 0x0043CFB8u; return; } if (c.pc != 0x0043D080u) [[unlikely]] return; }
L_0043D080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043D084:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D0A0u);  if (depth < kMaxDepth) unit_00D1(c, 8u, depth + 1u); else { c.pc = 0x00444070u; return; } if (c.pc != 0x0043D0A0u) [[unlikely]] return; }
L_0043D0A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043D0B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0043D100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D0E4u);  if (depth < kMaxDepth) unit_00CF(c, 274u, depth + 1u); else { c.pc = 0x0043DEA8u; return; } if (c.pc != 0x0043D0E4u) [[unlikely]] return; }
L_0043D0E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 2116u), c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 2112u), c.r[18].w[0]);  if (t) { goto L_0043D114; } }
    c.budget -= 1;
L_0043D100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[2].w[0] - 2116u), 0u);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] - 2112u), 0u);
    c.budget -= 5;
L_0043D114:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_0043D144; } }
    set32(c.r[5], c.r[2].w[0] - 4152u);
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    c.r[3].d[0] = c.r[4].sd[0] < 15ll ? 1ull : 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[1], c.r[1].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 4216u), c.r[17].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0043D144; } }
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0043D144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3864ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043D1C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3863ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_0043D280; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1036ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0043D290; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043D1A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 1032ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043D294; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043D314; } }
    c.budget -= 1;
L_0043D1A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3076ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_0043D2D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3861ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043D2B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043D314; } }
L_0043D1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3904ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;  if (t) { goto L_0043D230; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[17].sd[0] < -1ll ? 1ull : 0ull;  if (t) { goto L_0043D208; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3868ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_0043D290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[2].d[0] | 3871ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043D2F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043D314; } }
L_0043D208:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_0043D310; } }
    c.r[2].d[0] = c.r[17].sd[0] < -3ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0043D314; }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 18192u);  if (t) { goto L_0043D298; } }
    c.budget -= 1;
L_0043D230:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], c.r[20].w[0] - 4144u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[5].w[0] - 18168u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D250u); c.r[6].d[0] = c.r[6].d[0] | 3904ull;  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0043D250u) [[unlikely]] return; }
L_0043D250:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0043D264; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D260u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 54u, depth + 1u); else { c.pc = 0x0044CA20u; return; } if (c.pc != 0x0043D260u) [[unlikely]] return; }
L_0043D260:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043D264:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043D324; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D278u); set32(c.r[6], 0u + 233u);  if (depth < kMaxDepth) unit_00DD(c, 79u, depth + 1u); else { c.pc = 0x00475020u; return; } if (c.pc != 0x0043D278u) [[unlikely]] return; }
L_0043D278:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] - 4144u);  if (t) { goto L_0043D328; } }
L_0043D280:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] - 18144u);  if (t) { goto L_0043D298; } }
    c.budget -= 1;
L_0043D290:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_0043D294:
    set32(c.r[5], c.r[5].w[0] - 18048u);
    c.budget -= 1;
L_0043D298:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D2A4u); set32(c.r[4], c.r[20].w[0] - 4144u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0043D2A4u) [[unlikely]] return; }
L_0043D2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] - 4144u);  if (t) { goto L_0043D328; } }
    c.budget -= 1;
L_0043D2B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[5].w[0] - 17960u);
    set32(c.r[4], c.r[20].w[0] - 4144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D2C4u); c.r[6].d[0] = c.r[6].d[0] | 3861ull;  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0043D2C4u) [[unlikely]] return; }
L_0043D2C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] - 4144u);  if (t) { goto L_0043D328; } }
    c.budget -= 1;
L_0043D2D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[5].w[0] - 17848u);
    set32(c.r[4], c.r[20].w[0] - 4144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D2E8u); c.r[6].d[0] = c.r[6].d[0] | 3076ull;  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0043D2E8u) [[unlikely]] return; }
L_0043D2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] - 4144u);  if (t) { goto L_0043D328; } }
L_0043D2F0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[5], c.r[5].w[0] - 17712u);
    set32(c.r[4], c.r[20].w[0] - 4144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D304u); c.r[6].d[0] = c.r[6].d[0] | 3871ull;  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0043D304u) [[unlikely]] return; }
L_0043D304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[20].w[0] - 4144u);  if (t) { goto L_0043D328; } }
    c.budget -= 1;
L_0043D310:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_0043D314:
    set32(c.r[5], c.r[5].w[0] - 17640u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D324u); set32(c.r[4], c.r[20].w[0] - 4144u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0043D324u) [[unlikely]] return; }
L_0043D324:
    set32(c.r[4], c.r[20].w[0] - 4144u);
    c.budget -= 1;
L_0043D328:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_0043F2D8; }
L_0043D360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D370u); set32(c.r[4], ld32((c.r[4].w[0] + 60u)));  if (depth < kMaxDepth) unit_00D3(c, 127u, depth + 1u); else { c.pc = 0x0044D508u; return; } if (c.pc != 0x0043D370u) [[unlikely]] return; }
L_0043D370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 311u);  if (t) { goto L_0043D390; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D380u);  if (depth < kMaxDepth) unit_00CF(c, 133u, depth + 1u); else { c.pc = 0x0043CFB8u; return; } if (c.pc != 0x0043D380u) [[unlikely]] return; }
L_0043D380:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D38Cu); set32(c.r[4], c.r[4].w[0] - 17624u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043D38Cu) [[unlikely]] return; }
L_0043D38C:
    set32(c.r[2], 0u - 311u);
    c.budget -= 1;
L_0043D390:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043D3A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D3B0u); set32(c.r[4], ld32((c.r[4].w[0] + 60u)));  if (depth < kMaxDepth) unit_00D3(c, 323u, depth + 1u); else { c.pc = 0x0044ECB0u; return; } if (c.pc != 0x0043D3B0u) [[unlikely]] return; }
L_0043D3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 307u);  if (t) { goto L_0043D3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D3C0u);  if (depth < kMaxDepth) unit_00CF(c, 133u, depth + 1u); else { c.pc = 0x0043CFB8u; return; } if (c.pc != 0x0043D3C0u) [[unlikely]] return; }
L_0043D3C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D3CCu); set32(c.r[4], c.r[4].w[0] - 17592u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043D3CCu) [[unlikely]] return; }
L_0043D3CC:
    set32(c.r[2], 0u - 307u);
    c.budget -= 1;
L_0043D3D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043D3E0:
    set32(c.r[29], c.r[29].w[0] + 64u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_0043D3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D40Cu); set32(c.r[17], c.r[16].w[0] + 640u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043D40Cu) [[unlikely]] return; }
L_0043D40C:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043D490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D420u);  if (depth < kMaxDepth) unit_00CE(c, 168u, depth + 1u); else { c.pc = 0x0043B5B0u; return; } if (c.pc != 0x0043D420u) [[unlikely]] return; }
L_0043D420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043D440; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 17512u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043F2D8; }
L_0043D440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D448u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 406u, depth + 1u); else { c.pc = 0x0043EEE8u; return; } if (c.pc != 0x0043D448u) [[unlikely]] return; }
L_0043D448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D450u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 320u, depth + 1u); else { c.pc = 0x0043E4A8u; return; } if (c.pc != 0x0043D450u) [[unlikely]] return; }
L_0043D450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D458u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 316u, depth + 1u); else { c.pc = 0x0043E428u; return; } if (c.pc != 0x0043D458u) [[unlikely]] return; }
L_0043D458:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043D480; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 17464u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043F2D8; }
L_0043D480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D488u);  if (depth < kMaxDepth) unit_00CF(c, 319u, depth + 1u); else { c.pc = 0x0043E488u; return; } if (c.pc != 0x0043D488u) [[unlikely]] return; }
L_0043D488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 61u, depth + 1u); else { c.pc = 0x0043C890u; return; } if (c.pc != 0x0043D490u) [[unlikely]] return; }
L_0043D490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D498u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 176u, depth + 1u); else { c.pc = 0x0043D4E8u; return; } if (c.pc != 0x0043D498u) [[unlikely]] return; }
L_0043D498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D4A0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 154u, depth + 1u); else { c.pc = 0x0043D360u; return; } if (c.pc != 0x0043D4A0u) [[unlikely]] return; }
L_0043D4A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D4ACu); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));  if (depth < kMaxDepth) unit_00CF(c, 197u, depth + 1u); else { c.pc = 0x0043D758u; return; } if (c.pc != 0x0043D4ACu) [[unlikely]] return; }
L_0043D4AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D4B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CF(c, 390u, depth + 1u); else { c.pc = 0x0043ED08u; return; } if (c.pc != 0x0043D4B8u) [[unlikely]] return; }
L_0043D4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D4C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 377u, depth + 1u); else { c.pc = 0x0043EBE8u; return; } if (c.pc != 0x0043D4C0u) [[unlikely]] return; }
L_0043D4C0:
    st32((c.r[16].w[0] + 132u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 680u), 0u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D4E8:
    st32((c.r[4].w[0] + 128u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 124u), 0u);  c.pc = t; return; }
L_0043D4F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043D510; }
L_0043D510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D52Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043D52Cu) [[unlikely]] return; }
L_0043D52C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[4].w[0] - 17416u);  if (t) { goto L_0043D550; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043F2D8; }
L_0043D550:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043D578; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 17368u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043F2D8; }
L_0043D578:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043D598; }
L_0043D598:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D5CCu); st32((c.r[16].w[0] + 444u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 185u, depth + 1u); else { c.pc = 0x0043D630u; return; } if (c.pc != 0x0043D5CCu) [[unlikely]] return; }
L_0043D5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D5D4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 163u, depth + 1u); else { c.pc = 0x0043D3F0u; return; } if (c.pc != 0x0043D5D4u) [[unlikely]] return; }
L_0043D5D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D5E0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 217u, depth + 1u); else { c.pc = 0x0043D9A8u; return; } if (c.pc != 0x0043D5E0u) [[unlikely]] return; }
L_0043D5E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D5F0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 271u, depth + 1u); else { c.pc = 0x0043DE90u; return; } if (c.pc != 0x0043D5F0u) [[unlikely]] return; }
L_0043D5F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  goto L_0043DE98; }
L_0043D630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 8;
    if (c.r[17].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043D6C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D658u);  if (depth < kMaxDepth) unit_00CF(c, 556u, depth + 1u); else { c.pc = 0x0043FDD8u; return; } if (c.pc != 0x0043D658u) [[unlikely]] return; }
L_0043D658:
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 331u, depth + 1u); else { c.pc = 0x0044ED68u; return; } if (c.pc != 0x0043D668u) [[unlikely]] return; }
L_0043D668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 308u);  if (t) { goto L_0043D684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D678u);  if (depth < kMaxDepth) unit_00CF(c, 133u, depth + 1u); else { c.pc = 0x0043CFB8u; return; } if (c.pc != 0x0043D678u) [[unlikely]] return; }
L_0043D678:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D684u); set32(c.r[4], c.r[4].w[0] - 17144u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043D684u) [[unlikely]] return; }
L_0043D684:
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D690u); set32(c.r[4], c.r[16].w[0] + 640u);  if (depth < kMaxDepth) unit_00CF(c, 381u, depth + 1u); else { c.pc = 0x0043EC40u; return; } if (c.pc != 0x0043D690u) [[unlikely]] return; }
L_0043D690:
    st32((c.r[16].w[0] + 672u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043D6A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D6A8u);  if (depth < kMaxDepth) unit_00CF(c, 574u, depth + 1u); else { c.pc = 0x0043FF60u; return; } if (c.pc != 0x0043D6A8u) [[unlikely]] return; }
L_0043D6A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043D6C8; } }
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00421218u | kUnwind; return; } [[clang::musttail]] return unit_00C8(c, 160u, depth); }
L_0043D6C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043D6D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043D6F0; }
L_0043D6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D704u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043D704u) [[unlikely]] return; }
L_0043D704:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043D728; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 17112u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043F2D8; }
L_0043D728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D730u);  if (depth < kMaxDepth) unit_00CF(c, 185u, depth + 1u); else { c.pc = 0x0043D630u; return; } if (c.pc != 0x0043D730u) [[unlikely]] return; }
L_0043D730:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D73Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 346u, depth + 1u); else { c.pc = 0x0043E860u; return; } if (c.pc != 0x0043D73Cu) [[unlikely]] return; }
L_0043D73C:
    st32((c.r[16].w[0] + 116u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00421218u | kUnwind; return; } [[clang::musttail]] return unit_00C8(c, 160u, depth); }
L_0043D758:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D77Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043D77Cu) [[unlikely]] return; }
L_0043D77C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_0043D7A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D794u); set32(c.r[4], c.r[4].w[0] - 17072u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043D794u) [[unlikely]] return; }
L_0043D794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0043D864; } }
    c.budget -= 1;
L_0043D7A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_0043D7B4; } }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0043D864; }
L_0043D7B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D7BCu);  if (depth < kMaxDepth) unit_00CF(c, 109u, depth + 1u); else { c.pc = 0x0043CE20u; return; } if (c.pc != 0x0043D7BCu) [[unlikely]] return; }
L_0043D7BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0043D80C; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_0043D80C; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D7DCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 34u, depth + 1u); else { c.pc = 0x00450540u; return; } if (c.pc != 0x0043D7DCu) [[unlikely]] return; }
L_0043D7DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_0043D800; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[4].d[0] = c.r[19].d[0] + 0ull;  goto L_0043D80C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D7F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 556u, depth + 1u); else { c.pc = 0x0043FDD8u; return; } if (c.pc != 0x0043D7F4u) [[unlikely]] return; }
L_0043D7F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0043D80C; } }
    c.budget -= 1;
L_0043D800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D808u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 556u, depth + 1u); else { c.pc = 0x0043FDD8u; return; } if (c.pc != 0x0043D808u) [[unlikely]] return; }
L_0043D808:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0043D80C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D814u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 118u, depth + 1u); else { c.pc = 0x0044D358u; return; } if (c.pc != 0x0043D814u) [[unlikely]] return; }
L_0043D814:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], c.r[16].w[0] + 640u);  goto L_0043D854; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D824u); set32(c.r[4], 0u - 310u);  if (depth < kMaxDepth) unit_00CF(c, 133u, depth + 1u); else { c.pc = 0x0043CFB8u; return; } if (c.pc != 0x0043D824u) [[unlikely]] return; }
L_0043D824:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[2].d[0]; set32(c.r[4], c.r[3].w[0] - 17032u);  if (t) { goto L_0043D840; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] - 16992u);  if (t) { goto L_0043D848; } }
L_0043D840:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[2].w[0] - 16984u);
    c.budget -= 2;
L_0043D848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D850u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043D850u) [[unlikely]] return; }
L_0043D850:
    set32(c.r[4], c.r[16].w[0] + 640u);
    c.budget -= 1;
L_0043D854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D85Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 390u, depth + 1u); else { c.pc = 0x0043ED08u; return; } if (c.pc != 0x0043D85Cu) [[unlikely]] return; }
L_0043D85C:
    st8((c.r[16].w[0] + 114u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0043D864:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0043D880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 456u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D8A0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 246u, depth + 1u); else { c.pc = 0x00202BC8u; return; } if (c.pc != 0x0043D8A0u) [[unlikely]] return; }
L_0043D8A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] - 16928u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D8B0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 216u, depth + 1u); else { c.pc = 0x00202650u; return; } if (c.pc != 0x0043D8B0u) [[unlikely]] return; }
L_0043D8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D8B8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 249u, depth + 1u); else { c.pc = 0x00202C80u; return; } if (c.pc != 0x0043D8B8u) [[unlikely]] return; }
L_0043D8B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043DFF8; }
L_0043D8D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043D920; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D8FCu);  if (depth < kMaxDepth) unit_00CF(c, 576u, depth + 1u); else { c.pc = 0x0043FF88u; return; } if (c.pc != 0x0043D8FCu) [[unlikely]] return; }
L_0043D8FC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043D924; }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D3(c, 377u, depth); }
L_0043D920:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043D924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043D930:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D950u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0043D950u) [[unlikely]] return; }
L_0043D950:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 424u)));
    set32(c.r[4], c.r[4].w[0] - 16920u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043D990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D970u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043D970u) [[unlikely]] return; }
L_0043D970:
    set32(c.r[6], ld32((c.r[16].w[0] + 424u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00DD(c, 90u, depth); }
L_0043D990:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00DD(c, 71u, depth); }
L_0043D9A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043D9C8; }
L_0043D9C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043D9ECu); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 214u, depth + 1u); else { c.pc = 0x0043D930u; return; } if (c.pc != 0x0043D9ECu) [[unlikely]] return; }
L_0043D9EC:
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    st32((c.r[16].w[0] + 436u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 440u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 428u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 432u), 0u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043DA18:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_0043DA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043DBF0; }
L_0043DA38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043DBF0; }
L_0043DA50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DA68u);  if (depth < kMaxDepth) unit_00CF(c, 239u, depth + 1u); else { c.pc = 0x0043DB90u; return; } if (c.pc != 0x0043DA68u) [[unlikely]] return; }
L_0043DA68:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[2].w[0] - 2100u);  if (t) { goto L_0043DACC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043DAD0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DA90u);  if (depth < kMaxDepth) unit_00CF(c, 245u, depth + 1u); else { c.pc = 0x0043DC18u; return; } if (c.pc != 0x0043DA90u) [[unlikely]] return; }
L_0043DA90:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], c.r[6].w[0] - 3840u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAA4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 247u, depth + 1u); else { c.pc = 0x0043DC38u; return; } if (c.pc != 0x0043DAA4u) [[unlikely]] return; }
L_0043DAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAACu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_00CF(c, 264u, depth + 1u); else { c.pc = 0x0043DE00u; return; } if (c.pc != 0x0043DAACu) [[unlikely]] return; }
L_0043DAAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] + 12544u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 255u, depth + 1u); else { c.pc = 0x0043DD18u; return; } if (c.pc != 0x0043DAC0u) [[unlikely]] return; }
L_0043DAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAC8u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_00CF(c, 264u, depth + 1u); else { c.pc = 0x0043DE00u; return; } if (c.pc != 0x0043DAC8u) [[unlikely]] return; }
L_0043DAC8:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_0043DACC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043DAD0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043DAE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DAF4u);  if (depth < kMaxDepth) unit_00CF(c, 239u, depth + 1u); else { c.pc = 0x0043DB90u; return; } if (c.pc != 0x0043DAF4u) [[unlikely]] return; }
L_0043DAF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[16], c.r[3].w[0] - 2100u);  if (t) { goto L_0043DB54; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043DB58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB18u);  if (depth < kMaxDepth) unit_00CF(c, 245u, depth + 1u); else { c.pc = 0x0043DC18u; return; } if (c.pc != 0x0043DB18u) [[unlikely]] return; }
L_0043DB18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], c.r[6].w[0] + 12544u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB2Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 247u, depth + 1u); else { c.pc = 0x0043DC38u; return; } if (c.pc != 0x0043DB2Cu) [[unlikely]] return; }
L_0043DB2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB34u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_00CF(c, 264u, depth + 1u); else { c.pc = 0x0043DE00u; return; } if (c.pc != 0x0043DB34u) [[unlikely]] return; }
L_0043DB34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 3840u);
    set32(c.r[5], 0u + 16384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 255u, depth + 1u); else { c.pc = 0x0043DD18u; return; } if (c.pc != 0x0043DB48u) [[unlikely]] return; }
L_0043DB48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DB50u); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_00CF(c, 264u, depth + 1u); else { c.pc = 0x0043DE00u; return; } if (c.pc != 0x0043DB50u) [[unlikely]] return; }
L_0043DB50:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0043DB54:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043DB58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043DB68:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0043DB80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 2108u), 0u);  c.pc = t; return; }
L_0043DB80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 2108u), c.r[2].w[0]);  c.pc = t; return; }
L_0043DB90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 2108u)));  c.pc = t; return; }
L_0043DBA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 2104u), c.r[4].w[0]);  c.pc = t; return; }
L_0043DBB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DBC4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 239u, depth + 1u); else { c.pc = 0x0043DB90u; return; } if (c.pc != 0x0043DBC4u) [[unlikely]] return; }
L_0043DBC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 2104u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043DBE0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DBE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043DBE0u) [[unlikely]] return; }
L_0043DBE0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043DBF0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st32((c.r[6].w[0] - 2108u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 2104u), 0u);
    st32((c.r[4].w[0] - 2100u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] - 2096u), 0u);  c.pc = t; return; }
L_0043DC18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC28u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_00CF(c, 264u, depth + 1u); else { c.pc = 0x0043DE00u; return; } if (c.pc != 0x0043DC28u) [[unlikely]] return; }
L_0043DC28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 9u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043DE00; }
L_0043DC38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 2096u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0043DC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC54u);  if (depth < kMaxDepth) unit_00CF(c, 252u, depth + 1u); else { c.pc = 0x0043DCB0u; return; } if (c.pc != 0x0043DC54u) [[unlikely]] return; }
L_0043DC54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043DC6C; } }
    c.budget -= 1;
L_0043DC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC68u);  if (depth < kMaxDepth) unit_00CF(c, 250u, depth + 1u); else { c.pc = 0x0043DC78u; return; } if (c.pc != 0x0043DC68u) [[unlikely]] return; }
L_0043DC68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043DC6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043DC78:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[1].w[0] + c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DC9Cu); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0043DC9Cu) [[unlikely]] return; }
L_0043DC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043DCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DCD8u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x0043DCD8u) [[unlikely]] return; }
L_0043DCD8:
    set32(c.r[4], c.r[16].w[0] + 15u);
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 128u), c.r[17].w[0]);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DCF8u); set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (depth < kMaxDepth) unit_00A1(c, 34u, depth + 1u); else { c.pc = 0x00384600u; return; } if (c.pc != 0x0043DCF8u) [[unlikely]] return; }
L_0043DCF8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043DD18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 2096u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0043DD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD34u);  if (depth < kMaxDepth) unit_00CF(c, 260u, depth + 1u); else { c.pc = 0x0043DD88u; return; } if (c.pc != 0x0043DD34u) [[unlikely]] return; }
L_0043DD34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043DD4C; } }
    c.budget -= 1;
L_0043DD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD48u);  if (depth < kMaxDepth) unit_00CF(c, 258u, depth + 1u); else { c.pc = 0x0043DD58u; return; } if (c.pc != 0x0043DD48u) [[unlikely]] return; }
L_0043DD48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043DD4C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043DD58:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DD78u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0043DD78u) [[unlikely]] return; }
L_0043DD78:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043DD88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 9u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DDB0u); c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x0043DDB0u) [[unlikely]] return; }
L_0043DDB0:
    set32(c.r[4], c.r[16].w[0] + 15u);
    c.r[3].d[0] = c.r[16].sd[0] < 0ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 128u), c.r[17].w[0]);
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DDD0u); set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 4));  if (depth < kMaxDepth) unit_00A1(c, 30u, depth + 1u); else { c.pc = 0x00384580u; return; } if (c.pc != 0x0043DDD0u) [[unlikely]] return; }
L_0043DDD0:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043DDF0:
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
L_0043DE00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DE14u);  if (depth < kMaxDepth) unit_00A1(c, 15u, depth + 1u); else { c.pc = 0x00384230u; return; } if (c.pc != 0x0043DE14u) [[unlikely]] return; }
L_0043DE14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0043DE20:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DE2Cu); set32(c.r[6], 0u + 30u);  if (depth < kMaxDepth) unit_00A1(c, 37u, depth + 1u); else { c.pc = 0x00384680u; return; } if (c.pc != 0x0043DE2Cu) [[unlikely]] return; }
L_0043DE2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DE20u | kUnwind; return; } goto L_0043DE20; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043DE48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415628u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 194u, depth); }
L_0043DE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DA50u | kUnwind; return; } goto L_0043DA50; }
L_0043DE78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DAE0u | kUnwind; return; } goto L_0043DAE0; }
L_0043DE90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043DE98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043DEA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043DEA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DEBCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043DEBCu) [[unlikely]] return; }
L_0043DEBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[4].w[0] - 16680u);  if (t) { goto L_0043DEE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DED4u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043DED4u) [[unlikely]] return; }
L_0043DED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043DEE4; } }
    c.budget -= 1;
L_0043DEE0:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_0043DEE4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043DEF8:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 192u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
L_0043DF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DF2Cu); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043DF2Cu) [[unlikely]] return; }
L_0043DF2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], c.r[4].w[0] - 16416u);  if (t) { goto L_0043DF58; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043F2D8; }
L_0043DF58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043DF60u); set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  if (depth < kMaxDepth) unit_00D3(c, 134u, depth + 1u); else { c.pc = 0x0044D5D0u; return; } if (c.pc != 0x0043DF60u) [[unlikely]] return; }
L_0043DF60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - 16368u);  if (t) { goto L_0043DF80; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043F2D8; }
L_0043DF80:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043DF98:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 80u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 80u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 12;
L_0043DFC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0043DFDC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 1;
L_0043DFDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D4(c, 18u, depth); }
L_0043DFF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E018u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00CF(c, 566u, depth + 1u); else { c.pc = 0x0043FE68u; return; } if (c.pc != 0x0043E018u) [[unlikely]] return; }
L_0043E018:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043E828; }
L_0043E038:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043E044; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_0043E044:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0043E050:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0043E058:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E070u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043E070u) [[unlikely]] return; }
L_0043E070:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u - 12u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_0043E0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E08Cu);  if (depth < kMaxDepth) unit_00CF(c, 133u, depth + 1u); else { c.pc = 0x0043CFB8u; return; } if (c.pc != 0x0043E08Cu) [[unlikely]] return; }
L_0043E08C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E098u); set32(c.r[4], c.r[4].w[0] - 16088u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043E098u) [[unlikely]] return; }
L_0043E098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043E0DC; } }
L_0043E0A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0043E0DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E0B4u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_00D4(c, 15u, depth + 1u); else { c.pc = 0x00450298u; return; } if (c.pc != 0x0043E0B4u) [[unlikely]] return; }
L_0043E0B4:
    set32(c.r[6], 0u + 6u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 4u);
    c.r[3].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[17].d[0];  if (t) { goto L_0043E0D8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[6].d[0]; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043E0E0; } }
L_0043E0D8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0043E0DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043E0E0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043E0F0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 192u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 12;
L_0043E120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E13Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043E13Cu) [[unlikely]] return; }
L_0043E13C:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043E168; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 15672u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043F2D8; }
L_0043E168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E170u);  if (depth < kMaxDepth) unit_00D7(c, 41u, depth + 1u); else { c.pc = 0x0045C5B8u; return; } if (c.pc != 0x0043E170u) [[unlikely]] return; }
L_0043E170:
    set32(c.r[4], c.r[16].w[0] + 640u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043ED68; }
L_0043E208:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E218u);  if (depth < kMaxDepth) unit_00D5(c, 121u, depth + 1u); else { c.pc = 0x00455198u; return; } if (c.pc != 0x0043E218u) [[unlikely]] return; }
L_0043E218:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[4].w[0] - 7632u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D5(c, 136u, depth); }
L_0043E230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043F2D8; }
L_0043E248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D5(c, 131u, depth); }
L_0043E260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 6175u);  c.pc = t; return; }
L_0043E268:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D5(c, 137u, depth); }
L_0043E280:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D5(c, 151u, depth); }
L_0043E298:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 168u)));  c.pc = t; return; }
L_0043E2A0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    st32((c.r[5].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 24;
L_0043E300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E314u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 303u, depth + 1u); else { c.pc = 0x0043E298u; return; } if (c.pc != 0x0043E314u) [[unlikely]] return; }
L_0043E314:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00D5(c, 158u, depth); }
L_0043E360:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_0043E370:
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0043E38C; } }
    set32(c.r[2], 0u + 257u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0043E38C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0043E38C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0043E398:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E3B0u); set32(c.r[4], c.r[16].w[0] + 8u);  if (depth < kMaxDepth) unit_00CF(c, 308u, depth + 1u); else { c.pc = 0x0043E370u; return; } if (c.pc != 0x0043E3B0u) [[unlikely]] return; }
L_0043E3B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0043E3E4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E3C8u); set32(c.r[5], ld32((c.r[16].w[0] + 388u)));  if (depth < kMaxDepth) unit_00C9(c, 104u, depth + 1u); else { c.pc = 0x00424E78u; return; } if (c.pc != 0x0043E3C8u) [[unlikely]] return; }
L_0043E3C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 14128u);  if (t) { goto L_0043E3E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E3DCu);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043E3DCu) [[unlikely]] return; }
L_0043E3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E3E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CE(c, 223u, depth + 1u); else { c.pc = 0x0043BBF0u; return; } if (c.pc != 0x0043E3E4u) [[unlikely]] return; }
L_0043E3E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0043E3E8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E3F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 380u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043E41C; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E41Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043E41Cu) [[unlikely]] return; }
L_0043E41C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E428:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E43Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 307u, depth + 1u); else { c.pc = 0x0043E360u; return; } if (c.pc != 0x0043E43Cu) [[unlikely]] return; }
L_0043E43C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 380u)));  goto L_0043E450; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043E478; } }
L_0043E450:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0043E478; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E46Cu); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 325u, depth + 1u); else { c.pc = 0x00453208u; return; } if (c.pc != 0x0043E46Cu) [[unlikely]] return; }
L_0043E46C:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_0043E478:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E488:
    set32(c.r[2], c.r[4].w[0] + 404u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 400u), c.r[3].w[0]);  c.pc = t; return; }
L_0043E4A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 380u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043E4CC; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043E4CCu) [[unlikely]] return; }
L_0043E4CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E4D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 380u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043E510; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E4FCu);  if (depth < kMaxDepth) unit_00CF(c, 324u, depth + 1u); else { c.pc = 0x0043E520u; return; } if (c.pc != 0x0043E4FCu) [[unlikely]] return; }
L_0043E4FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043E678; }
L_0043E510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E520:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 404u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[18], ld32((c.r[16].w[0] + 380u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E558u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043E558u) [[unlikely]] return; }
L_0043E558:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14080u);
    set32(c.r[6], c.r[6].w[0] - 14072u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[7], c.r[29].w[0] + 16u);  if (t) { goto L_0043E590; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E588u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 240u, depth + 1u); else { c.pc = 0x004266D0u; return; } if (c.pc != 0x0043E588u) [[unlikely]] return; }
L_0043E588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[16].w[0] + 392u);  if (t) { goto L_0043E5A8; } }
L_0043E590:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 8u), 0u);  if (t) { goto L_0043E650; } }
    c.budget -= 1;
L_0043E5A8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043E630; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5C0u); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x0043E5C0u) [[unlikely]] return; }
L_0043E5C0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[29].w[0] + 32u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[7].w[0] + 24u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E5FCu); c.r[6].d[0] = c.r[6].d[0] | 65535ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043E5FCu) [[unlikely]] return; }
L_0043E5FC:
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E614u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043E614u) [[unlikely]] return; }
L_0043E614:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E624u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043E624u) [[unlikely]] return; }
L_0043E624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0043E654; } }
    c.budget -= 1;
L_0043E630:
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E650u); st32((c.r[17].w[0] + 8u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 338u, depth + 1u); else { c.pc = 0x0043E720u; return; } if (c.pc != 0x0043E650u) [[unlikely]] return; }
L_0043E650:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0043E654:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0043E670:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0043E678:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[3], c.r[2].w[0] + 404u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[16], ld32((c.r[2].w[0] + 168u)));  if (t) { goto L_0043E6B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E6ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D5(c, 160u, depth + 1u); else { c.pc = 0x004555D0u; return; } if (c.pc != 0x0043E6ACu) [[unlikely]] return; }
L_0043E6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0043E714; } }
    c.budget -= 1;
L_0043E6B8:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], c.r[5].w[0] - 14008u);
    set32(c.r[6], c.r[6].w[0] - 14000u);
    set32(c.r[7], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E6DCu); st32((c.r[29].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 240u, depth + 1u); else { c.pc = 0x004266D0u; return; } if (c.pc != 0x0043E6DCu) [[unlikely]] return; }
L_0043E6DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0043E700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E6F4u);  if (depth < kMaxDepth) unit_00D5(c, 160u, depth + 1u); else { c.pc = 0x004555D0u; return; } if (c.pc != 0x0043E6F4u) [[unlikely]] return; }
L_0043E6F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0043E714; } }
    c.budget -= 1;
L_0043E700:
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E710u); set32(c.r[6], ld32((c.r[29].w[0] + 20u)));  if (depth < kMaxDepth) unit_00D5(c, 160u, depth + 1u); else { c.pc = 0x004555D0u; return; } if (c.pc != 0x0043E710u) [[unlikely]] return; }
L_0043E710:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0043E714:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043E720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E734u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 307u, depth + 1u); else { c.pc = 0x0043E360u; return; } if (c.pc != 0x0043E734u) [[unlikely]] return; }
L_0043E734:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[3], ld32((c.r[16].w[0] + 380u)));  goto L_0043E748; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043E770; } }
L_0043E748:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043E770; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E764u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 325u, depth + 1u); else { c.pc = 0x00453208u; return; } if (c.pc != 0x0043E764u) [[unlikely]] return; }
L_0043E764:
    set32(c.r[3], 0u - 1u);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_0043E770:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E780:
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 320u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 32;
L_0043E800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E810u);  if (depth < kMaxDepth) unit_00C8(c, 173u, depth + 1u); else { c.pc = 0x00421368u; return; } if (c.pc != 0x0043E810u) [[unlikely]] return; }
L_0043E810:
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E828:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 72u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043E848; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00421450u | kUnwind; return; } [[clang::musttail]] return unit_00C8(c, 186u, depth); }
L_0043E848:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043E858:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_0043E860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E87Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 285u, depth + 1u); else { c.pc = 0x0043E038u; return; } if (c.pc != 0x0043E87Cu) [[unlikely]] return; }
L_0043E87C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[4].w[0] - 12792u);  if (t) { goto L_0043E8A8; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043F2D8; }
L_0043E8A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_0043E8C0; } }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_0043E8BC; }
L_0043E8BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 1;
L_0043E8C0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_0043E8F4; }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[17].w[0]));  goto L_0043E8F4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E8DCu);  if (depth < kMaxDepth) unit_00D0(c, 366u, depth + 1u); else { c.pc = 0x004430C0u; return; } if (c.pc != 0x0043E8DCu) [[unlikely]] return; }
L_0043E8DC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - 12744u);  if (t) { goto L_0043E8F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E8F0u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043E8F0u) [[unlikely]] return; }
L_0043E8F0:
    st8((c.r[16].w[0] + 112u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_0043E8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043E908:
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 2;
L_0043E910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E928u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00CF(c, 354u, depth + 1u); else { c.pc = 0x0043E948u; return; } if (c.pc != 0x0043E928u) [[unlikely]] return; }
L_0043E928:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043E938:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
L_0043E948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[7], 0u + 2048u);
    c.r[2].d[0] = c.r[2].d[0] | 18916ull;
    c.r[3].d[0] = 0ull | 40000ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);  c.pc = t; return; }
L_0043E978:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 2;
L_0043E980:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043E998; }
L_0043E998:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[6].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 640u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[18], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E9DCu); set32(c.r[5], c.r[5].w[0] + 192u);  if (depth < kMaxDepth) unit_00D1(c, 54u, depth + 1u); else { c.pc = 0x00444468u; return; } if (c.pc != 0x0043E9DCu) [[unlikely]] return; }
L_0043E9DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 192u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043E9F4u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00D1(c, 54u, depth + 1u); else { c.pc = 0x00444468u; return; } if (c.pc != 0x0043E9F4u) [[unlikely]] return; }
L_0043E9F4:
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043EA18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EA2Cu);  if (depth < kMaxDepth) unit_00CF(c, 418u, depth + 1u); else { c.pc = 0x0043F038u; return; } if (c.pc != 0x0043EA2Cu) [[unlikely]] return; }
L_0043EA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EA34u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EA34u) [[unlikely]] return; }
L_0043EA34:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EA70; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EA70; }
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0043EA68; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EA60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EA60u) [[unlikely]] return; }
L_0043EA60:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0043EA68:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0043EA70:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043EA80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EA94u);  if (depth < kMaxDepth) unit_00CF(c, 418u, depth + 1u); else { c.pc = 0x0043F038u; return; } if (c.pc != 0x0043EA94u) [[unlikely]] return; }
L_0043EA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EA9Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EA9Cu) [[unlikely]] return; }
L_0043EA9C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EAD4; }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] - 1u);  if (t) { goto L_0043EAD0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0043EAD0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EAD4; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EAD0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EAD0u) [[unlikely]] return; }
L_0043EAD0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043EAD4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043EAE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EB04u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EB04u) [[unlikely]] return; }
L_0043EB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0043EB28; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043EB28; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EB24u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EB24u) [[unlikely]] return; }
L_0043EB24:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043EB28:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043EB48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EB64u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EB64u) [[unlikely]] return; }
L_0043EB64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0043EB84; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043EB84; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EB80u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EB80u) [[unlikely]] return; }
L_0043EB80:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043EB84:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043EBA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EBB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EBB4u) [[unlikely]] return; }
L_0043EBB4:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EBDC; }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EBDC; }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EBDC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EBD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EBD8u) [[unlikely]] return; }
L_0043EBD8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043EBDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043EBE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EBFCu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 421u, depth + 1u); else { c.pc = 0x0043F068u; return; } if (c.pc != 0x0043EBFCu) [[unlikely]] return; }
L_0043EBFC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EC34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC10u);  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EC10u) [[unlikely]] return; }
L_0043EC10:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0043EC30; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EC34; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EC30u) [[unlikely]] return; }
L_0043EC30:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043EC34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043EC40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC54u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 421u, depth + 1u); else { c.pc = 0x0043F068u; return; } if (c.pc != 0x0043EC54u) [[unlikely]] return; }
L_0043EC54:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EC88; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC68u);  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EC68u) [[unlikely]] return; }
L_0043EC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0043EC84; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EC88; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EC84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EC84u) [[unlikely]] return; }
L_0043EC84:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043EC88:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043EC98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ECB4u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 421u, depth + 1u); else { c.pc = 0x0043F068u; return; } if (c.pc != 0x0043ECB4u) [[unlikely]] return; }
L_0043ECB4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043ECEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ECC8u);  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043ECC8u) [[unlikely]] return; }
L_0043ECC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0043ECE8; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[17].d[0] + 0ull;  goto L_0043ECEC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ECE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043ECE4u) [[unlikely]] return; }
L_0043ECE4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043ECE8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043ECEC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043ED00:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0043ED08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ED24u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 421u, depth + 1u); else { c.pc = 0x0043F068u; return; } if (c.pc != 0x0043ED24u) [[unlikely]] return; }
L_0043ED24:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043ED58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ED38u);  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043ED38u) [[unlikely]] return; }
L_0043ED38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0043ED54; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043ED58; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ED54u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043ED54u) [[unlikely]] return; }
L_0043ED54:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043ED58:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043ED68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ED84u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 421u, depth + 1u); else { c.pc = 0x0043F068u; return; } if (c.pc != 0x0043ED84u) [[unlikely]] return; }
L_0043ED84:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EDB8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043ED98u);  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043ED98u) [[unlikely]] return; }
L_0043ED98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  if (t) { goto L_0043EDB4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EDB8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EDB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EDB4u) [[unlikely]] return; }
L_0043EDB4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043EDB8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043EDC8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 640u);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EE00u); c.r[20].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EE00u) [[unlikely]] return; }
L_0043EE00:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0043EEC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EE10u);  if (depth < kMaxDepth) unit_00CF(c, 360u, depth + 1u); else { c.pc = 0x0043EA18u; return; } if (c.pc != 0x0043EE10u) [[unlikely]] return; }
L_0043EE10:
    set32(c.r[21], ld32((c.r[16].w[0] + 60u)));
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[5], c.r[29].w[0] + 4u);
    st32((c.r[18].w[0] + 16u), c.r[20].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EE30u); set32(c.r[6], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00CF(c, 368u, depth + 1u); else { c.pc = 0x0043EAE0u; return; } if (c.pc != 0x0043EE30u) [[unlikely]] return; }
L_0043EE30:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] - 12680u);  if (t) { goto L_0043EEA0; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EE54u); set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00C9(c, 104u, depth + 1u); else { c.pc = 0x00424E78u; return; } if (c.pc != 0x0043EE54u) [[unlikely]] return; }
L_0043EE54:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0043EE70; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 12632u);  if (t) { goto L_0043EEA0; } }
    c.budget -= 1;
L_0043EE70:
    st32((c.r[18].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EE7Cu); set32(c.r[5], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00CF(c, 371u, depth + 1u); else { c.pc = 0x0043EB48u; return; } if (c.pc != 0x0043EE7Cu) [[unlikely]] return; }
L_0043EE7C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 192u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0043EEB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 12592u);
    c.budget -= 2;
L_0043EEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EEA8u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043EEA8u) [[unlikely]] return; }
L_0043EEA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043EEC4; } }
L_0043EEB0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EEC0u); st32((c.r[18].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00D1(c, 54u, depth + 1u); else { c.pc = 0x00444468u; return; } if (c.pc != 0x0043EEC0u) [[unlikely]] return; }
L_0043EEC0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0043EEC4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0043EEC8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0043EEE8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] + 640u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EF0Cu); set32(c.r[19], ld32((c.r[4].w[0] + 60u)));  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EF0Cu) [[unlikely]] return; }
L_0043EF0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EF20u); set32(c.r[16], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_00CF(c, 421u, depth + 1u); else { c.pc = 0x0043F068u; return; } if (c.pc != 0x0043EF20u) [[unlikely]] return; }
L_0043EF20:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043EF80; }
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_0043EF40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EF3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 381u, depth + 1u); else { c.pc = 0x0043EC40u; return; } if (c.pc != 0x0043EF3Cu) [[unlikely]] return; }
L_0043EF3C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_0043EF40:
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EF4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043EF4Cu) [[unlikely]] return; }
L_0043EF4C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 192u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00D1(c, 54u, depth); }
L_0043EF80:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0043EF98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFB4u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 421u, depth + 1u); else { c.pc = 0x0043F068u; return; } if (c.pc != 0x0043EFB4u) [[unlikely]] return; }
L_0043EFB4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043F024; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFC8u);  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043EFC8u) [[unlikely]] return; }
L_0043EFC8:
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], ld32((c.r[17].w[0] + 12u)));  if (t) { goto L_0043F020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFDCu);  if (depth < kMaxDepth) unit_00CF(c, 445u, depth + 1u); else { c.pc = 0x0043F370u; return; } if (c.pc != 0x0043EFDCu) [[unlikely]] return; }
L_0043EFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 381u, depth + 1u); else { c.pc = 0x0043EC40u; return; } if (c.pc != 0x0043EFE4u) [[unlikely]] return; }
L_0043EFE4:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043EFF0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 374u, depth + 1u); else { c.pc = 0x0043EBA0u; return; } if (c.pc != 0x0043EFF0u) [[unlikely]] return; }
L_0043EFF0:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F000u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F000u) [[unlikely]] return; }
L_0043F000:
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043EA80u | kUnwind; return; } goto L_0043EA80; }
L_0043F020:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043F024:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043F038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 2088u);  c.pc = t; return; }
L_0043F048:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 2088u)));  c.pc = t; return; }
L_0043F058:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] - 2088u), c.r[4].w[0]);  c.pc = t; return; }
L_0043F068:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F07Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 419u, depth + 1u); else { c.pc = 0x0043F048u; return; } if (c.pc != 0x0043F07Cu) [[unlikely]] return; }
L_0043F07C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0043F098; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043F098; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0043F098:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F0A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F0B8u);  if (depth < kMaxDepth) unit_00C9(c, 352u, depth + 1u); else { c.pc = 0x00427750u; return; } if (c.pc != 0x0043F0B8u) [[unlikely]] return; }
L_0043F0B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[2].w[0] + 29184u), 0u);
    st32((c.r[3].w[0] + 29188u), 0u);
    st32((c.r[4].w[0] + 29192u), 0u);
    st32((c.r[5].w[0] + 29196u), 0u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F0E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00427790u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 354u, depth); }
L_0043F100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F130u); c.r[7].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 320u, depth + 1u); else { c.pc = 0x004272A0u; return; } if (c.pc != 0x0043F130u) [[unlikely]] return; }
L_0043F130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[2].w[0] + 29188u), c.r[16].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], ld32((c.r[2].w[0] + 29188u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004271C8u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 316u, depth); }
L_0043F168:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 6u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F18Cu); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 308u, depth + 1u); else { c.pc = 0x004270A0u; return; } if (c.pc != 0x0043F18Cu) [[unlikely]] return; }
L_0043F18C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 29192u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], ld32((c.r[2].w[0] + 29192u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004271C8u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 316u, depth); }
L_0043F1C0:
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F1E4u); c.r[6].d[0] = c.r[3].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 308u, depth + 1u); else { c.pc = 0x004270A0u; return; } if (c.pc != 0x0043F1E4u) [[unlikely]] return; }
L_0043F1E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 29196u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F1F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], ld32((c.r[2].w[0] + 29196u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004271C8u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 316u, depth); }
L_0043F218:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F230u); set32(c.r[4], c.r[4].w[0] - 3472u);  if (depth < kMaxDepth) unit_00C9(c, 360u, depth + 1u); else { c.pc = 0x00427858u; return; } if (c.pc != 0x0043F230u) [[unlikely]] return; }
L_0043F230:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[4].w[0] - 3448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00427870u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 361u, depth); }
L_0043F248:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F25Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 360u, depth + 1u); else { c.pc = 0x00427858u; return; } if (c.pc != 0x0043F25Cu) [[unlikely]] return; }
L_0043F25C:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00427870u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 361u, depth); }
L_0043F270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DE60u | kUnwind; return; } goto L_0043DE60; }
L_0043F288:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043DE78u | kUnwind; return; } goto L_0043DE78; }
L_0043F2C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004277E8u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 356u, depth); }
L_0043F2D8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[16].w[0] + 28928u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[5].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[6].d[0]);
    set32(c.r[6], 0u + 256u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 40u), c.f[12]);
    st32((c.r[29].w[0] + 44u), c.f[13]);
    st32((c.r[29].w[0] + 48u), c.f[14]);
    st32((c.r[29].w[0] + 52u), c.f[15]);
    st32((c.r[29].w[0] + 56u), c.f[16]);
    st32((c.r[29].w[0] + 60u), c.f[17]);
    st32((c.r[29].w[0] + 64u), c.f[18]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F340u); st32((c.r[29].w[0] + 68u), c.f[19]);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0043F340u) [[unlikely]] return; }
L_0043F340:
    set32(c.r[6], c.r[29].w[0] + 72u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F350u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 216u, depth + 1u); else { c.pc = 0x004767A8u; return; } if (c.pc != 0x0043F350u) [[unlikely]] return; }
L_0043F350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F358u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 446u, depth + 1u); else { c.pc = 0x0043F390u; return; } if (c.pc != 0x0043F358u) [[unlikely]] return; }
L_0043F358:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0043F370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 6u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00427468u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 327u, depth); }
L_0043F390:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00427048u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 304u, depth); }
L_0043F3B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043F3D0; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043F3D8; }
L_0043F3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F3D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 10;
L_0043F400:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_0043F434; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F414u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 551u, depth + 1u); else { c.pc = 0x0043FD70u; return; } if (c.pc != 0x0043F414u) [[unlikely]] return; }
L_0043F414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F41Cu);  if (depth < kMaxDepth) unit_00C5(c, 194u, depth + 1u); else { c.pc = 0x00415628u; return; } if (c.pc != 0x0043F41Cu) [[unlikely]] return; }
L_0043F41C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F428u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 551u, depth + 1u); else { c.pc = 0x0043FD70u; return; } if (c.pc != 0x0043F428u) [[unlikely]] return; }
L_0043F428:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0]; c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F400u | kUnwind; return; } goto L_0043F400; } }
L_0043F434:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043F450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 428u)));
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_0043F488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F480u);  if (depth < kMaxDepth) unit_00CF(c, 471u, depth + 1u); else { c.pc = 0x0043F678u; return; } if (c.pc != 0x0043F480u) [[unlikely]] return; }
L_0043F480:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { st32((c.r[16].w[0] + 428u), 0u);  goto L_0043F488; }
L_0043F488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F490u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 457u, depth + 1u); else { c.pc = 0x0043F4D0u; return; } if (c.pc != 0x0043F490u) [[unlikely]] return; }
L_0043F490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F498u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 15u, depth + 1u); else { c.pc = 0x00450298u; return; } if (c.pc != 0x0043F498u) [[unlikely]] return; }
L_0043F498:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 6u);  if (t) { goto L_0043F4B0; } }
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043F4BC; }
L_0043F4B0:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0043F4BC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043F4D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043F4F0; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043F4F8; }
L_0043F4F0:
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043F5F0; }
L_0043F4F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[17].w[0] + 640u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F51Cu); set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  if (depth < kMaxDepth) unit_00D4(c, 15u, depth + 1u); else { c.pc = 0x00450298u; return; } if (c.pc != 0x0043F51Cu) [[unlikely]] return; }
L_0043F51C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F528u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 385u, depth + 1u); else { c.pc = 0x0043EC98u; return; } if (c.pc != 0x0043F528u) [[unlikely]] return; }
L_0043F528:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043F5D8; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0043F560; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F558u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F558u) [[unlikely]] return; }
L_0043F558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043F5D8; } }
L_0043F560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F568u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 158u, depth + 1u); else { c.pc = 0x0043D3A0u; return; } if (c.pc != 0x0043F568u) [[unlikely]] return; }
L_0043F568:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_0043F584; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F580u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 197u, depth + 1u); else { c.pc = 0x0043D758u; return; } if (c.pc != 0x0043F580u) [[unlikely]] return; }
L_0043F580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_0043F584:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));  goto L_0043F5B0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F598u); set32(c.r[4], ld32((c.r[17].w[0] + 60u)));  if (depth < kMaxDepth) unit_00D0(c, 366u, depth + 1u); else { c.pc = 0x004430C0u; return; } if (c.pc != 0x0043F598u) [[unlikely]] return; }
L_0043F598:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));  goto L_0043F5B0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F5ACu); set32(c.r[4], c.r[4].w[0] - 12544u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043F5ACu) [[unlikely]] return; }
L_0043F5AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));
    c.budget -= 1;
L_0043F5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0043F5D8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043ED08u | kUnwind; return; } goto L_0043ED08; }
L_0043F5D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043F5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F608u); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_00D4(c, 15u, depth + 1u); else { c.pc = 0x00450298u; return; } if (c.pc != 0x0043F608u) [[unlikely]] return; }
L_0043F608:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043F668; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F61Cu);  if (depth < kMaxDepth) unit_00CF(c, 158u, depth + 1u); else { c.pc = 0x0043D3A0u; return; } if (c.pc != 0x0043F61Cu) [[unlikely]] return; }
L_0043F61C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0043F634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F634u);  if (depth < kMaxDepth) unit_00CF(c, 197u, depth + 1u); else { c.pc = 0x0043D758u; return; } if (c.pc != 0x0043F634u) [[unlikely]] return; }
L_0043F634:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043F66C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F64Cu); set32(c.r[4], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_00D0(c, 366u, depth + 1u); else { c.pc = 0x004430C0u; return; } if (c.pc != 0x0043F64Cu) [[unlikely]] return; }
L_0043F64C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] - 12544u);  if (t) { goto L_0043F668; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F2D8u | kUnwind; return; } goto L_0043F2D8; }
L_0043F668:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043F66C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F678:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F690u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00CF(c, 576u, depth + 1u); else { c.pc = 0x0043FF88u; return; } if (c.pc != 0x0043F690u) [[unlikely]] return; }
L_0043F690:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 444u)));  goto L_0043F6A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0043F724; } }
    c.budget -= 1;
L_0043F6A8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[16].w[0] + 420u)));  goto L_0043F6C4; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F6C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043F6C0u) [[unlikely]] return; }
L_0043F6C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0043F6C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 436u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F6D8u); set32(c.r[8], ld32((c.r[16].w[0] + 440u)));  if (depth < kMaxDepth) unit_00CF(c, 570u, depth + 1u); else { c.pc = 0x0043FED0u; return; } if (c.pc != 0x0043F6D8u) [[unlikely]] return; }
L_0043F6D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F6E0u); set32(c.r[4], ld32((c.r[16].w[0] + 64u)));  if (depth < kMaxDepth) unit_00CF(c, 573u, depth + 1u); else { c.pc = 0x0043FF48u; return; } if (c.pc != 0x0043F6E0u) [[unlikely]] return; }
L_0043F6E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043F718; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], 0u - 102u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F6FCu); st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 133u, depth + 1u); else { c.pc = 0x0043CFB8u; return; } if (c.pc != 0x0043F6FCu) [[unlikely]] return; }
L_0043F6FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F70Cu); set32(c.r[4], c.r[4].w[0] - 12496u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043F70Cu) [[unlikely]] return; }
L_0043F70C:
    st32((c.r[16].w[0] + 428u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0043F724; } }
L_0043F718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F720u);  if (depth < kMaxDepth) unit_00CE(c, 96u, depth + 1u); else { c.pc = 0x0043A840u; return; } if (c.pc != 0x0043F720u) [[unlikely]] return; }
L_0043F720:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0043F724:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F738:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[17], ld32((c.r[16].w[0] + 60u)));  if (t) { goto L_0043F78C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F764u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_00C8(c, 179u, depth + 1u); else { c.pc = 0x004213D0u; return; } if (c.pc != 0x0043F764u) [[unlikely]] return; }
L_0043F764:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld16((c.r[16].w[0] + 112u));  goto L_0043F790; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F774u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 377u, depth + 1u); else { c.pc = 0x0044F368u; return; } if (c.pc != 0x0043F774u) [[unlikely]] return; }
L_0043F774:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));  goto L_0043F78C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F788u); set32(c.r[4], c.r[4].w[0] - 12448u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043F788u) [[unlikely]] return; }
L_0043F788:
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0043F78C:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 112u));
    c.budget -= 1;
L_0043F790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043F7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F7A0u); set32(c.r[4], ld32((c.r[16].w[0] + 72u)));  if (depth < kMaxDepth) unit_00C8(c, 179u, depth + 1u); else { c.pc = 0x004213D0u; return; } if (c.pc != 0x0043F7A0u) [[unlikely]] return; }
L_0043F7A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0043F7B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F7B0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 212u, depth + 1u); else { c.pc = 0x0043D8D8u; return; } if (c.pc != 0x0043F7B0u) [[unlikely]] return; }
L_0043F7B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F7B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D4(c, 15u, depth + 1u); else { c.pc = 0x00450298u; return; } if (c.pc != 0x0043F7B8u) [[unlikely]] return; }
L_0043F7B8:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043F7D0; }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0043F7D0:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043F7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_0043F830; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] - 12400u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0043C000u < 16384u) { entry = entries_00CF[(t - 0x0043C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0043F818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F820u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 453u, depth + 1u); else { c.pc = 0x0043F450u; return; } if (c.pc != 0x0043F820u) [[unlikely]] return; }
L_0043F820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0043F830; } }
L_0043F828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F830u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 479u, depth + 1u); else { c.pc = 0x0043F738u; return; } if (c.pc != 0x0043F830u) [[unlikely]] return; }
L_0043F830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F838u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 493u, depth + 1u); else { c.pc = 0x0043F858u; return; } if (c.pc != 0x0043F838u) [[unlikely]] return; }
L_0043F838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F840u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 273u, depth + 1u); else { c.pc = 0x0043DEA0u; return; } if (c.pc != 0x0043F840u) [[unlikely]] return; }
L_0043F840:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F858:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0043F888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F87Cu);  if (depth < kMaxDepth) unit_00CF(c, 564u, depth + 1u); else { c.pc = 0x0043FE40u; return; } if (c.pc != 0x0043F87Cu) [[unlikely]] return; }
L_0043F87C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0043F888; } }
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0043F888:
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043F8B4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F89Cu);  if (depth < kMaxDepth) unit_00CF(c, 342u, depth + 1u); else { c.pc = 0x0043E800u; return; } if (c.pc != 0x0043F89Cu) [[unlikely]] return; }
L_0043F89C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043F8B4; }
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0043F8B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F8C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043F988; }
L_0043F8D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F8ECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 503u, depth + 1u); else { c.pc = 0x0043F968u; return; } if (c.pc != 0x0043F8ECu) [[unlikely]] return; }
L_0043F8EC:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0043F908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F904u);  if (depth < kMaxDepth) unit_00CF(c, 521u, depth + 1u); else { c.pc = 0x0043FAE8u; return; } if (c.pc != 0x0043F904u) [[unlikely]] return; }
L_0043F904:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043F908:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F934u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 503u, depth + 1u); else { c.pc = 0x0043F968u; return; } if (c.pc != 0x0043F934u) [[unlikely]] return; }
L_0043F934:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0043F950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F94Cu);  if (depth < kMaxDepth) unit_00CF(c, 521u, depth + 1u); else { c.pc = 0x0043FAE8u; return; } if (c.pc != 0x0043F94Cu) [[unlikely]] return; }
L_0043F94C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0043F950:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F978u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043F978u) [[unlikely]] return; }
L_0043F978:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F988:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043F998u);  if (depth < kMaxDepth) unit_00CF(c, 507u, depth + 1u); else { c.pc = 0x0043F9A8u; return; } if (c.pc != 0x0043F998u) [[unlikely]] return; }
L_0043F998:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043F9A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[5], c.r[5].w[0] - 2080u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], c.r[6].w[0] - 2076u);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[18], c.r[4].w[0] - 7700u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 21;
    if (c.r[17].d[0] != c.r[4].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043FA38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA04u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043FA04u) [[unlikely]] return; }
L_0043FA04:
    set32(c.r[16], c.r[2].w[0] + 92u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA10u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 440u, depth + 1u); else { c.pc = 0x0043F2C0u; return; } if (c.pc != 0x0043FA10u) [[unlikely]] return; }
L_0043FA10:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[17].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0043FA38; }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { st32((c.r[16].w[0]), 0u);  goto L_0043FA34; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA30u);  if (depth < kMaxDepth) unit_00D3(c, 141u, depth + 1u); else { c.pc = 0x0044D6B8u; return; } if (c.pc != 0x0043FA30u) [[unlikely]] return; }
L_0043FA30:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0043FA34:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0043FA38:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FA50:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_0043FA58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA68u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043FA68u) [[unlikely]] return; }
L_0043FA68:
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 68u)));  if (t) { goto L_0043FA7C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043FA7Cu) [[unlikely]] return; }
L_0043FA7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043FA88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FA98u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043FA98u) [[unlikely]] return; }
L_0043FA98:
    set32(c.r[3], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 76u)));  if (t) { goto L_0043FAAC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043FAACu) [[unlikely]] return; }
L_0043FAAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043FAB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FAC8u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043FAC8u) [[unlikely]] return; }
L_0043FAC8:
    set32(c.r[3], ld32((c.r[2].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 84u)));  if (t) { goto L_0043FADC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FADCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0043FADCu) [[unlikely]] return; }
L_0043FADC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043FAE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[17], ld32((c.r[2].w[0] - 7700u)));
    c.r[2].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0043FB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB14u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043FB14u) [[unlikely]] return; }
L_0043FB14:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB20u); set32(c.r[4], c.r[16].w[0] + 88u);  if (depth < kMaxDepth) unit_00CF(c, 440u, depth + 1u); else { c.pc = 0x0043F2C0u; return; } if (c.pc != 0x0043FB20u) [[unlikely]] return; }
L_0043FB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043FB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB30u); set32(c.r[16], c.r[16].w[0] + 108u);  if (depth < kMaxDepth) unit_00CF(c, 512u, depth + 1u); else { c.pc = 0x0043FA58u; return; } if (c.pc != 0x0043FB30u) [[unlikely]] return; }
L_0043FB30:
    set32(c.r[17], 0u + 7u);
    c.budget -= 2;
L_0043FB38:
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0043FB4C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB48u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 532u, depth + 1u); else { c.pc = 0x0043FBB0u; return; } if (c.pc != 0x0043FB48u) [[unlikely]] return; }
L_0043FB48:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0043FB4C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 684u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FB38u | kUnwind; return; } goto L_0043FB38; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB60u); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_00CF(c, 545u, depth + 1u); else { c.pc = 0x0043FD28u; return; } if (c.pc != 0x0043FB60u) [[unlikely]] return; }
L_0043FB60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB68u);  if (depth < kMaxDepth) unit_00D3(c, 143u, depth + 1u); else { c.pc = 0x0044D6F8u; return; } if (c.pc != 0x0043FB68u) [[unlikely]] return; }
L_0043FB68:
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB74u); c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  if (depth < kMaxDepth) unit_00CF(c, 515u, depth + 1u); else { c.pc = 0x0043FA88u; return; } if (c.pc != 0x0043FB74u) [[unlikely]] return; }
L_0043FB74:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[16].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043FB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB84u);  if (depth < kMaxDepth) unit_00CF(c, 553u, depth + 1u); else { c.pc = 0x0043FDB0u; return; } if (c.pc != 0x0043FB84u) [[unlikely]] return; }
L_0043FB84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0043FB98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FB94u);  if (depth < kMaxDepth) unit_00CF(c, 518u, depth + 1u); else { c.pc = 0x0043FAB8u; return; } if (c.pc != 0x0043FB94u) [[unlikely]] return; }
L_0043FB94:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0043FB98:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FBB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0043FBC8; }
L_0043FBC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], ld32((c.r[2].w[0] - 7700u)));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0043FC50; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0043FC10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FC04u); set32(c.r[4], c.r[4].w[0] - 12376u);  if (depth < kMaxDepth) unit_00CF(c, 441u, depth + 1u); else { c.pc = 0x0043F2D8u; return; } if (c.pc != 0x0043FC04u) [[unlikely]] return; }
L_0043FC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043FC50; } }
    c.budget -= 1;
L_0043FC10:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[5].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043FC50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FC24u);  if (depth < kMaxDepth) unit_00CF(c, 548u, depth + 1u); else { c.pc = 0x0043FD58u; return; } if (c.pc != 0x0043FC24u) [[unlikely]] return; }
L_0043FC24:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { c.r[2].d[0] = 0ull + 0ull;  goto L_0043FC50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FC34u);  if (depth < kMaxDepth) unit_00CF(c, 553u, depth + 1u); else { c.pc = 0x0043FDB0u; return; } if (c.pc != 0x0043FC34u) [[unlikely]] return; }
L_0043FC34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0043FC04u | kUnwind; return; } goto L_0043FC04; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0043FC68; }
L_0043FC50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FC68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FC8Cu); set32(c.r[18], ld32((c.r[16].w[0] + 60u)));  if (depth < kMaxDepth) unit_00CF(c, 547u, depth + 1u); else { c.pc = 0x0043FD50u; return; } if (c.pc != 0x0043FC8Cu) [[unlikely]] return; }
L_0043FC8C:
    set32(c.r[17], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043FCB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCA8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 547u, depth + 1u); else { c.pc = 0x0043FD50u; return; } if (c.pc != 0x0043FCA8u) [[unlikely]] return; }
L_0043FCA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0043FD0C; } }
L_0043FCB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCBCu); st32((c.r[2].w[0] - 2072u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 549u, depth + 1u); else { c.pc = 0x0043FD60u; return; } if (c.pc != 0x0043FCBCu) [[unlikely]] return; }
L_0043FCBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 147u, depth + 1u); else { c.pc = 0x0044D770u; return; } if (c.pc != 0x0043FCC4u) [[unlikely]] return; }
L_0043FCC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 549u, depth + 1u); else { c.pc = 0x0043FD60u; return; } if (c.pc != 0x0043FCD0u) [[unlikely]] return; }
L_0043FCD0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0043FCE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), 0u);  if (t) { goto L_0043FCF4; } }
    c.budget -= 1;
L_0043FCE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCF0u); st32((c.r[16].w[0] + 104u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_00CF(c, 486u, depth + 1u); else { c.pc = 0x0043F7E0u; return; } if (c.pc != 0x0043FCF0u) [[unlikely]] return; }
L_0043FCF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0043FCF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FCFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 547u, depth + 1u); else { c.pc = 0x0043FD50u; return; } if (c.pc != 0x0043FCFCu) [[unlikely]] return; }
L_0043FCFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FD04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00D3(c, 142u, depth + 1u); else { c.pc = 0x0044D6D0u; return; } if (c.pc != 0x0043FD04u) [[unlikely]] return; }
L_0043FD04:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0043FD0C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FD28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FD3Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043FD3Cu) [[unlikely]] return; }
L_0043FD3C:
    st32((c.r[2].w[0] + 88u), c.r[16].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043FD50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 96u), c.r[5].w[0]);  c.pc = t; return; }
L_0043FD58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 96u)));  c.pc = t; return; }
L_0043FD60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 100u), c.r[5].w[0]);  c.pc = t; return; }
L_0043FD68:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0043FD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FD8Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043FD8Cu) [[unlikely]] return; }
L_0043FD8C:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { st32((c.r[16].w[0] + 92u), c.r[17].w[0]);  goto L_0043FD94; }
L_0043FD94:
    st32((c.r[2].w[0] + 36u), c.r[17].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0043FDB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FDC0u);  if (depth < kMaxDepth) unit_00CF(c, 77u, depth + 1u); else { c.pc = 0x0043CB18u; return; } if (c.pc != 0x0043FDC0u) [[unlikely]] return; }
L_0043FDC0:
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043FDD0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_0043FDD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FDECu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 269u, depth + 1u); else { c.pc = 0x0043DE60u; return; } if (c.pc != 0x0043FDECu) [[unlikely]] return; }
L_0043FDEC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FDF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CF(c, 551u, depth + 1u); else { c.pc = 0x0043FD70u; return; } if (c.pc != 0x0043FDF8u) [[unlikely]] return; }
L_0043FDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FE00u);  if (depth < kMaxDepth) unit_00CF(c, 445u, depth + 1u); else { c.pc = 0x0043F370u; return; } if (c.pc != 0x0043FE00u) [[unlikely]] return; }
L_0043FE00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FE0Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CF(c, 551u, depth + 1u); else { c.pc = 0x0043FD70u; return; } if (c.pc != 0x0043FE0Cu) [[unlikely]] return; }
L_0043FE0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FE14u);  if (depth < kMaxDepth) unit_00CF(c, 270u, depth + 1u); else { c.pc = 0x0043DE78u; return; } if (c.pc != 0x0043FE14u) [[unlikely]] return; }
L_0043FE14:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0043F3B0u | kUnwind; return; } goto L_0043F3B0; }
L_0043FE30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0043FE38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0043FE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FE50u);  if (depth < kMaxDepth) unit_00C5(c, 456u, depth + 1u); else { c.pc = 0x004176D0u; return; } if (c.pc != 0x0043FE50u) [[unlikely]] return; }
L_0043FE50:
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043FE68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0043FE80; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00418240u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 25u, depth); }
L_0043FE80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0043FE90:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_0043FEA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00417338u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 417u, depth); }
L_0043FEB8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004173C8u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 424u, depth); }
L_0043FED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FF04u); c.r[20].d[0] = c.r[8].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 442u, depth + 1u); else { c.pc = 0x004175E0u; return; } if (c.pc != 0x0043FF04u) [[unlikely]] return; }
L_0043FF04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FF1Cu); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 430u, depth + 1u); else { c.pc = 0x00417450u; return; } if (c.pc != 0x0043FF1Cu) [[unlikely]] return; }
L_0043FF1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00417A80u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 504u, depth); }
L_0043FF48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00417800u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 472u, depth); }
L_0043FF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0043FF74u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 488u, depth + 1u); else { c.pc = 0x00417908u; return; } if (c.pc != 0x0043FF74u) [[unlikely]] return; }
L_0043FF74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004175E0u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 442u, depth); }
L_0043FF88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x004176D0u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 456u, depth); }
L_0043FFA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8196u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419AB0u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 244u, depth); }
L_0043FFC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8196u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419C18u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 252u, depth); }
L_0043FFE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8196u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00419D60u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 264u, depth); }
}

}
