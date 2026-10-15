#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009B[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0,
    31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65,
    0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0,
    0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0,
    0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0,
    157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0,
    202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0,
    218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0,
    0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0,
    0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0,
    0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 306, 0,
    0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0,
    0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0,
    0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0,
    0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0,
    0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0,
    472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489,
    0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0,
};

void unit_009B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0036C000;
    case 2u: goto L_0036C008;
    case 3u: goto L_0036C018;
    case 4u: goto L_0036C020;
    case 5u: goto L_0036C030;
    case 6u: goto L_0036C038;
    case 7u: goto L_0036C048;
    case 8u: goto L_0036C050;
    case 9u: goto L_0036C058;
    case 10u: goto L_0036C070;
    case 11u: goto L_0036C0A0;
    case 12u: goto L_0036C0C8;
    case 13u: goto L_0036C0DC;
    case 14u: goto L_0036C0F4;
    case 15u: goto L_0036C108;
    case 16u: goto L_0036C114;
    case 17u: goto L_0036C120;
    case 18u: goto L_0036C12C;
    case 19u: goto L_0036C1B4;
    case 20u: goto L_0036C1D8;
    case 21u: goto L_0036C1FC;
    case 22u: goto L_0036C274;
    case 23u: goto L_0036C2EC;
    case 24u: goto L_0036C310;
    case 25u: goto L_0036C324;
    case 26u: goto L_0036C378;
    case 27u: goto L_0036C3B0;
    case 28u: goto L_0036C3D0;
    case 29u: goto L_0036C3E0;
    case 30u: goto L_0036C3F0;
    case 31u: goto L_0036C400;
    case 32u: goto L_0036C410;
    case 33u: goto L_0036C420;
    case 34u: goto L_0036C430;
    case 35u: goto L_0036C440;
    case 36u: goto L_0036C450;
    case 37u: goto L_0036C460;
    case 38u: goto L_0036C470;
    case 39u: goto L_0036C480;
    case 40u: goto L_0036C490;
    case 41u: goto L_0036C4A0;
    case 42u: goto L_0036C4B0;
    case 43u: goto L_0036C4C0;
    case 44u: goto L_0036C4D0;
    case 45u: goto L_0036C4E0;
    case 46u: goto L_0036C4F4;
    case 47u: goto L_0036C514;
    case 48u: goto L_0036C52C;
    case 49u: goto L_0036C534;
    case 50u: goto L_0036C53C;
    case 51u: goto L_0036C54C;
    case 52u: goto L_0036C554;
    case 53u: goto L_0036C564;
    case 54u: goto L_0036C5DC;
    case 55u: goto L_0036C5EC;
    case 56u: goto L_0036C60C;
    case 57u: goto L_0036C61C;
    case 58u: goto L_0036C624;
    case 59u: goto L_0036C62C;
    case 60u: goto L_0036C63C;
    case 61u: goto L_0036C644;
    case 62u: goto L_0036C654;
    case 63u: goto L_0036C6EC;
    case 64u: goto L_0036C6F4;
    case 65u: goto L_0036C6FC;
    case 66u: goto L_0036C70C;
    case 67u: goto L_0036C714;
    case 68u: goto L_0036C724;
    case 69u: goto L_0036C72C;
    case 70u: goto L_0036C734;
    case 71u: goto L_0036C760;
    case 72u: goto L_0036C768;
    case 73u: goto L_0036C78C;
    case 74u: goto L_0036C7A0;
    case 75u: goto L_0036C7C0;
    case 76u: goto L_0036C7D8;
    case 77u: goto L_0036C7F0;
    case 78u: goto L_0036C808;
    case 79u: goto L_0036C828;
    case 80u: goto L_0036C840;
    case 81u: goto L_0036C850;
    case 82u: goto L_0036C860;
    case 83u: goto L_0036C874;
    case 84u: goto L_0036C888;
    case 85u: goto L_0036C89C;
    case 86u: goto L_0036C8B0;
    case 87u: goto L_0036C8C4;
    case 88u: goto L_0036C8D8;
    case 89u: goto L_0036C908;
    case 90u: goto L_0036C918;
    case 91u: goto L_0036C920;
    case 92u: goto L_0036C928;
    case 93u: goto L_0036C938;
    case 94u: goto L_0036C940;
    case 95u: goto L_0036C950;
    case 96u: goto L_0036C970;
    case 97u: goto L_0036C98C;
    case 98u: goto L_0036C9A0;
    case 99u: goto L_0036C9BC;
    case 100u: goto L_0036C9D0;
    case 101u: goto L_0036C9EC;
    case 102u: goto L_0036CA00;
    case 103u: goto L_0036CA30;
    case 104u: goto L_0036CA40;
    case 105u: goto L_0036CA48;
    case 106u: goto L_0036CA50;
    case 107u: goto L_0036CA60;
    case 108u: goto L_0036CA68;
    case 109u: goto L_0036CA78;
    case 110u: goto L_0036CA98;
    case 111u: goto L_0036CAA8;
    case 112u: goto L_0036CAB8;
    case 113u: goto L_0036CAC8;
    case 114u: goto L_0036CAD8;
    case 115u: goto L_0036CAE8;
    case 116u: goto L_0036CAF8;
    case 117u: goto L_0036CB08;
    case 118u: goto L_0036CB18;
    case 119u: goto L_0036CB28;
    case 120u: goto L_0036CB38;
    case 121u: goto L_0036CB48;
    case 122u: goto L_0036CB58;
    case 123u: goto L_0036CB68;
    case 124u: goto L_0036CB78;
    case 125u: goto L_0036CB88;
    case 126u: goto L_0036CB98;
    case 127u: goto L_0036CBA8;
    case 128u: goto L_0036CBB8;
    case 129u: goto L_0036CBC8;
    case 130u: goto L_0036CBD8;
    case 131u: goto L_0036CBEC;
    case 132u: goto L_0036CC00;
    case 133u: goto L_0036CC14;
    case 134u: goto L_0036CC28;
    case 135u: goto L_0036CC3C;
    case 136u: goto L_0036CC50;
    case 137u: goto L_0036CC6C;
    case 138u: goto L_0036CC80;
    case 139u: goto L_0036CC94;
    case 140u: goto L_0036CCA8;
    case 141u: goto L_0036CCC4;
    case 142u: goto L_0036CCD8;
    case 143u: goto L_0036CCFC;
    case 144u: goto L_0036CD08;
    case 145u: goto L_0036CD20;
    case 146u: goto L_0036CD34;
    case 147u: goto L_0036CD48;
    case 148u: goto L_0036CD5C;
    case 149u: goto L_0036CD70;
    case 150u: goto L_0036CD84;
    case 151u: goto L_0036CD98;
    case 152u: goto L_0036CDC8;
    case 153u: goto L_0036CDD8;
    case 154u: goto L_0036CDE0;
    case 155u: goto L_0036CDE8;
    case 156u: goto L_0036CDF8;
    case 157u: goto L_0036CE00;
    case 158u: goto L_0036CE10;
    case 159u: goto L_0036CE30;
    case 160u: goto L_0036CE4C;
    case 161u: goto L_0036CE60;
    case 162u: goto L_0036CE7C;
    case 163u: goto L_0036CE90;
    case 164u: goto L_0036CEAC;
    case 165u: goto L_0036CEC0;
    case 166u: goto L_0036CEDC;
    case 167u: goto L_0036CEF0;
    case 168u: goto L_0036CF04;
    case 169u: goto L_0036CF18;
    case 170u: goto L_0036CF2C;
    case 171u: goto L_0036CF40;
    case 172u: goto L_0036CF54;
    case 173u: goto L_0036CF68;
    case 174u: goto L_0036CFC4;
    case 175u: goto L_0036CFD8;
    case 176u: goto L_0036CFF4;
    case 177u: goto L_0036D008;
    case 178u: goto L_0036D024;
    case 179u: goto L_0036D038;
    case 180u: goto L_0036D054;
    case 181u: goto L_0036D068;
    case 182u: goto L_0036D090;
    case 183u: goto L_0036D0A4;
    case 184u: goto L_0036D0B8;
    case 185u: goto L_0036D0CC;
    case 186u: goto L_0036D0E0;
    case 187u: goto L_0036D0F4;
    case 188u: goto L_0036D108;
    case 189u: goto L_0036D164;
    case 190u: goto L_0036D178;
    case 191u: goto L_0036D194;
    case 192u: goto L_0036D1A8;
    case 193u: goto L_0036D1C4;
    case 194u: goto L_0036D1D8;
    case 195u: goto L_0036D1F4;
    case 196u: goto L_0036D208;
    case 197u: goto L_0036D230;
    case 198u: goto L_0036D240;
    case 199u: goto L_0036D250;
    case 200u: goto L_0036D260;
    case 201u: goto L_0036D270;
    case 202u: goto L_0036D280;
    case 203u: goto L_0036D290;
    case 204u: goto L_0036D2A0;
    case 205u: goto L_0036D2B0;
    case 206u: goto L_0036D2C0;
    case 207u: goto L_0036D2D0;
    case 208u: goto L_0036D2E0;
    case 209u: goto L_0036D2F0;
    case 210u: goto L_0036D300;
    case 211u: goto L_0036D310;
    case 212u: goto L_0036D320;
    case 213u: goto L_0036D330;
    case 214u: goto L_0036D340;
    case 215u: goto L_0036D350;
    case 216u: goto L_0036D360;
    case 217u: goto L_0036D370;
    case 218u: goto L_0036D380;
    case 219u: goto L_0036D390;
    case 220u: goto L_0036D3A0;
    case 221u: goto L_0036D3B0;
    case 222u: goto L_0036D3C0;
    case 223u: goto L_0036D3D0;
    case 224u: goto L_0036D3E0;
    case 225u: goto L_0036D3F0;
    case 226u: goto L_0036D400;
    case 227u: goto L_0036D410;
    case 228u: goto L_0036D420;
    case 229u: goto L_0036D430;
    case 230u: goto L_0036D440;
    case 231u: goto L_0036D450;
    case 232u: goto L_0036D460;
    case 233u: goto L_0036D470;
    case 234u: goto L_0036D4A4;
    case 235u: goto L_0036D4B4;
    case 236u: goto L_0036D4C4;
    case 237u: goto L_0036D4D4;
    case 238u: goto L_0036D4F4;
    case 239u: goto L_0036D510;
    case 240u: goto L_0036D518;
    case 241u: goto L_0036D528;
    case 242u: goto L_0036D538;
    case 243u: goto L_0036D548;
    case 244u: goto L_0036D558;
    case 245u: goto L_0036D568;
    case 246u: goto L_0036D578;
    case 247u: goto L_0036D588;
    case 248u: goto L_0036D590;
    case 249u: goto L_0036D598;
    case 250u: goto L_0036D5A0;
    case 251u: goto L_0036D5F8;
    case 252u: goto L_0036D608;
    case 253u: goto L_0036D688;
    case 254u: goto L_0036D6C8;
    case 255u: goto L_0036D6FC;
    case 256u: goto L_0036D708;
    case 257u: goto L_0036D718;
    case 258u: goto L_0036D728;
    case 259u: goto L_0036D744;
    case 260u: goto L_0036D774;
    case 261u: goto L_0036D7A4;
    case 262u: goto L_0036D7D4;
    case 263u: goto L_0036D7E8;
    case 264u: goto L_0036D810;
    case 265u: goto L_0036D858;
    case 266u: goto L_0036D86C;
    case 267u: goto L_0036D884;
    case 268u: goto L_0036D898;
    case 269u: goto L_0036D8A4;
    case 270u: goto L_0036D8B0;
    case 271u: goto L_0036D8BC;
    case 272u: goto L_0036D940;
    case 273u: goto L_0036D97C;
    case 274u: goto L_0036D990;
    case 275u: goto L_0036D9A8;
    case 276u: goto L_0036D9BC;
    case 277u: goto L_0036D9C8;
    case 278u: goto L_0036D9D4;
    case 279u: goto L_0036D9E0;
    case 280u: goto L_0036DA50;
    case 281u: goto L_0036DA70;
    case 282u: goto L_0036DAC0;
    case 283u: goto L_0036DB10;
    case 284u: goto L_0036DB60;
    case 285u: goto L_0036DBE0;
    case 286u: goto L_0036DC60;
    case 287u: goto L_0036DCE0;
    case 288u: goto L_0036DD00;
    case 289u: goto L_0036DD18;
    case 290u: goto L_0036DD38;
    case 291u: goto L_0036DD50;
    case 292u: goto L_0036DD58;
    case 293u: goto L_0036DD84;
    case 294u: goto L_0036DD90;
    case 295u: goto L_0036DDA4;
    case 296u: goto L_0036DDB8;
    case 297u: goto L_0036DDD8;
    case 298u: goto L_0036DDE0;
    case 299u: goto L_0036DE0C;
    case 300u: goto L_0036DE18;
    case 301u: goto L_0036DE2C;
    case 302u: goto L_0036DE40;
    case 303u: goto L_0036DE60;
    case 304u: goto L_0036DE68;
    case 305u: goto L_0036DE70;
    case 306u: goto L_0036DE78;
    case 307u: goto L_0036DE90;
    case 308u: goto L_0036DE9C;
    case 309u: goto L_0036DEA8;
    case 310u: goto L_0036DEC0;
    case 311u: goto L_0036DED8;
    case 312u: goto L_0036DEE4;
    case 313u: goto L_0036DEF0;
    case 314u: goto L_0036DF08;
    case 315u: goto L_0036DFA0;
    case 316u: goto L_0036DFF8;
    case 317u: goto L_0036E028;
    case 318u: goto L_0036E0AC;
    case 319u: goto L_0036E0B8;
    case 320u: goto L_0036E0CC;
    case 321u: goto L_0036E0E0;
    case 322u: goto L_0036E100;
    case 323u: goto L_0036E170;
    case 324u: goto L_0036E1A8;
    case 325u: goto L_0036E1E8;
    case 326u: goto L_0036E228;
    case 327u: goto L_0036E250;
    case 328u: goto L_0036E2A0;
    case 329u: goto L_0036E318;
    case 330u: goto L_0036E340;
    case 331u: goto L_0036E390;
    case 332u: goto L_0036E3E0;
    case 333u: goto L_0036E438;
    case 334u: goto L_0036E498;
    case 335u: goto L_0036E4D4;
    case 336u: goto L_0036E50C;
    case 337u: goto L_0036E524;
    case 338u: goto L_0036E568;
    case 339u: goto L_0036E5C0;
    case 340u: goto L_0036E5EC;
    case 341u: goto L_0036E600;
    case 342u: goto L_0036E9D8;
    case 343u: goto L_0036EA28;
    case 344u: goto L_0036EA48;
    case 345u: goto L_0036EAF0;
    case 346u: goto L_0036EB08;
    case 347u: goto L_0036EC20;
    case 348u: goto L_0036EC38;
    case 349u: goto L_0036ECC0;
    case 350u: goto L_0036ECD4;
    case 351u: goto L_0036ECE8;
    case 352u: goto L_0036ECFC;
    case 353u: goto L_0036ED10;
    case 354u: goto L_0036ED24;
    case 355u: goto L_0036ED38;
    case 356u: goto L_0036ED4C;
    case 357u: goto L_0036ED60;
    case 358u: goto L_0036ED74;
    case 359u: goto L_0036ED88;
    case 360u: goto L_0036ED9C;
    case 361u: goto L_0036EDD8;
    case 362u: goto L_0036EDF8;
    case 363u: goto L_0036EE14;
    case 364u: goto L_0036EE28;
    case 365u: goto L_0036EE68;
    case 366u: goto L_0036EEAC;
    case 367u: goto L_0036EF18;
    case 368u: goto L_0036EF38;
    case 369u: goto L_0036EF48;
    case 370u: goto L_0036EF60;
    case 371u: goto L_0036EFA0;
    case 372u: goto L_0036EFE8;
    case 373u: goto L_0036F01C;
    case 374u: goto L_0036F038;
    case 375u: goto L_0036F05C;
    case 376u: goto L_0036F074;
    case 377u: goto L_0036F094;
    case 378u: goto L_0036F0AC;
    case 379u: goto L_0036F0E8;
    case 380u: goto L_0036F0F8;
    case 381u: goto L_0036F130;
    case 382u: goto L_0036F144;
    case 383u: goto L_0036F15C;
    case 384u: goto L_0036F170;
    case 385u: goto L_0036F190;
    case 386u: goto L_0036F1D8;
    case 387u: goto L_0036F1E0;
    case 388u: goto L_0036F204;
    case 389u: goto L_0036F218;
    case 390u: goto L_0036F238;
    case 391u: goto L_0036F250;
    case 392u: goto L_0036F268;
    case 393u: goto L_0036F280;
    case 394u: goto L_0036F2A0;
    case 395u: goto L_0036F2B8;
    case 396u: goto L_0036F2C8;
    case 397u: goto L_0036F300;
    case 398u: goto L_0036F338;
    case 399u: goto L_0036F350;
    case 400u: goto L_0036F378;
    case 401u: goto L_0036F390;
    case 402u: goto L_0036F3BC;
    case 403u: goto L_0036F3E0;
    case 404u: goto L_0036F3F8;
    case 405u: goto L_0036F420;
    case 406u: goto L_0036F448;
    case 407u: goto L_0036F460;
    case 408u: goto L_0036F468;
    case 409u: goto L_0036F470;
    case 410u: goto L_0036F488;
    case 411u: goto L_0036F4AC;
    case 412u: goto L_0036F4BC;
    case 413u: goto L_0036F4EC;
    case 414u: goto L_0036F520;
    case 415u: goto L_0036F550;
    case 416u: goto L_0036F570;
    case 417u: goto L_0036F5AC;
    case 418u: goto L_0036F5D8;
    case 419u: goto L_0036F5E8;
    case 420u: goto L_0036F5F0;
    case 421u: goto L_0036F600;
    case 422u: goto L_0036F628;
    case 423u: goto L_0036F638;
    case 424u: goto L_0036F65C;
    case 425u: goto L_0036F678;
    case 426u: goto L_0036F6D8;
    case 427u: goto L_0036F718;
    case 428u: goto L_0036F738;
    case 429u: goto L_0036F750;
    case 430u: goto L_0036F760;
    case 431u: goto L_0036F768;
    case 432u: goto L_0036F778;
    case 433u: goto L_0036F800;
    case 434u: goto L_0036F848;
    case 435u: goto L_0036F864;
    case 436u: goto L_0036F88C;
    case 437u: goto L_0036F8C8;
    case 438u: goto L_0036F8D0;
    case 439u: goto L_0036F8F4;
    case 440u: goto L_0036F908;
    case 441u: goto L_0036F928;
    case 442u: goto L_0036F940;
    case 443u: goto L_0036F958;
    case 444u: goto L_0036F970;
    case 445u: goto L_0036F990;
    case 446u: goto L_0036F9A8;
    case 447u: goto L_0036F9B8;
    case 448u: goto L_0036F9C8;
    case 449u: goto L_0036F9D8;
    case 450u: goto L_0036F9E8;
    case 451u: goto L_0036F9F8;
    case 452u: goto L_0036FA08;
    case 453u: goto L_0036FA18;
    case 454u: goto L_0036FA28;
    case 455u: goto L_0036FA48;
    case 456u: goto L_0036FA54;
    case 457u: goto L_0036FA88;
    case 458u: goto L_0036FA98;
    case 459u: goto L_0036FAA8;
    case 460u: goto L_0036FAD8;
    case 461u: goto L_0036FAE8;
    case 462u: goto L_0036FAF8;
    case 463u: goto L_0036FB28;
    case 464u: goto L_0036FB38;
    case 465u: goto L_0036FB48;
    case 466u: goto L_0036FB78;
    case 467u: goto L_0036FB94;
    case 468u: goto L_0036FBA8;
    case 469u: goto L_0036FBC4;
    case 470u: goto L_0036FBD8;
    case 471u: goto L_0036FBEC;
    case 472u: goto L_0036FC00;
    case 473u: goto L_0036FC14;
    case 474u: goto L_0036FC28;
    case 475u: goto L_0036FC44;
    case 476u: goto L_0036FC58;
    case 477u: goto L_0036FC74;
    case 478u: goto L_0036FC88;
    case 479u: goto L_0036FC9C;
    case 480u: goto L_0036FCB0;
    case 481u: goto L_0036FCCC;
    case 482u: goto L_0036FCE0;
    case 483u: goto L_0036FCFC;
    case 484u: goto L_0036FD10;
    case 485u: goto L_0036FD24;
    case 486u: goto L_0036FD38;
    case 487u: goto L_0036FD54;
    case 488u: goto L_0036FD68;
    case 489u: goto L_0036FD7C;
    case 490u: goto L_0036FD90;
    case 491u: goto L_0036FDD0;
    case 492u: goto L_0036FE00;
    case 493u: goto L_0036FE38;
    case 494u: goto L_0036FE50;
    case 495u: goto L_0036FE58;
    case 496u: goto L_0036FE84;
    case 497u: goto L_0036FEA0;
    case 498u: goto L_0036FEB8;
    case 499u: goto L_0036FEC0;
    case 500u: goto L_0036FEC8;
    case 501u: goto L_0036FF40;
    case 502u: goto L_0036FF78;
    case 503u: goto L_0036FFB8;
    case 504u: goto L_0036FFE8;
    case 505u: goto L_0036FFF0;
    default: bad_entry(c, 0x0036C000u); return;
    }
