#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0006[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0,
    87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 94, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 101, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0,
    211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279,
    0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0,
    304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0,
    308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332,
    0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0,
    372, 0, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382,
    0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0,
    387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392,
    0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0,
    0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0,
    0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0,
    0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 436,
    437, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0,
    0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0,
    0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0,
    0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484,
    0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 489, 0, 0, 0, 0,
};

void unit_0006(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00118000;
    case 2u: goto L_00118038;
    case 3u: goto L_0011803C;
    case 4u: goto L_00118054;
    case 5u: goto L_00118064;
    case 6u: goto L_00118080;
    case 7u: goto L_001180B0;
    case 8u: goto L_001180B8;
    case 9u: goto L_001180C0;
    case 10u: goto L_001180E8;
    case 11u: goto L_001180F8;
    case 12u: goto L_00118100;
    case 13u: goto L_00118144;
    case 14u: goto L_00118158;
    case 15u: goto L_00118190;
    case 16u: goto L_001181B8;
    case 17u: goto L_001181D0;
    case 18u: goto L_00118210;
    case 19u: goto L_00118224;
    case 20u: goto L_00118238;
    case 21u: goto L_00118268;
    case 22u: goto L_00118288;
    case 23u: goto L_001182B4;
    case 24u: goto L_001182D8;
    case 25u: goto L_00118300;
    case 26u: goto L_0011832C;
    case 27u: goto L_00118344;
    case 28u: goto L_00118370;
    case 29u: goto L_001183AC;
    case 30u: goto L_001183D8;
    case 31u: goto L_001183F8;
    case 32u: goto L_00118400;
    case 33u: goto L_00118418;
    case 34u: goto L_00118468;
    case 35u: goto L_001184A4;
    case 36u: goto L_001184B8;
    case 37u: goto L_001184E4;
    case 38u: goto L_00118504;
    case 39u: goto L_00118518;
    case 40u: goto L_0011854C;
    case 41u: goto L_00118560;
    case 42u: goto L_00118594;
    case 43u: goto L_001185A8;
    case 44u: goto L_001185C0;
    case 45u: goto L_001185D0;
    case 46u: goto L_00118600;
    case 47u: goto L_00118640;
    case 48u: goto L_00118654;
    case 49u: goto L_00118664;
    case 50u: goto L_00118678;
    case 51u: goto L_00118690;
    case 52u: goto L_001186A4;
    case 53u: goto L_00118708;
    case 54u: goto L_00118744;
    case 55u: goto L_00118764;
    case 56u: goto L_00118798;
    case 57u: goto L_00118804;
    case 58u: goto L_0011883C;
    case 59u: goto L_00118840;
    case 60u: goto L_0011884C;
    case 61u: goto L_00118870;
    case 62u: goto L_00118878;
    case 63u: goto L_00118880;
    case 64u: goto L_001188C0;
    case 65u: goto L_001188C8;
    case 66u: goto L_001188D8;
    case 67u: goto L_00118900;
    case 68u: goto L_00118904;
    case 69u: goto L_0011891C;
    case 70u: goto L_00118940;
    case 71u: goto L_00118950;
    case 72u: goto L_00118958;
    case 73u: goto L_00118960;
    case 74u: goto L_00118994;
    case 75u: goto L_001189A8;
    case 76u: goto L_001189C0;
    case 77u: goto L_001189D0;
    case 78u: goto L_001189F8;
    case 79u: goto L_00118A10;
    case 80u: goto L_00118A20;
    case 81u: goto L_00118A38;
    case 82u: goto L_00118A64;
    case 83u: goto L_00118A78;
    case 84u: goto L_00118AB8;
    case 85u: goto L_00118AC8;
    case 86u: goto L_00118AF4;
    case 87u: goto L_00118B00;
    case 88u: goto L_00118B0C;
    case 89u: goto L_00118B38;
    case 90u: goto L_00118B68;
    case 91u: goto L_00118B7C;
    case 92u: goto L_00118B94;
    case 93u: goto L_00118BB8;
    case 94u: goto L_00118BBC;
    case 95u: goto L_00118BC0;
    case 96u: goto L_00118BF0;
    case 97u: goto L_00118BFC;
    case 98u: goto L_00118C00;
    case 99u: goto L_00118C30;
    case 100u: goto L_00118C38;
    case 101u: goto L_00118C3C;
    case 102u: goto L_00118C48;
    case 103u: goto L_00118C58;
    case 104u: goto L_00118CA8;
    case 105u: goto L_00118CD8;
    case 106u: goto L_00118D00;
    case 107u: goto L_00118D40;
    case 108u: goto L_00118D78;
    case 109u: goto L_00118D8C;
    case 110u: goto L_00118DA4;
    case 111u: goto L_00118DB0;
    case 112u: goto L_00118DC0;
    case 113u: goto L_00118DCC;
    case 114u: goto L_00118DE4;
    case 115u: goto L_00118E00;
    case 116u: goto L_00118E20;
    case 117u: goto L_00118E38;
    case 118u: goto L_00118E3C;
    case 119u: goto L_00118E70;
    case 120u: goto L_00118E90;
    case 121u: goto L_00118EA0;
    case 122u: goto L_00118EC8;
    case 123u: goto L_00118F18;
    case 124u: goto L_00118F3C;
    case 125u: goto L_00118F70;
    case 126u: goto L_00118F98;
    case 127u: goto L_00118FBC;
    case 128u: goto L_00118FF0;
    case 129u: goto L_00119018;
    case 130u: goto L_0011902C;
    case 131u: goto L_0011904C;
    case 132u: goto L_00119074;
    case 133u: goto L_001190B8;
    case 134u: goto L_001190F8;
    case 135u: goto L_00119128;
    case 136u: goto L_00119160;
    case 137u: goto L_00119190;
    case 138u: goto L_001191C8;
    case 139u: goto L_00119218;
    case 140u: goto L_00119248;
    case 141u: goto L_00119250;
    case 142u: goto L_00119294;
    case 143u: goto L_001192A4;
    case 144u: goto L_001192C0;
    case 145u: goto L_001192C4;
    case 146u: goto L_001192E0;
    case 147u: goto L_00119310;
    case 148u: goto L_00119340;
    case 149u: goto L_00119370;
    case 150u: goto L_001193A8;
    case 151u: goto L_001193F8;
    case 152u: goto L_0011942C;
    case 153u: goto L_00119438;
    case 154u: goto L_0011944C;
    case 155u: goto L_00119484;
    case 156u: goto L_001194AC;
    case 157u: goto L_001194BC;
    case 158u: goto L_001194E8;
    case 159u: goto L_00119544;
    case 160u: goto L_001195E0;
    case 161u: goto L_001195F0;
    case 162u: goto L_00119638;
    case 163u: goto L_00119668;
    case 164u: goto L_00119698;
    case 165u: goto L_001196A4;
    case 166u: goto L_001196D8;
    case 167u: goto L_001196E4;
    case 168u: goto L_00119718;
    case 169u: goto L_00119780;
    case 170u: goto L_001197E4;
    case 171u: goto L_00119818;
    case 172u: goto L_00119838;
    case 173u: goto L_00119840;
    case 174u: goto L_00119880;
    case 175u: goto L_001198A4;
    case 176u: goto L_001198E8;
    case 177u: goto L_00119938;
    case 178u: goto L_00119940;
    case 179u: goto L_00119958;
    case 180u: goto L_00119988;
    case 181u: goto L_00119998;
    case 182u: goto L_001199A8;
    case 183u: goto L_001199C0;
    case 184u: goto L_001199C8;
    case 185u: goto L_001199D0;
    case 186u: goto L_001199F0;
    case 187u: goto L_00119A00;
    case 188u: goto L_00119A10;
    case 189u: goto L_00119A28;
    case 190u: goto L_00119A30;
    case 191u: goto L_00119A38;
    case 192u: goto L_00119A58;
    case 193u: goto L_00119A68;
    case 194u: goto L_00119A78;
    case 195u: goto L_00119A94;
    case 196u: goto L_00119A9C;
    case 197u: goto L_00119AA4;
    case 198u: goto L_00119AC4;
    case 199u: goto L_00119AD4;
    case 200u: goto L_00119AE4;
    case 201u: goto L_00119B00;
    case 202u: goto L_00119B28;
    case 203u: goto L_00119B30;
    case 204u: goto L_00119B38;
    case 205u: goto L_00119B44;
    case 206u: goto L_00119B4C;
    case 207u: goto L_00119B58;
    case 208u: goto L_00119B60;
    case 209u: goto L_00119B6C;
    case 210u: goto L_00119B74;
    case 211u: goto L_00119B80;
    case 212u: goto L_00119B88;
    case 213u: goto L_00119B90;
    case 214u: goto L_00119BA8;
    case 215u: goto L_00119BEC;
    case 216u: goto L_00119C04;
    case 217u: goto L_00119C18;
    case 218u: goto L_00119C20;
    case 219u: goto L_00119C40;
    case 220u: goto L_00119C70;
    case 221u: goto L_00119C98;
    case 222u: goto L_00119CC8;
    case 223u: goto L_00119CD8;
    case 224u: goto L_00119CE8;
    case 225u: goto L_00119CF8;
    case 226u: goto L_00119D38;
    case 227u: goto L_00119D90;
    case 228u: goto L_00119DC0;
    case 229u: goto L_00119E04;
    case 230u: goto L_00119E28;
    case 231u: goto L_00119E78;
    case 232u: goto L_00119EA0;
    case 233u: goto L_00119EB0;
    case 234u: goto L_00119ED0;
    case 235u: goto L_00119F00;
    case 236u: goto L_00119F18;
    case 237u: goto L_00119F30;
    case 238u: goto L_00119F54;
    case 239u: goto L_00119F70;
    case 240u: goto L_00119F88;
    case 241u: goto L_00119F90;
    case 242u: goto L_00119FB0;
    case 243u: goto L_00119FC8;
    case 244u: goto L_00119FE0;
    case 245u: goto L_0011A000;
    case 246u: goto L_0011A028;
    case 247u: goto L_0011A040;
    case 248u: goto L_0011A070;
    case 249u: goto L_0011A080;
    case 250u: goto L_0011A094;
    case 251u: goto L_0011A0B0;
    case 252u: goto L_0011A0F8;
    case 253u: goto L_0011A140;
    case 254u: goto L_0011A188;
    case 255u: goto L_0011A1C8;
    case 256u: goto L_0011A1F0;
    case 257u: goto L_0011A208;
    case 258u: goto L_0011A214;
    case 259u: goto L_0011A220;
    case 260u: goto L_0011A238;
    case 261u: goto L_0011A274;
    case 262u: goto L_0011A2A0;
    case 263u: goto L_0011A2B8;
    case 264u: goto L_0011A2C4;
    case 265u: goto L_0011A2D0;
    case 266u: goto L_0011A2F0;
    case 267u: goto L_0011A338;
    case 268u: goto L_0011A348;
    case 269u: goto L_0011A360;
    case 270u: goto L_0011A36C;
    case 271u: goto L_0011A378;
    case 272u: goto L_0011A3B8;
    case 273u: goto L_0011A3FC;
    case 274u: goto L_0011A420;
    case 275u: goto L_0011A43C;
    case 276u: goto L_0011A454;
    case 277u: goto L_0011A464;
    case 278u: goto L_0011A474;
    case 279u: goto L_0011A47C;
    case 280u: goto L_0011A498;
    case 281u: goto L_0011A4B8;
    case 282u: goto L_0011A4D8;
    case 283u: goto L_0011A500;
    case 284u: goto L_0011A528;
    case 285u: goto L_0011A538;
    case 286u: goto L_0011A548;
    case 287u: goto L_0011A568;
    case 288u: goto L_0011A590;
    case 289u: goto L_0011A5C0;
    case 290u: goto L_0011A5F8;
    case 291u: goto L_0011A61C;
    case 292u: goto L_0011A638;
    case 293u: goto L_0011A654;
    case 294u: goto L_0011A660;
    case 295u: goto L_0011A688;
    case 296u: goto L_0011A6D0;
    case 297u: goto L_0011A714;
    case 298u: goto L_0011A758;
    case 299u: goto L_0011A780;
    case 300u: goto L_0011A7F8;
    case 301u: goto L_0011A834;
    case 302u: goto L_0011A858;
    case 303u: goto L_0011A870;
    case 304u: goto L_0011A880;
    case 305u: goto L_0011A890;
    case 306u: goto L_0011A8E0;
    case 307u: goto L_0011A8F0;
    case 308u: goto L_0011A900;
    case 309u: goto L_0011A908;
    case 310u: goto L_0011A920;
    case 311u: goto L_0011A930;
    case 312u: goto L_0011A940;
    case 313u: goto L_0011A948;
    case 314u: goto L_0011A960;
    case 315u: goto L_0011A970;
    case 316u: goto L_0011A988;
    case 317u: goto L_0011A9A0;
    case 318u: goto L_0011A9B0;
    case 319u: goto L_0011A9EC;
    case 320u: goto L_0011AA08;
    case 321u: goto L_0011AA20;
    case 322u: goto L_0011AA30;
    case 323u: goto L_0011AA74;
    case 324u: goto L_0011AAC4;
    case 325u: goto L_0011AB08;
    case 326u: goto L_0011AB48;
    case 327u: goto L_0011AB5C;
    case 328u: goto L_0011AB8C;
    case 329u: goto L_0011ABA0;
    case 330u: goto L_0011ABC4;
    case 331u: goto L_0011ABE0;
    case 332u: goto L_0011ABFC;
    case 333u: goto L_0011AC18;
    case 334u: goto L_0011AC20;
    case 335u: goto L_0011AC30;
    case 336u: goto L_0011AC38;
    case 337u: goto L_0011AC44;
    case 338u: goto L_0011AC68;
    case 339u: goto L_0011AC94;
    case 340u: goto L_0011ACA0;
    case 341u: goto L_0011ACC4;
    case 342u: goto L_0011ACE8;
    case 343u: goto L_0011AD30;
    case 344u: goto L_0011AD48;
    case 345u: goto L_0011AD50;
    case 346u: goto L_0011AD74;
    case 347u: goto L_0011ADA0;
    case 348u: goto L_0011ADBC;
    case 349u: goto L_0011ADCC;
    case 350u: goto L_0011ADE0;
    case 351u: goto L_0011AE08;
    case 352u: goto L_0011AE14;
    case 353u: goto L_0011AE1C;
    case 354u: goto L_0011AE2C;
    case 355u: goto L_0011AE70;
    case 356u: goto L_0011AEB0;
    case 357u: goto L_0011AEC0;
    case 358u: goto L_0011AF04;
    case 359u: goto L_0011AF1C;
    case 360u: goto L_0011AF40;
    case 361u: goto L_0011AF50;
    case 362u: goto L_0011AF98;
    case 363u: goto L_0011AFC8;
    case 364u: goto L_0011B010;
    case 365u: goto L_0011B040;
    case 366u: goto L_0011B06C;
    case 367u: goto L_0011B080;
    case 368u: goto L_0011B0A4;
    case 369u: goto L_0011B0C0;
    case 370u: goto L_0011B0DC;
    case 371u: goto L_0011B0F8;
    case 372u: goto L_0011B100;
    case 373u: goto L_0011B110;
    case 374u: goto L_0011B118;
    case 375u: goto L_0011B124;
    case 376u: goto L_0011B148;
    case 377u: goto L_0011B178;
    case 378u: goto L_0011B180;
    case 379u: goto L_0011B1B8;
    case 380u: goto L_0011B1D0;
    case 381u: goto L_0011B1F0;
    case 382u: goto L_0011B1FC;
    case 383u: goto L_0011B220;
    case 384u: goto L_0011B240;
    case 385u: goto L_0011B264;
    case 386u: goto L_0011B274;
    case 387u: goto L_0011B280;
    case 388u: goto L_0011B2A8;
    case 389u: goto L_0011B2B8;
    case 390u: goto L_0011B2C8;
    case 391u: goto L_0011B2F0;
    case 392u: goto L_0011B2FC;
    case 393u: goto L_0011B308;
    case 394u: goto L_0011B32C;
    case 395u: goto L_0011B370;
    case 396u: goto L_0011B394;
    case 397u: goto L_0011B3A0;
    case 398u: goto L_0011B3AC;
    case 399u: goto L_0011B3D0;
    case 400u: goto L_0011B410;
    case 401u: goto L_0011B438;
    case 402u: goto L_0011B448;
    case 403u: goto L_0011B460;
    case 404u: goto L_0011B484;
    case 405u: goto L_0011B4A8;
    case 406u: goto L_0011B4C0;
    case 407u: goto L_0011B4D4;
    case 408u: goto L_0011B508;
    case 409u: goto L_0011B530;
    case 410u: goto L_0011B540;
    case 411u: goto L_0011B57C;
    case 412u: goto L_0011B598;
    case 413u: goto L_0011B5A8;
    case 414u: goto L_0011B5B0;
    case 415u: goto L_0011B5B8;
    case 416u: goto L_0011B60C;
    case 417u: goto L_0011B648;
    case 418u: goto L_0011B660;
    case 419u: goto L_0011B670;
    case 420u: goto L_0011B6D4;
    case 421u: goto L_0011B6E8;
    case 422u: goto L_0011B708;
    case 423u: goto L_0011B720;
    case 424u: goto L_0011B734;
    case 425u: goto L_0011B74C;
    case 426u: goto L_0011B75C;
    case 427u: goto L_0011B770;
    case 428u: goto L_0011B784;
    case 429u: goto L_0011B79C;
    case 430u: goto L_0011B7F0;
    case 431u: goto L_0011B844;
    case 432u: goto L_0011B880;
    case 433u: goto L_0011B8A4;
    case 434u: goto L_0011B8E4;
    case 435u: goto L_0011B8EC;
    case 436u: goto L_0011B8FC;
    case 437u: goto L_0011B900;
    case 438u: goto L_0011B904;
    case 439u: goto L_0011B920;
    case 440u: goto L_0011B940;
    case 441u: goto L_0011B95C;
    case 442u: goto L_0011B968;
    case 443u: goto L_0011B980;
    case 444u: goto L_0011B990;
    case 445u: goto L_0011B9C0;
    case 446u: goto L_0011B9C8;
    case 447u: goto L_0011B9D4;
    case 448u: goto L_0011B9EC;
    case 449u: goto L_0011BA0C;
    case 450u: goto L_0011BA30;
    case 451u: goto L_0011BA58;
    case 452u: goto L_0011BA88;
    case 453u: goto L_0011BAA4;
    case 454u: goto L_0011BAE4;
    case 455u: goto L_0011BB14;
    case 456u: goto L_0011BB20;
    case 457u: goto L_0011BB34;
    case 458u: goto L_0011BB88;
    case 459u: goto L_0011BBAC;
    case 460u: goto L_0011BBC8;
    case 461u: goto L_0011BBD8;
    case 462u: goto L_0011BC2C;
    case 463u: goto L_0011BC60;
    case 464u: goto L_0011BC8C;
    case 465u: goto L_0011BC94;
    case 466u: goto L_0011BCA4;
    case 467u: goto L_0011BCAC;
    case 468u: goto L_0011BCC8;
    case 469u: goto L_0011BCF4;
    case 470u: goto L_0011BD54;
    case 471u: goto L_0011BDA0;
    case 472u: goto L_0011BDFC;
    case 473u: goto L_0011BE40;
    case 474u: goto L_0011BE60;
    case 475u: goto L_0011BE84;
    case 476u: goto L_0011BEA0;
    case 477u: goto L_0011BEB8;
    case 478u: goto L_0011BED8;
    case 479u: goto L_0011BEEC;
    case 480u: goto L_0011BF04;
    case 481u: goto L_0011BF10;
    case 482u: goto L_0011BF48;
    case 483u: goto L_0011BF60;
    case 484u: goto L_0011BF7C;
    case 485u: goto L_0011BF94;
    case 486u: goto L_0011BFC0;
    case 487u: goto L_0011BFD8;
    case 488u: goto L_0011BFE0;
    case 489u: goto L_0011BFEC;
    default: bad_entry(c, 0x00118000u); return;
    }
