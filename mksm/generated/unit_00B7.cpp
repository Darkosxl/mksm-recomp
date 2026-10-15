#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B7[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0,
    0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49,
    0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0,
    57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0,
    0, 0, 68, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0,
    242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 317,
    0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 324,
    0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0,
    0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380,
    0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423,
    0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0,
    0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472,
    0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0,
};

void unit_00B7(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003DC000;
    case 2u: goto L_003DC030;
    case 3u: goto L_003DC078;
    case 4u: goto L_003DC0C4;
    case 5u: goto L_003DC0D8;
    case 6u: goto L_003DC168;
    case 7u: goto L_003DC1A4;
    case 8u: goto L_003DC214;
    case 9u: goto L_003DC21C;
    case 10u: goto L_003DC228;
    case 11u: goto L_003DC260;
    case 12u: goto L_003DC268;
    case 13u: goto L_003DC270;
    case 14u: goto L_003DC278;
    case 15u: goto L_003DC2A4;
    case 16u: goto L_003DC2B8;
    case 17u: goto L_003DC2CC;
    case 18u: goto L_003DC2E0;
    case 19u: goto L_003DC2F4;
    case 20u: goto L_003DC30C;
    case 21u: goto L_003DC320;
    case 22u: goto L_003DC344;
    case 23u: goto L_003DC34C;
    case 24u: goto L_003DC354;
    case 25u: goto L_003DC378;
    case 26u: goto L_003DC39C;
    case 27u: goto L_003DC3C0;
    case 28u: goto L_003DC3E4;
    case 29u: goto L_003DC408;
    case 30u: goto L_003DC448;
    case 31u: goto L_003DC480;
    case 32u: goto L_003DC498;
    case 33u: goto L_003DC4E4;
    case 34u: goto L_003DC4F4;
    case 35u: goto L_003DC508;
    case 36u: goto L_003DC518;
    case 37u: goto L_003DC528;
    case 38u: goto L_003DC558;
    case 39u: goto L_003DC560;
    case 40u: goto L_003DC590;
    case 41u: goto L_003DC5B0;
    case 42u: goto L_003DC5F8;
    case 43u: goto L_003DC620;
    case 44u: goto L_003DC688;
    case 45u: goto L_003DC6B0;
    case 46u: goto L_003DC6C8;
    case 47u: goto L_003DC6D4;
    case 48u: goto L_003DC6F4;
    case 49u: goto L_003DC6FC;
    case 50u: goto L_003DC704;
    case 51u: goto L_003DC70C;
    case 52u: goto L_003DC714;
    case 53u: goto L_003DC728;
    case 54u: goto L_003DC738;
    case 55u: goto L_003DC770;
    case 56u: goto L_003DC778;
    case 57u: goto L_003DC780;
    case 58u: goto L_003DC798;
    case 59u: goto L_003DC7A0;
    case 60u: goto L_003DC7A8;
    case 61u: goto L_003DC7D0;
    case 62u: goto L_003DC7DC;
    case 63u: goto L_003DC7F8;
    case 64u: goto L_003DC800;
    case 65u: goto L_003DC828;
    case 66u: goto L_003DC858;
    case 67u: goto L_003DC870;
    case 68u: goto L_003DC888;
    case 69u: goto L_003DC890;
    case 70u: goto L_003DC89C;
    case 71u: goto L_003DC8CC;
    case 72u: goto L_003DC8E8;
    case 73u: goto L_003DC904;
    case 74u: goto L_003DC928;
    case 75u: goto L_003DC994;
    case 76u: goto L_003DC99C;
    case 77u: goto L_003DC9B0;
    case 78u: goto L_003DCA00;
    case 79u: goto L_003DCA20;
    case 80u: goto L_003DCA50;
    case 81u: goto L_003DCA70;
    case 82u: goto L_003DCAF8;
    case 83u: goto L_003DCB0C;
    case 84u: goto L_003DCB1C;
    case 85u: goto L_003DCB30;
    case 86u: goto L_003DCB58;
    case 87u: goto L_003DCB80;
    case 88u: goto L_003DCB94;
    case 89u: goto L_003DCBC0;
    case 90u: goto L_003DCBE8;
    case 91u: goto L_003DCBFC;
    case 92u: goto L_003DCC28;
    case 93u: goto L_003DCC50;
    case 94u: goto L_003DCC64;
    case 95u: goto L_003DCC90;
    case 96u: goto L_003DCCB8;
    case 97u: goto L_003DCCCC;
    case 98u: goto L_003DCCF8;
    case 99u: goto L_003DCD20;
    case 100u: goto L_003DCD34;
    case 101u: goto L_003DCD60;
    case 102u: goto L_003DCD88;
    case 103u: goto L_003DCD9C;
    case 104u: goto L_003DCDAC;
    case 105u: goto L_003DCDC0;
    case 106u: goto L_003DCDD8;
    case 107u: goto L_003DCE20;
    case 108u: goto L_003DCE48;
    case 109u: goto L_003DCE58;
    case 110u: goto L_003DCE68;
    case 111u: goto L_003DCE80;
    case 112u: goto L_003DCE94;
    case 113u: goto L_003DCEA0;
    case 114u: goto L_003DCEC0;
    case 115u: goto L_003DCF08;
    case 116u: goto L_003DCF30;
    case 117u: goto L_003DCF40;
    case 118u: goto L_003DCF50;
    case 119u: goto L_003DCF68;
    case 120u: goto L_003DCF7C;
    case 121u: goto L_003DCF88;
    case 122u: goto L_003DCFAC;
    case 123u: goto L_003DCFC8;
    case 124u: goto L_003DCFF0;
    case 125u: goto L_003DD01C;
    case 126u: goto L_003DD02C;
    case 127u: goto L_003DD03C;
    case 128u: goto L_003DD054;
    case 129u: goto L_003DD060;
    case 130u: goto L_003DD08C;
    case 131u: goto L_003DD0B8;
    case 132u: goto L_003DD0F4;
    case 133u: goto L_003DD110;
    case 134u: goto L_003DD15C;
    case 135u: goto L_003DD174;
    case 136u: goto L_003DD184;
    case 137u: goto L_003DD19C;
    case 138u: goto L_003DD1B0;
    case 139u: goto L_003DD1C4;
    case 140u: goto L_003DD1E4;
    case 141u: goto L_003DD1EC;
    case 142u: goto L_003DD220;
    case 143u: goto L_003DD230;
    case 144u: goto L_003DD240;
    case 145u: goto L_003DD258;
    case 146u: goto L_003DD264;
    case 147u: goto L_003DD2A0;
    case 148u: goto L_003DD2B4;
    case 149u: goto L_003DD2C4;
    case 150u: goto L_003DD2D8;
    case 151u: goto L_003DD314;
    case 152u: goto L_003DD328;
    case 153u: goto L_003DD338;
    case 154u: goto L_003DD350;
    case 155u: goto L_003DD358;
    case 156u: goto L_003DD380;
    case 157u: goto L_003DD3AC;
    case 158u: goto L_003DD3BC;
    case 159u: goto L_003DD3CC;
    case 160u: goto L_003DD3E4;
    case 161u: goto L_003DD3F0;
    case 162u: goto L_003DD418;
    case 163u: goto L_003DD450;
    case 164u: goto L_003DD464;
    case 165u: goto L_003DD470;
    case 166u: goto L_003DD4A4;
    case 167u: goto L_003DD4B8;
    case 168u: goto L_003DD4C8;
    case 169u: goto L_003DD4DC;
    case 170u: goto L_003DD508;
    case 171u: goto L_003DD530;
    case 172u: goto L_003DD544;
    case 173u: goto L_003DD570;
    case 174u: goto L_003DD598;
    case 175u: goto L_003DD5AC;
    case 176u: goto L_003DD5BC;
    case 177u: goto L_003DD5D0;
    case 178u: goto L_003DD5E0;
    case 179u: goto L_003DD5F4;
    case 180u: goto L_003DD620;
    case 181u: goto L_003DD648;
    case 182u: goto L_003DD65C;
    case 183u: goto L_003DD688;
    case 184u: goto L_003DD6B0;
    case 185u: goto L_003DD6C4;
    case 186u: goto L_003DD6F0;
    case 187u: goto L_003DD718;
    case 188u: goto L_003DD72C;
    case 189u: goto L_003DD758;
    case 190u: goto L_003DD780;
    case 191u: goto L_003DD794;
    case 192u: goto L_003DD7C0;
    case 193u: goto L_003DD7E8;
    case 194u: goto L_003DD7FC;
    case 195u: goto L_003DD828;
    case 196u: goto L_003DD850;
    case 197u: goto L_003DD864;
    case 198u: goto L_003DD890;
    case 199u: goto L_003DD8B8;
    case 200u: goto L_003DD8DC;
    case 201u: goto L_003DD900;
    case 202u: goto L_003DD934;
    case 203u: goto L_003DD948;
    case 204u: goto L_003DD970;
    case 205u: goto L_003DD998;
    case 206u: goto L_003DD9AC;
    case 207u: goto L_003DD9D8;
    case 208u: goto L_003DDA00;
    case 209u: goto L_003DDA14;
    case 210u: goto L_003DDA3C;
    case 211u: goto L_003DDA60;
    case 212u: goto L_003DDA74;
    case 213u: goto L_003DDAA0;
    case 214u: goto L_003DDAC8;
    case 215u: goto L_003DDADC;
    case 216u: goto L_003DDAE8;
    case 217u: goto L_003DDB28;
    case 218u: goto L_003DDB3C;
    case 219u: goto L_003DDB68;
    case 220u: goto L_003DDB90;
    case 221u: goto L_003DDBB8;
    case 222u: goto L_003DDBE0;
    case 223u: goto L_003DDBF4;
    case 224u: goto L_003DDC20;
    case 225u: goto L_003DDC48;
    case 226u: goto L_003DDC5C;
    case 227u: goto L_003DDC88;
    case 228u: goto L_003DDCB0;
    case 229u: goto L_003DDCD4;
    case 230u: goto L_003DDCE0;
    case 231u: goto L_003DDD30;
    case 232u: goto L_003DDD68;
    case 233u: goto L_003DDDB8;
    case 234u: goto L_003DDDF0;
    case 235u: goto L_003DDE04;
    case 236u: goto L_003DDE14;
    case 237u: goto L_003DDE28;
    case 238u: goto L_003DDE38;
    case 239u: goto L_003DDE4C;
    case 240u: goto L_003DDE5C;
    case 241u: goto L_003DDE70;
    case 242u: goto L_003DDE80;
    case 243u: goto L_003DDE94;
    case 244u: goto L_003DDEA4;
    case 245u: goto L_003DDEB8;
    case 246u: goto L_003DDEC8;
    case 247u: goto L_003DDEDC;
    case 248u: goto L_003DDEEC;
    case 249u: goto L_003DDF00;
    case 250u: goto L_003DDF10;
    case 251u: goto L_003DDF24;
    case 252u: goto L_003DDF34;
    case 253u: goto L_003DDF48;
    case 254u: goto L_003DDF58;
    case 255u: goto L_003DDF8C;
    case 256u: goto L_003DDFB0;
    case 257u: goto L_003DDFBC;
    case 258u: goto L_003DDFD4;
    case 259u: goto L_003DDFDC;
    case 260u: goto L_003DE000;
    case 261u: goto L_003DE010;
    case 262u: goto L_003DE060;
    case 263u: goto L_003DE088;
    case 264u: goto L_003DE0C0;
    case 265u: goto L_003DE0D8;
    case 266u: goto L_003DE108;
    case 267u: goto L_003DE110;
    case 268u: goto L_003DE140;
    case 269u: goto L_003DE148;
    case 270u: goto L_003DE15C;
    case 271u: goto L_003DE16C;
    case 272u: goto L_003DE180;
    case 273u: goto L_003DE190;
    case 274u: goto L_003DE1A4;
    case 275u: goto L_003DE1B4;
    case 276u: goto L_003DE1C8;
    case 277u: goto L_003DE1D4;
    case 278u: goto L_003DE208;
    case 279u: goto L_003DE218;
    case 280u: goto L_003DE238;
    case 281u: goto L_003DE26C;
    case 282u: goto L_003DE27C;
    case 283u: goto L_003DE28C;
    case 284u: goto L_003DE2A8;
    case 285u: goto L_003DE2B4;
    case 286u: goto L_003DE2E8;
    case 287u: goto L_003DE2F8;
    case 288u: goto L_003DE318;
    case 289u: goto L_003DE320;
    case 290u: goto L_003DE344;
    case 291u: goto L_003DE350;
    case 292u: goto L_003DE3A0;
    case 293u: goto L_003DE3D0;
    case 294u: goto L_003DE408;
    case 295u: goto L_003DE484;
    case 296u: goto L_003DE4AC;
    case 297u: goto L_003DE4C4;
    case 298u: goto L_003DE4F0;
    case 299u: goto L_003DE4F8;
    case 300u: goto L_003DE558;
    case 301u: goto L_003DE588;
    case 302u: goto L_003DE5AC;
    case 303u: goto L_003DE5B8;
    case 304u: goto L_003DE69C;
    case 305u: goto L_003DE6A4;
    case 306u: goto L_003DE6B8;
    case 307u: goto L_003DE6C8;
    case 308u: goto L_003DE6DC;
    case 309u: goto L_003DE6EC;
    case 310u: goto L_003DE700;
    case 311u: goto L_003DE710;
    case 312u: goto L_003DE724;
    case 313u: goto L_003DE734;
    case 314u: goto L_003DE748;
    case 315u: goto L_003DE758;
    case 316u: goto L_003DE76C;
    case 317u: goto L_003DE77C;
    case 318u: goto L_003DE790;
    case 319u: goto L_003DE7A0;
    case 320u: goto L_003DE7B4;
    case 321u: goto L_003DE7C4;
    case 322u: goto L_003DE7D8;
    case 323u: goto L_003DE7E8;
    case 324u: goto L_003DE7FC;
    case 325u: goto L_003DE80C;
    case 326u: goto L_003DE820;
    case 327u: goto L_003DE830;
    case 328u: goto L_003DE844;
    case 329u: goto L_003DE854;
    case 330u: goto L_003DE868;
    case 331u: goto L_003DE878;
    case 332u: goto L_003DE8AC;
    case 333u: goto L_003DE8EC;
    case 334u: goto L_003DE910;
    case 335u: goto L_003DE944;
    case 336u: goto L_003DE950;
    case 337u: goto L_003DE97C;
    case 338u: goto L_003DE990;
    case 339u: goto L_003DE9A4;
    case 340u: goto L_003DE9B8;
    case 341u: goto L_003DEA00;
    case 342u: goto L_003DEA08;
    case 343u: goto L_003DEA1C;
    case 344u: goto L_003DEA2C;
    case 345u: goto L_003DEA40;
    case 346u: goto L_003DEA50;
    case 347u: goto L_003DEA64;
    case 348u: goto L_003DEA74;
    case 349u: goto L_003DEA88;
    case 350u: goto L_003DEA98;
    case 351u: goto L_003DEAAC;
    case 352u: goto L_003DEABC;
    case 353u: goto L_003DEAD0;
    case 354u: goto L_003DEAE0;
    case 355u: goto L_003DEAEC;
    case 356u: goto L_003DEB18;
    case 357u: goto L_003DEB3C;
    case 358u: goto L_003DEB88;
    case 359u: goto L_003DEB90;
    case 360u: goto L_003DEBD0;
    case 361u: goto L_003DEBE0;
    case 362u: goto L_003DEBF8;
    case 363u: goto L_003DEC00;
    case 364u: goto L_003DEC3C;
    case 365u: goto L_003DEC50;
    case 366u: goto L_003DEC90;
    case 367u: goto L_003DEC98;
    case 368u: goto L_003DECA4;
    case 369u: goto L_003DECCC;
    case 370u: goto L_003DECF0;
    case 371u: goto L_003DED1C;
    case 372u: goto L_003DED34;
    case 373u: goto L_003DED4C;
    case 374u: goto L_003DED70;
    case 375u: goto L_003DED80;
    case 376u: goto L_003DEDD0;
    case 377u: goto L_003DEDF8;
    case 378u: goto L_003DEE28;
    case 379u: goto L_003DEE68;
    case 380u: goto L_003DEE7C;
    case 381u: goto L_003DEE8C;
    case 382u: goto L_003DEEA0;
    case 383u: goto L_003DEEB0;
    case 384u: goto L_003DEEC4;
    case 385u: goto L_003DEED4;
    case 386u: goto L_003DEEF8;
    case 387u: goto L_003DEF10;
    case 388u: goto L_003DEF24;
    case 389u: goto L_003DEF58;
    case 390u: goto L_003DEF68;
    case 391u: goto L_003DEF80;
    case 392u: goto L_003DEF94;
    case 393u: goto L_003DEFC8;
    case 394u: goto L_003DEFD8;
    case 395u: goto L_003DEFF8;
    case 396u: goto L_003DF010;
    case 397u: goto L_003DF098;
    case 398u: goto L_003DF0B4;
    case 399u: goto L_003DF0C4;
    case 400u: goto L_003DF10C;
    case 401u: goto L_003DF120;
    case 402u: goto L_003DF178;
    case 403u: goto L_003DF1C0;
    case 404u: goto L_003DF1DC;
    case 405u: goto L_003DF218;
    case 406u: goto L_003DF228;
    case 407u: goto L_003DF264;
    case 408u: goto L_003DF280;
    case 409u: goto L_003DF2A0;
    case 410u: goto L_003DF2B0;
    case 411u: goto L_003DF2C8;
    case 412u: goto L_003DF2D8;
    case 413u: goto L_003DF2E0;
    case 414u: goto L_003DF314;
    case 415u: goto L_003DF324;
    case 416u: goto L_003DF344;
    case 417u: goto L_003DF34C;
    case 418u: goto L_003DF380;
    case 419u: goto L_003DF390;
    case 420u: goto L_003DF3B0;
    case 421u: goto L_003DF3B8;
    case 422u: goto L_003DF3EC;
    case 423u: goto L_003DF3FC;
    case 424u: goto L_003DF41C;
    case 425u: goto L_003DF424;
    case 426u: goto L_003DF430;
    case 427u: goto L_003DF458;
    case 428u: goto L_003DF48C;
    case 429u: goto L_003DF4B0;
    case 430u: goto L_003DF4BC;
    case 431u: goto L_003DF4F0;
    case 432u: goto L_003DF500;
    case 433u: goto L_003DF510;
    case 434u: goto L_003DF528;
    case 435u: goto L_003DF530;
    case 436u: goto L_003DF554;
    case 437u: goto L_003DF560;
    case 438u: goto L_003DF5B0;
    case 439u: goto L_003DF5D0;
    case 440u: goto L_003DF61C;
    case 441u: goto L_003DF648;
    case 442u: goto L_003DF6B4;
    case 443u: goto L_003DF6E8;
    case 444u: goto L_003DF73C;
    case 445u: goto L_003DF748;
    case 446u: goto L_003DF754;
    case 447u: goto L_003DF764;
    case 448u: goto L_003DF778;
    case 449u: goto L_003DF78C;
    case 450u: goto L_003DF7A0;
    case 451u: goto L_003DF7B4;
    case 452u: goto L_003DF7E0;
    case 453u: goto L_003DF834;
    case 454u: goto L_003DF848;
    case 455u: goto L_003DF860;
    case 456u: goto L_003DF938;
    case 457u: goto L_003DF99C;
    case 458u: goto L_003DF9F0;
    case 459u: goto L_003DFA60;
    case 460u: goto L_003DFAA4;
    case 461u: goto L_003DFB40;
    case 462u: goto L_003DFB84;
    case 463u: goto L_003DFBAC;
    case 464u: goto L_003DFBBC;
    case 465u: goto L_003DFBF0;
    case 466u: goto L_003DFC00;
    case 467u: goto L_003DFC28;
    case 468u: goto L_003DFC38;
    case 469u: goto L_003DFC70;
    case 470u: goto L_003DFD04;
    case 471u: goto L_003DFD14;
    case 472u: goto L_003DFD7C;
    case 473u: goto L_003DFD8C;
    case 474u: goto L_003DFDA8;
    case 475u: goto L_003DFE10;
    case 476u: goto L_003DFE34;
    case 477u: goto L_003DFE44;
    case 478u: goto L_003DFED4;
    case 479u: goto L_003DFF08;
    case 480u: goto L_003DFF24;
    case 481u: goto L_003DFF70;
    case 482u: goto L_003DFF88;
    case 483u: goto L_003DFF90;
    case 484u: goto L_003DFFC4;
    case 485u: goto L_003DFFD4;
    case 486u: goto L_003DFFE8;
    default: bad_entry(c, 0x003DC000u); return;
    }
