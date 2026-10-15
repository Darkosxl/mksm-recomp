#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0017[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 68,
    0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191,
    0, 192, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0,
    0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227,
    0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0,
    0, 275, 0, 0, 0, 276, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 315, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340,
    0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384,
    0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 416, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0,
    0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0,
    0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448,
    0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0,
};

void unit_0017(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0015C000;
    case 2u: goto L_0015C004;
    case 3u: goto L_0015C00C;
    case 4u: goto L_0015C038;
    case 5u: goto L_0015C050;
    case 6u: goto L_0015C058;
    case 7u: goto L_0015C070;
    case 8u: goto L_0015C084;
    case 9u: goto L_0015C08C;
    case 10u: goto L_0015C094;
    case 11u: goto L_0015C0A8;
    case 12u: goto L_0015C0B0;
    case 13u: goto L_0015C0C4;
    case 14u: goto L_0015C0CC;
    case 15u: goto L_0015C0DC;
    case 16u: goto L_0015C0EC;
    case 17u: goto L_0015C0FC;
    case 18u: goto L_0015C11C;
    case 19u: goto L_0015C134;
    case 20u: goto L_0015C144;
    case 21u: goto L_0015C15C;
    case 22u: goto L_0015C17C;
    case 23u: goto L_0015C190;
    case 24u: goto L_0015C1A4;
    case 25u: goto L_0015C1F4;
    case 26u: goto L_0015C210;
    case 27u: goto L_0015C228;
    case 28u: goto L_0015C250;
    case 29u: goto L_0015C260;
    case 30u: goto L_0015C270;
    case 31u: goto L_0015C2B4;
    case 32u: goto L_0015C2C8;
    case 33u: goto L_0015C2DC;
    case 34u: goto L_0015C2F0;
    case 35u: goto L_0015C304;
    case 36u: goto L_0015C318;
    case 37u: goto L_0015C378;
    case 38u: goto L_0015C390;
    case 39u: goto L_0015C3B4;
    case 40u: goto L_0015C3C4;
    case 41u: goto L_0015C3D8;
    case 42u: goto L_0015C420;
    case 43u: goto L_0015C438;
    case 44u: goto L_0015C448;
    case 45u: goto L_0015C458;
    case 46u: goto L_0015C470;
    case 47u: goto L_0015C484;
    case 48u: goto L_0015C490;
    case 49u: goto L_0015C4BC;
    case 50u: goto L_0015C4CC;
    case 51u: goto L_0015C51C;
    case 52u: goto L_0015C528;
    case 53u: goto L_0015C5D4;
    case 54u: goto L_0015C604;
    case 55u: goto L_0015C62C;
    case 56u: goto L_0015C64C;
    case 57u: goto L_0015C664;
    case 58u: goto L_0015C678;
    case 59u: goto L_0015C694;
    case 60u: goto L_0015C6AC;
    case 61u: goto L_0015C6C0;
    case 62u: goto L_0015C6D4;
    case 63u: goto L_0015C748;
    case 64u: goto L_0015C7BC;
    case 65u: goto L_0015C7D4;
    case 66u: goto L_0015C7E0;
    case 67u: goto L_0015C7F4;
    case 68u: goto L_0015C7FC;
    case 69u: goto L_0015C814;
    case 70u: goto L_0015C82C;
    case 71u: goto L_0015C844;
    case 72u: goto L_0015C850;
    case 73u: goto L_0015C860;
    case 74u: goto L_0015C87C;
    case 75u: goto L_0015C888;
    case 76u: goto L_0015C898;
    case 77u: goto L_0015C8A8;
    case 78u: goto L_0015C8BC;
    case 79u: goto L_0015C8D0;
    case 80u: goto L_0015C8E8;
    case 81u: goto L_0015C8F4;
    case 82u: goto L_0015C938;
    case 83u: goto L_0015C970;
    case 84u: goto L_0015C980;
    case 85u: goto L_0015C990;
    case 86u: goto L_0015C9A4;
    case 87u: goto L_0015C9E0;
    case 88u: goto L_0015CA04;
    case 89u: goto L_0015CA14;
    case 90u: goto L_0015CA24;
    case 91u: goto L_0015CA38;
    case 92u: goto L_0015CAF0;
    case 93u: goto L_0015CB08;
    case 94u: goto L_0015CBC8;
    case 95u: goto L_0015CC28;
    case 96u: goto L_0015CC3C;
    case 97u: goto L_0015CC50;
    case 98u: goto L_0015CCE4;
    case 99u: goto L_0015CD30;
    case 100u: goto L_0015CD44;
    case 101u: goto L_0015CD50;
    case 102u: goto L_0015CD58;
    case 103u: goto L_0015CD70;
    case 104u: goto L_0015CD84;
    case 105u: goto L_0015CD94;
    case 106u: goto L_0015CDA4;
    case 107u: goto L_0015CDC4;
    case 108u: goto L_0015CDDC;
    case 109u: goto L_0015CDE4;
    case 110u: goto L_0015CDFC;
    case 111u: goto L_0015CE14;
    case 112u: goto L_0015CE2C;
    case 113u: goto L_0015CE3C;
    case 114u: goto L_0015CE4C;
    case 115u: goto L_0015CE5C;
    case 116u: goto L_0015D088;
    case 117u: goto L_0015D0CC;
    case 118u: goto L_0015D0E4;
    case 119u: goto L_0015D0FC;
    case 120u: goto L_0015D114;
    case 121u: goto L_0015D128;
    case 122u: goto L_0015D138;
    case 123u: goto L_0015D148;
    case 124u: goto L_0015D154;
    case 125u: goto L_0015D220;
    case 126u: goto L_0015D28C;
    case 127u: goto L_0015D2CC;
    case 128u: goto L_0015D2D8;
    case 129u: goto L_0015D4E8;
    case 130u: goto L_0015D4F8;
    case 131u: goto L_0015D528;
    case 132u: goto L_0015D548;
    case 133u: goto L_0015D560;
    case 134u: goto L_0015D568;
    case 135u: goto L_0015D590;
    case 136u: goto L_0015D5A4;
    case 137u: goto L_0015D5B4;
    case 138u: goto L_0015D5C8;
    case 139u: goto L_0015D5E8;
    case 140u: goto L_0015D630;
    case 141u: goto L_0015D640;
    case 142u: goto L_0015D660;
    case 143u: goto L_0015D678;
    case 144u: goto L_0015D688;
    case 145u: goto L_0015D6C0;
    case 146u: goto L_0015D710;
    case 147u: goto L_0015D730;
    case 148u: goto L_0015D750;
    case 149u: goto L_0015D77C;
    case 150u: goto L_0015D788;
    case 151u: goto L_0015D7B4;
    case 152u: goto L_0015D7F8;
    case 153u: goto L_0015D810;
    case 154u: goto L_0015D820;
    case 155u: goto L_0015D834;
    case 156u: goto L_0015D844;
    case 157u: goto L_0015D884;
    case 158u: goto L_0015D894;
    case 159u: goto L_0015D8B0;
    case 160u: goto L_0015D8EC;
    case 161u: goto L_0015D928;
    case 162u: goto L_0015D958;
    case 163u: goto L_0015D984;
    case 164u: goto L_0015D9A8;
    case 165u: goto L_0015D9C0;
    case 166u: goto L_0015D9D8;
    case 167u: goto L_0015D9E8;
    case 168u: goto L_0015D9F8;
    case 169u: goto L_0015DA0C;
    case 170u: goto L_0015DA28;
    case 171u: goto L_0015DA38;
    case 172u: goto L_0015DA48;
    case 173u: goto L_0015DA58;
    case 174u: goto L_0015DA70;
    case 175u: goto L_0015DA7C;
    case 176u: goto L_0015DAA0;
    case 177u: goto L_0015DAB0;
    case 178u: goto L_0015DADC;
    case 179u: goto L_0015DAF0;
    case 180u: goto L_0015DB04;
    case 181u: goto L_0015DB14;
    case 182u: goto L_0015DB50;
    case 183u: goto L_0015DC3C;
    case 184u: goto L_0015DC4C;
    case 185u: goto L_0015DC5C;
    case 186u: goto L_0015DC68;
    case 187u: goto L_0015DCCC;
    case 188u: goto L_0015DCDC;
    case 189u: goto L_0015DCE4;
    case 190u: goto L_0015DCEC;
    case 191u: goto L_0015DCFC;
    case 192u: goto L_0015DD04;
    case 193u: goto L_0015DD14;
    case 194u: goto L_0015DD1C;
    case 195u: goto L_0015DD24;
    case 196u: goto L_0015DD58;
    case 197u: goto L_0015DDA8;
    case 198u: goto L_0015DDC8;
    case 199u: goto L_0015DDE8;
    case 200u: goto L_0015DE18;
    case 201u: goto L_0015DE50;
    case 202u: goto L_0015DE60;
    case 203u: goto L_0015DE74;
    case 204u: goto L_0015DE88;
    case 205u: goto L_0015DE98;
    case 206u: goto L_0015DEB4;
    case 207u: goto L_0015DED8;
    case 208u: goto L_0015DEF0;
    case 209u: goto L_0015DF08;
    case 210u: goto L_0015DF18;
    case 211u: goto L_0015DF28;
    case 212u: goto L_0015DF3C;
    case 213u: goto L_0015DF4C;
    case 214u: goto L_0015DF68;
    case 215u: goto L_0015DF78;
    case 216u: goto L_0015DF88;
    case 217u: goto L_0015DFA0;
    case 218u: goto L_0015DFAC;
    case 219u: goto L_0015DFD0;
    case 220u: goto L_0015DFE0;
    case 221u: goto L_0015E00C;
    case 222u: goto L_0015E020;
    case 223u: goto L_0015E034;
    case 224u: goto L_0015E044;
    case 225u: goto L_0015E080;
    case 226u: goto L_0015E16C;
    case 227u: goto L_0015E17C;
    case 228u: goto L_0015E18C;
    case 229u: goto L_0015E198;
    case 230u: goto L_0015E200;
    case 231u: goto L_0015E208;
    case 232u: goto L_0015E210;
    case 233u: goto L_0015E220;
    case 234u: goto L_0015E228;
    case 235u: goto L_0015E238;
    case 236u: goto L_0015E240;
    case 237u: goto L_0015E248;
    case 238u: goto L_0015E278;
    case 239u: goto L_0015E2DC;
    case 240u: goto L_0015E2F0;
    case 241u: goto L_0015E2F8;
    case 242u: goto L_0015E310;
    case 243u: goto L_0015E324;
    case 244u: goto L_0015E334;
    case 245u: goto L_0015E34C;
    case 246u: goto L_0015E364;
    case 247u: goto L_0015E37C;
    case 248u: goto L_0015E38C;
    case 249u: goto L_0015E3A4;
    case 250u: goto L_0015E3D0;
    case 251u: goto L_0015E3F0;
    case 252u: goto L_0015E404;
    case 253u: goto L_0015E418;
    case 254u: goto L_0015E428;
    case 255u: goto L_0015E438;
    case 256u: goto L_0015E458;
    case 257u: goto L_0015E478;
    case 258u: goto L_0015E494;
    case 259u: goto L_0015E4B0;
    case 260u: goto L_0015E4D0;
    case 261u: goto L_0015E4F4;
    case 262u: goto L_0015E504;
    case 263u: goto L_0015E514;
    case 264u: goto L_0015E524;
    case 265u: goto L_0015E544;
    case 266u: goto L_0015E554;
    case 267u: goto L_0015E570;
    case 268u: goto L_0015E580;
    case 269u: goto L_0015E59C;
    case 270u: goto L_0015E610;
    case 271u: goto L_0015E63C;
    case 272u: goto L_0015E64C;
    case 273u: goto L_0015E660;
    case 274u: goto L_0015E674;
    case 275u: goto L_0015E684;
    case 276u: goto L_0015E694;
    case 277u: goto L_0015E698;
    case 278u: goto L_0015E6B0;
    case 279u: goto L_0015E6C0;
    case 280u: goto L_0015E6D4;
    case 281u: goto L_0015E6FC;
    case 282u: goto L_0015E714;
    case 283u: goto L_0015E750;
    case 284u: goto L_0015E760;
    case 285u: goto L_0015E790;
    case 286u: goto L_0015E79C;
    case 287u: goto L_0015E7B8;
    case 288u: goto L_0015E7D8;
    case 289u: goto L_0015E7F8;
    case 290u: goto L_0015E818;
    case 291u: goto L_0015E838;
    case 292u: goto L_0015E858;
    case 293u: goto L_0015E878;
    case 294u: goto L_0015E898;
    case 295u: goto L_0015E8B8;
    case 296u: goto L_0015E8E4;
    case 297u: goto L_0015E904;
    case 298u: goto L_0015E920;
    case 299u: goto L_0015E93C;
    case 300u: goto L_0015E958;
    case 301u: goto L_0015E974;
    case 302u: goto L_0015E994;
    case 303u: goto L_0015E9A4;
    case 304u: goto L_0015E9C0;
    case 305u: goto L_0015E9D0;
    case 306u: goto L_0015E9EC;
    case 307u: goto L_0015EA08;
    case 308u: goto L_0015EA78;
    case 309u: goto L_0015EAA0;
    case 310u: goto L_0015EAAC;
    case 311u: goto L_0015EAC0;
    case 312u: goto L_0015EAD4;
    case 313u: goto L_0015EAE4;
    case 314u: goto L_0015EAF4;
    case 315u: goto L_0015EAF8;
    case 316u: goto L_0015EB10;
    case 317u: goto L_0015EB20;
    case 318u: goto L_0015EB34;
    case 319u: goto L_0015EB5C;
    case 320u: goto L_0015EB74;
    case 321u: goto L_0015EBB0;
    case 322u: goto L_0015EBC0;
    case 323u: goto L_0015EBF0;
    case 324u: goto L_0015EC08;
    case 325u: goto L_0015EC28;
    case 326u: goto L_0015EC48;
    case 327u: goto L_0015EC68;
    case 328u: goto L_0015EC88;
    case 329u: goto L_0015ECA8;
    case 330u: goto L_0015ECC8;
    case 331u: goto L_0015ECE8;
    case 332u: goto L_0015ED00;
    case 333u: goto L_0015ED18;
    case 334u: goto L_0015ED28;
    case 335u: goto L_0015ED38;
    case 336u: goto L_0015ED90;
    case 337u: goto L_0015EDB0;
    case 338u: goto L_0015EDCC;
    case 339u: goto L_0015EDF4;
    case 340u: goto L_0015EDFC;
    case 341u: goto L_0015EE04;
    case 342u: goto L_0015EE10;
    case 343u: goto L_0015EE20;
    case 344u: goto L_0015EE28;
    case 345u: goto L_0015EE30;
    case 346u: goto L_0015EE48;
    case 347u: goto L_0015EE78;
    case 348u: goto L_0015EE98;
    case 349u: goto L_0015EEB0;
    case 350u: goto L_0015EEC8;
    case 351u: goto L_0015EEDC;
    case 352u: goto L_0015EEF0;
    case 353u: goto L_0015EF08;
    case 354u: goto L_0015EF20;
    case 355u: goto L_0015EF34;
    case 356u: goto L_0015EF44;
    case 357u: goto L_0015EF58;
    case 358u: goto L_0015EF74;
    case 359u: goto L_0015EF88;
    case 360u: goto L_0015EFB0;
    case 361u: goto L_0015EFC4;
    case 362u: goto L_0015EFD4;
    case 363u: goto L_0015EFE8;
    case 364u: goto L_0015EFF8;
    case 365u: goto L_0015F018;
    case 366u: goto L_0015F040;
    case 367u: goto L_0015F058;
    case 368u: goto L_0015F0A0;
    case 369u: goto L_0015F0B0;
    case 370u: goto L_0015F0E0;
    case 371u: goto L_0015F128;
    case 372u: goto L_0015F138;
    case 373u: goto L_0015F168;
    case 374u: goto L_0015F280;
    case 375u: goto L_0015F2C0;
    case 376u: goto L_0015F2FC;
    case 377u: goto L_0015F30C;
    case 378u: goto L_0015F33C;
    case 379u: goto L_0015F34C;
    case 380u: goto L_0015F3B0;
    case 381u: goto L_0015F3C4;
    case 382u: goto L_0015F3D8;
    case 383u: goto L_0015F3E8;
    case 384u: goto L_0015F3FC;
    case 385u: goto L_0015F414;
    case 386u: goto L_0015F444;
    case 387u: goto L_0015F454;
    case 388u: goto L_0015F464;
    case 389u: goto L_0015F490;
    case 390u: goto L_0015F51C;
    case 391u: goto L_0015F52C;
    case 392u: goto L_0015F544;
    case 393u: goto L_0015F550;
    case 394u: goto L_0015F55C;
    case 395u: goto L_0015F58C;
    case 396u: goto L_0015F594;
    case 397u: goto L_0015F5A8;
    case 398u: goto L_0015F5C0;
    case 399u: goto L_0015F5D4;
    case 400u: goto L_0015F5DC;
    case 401u: goto L_0015F5F4;
    case 402u: goto L_0015F608;
    case 403u: goto L_0015F618;
    case 404u: goto L_0015F648;
    case 405u: goto L_0015F690;
    case 406u: goto L_0015F6A8;
    case 407u: goto L_0015F6C0;
    case 408u: goto L_0015F6CC;
    case 409u: goto L_0015F6F0;
    case 410u: goto L_0015F704;
    case 411u: goto L_0015F74C;
    case 412u: goto L_0015F77C;
    case 413u: goto L_0015F7BC;
    case 414u: goto L_0015F7D8;
    case 415u: goto L_0015F7EC;
    case 416u: goto L_0015F804;
    case 417u: goto L_0015F80C;
    case 418u: goto L_0015F824;
    case 419u: goto L_0015F83C;
    case 420u: goto L_0015F850;
    case 421u: goto L_0015F860;
    case 422u: goto L_0015F870;
    case 423u: goto L_0015F8A0;
    case 424u: goto L_0015F914;
    case 425u: goto L_0015F998;
    case 426u: goto L_0015F9F0;
    case 427u: goto L_0015FA08;
    case 428u: goto L_0015FA20;
    case 429u: goto L_0015FA34;
    case 430u: goto L_0015FC04;
    case 431u: goto L_0015FC14;
    case 432u: goto L_0015FC24;
    case 433u: goto L_0015FC88;
    case 434u: goto L_0015FC94;
    case 435u: goto L_0015FCA8;
    case 436u: goto L_0015FCBC;
    case 437u: goto L_0015FCCC;
    case 438u: goto L_0015FCE4;
    case 439u: goto L_0015FCF4;
    case 440u: goto L_0015FD08;
    case 441u: goto L_0015FD1C;
    case 442u: goto L_0015FD30;
    case 443u: goto L_0015FD3C;
    case 444u: goto L_0015FD48;
    case 445u: goto L_0015FD64;
    case 446u: goto L_0015FDCC;
    case 447u: goto L_0015FDE8;
    case 448u: goto L_0015FDFC;
    case 449u: goto L_0015FE0C;
    case 450u: goto L_0015FE1C;
    case 451u: goto L_0015FE60;
    case 452u: goto L_0015FEB4;
    case 453u: goto L_0015FED4;
    case 454u: goto L_0015FF00;
    case 455u: goto L_0015FF1C;
    case 456u: goto L_0015FF30;
    case 457u: goto L_0015FF44;
    case 458u: goto L_0015FF5C;
    case 459u: goto L_0015FF64;
    case 460u: goto L_0015FF78;
    case 461u: goto L_0015FFB0;
    case 462u: goto L_0015FFE0;
    case 463u: goto L_0015FFF4;
    default: bad_entry(c, 0x0015C000u); return;
    }