L_0036C000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C058; } }
L_0036C008:
    set32(c.r[4], c.r[16].w[0] + 416u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C018u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C018u) [[unlikely]] return; }
L_0036C018:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BFE4u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 313u, depth); } }
L_0036C020:
    set32(c.r[4], c.r[16].w[0] + 352u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C030u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C030u) [[unlikely]] return; }
L_0036C030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BFECu | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 314u, depth); } }
L_0036C038:
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C048u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C048u) [[unlikely]] return; }
L_0036C048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BFF4u | kUnwind; return; } [[clang::musttail]] return unit_009A(c, 315u, depth); } }
L_0036C050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C058u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0036C058u) [[unlikely]] return; }
L_0036C058:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C070:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], c.r[29].w[0] + 48u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0A0u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0036C0A0u) [[unlikely]] return; }
L_0036C0A0:
    c.f[20] = 0u;
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0C8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0036C0C8u) [[unlikely]] return; }
L_0036C0C8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 304u);
    set32(c.r[6], c.r[18].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0DCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0036C0DCu) [[unlikely]] return; }
L_0036C0DC:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C0F4u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0036C0F4u) [[unlikely]] return; }
L_0036C0F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C108u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0036C108u) [[unlikely]] return; }
L_0036C108:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C114u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036C114u) [[unlikely]] return; }
L_0036C114:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C120u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036C120u) [[unlikely]] return; }
L_0036C120:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C12Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036C12Cu) [[unlikely]] return; }
L_0036C12C:
    c.f[12] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[4], c.r[18].w[0] + 112u);
    c.f[10] = ld32((c.r[29].w[0] + 36u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 20u));
    c.f[4] = ld32((c.r[29].w[0] + 24u));
    c.f[5] = ld32((c.r[29].w[0] + 28u));
    c.f[6] = ld32((c.r[29].w[0]));
    c.f[7] = ld32((c.r[29].w[0] + 4u));
    c.f[8] = ld32((c.r[29].w[0] + 8u));
    c.f[9] = ld32((c.r[29].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[11] = c.r[1].w[0];
    st32((c.r[29].w[0] + 104u), c.f[20]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    st32((c.r[29].w[0] + 100u), c.f[20]);
    st32((c.r[29].w[0] + 48u), c.f[12]);
    st32((c.r[29].w[0] + 52u), c.f[10]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[3]);
    st32((c.r[29].w[0] + 72u), c.f[4]);
    st32((c.r[29].w[0] + 76u), c.f[5]);
    st32((c.r[29].w[0] + 80u), c.f[6]);
    st32((c.r[29].w[0] + 84u), c.f[7]);
    st32((c.r[29].w[0] + 88u), c.f[8]);
    st32((c.r[29].w[0] + 92u), c.f[9]);
    st32((c.r[29].w[0] + 108u), c.f[11]);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C1B4u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0036C1B4u) [[unlikely]] return; }
L_0036C1B4:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C1D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C1FCu);  if (depth < kMaxDepth) unit_0049(c, 179u, depth + 1u); else { c.pc = 0x00226568u; return; } if (c.pc != 0x0036C1FCu) [[unlikely]] return; }
L_0036C1FC:
    c.f[12] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[0] = ld32((c.r[3].w[0] + 32116u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036C224; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] + 32116u), c.f[20]);
    st32((c.r[2].w[0] + 32120u), 0u);
    c.budget -= 3;