L_003DC000:
    c.r[3].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[30], c.r[29].w[0] + 52u);
    set32(c.r[2], c.r[16].w[0] + 3u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[16].d[0];
    c.budget -= 7;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));  if (t) { goto L_003DC058; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_003DC030:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC030u | kUnwind; return; } goto L_003DC030; } }
L_003DC058:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC078u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 101u, depth + 1u); else { c.pc = 0x003F25F0u; return; } if (c.pc != 0x003DC078u) [[unlikely]] return; }
L_003DC078:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[23].d[0] != 0ull) { c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_003DC1F8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[18], c.r[2].w[0] - 22720u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[16], ld32((c.r[18].w[0] + 2264u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] << 1);  if (t) { goto L_003DC0C4; } }
    set32(c.r[6], 0u + 16u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC0C4u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003DC0C4u) [[unlikely]] return; }
L_003DC0C4:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[18].w[0] + 2212u)));  if (t) { goto L_003DC12C; } }
    c.budget -= 1;
L_003DC0D8:
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 21;
L_003DC12C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] - 22720u);  if (t) { goto L_003DC144; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC0D8u | kUnwind; return; } goto L_003DC0D8; }
    set32(c.r[2], c.r[19].w[0] - 22720u);
    c.budget -= 1;
L_003DC144:
    set32(c.r[17], ld32((c.r[2].w[0] + 2252u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DC1F8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_003DC1F8; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[19].d[0] = c.r[19].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_003DC168:
    c.r[2].d[0] = c.r[2].d[0] & c.r[22].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0])));  goto L_003DC1E0; }
    set32(c.r[18], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[19].d[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003DC1A4; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC1A4u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x003DC1A4u) [[unlikely]] return; }
L_003DC1A4:
    st32((c.r[20].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[3], c.r[18].w[0] << 4);
    set32(c.r[4], ld32((c.r[20].w[0])));
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[2] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 44u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[17], ld32((c.r[17].w[0])));
    c.budget -= 15;
L_003DC1E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DC1F8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC168u | kUnwind; return; } goto L_003DC168; }
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_003DC1F8:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[10].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC214u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DC214u) [[unlikely]] return; }
L_003DC214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC21Cu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 56u, depth + 1u); else { c.pc = 0x003E0BD8u; return; } if (c.pc != 0x003DC21Cu) [[unlikely]] return; }
L_003DC21C:
    set32(c.r[4], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC228u); c.r[5].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 97u, depth + 1u); else { c.pc = 0x003E1118u; return; } if (c.pc != 0x003DC228u) [[unlikely]] return; }
L_003DC228:
    c.r[2].d[0] = c.r[23].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003DC260:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003DC268:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003DC270:
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 2;
L_003DC278:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1644u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC2A4u); set32(c.r[5], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC2A4u) [[unlikely]] return; }
L_003DC2A4:
    set32(c.r[5], ld32((c.r[16].w[0] + 508u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1576u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC2B8u); set32(c.r[5], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC2B8u) [[unlikely]] return; }
L_003DC2B8:
    set32(c.r[5], ld32((c.r[16].w[0] + 508u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1572u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC2CCu); set32(c.r[5], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC2CCu) [[unlikely]] return; }
L_003DC2CC:
    set32(c.r[5], ld32((c.r[16].w[0] + 508u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1584u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC2E0u); set32(c.r[5], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC2E0u) [[unlikely]] return; }
L_003DC2E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 508u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 1580u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC2F4u); set32(c.r[5], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC2F4u) [[unlikely]] return; }
L_003DC2F4:
    set32(c.r[5], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2428u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC30Cu); set32(c.r[5], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC30Cu) [[unlikely]] return; }
L_003DC30C:
    set32(c.r[5], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2432u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC320u); set32(c.r[5], c.r[5].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC320u) [[unlikely]] return; }