L_00118000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011801C; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[20].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00118080; } }
L_0011801C:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00118058; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 56u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118038u);  if (depth < kMaxDepth) unit_0067(c, 177u, depth + 1u); else { c.pc = 0x0029DB98u; return; } if (c.pc != 0x00118038u) [[unlikely]] return; }
L_00118038:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0011803C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00118058; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118054u);  if (depth < kMaxDepth) unit_0067(c, 179u, depth + 1u); else { c.pc = 0x0029DBD0u; return; } if (c.pc != 0x00118054u) [[unlikely]] return; }
L_00118054:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00118058:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118064u);  if (depth < kMaxDepth) unit_0067(c, 160u, depth + 1u); else { c.pc = 0x0029D928u; return; } if (c.pc != 0x00118064u) [[unlikely]] return; }
L_00118064:
    set32(c.r[4], ld32((c.r[20].w[0] + 104u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[20].w[0] + 36u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118080u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x00118080u) [[unlikely]] return; }
L_00118080:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001180B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001180B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 2;
L_001180C0:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] + 18288u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001180E8u);  if (depth < kMaxDepth) unit_0067(c, 163u, depth + 1u); else { c.pc = 0x0029D978u; return; } if (c.pc != 0x001180E8u) [[unlikely]] return; }
L_001180E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001180F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00118178; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00118178; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 18288u);
    st32((c.r[17].w[0] + 11104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118144u);  if (depth < kMaxDepth) unit_0006(c, 20u, depth + 1u); else { c.pc = 0x00118238u; return; } if (c.pc != 0x00118144u) [[unlikely]] return; }
L_00118144:
    set32(c.r[17], c.r[17].w[0] + 11104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], 0u + 13u);
    c.budget -= 5;
L_00118158:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + 13248u);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118158u | kUnwind; return; } goto L_00118158; } }
L_00118178:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 11104u), c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001181B8u);  if (depth < kMaxDepth) unit_0006(c, 20u, depth + 1u); else { c.pc = 0x00118238u; return; } if (c.pc != 0x001181B8u) [[unlikely]] return; }
L_001181B8:
    set32(c.r[16], c.r[16].w[0] + 11104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 13u);
    c.budget -= 6;
L_001181D0:
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 128u);
    set32(c.r[2], c.r[2].w[0] + 13248u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001181D0u | kUnwind; return; } goto L_001181D0; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118210:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118224u);  if (depth < kMaxDepth) unit_0067(c, 170u, depth + 1u); else { c.pc = 0x0029DAD0u; return; } if (c.pc != 0x00118224u) [[unlikely]] return; }
L_00118224:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118238:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00120000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00120000u);
    c.budget -= 12;
L_00118268:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[20].w[0] - 32592u);
    set32(c.r[7], c.r[19].w[0] - 32584u);
    set32(c.r[8], c.r[18].w[0] - 32520u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118288u);  if (depth < kMaxDepth) unit_0006(c, 33u, depth + 1u); else { c.pc = 0x00118418u; return; } if (c.pc != 0x00118288u) [[unlikely]] return; }
L_00118288:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118268u | kUnwind; return; } goto L_00118268; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 32320u);
    set32(c.r[5], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001182B4u);  if (depth < kMaxDepth) unit_0006(c, 33u, depth + 1u); else { c.pc = 0x00118418u; return; } if (c.pc != 0x001182B4u) [[unlikely]] return; }
L_001182B4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001182D8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[17], 0u + 13u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 1u);
    c.budget -= 10;
L_00118300:
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.r[3].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00118344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011832Cu);  if (depth < kMaxDepth) unit_0067(c, 157u, depth + 1u); else { c.pc = 0x0029D888u; return; } if (c.pc != 0x0011832Cu) [[unlikely]] return; }
L_0011832C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118344u);  if (depth < kMaxDepth) unit_0006(c, 34u, depth + 1u); else { c.pc = 0x00118468u; return; } if (c.pc != 0x00118344u) [[unlikely]] return; }
L_00118344:
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118300u | kUnwind; return; } goto L_00118300; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118370:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 11;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001183B8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001183ACu);  if (depth < kMaxDepth) unit_0067(c, 154u, depth + 1u); else { c.pc = 0x0029D848u; return; } if (c.pc != 0x001183ACu) [[unlikely]] return; }
L_001183AC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001183F8; } }
L_001183B8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[16], c.r[16].w[0] + 18288u);
    set32(c.r[6], ld32((c.r[2].w[0] + 40u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001183D8u);  if (depth < kMaxDepth) unit_0006(c, 41u, depth + 1u); else { c.pc = 0x00118560u; return; } if (c.pc != 0x001183D8u) [[unlikely]] return; }
L_001183D8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 40u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001183F8u);  if (depth < kMaxDepth) unit_0006(c, 39u, depth + 1u); else { c.pc = 0x00118518u; return; } if (c.pc != 0x001183F8u) [[unlikely]] return; }
L_001183F8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.budget -= 2;
L_00118400:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118418:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00118430; } }
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[6].w[0]);
    c.budget -= 4;
L_00118430:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00118448; } }
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[7].w[0]);
    c.budget -= 4;
L_00118448:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_00118460; } }
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[8].w[0]);
    c.budget -= 4;