L_0036C224:
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036C340; } }
    c.f[0] = fp::sub(c.f[20], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = c.f[0] & fp::kAbs;
    c.f[3] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036C340; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036C27C; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C274u);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x0036C274u) [[unlikely]] return; }
L_0036C274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C35C; } }
L_0036C27C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32120u)));
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036C2C8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036C2B0; } }
    c.f[0] = ld32((c.r[16].w[0] + 700u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C2B8; } }
L_0036C2B0:
    c.f[0] = ld32((c.r[16].w[0] + 628u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 2;
L_0036C2B8:
    fpu_div(c, 0u, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 32124u), c.f[0]);
    c.budget -= 4;
L_0036C2C8:
    c.f[0] = c.f[3] & fp::kAbs;
    c.f[1] = ld32((c.r[4].w[0] + 32124u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036C2F4; } }
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C2ECu);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x0036C2ECu) [[unlikely]] return; }
L_0036C2EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C324; } }
L_0036C2F4:
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036C318; } }
    c.f[12] = fp::add(c.f[12], c.f[1]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C310u);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x0036C310u) [[unlikely]] return; }
L_0036C310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C324; } }
L_0036C318:
    c.f[12] = fp::sub(c.f[12], c.f[1]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C324u);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x0036C324u) [[unlikely]] return; }
L_0036C324:
    set32(c.r[2], ld32((c.r[17].w[0] + 32120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036C35C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 32120u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C35C; } }
L_0036C340:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32120u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036C35C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st32((c.r[3].w[0] + 32120u), 0u);
    st32((c.r[2].w[0] + 32124u), 0u);
    c.budget -= 3;
L_0036C35C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C378:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3B0u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0036C3B0u) [[unlikely]] return; }
L_0036C3B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 500u)));
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036C65C; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3D0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C3D0u) [[unlikely]] return; }
L_0036C3D0:
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3E0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C3E0u) [[unlikely]] return; }
L_0036C3E0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C3F0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C3F0u) [[unlikely]] return; }
L_0036C3F0:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C400u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C400u) [[unlikely]] return; }
L_0036C400:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C410u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C410u) [[unlikely]] return; }
L_0036C410:
    set32(c.r[4], c.r[17].w[0] + 368u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C420u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C420u) [[unlikely]] return; }
L_0036C420:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C430u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C430u) [[unlikely]] return; }
L_0036C430:
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C440u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C440u) [[unlikely]] return; }
L_0036C440:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C450u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C450u) [[unlikely]] return; }
L_0036C450:
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C460u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C460u) [[unlikely]] return; }
L_0036C460:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C470u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C470u) [[unlikely]] return; }
L_0036C470:
    set32(c.r[4], c.r[17].w[0] + 384u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C480u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C480u) [[unlikely]] return; }
L_0036C480:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C490u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C490u) [[unlikely]] return; }
L_0036C490:
    set32(c.r[4], c.r[17].w[0] + 272u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4A0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C4A0u) [[unlikely]] return; }
L_0036C4A0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4B0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C4B0u) [[unlikely]] return; }
L_0036C4B0:
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4C0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C4C0u) [[unlikely]] return; }
L_0036C4C0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 400u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4D0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C4D0u) [[unlikely]] return; }
L_0036C4D0:
    set32(c.r[4], c.r[17].w[0] + 400u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4E0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C4E0u) [[unlikely]] return; }
L_0036C4E0:
    set32(c.r[19], c.r[18].w[0] + 288u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C4F4u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0036C4F4u) [[unlikely]] return; }
L_0036C4F4:
    ldl(c.r[2], (c.r[29].w[0] + 23u));
    ldr(c.r[2], (c.r[29].w[0] + 16u));
    ldl(c.r[3], (c.r[29].w[0] + 31u));
    ldr(c.r[3], (c.r[29].w[0] + 24u));
    sdl(c.r[2], (c.r[29].w[0] + 39u));
    sdr(c.r[2], (c.r[29].w[0] + 32u));
    sdl(c.r[3], (c.r[29].w[0] + 47u));
    sdr(c.r[3], (c.r[29].w[0] + 40u));
    c.budget -= 8;
L_0036C514:
    set32(c.r[20], c.r[29].w[0] + 32u);
    set32(c.r[16], c.r[17].w[0] + 288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C52Cu);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0036C52Cu) [[unlikely]] return; }
L_0036C52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C53C; } }
L_0036C534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C53Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0036C53Cu) [[unlikely]] return; }
L_0036C53C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C54Cu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C54Cu) [[unlikely]] return; }
L_0036C54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C56C; } }
L_0036C554:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C564u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C564u) [[unlikely]] return; }
L_0036C564:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C534u | kUnwind; return; } goto L_0036C534; } }
L_0036C56C:
    c.f[3] = ld32((c.r[18].w[0] + 352u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[18].w[0] + 356u));
    set32(c.r[5], 0u + 2u);
    c.f[0] = ld32((c.r[18].w[0] + 360u));
    c.f[1] = ld32((c.r[18].w[0] + 364u));
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    ldl(c.r[6], (c.r[29].w[0] + 23u));
    ldr(c.r[6], (c.r[29].w[0] + 16u));
    ldl(c.r[7], (c.r[29].w[0] + 31u));
    ldr(c.r[7], (c.r[29].w[0] + 24u));
    sdl(c.r[6], (c.r[29].w[0] + 39u));
    sdr(c.r[6], (c.r[29].w[0] + 32u));
    sdl(c.r[7], (c.r[29].w[0] + 47u));
    sdr(c.r[7], (c.r[29].w[0] + 40u));
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[2] = ld32((c.r[29].w[0] + 40u));
    c.f[3] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[17].w[0] + 352u), c.f[0]);
    st32((c.r[17].w[0] + 356u), c.f[1]);
    st32((c.r[17].w[0] + 360u), c.f[2]);
    st32((c.r[17].w[0] + 364u), c.f[3]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C5DCu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C5DCu) [[unlikely]] return; }
L_0036C5DC:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C5ECu);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0036C5ECu) [[unlikely]] return; }
L_0036C5EC:
    ldl(c.r[4], (c.r[29].w[0] + 23u));
    ldr(c.r[4], (c.r[29].w[0] + 16u));
    ldl(c.r[5], (c.r[29].w[0] + 31u));
    ldr(c.r[5], (c.r[29].w[0] + 24u));
    sdl(c.r[4], (c.r[29].w[0] + 39u));
    sdr(c.r[4], (c.r[29].w[0] + 32u));
    sdl(c.r[5], (c.r[29].w[0] + 47u));
    sdr(c.r[5], (c.r[29].w[0] + 40u));
    c.budget -= 8;
L_0036C60C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C61Cu);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0036C61Cu) [[unlikely]] return; }
L_0036C61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C62C; } }
L_0036C624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C62Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0036C62Cu) [[unlikely]] return; }
L_0036C62C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C63Cu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C63Cu) [[unlikely]] return; }
L_0036C63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C65C; } }
L_0036C644:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C654u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C654u) [[unlikely]] return; }
L_0036C654:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C624u | kUnwind; return; } goto L_0036C624; } }
L_0036C65C:
    set32(c.r[2], ld32((c.r[18].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036C694; } }
    st32((c.r[17].w[0] + 656u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 660u));
    st32((c.r[17].w[0] + 660u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 664u)));
    st32((c.r[17].w[0] + 664u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 668u)));
    st32((c.r[17].w[0] + 668u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 672u)));
    st32((c.r[17].w[0] + 672u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 676u)));
    st32((c.r[17].w[0] + 676u), c.r[3].w[0]);
    c.budget -= 11;
L_0036C694:
    set32(c.r[2], ld32((c.r[18].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036C6C4; } }
    st32((c.r[17].w[0] + 684u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 688u));
    st32((c.r[17].w[0] + 688u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 692u)));
    st32((c.r[17].w[0] + 692u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 696u)));
    st32((c.r[17].w[0] + 696u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 700u)));
    st32((c.r[17].w[0] + 700u), c.r[2].w[0]);
    c.budget -= 9;