L_003DC320:
    set32(c.r[4], c.r[16].w[0] + 2420u);
    st32((c.r[16].w[0] + 1572u), 0u);
    st32((c.r[16].w[0] + 1576u), 0u);
    st32((c.r[16].w[0] + 1644u), 0u);
    st32((c.r[16].w[0] + 1580u), 0u);
    st32((c.r[16].w[0] + 1584u), 0u);
    st32((c.r[16].w[0] + 2428u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC344u); st32((c.r[16].w[0] + 2432u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC344u) [[unlikely]] return; }
L_003DC344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC34Cu); set32(c.r[4], c.r[16].w[0] + 2424u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC34Cu) [[unlikely]] return; }
L_003DC34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC354u); set32(c.r[4], c.r[16].w[0] + 2496u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC354u) [[unlikely]] return; }
L_003DC354:
    set32(c.r[5], ld32((c.r[16].w[0] + 2436u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DC378; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC378u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DC378u) [[unlikely]] return; }
L_003DC378:
    set32(c.r[5], ld32((c.r[16].w[0] + 2444u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DC39C; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC39Cu); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DC39Cu) [[unlikely]] return; }
L_003DC39C:
    set32(c.r[5], ld32((c.r[16].w[0] + 2448u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DC3C0; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC3C0u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DC3C0u) [[unlikely]] return; }
L_003DC3C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 492u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DC3E4; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC3E4u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DC3E4u) [[unlikely]] return; }
L_003DC3E4:
    set32(c.r[5], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DC408; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC408u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DC408u) [[unlikely]] return; }
L_003DC408:
    set32(c.r[5], ld32((c.r[16].w[0] + 516u)));
    st32((c.r[16].w[0] + 488u), 0u);
    st32((c.r[16].w[0] + 2436u), 0u);
    st32((c.r[16].w[0] + 2448u), 0u);
    st32((c.r[16].w[0] + 492u), 0u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[16].w[0] + 2444u), 0u);  if (t) { goto L_003DC44C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DC44C; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC448u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DC448u) [[unlikely]] return; }
L_003DC448:
    st32((c.r[16].w[0] + 516u), 0u);
    c.budget -= 1;
L_003DC44C:
    set32(c.r[16], c.r[17].w[0] - 22720u);
    set32(c.r[5], ld32((c.r[16].w[0] + 524u)));
    c.budget -= 4;
    if (c.r[5].d[0] == 0ull) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_003DC488; }
    set32(c.r[2], ld32((c.r[16].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DC484; } }
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC480u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DC480u) [[unlikely]] return; }
L_003DC480:
    st32((c.r[16].w[0] + 524u), 0u);
    c.budget -= 1;
L_003DC484:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003DC488:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DC498:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 2424u)));
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003DC4E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC4E4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 162u, depth + 1u); else { c.pc = 0x003EDB50u; return; } if (c.pc != 0x003DC4E4u) [[unlikely]] return; }
L_003DC4E4:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 1564u)));  goto L_003DC544; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC4F4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 131u, depth + 1u); else { c.pc = 0x003E95D0u; return; } if (c.pc != 0x003DC4F4u) [[unlikely]] return; }
L_003DC4F4:
    set32(c.r[16], ld32((c.r[17].w[0] + 2252u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DC578; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 2;
L_003DC508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003DC520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC518u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 138u, depth + 1u); else { c.pc = 0x003E9718u; return; } if (c.pc != 0x003DC518u) [[unlikely]] return; }
L_003DC518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 2252u)));  if (t) { goto L_003DC534; } }
L_003DC520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC528u); set32(c.r[5], 0u + 24u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC528u) [[unlikely]] return; }
L_003DC528:
    st32((c.r[17].w[0] + 2252u), 0u);
    st32((c.r[17].w[0] + 2260u), 0u);
    set32(c.r[16], ld32((c.r[17].w[0] + 2252u)));
    c.budget -= 3;
L_003DC534:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC508u | kUnwind; return; } goto L_003DC508; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DC578; } }
L_003DC544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DC578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 2252u)));  if (t) { goto L_003DC564; } }
    c.budget -= 1;
L_003DC558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC560u); set32(c.r[4], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00BB(c, 236u, depth + 1u); else { c.pc = 0x003EEA28u; return; } if (c.pc != 0x003DC560u) [[unlikely]] return; }
L_003DC560:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003DC564:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DC578; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC558u | kUnwind; return; } goto L_003DC558; } }
L_003DC578:
    set32(c.r[4], c.r[2].w[0] - 22720u);
    st32((c.r[4].w[0] + 1564u), 0u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == 0ull; st32((c.r[4].w[0] + 2320u), 0u);  if (t) { goto L_003DC768; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 2212u)));  if (t) { goto L_003DC5D0; } }
L_003DC590:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003DC5D0; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003DC5CC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 3;
L_003DC5B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC5B0u | kUnwind; return; } goto L_003DC5B0; } }
L_003DC5CC:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003DC5D0:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003DC5E8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC590u | kUnwind; return; } goto L_003DC590; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003DC5E8:
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 2212u)));  if (t) { goto L_003DC658; } }
    c.budget -= 1;
L_003DC5F8:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003DC658; }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003DC658; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003DC654; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 1;
L_003DC620:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_003DC62C; }
L_003DC62C:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[18].w[0])));  goto L_003DC64C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 4;
L_003DC64C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC620u | kUnwind; return; } goto L_003DC620; } }
L_003DC654:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003DC658:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003DC670; }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC5F8u | kUnwind; return; } goto L_003DC5F8; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003DC670:
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[17], ld32((c.r[2].w[0] + 2212u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DC7C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 2;
L_003DC688:
    set32(c.r[20], c.r[17].w[0] + 44u);
    set32(c.r[21], c.r[17].w[0] + 48u);
    set32(c.r[22], c.r[17].w[0] + 40u);
    set32(c.r[23], c.r[17].w[0] + 36u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[17].w[0] + 32u);  if (t) { goto L_003DC6EC; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003DC6EC; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 1;
L_003DC6B0:
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[19].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] | c.r[19].d[0];  if (t) { goto L_003DC6DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC6C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC6C8u) [[unlikely]] return; }
L_003DC6C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC6D4u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC6D4u) [[unlikely]] return; }
L_003DC6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[18].w[0])));  if (t) { goto L_003DC6E4; } }
L_003DC6DC:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 2;
L_003DC6E4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC6B0u | kUnwind; return; } goto L_003DC6B0; } }
L_003DC6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC6F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC6F4u) [[unlikely]] return; }
L_003DC6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC6FCu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC6FCu) [[unlikely]] return; }
L_003DC6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC704u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC704u) [[unlikely]] return; }
L_003DC704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC70Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC70Cu) [[unlikely]] return; }
L_003DC70C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC714u); c.r[4].d[0] = c.r[30].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC714u) [[unlikely]] return; }
L_003DC714:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003DC730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC728u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 160u, depth + 1u); else { c.pc = 0x003E1C48u; return; } if (c.pc != 0x003DC728u) [[unlikely]] return; }
L_003DC728:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DC750; } }
L_003DC730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC738u); set32(c.r[5], 0u + 64u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC738u) [[unlikely]] return; }
L_003DC738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st32((c.r[2].w[0] + 2212u), 0u);
    st32((c.r[2].w[0] + 2224u), 0u);
    st32((c.r[2].w[0] + 2228u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 6;
L_003DC750:
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[17], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 4;
    if (c.r[17].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC688u | kUnwind; return; } goto L_003DC688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DC7C0; } }
L_003DC768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[4].w[0] + 2212u)));  if (t) { goto L_003DC7AC; } }
L_003DC770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC778u); set32(c.r[4], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_00BB(c, 236u, depth + 1u); else { c.pc = 0x003EEA28u; return; } if (c.pc != 0x003DC778u) [[unlikely]] return; }
L_003DC778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC780u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_00BB(c, 236u, depth + 1u); else { c.pc = 0x003EEA28u; return; } if (c.pc != 0x003DC780u) [[unlikely]] return; }
L_003DC780:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[17].w[0] + 28u)));  goto L_003DC7AC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC798u); set32(c.r[4], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_00BB(c, 236u, depth + 1u); else { c.pc = 0x003EEA28u; return; } if (c.pc != 0x003DC798u) [[unlikely]] return; }
L_003DC798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC7A0u); set32(c.r[4], c.r[17].w[0] + 36u);  if (depth < kMaxDepth) unit_00BB(c, 236u, depth + 1u); else { c.pc = 0x003EEA28u; return; } if (c.pc != 0x003DC7A0u) [[unlikely]] return; }
L_003DC7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC7A8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_00BB(c, 236u, depth + 1u); else { c.pc = 0x003EEA28u; return; } if (c.pc != 0x003DC7A8u) [[unlikely]] return; }
L_003DC7A8:
    set32(c.r[17], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_003DC7AC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DC7C0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC770u | kUnwind; return; } goto L_003DC770; } }
L_003DC7C0:
    set32(c.r[16], c.r[2].w[0] - 20304u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC7D0u); set32(c.r[16], c.r[16].w[0] - 2416u);  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003DC7D0u) [[unlikely]] return; }
L_003DC7D0:
    set32(c.r[4], ld32((c.r[16].w[0] + 2196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC7DCu); set32(c.r[5], ld32((c.r[16].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC7DCu) [[unlikely]] return; }
L_003DC7DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 2408u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 2196u), 0u);  if (t) { goto L_003DC814; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003DC814; } }
    c.budget -= 1;
L_003DC7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC800u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003DC800u) [[unlikely]] return; }
L_003DC800:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC7F8u | kUnwind; return; } goto L_003DC7F8; } }
L_003DC814:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    st32((c.r[2].w[0] + 2412u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC828u); st32((c.r[2].w[0] + 2408u), 0u);  if (depth < kMaxDepth) unit_00BB(c, 152u, depth + 1u); else { c.pc = 0x003ED8C8u; return; } if (c.pc != 0x003DC828u) [[unlikely]] return; }
L_003DC828:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003DC858:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC870u);  if (depth < kMaxDepth) unit_00B7(c, 455u, depth + 1u); else { c.pc = 0x003DF860u; return; } if (c.pc != 0x003DC870u) [[unlikely]] return; }
L_003DC870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20192u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003DC888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC888u);  if (depth < kMaxDepth) unit_00B8(c, 62u, depth + 1u); else { c.pc = 0x003E0C40u; return; } if (c.pc != 0x003DC888u) [[unlikely]] return; }
L_003DC888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC890u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (depth < kMaxDepth) unit_00B7(c, 443u, depth + 1u); else { c.pc = 0x003DF6E8u; return; } if (c.pc != 0x003DC890u) [[unlikely]] return; }
L_003DC890:
    set32(c.r[16], c.r[16].w[0] - 22188u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC89Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 31u, depth + 1u); else { c.pc = 0x003E0698u; return; } if (c.pc != 0x003DC89Cu) [[unlikely]] return; }
L_003DC89C:
    set32(c.r[16], c.r[16].w[0] - 532u);
    set32(c.r[2], ld32((c.r[16].w[0] + 356u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DC8C4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DC8D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 352u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] - 22720u);  if (t) { goto L_003DC8D4; } }
L_003DC8C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC8CCu);  if (depth < kMaxDepth) unit_00BD(c, 218u, depth + 1u); else { c.pc = 0x003F7AF0u; return; } if (c.pc != 0x003DC8CCu) [[unlikely]] return; }
L_003DC8CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003DC8D0:
    set32(c.r[16], c.r[3].w[0] - 22720u);
    c.budget -= 1;
L_003DC8D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 400u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003DC8E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC8E8u);  if (depth < kMaxDepth) unit_00BE(c, 12u, depth + 1u); else { c.pc = 0x003F81C8u; return; } if (c.pc != 0x003DC8E8u) [[unlikely]] return; }
L_003DC8E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 396u)));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);  goto L_003DC9A0; }
    set32(c.r[4], ld32((c.r[16].w[0] + 2428u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC904u); set32(c.r[6], ld32((c.r[16].w[0] + 2432u)));  if (depth < kMaxDepth) unit_00BE(c, 162u, depth + 1u); else { c.pc = 0x003F9DA0u; return; } if (c.pc != 0x003DC904u) [[unlikely]] return; }
L_003DC904:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[17].w[0] - 22720u);  goto L_003DC988; }
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[8], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[8].sd[0] <= 0; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003DC960; } }
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[8].w[0] << 2);
    c.budget -= 2;
L_003DC928:
    set32(c.r[3], ld32((c.r[9].w[0] + 2432u)));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], ld32((c.r[9].w[0] + 2432u)));
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[4].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DC928u | kUnwind; return; } goto L_003DC928; } }
L_003DC960:
    set32(c.r[3], c.r[17].w[0] - 22720u);
    set32(c.r[4], c.r[8].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0] + 2432u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[16], c.r[17].w[0] - 22720u);
    c.budget -= 10;
L_003DC988:
    set32(c.r[4], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC994u); set32(c.r[5], ld32((c.r[16].w[0] + 2432u)));  if (depth < kMaxDepth) unit_00BD(c, 150u, depth + 1u); else { c.pc = 0x003F6B10u; return; } if (c.pc != 0x003DC994u) [[unlikely]] return; }