L_0015C000:
    c.budget -= 1;
L_0015C004:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_0015C030; } }
L_0015C00C:
    set32(c.r[2], 0u + 1561u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015C024; } }
    c.r[2].d[0] = c.r[4].sd[0] < 95ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C030; } }
L_0015C024:
    set32(c.r[2], 0u + 1560u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015C08C; } }
L_0015C030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C038u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C038u) [[unlikely]] return; }
L_0015C038:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C050u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C050u) [[unlikely]] return; }
L_0015C050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C058u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C058u) [[unlikely]] return; }
L_0015C058:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C070u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C070u) [[unlikely]] return; }
L_0015C070:
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C084u);  if (depth < kMaxDepth) unit_008A(c, 267u, depth + 1u); else { c.pc = 0x0032B7E8u; return; } if (c.pc != 0x0015C084u) [[unlikely]] return; }
L_0015C084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C6F8; } }
L_0015C08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C094u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C094u) [[unlikely]] return; }
L_0015C094:
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0A8u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C0A8u) [[unlikely]] return; }
L_0015C0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0B0u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C0B0u) [[unlikely]] return; }
L_0015C0B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0C4u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C0C4u) [[unlikely]] return; }
L_0015C0C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0CCu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C0CCu) [[unlikely]] return; }
L_0015C0CC:
    set32(c.r[5], ld32((c.r[22].w[0] + 2632u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0DCu);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x0015C0DCu) [[unlikely]] return; }
L_0015C0DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0ECu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C0ECu) [[unlikely]] return; }
L_0015C0EC:
    set32(c.r[5], ld32((c.r[22].w[0] + 2632u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0FCu);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x0015C0FCu) [[unlikely]] return; }
L_0015C0FC:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015C13C; } }
L_0015C108:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C11Cu);  if (depth < kMaxDepth) unit_008A(c, 267u, depth + 1u); else { c.pc = 0x0032B7E8u; return; } if (c.pc != 0x0015C11Cu) [[unlikely]] return; }
L_0015C11C:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C134u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015C134u) [[unlikely]] return; }
L_0015C134:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C15C; } }
L_0015C13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C144u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C144u) [[unlikely]] return; }
L_0015C144:
    set32(c.r[16], c.r[29].w[0] + 48u);
    set32(c.r[5], ld32((c.r[22].w[0] + 2632u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C15Cu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C15Cu) [[unlikely]] return; }
L_0015C15C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[25] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C17Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015C17Cu) [[unlikely]] return; }
L_0015C17C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C190u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015C190u) [[unlikely]] return; }
L_0015C190:
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[25];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C1A4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015C1A4u) [[unlikely]] return; }
L_0015C1A4:
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015C1C0; } }
    c.f[0] = c.f[1];
    c.budget -= 1;
L_0015C1C0:
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[24] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015C1DC; } }
    c.f[24] = c.f[1];
    c.budget -= 1;
L_0015C1DC:
    set32(c.r[19], c.r[29].w[0] + 80u);
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C1F4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C1F4u) [[unlikely]] return; }
L_0015C1F4:
    c.f[20] = 0u;
    set32(c.r[18], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C210u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C210u) [[unlikely]] return; }
L_0015C210:
    set32(c.r[17], c.r[29].w[0] + 112u);
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C228u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C228u) [[unlikely]] return; }
L_0015C228:
    set32(c.r[2], 0u + 101u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != c.r[2].d[0];  if (t) { goto L_0015C23C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_0015C23C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[23] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C250u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C250u) [[unlikely]] return; }
L_0015C250:
    c.f[21] = fp::add(c.f[0], c.f[20]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C260u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C260u) [[unlikely]] return; }
L_0015C260:
    c.f[20] = fp::add(c.f[0], c.f[20]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C270u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C270u) [[unlikely]] return; }
L_0015C270:
    c.f[22] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[0] = fp::add(c.f[21], c.f[20]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[22]);
    fpu_div(c, 21u, c.f[21], c.f[0]);
    fpu_div(c, 20u, c.f[20], c.f[0]);
    fpu_div(c, 22u, c.f[22], c.f[0]);
    c.f[12] = fp::mul(c.f[21], c.f[23]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2B4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015C2B4u) [[unlikely]] return; }
L_0015C2B4:
    c.f[12] = fp::mul(c.f[20], c.f[23]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2C8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015C2C8u) [[unlikely]] return; }
L_0015C2C8:
    c.f[12] = fp::mul(c.f[22], c.f[23]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2DCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015C2DCu) [[unlikely]] return; }
L_0015C2DC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2F0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015C2F0u) [[unlikely]] return; }
L_0015C2F0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C304u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015C304u) [[unlikely]] return; }
L_0015C304:
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.f[12] = c.f[25];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C318u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015C318u) [[unlikely]] return; }
L_0015C318:
    set32(c.r[2], ld32((c.r[29].w[0] + 292u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015C334; } }
    st32((c.r[2].w[0] + 4u), c.f[24]);
    c.budget -= 1;
L_0015C334:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 2u);
    st16((c.r[22].w[0] + 2636u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[29].w[0] + 64u);
    st16((c.r[22].w[0] + 2638u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 300u), c.r[3].w[0]);
    set32(c.r[21], 0u + 1u);
    set32(c.r[3], c.r[29].w[0] + 192u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 208u);
    set32(c.r[3], c.r[29].w[0] + 288u);
    c.f[20] = 0u;
    st32((c.r[29].w[0] + 296u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 304u), c.r[3].w[0]);
    c.budget -= 17;
L_0015C378:
    set32(c.r[2], c.r[21].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C3BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C390u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C390u) [[unlikely]] return; }
L_0015C390:
    set32(c.r[30], c.r[21].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 13248u);
    mmi::madd(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C3B4u);  if (depth < kMaxDepth) unit_0012(c, 190u, depth + 1u); else { c.pc = 0x001495A8u; return; } if (c.pc != 0x0015C3B4u) [[unlikely]] return; }
L_0015C3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C4F0; } }
L_0015C3BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C3C4u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C3C4u) [[unlikely]] return; }
L_0015C3C4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C3D8u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C3D8u) [[unlikely]] return; }
L_0015C3D8:
    set32(c.r[2], c.r[21].w[0] + 1u);
    set32(c.r[23], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[2].w[0] << 16);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[3], 0u + 30u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C4F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[16].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[20], c.r[29].w[0] + 160u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], 0u + 13248u);
    mmi::madd(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
L_0015C420:
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C450; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C438u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C438u) [[unlikely]] return; }
L_0015C438:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C448u);  if (depth < kMaxDepth) unit_0012(c, 190u, depth + 1u); else { c.pc = 0x001495A8u; return; } if (c.pc != 0x0015C448u) [[unlikely]] return; }
L_0015C448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C4CC; } }
L_0015C450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C458u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C458u) [[unlikely]] return; }
L_0015C458:
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C470u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C470u) [[unlikely]] return; }
L_0015C470:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C484u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C484u) [[unlikely]] return; }
L_0015C484:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C490u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C490u) [[unlikely]] return; }
L_0015C490:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015C4CC; } }
    st16((c.r[22].w[0] + 2638u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[4], c.r[29].w[0] + 16u);
    st16((c.r[22].w[0] + 2636u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C4BCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015C4BCu) [[unlikely]] return; }
L_0015C4BC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C4CCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015C4CCu) [[unlikely]] return; }
L_0015C4CC:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[18], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], 0u + 30u);
    set32(c.r[19], c.r[19].w[0] + 13248u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C420u | kUnwind; return; } goto L_0015C420; } }