L_0036C6C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036C6FC; } }
    st32((c.r[17].w[0] + 704u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 708u)));
    st32((c.r[17].w[0] + 708u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 712u)));
    st32((c.r[17].w[0] + 712u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 720u)));
    st32((c.r[17].w[0] + 720u), c.r[2].w[0]);
    c.budget -= 7;
L_0036C6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C6FC; } }
L_0036C6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C6FCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0036C6FCu) [[unlikely]] return; }
L_0036C6FC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C70Cu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C70Cu) [[unlikely]] return; }
L_0036C70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C734; } }
L_0036C714:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C724u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C724u) [[unlikely]] return; }
L_0036C724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C6F4u | kUnwind; return; } goto L_0036C6F4; } }
L_0036C72C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C734u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0036C734u) [[unlikely]] return; }
L_0036C734:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2504u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C78Cu);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0036C78Cu) [[unlikely]] return; }
L_0036C78C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C7A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C7C0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036C7C0u) [[unlikely]] return; }
L_0036C7C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C7D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C7F0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036C7F0u) [[unlikely]] return; }
L_0036C7F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C808:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C828u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036C828u) [[unlikely]] return; }
L_0036C828:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C840:
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C850:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 432u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C874u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C874u) [[unlikely]] return; }
L_0036C874:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C888:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 448u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C89Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C89Cu) [[unlikely]] return; }
L_0036C89C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C8B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 464u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C8C4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C8C4u) [[unlikely]] return; }
L_0036C8C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C8D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.budget -= 12;
L_0036C908:
    set32(c.r[4], c.r[4].w[0] + 480u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C918u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0036C918u) [[unlikely]] return; }
L_0036C918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C928; } }
L_0036C920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C928u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0036C928u) [[unlikely]] return; }
L_0036C928:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C938u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C938u) [[unlikely]] return; }
L_0036C938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036C958; } }
L_0036C940:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C950u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036C950u) [[unlikely]] return; }
L_0036C950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036C920u | kUnwind; return; } goto L_0036C920; } }
L_0036C958:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C970:
    set32(c.r[2], c.r[4].w[0] + 432u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C98Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C98Cu) [[unlikely]] return; }
L_0036C98C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C9A0:
    set32(c.r[2], c.r[4].w[0] + 448u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C9BCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C9BCu) [[unlikely]] return; }
L_0036C9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036C9D0:
    set32(c.r[2], c.r[4].w[0] + 464u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036C9ECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036C9ECu) [[unlikely]] return; }
L_0036C9EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CA00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.budget -= 12;
L_0036CA30:
    set32(c.r[5], c.r[4].w[0] + 480u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CA40u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0036CA40u) [[unlikely]] return; }
L_0036CA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CA50; } }
L_0036CA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CA50u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0036CA50u) [[unlikely]] return; }
L_0036CA50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CA60u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036CA60u) [[unlikely]] return; }
L_0036CA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CA80; } }
L_0036CA68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CA78u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036CA78u) [[unlikely]] return; }
L_0036CA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CA48u | kUnwind; return; } goto L_0036CA48; } }
L_0036CA80:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CA98:
    st32((c.r[4].w[0] + 540u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CAA8:
    st32((c.r[4].w[0] + 548u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CAB8:
    st32((c.r[4].w[0] + 572u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CAC8:
    c.f[0] = ld32((c.r[4].w[0] + 572u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CAD8:
    st32((c.r[4].w[0] + 580u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CAE8:
    c.f[0] = ld32((c.r[4].w[0] + 580u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CAF8:
    c.f[0] = ld32((c.r[4].w[0] + 584u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB08:
    c.f[0] = ld32((c.r[4].w[0] + 588u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB18:
    st32((c.r[4].w[0] + 592u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB28:
    c.f[0] = ld32((c.r[4].w[0] + 592u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB38:
    st32((c.r[4].w[0] + 600u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB48:
    c.f[0] = ld32((c.r[4].w[0] + 600u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB58:
    st32((c.r[4].w[0] + 632u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB68:
    st32((c.r[4].w[0] + 636u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB78:
    st32((c.r[4].w[0] + 640u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB88:
    st32((c.r[4].w[0] + 704u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CB98:
    set32(c.r[2], ld32((c.r[4].w[0] + 704u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CBA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 708u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CBB8:
    set32(c.r[2], ld32((c.r[4].w[0] + 712u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CBC8:
    set32(c.r[2], ld32((c.r[4].w[0] + 720u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CBD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CBECu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0036CBECu) [[unlikely]] return; }
L_0036CBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC14u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CC14u) [[unlikely]] return; }
L_0036CC14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CC28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 112u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC3Cu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0036CC3Cu) [[unlikely]] return; }
L_0036CC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CC50:
    set32(c.r[2], c.r[4].w[0] + 112u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC6Cu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0036CC6Cu) [[unlikely]] return; }
L_0036CC6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CC80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 176u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CC94u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0036CC94u) [[unlikely]] return; }
L_0036CC94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CCA8:
    set32(c.r[2], c.r[4].w[0] + 176u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CCC4u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0036CCC4u) [[unlikely]] return; }
L_0036CCC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CCD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], c.r[4].w[0] + 320u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[4].w[0] + 304u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CCFCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0036CCFCu) [[unlikely]] return; }
L_0036CCFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CD08u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036CD08u) [[unlikely]] return; }
L_0036CD08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CD20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 240u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CD34u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CD34u) [[unlikely]] return; }
L_0036CD34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CD48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 256u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CD5Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CD5Cu) [[unlikely]] return; }
L_0036CD5C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CD70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 272u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CD84u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CD84u) [[unlikely]] return; }
L_0036CD84:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CD98:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.budget -= 12;
L_0036CDC8:
    set32(c.r[4], c.r[4].w[0] + 288u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDD8u);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0036CDD8u) [[unlikely]] return; }
L_0036CDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CDE8; } }
L_0036CDE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDE8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0036CDE8u) [[unlikely]] return; }
L_0036CDE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CDF8u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036CDF8u) [[unlikely]] return; }
L_0036CDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036CE18; } }
L_0036CE00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE10u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036CE10u) [[unlikely]] return; }
L_0036CE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036CDE0u | kUnwind; return; } goto L_0036CDE0; } }
L_0036CE18:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CE30:
    set32(c.r[2], c.r[4].w[0] + 240u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE4Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CE4Cu) [[unlikely]] return; }
L_0036CE4C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CE60:
    set32(c.r[2], c.r[4].w[0] + 256u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CE7Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CE7Cu) [[unlikely]] return; }
L_0036CE7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CE90:
    set32(c.r[2], c.r[4].w[0] + 272u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CEACu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CEACu) [[unlikely]] return; }
L_0036CEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CEC0:
    set32(c.r[2], c.r[4].w[0] + 288u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CEDCu);  if (depth < kMaxDepth) unit_008B(c, 218u, depth + 1u); else { c.pc = 0x0032E150u; return; } if (c.pc != 0x0036CEDCu) [[unlikely]] return; }
L_0036CEDC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CEF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 304u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF04u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CF04u) [[unlikely]] return; }
L_0036CF04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CF18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 320u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF2Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CF2Cu) [[unlikely]] return; }
L_0036CF2C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 336u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CF54u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CF54u) [[unlikely]] return; }
L_0036CF54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CF68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[2].w[0] + 352u), c.f[1]);
    st32((c.r[2].w[0] + 364u), c.f[0]);
    st32((c.r[2].w[0] + 356u), c.f[2]);
    st32((c.r[2].w[0] + 360u), c.f[3]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CFC4u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036CFC4u) [[unlikely]] return; }
L_0036CFC4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036CFD8:
    set32(c.r[2], c.r[4].w[0] + 304u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036CFF4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036CFF4u) [[unlikely]] return; }
L_0036CFF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D008:
    set32(c.r[2], c.r[4].w[0] + 320u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D024u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036D024u) [[unlikely]] return; }
L_0036D024:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D038:
    set32(c.r[2], c.r[4].w[0] + 336u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D054u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036D054u) [[unlikely]] return; }
L_0036D054:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D068:
    c.f[0] = ld32((c.r[4].w[0] + 352u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 356u));
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 360u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 364u));
    st32((c.r[5].w[0] + 12u), c.f[1]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 368u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D0A4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036D0A4u) [[unlikely]] return; }
L_0036D0A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D0B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 384u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D0CCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036D0CCu) [[unlikely]] return; }
L_0036D0CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 400u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D0F4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036D0F4u) [[unlikely]] return; }
L_0036D0F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D108:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    ldl(c.r[2], (c.r[5].w[0] + 7u));
    ldr(c.r[2], (c.r[5].w[0]));
    ldl(c.r[3], (c.r[5].w[0] + 15u));
    ldr(c.r[3], (c.r[5].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 15u));
    sdr(c.r[3], (c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[2].w[0] + 416u), c.f[1]);
    st32((c.r[2].w[0] + 428u), c.f[0]);
    st32((c.r[2].w[0] + 420u), c.f[2]);
    st32((c.r[2].w[0] + 424u), c.f[3]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D164u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036D164u) [[unlikely]] return; }
L_0036D164:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D178:
    set32(c.r[2], c.r[4].w[0] + 368u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D194u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036D194u) [[unlikely]] return; }
L_0036D194:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D1A8:
    set32(c.r[2], c.r[4].w[0] + 384u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D1C4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036D1C4u) [[unlikely]] return; }
L_0036D1C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D1D8:
    set32(c.r[2], c.r[4].w[0] + 400u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D1F4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036D1F4u) [[unlikely]] return; }