L_003DC994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DC99Cu); set32(c.r[4], ld32((c.r[16].w[0] + 2432u)));  if (depth < kMaxDepth) unit_00BD(c, 240u, depth + 1u); else { c.pc = 0x003F7EF8u; return; } if (c.pc != 0x003DC99Cu) [[unlikely]] return; }
L_003DC99C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003DC9A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DC9B0:
    set32(c.r[29], c.r[29].w[0] - 720u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[2].w[0] - 22188u);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 512u), c.r[5].w[0]);
    c.budget -= 17;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; st32((c.r[29].w[0] + 532u), 0u);  if (t) { goto L_003DCA00; } }
    st8((c.r[2].w[0] - 22188u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCA00u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_00DD(c, 79u, depth + 1u); else { c.pc = 0x00475020u; return; } if (c.pc != 0x003DCA00u) [[unlikely]] return; }
L_003DCA00:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DF67C; } }
    set32(c.r[5], c.r[2].w[0] - 4447u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[22].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003DCA34; } }
    c.budget -= 1;
L_003DCA20:
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 532u)));  if (t) { goto L_003DF680; } }
L_003DCA34:
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCA20u | kUnwind; return; } goto L_003DCA20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF670; } }
L_003DCA50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[5], c.r[22].w[0] - 4447u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 7;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DCA98; }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003DCA70:
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003DCA94; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCA70u | kUnwind; return; } goto L_003DCA70; } }
L_003DCA94:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DCA98:
    set32(c.r[3], 0u + 45u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[30], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DCAB4; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[30], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
L_003DCAB4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ld8((c.r[30].w[0]));  if (t) { goto L_003DF67C; } }
    set32(c.r[2], c.r[3].w[0] - 65u);
    set32(c.r[3], c.r[30].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 24);
    st32((c.r[29].w[0] + 512u), c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(54ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DF5B0; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32176u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003DC000u < 16384u) { entry = entries_00B7[(t - 0x003DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DCAF8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB0Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCB0Cu) [[unlikely]] return; }
L_003DCB0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22672u), c.r[2].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCB1C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26984u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB30u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCB30u) [[unlikely]] return; }
L_003DCB30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DF5D0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[6].w[0]);  goto L_003DF5D0; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003DCB58:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DF5D4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCB58u | kUnwind; return; } goto L_003DCB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCB80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 26992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCB94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCB94u) [[unlikely]] return; }
L_003DCB94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DF5D0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[6].w[0]);  goto L_003DF5D0; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003DCBC0:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DF5D4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCBC0u | kUnwind; return; } goto L_003DCBC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCBE8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27008u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCBFCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCBFCu) [[unlikely]] return; }
L_003DCBFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], 0u + 14u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DF5D0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[6].w[0]);  goto L_003DF5D0; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003DCC28:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DF5D4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCC28u | kUnwind; return; } goto L_003DCC28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCC50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCC64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCC64u) [[unlikely]] return; }
L_003DCC64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DF5D0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[6].w[0]);  goto L_003DF5D0; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003DCC90:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DF5D4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCC90u | kUnwind; return; } goto L_003DCC90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCCB8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCCCCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCCCCu) [[unlikely]] return; }
L_003DCCCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DF5D0; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[6].w[0]);  goto L_003DF5D0; }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_003DCCF8:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DF5D4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCCF8u | kUnwind; return; } goto L_003DCCF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCD20:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCD34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCD34u) [[unlikely]] return; }
L_003DCD34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DF5D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003DCD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 220u), c.r[6].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCD60:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DF5D4; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCD60u | kUnwind; return; } goto L_003DCD60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[6].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCD88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCD9Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCD9Cu) [[unlikely]] return; }
L_003DCD9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22376u), c.r[2].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCDAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCDC0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCDC0u) [[unlikely]] return; }
L_003DCDC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 476u), c.r[3].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCDD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], c.r[22].w[0] - 4447u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_003DCE2C; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 45u);  if (t) { goto L_003DCE28; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DCE38; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCE20u); set32(c.r[5], c.r[5].w[0] + 27064u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DCE20u) [[unlikely]] return; }
L_003DCE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DCE28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_003DCE2C:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[29].w[0] + 512u);  if (t) { goto L_003DCE8C; } }
L_003DCE38:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCE48u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DCE48u) [[unlikely]] return; }
L_003DCE48:
    set32(c.r[17], c.r[16].w[0] - 22720u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCE58u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x003DCE58u) [[unlikely]] return; }
L_003DCE58:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCE68u); st128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DCE68u) [[unlikely]] return; }
L_003DCE68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 27144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCE80u); set32(c.r[6], c.r[17].w[0] + 40u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCE80u) [[unlikely]] return; }
L_003DCE80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_003DCFB4; } }
L_003DCE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCE94u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DCE94u) [[unlikely]] return; }
L_003DCE94:
    set32(c.r[17], c.r[16].w[0] - 22720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCEA0u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DCEA0u) [[unlikely]] return; }
L_003DCEA0:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 44u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);
    set32(c.r[4], c.r[4].w[0] + 27160u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[17].w[0] + 44u);  if (t) { goto L_003DCFA4; } }
L_003DCEC0:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], c.r[22].w[0] - 4447u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 9;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_003DCF14; }
    set32(c.r[2], 0u + 46u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 45u);  if (t) { goto L_003DCF10; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DCF20; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF08u); set32(c.r[5], c.r[5].w[0] + 27176u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DCF08u) [[unlikely]] return; }
L_003DCF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DCF10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_003DCF14:
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], c.r[29].w[0] + 512u);  if (t) { goto L_003DCF74; } }
L_003DCF20:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF30u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DCF30u) [[unlikely]] return; }
L_003DCF30:
    set32(c.r[17], c.r[16].w[0] - 22720u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF40u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x003DCF40u) [[unlikely]] return; }
L_003DCF40:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF50u); st128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DCF50u) [[unlikely]] return; }
L_003DCF50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 128u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 27248u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF68u); set32(c.r[6], c.r[17].w[0] + 128u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCF68u) [[unlikely]] return; }
L_003DCF68:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 172u), c.r[2].w[0]);  if (t) { goto L_003DCFB4; } }
L_003DCF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF7Cu); c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DCF7Cu) [[unlikely]] return; }
L_003DCF7C:
    set32(c.r[17], c.r[16].w[0] - 22720u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCF88u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DCF88u) [[unlikely]] return; }
L_003DCF88:
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);
    set32(c.r[4], c.r[4].w[0] + 27272u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[17].w[0] + 132u);
    c.budget -= 7;
L_003DCFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCFACu);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DCFACu) [[unlikely]] return; }
L_003DCFAC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 2;
L_003DCFB4:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);
    set32(c.r[3], c.r[8].w[0] - 22720u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 124u), c.r[2].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DCFC8:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], 0u + 45u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[22].w[0] - 4447u);  if (t) { goto L_003DCFF8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DCFF0u); set32(c.r[5], c.r[5].w[0] + 27296u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DCFF0u) [[unlikely]] return; }
L_003DCFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DCFF8:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DD024; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD01Cu); set32(c.r[5], c.r[5].w[0] + 27376u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DD01Cu) [[unlikely]] return; }
L_003DD01C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DD024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD02Cu); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DD02Cu) [[unlikely]] return; }
L_003DD02C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD03Cu); set32(c.r[16], c.r[16].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DD03Cu) [[unlikely]] return; }
L_003DD03C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 1600u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 27448u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD054u); set32(c.r[6], c.r[16].w[0] + 1600u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD054u) [[unlikely]] return; }
L_003DD054:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 408u), c.r[2].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DD060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[18], c.r[3].w[0] - 22720u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 516u);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD08Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DD08Cu) [[unlikely]] return; }
L_003DD08C:
    set32(c.r[5], ld32((c.r[29].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);  if (t) { goto L_003DD128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] - 4447u);
    set32(c.r[19], 0u + 44u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
L_003DD0B8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[20].w[0]);  if (t) { goto L_003DD0F8; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DD0FC; } }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[19].d[0]) { set32(c.r[4], ld32((c.r[21].w[0] + 2192u)));  goto L_003DD0E8; }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 516u), c.r[2].w[0]);  if (t) { goto L_003DD0F8; } }
L_003DD0E8:
    set32(c.r[5], c.r[18].w[0] + 27472u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD0F4u); st128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DD0F4u) [[unlikely]] return; }
L_003DD0F4:
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);
    c.budget -= 1;
L_003DD0F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 1;
L_003DD0FC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD110u); st32((c.r[29].w[0] + 512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DD110u) [[unlikely]] return; }
L_003DD110:
    set32(c.r[5], ld32((c.r[29].w[0] + 516u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 544u) & ~15u, c.r[8]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD0B8u | kUnwind; return; } goto L_003DD0B8; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 1;
L_003DD128:
    c.r[2].d[0] = c.r[17].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003DD1D0; } }
    set32(c.r[5], c.r[5].w[0] - c.r[17].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], c.r[8].w[0] - 22720u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD15Cu); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003DD15Cu) [[unlikely]] return; }
L_003DD15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 488u), c.r[2].w[0]);  if (t) { goto L_003DD184; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD174u); set32(c.r[5], c.r[5].w[0] + 27552u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DD174u) [[unlikely]] return; }
L_003DD174:
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD184u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DD184u) [[unlikely]] return; }
L_003DD184:
    set32(c.r[6], ld32((c.r[29].w[0] + 516u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 488u)));
    set32(c.r[6], c.r[6].w[0] - c.r[17].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD19Cu); set32(c.r[6], c.r[6].w[0] + 1u);  if (depth < kMaxDepth) unit_0042(c, 203u, depth + 1u); else { c.pc = 0x0020B678u; return; } if (c.pc != 0x003DD19Cu) [[unlikely]] return; }
L_003DD19C:
    set32(c.r[6], ld32((c.r[29].w[0] + 516u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD1B0u); set32(c.r[6], c.r[6].w[0] - c.r[5].w[0]);  if (depth < kMaxDepth) unit_0042(c, 172u, depth + 1u); else { c.pc = 0x0020B378u; return; } if (c.pc != 0x003DD1B0u) [[unlikely]] return; }
L_003DD1B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD1C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD1C4u) [[unlikely]] return; }
L_003DD1C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 488u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003DD1DC; } }
L_003DD1D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 27616u);
    c.budget -= 3;
L_003DD1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD1E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD1E4u) [[unlikely]] return; }
L_003DD1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DD1EC:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DD228; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD220u); set32(c.r[5], c.r[5].w[0] + 27632u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DD220u) [[unlikely]] return; }
L_003DD220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DD228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD230u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DD230u) [[unlikely]] return; }
L_003DD230:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD240u); set32(c.r[16], c.r[16].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DD240u) [[unlikely]] return; }
L_003DD240:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 368u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 27704u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD258u); set32(c.r[6], c.r[16].w[0] + 368u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD258u) [[unlikely]] return; }
L_003DD258:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 364u), c.r[2].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DD264:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], c.r[22].w[0] - 4447u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DD2AC; }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DD2A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD2A0u); set32(c.r[5], c.r[5].w[0] + 27720u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DD2A0u) [[unlikely]] return; }
L_003DD2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DD2A8:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DD2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD2B4u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DD2B4u) [[unlikely]] return; }
L_003DD2B4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD2C4u); set32(c.r[16], c.r[16].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DD2C4u) [[unlikely]] return; }
L_003DD2C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 140u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 27792u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[16].w[0] + 140u);  if (t) { goto L_003DD348; } }
L_003DD2D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], c.r[22].w[0] - 4447u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DD320; }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DD31C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD314u); set32(c.r[5], c.r[5].w[0] + 27800u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DD314u) [[unlikely]] return; }
L_003DD314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DD31C:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DD320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD328u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DD328u) [[unlikely]] return; }
L_003DD328:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD338u); set32(c.r[16], c.r[16].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DD338u) [[unlikely]] return; }
L_003DD338:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 27872u);
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.budget -= 4;
L_003DD348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD350u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD350u) [[unlikely]] return; }
L_003DD350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DD358:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], 0u + 45u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[22].w[0] - 4447u);  if (t) { goto L_003DD388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD380u); set32(c.r[5], c.r[5].w[0] + 27888u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DD380u) [[unlikely]] return; }
L_003DD380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DD388:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DD3B4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD3ACu); set32(c.r[5], c.r[5].w[0] + 27960u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DD3ACu) [[unlikely]] return; }
L_003DD3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DD3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD3BCu); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DD3BCu) [[unlikely]] return; }
L_003DD3BC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD3CCu); set32(c.r[16], c.r[16].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DD3CCu) [[unlikely]] return; }
L_003DD3CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 28024u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD3E4u); set32(c.r[6], c.r[16].w[0] + 12u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD3E4u) [[unlikely]] return; }
L_003DD3E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003DF5D0; } }
L_003DD3F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF5D4; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_003DF5D8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_003DD418:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 65u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(56ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DDCB0; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32400u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003DC000u < 16384u) { entry = entries_00B7[(t - 0x003DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DD450:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD464u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD464u) [[unlikely]] return; }
L_003DD464:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
L_003DD470:
    c.r[2].d[0] = c.r[4].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - 22720u);  if (t) { goto L_003DDB18; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 220u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[3], c.r[8].w[0] - 22720u);  goto L_003DDB1C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD470u | kUnwind; return; } goto L_003DD470; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDB18; } }