L_0015C4F0:
    set32(c.r[2], c.r[30].w[0] << 16);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[2], 0u + 30u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C378u | kUnwind; return; } goto L_0015C378; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C51Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C51Cu) [[unlikely]] return; }
L_0015C51C:
    set32(c.r[4], ld32((c.r[29].w[0] + 300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C528u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C528u) [[unlikely]] return; }
L_0015C528:
    c.f[1] = ld32((c.r[22].w[0] + 2640u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[3] = ld32((c.r[22].w[0] + 2648u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015C560; } }
    c.f[20] = c.f[3];
    c.budget -= 1;
L_0015C560:
    set32(c.r[3], ld32((c.r[22].w[0] + 2624u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 304u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 308u)));
    st32((c.r[29].w[0] + 176u), c.f[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 296u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 180u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 188u), 0u);
    st32((c.r[29].w[0] + 184u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 192u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 196u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 204u), 0u);
    st32((c.r[29].w[0] + 200u), c.f[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C5D4u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x0015C5D4u) [[unlikely]] return; }
L_0015C5D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[29].w[0] + 220u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C6DC; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[29].w[0] + 224u);
    st32((c.r[22].w[0] + 2652u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 296u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 292u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C604u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C604u) [[unlikely]] return; }
L_0015C604:
    set32(c.r[3], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015C634; } }
    set32(c.r[16], c.r[29].w[0] + 240u);
    set32(c.r[6], ld32((c.r[29].w[0] + 308u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C62Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015C62Cu) [[unlikely]] return; }
L_0015C62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C64C; } }
L_0015C634:
    set32(c.r[16], c.r[29].w[0] + 240u);
    set32(c.r[6], ld32((c.r[29].w[0] + 312u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C64Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015C64Cu) [[unlikely]] return; }
L_0015C64C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 256u);
    set32(c.r[6], ld32((c.r[29].w[0] + 292u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C664u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C664u) [[unlikely]] return; }
L_0015C664:
    c.f[0] = ld32((c.r[22].w[0] + 2644u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C678u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C678u) [[unlikely]] return; }
L_0015C678:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015C698; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C694u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C694u) [[unlikely]] return; }
L_0015C694:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0015C698:
    set32(c.r[16], c.r[29].w[0] + 272u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6ACu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015C6ACu) [[unlikely]] return; }
L_0015C6AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6C0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015C6C0u) [[unlikely]] return; }
L_0015C6C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 292u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6D4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015C6D4u) [[unlikely]] return; }
L_0015C6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C6E0; } }
L_0015C6DC:
    st32((c.r[22].w[0] + 2652u), 0u);
    c.budget -= 1;
L_0015C6E0:
    set32(c.r[3], ld32((c.r[29].w[0] + 292u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.budget -= 6;
L_0015C6F8:
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 320u));
    c.f[25] = ld32((c.r[29].w[0] + 520u));
    c.f[24] = ld32((c.r[29].w[0] + 512u));
    c.f[23] = ld32((c.r[29].w[0] + 504u));
    c.f[22] = ld32((c.r[29].w[0] + 496u));
    c.f[21] = ld32((c.r[29].w[0] + 488u));
    c.f[20] = ld32((c.r[29].w[0] + 480u));
    set32(c.r[29], c.r[29].w[0] + 528u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015C748:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[19].w[0] + 304u);
    st32((c.r[29].w[0] + 392u), c.f[25]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 384u), c.f[24]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[29].w[0] + 360u), c.f[21]);
    st32((c.r[29].w[0] + 352u), c.f[20]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 400u), c.f[26]);
    st32((c.r[29].w[0] + 376u), c.f[23]);
    st32((c.r[29].w[0] + 368u), c.f[22]);
    c.f[25] = 0u;
    set32(c.r[4], ld32((c.r[19].w[0] + 2624u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 2628u)));
    c.f[26] = ld32((c.r[19].w[0] + 2680u));
    c.f[23] = ld32((c.r[19].w[0] + 2664u));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7BCu);  if (depth < kMaxDepth) unit_008B(c, 237u, depth + 1u); else { c.pc = 0x0032E6F0u; return; } if (c.pc != 0x0015C7BCu) [[unlikely]] return; }
L_0015C7BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 2624u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[19].w[0] + 2628u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7D4u);  if (depth < kMaxDepth) unit_008B(c, 242u, depth + 1u); else { c.pc = 0x0032E838u; return; } if (c.pc != 0x0015C7D4u) [[unlikely]] return; }
L_0015C7D4:
    st32((c.r[21].w[0] + 4u), c.f[25]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7E0u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C7E0u) [[unlikely]] return; }
L_0015C7E0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2636u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7F4u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C7F4u) [[unlikely]] return; }
L_0015C7F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7FCu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C7FCu) [[unlikely]] return; }
L_0015C7FC:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2638u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C814u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C814u) [[unlikely]] return; }
L_0015C814:
    set32(c.r[17], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C82Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C82Cu) [[unlikely]] return; }
L_0015C82C:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C844u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C844u) [[unlikely]] return; }
L_0015C844:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C850u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C850u) [[unlikely]] return; }
L_0015C850:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C860u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C860u) [[unlikely]] return; }
L_0015C860:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[21] = fp::add(c.f[0], c.f[1]);
    c.f[20] = fp::add(c.f[20], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C87Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0015C87Cu) [[unlikely]] return; }
L_0015C87C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C888u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0015C888u) [[unlikely]] return; }
L_0015C888:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C898u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0015C898u) [[unlikely]] return; }
L_0015C898:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8A8u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0015C8A8u) [[unlikely]] return; }
L_0015C8A8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8BCu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015C8BCu) [[unlikely]] return; }
L_0015C8BC:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8D0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015C8D0u) [[unlikely]] return; }
L_0015C8D0:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8E8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015C8E8u) [[unlikely]] return; }
L_0015C8E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8F4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015C8F4u) [[unlikely]] return; }
L_0015C8F4:
    c.f[1] = ld32((c.r[19].w[0] + 2660u));
    c.f[24] = c.f[0];
    fpu_compare(c, fp::key(c.f[24]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015C924; } }
    c.f[0] = ld32((c.r[19].w[0] + 2656u));
    c.f[2] = ld32((c.r[19].w[0] + 2664u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[24], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[23] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 6;
L_0015C924:
    st32((c.r[29].w[0] + 176u), c.r[20].w[0]);
    c.f[22] = c.f[25];
    set32(c.r[17], 0u + 1u);
    set32(c.r[30], c.r[29].w[0] + 32u);
    set32(c.r[23], 0u + 13248u);
    c.budget -= 5;
L_0015C938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[20], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[17].w[0], c.r[23].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CA80; } }
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C970u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C970u) [[unlikely]] return; }
L_0015C970:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C980u);  if (depth < kMaxDepth) unit_0012(c, 190u, depth + 1u); else { c.pc = 0x001495A8u; return; } if (c.pc != 0x0015C980u) [[unlikely]] return; }
L_0015C980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CA80; } }
L_0015C988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C990u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015C990u) [[unlikely]] return; }
L_0015C990:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C9A4u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015C9A4u) [[unlikely]] return; }
L_0015C9A4:
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[2].d[0] = c.r[16].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CA80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[16].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[16].w[0], c.r[23].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
L_0015C9E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CA64; } }
    set32(c.r[2], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CA1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA04u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015CA04u) [[unlikely]] return; }
L_0015CA04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA14u);  if (depth < kMaxDepth) unit_0012(c, 190u, depth + 1u); else { c.pc = 0x001495A8u; return; } if (c.pc != 0x0015CA14u) [[unlikely]] return; }
L_0015CA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CA64; } }
L_0015CA1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA24u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015CA24u) [[unlikely]] return; }
L_0015CA24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA38u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015CA38u) [[unlikely]] return; }
L_0015CA38:
    c.f[1] = ld32((c.r[29].w[0] + 116u));
    c.f[2] = c.f[22];
    c.f[0] = ld32((c.r[29].w[0] + 100u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[1] = c.f[1] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CA60; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_0015CA60:
    c.f[22] = c.f[2];
    c.budget -= 1;
L_0015CA64:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 13248u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[18], c.r[18].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C9E0u | kUnwind; return; } goto L_0015C9E0; } }
L_0015CA80:
    set32(c.r[2], c.r[20].w[0] << 16);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[17].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015C938u | kUnwind; return; } goto L_0015C938; } }
    c.f[4] = ld32((c.r[19].w[0] + 2672u));
    c.f[12] = ld32((c.r[19].w[0] + 624u));
    c.f[3] = fp::sub(c.f[22], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[19].w[0] + 2668u));
    c.f[1] = ld32((c.r[19].w[0] + 2676u));
    c.f[12] = fp::mul(c.f[12], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    fpu_div(c, 12u, c.f[12], c.f[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[23] = fp::add(c.f[23], c.f[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CAF0u);  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00207700u; return; } if (c.pc != 0x0015CAF0u) [[unlikely]] return; }
L_0015CAF0:
    c.f[21] = ld32((c.r[19].w[0] + 584u));
    c.f[1] = fp::add(c.f[24], c.f[23]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB08u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x0015CB08u) [[unlikely]] return; }
L_0015CB08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CB14; } }
    c.f[21] = ld32((c.r[19].w[0] + 2588u));
    c.budget -= 1;
L_0015CB14:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CB30; } }
    c.f[20] = c.f[21];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015CB48; } }
L_0015CB30:
    c.f[0] = ld32((c.r[19].w[0] + 588u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CB48; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0015CB48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[3].w[0] + 12224u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], 0u + 73u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015CBF4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2632u)));
    set32(c.r[3], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] + 14208u);
    set32(c.r[5], 0u + 1559u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0015CB98; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_0015CBBC; } }
L_0015CB98:
    set32(c.r[2], 0u + 1561u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015CBB0; } }
    c.r[2].d[0] = c.r[4].sd[0] < 95ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CBBC; } }
L_0015CBB0:
    set32(c.r[2], 0u + 1560u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015CBF4; } }
L_0015CBBC:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CBC8u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x0015CBC8u) [[unlikely]] return; }
L_0015CBC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CBEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CBF4; } }
L_0015CBEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_0015CBF4:
    c.f[2] = ld32((c.r[19].w[0] + 304u));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[3] = ld32((c.r[19].w[0] + 312u));
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC28u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0015CC28u) [[unlikely]] return; }
L_0015CC28:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC3Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015CC3Cu) [[unlikely]] return; }
L_0015CC3C:
    set32(c.r[6], ld32((c.r[29].w[0] + 176u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC50u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015CC50u) [[unlikely]] return; }
L_0015CC50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 15u);
    set32(c.r[3], c.r[2].w[0] + 12224u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0015CC90; } }
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5D60000u);
    c.r[1].d[0] = c.r[1].d[0] | 4096ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CC90; } }
    st32((c.r[21].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_0015CC90:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0015CCB0; } }
    c.f[0] = ld32((c.r[19].w[0] + 2660u));
    fpu_div(c, 0u, c.f[24], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[26]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015CCB8; } }
L_0015CCB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_0015CCB8:
    set32(c.r[3], ld32((c.r[19].w[0] + 2624u)));
    c.f[1] = fp::mul(c.f[25], c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 2684u));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 4u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CCE4u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x0015CCE4u) [[unlikely]] return; }
L_0015CCE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D014; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2652u)));
    c.f[20] = 0u;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CDBC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CDBC; } }
    set32(c.r[16], c.r[29].w[0] + 96u);
    set32(c.r[5], ld32((c.r[29].w[0] + 176u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD30u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015CD30u) [[unlikely]] return; }
L_0015CD30:
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD44u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015CD44u) [[unlikely]] return; }
L_0015CD44:
    set32(c.r[17], 0u + 1u);
    set32(c.r[18], c.r[29].w[0] + 112u);
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.budget -= 3;
L_0015CD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD58u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015CD58u) [[unlikely]] return; }
L_0015CD58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD70u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015CD70u) [[unlikely]] return; }
L_0015CD70:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD84u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015CD84u) [[unlikely]] return; }
L_0015CD84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD94u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015CD94u) [[unlikely]] return; }
L_0015CD94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDA4u);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x0015CDA4u) [[unlikely]] return; }
L_0015CDA4:
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015CD50u | kUnwind; return; } goto L_0015CD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015CE60; } }
L_0015CDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDC4u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015CDC4u) [[unlikely]] return; }
L_0015CDC4:
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDDCu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015CDDCu) [[unlikely]] return; }
L_0015CDDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDE4u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015CDE4u) [[unlikely]] return; }
L_0015CDE4:
    set32(c.r[18], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CDFCu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015CDFCu) [[unlikely]] return; }
L_0015CDFC:
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE14u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015CE14u) [[unlikely]] return; }
L_0015CE14:
    set32(c.r[16], c.r[29].w[0] + 160u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE2Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015CE2Cu) [[unlikely]] return; }