L_00118460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118468:
    set32(c.r[2], 0u + 12u);
    set32(c.r[29], c.r[29].w[0] - 288u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00118504; } }
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001184A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001184A4u) [[unlikely]] return; }
L_001184A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001184B8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001184B8u) [[unlikely]] return; }
L_001184B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00118504; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 920u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] - 10992u);
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001184E4u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001184E4u) [[unlikely]] return; }
L_001184E4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[4], 0u + 500u);
    set32(c.r[5], 0u + 25u);
    c.r[6].d[0] = c.r[6].d[0] | 256ull;
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118504u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x00118504u) [[unlikely]] return; }
L_00118504:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 288u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118518:
    set32(c.r[2], 0u + 12u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011854C; } }
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011854Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011854Cu) [[unlikely]] return; }
L_0011854C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118560:
    set32(c.r[2], 0u + 12u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 64u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00118594; } }
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 64u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00118594u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00118594u) [[unlikely]] return; }
L_00118594:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001185A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001185C0u);  if (depth < kMaxDepth) unit_0006(c, 12u, depth + 1u); else { c.pc = 0x00118100u; return; } if (c.pc != 0x001185C0u) [[unlikely]] return; }
L_001185C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001185D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001186EC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118600u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00118600u) [[unlikely]] return; }
L_00118600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00118648; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00118618; } }
    st32((c.r[2].w[0] + 324u), 0u);
    c.budget -= 1;
L_00118618:
    c.f[12] = 0u;
    set32(c.r[4], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0]), 0u);
    st32((c.r[17].w[0] + 4u), 0u);
    c.f[13] = c.f[12];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118640u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00118640u) [[unlikely]] return; }
L_00118640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001186EC; } }
L_00118648:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118654u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00118654u) [[unlikely]] return; }
L_00118654:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118664u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x00118664u) [[unlikely]] return; }
L_00118664:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118678u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x00118678u) [[unlikely]] return; }
L_00118678:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118690u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00118690u) [[unlikely]] return; }
L_00118690:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001186A4u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001186A4u) [[unlikely]] return; }
L_001186A4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 324u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 384u));
    st32((c.r[3].w[0] + 128u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[2].w[0] + 388u));
    st32((c.r[2].w[0] + 132u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.f[0] = ld32((c.r[3].w[0] + 392u));
    st32((c.r[3].w[0] + 136u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 384u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0] + 388u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[2].w[0] + 392u), 0u);
    c.budget -= 18;
L_001186EC:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118708:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] - 10592u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118744u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x00118744u) [[unlikely]] return; }
L_00118744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011884C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118764u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00118764u) [[unlikely]] return; }
L_00118764:
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[18], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001187BC; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] << 5);
    set32(c.r[16], c.r[16].w[0] + c.r[20].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118798u);  if (depth < kMaxDepth) unit_0006(c, 73u, depth + 1u); else { c.pc = 0x00118960u; return; } if (c.pc != 0x00118798u) [[unlikely]] return; }
L_00118798:
    st32((c.r[29].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[4], c.r[16].w[0] - 16u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[16].w[0] - 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00118804; } }
L_001187BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[2], c.r[2].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001187DC; } }
    st32((c.r[3].w[0] + 324u), 0u);
    c.budget -= 1;
L_001187DC:
    c.f[12] = 0u;
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st32((c.r[2].w[0]), 0u);
    c.f[13] = c.f[12];
    st32((c.r[2].w[0] + 4u), 0u);
    c.f[14] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118804u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00118804u) [[unlikely]] return; }
L_00118804:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011884C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.f[14] = ld32((c.r[2].w[0] + 16u));
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] + 8u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[4], c.r[4].w[0] << 5);
    c.f[13] = ld32((c.r[2].w[0] + 12u));
    c.budget -= 10;
L_0011883C:
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.budget -= 1;
L_00118840:
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011884Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0011884Cu) [[unlikely]] return; }
L_0011884C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118870:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 2;
L_00118878:
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.budget -= 2;
L_00118880:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0011891C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011891C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], c.r[3].w[0] + 18368u);
    set32(c.r[2], c.r[2].w[0] - 10536u);
    set32(c.r[20], c.r[18].w[0] + 16u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
L_001188C0:
    set32(c.r[16], 0u + 13u);
    set32(c.r[19], 0u - 1u);
    c.budget -= 2;
L_001188C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001188D8u);  if (depth < kMaxDepth) unit_0006(c, 73u, depth + 1u); else { c.pc = 0x00118960u; return; } if (c.pc != 0x001188D8u) [[unlikely]] return; }
L_001188D8:
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001188C8u | kUnwind; return; } goto L_001188C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 448u), 0u);
    set32(c.r[2], c.r[2].w[0] - 10584u);
    set32(c.r[3], 0u + 14u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 464u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118904u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00118904u) [[unlikely]] return; }
    goto L_00118904;
L_00118900:
    c.budget -= 1;
L_00118904:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 10608u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011891Cu);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0011891Cu) [[unlikely]] return; }
L_0011891C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118940:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118950:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118958:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[12] = 0u;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[4], c.r[2].w[0] + 16u);
    st32((c.r[2].w[0]), 0u);
    c.f[13] = c.f[12];
    st32((c.r[2].w[0] + 4u), 0u);
    c.f[14] = c.f[12];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118994u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00118994u) [[unlikely]] return; }
L_00118994:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001189A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 18368u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001189C0u);  if (depth < kMaxDepth) unit_0006(c, 95u, depth + 1u); else { c.pc = 0x00118BC0u; return; } if (c.pc != 0x001189C0u) [[unlikely]] return; }
L_001189C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001189D0:
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 18384u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001189F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 18368u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118A10u);  if (depth < kMaxDepth) unit_0006(c, 89u, depth + 1u); else { c.pc = 0x00118B38u; return; } if (c.pc != 0x00118A10u) [[unlikely]] return; }
L_00118A10:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00118A3C; } }
L_00118A38:
    st32((c.r[3].w[0] + 324u), 0u);
    c.budget -= 1;
L_00118A3C:
    c.f[12] = 0u;
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st32((c.r[2].w[0]), 0u);
    c.f[13] = c.f[12];
    st32((c.r[2].w[0] + 4u), 0u);
    c.f[14] = c.f[12];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118A64u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00118A64u) [[unlikely]] return; }
L_00118A64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118A78:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 10536u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 13u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[19], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[20], c.r[17].w[0] + 16u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 16;
L_00118AB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118AC8u);  if (depth < kMaxDepth) unit_0006(c, 73u, depth + 1u); else { c.pc = 0x00118960u; return; } if (c.pc != 0x00118AC8u) [[unlikely]] return; }
L_00118AC8:
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118AB8u | kUnwind; return; } goto L_00118AB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[20].w[0] + 448u), 0u);
    set32(c.r[3], 0u + 14u);
    set32(c.r[2], c.r[2].w[0] - 10584u);
    st32((c.r[17].w[0] + 464u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118AF4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00118AF4u) [[unlikely]] return; }
L_00118AF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00118B00:
    set32(c.r[5], c.r[5].w[0] - 10608u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B0Cu);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x00118B0Cu) [[unlikely]] return; }
L_00118B0C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118B38:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00118BA8; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00118B68:
    c.f[12] = 0u;
    set32(c.r[4], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.f[13] = c.f[12];
    c.budget -= 5;
L_00118B7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.f[12];
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118B94u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00118B94u) [[unlikely]] return; }
L_00118B94:
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118B68u | kUnwind; return; } goto L_00118B68; } }
L_00118BA8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
L_00118BB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118BBC:
    c.budget -= 1;
L_00118BC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00118C14; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00118BF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118BFCu);  if (depth < kMaxDepth) unit_0006(c, 45u, depth + 1u); else { c.pc = 0x001185D0u; return; } if (c.pc != 0x00118BFCu) [[unlikely]] return; }
L_00118BFC:
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_00118C00:
    set32(c.r[2], ld32((c.r[17].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118BF0u | kUnwind; return; } goto L_00118BF0; } }
L_00118C14:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118C30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_00118C38:
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 1;
L_00118C3C:
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118C48u);  if (depth < kMaxDepth) unit_0006(c, 61u, depth + 1u); else { c.pc = 0x00118870u; return; } if (c.pc != 0x00118C48u) [[unlikely]] return; }
L_00118C48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118C58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 20952u)));
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00118D30; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 29504u)));
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00118D28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[7].w[0] + 18864u);
    set32(c.r[2], c.r[2].w[0] - 9944u);
    set32(c.r[5], c.r[6].w[0] + 4u);
    st32((c.r[7].w[0] + 18864u), c.r[2].w[0]);
    set32(c.r[3], 0u + 99u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u - 1u);
    c.budget -= 9;
L_00118CA8:
    st32((c.r[2].w[0] + 76u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], c.r[2].w[0] + 88u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118CA8u | kUnwind; return; } goto L_00118CA8; } }
    st32((c.r[5].w[0] + 8800u), 0u);
    set32(c.r[4], c.r[6].w[0] + 8808u);
    set32(c.r[2], 0u + 999u);
    set32(c.r[5], c.r[6].w[0] + 16816u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_00118CD8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118CD8u | kUnwind; return; } goto L_00118CD8; } }
    st32((c.r[4].w[0] + 8000u), 0u);
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_00118D00:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118D00u | kUnwind; return; } goto L_00118D00; } }
    st32((c.r[5].w[0] + 320u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[9].w[0] - 29504u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 17152u), c.r[2].w[0]);
    c.budget -= 4;
L_00118D28:
    set32(c.r[2], c.r[7].w[0] + 18864u);
    st32((c.r[8].w[0] - 20952u), c.r[2].w[0]);
    c.budget -= 2;
L_00118D30:
    set32(c.r[2], ld32((c.r[8].w[0] - 20952u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118D40:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118D78u);  if (depth < kMaxDepth) unit_007B(c, 89u, depth + 1u); else { c.pc = 0x002ED118u; return; } if (c.pc != 0x00118D78u) [[unlikely]] return; }
L_00118D78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118D8Cu);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x00118D8Cu) [[unlikely]] return; }
L_00118D8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00118EA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118DA4u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x00118DA4u) [[unlikely]] return; }
L_00118DA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118DB0u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x00118DB0u) [[unlikely]] return; }
L_00118DB0:
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118DC0u);  if (depth < kMaxDepth) unit_0093(c, 384u, depth + 1u); else { c.pc = 0x0034FBD0u; return; } if (c.pc != 0x00118DC0u) [[unlikely]] return; }
L_00118DC0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118DCCu);  if (depth < kMaxDepth) unit_0006(c, 244u, depth + 1u); else { c.pc = 0x00119FE0u; return; } if (c.pc != 0x00118DCCu) [[unlikely]] return; }
L_00118DCC:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118DE4u);  if (depth < kMaxDepth) unit_0006(c, 169u, depth + 1u); else { c.pc = 0x00119780u; return; } if (c.pc != 0x00118DE4u) [[unlikely]] return; }
L_00118DE4:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00118E88; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[3].w[0] - 29496u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
L_00118E00:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_00118E88; } }
    set32(c.r[21], 0u - 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00118E20:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == c.r[21].d[0];  if (t) { goto L_00118E44; } }
    set32(c.r[4], c.r[20].w[0] - 14960u);
    set32(c.r[5], c.r[19].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E38u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00118E38u) [[unlikely]] return; }
L_00118E38:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00118E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00118E48; } }
L_00118E44:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00118E48:
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00118E70; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00118E70u) [[unlikely]] return; }
L_00118E70:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118E20u | kUnwind; return; } goto L_00118E20; } }
L_00118E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118E90u);  if (depth < kMaxDepth) unit_0006(c, 103u, depth + 1u); else { c.pc = 0x00118C58u; return; } if (c.pc != 0x00118E90u) [[unlikely]] return; }
L_00118E90:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118EA0u);  if (depth < kMaxDepth) unit_0006(c, 285u, depth + 1u); else { c.pc = 0x0011A538u; return; } if (c.pc != 0x00118EA0u) [[unlikely]] return; }
L_00118EA0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00118EC8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[19].w[0] + 80u), 0u);
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_00118FB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F18u);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x00118F18u) [[unlikely]] return; }
L_00118F18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00119088; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00118FB0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F3Cu);  if (depth < kMaxDepth) unit_0093(c, 332u, depth + 1u); else { c.pc = 0x0034F2F0u; return; } if (c.pc != 0x00118F3Cu) [[unlikely]] return; }
L_00118F3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00118FB0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00118FB0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[16], c.r[3].w[0] - 29496u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_00118FB0; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00118F70:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00118F98; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[5], ld32((c.r[19].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00118F98u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00118F98u) [[unlikely]] return; }
L_00118F98:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118F70u | kUnwind; return; } goto L_00118F70; } }
L_00118FB0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00118FBCu);  if (depth < kMaxDepth) unit_0006(c, 241u, depth + 1u); else { c.pc = 0x00119F90u; return; } if (c.pc != 0x00118FBCu) [[unlikely]] return; }
L_00118FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119088; } }
    set32(c.r[3], c.r[19].w[0] + 20u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00119088; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[20].d[0] = c.r[20].d[0] | 65535ull;
    c.budget -= 5;
L_00118FF0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[18], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00119074; } }
    set32(c.r[4], c.r[23].w[0] - 14960u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119018u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00119018u) [[unlikely]] return; }