L_003DD4A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD4B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD4B8u) [[unlikely]] return; }
L_003DD4B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22224u), c.r[2].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD4C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD4DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD4DCu) [[unlikely]] return; }
L_003DD4DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD508:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD508u | kUnwind; return; } goto L_003DD508; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD530:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28080u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD544u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD544u) [[unlikely]] return; }
L_003DD544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD570:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD570u | kUnwind; return; } goto L_003DD570; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD598:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28096u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD5ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD5ACu) [[unlikely]] return; }
L_003DD5AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22692u), c.r[2].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD5BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD5D0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD5D0u) [[unlikely]] return; }
L_003DD5D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22688u), c.r[2].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD5E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD5F4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD5F4u) [[unlikely]] return; }
L_003DD5F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD620:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD620u | kUnwind; return; } goto L_003DD620; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD648:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD65Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD65Cu) [[unlikely]] return; }
L_003DD65C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD688:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD688u | kUnwind; return; } goto L_003DD688; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD6B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28152u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD6C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD6C4u) [[unlikely]] return; }
L_003DD6C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD6F0:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD6F0u | kUnwind; return; } goto L_003DD6F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD718:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD72Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD72Cu) [[unlikely]] return; }
L_003DD72C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 15u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD758:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD758u | kUnwind; return; } goto L_003DD758; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD780:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD794u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD794u) [[unlikely]] return; }
L_003DD794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD7C0:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD7C0u | kUnwind; return; } goto L_003DD7C0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD7E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD7FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD7FCu) [[unlikely]] return; }
L_003DD7FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 26u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD828:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD828u | kUnwind; return; } goto L_003DD828; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD850:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD864u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD864u) [[unlikely]] return; }
L_003DD864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD890:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD890u | kUnwind; return; } goto L_003DD890; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD8B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DD928; } }
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD8DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD8DCu) [[unlikely]] return; }
L_003DD8DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[4], 0u + 17u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[16].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { goto L_003DD900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 220u), c.r[4].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD900:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD900u | kUnwind; return; } goto L_003DD900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[4].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD928:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 208u), c.r[2].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD934:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD948u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD948u) [[unlikely]] return; }
L_003DD948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 18u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003DD970:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD970u | kUnwind; return; } goto L_003DD970; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DD998:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DD9ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DD9ACu) [[unlikely]] return; }
L_003DD9AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DD9D8:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD9D8u | kUnwind; return; } goto L_003DD9D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDA00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDA14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDA14u) [[unlikely]] return; }
L_003DDA14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], 0u + 21u);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 220u);  if (t) { goto L_003DDA38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 220u), c.r[6].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDA38:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_003DDA3C:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDA3Cu | kUnwind; return; } goto L_003DDA3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDA60:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDA74u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDA74u) [[unlikely]] return; }
L_003DDA74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 23u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DDAA0:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDAA0u | kUnwind; return; } goto L_003DDAA0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDAC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDADCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDADCu) [[unlikely]] return; }
L_003DDADC:
    set32(c.r[5], 0u + 22u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
L_003DDAE8:
    c.r[2].d[0] = c.r[4].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] - 22720u);  if (t) { goto L_003DDB18; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 220u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[3], c.r[8].w[0] - 22720u);  goto L_003DDB1C; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDAE8u | kUnwind; return; } goto L_003DDAE8; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_003DDB18:
    set32(c.r[3], c.r[8].w[0] - 22720u);
    c.budget -= 1;
L_003DDB1C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 496u), c.r[2].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDB28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDB3Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDB3Cu) [[unlikely]] return; }
L_003DDB3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 24u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DDB68:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDB68u | kUnwind; return; } goto L_003DDB68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDB90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 25u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_003DDBB8:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDBB8u | kUnwind; return; } goto L_003DDBB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDBE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDBF4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDBF4u) [[unlikely]] return; }
L_003DDBF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  goto L_003DDD04; }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_003DDC20:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDC20u | kUnwind; return; } goto L_003DDC20; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDC48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDC5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDC5Cu) [[unlikely]] return; }
L_003DDC5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD04; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_003DDC88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 220u), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDC88:
    c.r[2].d[0] = c.r[6].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD04; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD08; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDC88u | kUnwind; return; } goto L_003DDC88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[5].w[0]);  if (t) { goto L_003DDD04; } }
L_003DDCB0:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 28352u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDCD4u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DDCD4u) [[unlikely]] return; }
L_003DDCD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] - 4447u);
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
L_003DDCE0:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003DDD04; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 512u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDCE0u | kUnwind; return; } goto L_003DDCE0; } }
L_003DDD04:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DDD08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DD418u | kUnwind; return; } goto L_003DD418; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_003DF5D8; } }
L_003DDD30:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st32((c.r[29].w[0] + 532u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 220u)));
    set32(c.r[6], 0u + 7u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], c.r[2].w[0] + 220u);  if (t) { goto L_003DDD8C; } }
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_003DDD68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 220u), c.r[6].w[0]);  if (t) { goto L_003DDD8C; } }
    c.budget -= 1;
L_003DDD68:
    c.r[2].d[0] = c.r[5].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { goto L_003DDD8C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[6].d[0]) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DDD90; }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDD68u | kUnwind; return; } goto L_003DDD68; }
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_003DDD8C:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DDD90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DF5D4; }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 2;
L_003DDDB8:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 68u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(51ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DDFDC; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 32624u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003DC000u < 16384u) { entry = entries_00B7[(t - 0x003DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DDDF0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28416u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE04u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDE04u) [[unlikely]] return; }
L_003DDE04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22532u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDE14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28432u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE28u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDE28u) [[unlikely]] return; }
L_003DDE28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22544u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDE38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE4Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDE4Cu) [[unlikely]] return; }
L_003DDE4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22668u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDE5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28464u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE70u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDE70u) [[unlikely]] return; }
L_003DDE70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22524u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDE80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28472u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDE94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDE94u) [[unlikely]] return; }
L_003DDE94:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22516u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDEA4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDEB8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDEB8u) [[unlikely]] return; }
L_003DDEB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22508u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDEC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDEDCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDEDCu) [[unlikely]] return; }
L_003DDEDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22540u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDEEC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDF00u) [[unlikely]] return; }
L_003DDF00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22388u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDF10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDF24u) [[unlikely]] return; }
L_003DDF24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22372u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDF34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF48u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDF48u) [[unlikely]] return; }
L_003DDF48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22384u), c.r[2].w[0]);  if (t) { goto L_003DE034; } }
L_003DDF58:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[4], c.r[22].w[0] - 4447u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DDF94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDF8Cu); set32(c.r[5], c.r[5].w[0] + 28544u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DDF8Cu) [[unlikely]] return; }
L_003DDF8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DE038; } }
L_003DDF94:
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[6], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] < 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DDFB0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDFB0u); set32(c.r[5], c.r[5].w[0] + 28600u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DDFB0u) [[unlikely]] return; }
L_003DDFB0:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDFBCu); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DDFBCu) [[unlikely]] return; }
L_003DDFBC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 28672u);
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DDFD4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DDFD4u) [[unlikely]] return; }
L_003DDFD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DE038; } }
L_003DDFDC:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 28688u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE000u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DE000u) [[unlikely]] return; }
L_003DE000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] - 4447u);
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 4;
L_003DE010:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003DE034; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 512u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DE010u | kUnwind; return; } goto L_003DE010; } }
L_003DE034:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DE038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DDDB8u | kUnwind; return; } goto L_003DDDB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DE060:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF5D4; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_003DF5D8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 1;
L_003DE088:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 65u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(48ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003DE320; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 32704u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003DC000u < 16384u) { entry = entries_00B7[(t - 0x003DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DE0C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[16], c.r[29].w[0] + 512u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE0D8u); c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 1u)));  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DE0D8u) [[unlikely]] return; }
L_003DE0D8:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], 0u + 58u);
    st32((c.r[29].w[0] + 520u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 524u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 100u);  if (t) { goto L_003DE118; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE108u); st32((c.r[29].w[0] + 512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DE108u) [[unlikely]] return; }
L_003DE108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE110u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DE110u) [[unlikely]] return; }
L_003DE110:
    st32((c.r[29].w[0] + 524u), c.f[0]);
    set32(c.r[2], 0u + 100u);
    c.budget -= 2;
L_003DE118:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_003DE130; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 28752u);  if (t) { goto L_003DE138; } }
L_003DE130:
    set32(c.r[5], c.r[29].w[0] + 520u);
    set32(c.r[4], c.r[4].w[0] + 28776u);
    c.budget -= 2;
L_003DE138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE140u); set32(c.r[6], c.r[29].w[0] + 524u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE140u) [[unlikely]] return; }
L_003DE140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DE378; } }
L_003DE148:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE15Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE15Cu) [[unlikely]] return; }
L_003DE15C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22528u), c.r[2].w[0]);  if (t) { goto L_003DE374; } }
L_003DE16C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE180u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE180u) [[unlikely]] return; }
L_003DE180:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22520u), c.r[2].w[0]);  if (t) { goto L_003DE374; } }
L_003DE190:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE1A4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE1A4u) [[unlikely]] return; }
L_003DE1A4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22660u), c.r[2].w[0]);  if (t) { goto L_003DE374; } }
L_003DE1B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 28856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE1C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE1C8u) [[unlikely]] return; }
L_003DE1C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 22504u), 0u);  if (t) { goto L_003DE374; } }
L_003DE1D4:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DE210; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE208u); set32(c.r[5], c.r[5].w[0] + 28880u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DE208u) [[unlikely]] return; }
L_003DE208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DE378; } }
L_003DE210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE218u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DE218u) [[unlikely]] return; }
L_003DE218:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 22720u);
    set32(c.r[4], c.r[4].w[0] + 28952u);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 92u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_003DE2A0; } }
L_003DE238:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DE274; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE26Cu); set32(c.r[5], c.r[5].w[0] + 28968u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DE26Cu) [[unlikely]] return; }
L_003DE26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DE378; } }
L_003DE274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE27Cu); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DE27Cu) [[unlikely]] return; }
L_003DE27C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE28Cu); set32(c.r[16], c.r[16].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DE28Cu) [[unlikely]] return; }
L_003DE28C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 29024u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 5;
L_003DE2A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2A8u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE2A8u) [[unlikely]] return; }
L_003DE2A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 496u), c.r[2].w[0]);  if (t) { goto L_003DE374; } }
L_003DE2B4:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DE2F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2E8u); set32(c.r[5], c.r[5].w[0] + 29048u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DE2E8u) [[unlikely]] return; }
L_003DE2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DE378; } }
L_003DE2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE2F8u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DE2F8u) [[unlikely]] return; }
L_003DE2F8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 22720u);
    set32(c.r[4], c.r[4].w[0] + 29112u);
    st32((c.r[5].w[0] + 104u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE318u); set32(c.r[5], c.r[5].w[0] + 104u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE318u) [[unlikely]] return; }
L_003DE318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DE378; } }
L_003DE320:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 29128u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE344u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DE344u) [[unlikely]] return; }
L_003DE344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] - 4447u);
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
L_003DE350:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003DE374; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 512u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DE350u | kUnwind; return; } goto L_003DE350; } }
L_003DE374:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DE378:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DE088u | kUnwind; return; } goto L_003DE088; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DE3A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[23], 0u - 1u);  if (t) { goto L_003DF5D4; } }
    set32(c.r[2], c.r[22].w[0] - 4447u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 1u);  if (t) { goto L_003DF5D8; } }
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 2;
L_003DE3D0:
    set32(c.r[3], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(75ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003DED4C; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 32512u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003DC000u < 16384u) { entry = entries_00B7[(t - 0x003DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DE408:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], 0u + 98u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] - 1u)));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[29].w[0] + 512u);  if (t) { goto L_003DE4B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 66u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DE458; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 512u), c.r[5].w[0]);
    st32((c.r[3].w[0] - 22320u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29192u);
    st32((c.r[29].w[0] + 524u), c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003DE694; } }