L_0036D1F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D208:
    c.f[0] = ld32((c.r[4].w[0] + 416u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 420u));
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 424u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 428u));
    st32((c.r[5].w[0] + 12u), c.f[1]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D230:
    st32((c.r[4].w[0] + 496u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D240:
    set32(c.r[2], ld32((c.r[4].w[0] + 496u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D250:
    st32((c.r[4].w[0] + 500u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D260:
    set32(c.r[2], ld32((c.r[4].w[0] + 500u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D270:
    st32((c.r[4].w[0] + 556u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D280:
    st32((c.r[4].w[0] + 564u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D290:
    set32(c.r[2], ld32((c.r[4].w[0] + 564u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D2A0:
    st32((c.r[4].w[0] + 584u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D2B0:
    st32((c.r[4].w[0] + 588u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D2C0:
    st32((c.r[4].w[0] + 612u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D2D0:
    c.f[0] = ld32((c.r[4].w[0] + 612u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D2E0:
    st32((c.r[4].w[0] + 616u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D2F0:
    c.f[0] = ld32((c.r[4].w[0] + 616u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D300:
    st32((c.r[4].w[0] + 620u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D310:
    c.f[0] = ld32((c.r[4].w[0] + 620u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D320:
    st32((c.r[4].w[0] + 624u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D330:
    c.f[0] = ld32((c.r[4].w[0] + 624u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D340:
    st32((c.r[4].w[0] + 628u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D350:
    set32(c.r[2], ld32((c.r[4].w[0] + 628u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D360:
    st32((c.r[4].w[0] + 644u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D370:
    st32((c.r[4].w[0] + 648u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D380:
    st32((c.r[4].w[0] + 652u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D390:
    set32(c.r[2], ld32((c.r[4].w[0] + 652u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D3A0:
    st32((c.r[4].w[0] + 656u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D3B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 656u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D3C0:
    c.f[0] = ld32((c.r[4].w[0] + 660u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D3D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 664u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D3E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 668u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D3F0:
    set32(c.r[2], ld32((c.r[4].w[0] + 672u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D400:
    set32(c.r[2], ld32((c.r[4].w[0] + 676u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D410:
    st32((c.r[4].w[0] + 684u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D420:
    set32(c.r[2], ld32((c.r[4].w[0] + 684u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D430:
    c.f[0] = ld32((c.r[4].w[0] + 688u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D440:
    set32(c.r[2], ld32((c.r[4].w[0] + 692u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D450:
    set32(c.r[2], ld32((c.r[4].w[0] + 696u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D460:
    set32(c.r[2], ld32((c.r[4].w[0] + 700u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D470:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 8408u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 480u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4A4u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036D4A4u) [[unlikely]] return; }
L_0036D4A4:
    set32(c.r[4], c.r[17].w[0] + 416u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4B4u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036D4B4u) [[unlikely]] return; }
L_0036D4B4:
    set32(c.r[4], c.r[17].w[0] + 352u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4C4u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036D4C4u) [[unlikely]] return; }
L_0036D4C4:
    set32(c.r[4], c.r[17].w[0] + 288u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4D4u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0036D4D4u) [[unlikely]] return; }
L_0036D4D4:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036D4F4; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D4F4u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036D4F4u) [[unlikely]] return; }
L_0036D4F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D510:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D518:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D528:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D538:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D548:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D558:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D568:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D578:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D588:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D590:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D598:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D5A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[5] = ld32((c.r[2].w[0] + 328u));
    c.f[2] = ld32((c.r[2].w[0] + 304u));
    c.f[3] = ld32((c.r[2].w[0] + 320u));
    c.f[1] = ld32((c.r[2].w[0] + 308u));
    c.f[4] = ld32((c.r[2].w[0] + 324u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[0] = ld32((c.r[2].w[0] + 312u));
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D5F8u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0036D5F8u) [[unlikely]] return; }
L_0036D5F8:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D608u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x0036D608u) [[unlikely]] return; }
L_0036D608:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036D648; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036D674; } }
L_0036D648:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036D678; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_0036D674:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_0036D678:
    c.f[12] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D688u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0036D688u) [[unlikely]] return; }
L_0036D688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D6C8:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    set32(c.r[19], c.r[4].w[0] + 32u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D6FCu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0036D6FCu) [[unlikely]] return; }
L_0036D6FC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D708u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0036D708u) [[unlikely]] return; }
L_0036D708:
    set32(c.r[20], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D718u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0036D718u) [[unlikely]] return; }
L_0036D718:
    set32(c.r[21], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D728u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0036D728u) [[unlikely]] return; }
L_0036D728:
    set32(c.r[16], c.r[29].w[0] + 192u);
    set32(c.r[17], c.r[29].w[0] + 196u);
    c.f[12] = ld32((c.r[18].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D744u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x0036D744u) [[unlikely]] return; }
L_0036D744:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D774u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x0036D774u) [[unlikely]] return; }
L_0036D774:
    c.f[2] = ld32((c.r[29].w[0] + 192u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 196u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = c.f[2] ^ fp::kSign;
    c.f[12] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[29].w[0] + 104u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D7A4u);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x0036D7A4u) [[unlikely]] return; }
L_0036D7A4:
    c.f[0] = ld32((c.r[29].w[0] + 192u));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 196u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[2] = c.f[0] ^ fp::kSign;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 128u), c.f[1]);
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D7D4u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0036D7D4u) [[unlikely]] return; }
L_0036D7D4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D7E8u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0036D7E8u) [[unlikely]] return; }
L_0036D7E8:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D810:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[18], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.f[14] = c.f[12];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[12];
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D858u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0036D858u) [[unlikely]] return; }
L_0036D858:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D86Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0036D86Cu) [[unlikely]] return; }
L_0036D86C:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D884u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0036D884u) [[unlikely]] return; }
L_0036D884:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D898u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0036D898u) [[unlikely]] return; }
L_0036D898:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D8A4u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036D8A4u) [[unlikely]] return; }
L_0036D8A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D8B0u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036D8B0u) [[unlikely]] return; }
L_0036D8B0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D8BCu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036D8BCu) [[unlikely]] return; }
L_0036D8BC:
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.f[3] = ld32((c.r[29].w[0] + 40u));
    c.f[4] = ld32((c.r[29].w[0] + 44u));
    c.f[5] = ld32((c.r[29].w[0] + 16u));
    c.f[6] = ld32((c.r[29].w[0] + 20u));
    c.f[7] = ld32((c.r[29].w[0] + 24u));
    c.f[8] = ld32((c.r[29].w[0] + 28u));
    c.f[9] = ld32((c.r[29].w[0]));
    c.f[10] = ld32((c.r[29].w[0] + 4u));
    c.f[11] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    st32((c.r[16].w[0] + 8u), c.f[3]);
    st32((c.r[16].w[0] + 12u), c.f[4]);
    st32((c.r[16].w[0] + 16u), c.f[5]);
    st32((c.r[16].w[0] + 20u), c.f[6]);
    st32((c.r[16].w[0] + 24u), c.f[7]);
    st32((c.r[16].w[0] + 28u), c.f[8]);
    st32((c.r[16].w[0] + 32u), c.f[9]);
    st32((c.r[16].w[0] + 36u), c.f[10]);
    st32((c.r[16].w[0] + 40u), c.f[11]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036D940:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[13] = c.r[1].w[0];
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.f[14] = c.f[12];
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.f[15] = c.f[12];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D97Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0036D97Cu) [[unlikely]] return; }
L_0036D97C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 368u);
    set32(c.r[6], c.r[18].w[0] + 384u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D990u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0036D990u) [[unlikely]] return; }
L_0036D990:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9A8u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0036D9A8u) [[unlikely]] return; }
L_0036D9A8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9BCu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x0036D9BCu) [[unlikely]] return; }
L_0036D9BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9C8u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036D9C8u) [[unlikely]] return; }
L_0036D9C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9D4u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036D9D4u) [[unlikely]] return; }
L_0036D9D4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036D9E0u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036D9E0u) [[unlikely]] return; }
L_0036D9E0:
    c.f[11] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[4], c.r[18].w[0] + 176u);
    c.f[10] = ld32((c.r[29].w[0] + 36u));
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 20u));
    c.f[4] = ld32((c.r[29].w[0] + 24u));
    c.f[5] = ld32((c.r[29].w[0] + 28u));
    c.f[6] = ld32((c.r[29].w[0]));
    c.f[7] = ld32((c.r[29].w[0] + 4u));
    c.f[8] = ld32((c.r[29].w[0] + 8u));
    c.f[9] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[29].w[0] + 48u), c.f[11]);
    st32((c.r[29].w[0] + 52u), c.f[10]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 60u), c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[2]);
    st32((c.r[29].w[0] + 68u), c.f[3]);
    st32((c.r[29].w[0] + 72u), c.f[4]);
    st32((c.r[29].w[0] + 76u), c.f[5]);
    st32((c.r[29].w[0] + 80u), c.f[6]);
    st32((c.r[29].w[0] + 84u), c.f[7]);
    st32((c.r[29].w[0] + 88u), c.f[8]);
    st32((c.r[29].w[0] + 92u), c.f[9]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DA50u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0036DA50u) [[unlikely]] return; }
L_0036DA50:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DA70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DA90; } }
    st32((c.r[4].w[0] + 504u), c.f[12]);
    c.budget -= 1;
L_0036DA90:
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DAA4; } }
    st32((c.r[4].w[0] + 508u), c.f[13]);
    c.budget -= 1;
L_0036DAA4:
    fpu_compare(c, fp::key(c.f[14]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DAB8; } }
    st32((c.r[4].w[0] + 512u), c.f[14]);
    c.budget -= 1;
L_0036DAB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DAC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DAE0; } }
    st32((c.r[4].w[0] + 516u), c.f[12]);
    c.budget -= 1;
L_0036DAE0:
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DAF4; } }
    st32((c.r[4].w[0] + 520u), c.f[13]);
    c.budget -= 1;
L_0036DAF4:
    fpu_compare(c, fp::key(c.f[14]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DB08; } }
    st32((c.r[4].w[0] + 524u), c.f[14]);
    c.budget -= 1;
L_0036DB08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DB10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DB30; } }
    st32((c.r[4].w[0] + 528u), c.f[12]);
    c.budget -= 1;
L_0036DB30:
    fpu_compare(c, fp::key(c.f[13]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DB44; } }
    st32((c.r[4].w[0] + 532u), c.f[13]);
    c.budget -= 1;
L_0036DB44:
    fpu_compare(c, fp::key(c.f[14]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DB58; } }
    st32((c.r[4].w[0] + 536u), c.f[14]);
    c.budget -= 1;
L_0036DB58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DB60:
    c.f[2] = ld32((c.r[4].w[0] + 304u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 504u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DB88; } }
    st32((c.r[5].w[0]), c.f[2]);
    c.budget -= 1;
L_0036DB88:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 308u));
    c.f[1] = ld32((c.r[4].w[0] + 508u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DBB0; } }
    st32((c.r[5].w[0] + 4u), c.f[2]);
    c.budget -= 1;
L_0036DBB0:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 312u));
    c.f[1] = ld32((c.r[4].w[0] + 512u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DBD8; } }
    st32((c.r[5].w[0] + 8u), c.f[2]);
    c.budget -= 1;
L_0036DBD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DBE0:
    c.f[2] = ld32((c.r[4].w[0] + 320u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 516u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DC08; } }
    st32((c.r[5].w[0]), c.f[2]);
    c.budget -= 1;
L_0036DC08:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 324u));
    c.f[1] = ld32((c.r[4].w[0] + 520u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DC30; } }
    st32((c.r[5].w[0] + 4u), c.f[2]);
    c.budget -= 1;
L_0036DC30:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 328u));
    c.f[1] = ld32((c.r[4].w[0] + 524u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DC58; } }
    st32((c.r[5].w[0] + 8u), c.f[2]);
    c.budget -= 1;
L_0036DC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DC60:
    c.f[2] = ld32((c.r[4].w[0] + 336u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 528u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DC88; } }
    st32((c.r[5].w[0]), c.f[2]);
    c.budget -= 1;