L_00119018:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[22].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011902Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0011902Cu) [[unlikely]] return; }
L_0011902C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119054; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00119054; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011904Cu);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x0011904Cu) [[unlikely]] return; }
L_0011904C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119074; } }
L_00119054:
    set32(c.r[2], ld32((c.r[16].w[0] + 584u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[20].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119088; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119074u);  if (depth < kMaxDepth) unit_0006(c, 107u, depth + 1u); else { c.pc = 0x00118D40u; return; } if (c.pc != 0x00119074u) [[unlikely]] return; }
L_00119074:
    set32(c.r[2], ld32((c.r[21].w[0] + 56u)));
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00118FF0u | kUnwind; return; } goto L_00118FF0; } }
L_00119088:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001190B8:
    set32(c.r[29], c.r[29].w[0] - 1008u);
    st128((c.r[29].w[0] + 960u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 928u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[29].w[0] + 512u);
    st128((c.r[29].w[0] + 864u) & ~15u, c.r[30]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 992u) & ~15u, c.r[16]);
    set32(c.r[30], c.r[29].w[0] + 256u);
    st128((c.r[29].w[0] + 976u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 944u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 912u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 896u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 880u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 848u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 832u), c.r[4].w[0]);
    c.budget -= 16;
L_001190F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 10040u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00119114; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119128; } }
L_00119114:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] - 10040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119128u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00119128u) [[unlikely]] return; }
L_00119128:
    set32(c.r[3], c.r[20].w[0] + 1u);
    c.r[21].d[0] = c.r[20].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[17], c.r[20].w[0] >> 31);
    set32(c.r[22], 0u - c.r[20].w[0]);
    st32((c.r[29].w[0] + 836u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00119190; } }
    set32(c.r[4], 0u + 48u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    st8((c.r[29].w[0] + 512u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[29].w[0] + 513u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011917C; } }
L_00119160:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119160u | kUnwind; return; } goto L_00119160; } }
L_0011917C:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119190u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00119190u) [[unlikely]] return; }
L_00119190:
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[17].d[0] == 0) c.r[3].d[0] = c.r[20].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001191BC; } }
    set32(c.r[7], 0u + 48u);
    set32(c.r[4], c.r[29].w[0] + 513u);
    st8((c.r[29].w[0] + 512u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001191F8; } }
L_001191BC:
    set32(c.r[5], 0u + 10u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001191C8:
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x001191D0u);  goto L_001191D4; }
L_001191D4:
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 48u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x001191E8u);  goto L_001191EC; }
L_001191EC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001191C8u | kUnwind; return; } goto L_001191C8; } }
L_001191F8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011920C; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_0011920C:
    c.r[2].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119234; } }
L_00119218:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119218u | kUnwind; return; } goto L_00119218; } }
L_00119234:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119248u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00119248u) [[unlikely]] return; }
L_00119248:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 2;
L_00119250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], c.r[3].w[0] - 65u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119270; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 3;
L_00119270:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119250u | kUnwind; return; } goto L_00119250; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[3].w[0] + 26848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119294u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x00119294u) [[unlikely]] return; }
L_00119294:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001192A4u);  if (depth < kMaxDepth) unit_0093(c, 241u, depth + 1u); else { c.pc = 0x0034E7C0u; return; } if (c.pc != 0x001192A4u) [[unlikely]] return; }
L_001192A4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0];  if (t) { goto L_001195F0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 832u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001192C4u);  if (depth < kMaxDepth) unit_0006(c, 286u, depth + 1u); else { c.pc = 0x0011A548u; return; } if (c.pc != 0x001192C4u) [[unlikely]] return; }
    goto L_001192C4;
L_001192C0:
    c.budget -= 1;
L_001192C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001192E8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001192E0u);  if (depth < kMaxDepth) unit_0093(c, 201u, depth + 1u); else { c.pc = 0x0034E298u; return; } if (c.pc != 0x001192E0u) [[unlikely]] return; }
L_001192E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001195F0; } }
L_001192E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[2].w[0] - 10032u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00119304; } }
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119310; } }
L_00119304:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119310u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00119310u) [[unlikely]] return; }
L_00119310:
    set32(c.r[16], c.r[29].w[0] + 768u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 4;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_00119370; } }
    set32(c.r[4], 0u + 48u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    st8((c.r[29].w[0] + 512u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[29].w[0] + 513u);
    c.r[2].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011935C; } }
    c.budget -= 1;
L_00119340:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[18].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119340u | kUnwind; return; } goto L_00119340; } }
L_0011935C:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119370u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x00119370u) [[unlikely]] return; }
L_00119370:
    c.r[3].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[17].d[0] == 0) c.r[3].d[0] = c.r[20].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0011939C; } }
    set32(c.r[7], 0u + 48u);
    set32(c.r[4], c.r[29].w[0] + 769u);
    st8((c.r[29].w[0] + 768u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001193D8; } }
L_0011939C:
    set32(c.r[5], 0u + 10u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_001193A8:
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x001193B0u);  goto L_001193B4; }
L_001193B4:
    c.r[2].d[0] = c.hi.d[0];
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 48u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[7].d[0]) { breakpoint(c, 0x001193C8u);  goto L_001193CC; }
L_001193CC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001193A8u | kUnwind; return; } goto L_001193A8; } }
L_001193D8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001193EC; } }
    set32(c.r[2], 0u + 45u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_001193EC:
    c.r[2].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119414; } }
L_001193F8:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[16].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001193F8u | kUnwind; return; } goto L_001193F8; } }
L_00119414:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[29].w[0] + 512u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[17], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011942Cu);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x0011942Cu) [[unlikely]] return; }
L_0011942C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119438u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x00119438u) [[unlikely]] return; }
L_00119438:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[23].w[0] + 9488u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011944Cu);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x0011944Cu) [[unlikely]] return; }
L_0011944C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001195B8; } }
    st32((c.r[29].w[0] + 516u), c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[29].w[0] + 512u), c.r[20].w[0]);
    set32(c.r[4], c.r[3].w[0] + 26848u);
    st32((c.r[29].w[0] + 524u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 588u), 0u);
    st32((c.r[29].w[0] + 592u), 0u);
    st32((c.r[29].w[0] + 596u), 0u);
    st32((c.r[18].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 516u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119484u);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x00119484u) [[unlikely]] return; }
L_00119484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001194A0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001194A0; } }
    st32((c.r[29].w[0] + 520u), c.r[2].w[0]);
    c.budget -= 1;
L_001194A0:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001194ACu);  if (depth < kMaxDepth) unit_0006(c, 244u, depth + 1u); else { c.pc = 0x00119FE0u; return; } if (c.pc != 0x001194ACu) [[unlikely]] return; }
L_001194AC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001194BCu);  if (depth < kMaxDepth) unit_0006(c, 234u, depth + 1u); else { c.pc = 0x00119ED0u; return; } if (c.pc != 0x001194BCu) [[unlikely]] return; }
L_001194BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 832u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[4].w[0] + 4u);
    set32(c.r[3], ld32((c.r[6].w[0] + 8800u)));
    set32(c.r[4], 0u + 88u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119540; } }
    set32(c.r[2], c.r[29].w[0] + 576u);
    c.budget -= 1;
L_001194E8:
    ldl(c.r[4], (c.r[5].w[0] + 7u));
    ldr(c.r[4], (c.r[5].w[0]));
    ldl(c.r[7], (c.r[5].w[0] + 15u));
    ldr(c.r[7], (c.r[5].w[0] + 8u));
    ldl(c.r[8], (c.r[5].w[0] + 23u));
    ldr(c.r[8], (c.r[5].w[0] + 16u));
    ldl(c.r[9], (c.r[5].w[0] + 31u));
    ldr(c.r[9], (c.r[5].w[0] + 24u));
    sdl(c.r[4], (c.r[3].w[0] + 7u));
    sdr(c.r[4], (c.r[3].w[0]));
    sdl(c.r[7], (c.r[3].w[0] + 15u));
    sdr(c.r[7], (c.r[3].w[0] + 8u));
    sdl(c.r[8], (c.r[3].w[0] + 23u));
    sdr(c.r[8], (c.r[3].w[0] + 16u));
    sdl(c.r[9], (c.r[3].w[0] + 31u));
    sdr(c.r[9], (c.r[3].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001194E8u | kUnwind; return; } goto L_001194E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119574; } }
L_00119540:
    set32(c.r[2], c.r[29].w[0] + 576u);
    c.budget -= 1;
L_00119544:
    c.r[4].d[0] = ld64((c.r[5].w[0]));
    c.r[7].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[5].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[4].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119544u | kUnwind; return; } goto L_00119544; } }
L_00119574:
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[4], (c.r[5].w[0] + 15u));
    ldr(c.r[4], (c.r[5].w[0] + 8u));
    ldl(c.r[7], (c.r[5].w[0] + 23u));
    ldr(c.r[7], (c.r[5].w[0] + 16u));
    sdl(c.r[2], (c.r[3].w[0] + 7u));
    sdr(c.r[2], (c.r[3].w[0]));
    sdl(c.r[4], (c.r[3].w[0] + 15u));
    sdr(c.r[4], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[3].w[0] + 23u));
    sdr(c.r[7], (c.r[3].w[0] + 16u));
    set32(c.r[2], ld32((c.r[6].w[0] + 8800u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 8800u), c.r[2].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001195F0; } }
L_001195B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[2].w[0] - 10016u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001195D4; } }
    st8((c.r[29].w[0] + 512u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001195E0; } }
L_001195D4:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001195E0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001195E0u) [[unlikely]] return; }
L_001195E0:
    set32(c.r[4], c.r[29].w[0] + 512u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001195F0u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001195F0u) [[unlikely]] return; }
L_001195F0:
    set32(c.r[20], ld32((c.r[29].w[0] + 836u)));
    c.r[2].d[0] = c.r[20].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001190F8u | kUnwind; return; } goto L_001190F8; } }
    ld128((c.r[29].w[0] + 992u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 976u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 960u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 944u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 928u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 912u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 896u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 880u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 864u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 848u));
    set32(c.r[29], c.r[29].w[0] + 1008u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119638:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 17152u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011966C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119668u);  if (depth < kMaxDepth) unit_0006(c, 133u, depth + 1u); else { c.pc = 0x001190B8u; return; } if (c.pc != 0x00119668u) [[unlikely]] return; }
L_00119668:
    st32((c.r[17].w[0] + 17152u), 0u);
    c.budget -= 1;
L_0011966C:
    set32(c.r[16], c.r[17].w[0] + 4u);
    set32(c.r[3], 0u + 88u);
    set32(c.r[2], ld32((c.r[16].w[0] + 8800u)));
    set32(c.r[18], c.r[17].w[0] + 16816u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001196BC; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 88u);
    c.budget -= 3;
L_00119698:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001196A4u);  if (depth < kMaxDepth) unit_0006(c, 122u, depth + 1u); else { c.pc = 0x00118EC8u; return; } if (c.pc != 0x001196A4u) [[unlikely]] return; }
L_001196A4:
    set32(c.r[16], c.r[16].w[0] + 88u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119698u | kUnwind; return; } goto L_00119698; } }
L_001196BC:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00119760; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001196D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001196E4u);  if (depth < kMaxDepth) unit_0006(c, 299u, depth + 1u); else { c.pc = 0x0011A780u; return; } if (c.pc != 0x001196E4u) [[unlikely]] return; }
L_001196E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119748; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00119760; } }
    set32(c.r[2], c.r[3].w[0] << 5);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 32u);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00119730; } }
    c.budget -= 1;
L_00119718:
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119718u | kUnwind; return; } goto L_00119718; } }
L_00119730:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00119760; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st32((c.r[18].w[0] + 320u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119760; } }
L_00119748:
    set32(c.r[2], ld32((c.r[17].w[0] + 320u)));
    set32(c.r[16], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001196D8u | kUnwind; return; } goto L_001196D8; } }
L_00119760:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119780:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 84u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00119B90; } }
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00119B90; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_00119B90; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001197E4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001197E4u) [[unlikely]] return; }
L_001197E4:
    c.f[3] = ld32((c.r[16].w[0] + 136u));
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 28u), c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119818u);  if (depth < kMaxDepth) unit_0006(c, 103u, depth + 1u); else { c.pc = 0x00118C58u; return; } if (c.pc != 0x00119818u) [[unlikely]] return; }
L_00119818:
    set32(c.r[16], c.r[2].w[0] + 16816u);
    set32(c.r[2], ld32((c.r[16].w[0] + 320u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00119910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119838u);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x00119838u) [[unlikely]] return; }
L_00119838:
    c.r[5].d[0] = c.r[2].d[0] & 31ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 2;