L_003DE458:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; set32(c.r[16], c.r[29].w[0] + 512u);  if (t) { goto L_003DE4B4; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 512u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29216u);
    st32((c.r[3].w[0] - 22316u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003DEC88; } }
L_003DE484:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[4], c.r[4].w[0] + 29232u);
    set32(c.r[2], ld32((c.r[3].w[0] + 356u)));
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[21], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE4ACu); st32((c.r[3].w[0] + 356u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE4ACu) [[unlikely]] return; }
L_003DE4AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], ld32((c.r[29].w[0] + 528u)));  if (t) { goto L_003DE5E0; } }
L_003DE4B4:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE4C4u); c.r[21].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DE4C4u) [[unlikely]] return; }
L_003DE4C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], 0u + 58u);
    st32((c.r[29].w[0] + 528u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 524u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003DE5E0; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE4F0u); st32((c.r[29].w[0] + 512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DE4F0u) [[unlikely]] return; }
L_003DE4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE4F8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DE4F8u) [[unlikely]] return; }
L_003DE4F8:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[29].w[0] + 524u), c.f[0]);  if (t) { goto L_003DE5E0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    st32((c.r[29].w[0] + 516u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003DE5E0; } }
    set32(c.r[5], c.r[22].w[0] - 4447u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DE5E0; } }
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 516u);
    set32(c.r[20], 0u + 66u);
    set32(c.r[19], 0u + 58u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 6;
L_003DE558:
    set32(c.r[6], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 516u), c.r[6].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[5].w[0] - 32u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = c.r[5].d[0];
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[20].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DE5C4; } }
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE588u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DE588u) [[unlikely]] return; }
L_003DE588:
    set32(c.r[3], ld32((c.r[29].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DE5C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; st32((c.r[29].w[0] + 516u), c.r[4].w[0]);  if (t) { goto L_003DE5C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5ACu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DE5ACu) [[unlikely]] return; }
L_003DE5AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE5B8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0040(c, 242u, depth + 1u); else { c.pc = 0x00202B78u; return; } if (c.pc != 0x003DE5B8u) [[unlikely]] return; }
L_003DE5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DE484u | kUnwind; return; } goto L_003DE484; } }
L_003DE5C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 1;
L_003DE5C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);  if (t) { goto L_003DE5E0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DE558u | kUnwind; return; } goto L_003DE558; }
L_003DE5E0:
    c.budget -= 2;
    if (c.r[21].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DEDA8; }
    set32(c.r[2], ld32((c.r[29].w[0] + 528u)));
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 98u);  if (t) { goto L_003DE618; } }
    c.f[1] = ld32((c.r[29].w[0] + 524u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003DE618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[23], 0u - 1u);  if (t) { goto L_003DEDA4; } }
L_003DE618:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.f[1] = ld32((c.r[29].w[0] + 524u));  if (t) { goto L_003DE65C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] - 22320u), c.r[2].w[0]);  if (t) { goto L_003DE64C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 524u), c.f[0]);
    c.budget -= 4;
L_003DE64C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 29248u);  if (t) { goto L_003DE694; } }
L_003DE65C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[0] = 0u;
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] - 22320u), c.r[2].w[0]);  if (t) { goto L_003DE688; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 524u), c.f[0]);
    c.budget -= 4;
L_003DE688:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    set32(c.r[4], c.r[4].w[0] + 29264u);
    c.budget -= 3;
L_003DE694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE69Cu); set32(c.r[6], c.r[29].w[0] + 524u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE69Cu) [[unlikely]] return; }
L_003DE69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DEDA8; } }
L_003DE6A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29280u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE6B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE6B8u) [[unlikely]] return; }
L_003DE6B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22624u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE6C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29296u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE6DCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE6DCu) [[unlikely]] return; }
L_003DE6DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22696u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE6EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE700u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE700u) [[unlikely]] return; }
L_003DE700:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22564u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE710:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29344u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE724u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE724u) [[unlikely]] return; }
L_003DE724:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22620u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE734:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE748u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE748u) [[unlikely]] return; }
L_003DE748:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22560u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE758:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE76Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE76Cu) [[unlikely]] return; }
L_003DE76C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22340u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE77C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29400u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE790u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE790u) [[unlikely]] return; }
L_003DE790:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22720u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE7A0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE7B4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE7B4u) [[unlikely]] return; }
L_003DE7B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22264u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE7C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29440u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE7D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE7D8u) [[unlikely]] return; }
L_003DE7D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22256u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE7E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE7FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE7FCu) [[unlikely]] return; }
L_003DE7FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22288u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE80C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29488u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE820u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE820u) [[unlikely]] return; }
L_003DE820:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22604u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE844u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE844u) [[unlikely]] return; }
L_003DE844:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22704u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE854:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE868u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE868u) [[unlikely]] return; }
L_003DE868:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22568u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE878:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], c.r[22].w[0] - 4447u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003DE8B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29544u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE8ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE8ACu) [[unlikely]] return; }
L_003DE8AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 22716u), 0u);  if (t) { goto L_003DEDA4; } }
L_003DE8B8:
    set32(c.r[3], 0u + 48u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[29].w[0] + 512u), c.r[2].w[0]);  if (t) { goto L_003DE8D8; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[3], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DE8FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DE928; } }
L_003DE8D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29568u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE8ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE8ECu) [[unlikely]] return; }
L_003DE8EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22576u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE8FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29584u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE910u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE910u) [[unlikely]] return; }
L_003DE910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st32((c.r[2].w[0] + 456u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 460u), c.r[3].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DE928:
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 29616u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE944u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DE944u) [[unlikely]] return; }
L_003DE944:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] - 4447u);
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
L_003DE950:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003DEDA4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 512u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DE950u | kUnwind; return; } goto L_003DE950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DEDA8; } }
L_003DE97C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE990u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE990u) [[unlikely]] return; }
L_003DE990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 120u), 0u);  if (t) { goto L_003DE9C8; } }
L_003DE9A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29704u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DE9B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DE9B8u) [[unlikely]] return; }
L_003DE9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 136u), 0u);
    c.budget -= 4;
L_003DE9C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], c.r[22].w[0] - 4447u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 1u);  if (t) { goto L_003DEDA8; } }
    set32(c.r[2], c.r[8].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 512u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA00u); set32(c.r[5], c.r[5].w[0] + 29728u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DEA00u) [[unlikely]] return; }
L_003DEA00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DEDA8; } }
L_003DEA08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29808u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEA1Cu) [[unlikely]] return; }
L_003DEA1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22700u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DEA2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEA40u) [[unlikely]] return; }
L_003DEA40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22308u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DEA50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA64u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEA64u) [[unlikely]] return; }
L_003DEA64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22304u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DEA74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29880u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEA88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEA88u) [[unlikely]] return; }
L_003DEA88:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22248u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DEA98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29904u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEAACu) [[unlikely]] return; }
L_003DEAAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22572u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DEABC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 29928u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAD0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEAD0u) [[unlikely]] return; }
L_003DEAD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22556u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DEAE0:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEAECu); set32(c.r[5], c.r[29].w[0] + 516u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DEAECu) [[unlikely]] return; }
L_003DEAEC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 520u), c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DEB20; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB18u); set32(c.r[5], c.r[5].w[0] + 29952u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DEB18u) [[unlikely]] return; }
L_003DEB18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DED44; } }
L_003DEB20:
    set32(c.r[2], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DEB44; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB3Cu); set32(c.r[5], c.r[5].w[0] + 30024u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DEB3Cu) [[unlikely]] return; }
L_003DEB3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DED44; } }
L_003DEB44:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[2], 0u + 45u);  if (t) { goto L_003DEB58; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[5].w[0] + 1u);  if (t) { goto L_003DEB70; } }
L_003DEB58:
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[29].w[0] + 520u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[6].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30096u);  if (t) { goto L_003DED14; } }
L_003DEB70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[6].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 30120u);
    set32(c.r[5], c.r[29].w[0] + 520u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEB88u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEB88u) [[unlikely]] return; }
L_003DEB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DED44; } }
L_003DEB90:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], c.r[22].w[0] - 4447u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DEBC8; }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DEBC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] - 20396u), 0u);  if (t) { goto L_003DEDA4; } }
L_003DEBC4:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DEBC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEBD0u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DEBD0u) [[unlikely]] return; }
L_003DEBD0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEBE0u); set32(c.r[16], c.r[16].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DEBE0u) [[unlikely]] return; }
L_003DEBE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 2324u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 30144u);
    set32(c.r[6], c.r[16].w[0] + 2324u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEBF8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEBF8u) [[unlikely]] return; }
L_003DEBF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DEDA8; } }
L_003DEC00:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], c.r[22].w[0] - 4447u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  goto L_003DEC48; }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DEC44; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC3Cu); set32(c.r[5], c.r[5].w[0] + 30152u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DEC3Cu) [[unlikely]] return; }
L_003DEC3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DEDA8; } }
L_003DEC44:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DEC48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC50u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DEC50u) [[unlikely]] return; }
L_003DEC50:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 520u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0; st32((c.r[2].w[0] - 22324u), c.r[3].w[0]);  if (t) { goto L_003DEC74; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[29].w[0] + 520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 30216u);  if (t) { goto L_003DEC88; } }
L_003DEC74:
    c.r[2].d[0] = c.r[3].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DEDA4; } }
    set32(c.r[5], c.r[29].w[0] + 520u);
    set32(c.r[4], c.r[4].w[0] + 30232u);
    c.budget -= 2;
L_003DEC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEC90u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEC90u) [[unlikely]] return; }
L_003DEC90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DEDA8; } }
L_003DEC98:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DECA4u); set32(c.r[5], c.r[29].w[0] + 516u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DECA4u) [[unlikely]] return; }
L_003DECA4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 520u), c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DECD4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DECCCu); set32(c.r[5], c.r[5].w[0] + 30248u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DECCCu) [[unlikely]] return; }
L_003DECCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DED44; } }
L_003DECD4:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DECF8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DECF0u); set32(c.r[5], c.r[5].w[0] + 30320u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DECF0u) [[unlikely]] return; }
L_003DECF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DED44; } }
L_003DECF8:
    c.budget -= 2;
    if (c.r[4].sd[0] >= 0) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  goto L_003DED24; }
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[29].w[0] + 520u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 30392u);
    c.budget -= 5;
L_003DED14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED1Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DED1Cu) [[unlikely]] return; }
L_003DED1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DED44; } }
L_003DED24:
    set32(c.r[5], c.r[29].w[0] + 520u);
    set32(c.r[4], c.r[4].w[0] + 30424u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED34u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DED34u) [[unlikely]] return; }
L_003DED34:
    set32(c.r[2], ld32((c.r[29].w[0] + 520u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 4;
L_003DED44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 512u), c.r[2].w[0]);  if (t) { goto L_003DEDA4; } }
L_003DED4C:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 30448u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DED70u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DED70u) [[unlikely]] return; }
L_003DED70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] - 4447u);
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 4;
L_003DED80:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003DEDA4; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 512u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DED80u | kUnwind; return; } goto L_003DED80; } }
L_003DEDA4:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DEDA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld8((c.r[4].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003DE3D0u | kUnwind; return; } goto L_003DE3D0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DEDD0:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF5D4; } }
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003DF5D4; } }
    c.budget -= 1;
L_003DEDF8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], c.r[6].w[0] - 4447u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_003DEE20; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[6].w[0] - 67u);  if (t) { goto L_003DEE34; } }
L_003DEE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE28u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DEE28u) [[unlikely]] return; }
L_003DEE28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22632u), c.r[2].w[0]);  if (t) { goto L_003DF584; } }
L_003DEE34:
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 24);
    st32((c.r[29].w[0] + 512u), c.r[3].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(56ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003DF530; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 32208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003DC000u < 16384u) { entry = entries_00B7[(t - 0x003DC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003DEE68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEE7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEE7Cu) [[unlikely]] return; }
L_003DEE7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22684u), c.r[2].w[0]);  if (t) { goto L_003DF584; } }
L_003DEE8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30536u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEEA0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEEA0u) [[unlikely]] return; }
L_003DEEA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22380u), c.r[2].w[0]);  if (t) { goto L_003DF584; } }
L_003DEEB0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30552u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEEC4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEEC4u) [[unlikely]] return; }
L_003DEEC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22252u), c.r[2].w[0]);  if (t) { goto L_003DF584; } }
L_003DEED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[16].w[0] + 2188u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DEF00; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEEF8u); set32(c.r[5], c.r[5].w[0] + 30560u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DEEF8u) [[unlikely]] return; }
L_003DEEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DEF00:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 30632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEF10u) [[unlikely]] return; }
L_003DEF10:
    set32(c.r[3], ld32((c.r[16].w[0] + 2188u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[2].w[0] - 20156u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2192u), c.r[3].w[0]);  if (t) { goto L_003DF584; } }