L_0036DC88:
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = ld32((c.r[4].w[0] + 340u));
    c.f[1] = ld32((c.r[4].w[0] + 532u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DCB0; } }
    st32((c.r[5].w[0] + 4u), c.f[2]);
    c.budget -= 1;
L_0036DCB0:
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0] + 344u));
    c.f[1] = ld32((c.r[4].w[0] + 536u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DCD8; } }
    st32((c.r[5].w[0] + 8u), c.f[2]);
    c.budget -= 1;
L_0036DCD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[4].w[0] + 304u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD00u);  if (depth < kMaxDepth) unit_008A(c, 229u, depth + 1u); else { c.pc = 0x0032AF60u; return; } if (c.pc != 0x0036DD00u) [[unlikely]] return; }
L_0036DD00:
    st32((c.r[16].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DD18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[4].w[0] + 320u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD38u);  if (depth < kMaxDepth) unit_008A(c, 229u, depth + 1u); else { c.pc = 0x0032AF60u; return; } if (c.pc != 0x0036DD38u) [[unlikely]] return; }
L_0036DD38:
    st32((c.r[16].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DD50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DD58:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD84u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0036DD84u) [[unlikely]] return; }
L_0036DD84:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DD90u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036DD90u) [[unlikely]] return; }
L_0036DD90:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDA4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0036DDA4u) [[unlikely]] return; }
L_0036DDA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DDB8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0036DDB8u) [[unlikely]] return; }
L_0036DDB8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DDD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DDE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE0Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0036DE0Cu) [[unlikely]] return; }
L_0036DE0C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE18u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036DE18u) [[unlikely]] return; }
L_0036DE18:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE2Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0036DE2Cu) [[unlikely]] return; }
L_0036DE2C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE40u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0036DE40u) [[unlikely]] return; }
L_0036DE40:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DE60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DE68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DE70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DE78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE90u);  if (depth < kMaxDepth) unit_009B(c, 316u, depth + 1u); else { c.pc = 0x0036DFF8u; return; } if (c.pc != 0x0036DE90u) [[unlikely]] return; }
L_0036DE90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DE9Cu);  if (depth < kMaxDepth) unit_009B(c, 326u, depth + 1u); else { c.pc = 0x0036E228u; return; } if (c.pc != 0x0036DE9Cu) [[unlikely]] return; }
L_0036DE9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DEA8u);  if (depth < kMaxDepth) unit_009B(c, 329u, depth + 1u); else { c.pc = 0x0036E318u; return; } if (c.pc != 0x0036DEA8u) [[unlikely]] return; }
L_0036DEA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DED8u);  if (depth < kMaxDepth) unit_009B(c, 322u, depth + 1u); else { c.pc = 0x0036E100u; return; } if (c.pc != 0x0036DED8u) [[unlikely]] return; }
L_0036DED8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DEE4u);  if (depth < kMaxDepth) unit_009B(c, 327u, depth + 1u); else { c.pc = 0x0036E250u; return; } if (c.pc != 0x0036DEE4u) [[unlikely]] return; }
L_0036DEE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036DEF0u);  if (depth < kMaxDepth) unit_009B(c, 330u, depth + 1u); else { c.pc = 0x0036E340u; return; } if (c.pc != 0x0036DEF0u) [[unlikely]] return; }
L_0036DEF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DF08:
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 588u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 656u), c.r[2].w[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036DF44; } }
    c.f[0] = ld32((c.r[4].w[0] + 584u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036DF50; } }
L_0036DF44:
    st32((c.r[4].w[0] + 660u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DF54; } }
L_0036DF50:
    st32((c.r[4].w[0] + 660u), c.f[1]);
    c.budget -= 1;
L_0036DF54:
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 672u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 668u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 101ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036DF7C; } }
    set32(c.r[2], 0u + 100u);
    st32((c.r[4].w[0] + 676u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DF94; } }
L_0036DF7C:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_0036DF90; } }
    st32((c.r[4].w[0] + 676u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DF94; } }
L_0036DF90:
    st32((c.r[4].w[0] + 676u), c.r[7].w[0]);
    c.budget -= 1;
L_0036DF94:
    st32((c.r[4].w[0] + 680u), c.r[8].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DFA0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[4].w[0] + 656u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 664u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 101ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 668u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 672u), c.r[6].w[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036DFD4; } }
    set32(c.r[2], 0u + 100u);
    st32((c.r[4].w[0] + 676u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DFEC; } }
L_0036DFD4:
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { goto L_0036DFE8; } }
    st32((c.r[4].w[0] + 676u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036DFEC; } }
L_0036DFE8:
    st32((c.r[4].w[0] + 676u), c.r[7].w[0]);
    c.budget -= 1;
L_0036DFEC:
    st32((c.r[4].w[0] + 680u), c.r[8].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036DFF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 680u), 0u);
    st32((c.r[4].w[0] + 660u), c.f[0]);
    st32((c.r[4].w[0] + 668u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 656u), 0u);
    st32((c.r[4].w[0] + 664u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 672u), 0u);
    st32((c.r[4].w[0] + 676u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E028:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.f[12] = ld32((c.r[4].w[0] + 660u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 14;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036E06C; } }
    c.f[20] = c.f[12];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E09C; } }
L_0036E06C:
    c.f[0] = ld32((c.r[4].w[0] + 664u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 584u));
    c.f[1] = ld32((c.r[4].w[0] + 588u));
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[3]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[20] = fp::add(c.f[20], c.f[3]);
    c.budget -= 12;
L_0036E09C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E0ACu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0036E0ACu) [[unlikely]] return; }
L_0036E0AC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E0B8u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0036E0B8u) [[unlikely]] return; }
L_0036E0B8:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E0CCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0036E0CCu) [[unlikely]] return; }
L_0036E0CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E0E0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0036E0E0u) [[unlikely]] return; }
L_0036E0E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E100:
    set32(c.r[2], ld32((c.r[4].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E164; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 668u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 672u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 668u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036E164; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 680u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E13C; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 500u), c.r[2].w[0]);
    c.budget -= 2;
L_0036E13C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 668u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 660u), c.f[0]);
    st32((c.r[4].w[0] + 680u), 0u);
    st32((c.r[4].w[0] + 656u), 0u);
    st32((c.r[4].w[0] + 664u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 672u), 0u);
    st32((c.r[4].w[0] + 676u), 0u);
    c.budget -= 10;
L_0036E164:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E170:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 660u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E1DC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 664u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036E1A8; } }
    c.f[0] = c.f[1];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E1A8:
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[3] = ld32((c.r[4].w[0] + 584u));
    c.f[0] = ld32((c.r[4].w[0] + 588u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 13;
L_0036E1DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E1E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42F00000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 684u), c.r[2].w[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E20C; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0036E20C:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 700u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 688u), c.f[12]);
    st32((c.r[4].w[0] + 692u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 696u), c.r[5].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E228:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 700u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 692u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 684u), 0u);
    st32((c.r[4].w[0] + 688u), 0u);
    st32((c.r[4].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E250:
    set32(c.r[2], ld32((c.r[4].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E294; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 692u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 696u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 692u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036E294; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 700u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 692u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 684u), 0u);
    st32((c.r[4].w[0] + 688u), 0u);
    st32((c.r[4].w[0] + 696u), c.r[3].w[0]);
    c.budget -= 7;
L_0036E294:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E2A0:
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[10], 0u + 13248u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[10].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 14208u);
    st32((c.r[8].w[0] + 704u), c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 8954u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036E2F0; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[10].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8954u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[8].w[0] + 708u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E2F4; } }
L_0036E2F0:
    st32((c.r[8].w[0] + 708u), c.r[9].w[0]);
    c.budget -= 1;
L_0036E2F4:
    c.r[2].d[0] = c.r[6].sd[0] < 67ll ? 1ull : 0ull;
    set32(c.r[3], 0u + 66u);
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    set32(c.r[4], 0u - 1u);
    st32((c.r[8].w[0] + 720u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 712u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 716u), c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E318:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 716u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 720u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 704u), 0u);
    st32((c.r[4].w[0] + 708u), 0u);
    st32((c.r[4].w[0] + 712u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E340:
    set32(c.r[2], ld32((c.r[4].w[0] + 704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036E384; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 716u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 720u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 716u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036E384; } }
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 720u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 716u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 704u), 0u);
    st32((c.r[4].w[0] + 708u), 0u);
    st32((c.r[4].w[0] + 712u), 0u);
    c.budget -= 7;
L_0036E384:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E390:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[2].w[0] + 14208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 13248u);
    set32(c.r[3], ld32((c.r[16].w[0] + 708u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036E45C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 712u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E3E0u);  if (depth < kMaxDepth) unit_0048(c, 165u, depth + 1u); else { c.pc = 0x002223E0u; return; } if (c.pc != 0x0036E3E0u) [[unlikely]] return; }
L_0036E3E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 708u)));
    set32(c.r[11], 0u + 268u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] - 14152u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E438u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0036E438u) [[unlikely]] return; }
L_0036E438:
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E478; } }
L_0036E45C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 720u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 716u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 704u), 0u);
    st32((c.r[16].w[0] + 708u), 0u);
    st32((c.r[16].w[0] + 712u), 0u);
    c.budget -= 7;
L_0036E478:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E498:
    set32(c.r[29], c.r[29].w[0] - 816u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 800u), c.f[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 17248u)));
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 704u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E4D4u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x0036E4D4u) [[unlikely]] return; }
L_0036E4D4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0036E9AC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 14208u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E50Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0036E50Cu) [[unlikely]] return; }
L_0036E50C:
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E524u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036E524u) [[unlikely]] return; }
L_0036E524:
    c.f[2] = ld32((c.r[29].w[0] + 528u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 536u));
    c.f[3] = ld32((c.r[29].w[0] + 128u));
    c.f[4] = ld32((c.r[29].w[0] + 132u));
    c.f[5] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    st32((c.r[29].w[0] + 540u), 0u);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    st32((c.r[29].w[0] + 528u), c.f[2]);
    st32((c.r[29].w[0] + 532u), c.f[1]);
    st32((c.r[29].w[0] + 536u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E568u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x0036E568u) [[unlikely]] return; }
L_0036E568:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E5AC; } }
    c.f[0] = ld32((c.r[2].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E5AC; } }
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036E600; } }
L_0036E5AC:
    set32(c.r[16], c.r[29].w[0] + 544u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E5C0u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x0036E5C0u) [[unlikely]] return; }
L_0036E5C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 608u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 604u), c.f[0]);
    st32((c.r[29].w[0] + 592u), 0u);
    st32((c.r[29].w[0] + 596u), 0u);
    st32((c.r[29].w[0] + 600u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E5ECu);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x0036E5ECu) [[unlikely]] return; }