L_0015CE2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE3Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015CE3Cu) [[unlikely]] return; }
L_0015CE3C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE4Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015CE4Cu) [[unlikely]] return; }
L_0015CE4C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE5Cu);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x0015CE5Cu) [[unlikely]] return; }
L_0015CE5C:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0015CE60:
    c.f[0] = ld32((c.r[19].w[0] + 2692u));
    c.f[2] = ld32((c.r[19].w[0] + 2688u));
    c.f[1] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[3] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CF60; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 2736u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 2696u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CEB0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[19].w[0] + 2736u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015CFC0; } }
L_0015CEB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[3].w[0] + 14208u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20948u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CED8; } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 1428u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015CFC0; } }
L_0015CED8:
    c.f[2] = ld32((c.r[19].w[0] + 2708u));
    fpu_compare(c, fp::key(c.f[24]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CF10; } }
    c.f[1] = fp::sub(c.f[2], c.f[24]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015CF14; } }
L_0015CF10:
    c.f[3] = 0u;
    c.budget -= 1;
L_0015CF14:
    c.f[1] = ld32((c.r[19].w[0] + 2732u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CF3C; } }
    c.f[0] = ld32((c.r[19].w[0] + 2700u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015CF48; } }
L_0015CF3C:
    c.f[0] = ld32((c.r[19].w[0] + 2704u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
L_0015CF48:
    st32((c.r[19].w[0] + 2732u), c.f[0]);
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CFC0; } }
    st32((c.r[19].w[0] + 2732u), c.f[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015CFC0; } }
L_0015CF60:
    set32(c.r[2], ld32((c.r[19].w[0] + 2736u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0015CF70; } }
    st32((c.r[19].w[0] + 2736u), 0u);
    c.budget -= 1;
L_0015CF70:
    c.f[1] = ld32((c.r[19].w[0] + 2732u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015CFD8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[5].w[0] + 14208u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20948u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CFB4; } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 1428u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015CFC0; } }
L_0015CFB4:
    c.f[0] = ld32((c.r[19].w[0] + 2704u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 2732u), c.f[0]);
    c.budget -= 3;
L_0015CFC0:
    c.f[1] = ld32((c.r[19].w[0] + 2732u));
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D014; } }
L_0015CFD8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D014; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 14208u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20948u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D010; } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 1428u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015D014; } }
L_0015D010:
    st32((c.r[19].w[0] + 2732u), c.f[0]);
    c.budget -= 1;
L_0015D014:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x460F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D038; } }
    st32((c.r[21].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_0015D038:
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.f[26] = ld32((c.r[29].w[0] + 400u));
    c.f[25] = ld32((c.r[29].w[0] + 392u));
    c.f[24] = ld32((c.r[29].w[0] + 384u));
    c.f[23] = ld32((c.r[29].w[0] + 376u));
    c.f[22] = ld32((c.r[29].w[0] + 368u));
    c.f[21] = ld32((c.r[29].w[0] + 360u));
    c.f[20] = ld32((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 416u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D088:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[21]);
    set32(c.r[18], c.r[19].w[0] + 368u);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 2624u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 2628u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D0CCu);  if (depth < kMaxDepth) unit_008B(c, 237u, depth + 1u); else { c.pc = 0x0032E6F0u; return; } if (c.pc != 0x0015D0CCu) [[unlikely]] return; }
L_0015D0CC:
    set32(c.r[4], ld32((c.r[19].w[0] + 2624u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0] + 2628u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D0E4u);  if (depth < kMaxDepth) unit_008B(c, 242u, depth + 1u); else { c.pc = 0x0032E838u; return; } if (c.pc != 0x0015D0E4u) [[unlikely]] return; }
L_0015D0E4:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D0FCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015D0FCu) [[unlikely]] return; }
L_0015D0FC:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D114u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015D114u) [[unlikely]] return; }
L_0015D114:
    st32((c.r[29].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D128u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015D128u) [[unlikely]] return; }
L_0015D128:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[21] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D138u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015D138u) [[unlikely]] return; }
L_0015D138:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D148u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0015D148u) [[unlikely]] return; }
L_0015D148:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D154u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0015D154u) [[unlikely]] return; }
L_0015D154:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[5] = fp::cvt_w_s(c.f[4]);
    set32(c.r[2], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[4] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[4]);
    c.f[2] = fp::cvt_w_s(c.f[3]);
    set32(c.r[6], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[4] = c.r[6].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    fpu_div(c, 3u, c.f[3], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    fpu_div(c, 4u, c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D220u);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x0015D220u) [[unlikely]] return; }
L_0015D220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D258; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_0015D258:
    set32(c.r[3], ld32((c.r[19].w[0] + 2624u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = ld32((c.r[19].w[0] + 368u));
    set32(c.r[5], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.f[13] = ld32((c.r[19].w[0] + 376u));
    c.f[17] = ld32((c.r[2].w[0] + 24u));
    c.f[14] = ld32((c.r[2].w[0]));
    c.f[15] = ld32((c.r[2].w[0] + 8u));
    c.f[16] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D28Cu);  if (depth < kMaxDepth) unit_008A(c, 6u, depth + 1u); else { c.pc = 0x00328278u; return; } if (c.pc != 0x0015D28Cu) [[unlikely]] return; }
L_0015D28C:
    c.f[1] = ld32((c.r[19].w[0] + 368u));
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[19].w[0] + 376u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[3]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D2CCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015D2CCu) [[unlikely]] return; }
L_0015D2CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D2D8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015D2D8u) [[unlikely]] return; }
L_0015D2D8:
    c.f[4] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0015D304; } }
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D3D8; } }
L_0015D304:
    c.f[1] = c.f[4] ^ fp::kSign;
    c.f[0] = ld32((c.r[19].w[0] + 2712u));
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.f[3] = c.f[1];
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015D4B8; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015D4B8; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D38C; } }
    c.f[1] = ld32((c.r[19].w[0] + 2716u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D38C; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D438; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D438; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D428; } }
L_0015D38C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D438; } }
    c.f[1] = ld32((c.r[19].w[0] + 2716u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D438; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D438; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D428; } }
L_0015D3D8:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D438; } }
    c.f[0] = ld32((c.r[19].w[0] + 2712u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.f[2] = c.f[0];
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D438; } }
    c.f[1] = ld32((c.r[19].w[0] + 2716u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D438; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D438; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[4], c.f[2]);
    c.budget -= 2;
L_0015D428:
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[5] = c.f[0] & fp::kAbs;
    c.budget -= 4;
L_0015D438:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0015D458; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015D4B8; } }
L_0015D458:
    c.f[1] = ld32((c.r[19].w[0] + 2724u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D480; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D4A0; } }
L_0015D480:
    c.f[0] = ld32((c.r[19].w[0] + 2720u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015D4A0; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_div(c, 2u, c.f[0], c.f[1]);
    c.budget -= 3;
L_0015D4A0:
    c.f[0] = ld32((c.r[19].w[0] + 2728u));
    c.f[1] = ld32((c.r[19].w[0] + 308u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 308u), c.f[1]);
    c.budget -= 6;
L_0015D4B8:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D4E8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D4F8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20240u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D528u);  if (depth < kMaxDepth) unit_0013(c, 144u, depth + 1u); else { c.pc = 0x0014D408u; return; } if (c.pc != 0x0015D528u) [[unlikely]] return; }
L_0015D528:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015D548; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D548u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0015D548u) [[unlikely]] return; }
L_0015D548:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D560:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D568:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[5].w[0] + 320u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 304u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D590u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015D590u) [[unlikely]] return; }
L_0015D590:
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D5A4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015D5A4u) [[unlikely]] return; }
L_0015D5A4:
    c.f[12] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D5B4u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0015D5B4u) [[unlikely]] return; }
L_0015D5B4:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D5C8u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0015D5C8u) [[unlikely]] return; }
L_0015D5C8:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D5E8:
    set32(c.r[2], ld32((c.r[4].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D630; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 648u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 548u));
    c.f[1] = ld32((c.r[4].w[0] + 644u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D630:
    c.f[0] = ld32((c.r[4].w[0] + 548u));
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D664; } }
L_0015D660:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0015D664:
    c.r[2].d[0] = c.r[16].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D6A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D678u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015D678u) [[unlikely]] return; }
L_0015D678:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D688u);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x0015D688u) [[unlikely]] return; }
L_0015D688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D660u | kUnwind; return; } goto L_0015D660; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D660u | kUnwind; return; } goto L_0015D660; } }
    st32((c.r[17].w[0] + 2632u), c.r[16].w[0]);
    c.budget -= 1;
L_0015D6A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D6C0:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = 0u;
    set32(c.r[4], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[12] = c.f[20];
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.f[13] = c.f[20];
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.f[14] = c.f[20];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    c.f[15] = c.f[20];
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D710u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015D710u) [[unlikely]] return; }
L_0015D710:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.f[20];
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D730u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015D730u) [[unlikely]] return; }
L_0015D730:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D750u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015D750u) [[unlikely]] return; }
L_0015D750:
    set32(c.r[2], ld32((c.r[18].w[0] + 496u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D764; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 500u), c.r[2].w[0]);
    c.budget -= 2;
L_0015D764:
    set32(c.r[2], ld32((c.r[18].w[0] + 2532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D790; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D77Cu);  if (depth < kMaxDepth) unit_0012(c, 300u, depth + 1u); else { c.pc = 0x0014A320u; return; } if (c.pc != 0x0015D77Cu) [[unlikely]] return; }
L_0015D77C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D788u);  if (depth < kMaxDepth) unit_0012(c, 316u, depth + 1u); else { c.pc = 0x0014A4F0u; return; } if (c.pc != 0x0015D788u) [[unlikely]] return; }
L_0015D788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D798; } }
L_0015D790:
    st32((c.r[18].w[0] + 2536u), 0u);
    st32((c.r[18].w[0] + 2540u), 0u);
    c.budget -= 2;
L_0015D798:
    set32(c.r[2], ld32((c.r[18].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D7DC; } }
    c.f[12] = ld32((c.r[18].w[0] + 688u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D7B4u);  if (depth < kMaxDepth) unit_009B(c, 20u, depth + 1u); else { c.pc = 0x0036C1D8u; return; } if (c.pc != 0x0015D7B4u) [[unlikely]] return; }
L_0015D7B4:
    set32(c.r[2], ld32((c.r[18].w[0] + 692u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 696u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0] + 692u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015D810; } }
    st32((c.r[18].w[0] + 684u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D810; } }
L_0015D7DC:
    set32(c.r[2], ld32((c.r[18].w[0] + 2540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D800; } }
    c.f[12] = ld32((c.r[18].w[0] + 2548u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D7F8u);  if (depth < kMaxDepth) unit_009B(c, 20u, depth + 1u); else { c.pc = 0x0036C1D8u; return; } if (c.pc != 0x0015D7F8u) [[unlikely]] return; }
L_0015D7F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D810; } }
L_0015D800:
    c.f[12] = ld32((c.r[18].w[0] + 624u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D810u);  if (depth < kMaxDepth) unit_009B(c, 20u, depth + 1u); else { c.pc = 0x0036C1D8u; return; } if (c.pc != 0x0015D810u) [[unlikely]] return; }
L_0015D810:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D820u);  if (depth < kMaxDepth) unit_0017(c, 353u, depth + 1u); else { c.pc = 0x0015EF08u; return; } if (c.pc != 0x0015D820u) [[unlikely]] return; }
L_0015D820:
    set32(c.r[5], c.r[18].w[0] + 304u);
    set32(c.r[4], c.r[18].w[0] + 240u);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D834u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015D834u) [[unlikely]] return; }
L_0015D834:
    set32(c.r[4], c.r[18].w[0] + 368u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D844u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015D844u) [[unlikely]] return; }
L_0015D844:
    set32(c.r[3], ld32((c.r[18].w[0] + 2420u)));
    set32(c.r[4], 0u + 112u);
    set32(c.r[2], ld32((c.r[18].w[0] + 2416u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 804u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015D884; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2536u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D884; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D884u);  if (depth < kMaxDepth) unit_0013(c, 48u, depth + 1u); else { c.pc = 0x0014C910u; return; } if (c.pc != 0x0015D884u) [[unlikely]] return; }
L_0015D884:
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D894u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015D894u) [[unlikely]] return; }
L_0015D894:
    set32(c.r[2], ld32((c.r[18].w[0] + 724u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D8B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D8B0u) [[unlikely]] return; }
L_0015D8B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 564u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D8C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2536u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D958; } }
L_0015D8C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D8F4; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D8ECu);  if (depth < kMaxDepth) unit_009B(c, 317u, depth + 1u); else { c.pc = 0x0036E028u; return; } if (c.pc != 0x0015D8ECu) [[unlikely]] return; }
L_0015D8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D958; } }
L_0015D8F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 2536u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D930; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 724u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[18].w[0] + 2552u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 132u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D928u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D928u) [[unlikely]] return; }
L_0015D928:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D958; } }
L_0015D930:
    set32(c.r[3], ld32((c.r[18].w[0] + 724u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[18].w[0] + 592u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 132u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D958u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D958u) [[unlikely]] return; }
L_0015D958:
    set32(c.r[2], ld32((c.r[18].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D984; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D984; } }
    c.f[12] = ld32((c.r[18].w[0] + 2556u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D984u);  if (depth < kMaxDepth) unit_0012(c, 370u, depth + 1u); else { c.pc = 0x0014AD60u; return; } if (c.pc != 0x0015D984u) [[unlikely]] return; }
L_0015D984:
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D9C8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D9A8u) [[unlikely]] return; }
L_0015D9A8:
    c.f[12] = ld32((c.r[18].w[0] + 552u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9C0u);  if (depth < kMaxDepth) unit_009B(c, 289u, depth + 1u); else { c.pc = 0x0036DD18u; return; } if (c.pc != 0x0015D9C0u) [[unlikely]] return; }