L_003DEF24:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DEF60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF58u); set32(c.r[5], c.r[5].w[0] + 30648u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DEF58u) [[unlikely]] return; }
L_003DEF58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DEF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF68u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DEF68u) [[unlikely]] return; }
L_003DEF68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 520u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 30728u);
    set32(c.r[5], c.r[29].w[0] + 520u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEF80u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEF80u) [[unlikely]] return; }
L_003DEF80:
    set32(c.r[2], ld32((c.r[29].w[0] + 520u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] - 22296u), c.r[2].w[0]);  if (t) { goto L_003DF584; } }
L_003DEF94:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DEFD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEFC8u); set32(c.r[5], c.r[5].w[0] + 30744u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DEFC8u) [[unlikely]] return; }
L_003DEFC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DEFD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEFD8u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DEFD8u) [[unlikely]] return; }
L_003DEFD8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 22720u);
    set32(c.r[4], c.r[4].w[0] + 30824u);
    st32((c.r[16].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 384u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DEFF8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DEFF8u) [[unlikely]] return; }
L_003DEFF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 384u)));
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 388u), c.r[2].w[0]);  if (t) { goto L_003DF584; } }
L_003DF010:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF058; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 34u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 39u);  if (t) { goto L_003DF054; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF058; } }
    set32(c.r[5], c.r[22].w[0] - 4447u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003DF070; } }
L_003DF054:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DF058:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 20528u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 30840u);  if (t) { goto L_003DF170; } }
L_003DF070:
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DF0F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 22720u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 5;
L_003DF098:
    set32(c.r[2], c.r[16].w[0] - c.r[29].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 498ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF0C8; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF0B4u); set32(c.r[5], c.r[17].w[0] + 30984u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF0B4u) [[unlikely]] return; }
L_003DF0B4:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF0C4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DF0C4u) [[unlikely]] return; }
L_003DF0C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DF0C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = ld8((c.r[4].w[0]));  if (t) { goto L_003DF0F8; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DF098u | kUnwind; return; } goto L_003DF098; } }
L_003DF0F8:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[20].w[0] + 31032u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF10Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 12u, depth + 1u); else { c.pc = 0x003DC268u; return; } if (c.pc != 0x003DF10Cu) [[unlikely]] return; }
L_003DF10C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DF288; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 31080u);  if (t) { goto L_003DF2C0; } }
L_003DF120:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF15C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[2], 0u + 34u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF158; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003DF180; } }
L_003DF158:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DF15C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[3].w[0] - 20528u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 31096u);
    c.budget -= 5;
L_003DF170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF178u); st32((c.r[29].w[0] + 512u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF178u) [[unlikely]] return; }
L_003DF178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF180:
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[3], 0u + 39u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_003DF1A4; } }
    set32(c.r[2], c.r[4].w[0] + 2u);
    set32(c.r[17], 0u + 1u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 3;
L_003DF1A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] - 22720u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 39u);  if (t) { goto L_003DF1F0; } }
    c.budget -= 1;
L_003DF1C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF248; } }
L_003DF1DC:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_003DF1F0:
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] - c.r[29].w[0]);  if (t) { goto L_003DF248; } }
    c.r[2].d[0] = c.r[2].sd[0] < 498ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003DF228; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF218u); set32(c.r[5], c.r[19].w[0] + 31288u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF218u) [[unlikely]] return; }
L_003DF218:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF228u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DF228u) [[unlikely]] return; }
L_003DF228:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 512u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DF1C0u | kUnwind; return; } goto L_003DF1C0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DF1DCu | kUnwind; return; } goto L_003DF1DC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 3;
L_003DF248:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_003DF26C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF264u); set32(c.r[5], c.r[5].w[0] + 31336u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF264u) [[unlikely]] return; }
L_003DF264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF26C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 31408u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF280u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B7(c, 12u, depth + 1u); else { c.pc = 0x003DC268u; return; } if (c.pc != 0x003DF280u) [[unlikely]] return; }
L_003DF280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003DF2B8; } }
L_003DF288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    set32(c.r[5], c.r[5].w[0] + 31040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2A0u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF2A0u) [[unlikely]] return; }
L_003DF2A0:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DF2B0u) [[unlikely]] return; }
L_003DF2B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF2B8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 31416u);
    c.budget -= 2;
L_003DF2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2C8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF2C8u) [[unlikely]] return; }
L_003DF2C8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF2D8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF2D8u) [[unlikely]] return; }
L_003DF2D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF2E0:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DF31C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF314u); set32(c.r[5], c.r[5].w[0] + 31432u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF314u) [[unlikely]] return; }
L_003DF314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF31C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF324u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DF324u) [[unlikely]] return; }
L_003DF324:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 22720u);
    set32(c.r[4], c.r[4].w[0] + 31504u);
    st32((c.r[5].w[0] + 444u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF344u); set32(c.r[5], c.r[5].w[0] + 444u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF344u) [[unlikely]] return; }
L_003DF344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF34C:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DF388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF380u); set32(c.r[5], c.r[5].w[0] + 31520u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF380u) [[unlikely]] return; }
L_003DF380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF390u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DF390u) [[unlikely]] return; }
L_003DF390:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 22720u);
    set32(c.r[4], c.r[4].w[0] + 31592u);
    st32((c.r[5].w[0] + 452u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3B0u); set32(c.r[5], c.r[5].w[0] + 452u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF3B0u) [[unlikely]] return; }
L_003DF3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF3B8:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DF3F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3ECu); set32(c.r[5], c.r[5].w[0] + 31608u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF3ECu) [[unlikely]] return; }
L_003DF3EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF3F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF3FCu); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DF3FCu) [[unlikely]] return; }
L_003DF3FC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 22720u);
    set32(c.r[4], c.r[4].w[0] + 31680u);
    st32((c.r[5].w[0] + 392u), c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF41Cu); set32(c.r[5], c.r[5].w[0] + 392u);  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF41Cu) [[unlikely]] return; }
L_003DF41C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF424:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF430u); set32(c.r[5], c.r[29].w[0] + 516u);  if (depth < kMaxDepth) unit_00B8(c, 85u, depth + 1u); else { c.pc = 0x003E0E50u; return; } if (c.pc != 0x003DF430u) [[unlikely]] return; }
L_003DF430:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0] + 520u), c.r[4].w[0]);  if (t) { goto L_003DF460; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF458u); set32(c.r[5], c.r[5].w[0] + 31688u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF458u) [[unlikely]] return; }
L_003DF458:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DF4B4; } }
L_003DF460:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_003DF494; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 22292u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 31768u);
    set32(c.r[5], c.r[29].w[0] + 520u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF48Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF48Cu) [[unlikely]] return; }
L_003DF48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 516u)));  if (t) { goto L_003DF4B4; } }
L_003DF494:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] - 22292u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 31792u);
    set32(c.r[5], c.r[29].w[0] + 520u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF4B0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF4B0u) [[unlikely]] return; }
L_003DF4B0:
    set32(c.r[2], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 1;
L_003DF4B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 512u), c.r[2].w[0]);  if (t) { goto L_003DF584; } }
L_003DF4BC:
    set32(c.r[5], ld32((c.r[29].w[0] + 512u)));
    set32(c.r[2], c.r[22].w[0] - 4447u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003DF4F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF4F0u); set32(c.r[5], c.r[5].w[0] + 31816u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF4F0u) [[unlikely]] return; }
L_003DF4F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF500u); set32(c.r[5], c.r[29].w[0] + 512u);  if (depth < kMaxDepth) unit_00B8(c, 83u, depth + 1u); else { c.pc = 0x003E0DF0u; return; } if (c.pc != 0x003DF500u) [[unlikely]] return; }
L_003DF500:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF510u); set32(c.r[16], c.r[16].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x003DF510u) [[unlikely]] return; }
L_003DF510:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 448u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 31888u);
    set32(c.r[6], c.r[16].w[0] + 448u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF528u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF528u) [[unlikely]] return; }
L_003DF528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF588; } }
L_003DF530:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    set32(c.r[5], c.r[5].w[0] + 31904u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF554u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF554u) [[unlikely]] return; }
L_003DF554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[2].w[0] - 4447u);
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 3;
L_003DF560:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_003DF584; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 512u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DF560u | kUnwind; return; } goto L_003DF560; } }
L_003DF584:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DF588:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF5D0; } }
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DEDF8u | kUnwind; return; } goto L_003DEDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF5D4; } }
L_003DF5B0:
    set32(c.r[3], ld32((c.r[29].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 1u)));
    set32(c.r[5], c.r[5].w[0] + 31968u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF5D0u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF5D0u) [[unlikely]] return; }
L_003DF5D0:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DF5D4:
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.budget -= 1;
L_003DF5D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[30].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF670; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[22].w[0] - 4447u);  if (t) { goto L_003DF67C; } }
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF670; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] - 1u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20528u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] + 32008u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF61Cu); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF61Cu) [[unlikely]] return; }
L_003DF61C:
    set32(c.r[4], ld32((c.r[29].w[0] + 512u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);  if (t) { goto L_003DF67C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 512u)));  if (t) { goto L_003DF670; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_003DF648:
    st32((c.r[29].w[0] + 512u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003DF67C; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DF648u | kUnwind; return; } goto L_003DF648; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 512u)));
    c.budget -= 1;
L_003DF670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DCA50u | kUnwind; return; } goto L_003DCA50; } }
L_003DF67C:
    set32(c.r[2], ld32((c.r[29].w[0] + 532u)));
    c.budget -= 1;
L_003DF680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003DF6B4; } }
    set32(c.r[4], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; ld128((c.r[29].w[0] + 704u) & ~15u, c.r[16]);  if (t) { goto L_003DF6B8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 688u) & ~15u, c.r[17]);  if (t) { goto L_003DF6BC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF6B4u); set32(c.r[5], c.r[5].w[0] + 32088u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF6B4u) [[unlikely]] return; }
L_003DF6B4:
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003DF6B8:
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[17]);
    c.budget -= 1;
L_003DF6BC:
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 560u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 720u);  c.pc = t; return; }
L_003DF6E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20192u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] - 8u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[3].w[0] + 2208u), c.r[2].w[0]);  if (t) { goto L_003DF728; } }
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] - 22720u);  if (t) { goto L_003DF734; } }
L_003DF728:
    set32(c.r[2], 0u + 8u);
    st32((c.r[3].w[0] + 2208u), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] - 22720u);
    c.budget -= 3;
L_003DF734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF73Cu); set32(c.r[4], ld32((c.r[16].w[0] + 2208u)));  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003DF73Cu) [[unlikely]] return; }
L_003DF73C:
    set32(c.r[4], ld32((c.r[16].w[0] + 2208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF748u); st32((c.r[16].w[0] + 2420u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003DF748u) [[unlikely]] return; }
L_003DF748:
    set32(c.r[4], ld32((c.r[16].w[0] + 2208u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF754u); st32((c.r[16].w[0] + 2424u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003DF754u) [[unlikely]] return; }
L_003DF754:
    set32(c.r[4], ld32((c.r[16].w[0] + 504u)));
    st32((c.r[16].w[0] + 2496u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF764u); set32(c.r[4], c.r[4].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003DF764u) [[unlikely]] return; }
L_003DF764:
    set32(c.r[4], ld32((c.r[16].w[0] + 508u)));
    st32((c.r[16].w[0] + 1644u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF778u); set32(c.r[4], c.r[4].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003DF778u) [[unlikely]] return; }
L_003DF778:
    set32(c.r[4], ld32((c.r[16].w[0] + 508u)));
    st32((c.r[16].w[0] + 1576u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF78Cu); set32(c.r[4], c.r[4].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003DF78Cu) [[unlikely]] return; }
L_003DF78C:
    set32(c.r[4], ld32((c.r[16].w[0] + 508u)));
    st32((c.r[16].w[0] + 1572u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF7A0u); set32(c.r[4], c.r[4].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003DF7A0u) [[unlikely]] return; }
L_003DF7A0:
    set32(c.r[4], ld32((c.r[16].w[0] + 508u)));
    st32((c.r[16].w[0] + 1584u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF7B4u); set32(c.r[4], c.r[4].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003DF7B4u) [[unlikely]] return; }
L_003DF7B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 508u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 1580u), c.r[2].w[0]);  if (t) { goto L_003DF81C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[2].w[0] - 31984u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] - 31980u));
    set32(c.r[7], 0u - 1u);
    c.budget -= 7;