L_0036E5EC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036E600u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0036E600u) [[unlikely]] return; }
L_0036E600:
    c.f[0] = ld32((c.r[18].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[2] = c.r[1].w[0];
    c.f[5] = ld32((c.r[29].w[0] + 532u));
    c.f[3] = fp::add(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 672u), c.f[3]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 676u), c.f[0]);
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[29].w[0] + 684u), 0u);
    c.f[4] = fp::add(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[5]));
    st32((c.r[29].w[0] + 680u), c.f[4]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 688u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 692u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[29].w[0] + 700u), 0u);
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 696u), c.f[2]);
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E6D4; } }
    c.f[0] = fp::add(c.f[1], c.f[20]);
    fpu_compare(c, fp::key(c.f[5]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E6D4; } }
    c.f[0] = fp::sub(c.f[3], c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E6D4; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E6D4; } }
    c.f[0] = fp::sub(c.f[4], c.f[20]);
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E6D4; } }
    c.f[0] = fp::add(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036E914; } }
L_0036E6D4:
    c.f[0] = ld32((c.r[29].w[0] + 676u));
    c.f[1] = ld32((c.r[29].w[0] + 532u));
    c.f[5] = c.f[0];
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.f[3] = c.f[1];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E770; } }
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E770; } }
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E770; } }
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E770; } }
    c.f[0] = ld32((c.r[29].w[0] + 680u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E770; } }
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036E914; } }
L_0036E770:
    c.f[0] = fp::sub(c.f[5], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E7FC; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[5]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E7FC; } }
    c.f[0] = ld32((c.r[29].w[0] + 672u));
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E7FC; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E7FC; } }
    c.f[0] = ld32((c.r[29].w[0] + 680u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E7FC; } }
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036E914; } }
L_0036E7FC:
    c.f[0] = ld32((c.r[29].w[0] + 692u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.f[4] = c.f[0];
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E88C; } }
    c.f[0] = fp::add(c.f[4], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E88C; } }
    c.f[0] = ld32((c.r[29].w[0] + 672u));
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E88C; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E88C; } }
    c.f[0] = ld32((c.r[29].w[0] + 680u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E88C; } }
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036E914; } }
L_0036E88C:
    c.f[0] = fp::sub(c.f[5], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E920; } }
    c.f[0] = fp::add(c.f[4], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E920; } }
    c.f[0] = ld32((c.r[29].w[0] + 672u));
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E920; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E920; } }
    c.f[2] = ld32((c.r[29].w[0] + 680u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E920; } }
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E920; } }
L_0036E914:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036E9B0; } }
L_0036E920:
    c.f[0] = fp::sub(c.f[5], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E9AC; } }
    c.f[0] = fp::add(c.f[4], c.f[20]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E9AC; } }
    c.f[0] = ld32((c.r[29].w[0] + 672u));
    c.f[1] = ld32((c.r[29].w[0] + 528u));
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E9AC; } }
    c.f[0] = ld32((c.r[29].w[0] + 688u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E9AC; } }
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    c.f[0] = ld32((c.r[29].w[0] + 696u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036E9AC; } }
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036E9B0; } }
L_0036E9AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036E9B0:
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 704u));
    c.f[20] = ld32((c.r[29].w[0] + 800u));
    set32(c.r[29], c.r[29].w[0] + 816u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036E9D8:
    set32(c.r[29], c.r[29].w[0] - 400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] << 16);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    set32(c.r[4], ld32((c.r[2].w[0] - 17248u)));
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 3u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    st32((c.r[29].w[0] + 384u), c.f[20]);
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA28u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x0036EA28u) [[unlikely]] return; }
L_0036EA28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EA48u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x0036EA48u) [[unlikely]] return; }
L_0036EA48:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], c.r[29].w[0] + 12u);
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[30], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[22], c.r[29].w[0] + 128u);
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[23], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 204u), c.r[2].w[0]);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[29].w[0] + 112u);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 196u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[29].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 40u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 28u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 42;
L_0036EAF0:
    st32((c.r[18].w[0]), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EB08u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0036EB08u) [[unlikely]] return; }
L_0036EB08:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EAF0u | kUnwind; return; } goto L_0036EAF0; } }
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.f[11] = ld32((c.r[29].w[0]));
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    c.f[10] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[19], 0u + 3u);
    c.f[9] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[3] = ld32((c.r[29].w[0] + 32u));
    c.f[4] = ld32((c.r[29].w[0] + 36u));
    c.f[5] = ld32((c.r[29].w[0] + 40u));
    c.f[6] = ld32((c.r[29].w[0] + 48u));
    c.f[7] = ld32((c.r[29].w[0] + 52u));
    c.f[8] = ld32((c.r[29].w[0] + 56u));
    st32((c.r[29].w[0] + 88u), c.f[2]);
    st32((c.r[29].w[0] + 96u), c.f[3]);
    st32((c.r[29].w[0] + 64u), c.f[11]);
    st32((c.r[29].w[0] + 68u), c.f[10]);
    st32((c.r[29].w[0] + 72u), c.f[9]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[29].w[0] + 84u), c.f[1]);
    st32((c.r[29].w[0] + 100u), c.f[4]);
    st32((c.r[29].w[0] + 104u), c.f[5]);
    st32((c.r[29].w[0] + 112u), c.f[6]);
    st32((c.r[29].w[0] + 116u), c.f[7]);
    st32((c.r[29].w[0] + 120u), c.f[8]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[20] = c.f[3];
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[29].w[0] + 12u), c.f[3]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[29].w[0] + 28u), c.f[3]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 44u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.f[2] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[29].w[0] + 60u), c.f[3]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    st32((c.r[29].w[0] + 76u), c.f[3]);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.budget -= 65;
L_0036EC20:
    st32((c.r[18].w[0]), c.f[20]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EC38u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0036EC38u) [[unlikely]] return; }
L_0036EC38:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EC20u | kUnwind; return; } goto L_0036EC20; } }
    c.f[11] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[10] = ld32((c.r[29].w[0] + 4u));
    c.r[6].d[0] = 0ull | 65535ull;
    c.f[9] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[3] = ld32((c.r[29].w[0] + 32u));
    c.f[4] = ld32((c.r[29].w[0] + 36u));
    c.f[5] = ld32((c.r[29].w[0] + 40u));
    c.f[6] = ld32((c.r[29].w[0] + 48u));
    c.f[7] = ld32((c.r[29].w[0] + 52u));
    c.f[8] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[5], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[29].w[0] + 128u), c.f[11]);
    st32((c.r[29].w[0] + 132u), c.f[10]);
    st32((c.r[29].w[0] + 136u), c.f[9]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[1]);
    st32((c.r[29].w[0] + 152u), c.f[2]);
    st32((c.r[29].w[0] + 160u), c.f[3]);
    st32((c.r[29].w[0] + 164u), c.f[4]);
    st32((c.r[29].w[0] + 168u), c.f[5]);
    st32((c.r[29].w[0] + 176u), c.f[6]);
    st32((c.r[29].w[0] + 180u), c.f[7]);
    st32((c.r[29].w[0] + 184u), c.f[8]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECC0u);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ECC0u) [[unlikely]] return; }
L_0036ECC0:
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.r[6].d[0] = 0ull | 65535ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECD4u);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ECD4u) [[unlikely]] return; }
L_0036ECD4:
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.r[6].d[0] = 0ull | 65535ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 208u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECE8u);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ECE8u) [[unlikely]] return; }
L_0036ECE8:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ECFCu);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ECFCu) [[unlikely]] return; }
L_0036ECFC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED10u);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ED10u) [[unlikely]] return; }
L_0036ED10:
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED24u);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ED24u) [[unlikely]] return; }
L_0036ED24:
    set32(c.r[4], ld32((c.r[29].w[0] + 192u)));
    c.r[6].d[0] = 0ull | 65535ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED38u);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ED38u) [[unlikely]] return; }
L_0036ED38:
    set32(c.r[4], ld32((c.r[29].w[0] + 196u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED4Cu);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ED4Cu) [[unlikely]] return; }
L_0036ED4C:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED60u);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ED60u) [[unlikely]] return; }
L_0036ED60:
    set32(c.r[4], ld32((c.r[29].w[0] + 200u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 65535ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED74u);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ED74u) [[unlikely]] return; }
L_0036ED74:
    set32(c.r[4], ld32((c.r[29].w[0] + 204u)));
    c.r[6].d[0] = 0ull | 65535ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED88u);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ED88u) [[unlikely]] return; }
L_0036ED88:
    set32(c.r[4], ld32((c.r[29].w[0] + 208u)));
    c.r[6].d[0] = 0ull | 65535ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 196u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ED9Cu);  if (depth < kMaxDepth) unit_007D(c, 5u, depth + 1u); else { c.pc = 0x002F4058u; return; } if (c.pc != 0x0036ED9Cu) [[unlikely]] return; }
L_0036ED9C:
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    c.f[20] = ld32((c.r[29].w[0] + 384u));
    set32(c.r[29], c.r[29].w[0] + 400u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036EDD8:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 4u), 0u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036EDF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036EE14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EE14u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0036EE14u) [[unlikely]] return; }
L_0036EE14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036EE28:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[18].w[0] + 24u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[20], 0u + 2u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036EE70; } }
    c.budget -= 1;
L_0036EE68:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.budget -= 2;
L_0036EE70:
    set32(c.r[2], ld32((c.r[18].w[0] + 152u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EED0; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[2].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EE68u | kUnwind; return; } goto L_0036EE68; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 112u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EEACu);  if (depth < kMaxDepth) unit_0084(c, 256u, depth + 1u); else { c.pc = 0x00313900u; return; } if (c.pc != 0x0036EEACu) [[unlikely]] return; }
L_0036EEAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036EEC0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_0036EEC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[18].w[0] + 152u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036EE68u | kUnwind; return; } goto L_0036EE68; } }
L_0036EED0:
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036EEEC; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036EEF0; } }
L_0036EEEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036EEF0:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036EF18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EF38u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036EF38u) [[unlikely]] return; }
L_0036EF38:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EF48u);  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031CD38u; return; } if (c.pc != 0x0036EF48u) [[unlikely]] return; }
L_0036EF48:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036EF60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[16].w[0] - 29252u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036EFCC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2552u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036EFA0u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0036EFA0u) [[unlikely]] return; }
L_0036EFA0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 8728u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[2].w[0] + 300u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 284u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 288u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 24u), 0u);
    st32((c.r[2].w[0] + 292u), 0u);
    st32((c.r[2].w[0] + 296u), 0u);
    st32((c.r[17].w[0] - 29252u), c.r[2].w[0]);
    c.budget -= 11;