L_0015D9C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D9D8; } }
L_0015D9C8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9D8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015D9D8u) [[unlikely]] return; }
L_0015D9D8:
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[18].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9E8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015D9E8u) [[unlikely]] return; }
L_0015D9E8:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9F8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015D9F8u) [[unlikely]] return; }
L_0015D9F8:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA0Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DA0Cu) [[unlikely]] return; }
L_0015DA0C:
    set32(c.r[2], ld32((c.r[18].w[0] + 724u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015DA28u) [[unlikely]] return; }
L_0015DA28:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA38u);  if (depth < kMaxDepth) unit_0013(c, 42u, depth + 1u); else { c.pc = 0x0014C518u; return; } if (c.pc != 0x0015DA38u) [[unlikely]] return; }
L_0015DA38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA48u);  if (depth < kMaxDepth) unit_009B(c, 254u, depth + 1u); else { c.pc = 0x0036D6C8u; return; } if (c.pc != 0x0015DA48u) [[unlikely]] return; }
L_0015DA48:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA58u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0015DA58u) [[unlikely]] return; }
L_0015DA58:
    set32(c.r[19], c.r[18].w[0] + 32u);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA70u);  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032D938u; return; } if (c.pc != 0x0015DA70u) [[unlikely]] return; }
L_0015DA70:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA7Cu);  if (depth < kMaxDepth) unit_008B(c, 213u, depth + 1u); else { c.pc = 0x0032DEF0u; return; } if (c.pc != 0x0015DA7Cu) [[unlikely]] return; }
L_0015DA7C:
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015DBC8; } }
    c.f[12] = ld32((c.r[18].w[0] + 556u));
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DAA0u);  if (depth < kMaxDepth) unit_008B(c, 230u, depth + 1u); else { c.pc = 0x0032E4B8u; return; } if (c.pc != 0x0015DAA0u) [[unlikely]] return; }
L_0015DAA0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DAB0u);  if (depth < kMaxDepth) unit_008B(c, 229u, depth + 1u); else { c.pc = 0x0032E3F8u; return; } if (c.pc != 0x0015DAB0u) [[unlikely]] return; }
L_0015DAB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DADCu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0015DADCu) [[unlikely]] return; }
L_0015DADC:
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DAF0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DAF0u) [[unlikely]] return; }
L_0015DAF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), 0u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB04u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015DB04u) [[unlikely]] return; }
L_0015DB04:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB14u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0015DB14u) [[unlikely]] return; }
L_0015DB14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.f[13] = ld32((c.r[29].w[0] + 120u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB50u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x0015DB50u) [[unlikely]] return; }
L_0015DB50:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015DB88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015DBB4; } }
L_0015DB88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015DBB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_0015DBB4:
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 1;
L_0015DBB8:
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015DBEC; } }
L_0015DBC8:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44220000u);
    c.r[1].d[0] = c.r[1].d[0] | 63875ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 9;
L_0015DBEC:
    ldl(c.r[4], (c.r[29].w[0] + 87u));
    ldr(c.r[4], (c.r[29].w[0] + 80u));
    ldl(c.r[5], (c.r[29].w[0] + 95u));
    ldr(c.r[5], (c.r[29].w[0] + 88u));
    sdl(c.r[4], (c.r[29].w[0] + 103u));
    sdr(c.r[4], (c.r[29].w[0] + 96u));
    sdl(c.r[5], (c.r[29].w[0] + 111u));
    sdr(c.r[5], (c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 2u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[3] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[18].w[0] + 352u), c.f[0]);
    st32((c.r[18].w[0] + 356u), c.f[1]);
    st32((c.r[18].w[0] + 360u), c.f[2]);
    st32((c.r[18].w[0] + 364u), c.f[3]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC3Cu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0015DC3Cu) [[unlikely]] return; }
L_0015DC3C:
    set32(c.r[4], c.r[18].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC4Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DC4Cu) [[unlikely]] return; }
L_0015DC4C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC5Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DC5Cu) [[unlikely]] return; }
L_0015DC5C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DC68u);  if (depth < kMaxDepth) unit_009B(c, 10u, depth + 1u); else { c.pc = 0x0036C070u; return; } if (c.pc != 0x0015DC68u) [[unlikely]] return; }
L_0015DC68:
    set32(c.r[2], ld32((c.r[18].w[0] + 644u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 648u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015DC94; } }
    st32((c.r[18].w[0] + 640u), 0u);
    st32((c.r[18].w[0] + 636u), 0u);
    st32((c.r[18].w[0] + 632u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015DCC0; } }
L_0015DC94:
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015DCB8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015DCB8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DCC0; } }
L_0015DCB8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 644u), c.r[2].w[0]);
    c.budget -= 2;
L_0015DCC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DCCCu);  if (depth < kMaxDepth) unit_009B(c, 310u, depth + 1u); else { c.pc = 0x0036DEC0u; return; } if (c.pc != 0x0015DCCCu) [[unlikely]] return; }
L_0015DCCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DCEC; } }
    st32((c.r[18].w[0] + 500u), 0u);
    c.budget -= 1;
L_0015DCDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015DCEC; } }
L_0015DCE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DCECu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0015DCECu) [[unlikely]] return; }
L_0015DCEC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DCFCu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0015DCFCu) [[unlikely]] return; }
L_0015DCFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015DD24; } }
L_0015DD04:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD14u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0015DD14u) [[unlikely]] return; }
L_0015DD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DCE4u | kUnwind; return; } goto L_0015DCE4; } }
L_0015DD1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DD24u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0015DD24u) [[unlikely]] return; }
L_0015DD24:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015DD58:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = 0u;
    set32(c.r[4], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.f[12] = c.f[20];
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.f[13] = c.f[20];
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.f[14] = c.f[20];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    c.f[15] = c.f[20];
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DDA8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015DDA8u) [[unlikely]] return; }
L_0015DDA8:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.f[20];
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DDC8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015DDC8u) [[unlikely]] return; }
L_0015DDC8:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DDE8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015DDE8u) [[unlikely]] return; }
L_0015DDE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 496u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DDFC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 500u), c.r[2].w[0]);
    c.budget -= 2;
L_0015DDFC:
    set32(c.r[2], ld32((c.r[18].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DE40; } }
    c.f[12] = ld32((c.r[18].w[0] + 688u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE18u);  if (depth < kMaxDepth) unit_009B(c, 20u, depth + 1u); else { c.pc = 0x0036C1D8u; return; } if (c.pc != 0x0015DE18u) [[unlikely]] return; }
L_0015DE18:
    set32(c.r[2], ld32((c.r[18].w[0] + 692u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 696u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[18].w[0] + 692u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015DE50; } }
    st32((c.r[18].w[0] + 684u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015DE50; } }
L_0015DE40:
    c.f[12] = ld32((c.r[18].w[0] + 624u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE50u);  if (depth < kMaxDepth) unit_009B(c, 20u, depth + 1u); else { c.pc = 0x0036C1D8u; return; } if (c.pc != 0x0015DE50u) [[unlikely]] return; }
L_0015DE50:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE60u);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E278u; return; } if (c.pc != 0x0015DE60u) [[unlikely]] return; }
L_0015DE60:
    set32(c.r[16], c.r[18].w[0] + 304u);
    set32(c.r[4], c.r[18].w[0] + 240u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE74u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DE74u) [[unlikely]] return; }
L_0015DE74:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 368u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE88u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DE88u) [[unlikely]] return; }
L_0015DE88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE98u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DE98u) [[unlikely]] return; }
L_0015DE98:
    set32(c.r[2], ld32((c.r[18].w[0] + 724u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015DEB4u) [[unlikely]] return; }
L_0015DEB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015DEF8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DED8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015DED8u) [[unlikely]] return; }
L_0015DED8:
    c.f[12] = ld32((c.r[18].w[0] + 552u));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEF0u);  if (depth < kMaxDepth) unit_009B(c, 289u, depth + 1u); else { c.pc = 0x0036DD18u; return; } if (c.pc != 0x0015DEF0u) [[unlikely]] return; }
L_0015DEF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015DF08; } }
L_0015DEF8:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF08u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DF08u) [[unlikely]] return; }
L_0015DF08:
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[18].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF18u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DF18u) [[unlikely]] return; }
L_0015DF18:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF28u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DF28u) [[unlikely]] return; }
L_0015DF28:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF3Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015DF3Cu) [[unlikely]] return; }
L_0015DF3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF4Cu);  if (depth < kMaxDepth) unit_0012(c, 351u, depth + 1u); else { c.pc = 0x0014A9D0u; return; } if (c.pc != 0x0015DF4Cu) [[unlikely]] return; }
L_0015DF4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 724u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015DF68u) [[unlikely]] return; }
L_0015DF68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF78u);  if (depth < kMaxDepth) unit_009B(c, 254u, depth + 1u); else { c.pc = 0x0036D6C8u; return; } if (c.pc != 0x0015DF78u) [[unlikely]] return; }
L_0015DF78:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF88u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0015DF88u) [[unlikely]] return; }
L_0015DF88:
    set32(c.r[19], c.r[18].w[0] + 32u);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFA0u);  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032D938u; return; } if (c.pc != 0x0015DFA0u) [[unlikely]] return; }
L_0015DFA0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFACu);  if (depth < kMaxDepth) unit_008B(c, 213u, depth + 1u); else { c.pc = 0x0032DEF0u; return; } if (c.pc != 0x0015DFACu) [[unlikely]] return; }
L_0015DFAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E0F8; } }
    c.f[12] = ld32((c.r[18].w[0] + 556u));
    set32(c.r[4], c.r[18].w[0] + 352u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFD0u);  if (depth < kMaxDepth) unit_008B(c, 230u, depth + 1u); else { c.pc = 0x0032E4B8u; return; } if (c.pc != 0x0015DFD0u) [[unlikely]] return; }
L_0015DFD0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DFE0u);  if (depth < kMaxDepth) unit_008B(c, 229u, depth + 1u); else { c.pc = 0x0032E3F8u; return; } if (c.pc != 0x0015DFE0u) [[unlikely]] return; }
L_0015DFE0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E00Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0015E00Cu) [[unlikely]] return; }
L_0015E00C:
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E020u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E020u) [[unlikely]] return; }
L_0015E020:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), 0u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E034u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015E034u) [[unlikely]] return; }
L_0015E034:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E044u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0015E044u) [[unlikely]] return; }
L_0015E044:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.f[13] = ld32((c.r[29].w[0] + 120u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E080u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x0015E080u) [[unlikely]] return; }
L_0015E080:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015E0B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015E0E4; } }
L_0015E0B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015E0E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_0015E0E4:
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 1;
L_0015E0E8:
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015E11C; } }
L_0015E0F8:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44220000u);
    c.r[1].d[0] = c.r[1].d[0] | 63875ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 9;
L_0015E11C:
    ldl(c.r[2], (c.r[29].w[0] + 87u));
    ldr(c.r[2], (c.r[29].w[0] + 80u));
    ldl(c.r[3], (c.r[29].w[0] + 95u));
    ldr(c.r[3], (c.r[29].w[0] + 88u));
    sdl(c.r[2], (c.r[29].w[0] + 103u));
    sdr(c.r[2], (c.r[29].w[0] + 96u));
    sdl(c.r[3], (c.r[29].w[0] + 111u));
    sdr(c.r[3], (c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 2u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[3] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[18].w[0] + 352u), c.f[0]);
    st32((c.r[18].w[0] + 356u), c.f[1]);
    st32((c.r[18].w[0] + 360u), c.f[2]);
    st32((c.r[18].w[0] + 364u), c.f[3]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E16Cu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0015E16Cu) [[unlikely]] return; }
L_0015E16C:
    set32(c.r[4], c.r[18].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E17Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E17Cu) [[unlikely]] return; }
L_0015E17C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E18Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E18Cu) [[unlikely]] return; }
L_0015E18C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E198u);  if (depth < kMaxDepth) unit_009B(c, 10u, depth + 1u); else { c.pc = 0x0036C070u; return; } if (c.pc != 0x0015E198u) [[unlikely]] return; }
L_0015E198:
    set32(c.r[2], ld32((c.r[18].w[0] + 644u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 648u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E1C4; } }
    st32((c.r[18].w[0] + 640u), 0u);
    st32((c.r[18].w[0] + 636u), 0u);
    st32((c.r[18].w[0] + 632u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015E1F0; } }
L_0015E1C4:
    set32(c.r[2], ld32((c.r[18].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E1E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E1E8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015E1F0; } }
L_0015E1E8:
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 644u), c.r[2].w[0]);
    c.budget -= 2;
L_0015E1F0:
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015E210; } }
    st32((c.r[18].w[0] + 500u), 0u);
    c.budget -= 1;