L_003DF7E0:
    set32(c.r[3], ld32((c.r[6].w[0] + 1576u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[1]);
    set32(c.r[2], ld32((c.r[6].w[0] + 1572u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 1584u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.f[1]);
    set32(c.r[2], ld32((c.r[6].w[0] + 1580u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != c.r[7].d[0]; st32((c.r[4].w[0]), c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DF7E0u | kUnwind; return; } goto L_003DF7E0; } }
L_003DF81C:
    set32(c.r[16], c.r[17].w[0] - 22720u);
    set32(c.r[4], ld32((c.r[16].w[0] + 504u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF834u); set32(c.r[4], c.r[4].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003DF834u) [[unlikely]] return; }
L_003DF834:
    set32(c.r[4], ld32((c.r[16].w[0] + 504u)));
    st32((c.r[16].w[0] + 2428u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF848u); set32(c.r[4], c.r[4].w[0] << 2);  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003DF848u) [[unlikely]] return; }
L_003DF848:
    st32((c.r[16].w[0] + 2432u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003DF860:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    st32((c.r[3].w[0] + 520u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 152u)));
    st32((c.r[3].w[0] + 516u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 512u), c.r[22].w[0]);
    st32((c.r[3].w[0] + 508u), c.r[6].w[0]);
    c.budget -= 28;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 504u), c.r[6].w[0]);  if (t) { goto L_003DF940; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DF950; }
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DF944; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = ld32((c.r[3].w[0] + 2324u));
    c.f[1] = ld32((c.r[2].w[0] - 29484u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 1u);  if (t) { goto L_003DF940; } }
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 124u), c.r[5].w[0]);  if (t) { goto L_003DF920; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 172u), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 31976u);  if (t) { goto L_003DF92C; } }
L_003DF920:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 116u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 31960u);
    c.budget -= 3;
L_003DF92C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF938u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF938u) [[unlikely]] return; }
L_003DF938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003DF95C; } }
L_003DF940:
    set32(c.r[2], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DF944:
    set32(c.r[3], ld32((c.r[2].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003DF958; } }
L_003DF950:
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 124u), c.r[2].w[0]);
    c.budget -= 2;
L_003DF958:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DF95C:
    set32(c.r[2], ld32((c.r[3].w[0] + 456u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003DF99C; } }
    c.f[1] = ld32((c.r[3].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 29484u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DF9A4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DF9A0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF99Cu); set32(c.r[5], c.r[5].w[0] - 31944u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DF99Cu) [[unlikely]] return; }
L_003DF99C:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DF9A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003DF9A4:
    c.f[1] = ld32((c.r[2].w[0] - 29484u));
    c.f[0] = ld32((c.r[3].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DF9F4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DF9F4; }
    c.r[2].d[0] = ld64((c.r[3].w[0] + 400u));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DF9F4; }
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 404u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 31832u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DF9F0u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DF9F0u) [[unlikely]] return; }
L_003DF9F0:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DF9F4:
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFA64; }
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFA64; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] - 29484u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFA68; }
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003DFA60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2400u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 31816u);
    st32((c.r[3].w[0] + 1568u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFA60u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DFA60u) [[unlikely]] return; }
L_003DFA60:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DFA64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003DFA68:
    c.f[1] = ld32((c.r[2].w[0] - 29484u));
    c.f[0] = ld32((c.r[3].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFAA8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFAA8; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.r[6].d[0] = 0ull | 64000ull;
    c.r[6].d[0] = c.r[6].d[0] << 46;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFAA4u); set32(c.r[5], c.r[5].w[0] - 31800u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DFAA4u) [[unlikely]] return; }
L_003DFAA4:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DFAA8:
    set32(c.r[2], ld32((c.r[3].w[0] + 192u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFB44; }
    set32(c.r[2], ld32((c.r[3].w[0] + 200u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFB44; }
    set32(c.r[2], ld32((c.r[3].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFB24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[3].w[0] + 108u));
    c.f[0] = ld32((c.r[2].w[0] - 29484u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFB24; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFB24; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFB24; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 156u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFB44; }
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFB24; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFB40; } }
L_003DFB24:
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] - 31664u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFB40u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DFB40u) [[unlikely]] return; }
L_003DFB40:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DFB44:
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFBC8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFB88; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  goto L_003DFB8C; }
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 29344u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFB84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DFB84u) [[unlikely]] return; }
L_003DFB84:
    set32(c.r[16], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DFB88:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 1;
L_003DFB8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFBC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003DFBBC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFBACu); set32(c.r[5], c.r[5].w[0] - 31656u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DFBACu) [[unlikely]] return; }
L_003DFBAC:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFBBCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DFBBCu) [[unlikely]] return; }
L_003DFBBC:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFC04; } }
L_003DFBC8:
    set32(c.r[2], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));  goto L_003DFBE4; }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFC04; }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 1;
L_003DFBE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFBF0u); set32(c.r[5], c.r[5].w[0] - 31552u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DFBF0u) [[unlikely]] return; }
L_003DFBF0:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC00u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DFC00u) [[unlikely]] return; }
L_003DFC00:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DFC04:
    set32(c.r[2], ld32((c.r[3].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFC3C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003DFC38; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC28u); set32(c.r[5], c.r[5].w[0] - 31440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DFC28u) [[unlikely]] return; }
L_003DFC28:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC38u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DFC38u) [[unlikely]] return; }
L_003DFC38:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DFC3C:
    set32(c.r[2], ld32((c.r[3].w[0] + 404u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFC74; }
    set32(c.r[2], ld32((c.r[3].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFC74; }
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003DFC74; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFC70u); set32(c.r[5], c.r[5].w[0] - 31352u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DFC70u) [[unlikely]] return; }
L_003DFC70:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DFC74:
    set32(c.r[2], ld32((c.r[3].w[0] + 412u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003DFC88; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.r[4].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_003DFC88:
    st32((c.r[3].w[0] + 484u), c.r[4].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003DFCB4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 148u)));  goto L_003DFCB0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 96u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[3].w[0] + 500u), c.r[5].w[0]);  goto L_003DFCB8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 148u)));
    c.budget -= 1;
L_003DFCB0:
    c.r[5].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_003DFCB4:
    st32((c.r[3].w[0] + 500u), c.r[5].w[0]);
    c.budget -= 1;
L_003DFCB8:
    set32(c.r[4], c.r[18].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003DFCD4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DFCD8; } }
L_003DFCD4:
    st32((c.r[4].w[0] + 2312u), c.r[2].w[0]);
    c.budget -= 1;
L_003DFCD8:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 432u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFD18; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 124u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0] + 356u)));  goto L_003DFD1C; }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD04u); set32(c.r[5], c.r[5].w[0] - 31256u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DFD04u) [[unlikely]] return; }
L_003DFD04:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD14u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DFD14u) [[unlikely]] return; }
L_003DFD14:
    set32(c.r[4], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DFD18:
    set32(c.r[5], ld32((c.r[4].w[0] + 356u)));
    c.budget -= 1;
L_003DFD1C:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 504u)));  goto L_003DFD40; }
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFD60; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 352u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 504u)));  goto L_003DFD64; }
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 1;
L_003DFD40:
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 504u), c.r[2].w[0]);  if (t) { goto L_003DFD5C; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[17], 0u + 1u);
    st32((c.r[4].w[0] + 504u), c.r[2].w[0]);
    c.budget -= 3;
L_003DFD5C:
    set32(c.r[16], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003DFD60:
    set32(c.r[6], ld32((c.r[16].w[0] + 504u)));
    c.budget -= 1;
L_003DFD64:
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003DFD8C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD7Cu); set32(c.r[5], c.r[5].w[0] - 31184u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DFD7Cu) [[unlikely]] return; }
L_003DFD7C:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFD8Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DFD8Cu) [[unlikely]] return; }
L_003DFD8C:
    set32(c.r[4], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[23], c.r[22].w[0] + c.r[17].w[0]);  if (t) { goto L_003DFDC4; } }
L_003DFDA8:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.f[1] = fp::mul(c.f[1], c.f[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DFDA8u | kUnwind; return; } goto L_003DFDA8; } }
L_003DFDC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[18].w[0] - 22720u);
    set32(c.r[17], ld32((c.r[16].w[0] + 504u)));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[20], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] - 4u);
    st32((c.r[16].w[0] + 2200u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 2204u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 480u), c.f[0]);  if (t) { goto L_003DFE10; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[16].w[0] + 136u), 0u);
    set32(c.r[4], c.r[4].w[0] - 31144u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFE10u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DFE10u) [[unlikely]] return; }
L_003DFE10:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[3], c.r[17].w[0] + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[3].d[0];  if (t) { goto L_003DFE44; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFE34u); set32(c.r[5], c.r[5].w[0] - 31112u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DFE34u) [[unlikely]] return; }
L_003DFE34:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFE44u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DFE44u) [[unlikely]] return; }
L_003DFE44:
    set32(c.r[2], ld32((c.r[16].w[0] + 392u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 444u)));  goto L_003DFE6C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 440u), c.r[2].w[0]);  if (t) { goto L_003DFEB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 88u), 0u);  if (t) { goto L_003DFEB4; } }
L_003DFE6C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFEA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[1] = ld32((c.r[16].w[0] + 448u));
    c.f[0] = ld32((c.r[2].w[0] - 29484u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFEA0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 452u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFEB4; } }
L_003DFEA0:
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[2].w[0] + 88u)));
    st32((c.r[2].w[0] + 88u), 0u);
    if (c.r[3].d[0] == 0) c.r[3].d[0] = c.r[4].d[0];
    st32((c.r[2].w[0] + 436u), c.r[3].w[0]);
    c.budget -= 5;
L_003DFEB4:
    set32(c.r[16], c.r[18].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 396u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { goto L_003DFF34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFED4u);  if (depth < kMaxDepth) unit_00C4(c, 62u, depth + 1u); else { c.pc = 0x004106F8u; return; } if (c.pc != 0x003DFED4u) [[unlikely]] return; }
L_003DFED4:
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[3], ld32((c.r[16].w[0] + 396u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[29].w[0]), c.r[4].w[0]);  if (t) { goto L_003DFF10; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 30232u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFF08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DFF08u) [[unlikely]] return; }
L_003DFF08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0])));  if (t) { goto L_003DFF28; } }
L_003DFF10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 31040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFF24u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 73u, depth + 1u); else { c.pc = 0x003E0CE8u; return; } if (c.pc != 0x003DFF24u) [[unlikely]] return; }
L_003DFF24:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003DFF28:
    set32(c.r[2], c.r[18].w[0] - 22720u);
    st32((c.r[2].w[0] + 396u), c.r[3].w[0]);
    set32(c.r[2], c.r[18].w[0] - 22720u);
    c.budget -= 3;
L_003DFF34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 396u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003DFF4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003DFF58; } }
L_003DFF4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_003DFF60; } }
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 1;
L_003DFF58:
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 2;
L_003DFF60:
    set32(c.r[17], 0u + 999u);
    c.f[20] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFF70u); c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00BE(c, 158u, depth + 1u); else { c.pc = 0x003F9CE0u; return; } if (c.pc != 0x003DFF70u) [[unlikely]] return; }
L_003DFF70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4F000000u);
    c.f[21] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[19], 0u - 1u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    c.budget -= 6;
L_003DFF88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFF90u);  if (depth < kMaxDepth) unit_00BE(c, 157u, depth + 1u); else { c.pc = 0x003F9C80u; return; } if (c.pc != 0x003DFF90u) [[unlikely]] return; }
L_003DFF90:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[20] = fp::add(c.f[20], c.f[0]);  if (t) { goto L_003DFFD4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = 0ull | 33728ull;
    c.r[7].d[0] = c.r[7].d[0] << 47;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFFC4u); set32(c.r[5], c.r[21].w[0] - 31024u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003DFFC4u) [[unlikely]] return; }
L_003DFFC4:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFFD4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003DFFD4u) [[unlikely]] return; }
L_003DFFD4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003DFF88u | kUnwind; return; } goto L_003DFF88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003DFFE8u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00BE(c, 158u, depth + 1u); else { c.pc = 0x003F9CE0u; return; } if (c.pc != 0x003DFFE8u) [[unlikely]] return; }
L_003DFFE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.budget -= 6;
    [[clang::musttail]] return unit_00B8(c, 1u, depth);
}

}