L_00119840:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    set32(c.r[3], c.r[3].w[0] - 20944u);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 20912u);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001198C4; } }
    goto L_00119884;
L_00119880:
    c.budget -= 1;
L_00119884:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x85E00000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = c.r[6].d[0] | 15866ull;
    set32(c.r[7], 0u - 1u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198A4u);  if (depth < kMaxDepth) unit_0006(c, 295u, depth + 1u); else { c.pc = 0x0011A688u; return; } if (c.pc != 0x001198A4u) [[unlikely]] return; }
L_001198A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 320u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119900; } }
L_001198C4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x85E00000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x3E760000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = c.r[6].d[0] | 15866ull;
    c.r[7].d[0] = c.r[7].d[0] | 2753ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001198E8u);  if (depth < kMaxDepth) unit_0006(c, 295u, depth + 1u); else { c.pc = 0x0011A688u; return; } if (c.pc != 0x001198E8u) [[unlikely]] return; }
L_001198E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 320u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 6;
L_00119900:
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 320u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 320u), c.r[3].w[0]);
    c.budget -= 4;
L_00119910:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 40u);
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119938u);  if (depth < kMaxDepth) unit_0072(c, 139u, depth + 1u); else { c.pc = 0x002C97E8u; return; } if (c.pc != 0x00119938u) [[unlikely]] return; }
L_00119938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119940u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00119940u) [[unlikely]] return; }
L_00119940:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00119B90; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119958u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00119958u) [[unlikely]] return; }
L_00119958:
    set32(c.r[3], 0u + 100u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00119968u);  goto L_0011996C; }
L_0011996C:
    set32(c.r[4], ld32((c.r[4].w[0] - 20968u)));
    c.r[5].d[0] = c.hi.d[0];
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001199D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119988u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x00119988u) [[unlikely]] return; }
L_00119988:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119998u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00119998u) [[unlikely]] return; }
L_00119998:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199A8u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001199A8u) [[unlikely]] return; }
L_001199A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199C0u);  if (depth < kMaxDepth) unit_002D(c, 401u, depth + 1u); else { c.pc = 0x001B7BA0u; return; } if (c.pc != 0x001199C0u) [[unlikely]] return; }
L_001199C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119B00; } }
L_001199C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199D0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001199D0u) [[unlikely]] return; }
L_001199D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20964u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119A38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001199F0u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001199F0u) [[unlikely]] return; }
L_001199F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A00u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00119A00u) [[unlikely]] return; }
L_00119A00:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A10u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00119A10u) [[unlikely]] return; }
L_00119A10:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A28u);  if (depth < kMaxDepth) unit_002D(c, 389u, depth + 1u); else { c.pc = 0x001B7958u; return; } if (c.pc != 0x00119A28u) [[unlikely]] return; }
L_00119A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119B00; } }
L_00119A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A38u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00119A38u) [[unlikely]] return; }
L_00119A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20960u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A58u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x00119A58u) [[unlikely]] return; }
L_00119A58:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A68u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00119A68u) [[unlikely]] return; }
L_00119A68:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A78u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00119A78u) [[unlikely]] return; }
L_00119A78:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 50u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119A94u);  if (depth < kMaxDepth) unit_002D(c, 346u, depth + 1u); else { c.pc = 0x001B71F8u; return; } if (c.pc != 0x00119A94u) [[unlikely]] return; }
L_00119A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119B00; } }
L_00119A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119AA4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00119AA4u) [[unlikely]] return; }
L_00119AA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 20956u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119B90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119AC4u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x00119AC4u) [[unlikely]] return; }
L_00119AC4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119AD4u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00119AD4u) [[unlikely]] return; }
L_00119AD4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119AE4u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00119AE4u) [[unlikely]] return; }
L_00119AE4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 100u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B00u);  if (depth < kMaxDepth) unit_002D(c, 346u, depth + 1u); else { c.pc = 0x001B71F8u; return; } if (c.pc != 0x00119B00u) [[unlikely]] return; }
L_00119B00:
    set32(c.r[5], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[2].w[0] + 288u);
    set32(c.r[3], ld32((c.r[5].w[0] + 80u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
L_00119B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119B90; } }
L_00119B30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B38u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00119B38u) [[unlikely]] return; }
L_00119B38:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B44u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00119B44u) [[unlikely]] return; }
L_00119B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001199C8u | kUnwind; return; } goto L_001199C8; } }
L_00119B4C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B58u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00119B58u) [[unlikely]] return; }
L_00119B58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119A30u | kUnwind; return; } goto L_00119A30; } }
L_00119B60:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B6Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00119B6Cu) [[unlikely]] return; }
L_00119B6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119A9Cu | kUnwind; return; } goto L_00119A9C; } }
L_00119B74:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B80u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00119B80u) [[unlikely]] return; }
L_00119B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119B30u | kUnwind; return; } goto L_00119B30; } }
L_00119B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119B90u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00119B90u) [[unlikely]] return; }
L_00119B90:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119BA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00119C04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00119C04; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 29472u);
    set32(c.r[2], c.r[2].w[0] - 9792u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 29476u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119BECu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00119BECu) [[unlikely]] return; }
L_00119BEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 9952u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119C04u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x00119C04u) [[unlikely]] return; }
L_00119C04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119C18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 9944u);
    set32(c.r[3], 0u + 99u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
L_00119C40:
    st32((c.r[2].w[0] + 76u), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[2], c.r[2].w[0] + 88u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119C40u | kUnwind; return; } goto L_00119C40; } }
    st32((c.r[5].w[0] + 8800u), 0u);
    set32(c.r[2], 0u + 999u);
    set32(c.r[5], c.r[4].w[0] + 8808u);
    set32(c.r[6], c.r[4].w[0] + 16816u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
L_00119C70:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119C70u | kUnwind; return; } goto L_00119C70; } }
    st32((c.r[5].w[0] + 8000u), 0u);
    set32(c.r[2], 0u + 9u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
L_00119C98:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119C98u | kUnwind; return; } goto L_00119C98; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0] + 320u), 0u);
    st32((c.r[4].w[0] + 17152u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119CC8:
    st32((c.r[4].w[0] + 16808u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119CD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119CE8u);  if (depth < kMaxDepth) unit_0006(c, 103u, depth + 1u); else { c.pc = 0x00118C58u; return; } if (c.pc != 0x00119CE8u) [[unlikely]] return; }
L_00119CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119CF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 9832u);
    set32(c.r[5], c.r[5].w[0] - 29496u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 20u), c.r[4].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119D38:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 9832u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[3].w[0] - 29496u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119D90u);  if (depth < kMaxDepth) unit_0006(c, 306u, depth + 1u); else { c.pc = 0x0011A8E0u; return; } if (c.pc != 0x00119D90u) [[unlikely]] return; }
L_00119D90:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_00119DEC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119DEC; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00119DD8; } }
    c.budget -= 1;
L_00119DC0:
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119DC0u | kUnwind; return; } goto L_00119DC0; } }
L_00119DD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119DEC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 2;
L_00119DEC:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119E04; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E04u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x00119E04u) [[unlikely]] return; }
L_00119E04:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119E28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u - 1u);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    st32((c.r[16].w[0] + 76u), 0u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 80u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[7].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119E78u);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x00119E78u) [[unlikely]] return; }
L_00119E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00119E94; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_00119E94; } }
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_00119E94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119EA0u);  if (depth < kMaxDepth) unit_0006(c, 244u, depth + 1u); else { c.pc = 0x00119FE0u; return; } if (c.pc != 0x00119EA0u) [[unlikely]] return; }
L_00119EA0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119EB0u);  if (depth < kMaxDepth) unit_0006(c, 234u, depth + 1u); else { c.pc = 0x00119ED0u; return; } if (c.pc != 0x00119EB0u) [[unlikely]] return; }
L_00119EB0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119ED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00119F54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119F00u);  if (depth < kMaxDepth) unit_008E(c, 110u, depth + 1u); else { c.pc = 0x00339820u; return; } if (c.pc != 0x00119F00u) [[unlikely]] return; }
L_00119F00:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00119F54; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119F18u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x00119F18u) [[unlikely]] return; }
L_00119F18:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00119F3C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119F30u);  if (depth < kMaxDepth) unit_008F(c, 40u, depth + 1u); else { c.pc = 0x0033C768u; return; } if (c.pc != 0x00119F30u) [[unlikely]] return; }
L_00119F30:
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00119F54; } }
L_00119F3C:
    set32(c.r[4], c.r[2].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00119F54u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x00119F54u) [[unlikely]] return; }
L_00119F54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119F70:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 17136u), 0u);
    st32((c.r[4].w[0] + 17152u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 8804u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119F88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119F90:
    set32(c.r[4], c.r[4].w[0] + 20u);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00119FD4; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00119FB0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00119FC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119FC8:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00119FB0u | kUnwind; return; } goto L_00119FB0; } }
L_00119FD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00119FE0:
    set32(c.r[2], c.r[4].w[0] + 20u);
    set32(c.r[3], 0u + 14u);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 76u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0011A01C; } }
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0011A000:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A000u | kUnwind; return; } goto L_0011A000; } }
L_0011A01C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A028:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
L_0011A040:
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_0011A094; } }
    set32(c.r[16], c.r[4].w[0] + 4u);
    set32(c.r[17], 0u + 88u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8800u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A070u);  if (depth < kMaxDepth) unit_0006(c, 310u, depth + 1u); else { c.pc = 0x0011A920u; return; } if (c.pc != 0x0011A070u) [[unlikely]] return; }
L_0011A070:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 4;
L_0011A080:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0011A094; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A094u);  if (depth < kMaxDepth) unit_0006(c, 107u, depth + 1u); else { c.pc = 0x00118D40u; return; } if (c.pc != 0x0011A094u) [[unlikely]] return; }
L_0011A094:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A0B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_0011A120; } }
    set32(c.r[16], c.r[4].w[0] + 4u);
    set32(c.r[17], 0u + 88u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8800u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A0F8u);  if (depth < kMaxDepth) unit_0006(c, 310u, depth + 1u); else { c.pc = 0x0011A920u; return; } if (c.pc != 0x0011A0F8u) [[unlikely]] return; }
L_0011A0F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0011A120; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 4;
L_0011A120:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A140:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 9;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_0011A1AC; } }
    set32(c.r[16], c.r[4].w[0] + 4u);
    set32(c.r[17], 0u + 88u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8800u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A188u);  if (depth < kMaxDepth) unit_0006(c, 310u, depth + 1u); else { c.pc = 0x0011A920u; return; } if (c.pc != 0x0011A188u) [[unlikely]] return; }
L_0011A188:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0011A1AC; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    c.budget -= 3;
L_0011A1AC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A1C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A1F0u);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x0011A1F0u) [[unlikely]] return; }
L_0011A1F0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011A220; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A208u);  if (depth < kMaxDepth) unit_0093(c, 342u, depth + 1u); else { c.pc = 0x0034F420u; return; } if (c.pc != 0x0011A208u) [[unlikely]] return; }
L_0011A208:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A214u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0011A214u) [[unlikely]] return; }
L_0011A214:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A220u);  if (depth < kMaxDepth) unit_007B(c, 76u, depth + 1u); else { c.pc = 0x002ECDE0u; return; } if (c.pc != 0x0011A220u) [[unlikely]] return; }
L_0011A220:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A238:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 88u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A274u);  if (depth < kMaxDepth) unit_0006(c, 314u, depth + 1u); else { c.pc = 0x0011A960u; return; } if (c.pc != 0x0011A274u) [[unlikely]] return; }
L_0011A274:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0011A2D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A2A0u);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x0011A2A0u) [[unlikely]] return; }
L_0011A2A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011A2D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A2B8u);  if (depth < kMaxDepth) unit_0093(c, 342u, depth + 1u); else { c.pc = 0x0034F420u; return; } if (c.pc != 0x0011A2B8u) [[unlikely]] return; }
L_0011A2B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A2C4u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0011A2C4u) [[unlikely]] return; }
L_0011A2C4:
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A2D0u);  if (depth < kMaxDepth) unit_007B(c, 76u, depth + 1u); else { c.pc = 0x002ECDE0u; return; } if (c.pc != 0x0011A2D0u) [[unlikely]] return; }
L_0011A2D0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A2F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 88u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 4u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 14;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0011A390; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], 0u + 88u);
    c.budget -= 4;