L_0015E200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015E210; } }
L_0015E208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E210u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0015E210u) [[unlikely]] return; }
L_0015E210:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E220u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0015E220u) [[unlikely]] return; }
L_0015E220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015E248; } }
L_0015E228:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E238u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0015E238u) [[unlikely]] return; }
L_0015E238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E208u | kUnwind; return; } goto L_0015E208; } }
L_0015E240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E248u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0015E248u) [[unlikely]] return; }
L_0015E248:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015E278:
    set32(c.r[29], c.r[29].w[0] - 704u);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[20]);
    st32((c.r[29].w[0] + 464u), c.r[5].w[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[16].w[0] - 13248u);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 480u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 696u), c.f[27]);
    st32((c.r[29].w[0] + 688u), c.f[26]);
    st32((c.r[29].w[0] + 680u), c.f[25]);
    st32((c.r[29].w[0] + 672u), c.f[24]);
    st32((c.r[29].w[0] + 664u), c.f[23]);
    st32((c.r[29].w[0] + 656u), c.f[22]);
    st32((c.r[29].w[0] + 648u), c.f[21]);
    st32((c.r[29].w[0] + 640u), c.f[20]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E2DCu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015E2DCu) [[unlikely]] return; }
L_0015E2DC:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E2F0u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015E2F0u) [[unlikely]] return; }
L_0015E2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E2F8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015E2F8u) [[unlikely]] return; }
L_0015E2F8:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E310u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015E310u) [[unlikely]] return; }
L_0015E310:
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E324u);  if (depth < kMaxDepth) unit_008A(c, 267u, depth + 1u); else { c.pc = 0x0032B7E8u; return; } if (c.pc != 0x0015E324u) [[unlikely]] return; }
L_0015E324:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E334u);  if (depth < kMaxDepth) unit_0010(c, 291u, depth + 1u); else { c.pc = 0x00143830u; return; } if (c.pc != 0x0015E334u) [[unlikely]] return; }
L_0015E334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E354; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E34Cu);  if (depth < kMaxDepth) unit_0010(c, 291u, depth + 1u); else { c.pc = 0x00143830u; return; } if (c.pc != 0x0015E34Cu) [[unlikely]] return; }
L_0015E34C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015ED38; } }
L_0015E354:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E364u);  if (depth < kMaxDepth) unit_0010(c, 287u, depth + 1u); else { c.pc = 0x00143790u; return; } if (c.pc != 0x0015E364u) [[unlikely]] return; }
L_0015E364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E384; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E37Cu);  if (depth < kMaxDepth) unit_0010(c, 287u, depth + 1u); else { c.pc = 0x00143790u; return; } if (c.pc != 0x0015E37Cu) [[unlikely]] return; }
L_0015E37C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015ED38; } }
L_0015E384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E38Cu);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x0015E38Cu) [[unlikely]] return; }
L_0015E38C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[23] = c.r[1].w[0];
    c.f[20] = c.f[0];
    set32(c.r[16], c.r[20].w[0] + 304u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E3A4u);  if (depth < kMaxDepth) unit_0049(c, 177u, depth + 1u); else { c.pc = 0x00226540u; return; } if (c.pc != 0x0015E3A4u) [[unlikely]] return; }
L_0015E3A4:
    set32(c.r[17], c.r[20].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[12] = fp::mul(c.f[20], c.f[23]);
    c.f[24] = ld32((c.r[2].w[0] + 19788u));
    c.f[20] = c.f[0];
    st32((c.r[29].w[0] + 468u), c.r[16].w[0]);
    set32(c.r[22], 0u + 5u);
    c.f[13] = c.f[24];
    c.f[22] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E3D0u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0015E3D0u) [[unlikely]] return; }
L_0015E3D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[25] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[20], c.f[23]);
    st32((c.r[29].w[0] + 472u), c.r[17].w[0]);
    c.f[21] = fp::add(c.f[0], c.f[0]);
    c.f[13] = c.f[24];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E3F0u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0015E3F0u) [[unlikely]] return; }
L_0015E3F0:
    c.f[21] = fp::mul(c.f[21], c.f[23]);
    c.f[20] = fp::add(c.f[0], c.f[0]);
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E404u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0015E404u) [[unlikely]] return; }
L_0015E404:
    c.f[20] = fp::mul(c.f[20], c.f[23]);
    c.f[24] = c.f[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E418u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0015E418u) [[unlikely]] return; }
L_0015E418:
    c.f[23] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E428u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0015E428u) [[unlikely]] return; }
L_0015E428:
    c.f[27] = c.f[0];
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E438u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0015E438u) [[unlikely]] return; }
L_0015E438:
    c.f[26] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.f[24];
    c.f[13] = c.f[22];
    c.f[14] = c.f[23];
    c.f[15] = c.f[22];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E458u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E458u) [[unlikely]] return; }
L_0015E458:
    c.f[12] = c.f[24] ^ fp::kSign;
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[21], c.r[29].w[0] + 32u);
    c.f[13] = c.f[22];
    c.f[14] = c.f[23];
    c.f[15] = c.f[22];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E478u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E478u) [[unlikely]] return; }
L_0015E478:
    c.f[13] = c.f[27] ^ fp::kSign;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.f[22];
    c.f[14] = c.f[26];
    c.f[15] = c.f[22];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E494u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E494u) [[unlikely]] return; }
L_0015E494:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.f[22];
    c.f[13] = c.f[27];
    c.f[14] = c.f[26];
    c.f[15] = c.f[22];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E4B0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E4B0u) [[unlikely]] return; }
L_0015E4B0:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[12] = c.f[22];
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    c.f[13] = c.f[22];
    c.f[14] = c.f[25];
    c.f[15] = c.f[22];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E4D0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E4D0u) [[unlikely]] return; }
L_0015E4D0:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[14] = c.r[1].w[0];
    c.f[12] = c.f[22];
    c.f[13] = c.f[22];
    c.f[15] = c.f[22];
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E4F4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E4F4u) [[unlikely]] return; }
L_0015E4F4:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E504u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E504u) [[unlikely]] return; }
L_0015E504:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E514u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E514u) [[unlikely]] return; }
L_0015E514:
    set32(c.r[5], ld32((c.r[29].w[0] + 464u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E524u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E524u) [[unlikely]] return; }
L_0015E524:
    set32(c.r[3], ld32((c.r[20].w[0] + 724u)));
    set32(c.r[16], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E544u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015E544u) [[unlikely]] return; }
L_0015E544:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E554u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E554u) [[unlikely]] return; }
L_0015E554:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[13] = ld32((c.r[29].w[0] + 164u));
    c.f[15] = c.f[22];
    c.f[14] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E570u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E570u) [[unlikely]] return; }
L_0015E570:
    set32(c.r[18], c.r[29].w[0] + 192u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E580u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0015E580u) [[unlikely]] return; }
L_0015E580:
    set32(c.r[3], ld32((c.r[20].w[0] + 724u)));
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E59Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015E59Cu) [[unlikely]] return; }
L_0015E59C:
    c.f[1] = ld32((c.r[29].w[0] + 388u));
    set32(c.r[19], c.r[29].w[0] + 400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44220000u);
    c.r[1].d[0] = c.r[1].d[0] | 63875ull;
    c.f[3] = c.r[1].w[0];
    c.f[15] = c.f[22];
    c.f[2] = ld32((c.r[29].w[0] + 384u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[14] = ld32((c.r[29].w[0] + 392u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::mul(c.f[1], c.f[12]);
    st32((c.r[29].w[0] + 388u), c.f[1]);
    c.f[14] = fp::mul(c.f[14], c.f[12]);
    st32((c.r[29].w[0] + 384u), c.f[2]);
    c.f[12] = fp::mul(c.f[2], c.f[12]);
    c.f[13] = fp::mul(c.f[13], c.f[0]);
    c.f[14] = fp::mul(c.f[14], c.f[0]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[13] = c.f[13] ^ fp::kSign;
    c.f[14] = c.f[14] ^ fp::kSign;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E610u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E610u) [[unlikely]] return; }
L_0015E610:
    c.f[12] = ld32((c.r[20].w[0] + 320u));
    set32(c.r[17], c.r[29].w[0] + 416u);
    c.f[13] = ld32((c.r[20].w[0] + 324u));
    c.f[15] = c.f[25];
    c.f[14] = ld32((c.r[20].w[0] + 328u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = c.f[14] ^ fp::kSign;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E63Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E63Cu) [[unlikely]] return; }
L_0015E63C:
    set32(c.r[16], c.r[29].w[0] + 256u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E64Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0015E64Cu) [[unlikely]] return; }
L_0015E64C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E660u);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x0015E660u) [[unlikely]] return; }
L_0015E660:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E674u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0015E674u) [[unlikely]] return; }
L_0015E674:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E684u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x0015E684u) [[unlikely]] return; }
L_0015E684:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E694u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x0015E694u) [[unlikely]] return; }
L_0015E694:
    set32(c.r[18], c.r[29].w[0] + 432u);
    c.budget -= 1;
L_0015E698:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[22], c.r[22].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E6B0u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0015E6B0u) [[unlikely]] return; }
L_0015E6B0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E6C0u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x0015E6C0u) [[unlikely]] return; }
L_0015E6C0:
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E6D4u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D100u; return; } if (c.pc != 0x0015E6D4u) [[unlikely]] return; }
L_0015E6D4:
    c.f[0] = c.f[20] ^ fp::kSign;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 432u));
    set32(c.r[21], c.r[21].w[0] + 16u);
    c.f[13] = ld32((c.r[29].w[0] + 436u));
    c.f[14] = ld32((c.r[29].w[0] + 440u));
    c.f[15] = c.f[0];
    st32((c.r[29].w[0] + 444u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E6FCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E6FCu) [[unlikely]] return; }
L_0015E6FC:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E698u | kUnwind; return; } goto L_0015E698; } }
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E714u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D100u; return; } if (c.pc != 0x0015E714u) [[unlikely]] return; }
L_0015E714:
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    set32(c.r[16], c.r[2].w[0] - 13248u);
    c.f[12] = ld32((c.r[29].w[0] + 432u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[13] = ld32((c.r[29].w[0] + 436u));
    c.f[1] = ld32((c.r[2].w[0] + 16820u));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 440u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 444u), c.f[0]);
    c.f[15] = c.f[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E750u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E750u) [[unlikely]] return; }
L_0015E750:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E760u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D100u; return; } if (c.pc != 0x0015E760u) [[unlikely]] return; }
L_0015E760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = ld32((c.r[2].w[0] + 16824u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 432u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[13] = ld32((c.r[29].w[0] + 436u));
    c.f[14] = ld32((c.r[29].w[0] + 440u));
    c.f[15] = c.f[0];
    st32((c.r[29].w[0] + 444u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E790u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E790u) [[unlikely]] return; }
L_0015E790:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E79Cu);  if (depth < kMaxDepth) unit_0010(c, 293u, depth + 1u); else { c.pc = 0x00143850u; return; } if (c.pc != 0x0015E79Cu) [[unlikely]] return; }
L_0015E79C:
    c.f[22] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E7B8u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015E7B8u) [[unlikely]] return; }
L_0015E7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E8A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E7D8u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015E7D8u) [[unlikely]] return; }
L_0015E7D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E8A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E7F8u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015E7F8u) [[unlikely]] return; }
L_0015E7F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E8A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E818u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015E818u) [[unlikely]] return; }
L_0015E818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E8A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E838u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015E838u) [[unlikely]] return; }
L_0015E838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E8A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E858u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015E858u) [[unlikely]] return; }
L_0015E858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E8A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E878u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015E878u) [[unlikely]] return; }
L_0015E878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015E8A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E898u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015E898u) [[unlikely]] return; }
L_0015E898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015ED18; } }
L_0015E8A0:
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.f[20] = 0u;
    set32(c.r[19], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E8B8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E8B8u) [[unlikely]] return; }
L_0015E8B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 448u);
    set32(c.r[6], ld32((c.r[29].w[0] + 464u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E8E4u);  if (depth < kMaxDepth) unit_009B(c, 287u, depth + 1u); else { c.pc = 0x0036DCE0u; return; } if (c.pc != 0x0015E8E4u) [[unlikely]] return; }
L_0015E8E4:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.f[24];
    c.f[13] = c.f[20];
    c.f[14] = c.f[23];
    c.f[15] = c.f[20];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E904u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E904u) [[unlikely]] return; }
L_0015E904:
    c.f[12] = c.f[24] ^ fp::kSign;
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.f[14] = c.f[23];
    c.f[13] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E920u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E920u) [[unlikely]] return; }
L_0015E920:
    c.f[13] = c.f[27] ^ fp::kSign;
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.f[20];
    c.f[14] = c.f[26];
    c.f[15] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E93Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E93Cu) [[unlikely]] return; }
L_0015E93C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[13] = c.f[27];
    c.f[14] = c.f[26];
    c.f[12] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E958u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E958u) [[unlikely]] return; }
L_0015E958:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[21];
    c.f[15] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E974u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E974u) [[unlikely]] return; }
L_0015E974:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[14] = c.r[1].w[0];
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E994u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E994u) [[unlikely]] return; }
L_0015E994:
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E9A4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E9A4u) [[unlikely]] return; }
L_0015E9A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 724u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E9C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015E9C0u) [[unlikely]] return; }
L_0015E9C0:
    set32(c.r[4], ld32((c.r[29].w[0] + 472u)));
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E9D0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015E9D0u) [[unlikely]] return; }
L_0015E9D0:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[13] = ld32((c.r[29].w[0] + 164u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 168u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E9ECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015E9ECu) [[unlikely]] return; }
L_0015E9EC:
    set32(c.r[2], ld32((c.r[20].w[0] + 724u)));
    set32(c.r[5], c.r[29].w[0] + 384u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EA08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015EA08u) [[unlikely]] return; }