L_0036EFCC:
    set32(c.r[2], ld32((c.r[16].w[0] - 29252u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036EFE8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F01Cu);  if (depth < kMaxDepth) unit_009B(c, 432u, depth + 1u); else { c.pc = 0x0036F778u; return; } if (c.pc != 0x0036F01Cu) [[unlikely]] return; }
L_0036F01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F1A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[2].w[0] + 12320u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F038u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0036F038u) [[unlikely]] return; }
L_0036F038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F0AC; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 5012u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F0AC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F05Cu);  if (depth < kMaxDepth) unit_006C(c, 260u, depth + 1u); else { c.pc = 0x002B2BF0u; return; } if (c.pc != 0x0036F05Cu) [[unlikely]] return; }
L_0036F05C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0036F0AC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 5012u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F074u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0036F074u) [[unlikely]] return; }
L_0036F074:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    set32(c.r[16], c.r[16].w[0] + 64u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F094u);  if (depth < kMaxDepth) unit_006C(c, 262u, depth + 1u); else { c.pc = 0x002B2C40u; return; } if (c.pc != 0x0036F094u) [[unlikely]] return; }
L_0036F094:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F0ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F0ACu) [[unlikely]] return; }
L_0036F0AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 17288u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F1A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    set32(c.r[23], 0u - 1u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[19], 0u + 1u);
    set32(c.r[17], 0u + 13u);
    c.budget -= 10;
L_0036F0E8:
    set32(c.r[4], c.r[30].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F0F8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0036F0F8u) [[unlikely]] return; }
L_0036F0F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F190; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9968u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F190; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_0036F190; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F190; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F130u);  if (depth < kMaxDepth) unit_007A(c, 254u, depth + 1u); else { c.pc = 0x002EB718u; return; } if (c.pc != 0x0036F130u) [[unlikely]] return; }
L_0036F130:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F144u);  if (depth < kMaxDepth) unit_007A(c, 249u, depth + 1u); else { c.pc = 0x002EB670u; return; } if (c.pc != 0x0036F144u) [[unlikely]] return; }
L_0036F144:
    st32((c.r[18].w[0] - 17288u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F190; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F15Cu);  if (depth < kMaxDepth) unit_007A(c, 254u, depth + 1u); else { c.pc = 0x002EB718u; return; } if (c.pc != 0x0036F15Cu) [[unlikely]] return; }
L_0036F15C:
    st32((c.r[22].w[0] - 17284u), c.r[2].w[0]);
    st32((c.r[21].w[0] - 17280u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 5008u), c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F170u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0036F170u) [[unlikely]] return; }
L_0036F170:
    set32(c.r[3], ld32((c.r[2].w[0] + 300u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[18].w[0] - 17288u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F190u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F190u) [[unlikely]] return; }
L_0036F190:
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F0E8u | kUnwind; return; } goto L_0036F0E8; } }
L_0036F1A0:
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
L_0036F1D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F1E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2552u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F204u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0036F204u) [[unlikely]] return; }
L_0036F204:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F218:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F238u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036F238u) [[unlikely]] return; }
L_0036F238:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F268u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036F268u) [[unlikely]] return; }
L_0036F268:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F2A0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036F2A0u) [[unlikely]] return; }
L_0036F2A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F2B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F2C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 8728u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[4].w[0] + 300u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 284u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 288u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 292u), 0u);
    st32((c.r[4].w[0] + 296u), 0u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 8728u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[16].w[0] + 300u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036F338; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F338u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036F338u) [[unlikely]] return; }
L_0036F338:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F350:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 64u);
    st32((c.r[4].w[0] + 284u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 296u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 292u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F378:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 28u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 63u);
    c.budget -= 6;
L_0036F390:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036F3BC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F3BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F3BCu) [[unlikely]] return; }
L_0036F3BC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F390u | kUnwind; return; } goto L_0036F390; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 28u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[17], 0u + 63u);
    c.budget -= 6;
L_0036F3F8:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0036F424; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 724u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F420u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F420u) [[unlikely]] return; }
L_0036F420:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_0036F424:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036F3F8u | kUnwind; return; } goto L_0036F3F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 2504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F448u);  if (depth < kMaxDepth) unit_0043(c, 13u, depth + 1u); else { c.pc = 0x0020C328u; return; } if (c.pc != 0x0036F448u) [[unlikely]] return; }
L_0036F448:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F470:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F488u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0036F488u) [[unlikely]] return; }
L_0036F488:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0036F504; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F4ACu) [[unlikely]] return; }
L_0036F4AC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4BCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036F4BCu) [[unlikely]] return; }
L_0036F4BC:
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[16], c.r[16].w[0] - 17840u);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    set32(c.r[5], c.r[17].w[0] + 336u);
    st32((c.r[16].w[0] + 128u), c.f[1]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[16].w[0] + 132u), c.f[2]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F4ECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036F4ECu) [[unlikely]] return; }
L_0036F4EC:
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[16].w[0] + 144u), c.f[1]);
    st32((c.r[16].w[0] + 152u), c.f[0]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    c.budget -= 6;
L_0036F504:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F520:
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[4], c.r[4].w[0] + 28u);
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F544; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0036F544:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F550:
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F570:
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 284u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F5AC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F5AC; } }
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F5AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 14032u)));
    c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F5C8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 14032u), c.r[2].w[0]);
    c.budget -= 2;
L_0036F5C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F5D8:
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F5E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F5F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F600:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F628u);  if (depth < kMaxDepth) unit_009B(c, 429u, depth + 1u); else { c.pc = 0x0036F750u; return; } if (c.pc != 0x0036F628u) [[unlikely]] return; }
L_0036F628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F65C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F638u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0036F638u) [[unlikely]] return; }
L_0036F638:
    set32(c.r[8], ld32((c.r[2].w[0] + 300u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F65Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F65Cu) [[unlikely]] return; }
L_0036F65C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F678:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], c.r[4].w[0] + 28u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[16], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 13;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0036F6FC; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036F6FC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 208u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F6D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F6D8u) [[unlikely]] return; }
L_0036F6D8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 500u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 656u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F6FC; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[2].w[0] + 656u), 0u);
    c.budget -= 2;
L_0036F6FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F718:
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 288u)));
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 296u), c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F738:
    set32(c.r[2], ld32((c.r[4].w[0] + 296u)));
    st32((c.r[4].w[0] + 292u), 0u);
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F750:
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F768:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F778:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 284u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F7C0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 288u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036F7C0; } }
    set32(c.r[2], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F7E0; } }
L_0036F7C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 14032u)));
    c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F7DC; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 14032u), c.r[2].w[0]);
    c.budget -= 2;
L_0036F7DC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036F7E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036F830; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F800u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036F800u) [[unlikely]] return; }
L_0036F800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F830; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 764u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036F824; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12336u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036F830; } }
L_0036F824:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036F834; } }
L_0036F830:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036F834:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F848:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0] + 16u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F864u);  if (depth < kMaxDepth) unit_0049(c, 186u, depth + 1u); else { c.pc = 0x00226610u; return; } if (c.pc != 0x0036F864u) [[unlikely]] return; }
L_0036F864:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0036F8B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F88Cu);  if (depth < kMaxDepth) unit_0049(c, 186u, depth + 1u); else { c.pc = 0x00226610u; return; } if (c.pc != 0x0036F88Cu) [[unlikely]] return; }
L_0036F88C:
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBA030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036F8B4; } }
L_0036F8B0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036F8B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F8C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2408u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F8F4u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0036F8F4u) [[unlikely]] return; }
L_0036F8F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F908:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F928u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036F928u) [[unlikely]] return; }
L_0036F928:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F958u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036F958u) [[unlikely]] return; }
L_0036F958:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036F990u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036F990u) [[unlikely]] return; }
L_0036F990:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F9A8:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F9B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F9C8:
    st32((c.r[4].w[0] + 28u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F9D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F9E8:
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036F9F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FA08:
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FA18:
    st32((c.r[4].w[0] + 40u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FA28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FA48u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0036FA48u) [[unlikely]] return; }
L_0036FA48:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FA54u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0036FA54u) [[unlikely]] return; }
L_0036FA54:
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036FA70; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036FA70:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FA88:
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FA98:
    st32((c.r[4].w[0] + 44u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FAA8:
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 44u));
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036FAD0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036FAD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FAD8:
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FAE8:
    st32((c.r[4].w[0] + 48u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FAF8:
    c.f[0] = ld32((c.r[4].w[0] + 68u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036FB20; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036FB20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FB28:
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FB38:
    st32((c.r[4].w[0] + 52u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FB48:
    c.f[0] = ld32((c.r[4].w[0] + 72u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0036FB70; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0036FB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FB78:
    set32(c.r[2], c.r[4].w[0] + 64u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FB94u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FB94u) [[unlikely]] return; }
L_0036FB94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FBA8:
    set32(c.r[2], c.r[4].w[0] + 80u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FBC4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FBC4u) [[unlikely]] return; }
L_0036FBC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FBD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 64u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FBECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FBECu) [[unlikely]] return; }
L_0036FBEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FC00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FC14u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FC14u) [[unlikely]] return; }
L_0036FC14:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FC28:
    set32(c.r[2], c.r[4].w[0] + 96u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FC44u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FC44u) [[unlikely]] return; }
L_0036FC44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FC58:
    set32(c.r[2], c.r[4].w[0] + 112u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FC74u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FC74u) [[unlikely]] return; }
L_0036FC74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FC88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 96u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FC9Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FC9Cu) [[unlikely]] return; }
L_0036FC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FCB0:
    set32(c.r[2], c.r[4].w[0] + 112u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FCCCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FCCCu) [[unlikely]] return; }
L_0036FCCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FCE0:
    set32(c.r[2], c.r[4].w[0] + 128u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FCFCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FCFCu) [[unlikely]] return; }
L_0036FCFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FD10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 128u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD24u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FD24u) [[unlikely]] return; }
L_0036FD24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FD38:
    set32(c.r[2], c.r[4].w[0] + 144u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD54u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FD54u) [[unlikely]] return; }
L_0036FD54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FD68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 144u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FD7Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0036FD7Cu) [[unlikely]] return; }
L_0036FD7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FD90:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 8832u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FDD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[4].w[0] + 36u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 8832u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 160u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 8832u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[16].w[0] + 160u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0036FE38; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE38u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0036FE38u) [[unlikely]] return; }
L_0036FE38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FE50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FE58:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FE84u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FE84u) [[unlikely]] return; }
L_0036FE84:
    set32(c.r[2], ld32((c.r[16].w[0] + 160u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FEA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036FEA0u) [[unlikely]] return; }
L_0036FEA0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FEB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FEC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FEC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[10], 0u + 268u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    set32(c.r[11], c.r[11].w[0] - 14152u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[7].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 6080u);
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[10].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FF40u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0036FF40u) [[unlikely]] return; }
L_0036FF40:
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FF78:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[16].w[0] - 27196u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036FFC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[4], c.r[4].w[0] - 2456u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036FFB8u);  if (depth < kMaxDepth) unit_0043(c, 8u, depth + 1u); else { c.pc = 0x0020C148u; return; } if (c.pc != 0x0036FFB8u) [[unlikely]] return; }
L_0036FFB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + 8896u);
    st32((c.r[2].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[17].w[0] - 27196u), c.r[2].w[0]);
    c.budget -= 4;
L_0036FFC8:
    set32(c.r[2], ld32((c.r[16].w[0] - 27196u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FFE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036FFF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    [[clang::musttail]] return unit_009C(c, 1u, depth);
}

}