L_0011A338:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], c.r[20].w[0] + 26848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A348u);  if (depth < kMaxDepth) unit_0093(c, 239u, depth + 1u); else { c.pc = 0x0034E790u; return; } if (c.pc != 0x0011A348u) [[unlikely]] return; }
L_0011A348:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011A378; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A360u);  if (depth < kMaxDepth) unit_0093(c, 342u, depth + 1u); else { c.pc = 0x0034F420u; return; } if (c.pc != 0x0011A360u) [[unlikely]] return; }
L_0011A360:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A36Cu);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0011A36Cu) [[unlikely]] return; }
L_0011A36C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A378u);  if (depth < kMaxDepth) unit_007B(c, 76u, depth + 1u); else { c.pc = 0x002ECDE0u; return; } if (c.pc != 0x0011A378u) [[unlikely]] return; }
L_0011A378:
    set32(c.r[2], ld32((c.r[18].w[0] + 8800u)));
    set32(c.r[17], c.r[17].w[0] + 88u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A338u | kUnwind; return; } goto L_0011A338; } }
L_0011A390:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A3B8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 4u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 88u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A3FCu);  if (depth < kMaxDepth) unit_0006(c, 314u, depth + 1u); else { c.pc = 0x0011A960u; return; } if (c.pc != 0x0011A3FCu) [[unlikely]] return; }
L_0011A3FC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0011A498; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A420u);  if (depth < kMaxDepth) unit_007B(c, 76u, depth + 1u); else { c.pc = 0x002ECDE0u; return; } if (c.pc != 0x0011A420u) [[unlikely]] return; }
L_0011A420:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 128u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A43Cu);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x0011A43Cu) [[unlikely]] return; }
L_0011A43C:
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A454u);  if (depth < kMaxDepth) unit_0049(c, 109u, depth + 1u); else { c.pc = 0x00225818u; return; } if (c.pc != 0x0011A454u) [[unlikely]] return; }
L_0011A454:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A464u);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x0011A464u) [[unlikely]] return; }
L_0011A464:
    set32(c.r[4], ld32((c.r[18].w[0] + 16u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A474u);  if (depth < kMaxDepth) unit_008F(c, 29u, depth + 1u); else { c.pc = 0x0033C578u; return; } if (c.pc != 0x0011A474u) [[unlikely]] return; }
L_0011A474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A47Cu);  if (depth < kMaxDepth) unit_0006(c, 103u, depth + 1u); else { c.pc = 0x00118C58u; return; } if (c.pc != 0x0011A47Cu) [[unlikely]] return; }
L_0011A47C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A498u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011A498u) [[unlikely]] return; }
L_0011A498:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A4B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A4D8u);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x0011A4D8u) [[unlikely]] return; }
L_0011A4D8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A500:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011A528; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A528:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A538:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A548:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A568u);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x0011A568u) [[unlikely]] return; }
L_0011A568:
    set32(c.r[16], c.r[16].w[0] + 8808u);
    st32((c.r[29].w[0] + 4u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 8000u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A590u);  if (depth < kMaxDepth) unit_0006(c, 317u, depth + 1u); else { c.pc = 0x0011A9A0u; return; } if (c.pc != 0x0011A590u) [[unlikely]] return; }
L_0011A590:
    set32(c.r[3], ld32((c.r[16].w[0] + 8000u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[16].d[0];
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A5C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], 0u + 88u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A5F8u);  if (depth < kMaxDepth) unit_0006(c, 314u, depth + 1u); else { c.pc = 0x0011A960u; return; } if (c.pc != 0x0011A5F8u) [[unlikely]] return; }
L_0011A5F8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8800u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0011A61C; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A61Cu);  if (depth < kMaxDepth) unit_0006(c, 107u, depth + 1u); else { c.pc = 0x00118D40u; return; } if (c.pc != 0x0011A61Cu) [[unlikely]] return; }
L_0011A61C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A638:
    set32(c.r[3], ld32((c.r[5].w[0] + 11524u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011A654; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A654:
    set32(c.r[4], ld32((c.r[4].w[0] + 8804u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0011A678; } }
L_0011A660:
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A660u | kUnwind; return; } goto L_0011A660; } }
L_0011A678:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A688:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 15u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[17].w[0] + 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A6D0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0011A6D0u) [[unlikely]] return; }
L_0011A6D0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0011A71C; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A714u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0011A714u) [[unlikely]] return; }
L_0011A714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A758; } }
L_0011A71C:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A758u);  if (depth < kMaxDepth) unit_0086(c, 209u, depth + 1u); else { c.pc = 0x0031A728u; return; } if (c.pc != 0x0011A758u) [[unlikely]] return; }
L_0011A758:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A780:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[6], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0011A844; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[7].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0011A840; } }
    set32(c.r[5], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0011A800; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    set32(c.r[6], c.r[7].w[0] + 16u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A7F8u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0011A7F8u) [[unlikely]] return; }
L_0011A7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A834; } }
L_0011A800:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[7], c.r[7].w[0] + 16u);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A834u);  if (depth < kMaxDepth) unit_0086(c, 209u, depth + 1u); else { c.pc = 0x0031A728u; return; } if (c.pc != 0x0011A834u) [[unlikely]] return; }
L_0011A834:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A844; } }
L_0011A840:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011A844:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A858:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011A870u);  if (depth < kMaxDepth) unit_0006(c, 103u, depth + 1u); else { c.pc = 0x00118C58u; return; } if (c.pc != 0x0011A870u) [[unlikely]] return; }
L_0011A870:
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 8800u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011A8C8; } }
    goto L_0011A884;
L_0011A880:
    c.budget -= 1;
L_0011A884:
    set32(c.r[7], 0u + 1u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_0011A890:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011A8B0; } }
    st32((c.r[4].w[0] + 84u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A8CC; } }
L_0011A8B0:
    set32(c.r[2], ld32((c.r[6].w[0] + 8800u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 88u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A890u | kUnwind; return; } goto L_0011A890; } }
L_0011A8C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011A8CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A8E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0011A914; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0011A8F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0011A908; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0011A900:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A908:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A8F0u | kUnwind; return; } goto L_0011A8F0; } }
L_0011A914:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A920:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0011A954; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0011A930:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0011A948; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_0011A940:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A948:
    set32(c.r[4], c.r[4].w[0] + 88u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A930u | kUnwind; return; } goto L_0011A930; } }
L_0011A954:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A960:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0011A994; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0011A970:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0011A988; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A988:
    set32(c.r[4], c.r[4].w[0] + 88u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A970u | kUnwind; return; } goto L_0011A970; } }
L_0011A994:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A9A0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0011A9F8; } }
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0011A9B0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_0011A9C8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011A9D8; } }
L_0011A9C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0011A9D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011A9EC; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011A9EC:
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011A9B0u | kUnwind; return; } goto L_0011A9B0; } }
L_0011A9F8:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011AA08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AA20u);  if (depth < kMaxDepth) unit_0006(c, 214u, depth + 1u); else { c.pc = 0x00119BA8u; return; } if (c.pc != 0x0011AA20u) [[unlikely]] return; }
L_0011AA20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011AA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[16].w[0] + 20u);
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011AAC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], c.r[2].w[0] - 29424u);
    set32(c.r[5], ld32((c.r[17].w[0] + 3200u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AA74u);  if (depth < kMaxDepth) unit_0006(c, 409u, depth + 1u); else { c.pc = 0x0011B530u; return; } if (c.pc != 0x0011AA74u) [[unlikely]] return; }
L_0011AA74:
    set32(c.r[3], ld32((c.r[17].w[0] + 3200u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0011AAB8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 400ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011AAB8; } }
    ldl(c.r[2], (c.r[16].w[0] + 27u));
    ldr(c.r[2], (c.r[16].w[0] + 20u));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0] + 3200u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 3200u), c.r[2].w[0]);
    c.budget -= 7;
L_0011AAB8:
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AAC4u);  if (depth < kMaxDepth) unit_0006(c, 402u, depth + 1u); else { c.pc = 0x0011B448u; return; } if (c.pc != 0x0011AAC4u) [[unlikely]] return; }
L_0011AAC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0011AAE4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0011AAE4; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0011AAE4:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011AB08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011ACC4; } }
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AB48u);  if (depth < kMaxDepth) unit_0006(c, 390u, depth + 1u); else { c.pc = 0x0011B2C8u; return; } if (c.pc != 0x0011AB48u) [[unlikely]] return; }
L_0011AB48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011AB64; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AB5Cu);  if (depth < kMaxDepth) unit_0006(c, 322u, depth + 1u); else { c.pc = 0x0011AA30u; return; } if (c.pc != 0x0011AB5Cu) [[unlikely]] return; }
L_0011AB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011ACC4; } }
L_0011AB64:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011ACC4; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011AC80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AB8Cu);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0011AB8Cu) [[unlikely]] return; }
L_0011AB8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011ABA0; } }
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ABA0u);  if (depth < kMaxDepth) unit_0006(c, 403u, depth + 1u); else { c.pc = 0x0011B460u; return; } if (c.pc != 0x0011ABA0u) [[unlikely]] return; }
L_0011ABA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0011ACC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[2].w[0] + 12320u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ABC4u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002B2E10u; return; } if (c.pc != 0x0011ABC4u) [[unlikely]] return; }
L_0011ABC4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ABE0u);  if (depth < kMaxDepth) unit_0006(c, 342u, depth + 1u); else { c.pc = 0x0011ACE8u; return; } if (c.pc != 0x0011ABE0u) [[unlikely]] return; }
L_0011ABE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011ACC4; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ABFCu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0011ABFCu) [[unlikely]] return; }
L_0011ABFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] - 26220u)));
    set32(c.r[16], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] - c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC18u);  if (depth < kMaxDepth) unit_006C(c, 224u, depth + 1u); else { c.pc = 0x002B2708u; return; } if (c.pc != 0x0011AC18u) [[unlikely]] return; }
L_0011AC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC20u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011AC20u) [[unlikely]] return; }
L_0011AC20:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC30u);  if (depth < kMaxDepth) unit_0098(c, 211u, depth + 1u); else { c.pc = 0x00362840u; return; } if (c.pc != 0x0011AC30u) [[unlikely]] return; }
L_0011AC30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC38u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0011AC38u) [[unlikely]] return; }
L_0011AC38:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC44u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0011AC44u) [[unlikely]] return; }
L_0011AC44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011ACC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011AC68u) [[unlikely]] return; }
L_0011AC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011ACC4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 776u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011ACC4; } }
L_0011AC80:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011ACC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AC94u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0011AC94u) [[unlikely]] return; }
L_0011AC94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ACA0u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0011ACA0u) [[unlikely]] return; }
L_0011ACA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011ACC4; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 748u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011ACC4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ACC4u);  if (depth < kMaxDepth) unit_0006(c, 380u, depth + 1u); else { c.pc = 0x0011B1D0u; return; } if (c.pc != 0x0011ACC4u) [[unlikely]] return; }
L_0011ACC4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011ACE8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 14676u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0011AD38; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0011AD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AD30u);  if (depth < kMaxDepth) unit_0006(c, 405u, depth + 1u); else { c.pc = 0x0011B4A8u; return; } if (c.pc != 0x0011AD30u) [[unlikely]] return; }
L_0011AD30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011AD50; } }
L_0011AD38:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AD48u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0011AD48u) [[unlikely]] return; }
L_0011AD48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011AD5C; } }
L_0011AD50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011AE48; } }
L_0011AD5C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AD50u | kUnwind; return; } goto L_0011AD50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AD74u);  if (depth < kMaxDepth) unit_0074(c, 99u, depth + 1u); else { c.pc = 0x002D1240u; return; } if (c.pc != 0x0011AD74u) [[unlikely]] return; }
L_0011AD74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AD50u | kUnwind; return; } goto L_0011AD50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[21], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[2].w[0] + 10768u);
    c.r[18].d[0] = 0ull + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 9;
L_0011ADA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011AE34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ADBCu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0011ADBCu) [[unlikely]] return; }
L_0011ADBC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 17200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ADCCu);  if (depth < kMaxDepth) unit_0071(c, 310u, depth + 1u); else { c.pc = 0x002C7418u; return; } if (c.pc != 0x0011ADCCu) [[unlikely]] return; }
L_0011ADCC:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011AE34; } }
    set32(c.r[2], c.r[20].w[0] + 540u);
    set32(c.r[3], 0u + 3u);
    c.budget -= 2;