L_0015EA08:
    c.f[0] = ld32((c.r[29].w[0] + 388u));
    set32(c.r[4], c.r[29].w[0] + 400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44220000u);
    c.r[1].d[0] = c.r[1].d[0] | 63875ull;
    c.f[2] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.f[3] = ld32((c.r[29].w[0] + 384u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[14] = ld32((c.r[29].w[0] + 392u));
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    c.f[13] = fp::mul(c.f[0], c.f[12]);
    st32((c.r[29].w[0] + 388u), c.f[0]);
    c.f[14] = fp::mul(c.f[14], c.f[12]);
    st32((c.r[29].w[0] + 384u), c.f[3]);
    c.f[12] = fp::mul(c.f[3], c.f[12]);
    c.f[13] = fp::mul(c.f[13], c.f[1]);
    c.f[14] = fp::mul(c.f[14], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[13] = c.f[13] ^ fp::kSign;
    c.f[14] = c.f[14] ^ fp::kSign;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EA78u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015EA78u) [[unlikely]] return; }
L_0015EA78:
    c.f[14] = ld32((c.r[20].w[0] + 328u));
    set32(c.r[4], c.r[29].w[0] + 416u);
    c.f[12] = ld32((c.r[20].w[0] + 320u));
    c.f[15] = c.f[21];
    c.f[13] = ld32((c.r[20].w[0] + 324u));
    c.f[14] = c.f[14] ^ fp::kSign;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAA0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015EAA0u) [[unlikely]] return; }
L_0015EAA0:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAACu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0015EAACu) [[unlikely]] return; }
L_0015EAAC:
    set32(c.r[5], c.r[29].w[0] + 256u);
    set32(c.r[6], c.r[29].w[0] + 400u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAC0u);  if (depth < kMaxDepth) unit_0045(c, 56u, depth + 1u); else { c.pc = 0x00214EB0u; return; } if (c.pc != 0x0015EAC0u) [[unlikely]] return; }
L_0015EAC0:
    set32(c.r[6], c.r[29].w[0] + 416u);
    set32(c.r[5], c.r[29].w[0] + 192u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAD4u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0015EAD4u) [[unlikely]] return; }
L_0015EAD4:
    set32(c.r[5], c.r[29].w[0] + 416u);
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAE4u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x0015EAE4u) [[unlikely]] return; }
L_0015EAE4:
    set32(c.r[5], c.r[29].w[0] + 192u);
    set32(c.r[4], c.r[29].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAF4u);  if (depth < kMaxDepth) unit_0045(c, 3u, depth + 1u); else { c.pc = 0x00214058u; return; } if (c.pc != 0x0015EAF4u) [[unlikely]] return; }
L_0015EAF4:
    c.budget -= 1;
L_0015EAF8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 320u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EB10u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0015EB10u) [[unlikely]] return; }
L_0015EB10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 176u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EB20u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x0015EB20u) [[unlikely]] return; }
L_0015EB20:
    c.f[20] = c.f[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EB34u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D100u; return; } if (c.pc != 0x0015EB34u) [[unlikely]] return; }
L_0015EB34:
    c.f[0] = c.f[20] ^ fp::kSign;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 432u));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.f[13] = ld32((c.r[29].w[0] + 436u));
    c.f[14] = ld32((c.r[29].w[0] + 440u));
    c.f[15] = c.f[0];
    st32((c.r[29].w[0] + 444u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EB5Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015EB5Cu) [[unlikely]] return; }
L_0015EB5C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EAF8u | kUnwind; return; } goto L_0015EAF8; } }
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EB74u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D100u; return; } if (c.pc != 0x0015EB74u) [[unlikely]] return; }
L_0015EB74:
    c.f[20] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = ld32((c.r[2].w[0] + 16820u));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[12] = ld32((c.r[29].w[0] + 432u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[13] = ld32((c.r[29].w[0] + 436u));
    c.f[14] = ld32((c.r[29].w[0] + 440u));
    set32(c.r[16], c.r[2].w[0] - 13248u);
    c.f[15] = c.f[0];
    st32((c.r[29].w[0] + 444u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBB0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015EBB0u) [[unlikely]] return; }
L_0015EBB0:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBC0u);  if (depth < kMaxDepth) unit_008B(c, 140u, depth + 1u); else { c.pc = 0x0032D100u; return; } if (c.pc != 0x0015EBC0u) [[unlikely]] return; }
L_0015EBC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.f[0] = ld32((c.r[29].w[0] + 444u));
    c.f[1] = ld32((c.r[2].w[0] + 16824u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 432u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[13] = ld32((c.r[29].w[0] + 436u));
    c.f[14] = ld32((c.r[29].w[0] + 440u));
    c.f[15] = c.f[0];
    st32((c.r[29].w[0] + 444u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBF0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0015EBF0u) [[unlikely]] return; }
L_0015EBF0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC08u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015EC08u) [[unlikely]] return; }
L_0015EC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015ECF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC28u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015EC28u) [[unlikely]] return; }
L_0015EC28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015ECF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC48u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015EC48u) [[unlikely]] return; }
L_0015EC48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015ECF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC68u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015EC68u) [[unlikely]] return; }
L_0015EC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015ECF0; } }
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC88u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015EC88u) [[unlikely]] return; }
L_0015EC88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015ECF0; } }
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ECA8u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015ECA8u) [[unlikely]] return; }
L_0015ECA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015ECF0; } }
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.f[12] = c.f[22];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ECC8u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015ECC8u) [[unlikely]] return; }
L_0015ECC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015ECF0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ECE8u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0015ECE8u) [[unlikely]] return; }
L_0015ECE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015ED08; } }
L_0015ECF0:
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED00u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015ED00u) [[unlikely]] return; }
L_0015ED00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015ED18; } }
L_0015ED08:
    set32(c.r[4], ld32((c.r[29].w[0] + 464u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED18u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015ED18u) [[unlikely]] return; }
L_0015ED18:
    set32(c.r[4], ld32((c.r[29].w[0] + 468u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED28u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015ED28u) [[unlikely]] return; }
L_0015ED28:
    set32(c.r[4], ld32((c.r[29].w[0] + 472u)));
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED38u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015ED38u) [[unlikely]] return; }
L_0015ED38:
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 480u));
    c.f[27] = ld32((c.r[29].w[0] + 696u));
    c.f[26] = ld32((c.r[29].w[0] + 688u));
    c.f[25] = ld32((c.r[29].w[0] + 680u));
    c.f[24] = ld32((c.r[29].w[0] + 672u));
    c.f[23] = ld32((c.r[29].w[0] + 664u));
    c.f[22] = ld32((c.r[29].w[0] + 656u));
    c.f[21] = ld32((c.r[29].w[0] + 648u));
    c.f[20] = ld32((c.r[29].w[0] + 640u));
    set32(c.r[29], c.r[29].w[0] + 704u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015ED90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EDB0u);  if (depth < kMaxDepth) unit_0012(c, 198u, depth + 1u); else { c.pc = 0x00149660u; return; } if (c.pc != 0x0015EDB0u) [[unlikely]] return; }
L_0015EDB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 20512u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 724u), c.r[3].w[0]);
    set32(c.r[4], c.r[17].w[0] + 2624u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EDCCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015EDCCu) [[unlikely]] return; }
L_0015EDCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x458C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 40960ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[17].w[0] + 556u), c.f[0]);
    st32((c.r[17].w[0] + 592u), c.f[1]);
    st32((c.r[17].w[0] + 648u), c.r[2].w[0]);
    c.budget -= 10;
L_0015EDF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015EE04; } }
L_0015EDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE04u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0015EE04u) [[unlikely]] return; }
L_0015EE04:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015EE30; } }
L_0015EE10:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE20u);  if (depth < kMaxDepth) unit_0013(c, 144u, depth + 1u); else { c.pc = 0x0014D408u; return; } if (c.pc != 0x0015EE20u) [[unlikely]] return; }
L_0015EE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015EDFCu | kUnwind; return; } goto L_0015EDFC; } }
L_0015EE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE30u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0015EE30u) [[unlikely]] return; }
L_0015EE30:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015EE48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20512u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE78u);  if (depth < kMaxDepth) unit_0013(c, 144u, depth + 1u); else { c.pc = 0x0014D408u; return; } if (c.pc != 0x0015EE78u) [[unlikely]] return; }
L_0015EE78:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015EE98; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE98u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0015EE98u) [[unlikely]] return; }
L_0015EE98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015EEB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EEC8u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x0015EEC8u) [[unlikely]] return; }
L_0015EEC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015EEE4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EEDCu);  if (depth < kMaxDepth) unit_0017(c, 145u, depth + 1u); else { c.pc = 0x0015D6C0u; return; } if (c.pc != 0x0015EEDCu) [[unlikely]] return; }
L_0015EEDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015EEF0; } }
L_0015EEE4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EEF0u);  if (depth < kMaxDepth) unit_0017(c, 196u, depth + 1u); else { c.pc = 0x0015DD58u; return; } if (c.pc != 0x0015EEF0u) [[unlikely]] return; }
L_0015EEF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015EF08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EF20u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015EF20u) [[unlikely]] return; }
L_0015EF20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EF34u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015EF34u) [[unlikely]] return; }
L_0015EF34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EF44u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015EF44u) [[unlikely]] return; }
L_0015EF44:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015EF58:
    set32(c.r[2], c.r[4].w[0] + 2624u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EF74u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015EF74u) [[unlikely]] return; }
L_0015EF74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015EF88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[5].w[0] + 320u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 304u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EFB0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015EFB0u) [[unlikely]] return; }
L_0015EFB0:
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EFC4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015EFC4u) [[unlikely]] return; }
L_0015EFC4:
    c.f[12] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EFD4u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0015EFD4u) [[unlikely]] return; }
L_0015EFD4:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EFE8u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x0015EFE8u) [[unlikely]] return; }
L_0015EFE8:
    c.f[12] = ld32((c.r[29].w[0]));
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EFF8u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0015EFF8u) [[unlikely]] return; }
L_0015EFF8:
    st32((c.r[16].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] - 30380u)));
    set32(c.r[3], 0u + 147u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015F058; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F040; } }
    st32((c.r[5].w[0] + 632u), 0u);
    c.budget -= 1;
L_0015F040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[5].w[0] + 544u), c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F058:
    set32(c.r[2], ld32((c.r[5].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F0A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 648u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[5].w[0] + 540u));
    c.f[1] = ld32((c.r[5].w[0] + 644u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[5].w[0] + 544u), c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F0A0:
    c.f[0] = ld32((c.r[5].w[0] + 540u));
    st32((c.r[5].w[0] + 544u), c.f[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F0B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F0E0; } }
    c.f[0] = ld32((c.r[4].w[0] + 676u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F0E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F128; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 648u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 548u));
    c.f[1] = ld32((c.r[4].w[0] + 644u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F128:
    c.f[0] = ld32((c.r[4].w[0] + 548u));
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F138:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[17].w[0] - 13156u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015F260; } }
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F168u);  if (depth < kMaxDepth) unit_008E(c, 253u, depth + 1u); else { c.pc = 0x0033AD30u; return; } if (c.pc != 0x0015F168u) [[unlikely]] return; }
L_0015F168:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 21072u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 21024u);
    set32(c.r[8], c.r[2].w[0] + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4960000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[8].w[0] + 12u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[2].w[0] + 40u);
    set32(c.r[3], c.r[3].w[0] + 21048u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 20u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 20976u);
    set32(c.r[7], c.r[2].w[0] + 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[7].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 21000u);
    set32(c.r[4], c.r[2].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[3] = c.r[1].w[0];
    st32((c.r[4].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[9], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[2].w[0] + 4u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[1] = c.r[1].w[0];
    st32((c.r[6].w[0] + 4u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x448C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44ED0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[2].w[0] + 40u), c.f[2]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[8].w[0] + 8u), c.f[1]);
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3FA0000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[3] = c.r[1].w[0];
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[4].w[0] + 8u), c.f[2]);
    st32((c.r[4].w[0] + 20u), c.f[0]);
    st32((c.r[4].w[0] + 24u), c.f[3]);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[17].w[0] - 13156u), c.r[9].w[0]);
    st32((c.r[16].w[0] - 13160u), c.r[2].w[0]);
    c.budget -= 62;
L_0015F260:
    set32(c.r[2], ld32((c.r[16].w[0] - 13160u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F280:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 320u), c.f[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    st64((c.r[29].w[0] + 224u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 328u), c.f[21]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F2C0u);  if (depth < kMaxDepth) unit_0018(c, 80u, depth + 1u); else { c.pc = 0x00160AD0u; return; } if (c.pc != 0x0015F2C0u) [[unlikely]] return; }
L_0015F2C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.f[20] = c.f[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F2D4; } }
    c.f[20] = c.f[20] ^ fp::kSign;
    c.budget -= 1;
L_0015F2D4:
    c.f[21] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F464; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F2FCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015F2FCu) [[unlikely]] return; }
L_0015F2FC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F30Cu);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x0015F30Cu) [[unlikely]] return; }
L_0015F30C:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[12] = fp::add(c.f[1], c.f[0]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F33C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F33Cu);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0015F33Cu) [[unlikely]] return; }
L_0015F33C:
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F34Cu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x0015F34Cu) [[unlikely]] return; }
L_0015F34C:
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = c.f[2] & fp::kAbs;
    c.f[21] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015F390; } }
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.f[21] = c.f[21] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F398; } }
L_0015F390:
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 2;
L_0015F398:
    c.budget -= 3;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F464; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F3B0u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015F3B0u) [[unlikely]] return; }