L_0011ADE0:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 40u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011ADE0u | kUnwind; return; } goto L_0011ADE0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AE08u);  if (depth < kMaxDepth) unit_001B(c, 255u, depth + 1u); else { c.pc = 0x0016F498u; return; } if (c.pc != 0x0011AE08u) [[unlikely]] return; }
L_0011AE08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AE14u);  if (depth < kMaxDepth) unit_0006(c, 388u, depth + 1u); else { c.pc = 0x0011B2A8u; return; } if (c.pc != 0x0011AE14u) [[unlikely]] return; }
L_0011AE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AE1Cu);  if (depth < kMaxDepth) unit_001F(c, 306u, depth + 1u); else { c.pc = 0x0017FC00u; return; } if (c.pc != 0x0011AE1Cu) [[unlikely]] return; }
L_0011AE1C:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AE2Cu);  if (depth < kMaxDepth) unit_0036(c, 477u, depth + 1u); else { c.pc = 0x001DB898u; return; } if (c.pc != 0x0011AE2Cu) [[unlikely]] return; }
L_0011AE2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011AE44; } }
L_0011AE34:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011ADA0u | kUnwind; return; } goto L_0011ADA0; } }
L_0011AE44:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0011AE48:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011AE70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0011AF1C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011AF1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], 0u + 399u);
    set32(c.r[19], c.r[2].w[0] - 29424u);
    set32(c.r[18], 0u - 1u);
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
L_0011AEB0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AEC0u);  if (depth < kMaxDepth) unit_0006(c, 402u, depth + 1u); else { c.pc = 0x0011B448u; return; } if (c.pc != 0x0011AEC0u) [[unlikely]] return; }
L_0011AEC0:
    set32(c.r[16], c.r[16].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011AEB0u | kUnwind; return; } goto L_0011AEB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23776u)));
    set32(c.r[16], c.r[16].w[0] - 26216u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[19].w[0] + 3200u), 0u);
    set32(c.r[2], c.r[2].w[0] - 9680u);
    set32(c.r[4], c.r[4].w[0] + 3u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[3].w[0] - 26220u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AF04u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011AF04u) [[unlikely]] return; }
L_0011AF04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 9736u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AF1Cu);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0011AF1Cu) [[unlikely]] return; }
L_0011AF1C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011AF40:
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011AF50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] - 19288u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011AFA8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 29428u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011AFA0; } }
    set32(c.r[4], c.r[16].w[0] - 29456u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011AF98u);  if (depth < kMaxDepth) unit_0006(c, 377u, depth + 1u); else { c.pc = 0x0011B178u; return; } if (c.pc != 0x0011AF98u) [[unlikely]] return; }
L_0011AF98:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 29428u), c.r[2].w[0]);
    c.budget -= 2;
L_0011AFA0:
    set32(c.r[2], c.r[16].w[0] - 29456u);
    st32((c.r[18].w[0] - 19288u), c.r[2].w[0]);
    c.budget -= 2;
L_0011AFA8:
    set32(c.r[2], ld32((c.r[18].w[0] - 19288u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011AFC8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] - 19288u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011B020; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 29428u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011B018; } }
    set32(c.r[4], c.r[16].w[0] - 29456u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B010u);  if (depth < kMaxDepth) unit_0006(c, 377u, depth + 1u); else { c.pc = 0x0011B178u; return; } if (c.pc != 0x0011B010u) [[unlikely]] return; }
L_0011B010:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 29428u), c.r[2].w[0]);
    c.budget -= 2;
L_0011B018:
    set32(c.r[2], c.r[16].w[0] - 29456u);
    st32((c.r[18].w[0] - 19288u), c.r[2].w[0]);
    c.budget -= 2;
L_0011B020:
    set32(c.r[2], ld32((c.r[18].w[0] - 19288u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B040:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B06Cu);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0011B06Cu) [[unlikely]] return; }
L_0011B06C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011B080; } }
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B080u);  if (depth < kMaxDepth) unit_0006(c, 403u, depth + 1u); else { c.pc = 0x0011B460u; return; } if (c.pc != 0x0011B080u) [[unlikely]] return; }
L_0011B080:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0011B158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[2].w[0] + 12320u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B0A4u);  if (depth < kMaxDepth) unit_006C(c, 273u, depth + 1u); else { c.pc = 0x002B2E10u; return; } if (c.pc != 0x0011B0A4u) [[unlikely]] return; }
L_0011B0A4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[17].w[0] + 28u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B0C0u);  if (depth < kMaxDepth) unit_0006(c, 342u, depth + 1u); else { c.pc = 0x0011ACE8u; return; } if (c.pc != 0x0011B0C0u) [[unlikely]] return; }
L_0011B0C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B158; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B0DCu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0011B0DCu) [[unlikely]] return; }
L_0011B0DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] - 26220u)));
    set32(c.r[16], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[16], c.r[16].w[0] - c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B0F8u);  if (depth < kMaxDepth) unit_006C(c, 224u, depth + 1u); else { c.pc = 0x002B2708u; return; } if (c.pc != 0x0011B0F8u) [[unlikely]] return; }
L_0011B0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B100u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011B100u) [[unlikely]] return; }
L_0011B100:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B110u);  if (depth < kMaxDepth) unit_0098(c, 211u, depth + 1u); else { c.pc = 0x00362840u; return; } if (c.pc != 0x0011B110u) [[unlikely]] return; }
L_0011B110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B118u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0011B118u) [[unlikely]] return; }
L_0011B118:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B124u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0011B124u) [[unlikely]] return; }
L_0011B124:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011B158; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B148u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B148u) [[unlikely]] return; }
L_0011B148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B158; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 776u), c.r[2].w[0]);
    c.budget -= 2;
L_0011B158:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B178:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 2;
L_0011B180:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 9720u);
    set32(c.r[3], 0u + 60u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[4], c.r[16].w[0] + 20u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B1B8u);  if (depth < kMaxDepth) unit_0006(c, 402u, depth + 1u); else { c.pc = 0x0011B448u; return; } if (c.pc != 0x0011B1B8u) [[unlikely]] return; }
L_0011B1B8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B1D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B1F0u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0011B1F0u) [[unlikely]] return; }
L_0011B1F0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B1FCu);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0011B1FCu) [[unlikely]] return; }
L_0011B1FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011B288; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B220u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B220u) [[unlikely]] return; }
L_0011B220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B288; } }
    set32(c.r[17], ld32((c.r[16].w[0] + 752u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B240u);  if (depth < kMaxDepth) unit_0006(c, 342u, depth + 1u); else { c.pc = 0x0011ACE8u; return; } if (c.pc != 0x0011B240u) [[unlikely]] return; }
L_0011B240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B288; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 756u)));
    set32(c.r[2], c.r[2].w[0] - 3u);
    set32(c.r[17], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0011B288; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B264u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011B264u) [[unlikely]] return; }
L_0011B264:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B274u);  if (depth < kMaxDepth) unit_0098(c, 211u, depth + 1u); else { c.pc = 0x00362840u; return; } if (c.pc != 0x0011B274u) [[unlikely]] return; }
L_0011B274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B280u);  if (depth < kMaxDepth) unit_0013(c, 334u, depth + 1u); else { c.pc = 0x0014F018u; return; } if (c.pc != 0x0011B280u) [[unlikely]] return; }
L_0011B280:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 776u), c.r[2].w[0]);
    c.budget -= 2;
L_0011B288:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B2A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B2B8u);  if (depth < kMaxDepth) unit_0091(c, 146u, depth + 1u); else { c.pc = 0x00345880u; return; } if (c.pc != 0x0011B2B8u) [[unlikely]] return; }
L_0011B2B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B2C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B2F0u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0011B2F0u) [[unlikely]] return; }
L_0011B2F0:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B2FCu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0011B2FCu) [[unlikely]] return; }
L_0011B2FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B308u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0011B308u) [[unlikely]] return; }
L_0011B308:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0011B330; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B32Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B32Cu) [[unlikely]] return; }
L_0011B32C:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011B330:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011B348; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B354; } }
L_0011B348:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011B358; } }
L_0011B354:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011B358:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B394u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0011B394u) [[unlikely]] return; }
L_0011B394:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B3A0u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0011B3A0u) [[unlikely]] return; }
L_0011B3A0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B3ACu);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0011B3ACu) [[unlikely]] return; }
L_0011B3AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0011B3D4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B3D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B3D0u) [[unlikely]] return; }
L_0011B3D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011B3D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0011B3E4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011B3F0; } }
L_0011B3E4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011B3F4; } }
L_0011B3F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011B3F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B410:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011B438; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B438:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B448:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B460:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011B494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B484u);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x0011B484u) [[unlikely]] return; }
L_0011B484:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12356u)));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
L_0011B494:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B4A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B4C0u);  if (depth < kMaxDepth) unit_0006(c, 402u, depth + 1u); else { c.pc = 0x0011B448u; return; } if (c.pc != 0x0011B4C0u) [[unlikely]] return; }
L_0011B4C0:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011B4E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B4D4u);  if (depth < kMaxDepth) unit_0081(c, 304u, depth + 1u); else { c.pc = 0x00307C30u; return; } if (c.pc != 0x0011B4D4u) [[unlikely]] return; }
L_0011B4D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12356u)));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
L_0011B4E4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 29424u);
    set32(c.r[5], ld32((c.r[16].w[0] + 3200u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B508u);  if (depth < kMaxDepth) unit_0006(c, 409u, depth + 1u); else { c.pc = 0x0011B530u; return; } if (c.pc != 0x0011B508u) [[unlikely]] return; }
L_0011B508:
    set32(c.r[3], ld32((c.r[16].w[0] + 3200u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B530:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0011B588; } }
    set32(c.r[7], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_0011B540:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_0011B558; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011B568; } }
L_0011B558:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
L_0011B568:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B57C; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B57C:
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B540u | kUnwind; return; } goto L_0011B540; } }
L_0011B588:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B598:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B5A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B5B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 19288u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0011B61C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 29428u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011B614; } }
    set32(c.r[4], c.r[16].w[0] - 29456u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B60Cu);  if (depth < kMaxDepth) unit_0006(c, 377u, depth + 1u); else { c.pc = 0x0011B178u; return; } if (c.pc != 0x0011B60Cu) [[unlikely]] return; }
L_0011B60C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 29428u), c.r[2].w[0]);
    c.budget -= 2;
L_0011B614:
    set32(c.r[2], c.r[16].w[0] - 29456u);
    st32((c.r[19].w[0] - 19288u), c.r[2].w[0]);
    c.budget -= 2;
L_0011B61C:
    set32(c.r[3], ld32((c.r[19].w[0] - 19288u)));
    c.r[2].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B648:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B660u);  if (depth < kMaxDepth) unit_0006(c, 355u, depth + 1u); else { c.pc = 0x0011AE70u; return; } if (c.pc != 0x0011B660u) [[unlikely]] return; }
L_0011B660:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B670:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[17], c.r[18].w[0] + 240u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[19], c.r[18].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[22], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[20], 0u + 13u);
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 25;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B6D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B6D4u) [[unlikely]] return; }
L_0011B6D4:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    c.budget -= 5;
L_0011B6E8:
    st32((c.r[17].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011B7A0; } }
    set32(c.r[4], c.r[30].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B708u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0011B708u) [[unlikely]] return; }
L_0011B708:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B7A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B720u);  if (depth < kMaxDepth) unit_0089(c, 196u, depth + 1u); else { c.pc = 0x00326188u; return; } if (c.pc != 0x0011B720u) [[unlikely]] return; }
L_0011B720:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B734u);  if (depth < kMaxDepth) unit_0006(c, 450u, depth + 1u); else { c.pc = 0x0011BA30u; return; } if (c.pc != 0x0011B734u) [[unlikely]] return; }
L_0011B734:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B7A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B74Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0011B74Cu) [[unlikely]] return; }
L_0011B74C:
    set32(c.r[4], c.r[23].w[0] + 24688u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B75Cu);  if (depth < kMaxDepth) unit_0097(c, 183u, depth + 1u); else { c.pc = 0x0035DBE0u; return; } if (c.pc != 0x0011B75Cu) [[unlikely]] return; }
L_0011B75C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B79C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B770u);  if (depth < kMaxDepth) unit_0089(c, 130u, depth + 1u); else { c.pc = 0x00325890u; return; } if (c.pc != 0x0011B770u) [[unlikely]] return; }
L_0011B770:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B784u);  if (depth < kMaxDepth) unit_0008(c, 62u, depth + 1u); else { c.pc = 0x00120BD0u; return; } if (c.pc != 0x0011B784u) [[unlikely]] return; }
L_0011B784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B79C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B79Cu);  if (depth < kMaxDepth) unit_0077(c, 154u, depth + 1u); else { c.pc = 0x002DE3E0u; return; } if (c.pc != 0x0011B79Cu) [[unlikely]] return; }
L_0011B79C:
    st32((c.r[17].w[0]), c.r[22].w[0]);
    c.budget -= 1;
L_0011B7A0:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B6E8u | kUnwind; return; } goto L_0011B6E8; } }
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
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011B7F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BA0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], c.r[2].w[0] - 25952u);
    set32(c.r[3], c.r[3].w[0] - 25880u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B89C; } }
    set32(c.r[2], c.r[3].w[0] + 224u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 2;
L_0011B844:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[5].w[0] + 7u));
    sdr(c.r[6], (c.r[5].w[0]));
    sdl(c.r[7], (c.r[5].w[0] + 15u));
    sdr(c.r[7], (c.r[5].w[0] + 8u));
    sdl(c.r[8], (c.r[5].w[0] + 23u));
    sdr(c.r[8], (c.r[5].w[0] + 16u));
    sdl(c.r[9], (c.r[5].w[0] + 31u));
    c.budget -= 15;