L_0015F3B0:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F3C4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015F3C4u) [[unlikely]] return; }
L_0015F3C4:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F3D8u);  if (depth < kMaxDepth) unit_008A(c, 102u, depth + 1u); else { c.pc = 0x00329AC0u; return; } if (c.pc != 0x0015F3D8u) [[unlikely]] return; }
L_0015F3D8:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F3E8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0015F3E8u) [[unlikely]] return; }
L_0015F3E8:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F3FCu);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x0015F3FCu) [[unlikely]] return; }
L_0015F3FC:
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F414u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x0015F414u) [[unlikely]] return; }
L_0015F414:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 216u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 220u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), 0u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 212u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F444u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0015F444u) [[unlikely]] return; }
L_0015F444:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F454u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x0015F454u) [[unlikely]] return; }
L_0015F454:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F464u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015F464u) [[unlikely]] return; }
L_0015F464:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 224u));
    c.f[21] = ld32((c.r[29].w[0] + 328u));
    c.f[20] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F490:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[1] = c.r[1].w[0];
    c.f[20] = ld32((c.r[2].w[0] + 27604u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015F4E4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45A00000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[0], c.f[20]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F4EC; } }
L_0015F4E4:
    c.f[0] = c.f[20] ^ fp::kSign;
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 2;
L_0015F4EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[17], c.r[18].w[0] + 320u);
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.f[12] = c.f[20];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F51Cu);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0015F51Cu) [[unlikely]] return; }
L_0015F51C:
    c.f[12] = c.f[20];
    c.f[20] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F52Cu);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0015F52Cu) [[unlikely]] return; }
L_0015F52C:
    st32((c.r[29].w[0]), c.f[20]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F544u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x0015F544u) [[unlikely]] return; }
L_0015F544:
    c.f[21] = ld32((c.r[2].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F550u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x0015F550u) [[unlikely]] return; }
L_0015F550:
    c.f[20] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F55Cu);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x0015F55Cu) [[unlikely]] return; }
L_0015F55C:
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[20], c.f[1]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[20]);
    c.f[0] = c.f[21] ^ fp::kSign;
    c.f[12] = c.f[21];
    st32((c.r[16].w[0] + 21808u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F58Cu);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0015F58Cu) [[unlikely]] return; }
L_0015F58C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F594u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x0015F594u) [[unlikely]] return; }
L_0015F594:
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F5A8u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0015F5A8u) [[unlikely]] return; }
L_0015F5A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 752u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F5C0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015F5C0u) [[unlikely]] return; }
L_0015F5C0:
    c.f[12] = ld32((c.r[16].w[0] + 21808u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F5D4u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0015F5D4u) [[unlikely]] return; }
L_0015F5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F5DCu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015F5DCu) [[unlikely]] return; }
L_0015F5DC:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F5F4u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015F5F4u) [[unlikely]] return; }
L_0015F5F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F608u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015F608u) [[unlikely]] return; }
L_0015F608:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F618u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015F618u) [[unlikely]] return; }
L_0015F618:
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st32((c.r[18].w[0] + 500u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F648:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[17], c.r[20].w[0] + 736u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 28u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F690u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015F690u) [[unlikely]] return; }
L_0015F690:
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F6A8u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015F6A8u) [[unlikely]] return; }
L_0015F6A8:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F6C0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015F6C0u) [[unlikely]] return; }
L_0015F6C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F6CCu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015F6CCu) [[unlikely]] return; }
L_0015F6CC:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015F704; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F6F0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015F6F0u) [[unlikely]] return; }
L_0015F6F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F704u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015F704u) [[unlikely]] return; }
L_0015F704:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015F734; } }
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015F75C; } }
L_0015F734:
    set32(c.r[2], c.r[20].w[0] + 752u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F74Cu);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x0015F74Cu) [[unlikely]] return; }
L_0015F74C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] - 13148u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F768; } }
L_0015F75C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[18], c.r[20].w[0] + 752u);
    st32((c.r[2].w[0] - 13148u), c.f[20]);
    c.budget -= 3;
L_0015F768:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F77Cu);  if (depth < kMaxDepth) unit_008A(c, 168u, depth + 1u); else { c.pc = 0x0032A620u; return; } if (c.pc != 0x0015F77Cu) [[unlikely]] return; }
L_0015F77C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[12] = ld32((c.r[19].w[0] - 13148u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[16], c.r[29].w[0] + 48u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    st32((c.r[19].w[0] - 13148u), c.f[12]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7BCu);  if (depth < kMaxDepth) unit_008A(c, 121u, depth + 1u); else { c.pc = 0x00329D98u; return; } if (c.pc != 0x0015F7BCu) [[unlikely]] return; }
L_0015F7BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 21812u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7D8u);  if (depth < kMaxDepth) unit_008A(c, 117u, depth + 1u); else { c.pc = 0x00329D10u; return; } if (c.pc != 0x0015F7D8u) [[unlikely]] return; }
L_0015F7D8:
    st32((c.r[20].w[0] + 756u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7ECu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015F7ECu) [[unlikely]] return; }
L_0015F7EC:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[17].w[0] + 21808u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F804u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015F804u) [[unlikely]] return; }
L_0015F804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F80Cu);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x0015F80Cu) [[unlikely]] return; }
L_0015F80C:
    c.f[0] = ld32((c.r[2].w[0] + 60u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F824u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015F824u) [[unlikely]] return; }
L_0015F824:
    c.f[12] = ld32((c.r[17].w[0] + 21808u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F83Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015F83Cu) [[unlikely]] return; }
L_0015F83C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F850u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015F850u) [[unlikely]] return; }
L_0015F850:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F860u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015F860u) [[unlikely]] return; }
L_0015F860:
    set32(c.r[4], c.r[20].w[0] + 736u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F870u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015F870u) [[unlikely]] return; }
L_0015F870:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015F8A0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 224u), c.f[22]);
    st32((c.r[29].w[0] + 216u), c.f[21]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[3], ld32((c.r[16].w[0] + 11120u)));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015F8FC; } }
    c.f[22] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F964; } }
L_0015F8FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F914u);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x0015F914u) [[unlikely]] return; }
L_0015F914:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 66u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = c.f[3] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015F954; } }
    c.f[3] = 0u;
    c.budget -= 1;
L_0015F954:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[0] = c.r[1].w[0];
    c.f[22] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 4;
L_0015F964:
    set32(c.r[3], ld32((c.r[16].w[0] + 11120u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015F980; } }
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F9E8; } }
L_0015F980:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F998u);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x0015F998u) [[unlikely]] return; }
L_0015F998:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 67u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = c.f[3] & fp::kAbs;
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015F9D8; } }
    c.f[3] = 0u;
    c.budget -= 1;
L_0015F9D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::mul(c.f[3], c.f[0]);
    c.budget -= 4;
L_0015F9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F9F0u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015F9F0u) [[unlikely]] return; }
L_0015F9F0:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA08u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015FA08u) [[unlikely]] return; }
L_0015FA08:
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA20u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015FA20u) [[unlikely]] return; }
L_0015FA20:
    st32((c.r[29].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA34u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015FA34u) [[unlikely]] return; }
L_0015FA34:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FACC; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 21816u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015FA94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = ld32((c.r[2].w[0] + 21820u));
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 21824u));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 21824u), c.f[1]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FBC8; } }
L_0015FA94:
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015FBC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[22].w[0] + 21824u));
    c.f[0] = ld32((c.r[2].w[0] + 21820u));
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[22].w[0] + 21824u), c.f[1]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FBC8; } }
L_0015FACC:
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FBB8; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 21816u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015FB20; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = ld32((c.r[3].w[0] - 13152u));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 21828u));
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 21828u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FB4C; } }
L_0015FB20:
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[0]));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015FB4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.f[1] = ld32((c.r[21].w[0] + 21828u));
    c.f[0] = ld32((c.r[2].w[0] - 13152u));
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 21828u), c.f[1]);
    c.budget -= 7;
L_0015FB4C:
    c.f[1] = ld32((c.r[21].w[0] + 21828u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015FB88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 21828u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FBC8; } }
L_0015FB88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015FBC8; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 21828u), c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FBC8; } }
L_0015FBB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 21816u), 0u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 4;
L_0015FBC8:
    c.f[12] = ld32((c.r[21].w[0] + 21828u));
    c.f[20] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FC24; } }
    set32(c.r[16], c.r[29].w[0] + 16u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC04u);  if (depth < kMaxDepth) unit_008A(c, 121u, depth + 1u); else { c.pc = 0x00329D98u; return; } if (c.pc != 0x0015FC04u) [[unlikely]] return; }
L_0015FC04:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC14u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015FC14u) [[unlikely]] return; }
L_0015FC14:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC24u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015FC24u) [[unlikely]] return; }
L_0015FC24:
    c.f[0] = ld32((c.r[22].w[0] + 21824u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FD8C; } }
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FD8C; } }
    c.f[0] = ld32((c.r[21].w[0] + 21828u));
    set32(c.r[16], c.r[29].w[0] + 64u);
    set32(c.r[17], c.r[29].w[0] + 48u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FCF4; } }
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FCF4; } }
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC88u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015FC88u) [[unlikely]] return; }
L_0015FC88:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC94u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015FC94u) [[unlikely]] return; }
L_0015FC94:
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCA8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015FCA8u) [[unlikely]] return; }
L_0015FCA8:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCBCu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015FCBCu) [[unlikely]] return; }
L_0015FCBC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCCCu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015FCCCu) [[unlikely]] return; }
L_0015FCCC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCE4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015FCE4u) [[unlikely]] return; }
L_0015FCE4:
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCF4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015FCF4u) [[unlikely]] return; }
L_0015FCF4:
    c.f[12] = ld32((c.r[22].w[0] + 21824u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD08u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015FD08u) [[unlikely]] return; }
L_0015FD08:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD1Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015FD1Cu) [[unlikely]] return; }
L_0015FD1C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD30u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015FD30u) [[unlikely]] return; }
L_0015FD30:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD3Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015FD3Cu) [[unlikely]] return; }
L_0015FD3C:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD48u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x0015FD48u) [[unlikely]] return; }
L_0015FD48:
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FE24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD64u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x0015FD64u) [[unlikely]] return; }
L_0015FD64:
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FE24; } }
    c.f[0] = c.f[20] ^ fp::kSign;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 21808u), c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FE1C; } }
L_0015FD8C:
    c.f[0] = ld32((c.r[21].w[0] + 21828u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FE1C; } }
    fpu_compare(c, fp::key(c.f[22]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015FE1C; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDCCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015FDCCu) [[unlikely]] return; }
L_0015FDCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 21808u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDE8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015FDE8u) [[unlikely]] return; }
L_0015FDE8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDFCu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015FDFCu) [[unlikely]] return; }
L_0015FDFC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FE0Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015FE0Cu) [[unlikely]] return; }
L_0015FE0C:
    set32(c.r[4], c.r[20].w[0] + 752u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FE1Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015FE1Cu) [[unlikely]] return; }
L_0015FE1C:
    st32((c.r[21].w[0] + 21828u), 0u);
    st32((c.r[22].w[0] + 21824u), 0u);
    c.budget -= 2;
L_0015FE24:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[22] = ld32((c.r[29].w[0] + 224u));
    c.f[21] = ld32((c.r[29].w[0] + 216u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015FE60:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 344u), c.f[21]);
    st32((c.r[29].w[0] + 336u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FEB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015FEB4u) [[unlikely]] return; }
L_0015FEB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21816u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015FED4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FED4u);  if (depth < kMaxDepth) unit_009B(c, 284u, depth + 1u); else { c.pc = 0x0036DB60u; return; } if (c.pc != 0x0015FED4u) [[unlikely]] return; }
L_0015FED4:
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015FF08; } }
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.f[12] = ld32((c.r[18].w[0] + 540u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF00u);  if (depth < kMaxDepth) unit_009B(c, 287u, depth + 1u); else { c.pc = 0x0036DCE0u; return; } if (c.pc != 0x0015FF00u) [[unlikely]] return; }
L_0015FF00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FF20; } }
L_0015FF08:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF1Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015FF1Cu) [[unlikely]] return; }
L_0015FF1C:
    c.r[30].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0015FF20:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF30u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015FF30u) [[unlikely]] return; }
L_0015FF30:
    set32(c.r[17], c.r[18].w[0] + 320u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[18].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF44u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015FF44u) [[unlikely]] return; }
L_0015FF44:
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF5Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015FF5Cu) [[unlikely]] return; }
L_0015FF5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF64u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x0015FF64u) [[unlikely]] return; }
L_0015FF64:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF78u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0015FF78u) [[unlikely]] return; }
L_0015FF78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14796u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015FF98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FFA0; } }
L_0015FF98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 2;
L_0015FFA0:
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFB0u);  if (depth < kMaxDepth) unit_0071(c, 322u, depth + 1u); else { c.pc = 0x002C76D8u; return; } if (c.pc != 0x0015FFB0u) [[unlikely]] return; }
L_0015FFB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FFD8; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 8;
L_0015FFD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFE0u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015FFE0u) [[unlikely]] return; }
L_0015FFE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFF4u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015FFF4u) [[unlikely]] return; }
L_0015FFF4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0018(c, 8u, depth); } }
    [[clang::musttail]] return unit_0018(c, 2u, depth);
}

}