L_0011B880:
    sdr(c.r[9], (c.r[5].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B844u | kUnwind; return; } goto L_0011B844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011B8D4; } }
L_0011B89C:
    set32(c.r[2], c.r[3].w[0] + 224u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.budget -= 2;
L_0011B8A4:
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[6].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[5].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B8A4u | kUnwind; return; } goto L_0011B8A4; } }
L_0011B8D4:
    set32(c.r[4], c.r[4].w[0] + 14016u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B8E4u);  if (depth < kMaxDepth) unit_009A(c, 237u, depth + 1u); else { c.pc = 0x0036B320u; return; } if (c.pc != 0x0011B8E4u) [[unlikely]] return; }
L_0011B8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B8ECu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x0011B8ECu) [[unlikely]] return; }
L_0011B8EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B8FCu);  if (depth < kMaxDepth) unit_002C(c, 481u, depth + 1u); else { c.pc = 0x001B3600u; return; } if (c.pc != 0x0011B8FCu) [[unlikely]] return; }
L_0011B8FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B904u);  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284410u; return; } if (c.pc != 0x0011B904u) [[unlikely]] return; }
    goto L_0011B904;
L_0011B900:
    c.budget -= 1;
L_0011B904:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B920u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B920u) [[unlikely]] return; }
L_0011B920:
    set32(c.r[2], ld32((c.r[20].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[18], c.r[20].w[0] + 16u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    set32(c.r[17], c.r[20].w[0] + 240u);
    set32(c.r[19], 0u + 13u);
    c.budget -= 5;
L_0011B940:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B95C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B95Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0011B95Cu) [[unlikely]] return; }
L_0011B95C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B968u);  if (depth < kMaxDepth) unit_0009(c, 136u, depth + 1u); else { c.pc = 0x001262B8u; return; } if (c.pc != 0x0011B968u) [[unlikely]] return; }
L_0011B968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011B990; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B980u);  if (depth < kMaxDepth) unit_0089(c, 103u, depth + 1u); else { c.pc = 0x003253F0u; return; } if (c.pc != 0x0011B980u) [[unlikely]] return; }
L_0011B980:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B990u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x0011B990u) [[unlikely]] return; }
L_0011B990:
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011B940u | kUnwind; return; } goto L_0011B940; } }
L_0011B9A8:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B9C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B9C0u) [[unlikely]] return; }
L_0011B9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B9C8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0011B9C8u) [[unlikely]] return; }
L_0011B9C8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B9D4u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0011B9D4u) [[unlikely]] return; }
L_0011B9D4:
    set32(c.r[3], ld32((c.r[2].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011B9ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011B9ECu) [[unlikely]] return; }
L_0011B9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BA0C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BA0Cu);  if (depth < kMaxDepth) unit_007D(c, 266u, depth + 1u); else { c.pc = 0x002F7A58u; return; } if (c.pc != 0x0011BA0Cu) [[unlikely]] return; }
L_0011BA0C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011BA30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BA58u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011BA58u) [[unlikely]] return; }
L_0011BA58:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011BA70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011BB60; } }
L_0011BA70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[18], c.r[2].w[0] - 19792u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BA88u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0011BA88u) [[unlikely]] return; }
L_0011BA88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BB0C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011BB60; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BAA4u);  if (depth < kMaxDepth) unit_0009(c, 48u, depth + 1u); else { c.pc = 0x00125548u; return; } if (c.pc != 0x0011BAA4u) [[unlikely]] return; }
L_0011BAA4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011BAD8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12816u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == c.r[17].d[0];  if (t) { goto L_0011BAD8; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0011BB3C; } }
L_0011BAD8:
    set32(c.r[4], c.r[19].w[0] - 19792u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BAE4u);  if (depth < kMaxDepth) unit_0009(c, 48u, depth + 1u); else { c.pc = 0x00125548u; return; } if (c.pc != 0x0011BAE4u) [[unlikely]] return; }
L_0011BAE4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011BB60; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BB28; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { goto L_0011BB3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011BB28; } }
L_0011BB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BB14u);  if (depth < kMaxDepth) unit_0036(c, 330u, depth + 1u); else { c.pc = 0x001DAA58u; return; } if (c.pc != 0x0011BB14u) [[unlikely]] return; }
L_0011BB14:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BB20u);  if (depth < kMaxDepth) unit_0000(c, 164u, depth + 1u); else { c.pc = 0x001018D8u; return; } if (c.pc != 0x0011BB20u) [[unlikely]] return; }
L_0011BB20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BB48; } }
L_0011BB28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BB34u);  if (depth < kMaxDepth) unit_0009(c, 35u, depth + 1u); else { c.pc = 0x00125318u; return; } if (c.pc != 0x0011BB34u) [[unlikely]] return; }
L_0011BB34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BB60; } }
L_0011BB3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011BB64; } }
L_0011BB48:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011BB60; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 13192u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011BB64; } }
L_0011BB60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011BB64:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011BB88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 9504u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BBACu);  if (depth < kMaxDepth) unit_0006(c, 476u, depth + 1u); else { c.pc = 0x0011BEA0u; return; } if (c.pc != 0x0011BBACu) [[unlikely]] return; }
L_0011BBAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011BBC8:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011BBD8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] - 18344u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011BC3C; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 25888u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011BC34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[16].w[0] - 26192u);
    set32(c.r[2], c.r[2].w[0] - 9504u);
    st32((c.r[16].w[0] - 26192u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BC2Cu);  if (depth < kMaxDepth) unit_0006(c, 476u, depth + 1u); else { c.pc = 0x0011BEA0u; return; } if (c.pc != 0x0011BC2Cu) [[unlikely]] return; }
L_0011BC2C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 25888u), c.r[2].w[0]);
    c.budget -= 2;
L_0011BC34:
    set32(c.r[2], c.r[16].w[0] - 26192u);
    st32((c.r[18].w[0] - 18344u), c.r[2].w[0]);
    c.budget -= 2;
L_0011BC3C:
    set32(c.r[2], ld32((c.r[18].w[0] - 18344u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011BC60:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 14016u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BC8Cu);  if (depth < kMaxDepth) unit_009A(c, 237u, depth + 1u); else { c.pc = 0x0036B320u; return; } if (c.pc != 0x0011BC8Cu) [[unlikely]] return; }
L_0011BC8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BC94u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x0011BC94u) [[unlikely]] return; }
L_0011BC94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BCA4u);  if (depth < kMaxDepth) unit_002C(c, 481u, depth + 1u); else { c.pc = 0x001B3600u; return; } if (c.pc != 0x0011BCA4u) [[unlikely]] return; }
L_0011BCA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BCACu);  if (depth < kMaxDepth) unit_0061(c, 24u, depth + 1u); else { c.pc = 0x00284410u; return; } if (c.pc != 0x0011BCACu) [[unlikely]] return; }
L_0011BCAC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BCC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BCC8u) [[unlikely]] return; }
L_0011BCC8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 25880u);
    set32(c.r[3], c.r[3].w[0] - 25952u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BD4C; } }
    set32(c.r[5], c.r[3].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 2;
L_0011BCF4:
    ldl(c.r[7], (c.r[3].w[0] + 7u));
    ldr(c.r[7], (c.r[3].w[0]));
    ldl(c.r[8], (c.r[3].w[0] + 15u));
    ldr(c.r[8], (c.r[3].w[0] + 8u));
    ldl(c.r[9], (c.r[3].w[0] + 23u));
    ldr(c.r[9], (c.r[3].w[0] + 16u));
    ldl(c.r[10], (c.r[3].w[0] + 31u));
    ldr(c.r[10], (c.r[3].w[0] + 24u));
    sdl(c.r[7], (c.r[4].w[0] + 7u));
    sdr(c.r[7], (c.r[4].w[0]));
    sdl(c.r[8], (c.r[4].w[0] + 15u));
    sdr(c.r[8], (c.r[4].w[0] + 8u));
    sdl(c.r[9], (c.r[4].w[0] + 23u));
    sdr(c.r[9], (c.r[4].w[0] + 16u));
    sdl(c.r[10], (c.r[4].w[0] + 31u));
    sdr(c.r[10], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BCF4u | kUnwind; return; } goto L_0011BCF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011BD84; } }
L_0011BD4C:
    set32(c.r[5], c.r[3].w[0] + 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 2;
L_0011BD54:
    c.r[7].d[0] = ld64((c.r[3].w[0]));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[10].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[7].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[9].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[10].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BD54u | kUnwind; return; } goto L_0011BD54; } }
L_0011BD84:
    set32(c.r[3], c.r[6].w[0] - 25952u);
    set32(c.r[4], c.r[2].w[0] - 18336u);
    c.r[2].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BDF8; } }
    set32(c.r[2], c.r[4].w[0] + 224u);
    c.budget -= 1;
L_0011BDA0:
    ldl(c.r[5], (c.r[4].w[0] + 7u));
    ldr(c.r[5], (c.r[4].w[0]));
    ldl(c.r[6], (c.r[4].w[0] + 15u));
    ldr(c.r[6], (c.r[4].w[0] + 8u));
    ldl(c.r[7], (c.r[4].w[0] + 23u));
    ldr(c.r[7], (c.r[4].w[0] + 16u));
    ldl(c.r[8], (c.r[4].w[0] + 31u));
    ldr(c.r[8], (c.r[4].w[0] + 24u));
    sdl(c.r[5], (c.r[3].w[0] + 7u));
    sdr(c.r[5], (c.r[3].w[0]));
    sdl(c.r[6], (c.r[3].w[0] + 15u));
    sdr(c.r[6], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[3].w[0] + 23u));
    sdr(c.r[7], (c.r[3].w[0] + 16u));
    sdl(c.r[8], (c.r[3].w[0] + 31u));
    sdr(c.r[8], (c.r[3].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BDA0u | kUnwind; return; } goto L_0011BDA0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011BE2C; } }
L_0011BDF8:
    set32(c.r[2], c.r[4].w[0] + 224u);
    c.budget -= 1;
L_0011BDFC:
    c.r[9].d[0] = ld64((c.r[4].w[0]));
    c.r[10].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[5].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[6].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[9].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[10].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[6].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011BDFCu | kUnwind; return; } goto L_0011BDFC; } }
L_0011BE2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011BE40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE60u);  if (depth < kMaxDepth) unit_0006(c, 477u, depth + 1u); else { c.pc = 0x0011BEB8u; return; } if (c.pc != 0x0011BE60u) [[unlikely]] return; }
L_0011BE60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BE84; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BE84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011BE84u) [[unlikely]] return; }
L_0011BE84:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011BEA0:
    st32((c.r[4].w[0] + 12u), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011BEB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], c.r[2].w[0] - 19792u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BED8u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0011BED8u) [[unlikely]] return; }
L_0011BED8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BEFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BEECu);  if (depth < kMaxDepth) unit_0009(c, 48u, depth + 1u); else { c.pc = 0x00125548u; return; } if (c.pc != 0x0011BEECu) [[unlikely]] return; }
L_0011BEEC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011BF2C; } }
L_0011BEFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF04u);  if (depth < kMaxDepth) unit_0036(c, 330u, depth + 1u); else { c.pc = 0x001DAA58u; return; } if (c.pc != 0x0011BF04u) [[unlikely]] return; }
L_0011BF04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF10u);  if (depth < kMaxDepth) unit_0000(c, 164u, depth + 1u); else { c.pc = 0x001018D8u; return; } if (c.pc != 0x0011BF10u) [[unlikely]] return; }
L_0011BF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011BF2C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 14320u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011BF30; } }
L_0011BF2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0011BF30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011BF48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF60u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011BF60u) [[unlikely]] return; }
L_0011BF60:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011BFD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF7Cu);  if (depth < kMaxDepth) unit_0009(c, 51u, depth + 1u); else { c.pc = 0x001255E0u; return; } if (c.pc != 0x0011BF7Cu) [[unlikely]] return; }
L_0011BF7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BFD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BF94u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0011BF94u) [[unlikely]] return; }
L_0011BF94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BFD8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], 0u + 13248u);
    set32(c.r[2], ld32((c.r[3].w[0] - 8196u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFC0u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x0011BFC0u) [[unlikely]] return; }
L_0011BFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011BFD8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFD8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0011BFD8u) [[unlikely]] return; }
L_0011BFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFE0u);  if (depth < kMaxDepth) unit_0036(c, 330u, depth + 1u); else { c.pc = 0x001DAA58u; return; } if (c.pc != 0x0011BFE0u) [[unlikely]] return; }
L_0011BFE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011BFECu);  if (depth < kMaxDepth) unit_0000(c, 164u, depth + 1u); else { c.pc = 0x001018D8u; return; } if (c.pc != 0x0011BFECu) [[unlikely]] return; }
L_0011BFEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0007(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0007(c, 5u, depth); } }
    [[clang::musttail]] return unit_0007(c, 1u, depth);
}

}
