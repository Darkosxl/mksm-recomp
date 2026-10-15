#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008F[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110,
    0, 0, 0, 0, 0, 0, 111, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0,
    0, 0, 0, 0, 0, 161, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 175, 0, 176, 0, 177, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220,
    0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 296,
    0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0,
    0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0,
    0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0,
    0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391,
    0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0,
    0, 421, 0, 0, 422, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0,
};

void unit_008F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0033C000;
    case 2u: goto L_0033C014;
    case 3u: goto L_0033C024;
    case 4u: goto L_0033C038;
    case 5u: goto L_0033C110;
    case 6u: goto L_0033C120;
    case 7u: goto L_0033C138;
    case 8u: goto L_0033C148;
    case 9u: goto L_0033C158;
    case 10u: goto L_0033C1E4;
    case 11u: goto L_0033C204;
    case 12u: goto L_0033C224;
    case 13u: goto L_0033C240;
    case 14u: goto L_0033C270;
    case 15u: goto L_0033C288;
    case 16u: goto L_0033C308;
    case 17u: goto L_0033C338;
    case 18u: goto L_0033C380;
    case 19u: goto L_0033C3C0;
    case 20u: goto L_0033C3D4;
    case 21u: goto L_0033C3E8;
    case 22u: goto L_0033C3F8;
    case 23u: goto L_0033C450;
    case 24u: goto L_0033C480;
    case 25u: goto L_0033C4C0;
    case 26u: goto L_0033C4D0;
    case 27u: goto L_0033C52C;
    case 28u: goto L_0033C560;
    case 29u: goto L_0033C578;
    case 30u: goto L_0033C5D8;
    case 31u: goto L_0033C5F8;
    case 32u: goto L_0033C644;
    case 33u: goto L_0033C660;
    case 34u: goto L_0033C688;
    case 35u: goto L_0033C6A8;
    case 36u: goto L_0033C6D0;
    case 37u: goto L_0033C6F0;
    case 38u: goto L_0033C720;
    case 39u: goto L_0033C748;
    case 40u: goto L_0033C768;
    case 41u: goto L_0033C790;
    case 42u: goto L_0033C7B0;
    case 43u: goto L_0033C7DC;
    case 44u: goto L_0033C7E8;
    case 45u: goto L_0033C810;
    case 46u: goto L_0033C82C;
    case 47u: goto L_0033C840;
    case 48u: goto L_0033C858;
    case 49u: goto L_0033C878;
    case 50u: goto L_0033C894;
    case 51u: goto L_0033C89C;
    case 52u: goto L_0033C8A4;
    case 53u: goto L_0033C8B0;
    case 54u: goto L_0033C8C0;
    case 55u: goto L_0033C8C8;
    case 56u: goto L_0033C8D0;
    case 57u: goto L_0033C8E8;
    case 58u: goto L_0033C914;
    case 59u: goto L_0033C978;
    case 60u: goto L_0033C988;
    case 61u: goto L_0033C9A0;
    case 62u: goto L_0033C9B0;
    case 63u: goto L_0033C9C8;
    case 64u: goto L_0033C9D8;
    case 65u: goto L_0033CA10;
    case 66u: goto L_0033CA80;
    case 67u: goto L_0033CA90;
    case 68u: goto L_0033CAC8;
    case 69u: goto L_0033CB28;
    case 70u: goto L_0033CB58;
    case 71u: goto L_0033CB70;
    case 72u: goto L_0033CB90;
    case 73u: goto L_0033CBA8;
    case 74u: goto L_0033CBF4;
    case 75u: goto L_0033CC08;
    case 76u: goto L_0033CC3C;
    case 77u: goto L_0033CC50;
    case 78u: goto L_0033CC80;
    case 79u: goto L_0033CC90;
    case 80u: goto L_0033CCC4;
    case 81u: goto L_0033CCD8;
    case 82u: goto L_0033CD08;
    case 83u: goto L_0033CD18;
    case 84u: goto L_0033CD40;
    case 85u: goto L_0033CD50;
    case 86u: goto L_0033CDB0;
    case 87u: goto L_0033CDE4;
    case 88u: goto L_0033CE00;
    case 89u: goto L_0033CE34;
    case 90u: goto L_0033CE48;
    case 91u: goto L_0033CE78;
    case 92u: goto L_0033CE88;
    case 93u: goto L_0033CEBC;
    case 94u: goto L_0033CED0;
    case 95u: goto L_0033CF00;
    case 96u: goto L_0033CF10;
    case 97u: goto L_0033CF28;
    case 98u: goto L_0033CF80;
    case 99u: goto L_0033CF90;
    case 100u: goto L_0033CFA0;
    case 101u: goto L_0033CFB0;
    case 102u: goto L_0033CFC0;
    case 103u: goto L_0033CFD8;
    case 104u: goto L_0033D030;
    case 105u: goto L_0033D050;
    case 106u: goto L_0033D110;
    case 107u: goto L_0033D120;
    case 108u: goto L_0033D14C;
    case 109u: goto L_0033D170;
    case 110u: goto L_0033D17C;
    case 111u: goto L_0033D198;
    case 112u: goto L_0033D19C;
    case 113u: goto L_0033D1A4;
    case 114u: goto L_0033D1AC;
    case 115u: goto L_0033D1D8;
    case 116u: goto L_0033D1E8;
    case 117u: goto L_0033D20C;
    case 118u: goto L_0033D218;
    case 119u: goto L_0033D234;
    case 120u: goto L_0033D23C;
    case 121u: goto L_0033D244;
    case 122u: goto L_0033D24C;
    case 123u: goto L_0033D280;
    case 124u: goto L_0033D288;
    case 125u: goto L_0033D290;
    case 126u: goto L_0033D2C8;
    case 127u: goto L_0033D300;
    case 128u: goto L_0033D30C;
    case 129u: goto L_0033D314;
    case 130u: goto L_0033D31C;
    case 131u: goto L_0033D344;
    case 132u: goto L_0033D34C;
    case 133u: goto L_0033D380;
    case 134u: goto L_0033D388;
    case 135u: goto L_0033D3B8;
    case 136u: goto L_0033D3C0;
    case 137u: goto L_0033D3F4;
    case 138u: goto L_0033D3FC;
    case 139u: goto L_0033D434;
    case 140u: goto L_0033D43C;
    case 141u: goto L_0033D444;
    case 142u: goto L_0033D44C;
    case 143u: goto L_0033D454;
    case 144u: goto L_0033D478;
    case 145u: goto L_0033D4B4;
    case 146u: goto L_0033D524;
    case 147u: goto L_0033D548;
    case 148u: goto L_0033D5B4;
    case 149u: goto L_0033D5E8;
    case 150u: goto L_0033D610;
    case 151u: goto L_0033D630;
    case 152u: goto L_0033D65C;
    case 153u: goto L_0033D6A0;
    case 154u: goto L_0033D6C0;
    case 155u: goto L_0033D6F4;
    case 156u: goto L_0033D708;
    case 157u: goto L_0033D77C;
    case 158u: goto L_0033D788;
    case 159u: goto L_0033D7F0;
    case 160u: goto L_0033D7F8;
    case 161u: goto L_0033D814;
    case 162u: goto L_0033D818;
    case 163u: goto L_0033D820;
    case 164u: goto L_0033D828;
    case 165u: goto L_0033D894;
    case 166u: goto L_0033D89C;
    case 167u: goto L_0033D8BC;
    case 168u: goto L_0033D8C0;
    case 169u: goto L_0033D8C8;
    case 170u: goto L_0033D8D0;
    case 171u: goto L_0033D91C;
    case 172u: goto L_0033D944;
    case 173u: goto L_0033D950;
    case 174u: goto L_0033D960;
    case 175u: goto L_0033D964;
    case 176u: goto L_0033D96C;
    case 177u: goto L_0033D974;
    case 178u: goto L_0033D988;
    case 179u: goto L_0033D9C4;
    case 180u: goto L_0033D9DC;
    case 181u: goto L_0033DA18;
    case 182u: goto L_0033DACC;
    case 183u: goto L_0033DB28;
    case 184u: goto L_0033DB34;
    case 185u: goto L_0033DB44;
    case 186u: goto L_0033DB48;
    case 187u: goto L_0033DB50;
    case 188u: goto L_0033DB58;
    case 189u: goto L_0033DB70;
    case 190u: goto L_0033DBB0;
    case 191u: goto L_0033DBC4;
    case 192u: goto L_0033DBCC;
    case 193u: goto L_0033DBD4;
    case 194u: goto L_0033DBE4;
    case 195u: goto L_0033DCA0;
    case 196u: goto L_0033DCAC;
    case 197u: goto L_0033DCBC;
    case 198u: goto L_0033DCC0;
    case 199u: goto L_0033DCC8;
    case 200u: goto L_0033DCD0;
    case 201u: goto L_0033DCFC;
    case 202u: goto L_0033DD20;
    case 203u: goto L_0033DD28;
    case 204u: goto L_0033DD30;
    case 205u: goto L_0033DD38;
    case 206u: goto L_0033DD48;
    case 207u: goto L_0033DD50;
    case 208u: goto L_0033DD7C;
    case 209u: goto L_0033DD84;
    case 210u: goto L_0033DDB0;
    case 211u: goto L_0033DDB8;
    case 212u: goto L_0033DDE4;
    case 213u: goto L_0033DDEC;
    case 214u: goto L_0033DE18;
    case 215u: goto L_0033DE20;
    case 216u: goto L_0033DE30;
    case 217u: goto L_0033DE38;
    case 218u: goto L_0033DE64;
    case 219u: goto L_0033DE6C;
    case 220u: goto L_0033DE7C;
    case 221u: goto L_0033DE84;
    case 222u: goto L_0033DE8C;
    case 223u: goto L_0033DEC8;
    case 224u: goto L_0033DF3C;
    case 225u: goto L_0033DF58;
    case 226u: goto L_0033DF78;
    case 227u: goto L_0033DFC4;
    case 228u: goto L_0033E008;
    case 229u: goto L_0033E04C;
    case 230u: goto L_0033E068;
    case 231u: goto L_0033E088;
    case 232u: goto L_0033E0D4;
    case 233u: goto L_0033E0EC;
    case 234u: goto L_0033E10C;
    case 235u: goto L_0033E12C;
    case 236u: goto L_0033E13C;
    case 237u: goto L_0033E164;
    case 238u: goto L_0033E188;
    case 239u: goto L_0033E1CC;
    case 240u: goto L_0033E1F0;
    case 241u: goto L_0033E21C;
    case 242u: goto L_0033E274;
    case 243u: goto L_0033E2C0;
    case 244u: goto L_0033E2D0;
    case 245u: goto L_0033E2E4;
    case 246u: goto L_0033E320;
    case 247u: goto L_0033E334;
    case 248u: goto L_0033E350;
    case 249u: goto L_0033E378;
    case 250u: goto L_0033E3A0;
    case 251u: goto L_0033E3D4;
    case 252u: goto L_0033E408;
    case 253u: goto L_0033E43C;
    case 254u: goto L_0033E470;
    case 255u: goto L_0033E4A4;
    case 256u: goto L_0033E4D8;
    case 257u: goto L_0033E50C;
    case 258u: goto L_0033E540;
    case 259u: goto L_0033E574;
    case 260u: goto L_0033E5A8;
    case 261u: goto L_0033E5B0;
    case 262u: goto L_0033E5B8;
    case 263u: goto L_0033E5D4;
    case 264u: goto L_0033E608;
    case 265u: goto L_0033E66C;
    case 266u: goto L_0033E680;
    case 267u: goto L_0033E6A0;
    case 268u: goto L_0033E6F4;
    case 269u: goto L_0033E718;
    case 270u: goto L_0033E7C8;
    case 271u: goto L_0033E7E4;
    case 272u: goto L_0033E824;
    case 273u: goto L_0033E830;
    case 274u: goto L_0033E840;
    case 275u: goto L_0033E844;
    case 276u: goto L_0033E84C;
    case 277u: goto L_0033E854;
    case 278u: goto L_0033E874;
    case 279u: goto L_0033E8B4;
    case 280u: goto L_0033E8C0;
    case 281u: goto L_0033E8E0;
    case 282u: goto L_0033E918;
    case 283u: goto L_0033E920;
    case 284u: goto L_0033E928;
    case 285u: goto L_0033E938;
    case 286u: goto L_0033E940;
    case 287u: goto L_0033E948;
    case 288u: goto L_0033E958;
    case 289u: goto L_0033E960;
    case 290u: goto L_0033E980;
    case 291u: goto L_0033E9A0;
    case 292u: goto L_0033E9B0;
    case 293u: goto L_0033E9DC;
    case 294u: goto L_0033E9E4;
    case 295u: goto L_0033E9F4;
    case 296u: goto L_0033E9FC;
    case 297u: goto L_0033EA0C;
    case 298u: goto L_0033EA14;
    case 299u: goto L_0033EA1C;
    case 300u: goto L_0033EA58;
    case 301u: goto L_0033EA88;
    case 302u: goto L_0033EAA8;
    case 303u: goto L_0033EAD4;
    case 304u: goto L_0033EB10;
    case 305u: goto L_0033EB38;
    case 306u: goto L_0033EB68;
    case 307u: goto L_0033EB98;
    case 308u: goto L_0033EBA8;
    case 309u: goto L_0033EBE4;
    case 310u: goto L_0033EC08;
    case 311u: goto L_0033EC38;
    case 312u: goto L_0033EC78;
    case 313u: goto L_0033EC88;
    case 314u: goto L_0033EC90;
    case 315u: goto L_0033EC98;
    case 316u: goto L_0033ECA0;
    case 317u: goto L_0033ECE0;
    case 318u: goto L_0033ECF0;
    case 319u: goto L_0033ED10;
    case 320u: goto L_0033ED30;
    case 321u: goto L_0033ED64;
    case 322u: goto L_0033ED78;
    case 323u: goto L_0033EDA8;
    case 324u: goto L_0033EDB8;
    case 325u: goto L_0033EDEC;
    case 326u: goto L_0033EE00;
    case 327u: goto L_0033EE30;
    case 328u: goto L_0033EE40;
    case 329u: goto L_0033EE60;
    case 330u: goto L_0033EE74;
    case 331u: goto L_0033EE88;
    case 332u: goto L_0033EEA0;
    case 333u: goto L_0033EEDC;
    case 334u: goto L_0033EEEC;
    case 335u: goto L_0033EF2C;
    case 336u: goto L_0033EF44;
    case 337u: goto L_0033EF60;
    case 338u: goto L_0033EFB8;
    case 339u: goto L_0033EFF8;
    case 340u: goto L_0033F018;
    case 341u: goto L_0033F048;
    case 342u: goto L_0033F0A8;
    case 343u: goto L_0033F0D0;
    case 344u: goto L_0033F128;
    case 345u: goto L_0033F130;
    case 346u: goto L_0033F160;
    case 347u: goto L_0033F180;
    case 348u: goto L_0033F1A0;
    case 349u: goto L_0033F1B8;
    case 350u: goto L_0033F1C8;
    case 351u: goto L_0033F240;
    case 352u: goto L_0033F25C;
    case 353u: goto L_0033F2D8;
    case 354u: goto L_0033F32C;
    case 355u: goto L_0033F348;
    case 356u: goto L_0033F358;
    case 357u: goto L_0033F39C;
    case 358u: goto L_0033F3B4;
    case 359u: goto L_0033F3C8;
    case 360u: goto L_0033F3E4;
    case 361u: goto L_0033F408;
    case 362u: goto L_0033F43C;
    case 363u: goto L_0033F460;
    case 364u: goto L_0033F4FC;
    case 365u: goto L_0033F538;
    case 366u: goto L_0033F568;
    case 367u: goto L_0033F588;
    case 368u: goto L_0033F5C0;
    case 369u: goto L_0033F5D0;
    case 370u: goto L_0033F5DC;
    case 371u: goto L_0033F5EC;
    case 372u: goto L_0033F5F8;
    case 373u: goto L_0033F608;
    case 374u: goto L_0033F614;
    case 375u: goto L_0033F624;
    case 376u: goto L_0033F630;
    case 377u: goto L_0033F640;
    case 378u: goto L_0033F64C;
    case 379u: goto L_0033F65C;
    case 380u: goto L_0033F668;
    case 381u: goto L_0033F678;
    case 382u: goto L_0033F684;
    case 383u: goto L_0033F6D8;
    case 384u: goto L_0033F740;
    case 385u: goto L_0033F7AC;
    case 386u: goto L_0033F7C0;
    case 387u: goto L_0033F83C;
    case 388u: goto L_0033F850;
    case 389u: goto L_0033F860;
    case 390u: goto L_0033F86C;
    case 391u: goto L_0033F87C;
    case 392u: goto L_0033F888;
    case 393u: goto L_0033F898;
    case 394u: goto L_0033F8A4;
    case 395u: goto L_0033F8B0;
    case 396u: goto L_0033F920;
    case 397u: goto L_0033F92C;
    case 398u: goto L_0033F930;
    case 399u: goto L_0033F9A0;
    case 400u: goto L_0033FA38;
    case 401u: goto L_0033FA48;
    case 402u: goto L_0033FA88;
    case 403u: goto L_0033FA98;
    case 404u: goto L_0033FAE0;
    case 405u: goto L_0033FB78;
    case 406u: goto L_0033FB88;
    case 407u: goto L_0033FBC8;
    case 408u: goto L_0033FBD8;
    case 409u: goto L_0033FC20;
    case 410u: goto L_0033FD20;
    case 411u: goto L_0033FD88;
    case 412u: goto L_0033FDE0;
    case 413u: goto L_0033FDF0;
    case 414u: goto L_0033FEB0;
    case 415u: goto L_0033FEBC;
    case 416u: goto L_0033FEC8;
    case 417u: goto L_0033FED4;
    case 418u: goto L_0033FEE0;
    case 419u: goto L_0033FEEC;
    case 420u: goto L_0033FEF8;
    case 421u: goto L_0033FF04;
    case 422u: goto L_0033FF10;
    case 423u: goto L_0033FF14;
    case 424u: goto L_0033FFC8;
    case 425u: goto L_0033FFDC;
    case 426u: goto L_0033FFF0;
    default: bad_entry(c, 0x0033C000u); return;
    }
L_0033C000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C024; } }
    set32(c.r[16], ld32((c.r[7].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C014u);  if (depth < kMaxDepth) unit_008F(c, 329u, depth + 1u); else { c.pc = 0x0033EE60u; return; } if (c.pc != 0x0033C014u) [[unlikely]] return; }
L_0033C014:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C024u);  if (depth < kMaxDepth) unit_00A3(c, 230u, depth + 1u); else { c.pc = 0x0038F440u; return; } if (c.pc != 0x0033C024u) [[unlikely]] return; }
L_0033C024:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C038:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[7].w[0] + 540u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0033C074; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C078; } }
L_0033C074:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C0B4; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 540u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0033C0A8; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C0AC; } }
L_0033C0A8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C0AC:
    set32(c.r[2], ld32((c.r[2].w[0] + 232u)));
    c.r[8].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0033C0B4:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0033C120; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 4272u)));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C120; } }
    set32(c.r[2], 0u + 192u);
    c.r[3].d[0] = ~(0ull | c.r[5].d[0]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 624u);
    set32(c.r[6], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0033C120; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[4], c.r[6].w[0] + 32u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C120; } }
    set32(c.r[16], ld32((c.r[7].w[0] + 548u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C110u);  if (depth < kMaxDepth) unit_008F(c, 329u, depth + 1u); else { c.pc = 0x0033EE60u; return; } if (c.pc != 0x0033C110u) [[unlikely]] return; }
L_0033C110:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C120u);  if (depth < kMaxDepth) unit_00A3(c, 230u, depth + 1u); else { c.pc = 0x0038F440u; return; } if (c.pc != 0x0033C120u) [[unlikely]] return; }
L_0033C120:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C138:
    st32((c.r[4].w[0] + 4272u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C148:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C158:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C1AC; } }
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[3].d[0] | 512ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 432u) & ~15u, c.r[2]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C224; } }
L_0033C1AC:
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), 0u);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C1E4u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0033C1E4u) [[unlikely]] return; }
L_0033C1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C204; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C204; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C204u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033C204u) [[unlikely]] return; }
L_0033C204:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 192u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 196u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C224u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C224u) [[unlikely]] return; }
L_0033C224:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[19], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C324; } }
    c.budget -= 1;
L_0033C270:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C2A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C288u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0033C288u) [[unlikely]] return; }
L_0033C288:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C2A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C2A4; } }
L_0033C2A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0033C2A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C2D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C2D0; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;
    c.budget -= 4;
L_0033C2D0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0033C2F4; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C2F4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0033C35C; } }
L_0033C2F4:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C308u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0033C308u) [[unlikely]] return; }
L_0033C308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C320; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C324; } }
L_0033C320:
    set32(c.r[16], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0033C324:
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C338u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0033C338u) [[unlikely]] return; }
L_0033C338:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C350; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C354; } }
L_0033C350:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0033C354:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C270u | kUnwind; return; } goto L_0033C270; } }
L_0033C35C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C3D4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C3D4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0033C3C8; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C3C0u);  if (depth < kMaxDepth) unit_00A2(c, 146u, depth + 1u); else { c.pc = 0x00389760u; return; } if (c.pc != 0x0033C3C0u) [[unlikely]] return; }
L_0033C3C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C3D4; } }
L_0033C3C8:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C3D4u);  if (depth < kMaxDepth) unit_00A2(c, 146u, depth + 1u); else { c.pc = 0x00389760u; return; } if (c.pc != 0x0033C3D4u) [[unlikely]] return; }
L_0033C3D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C3E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C3F8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[3], c.r[17].w[0] + 40u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 21;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033C490; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0033C450:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C480u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C480u) [[unlikely]] return; }
L_0033C480:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C450u | kUnwind; return; } goto L_0033C450; } }
L_0033C490:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C4C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 7144u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0033C52C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C52Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C52Cu) [[unlikely]] return; }
L_0033C52C:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C560; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 8008u);
    set32(c.r[7], c.r[7].w[0] - 8192u);
    set32(c.r[8], 0u + 406u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C560u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033C560u) [[unlikely]] return; }
L_0033C560:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C578:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[2] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[3] = fp::mul(c.f[3], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C5D8u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0033C5D8u) [[unlikely]] return; }
L_0033C5D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C5F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C5F8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C5F8u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033C5F8u) [[unlikely]] return; }
L_0033C5F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C618; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033C61C; } }
L_0033C618:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0033C61C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033C644; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 140u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C644u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C644u) [[unlikely]] return; }
L_0033C644:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C688u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C688u) [[unlikely]] return; }
L_0033C688:
    if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C6A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C6D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C6D0u) [[unlikely]] return; }
L_0033C6D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C6FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C6F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C6F0u) [[unlikely]] return; }
L_0033C6F0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033C708; } }
L_0033C6FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C70C; } }
L_0033C708:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033C70C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C720:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C748u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C748u) [[unlikely]] return; }
L_0033C748:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C768:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C790u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C790u) [[unlikely]] return; }
L_0033C790:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[2].d[0] != 0) c.r[16].d[0] = 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033C82C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] - 11308u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C7DCu);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x0033C7DCu) [[unlikely]] return; }
L_0033C7DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C7E8u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0033C7E8u) [[unlikely]] return; }
L_0033C7E8:
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0033C810; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C810u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C810u) [[unlikely]] return; }
L_0033C810:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C82Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033C82Cu) [[unlikely]] return; }
L_0033C82C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C840:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 6;
L_0033C858:
    c.f[20] = 0u;
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C878u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0033C878u) [[unlikely]] return; }
L_0033C878:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C894u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0033C894u) [[unlikely]] return; }
L_0033C894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C8A4; } }
L_0033C89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C8A4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033C8A4u) [[unlikely]] return; }
L_0033C8A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C8D0; } }
L_0033C8B0:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C8C0u);  if (depth < kMaxDepth) unit_008F(c, 332u, depth + 1u); else { c.pc = 0x0033EEA0u; return; } if (c.pc != 0x0033C8C0u) [[unlikely]] return; }
L_0033C8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033C89Cu | kUnwind; return; } goto L_0033C89C; } }
L_0033C8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C8D0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0033C8D0u) [[unlikely]] return; }
L_0033C8D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C8E8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033C92C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C914u);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x0033C914u) [[unlikely]] return; }
L_0033C914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C92C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033C930; } }
L_0033C92C:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_0033C930:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C958; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033C958; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
L_0033C958:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C978:
    set32(c.r[2], c.r[4].w[0] + 128u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C988:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C9A0u);  if (depth < kMaxDepth) unit_008E(c, 190u, depth + 1u); else { c.pc = 0x0033A3A8u; return; } if (c.pc != 0x0033C9A0u) [[unlikely]] return; }
L_0033C9A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C9B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033C9C8u);  if (depth < kMaxDepth) unit_008E(c, 190u, depth + 1u); else { c.pc = 0x0033A3A8u; return; } if (c.pc != 0x0033C9C8u) [[unlikely]] return; }
L_0033C9C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033C9D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033CA80; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[6], 0u + 100u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033CA3C; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 48u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
L_0033CA10:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0033CA28; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CA40; } }
L_0033CA28:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CA10u | kUnwind; return; } goto L_0033CA10; } }
L_0033CA3C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033CA40:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033CA80; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0033CA80; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033CA80; } }
    set32(c.r[4], c.r[4].w[0] + 128u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CA80u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x0033CA80u) [[unlikely]] return; }
L_0033CA80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033CB90; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[6], 0u + 100u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0033CAF4; } }
    set32(c.r[4], ld32((c.r[5].w[0] + 48u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0033CAC8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_0033CAE0; } }
    set32(c.r[16], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033CAF8; } }
L_0033CAE0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033CAC8u | kUnwind; return; } goto L_0033CAC8; } }
L_0033CAF4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033CAF8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033CB90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0033CB90; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CB28u) [[unlikely]] return; }
L_0033CB28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033CB90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033CB64; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033CB58u) [[unlikely]] return; }
L_0033CB58:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033CB90; } }
L_0033CB64:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB70u);  if (depth < kMaxDepth) unit_00A0(c, 127u, depth + 1u); else { c.pc = 0x00381840u; return; } if (c.pc != 0x0033CB70u) [[unlikely]] return; }
L_0033CB70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033CB90; } }
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CB90u);  if (depth < kMaxDepth) unit_008D(c, 330u, depth + 1u); else { c.pc = 0x00337CF8u; return; } if (c.pc != 0x0033CB90u) [[unlikely]] return; }
L_0033CB90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CBA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6504u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033CBF4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 6880u);
    set32(c.r[7], c.r[7].w[0] - 6816u);
    set32(c.r[8], 0u + 35u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CBF4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033CBF4u) [[unlikely]] return; }
L_0033CBF4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CC08:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 6880u);
    set32(c.r[8], c.r[8].w[0] - 6824u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 35u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CC3Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033CC3Cu) [[unlikely]] return; }
L_0033CC3C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CC50:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 6880u);
    set32(c.r[7], c.r[7].w[0] - 6816u);
    set32(c.r[8], 0u + 35u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CC80u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033CC80u) [[unlikely]] return; }
L_0033CC80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CC90:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 6880u);
    set32(c.r[8], c.r[8].w[0] - 6808u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 35u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CCC4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033CCC4u) [[unlikely]] return; }
L_0033CCC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CCD8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 6880u);
    set32(c.r[7], c.r[7].w[0] - 6800u);
    set32(c.r[8], 0u + 35u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD08u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033CD08u) [[unlikely]] return; }
L_0033CD08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CD18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] - 6504u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033CD40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CD40u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0033CD40u) [[unlikely]] return; }
L_0033CD40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CD50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 5944u);
    set32(c.r[3], c.r[3].w[0] - 5968u);
    set32(c.r[6], c.r[6].w[0] - 5992u);
    set32(c.r[7], c.r[7].w[0] - 6016u);
    set32(c.r[8], c.r[8].w[0] - 6072u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[8].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDB0u);  if (depth < kMaxDepth) unit_00E3(c, 18u, depth + 1u); else { c.pc = 0x0048C358u; return; } if (c.pc != 0x0033CDB0u) [[unlikely]] return; }
L_0033CDB0:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033CDE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 6112u);
    set32(c.r[7], c.r[7].w[0] - 6400u);
    set32(c.r[8], 0u + 11u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CDE4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033CDE4u) [[unlikely]] return; }
L_0033CDE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CE00:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 6112u);
    set32(c.r[8], c.r[8].w[0] - 6408u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 11u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CE34u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033CE34u) [[unlikely]] return; }
L_0033CE34:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CE48:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 6112u);
    set32(c.r[7], c.r[7].w[0] - 6400u);
    set32(c.r[8], 0u + 11u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CE78u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033CE78u) [[unlikely]] return; }
L_0033CE78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CE88:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 6112u);
    set32(c.r[8], c.r[8].w[0] - 6392u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 11u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CEBCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033CEBCu) [[unlikely]] return; }
L_0033CEBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CED0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 6112u);
    set32(c.r[7], c.r[7].w[0] - 6384u);
    set32(c.r[8], 0u + 11u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF00u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033CF00u) [[unlikely]] return; }
L_0033CF00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CF28u);  if (depth < kMaxDepth) unit_008E(c, 201u, depth + 1u); else { c.pc = 0x0033A548u; return; } if (c.pc != 0x0033CF28u) [[unlikely]] return; }
L_0033CF28:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] - 5944u);
    set32(c.r[4], c.r[4].w[0] - 5968u);
    set32(c.r[5], c.r[5].w[0] - 5992u);
    set32(c.r[6], c.r[6].w[0] - 6016u);
    set32(c.r[7], c.r[7].w[0] - 6072u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[7].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CF80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CF90:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CFA0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CFB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033CFC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033CFD8u);  if (depth < kMaxDepth) unit_008E(c, 196u, depth + 1u); else { c.pc = 0x0033A4A0u; return; } if (c.pc != 0x0033CFD8u) [[unlikely]] return; }
L_0033CFD8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 31088u);
    set32(c.r[4], c.r[4].w[0] + 31064u);
    set32(c.r[5], c.r[5].w[0] + 31040u);
    set32(c.r[6], c.r[6].w[0] + 31016u);
    set32(c.r[7], c.r[7].w[0] + 30960u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[7].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033D030:
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 20624u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033D050:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[3] = c.r[1].w[0];
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    c.f[1] = ld32((c.r[4].w[0] + 4u));
    c.f[4] = ld32((c.r[4].w[0] + 8u));
    c.f[2] = ld32((c.r[4].w[0]));
    c.f[3] = fp::mul(c.f[1], c.f[3]);
    c.f[6] = c.f[4] ^ fp::kSign;
    st32((c.r[29].w[0] + 68u), c.f[4]);
    c.f[5] = c.f[2] ^ fp::kSign;
    st32((c.r[29].w[0] + 84u), c.f[2]);
    c.f[0] = c.f[1] ^ fp::kSign;
    st32((c.r[29].w[0] + 88u), c.f[3]);
    st32((c.r[29].w[0] + 92u), c.f[6]);
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 72u), c.f[5]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[1]);
    st32((c.r[29].w[0]), c.f[5]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[4]);
    st32((c.r[29].w[0] + 12u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[6]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    st32((c.r[29].w[0] + 36u), c.f[5]);
    st32((c.r[29].w[0] + 44u), c.f[6]);
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[3]);
    st32((c.r[29].w[0] + 56u), c.f[4]);
    st32((c.r[29].w[0] + 60u), c.f[5]);
    st32((c.r[29].w[0] + 64u), c.f[3]);
    st32((c.r[29].w[0] + 76u), c.f[3]);
    st32((c.r[29].w[0] + 80u), c.f[6]);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 104u), 0u);
    st32((c.r[29].w[0] + 112u), 0u);
    st32((c.r[29].w[0] + 116u), 0u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 48;
L_0033D110:
    set32(c.r[8], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), 0u);
    st32((c.r[29].w[0] + 132u), 0u);
    st32((c.r[8].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 4;
L_0033D120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7180u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0033D1AC; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 9u);
    set32(c.r[6], 0u + 12u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D14Cu);  if (depth < kMaxDepth) unit_00B6(c, 224u, depth + 1u); else { c.pc = 0x003DBD38u; return; } if (c.pc != 0x0033D14Cu) [[unlikely]] return; }
L_0033D14C:
    set32(c.r[7], ld32((c.r[18].w[0] + 8208u)));
    set32(c.r[5], 0u + 224u);
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D170u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D170u) [[unlikely]] return; }
L_0033D170:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 224u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0033D17C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 9u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D198u);  if (depth < kMaxDepth) unit_00A9(c, 156u, depth + 1u); else { c.pc = 0x003A5B88u; return; } if (c.pc != 0x0033D198u) [[unlikely]] return; }
L_0033D198:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033D19C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D290; } }
L_0033D1A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D1ACu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033D1ACu) [[unlikely]] return; }
L_0033D1AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], 0u + 224u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 30u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D1D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D1D8u) [[unlikely]] return; }
L_0033D1D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], 0u + 224u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0033D1E8:
    set32(c.r[7], ld32((c.r[18].w[0] + 8208u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D20Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D20Cu) [[unlikely]] return; }
L_0033D20C:
    st32((c.r[29].w[0] + 144u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 148u), 0u);
    st32((c.r[29].w[0] + 152u), 0u);
    c.budget -= 3;
L_0033D218:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 9u);
    set32(c.r[8], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D234u);  if (depth < kMaxDepth) unit_00A9(c, 156u, depth + 1u); else { c.pc = 0x003A5B88u; return; } if (c.pc != 0x0033D234u) [[unlikely]] return; }
L_0033D234:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0033D23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D24C; } }
L_0033D244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D24Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033D24Cu) [[unlikely]] return; }
L_0033D24C:
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0033D290; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D280u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D280u) [[unlikely]] return; }
L_0033D280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D290; } }
L_0033D288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D290u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033D290u) [[unlikely]] return; }
L_0033D290:
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0033D2C8; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D2C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D2C8u) [[unlikely]] return; }
L_0033D2C8:
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.r[2].d[0] = c.r[6].d[0] & c.r[16].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033D300; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D300u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D300u) [[unlikely]] return; }
L_0033D300:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D454; } }
L_0033D30C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D314u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033D314u) [[unlikely]] return; }
L_0033D314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D31Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033D31Cu) [[unlikely]] return; }
L_0033D31C:
    set32(c.r[8], ld32((c.r[18].w[0] + 8208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D344u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D344u) [[unlikely]] return; }
L_0033D344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D1A4u | kUnwind; return; } goto L_0033D1A4; } }
L_0033D34C:
    set32(c.r[6], ld32((c.r[29].w[0] + 152u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D244u | kUnwind; return; } goto L_0033D244; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D380u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D380u) [[unlikely]] return; }
L_0033D380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D244u | kUnwind; return; } goto L_0033D244; } }
L_0033D388:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D288u | kUnwind; return; } goto L_0033D288; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 8208u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[7], 0u + 30u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D3B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D3B8u) [[unlikely]] return; }
L_0033D3B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D288u | kUnwind; return; } goto L_0033D288; } }
L_0033D3C0:
    set32(c.r[6], ld32((c.r[29].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D30Cu | kUnwind; return; } goto L_0033D30C; } }
    set32(c.r[8], ld32((c.r[18].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D3F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D3F4u) [[unlikely]] return; }
L_0033D3F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D30Cu | kUnwind; return; } goto L_0033D30C; } }
L_0033D3FC:
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D314u | kUnwind; return; } goto L_0033D314; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D434u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D434u) [[unlikely]] return; }
L_0033D434:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D314u | kUnwind; return; } goto L_0033D314; } }
L_0033D43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D30Cu | kUnwind; return; } goto L_0033D30C; } }
L_0033D444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D314u | kUnwind; return; } goto L_0033D314; } }
L_0033D44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D454u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0033D454u) [[unlikely]] return; }
L_0033D454:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033D478:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033D4C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D4D0; } }
L_0033D4B4:
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D570; } }
L_0033D4C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033D4D4; } }
L_0033D4D0:
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_0033D4D4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033D610; } }
    set32(c.r[19], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0033D610; } }
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D524u);  if (depth < kMaxDepth) unit_00B5(c, 161u, depth + 1u); else { c.pc = 0x003D6EC8u; return; } if (c.pc != 0x0033D524u) [[unlikely]] return; }
L_0033D524:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[7], 0u + 109u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0033D56C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_0033D548:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D4B4u | kUnwind; return; } goto L_0033D4B4; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D548u | kUnwind; return; } goto L_0033D548; } }
L_0033D56C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033D570:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[3].w[0] - 11856u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4272u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033D5A0; } }
    set32(c.r[2], 0u + 192u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 624u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D5A4; } }
L_0033D5A0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033D5A4:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5B4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0033D5B4u) [[unlikely]] return; }
L_0033D5B4:
    c.f[1] = ld32((c.r[18].w[0] + 16u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 160u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[16].w[0] + 164u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[16].w[0] + 172u), c.f[2]);
    st32((c.r[16].w[0] + 168u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D5E8u);  if (depth < kMaxDepth) unit_008E(c, 340u, depth + 1u); else { c.pc = 0x0033BB68u; return; } if (c.pc != 0x0033D5E8u) [[unlikely]] return; }
L_0033D5E8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[12] = c.r[1].w[0];
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D610u);  if (depth < kMaxDepth) unit_008F(c, 22u, depth + 1u); else { c.pc = 0x0033C3F8u; return; } if (c.pc != 0x0033D610u) [[unlikely]] return; }
L_0033D610:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033D630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033D668; } }
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D67C; } }
L_0033D65C:
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D6E8; } }
L_0033D668:
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033D67C; } }
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0033D67C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0033D6F4; } }
    set32(c.r[16], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033D6F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D6A0u);  if (depth < kMaxDepth) unit_00B5(c, 161u, depth + 1u); else { c.pc = 0x003D6EC8u; return; } if (c.pc != 0x0033D6A0u) [[unlikely]] return; }
L_0033D6A0:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[7], 0u + 109u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0033D6E4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 48u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_0033D6C0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D65Cu | kUnwind; return; } goto L_0033D65C; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D6C0u | kUnwind; return; } goto L_0033D6C0; } }
L_0033D6E4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033D6E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D6F4u);  if (depth < kMaxDepth) unit_008E(c, 342u, depth + 1u); else { c.pc = 0x0033BC08u; return; } if (c.pc != 0x0033D6F4u) [[unlikely]] return; }
L_0033D6F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033D708:
    set32(c.r[29], c.r[29].w[0] - 544u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 48u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 528u), c.f[20]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[19]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[20]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    set32(c.r[5], c.r[5].w[0] - 5576u);
    st64((c.r[29].w[0] + 368u), c.r[31].d[0]);
    set32(c.r[6], 0u + 926u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8228u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 29;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D77Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D77Cu) [[unlikely]] return; }
L_0033D77C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D788u);  if (depth < kMaxDepth) unit_008F(c, 331u, depth + 1u); else { c.pc = 0x0033EE88u; return; } if (c.pc != 0x0033D788u) [[unlikely]] return; }
L_0033D788:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFD90000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.f[20] ^ fp::kSign;
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[5], 0u + 48u);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 28u), 0u);
    set32(c.r[6], 0u + 30u);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 32u), 0u);
    st32((c.r[29].w[0] + 40u), 0u);
    st32((c.r[29].w[0] + 44u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[7], ld32((c.r[16].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D7F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D7F0u) [[unlikely]] return; }
L_0033D7F0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 2;
L_0033D7F8:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.f[12] = c.f[20];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D814u);  if (depth < kMaxDepth) unit_00A9(c, 112u, depth + 1u); else { c.pc = 0x003A55B0u; return; } if (c.pc != 0x0033D814u) [[unlikely]] return; }
L_0033D814:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033D818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D828; } }
L_0033D820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D828u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033D828u) [[unlikely]] return; }
L_0033D828:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFD90000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.f[20] ^ fp::kSign;
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[5], 0u + 48u);
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    set32(c.r[6], 0u + 30u);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    set32(c.r[16], 0u + 48u);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    set32(c.r[7], ld32((c.r[22].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D894u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D894u) [[unlikely]] return; }
L_0033D894:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0033D89C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[12] = ld32((c.r[2].w[0] - 1972u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8BCu);  if (depth < kMaxDepth) unit_00A9(c, 112u, depth + 1u); else { c.pc = 0x003A55B0u; return; } if (c.pc != 0x0033D8BCu) [[unlikely]] return; }
L_0033D8BC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033D8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D8D0; } }
L_0033D8C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D8D0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033D8D0u) [[unlikely]] return; }
L_0033D8D0:
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    st32((c.r[21].w[0] + 100u), c.r[3].w[0]);
    c.r[17] = c.vu0.vf[1];
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 152u), c.f[0]);
    st32((c.r[21].w[0] + 96u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 96u), 0u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    st8((c.r[29].w[0] + 92u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 112u), c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[1]);
    c.budget -= 19;
L_0033D91C:
    st32((c.r[29].w[0] + 88u), c.r[19].w[0]);
    set32(c.r[5], 0u + 208u);
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], ld32((c.r[22].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D944u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D944u) [[unlikely]] return; }
L_0033D944:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 208u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0033D950:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D960u);  if (depth < kMaxDepth) unit_008E(c, 338u, depth + 1u); else { c.pc = 0x0033BB28u; return; } if (c.pc != 0x0033D960u) [[unlikely]] return; }
L_0033D960:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033D964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033D974; } }
L_0033D96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D974u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033D974u) [[unlikely]] return; }
L_0033D974:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 109u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D988u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x0033D988u) [[unlikely]] return; }
L_0033D988:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033D9C4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0033D9C4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D9C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033D9C4u) [[unlikely]] return; }
L_0033D9C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11856u);
    set32(c.r[4], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033D9DCu);  if (depth < kMaxDepth) unit_00A4(c, 84u, depth + 1u); else { c.pc = 0x003912E0u; return; } if (c.pc != 0x0033D9DCu) [[unlikely]] return; }
L_0033D9DC:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[20].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033DA18; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0033DA18; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DA18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DA18u) [[unlikely]] return; }
L_0033DA18:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_0033DBEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[18], c.r[29].w[0] + 176u);
    st8((c.r[29].w[0] + 204u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull | 65535ull;
    st32((c.r[29].w[0] + 192u), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 196u), 0u);
    st32((c.r[29].w[0] + 180u), 0u);
    st32((c.r[29].w[0] + 184u), 0u);
    st8((c.r[29].w[0] + 188u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 272u), c.f[0]);
    st32((c.r[29].w[0] + 292u), c.f[0]);
    st32((c.r[29].w[0] + 312u), c.f[0]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 236u), c.f[3]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    st32((c.r[18].w[0] + 160u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    st32((c.r[29].w[0] + 340u), 0u);
    st32((c.r[18].w[0] + 168u), c.f[1]);
    st32((c.r[18].w[0] + 172u), c.f[0]);
    st32((c.r[18].w[0] + 176u), c.f[2]);
    st8((c.r[29].w[0] + 357u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 43;
L_0033DACC:
    st32((c.r[29].w[0] + 184u), c.r[19].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 6u);
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], 0u + 160u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[6], 0u + 36u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 336u), c.f[0]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 236u), c.f[3]);
    st8((c.r[29].w[0] + 356u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[22].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB28u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DB28u) [[unlikely]] return; }
L_0033DB28:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 160u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0033DB34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB44u);  if (depth < kMaxDepth) unit_00A2(c, 104u, depth + 1u); else { c.pc = 0x003891A0u; return; } if (c.pc != 0x0033DB44u) [[unlikely]] return; }
L_0033DB44:
    st32((c.r[21].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0033DB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DB58; } }
L_0033DB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB58u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033DB58u) [[unlikely]] return; }
L_0033DB58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[2], c.r[3].w[0] - 11856u);
    set32(c.r[4], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DB70u);  if (depth < kMaxDepth) unit_00A5(c, 62u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x0033DB70u) [[unlikely]] return; }
L_0033DB70:
    set32(c.r[6], ld32((c.r[21].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033DBB0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0033DBB0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DBB0u) [[unlikely]] return; }
L_0033DBB0:
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], 0u + 111u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBC4u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x0033DBC4u) [[unlikely]] return; }
L_0033DBC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DBD4; } }
L_0033DBCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBD4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033DBD4u) [[unlikely]] return; }
L_0033DBD4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DBE4u);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x0033DBE4u) [[unlikely]] return; }
L_0033DBE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DBF4; } }
L_0033DBEC:
    st32((c.r[21].w[0] + 8u), 0u);
    set32(c.r[18], c.r[29].w[0] + 176u);
    c.budget -= 2;
L_0033DBF4:
    st32((c.r[29].w[0] + 64u), 0u);
    set32(c.r[5], 0u + 112u);
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[6], 0u + 42u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[3]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[3]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st32((c.r[18].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 240u), 0u);
    st32((c.r[29].w[0] + 228u), 0u);
    st32((c.r[29].w[0] + 232u), 0u);
    st32((c.r[29].w[0] + 236u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[18].w[0] + 68u), c.f[2]);
    st32((c.r[18].w[0] + 72u), c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    st32((c.r[29].w[0] + 64u), 0u);
    st32((c.r[29].w[0] + 72u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 240u), c.r[20].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 224u), c.f[1]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    set32(c.r[7], ld32((c.r[22].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 43;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DCA0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DCA0u) [[unlikely]] return; }
L_0033DCA0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 112u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0033DCAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DCBCu);  if (depth < kMaxDepth) unit_00B5(c, 153u, depth + 1u); else { c.pc = 0x003D6DA8u; return; } if (c.pc != 0x0033DCBCu) [[unlikely]] return; }
L_0033DCBC:
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_0033DCC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DCD0; } }
L_0033DCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DCD0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033DCD0u) [[unlikely]] return; }
L_0033DCD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    set32(c.r[7], c.r[7].w[0] - 5640u);
    set32(c.r[8], c.r[8].w[0] - 5864u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 119u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DCFCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033DCFCu) [[unlikely]] return; }
L_0033DCFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[2].w[0] + 4u), c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] - 5552u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[21].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD20u);  if (depth < kMaxDepth) unit_00B5(c, 162u, depth + 1u); else { c.pc = 0x003D6ED0u; return; } if (c.pc != 0x0033DD20u) [[unlikely]] return; }
L_0033DD20:
    set32(c.r[2], 0u + 1u);
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0033DD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DD38; } }
L_0033DD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD38u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033DD38u) [[unlikely]] return; }
L_0033DD38:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD48u);  if (depth < kMaxDepth) unit_008F(c, 316u, depth + 1u); else { c.pc = 0x0033ECA0u; return; } if (c.pc != 0x0033DD48u) [[unlikely]] return; }
L_0033DD48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033DE8C; } }
L_0033DD50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DD7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DD7Cu) [[unlikely]] return; }
L_0033DD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D820u | kUnwind; return; } goto L_0033D820; } }
L_0033DD84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 30u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DDB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DDB0u) [[unlikely]] return; }
L_0033DDB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D8C8u | kUnwind; return; } goto L_0033D8C8; } }
L_0033DDB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 14u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DDE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DDE4u) [[unlikely]] return; }
L_0033DDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033D96Cu | kUnwind; return; } goto L_0033D96C; } }
L_0033DDEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 36u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DE18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DE18u) [[unlikely]] return; }
L_0033DE18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DB50u | kUnwind; return; } goto L_0033DB50; } }
L_0033DE20:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DE30u);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x0033DE30u) [[unlikely]] return; }
L_0033DE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DBCCu | kUnwind; return; } goto L_0033DBCC; } }
L_0033DE38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 42u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DE64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DE64u) [[unlikely]] return; }
L_0033DE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DCC8u | kUnwind; return; } goto L_0033DCC8; } }
L_0033DE6C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DE7Cu);  if (depth < kMaxDepth) unit_008F(c, 316u, depth + 1u); else { c.pc = 0x0033ECA0u; return; } if (c.pc != 0x0033DE7Cu) [[unlikely]] return; }
L_0033DE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033DD30u | kUnwind; return; } goto L_0033DD30; } }
L_0033DE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DE8Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0033DE8Cu) [[unlikely]] return; }
L_0033DE8C:
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 368u));
    c.f[20] = ld32((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 544u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033DEC8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DFEC; } }
    c.f[3] = ld32((c.r[3].w[0] + 8u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 28u), 0u);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DF3Cu);  if (depth < kMaxDepth) unit_00B5(c, 158u, depth + 1u); else { c.pc = 0x003D6E98u; return; } if (c.pc != 0x0033DF3Cu) [[unlikely]] return; }
L_0033DF3C:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033DFC4; } }
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DF58u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0033DF58u) [[unlikely]] return; }
L_0033DF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033DF78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DF78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DF78u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033DF78u) [[unlikely]] return; }
L_0033DF78:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033DF98; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033DF9C; } }
L_0033DF98:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0033DF9C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033DFC4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 140u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033DFC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033DFC4u) [[unlikely]] return; }
L_0033DFC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[17].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[17].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 10;
L_0033DFEC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033E008:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E164; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[19], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E12C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E04Cu);  if (depth < kMaxDepth) unit_00B5(c, 157u, depth + 1u); else { c.pc = 0x003D6E88u; return; } if (c.pc != 0x0033E04Cu) [[unlikely]] return; }
L_0033E04C:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.r[18].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E068u);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0033E068u) [[unlikely]] return; }
L_0033E068:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E088; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E088; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E088u);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033E088u) [[unlikely]] return; }
L_0033E088:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E0A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E0AC; } }
L_0033E0A8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0033E0AC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033E0D4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 136u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 140u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E0D4u) [[unlikely]] return; }
L_0033E0D4:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[18], c.r[17].w[0] + 16u);
    c.r[19].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E0ECu);  if (depth < kMaxDepth) unit_00A2(c, 64u, depth + 1u); else { c.pc = 0x00388A40u; return; } if (c.pc != 0x0033E0ECu) [[unlikely]] return; }
L_0033E0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E10C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033E10C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E10Cu);  if (depth < kMaxDepth) unit_00A2(c, 66u, depth + 1u); else { c.pc = 0x00388A60u; return; } if (c.pc != 0x0033E10Cu) [[unlikely]] return; }
L_0033E10C:
    set32(c.r[6], ld32((c.r[16].w[0] + 60u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 172u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E12Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E12Cu) [[unlikely]] return; }
L_0033E12C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E13Cu);  if (depth < kMaxDepth) unit_00B5(c, 160u, depth + 1u); else { c.pc = 0x003D6EB8u; return; } if (c.pc != 0x0033E13Cu) [[unlikely]] return; }
L_0033E13C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[1] = ld32((c.r[2].w[0] - 7752u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] - 7756u));
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E164u);  if (depth < kMaxDepth) unit_00B5(c, 72u, depth + 1u); else { c.pc = 0x003D50C0u; return; } if (c.pc != 0x0033E164u) [[unlikely]] return; }
L_0033E164:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033E188:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[22]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 480u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 640u), c.f[20]);
    set32(c.r[4], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E1CCu);  if (depth < kMaxDepth) unit_00B5(c, 161u, depth + 1u); else { c.pc = 0x003D6EC8u; return; } if (c.pc != 0x0033E1CCu) [[unlikely]] return; }
L_0033E1CC:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[8], 0u + 109u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0033E218; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_0033E1F0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_0033E2D8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E1F0u | kUnwind; return; } goto L_0033E1F0; } }
L_0033E218:
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033E21C:
    c.r[2].d[0] = c.r[30].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EA1C; } }
    set32(c.r[3], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[3].w[0] + 4u), 0u);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    vu::sub(c.vu0, 15u, 1u, 0u, 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[20] = c.vu0.vf[1];
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 8u), 0u);
    st8((c.r[29].w[0] + 12u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st32((c.r[29].w[0] + 52u), c.f[20]);
    st32((c.r[29].w[0] + 72u), c.f[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    c.budget -= 19;
L_0033E274:
    c.f[1] = ld32((c.r[16].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E2C0; } }
    c.f[3] = ld32((c.r[16].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033E2C0; } }
    c.f[2] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033E2E4; } }
L_0033E2C0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E2D0u);  if (depth < kMaxDepth) unit_008F(c, 316u, depth + 1u); else { c.pc = 0x0033ECA0u; return; } if (c.pc != 0x0033E2D0u) [[unlikely]] return; }
L_0033E2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EA1C; } }
L_0033E2D8:
    set32(c.r[30], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E21Cu | kUnwind; return; } goto L_0033E21C; } }
L_0033E2E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 124u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    set32(c.r[4], ld32((c.r[22].w[0] + 4u)));
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[2]);
    st32((c.r[29].w[0] + 112u), c.f[1]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E320u);  if (depth < kMaxDepth) unit_00B5(c, 161u, depth + 1u); else { c.pc = 0x003D6EC8u; return; } if (c.pc != 0x0033E320u) [[unlikely]] return; }
L_0033E320:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E334u);  if (depth < kMaxDepth) unit_00A3(c, 81u, depth + 1u); else { c.pc = 0x0038DAA8u; return; } if (c.pc != 0x0033E334u) [[unlikely]] return; }
L_0033E334:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E350u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E350u) [[unlikely]] return; }
L_0033E350:
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033E384; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E378u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E378u) [[unlikely]] return; }
L_0033E378:
    set32(c.r[3], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0033E948; } }
L_0033E384:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 7184u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033E5D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], 0u + 9u);
    set32(c.r[18], c.r[2].w[0] - 7504u);
    c.budget -= 3;
L_0033E3A0:
    set32(c.r[17], c.r[29].w[0] + 128u);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[17].w[0] + 4u), c.f[20]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[17].w[0] + 12u), c.f[20]);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E3D4u);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E3D4u) [[unlikely]] return; }
L_0033E3D4:
    st32((c.r[29].w[0] + 144u), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 144u);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.f[20]);
    set32(c.r[19], 0u + 8u);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E408u);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E408u) [[unlikely]] return; }
L_0033E408:
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[17], c.r[29].w[0] + 160u);
    st32((c.r[17].w[0] + 4u), c.f[20]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.f[20]);
    set32(c.r[19], 0u + 7u);
    st32((c.r[17].w[0] + 12u), c.f[20]);
    set32(c.r[4], c.r[18].w[0] + 64u);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E43Cu);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E43Cu) [[unlikely]] return; }
L_0033E43C:
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 176u);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.f[20]);
    set32(c.r[19], 0u + 6u);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    set32(c.r[4], c.r[18].w[0] + 96u);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E470u);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E470u) [[unlikely]] return; }
L_0033E470:
    st32((c.r[29].w[0] + 192u), c.f[20]);
    set32(c.r[17], c.r[29].w[0] + 192u);
    st32((c.r[17].w[0] + 4u), c.f[20]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.f[20]);
    set32(c.r[19], 0u + 5u);
    st32((c.r[17].w[0] + 12u), c.f[20]);
    set32(c.r[4], c.r[18].w[0] + 128u);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E4A4u);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E4A4u) [[unlikely]] return; }
L_0033E4A4:
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 208u);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.f[20]);
    set32(c.r[19], 0u + 4u);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    set32(c.r[4], c.r[18].w[0] + 160u);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E4D8u);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E4D8u) [[unlikely]] return; }
L_0033E4D8:
    st32((c.r[29].w[0] + 224u), c.f[20]);
    set32(c.r[17], c.r[29].w[0] + 224u);
    st32((c.r[17].w[0] + 4u), c.f[20]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.f[20]);
    set32(c.r[19], 0u + 3u);
    st32((c.r[17].w[0] + 12u), c.f[20]);
    set32(c.r[4], c.r[18].w[0] + 192u);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E50Cu);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E50Cu) [[unlikely]] return; }
L_0033E50C:
    st32((c.r[29].w[0] + 240u), c.f[20]);
    set32(c.r[16], c.r[29].w[0] + 240u);
    st32((c.r[16].w[0] + 4u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.f[20]);
    set32(c.r[19], 0u + 2u);
    st32((c.r[16].w[0] + 12u), c.f[20]);
    set32(c.r[4], c.r[18].w[0] + 224u);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E540u);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E540u) [[unlikely]] return; }
L_0033E540:
    st32((c.r[29].w[0] + 256u), c.f[20]);
    set32(c.r[17], c.r[29].w[0] + 256u);
    st32((c.r[17].w[0] + 4u), c.f[20]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.f[20]);
    set32(c.r[19], 0u + 1u);
    st32((c.r[17].w[0] + 12u), c.f[20]);
    set32(c.r[4], c.r[18].w[0] + 256u);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E574u);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E574u) [[unlikely]] return; }
L_0033E574:
    st32((c.r[29].w[0] + 272u), c.f[20]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    st32((c.r[2].w[0] + 12u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.f[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 8u), c.f[20]);
    set32(c.r[4], c.r[18].w[0] + 288u);
    c.f[12] = ld32((c.r[21].w[0] - 1104u));
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[2]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5A8u);  if (depth < kMaxDepth) unit_00A9(c, 42u, depth + 1u); else { c.pc = 0x003A4518u; return; } if (c.pc != 0x0033E5A8u) [[unlikely]] return; }
L_0033E5A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E5B8; } }
L_0033E5B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5B8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033E5B8u) [[unlikely]] return; }
L_0033E5B8:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00340000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 3792u);
    st32((c.r[3].w[0] - 7184u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E5D4u);  if (depth < kMaxDepth) unit_00DD(c, 222u, depth + 1u); else { c.pc = 0x00476848u; return; } if (c.pc != 0x0033E5D4u) [[unlikely]] return; }
L_0033E5D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 7180u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033E610; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], c.r[30].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] - 7504u);
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E608u);  if (depth < kMaxDepth) unit_00E3(c, 34u, depth + 1u); else { c.pc = 0x0048C588u; return; } if (c.pc != 0x0033E608u) [[unlikely]] return; }
L_0033E608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E684; } }
L_0033E610:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033E674; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F590000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] - 7504u);
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[3], c.r[30].w[0] << 5);
    st32((c.r[4].w[0] + 4u), c.f[1]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 140u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 112u);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E66Cu);  if (depth < kMaxDepth) unit_00E3(c, 34u, depth + 1u); else { c.pc = 0x0048C588u; return; } if (c.pc != 0x0033E66Cu) [[unlikely]] return; }
L_0033E66C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E684; } }
L_0033E674:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E680u);  if (depth < kMaxDepth) unit_008F(c, 105u, depth + 1u); else { c.pc = 0x0033D050u; return; } if (c.pc != 0x0033E680u) [[unlikely]] return; }
L_0033E680:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033E684:
    set32(c.r[2], ld32((c.r[23].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[23].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E6A0u) [[unlikely]] return; }
L_0033E6A0:
    set32(c.r[3], ld32((c.r[17].w[0] - 7180u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033E6F4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033E6F4; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033E6F4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033E6F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E6F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E6F4u) [[unlikely]] return; }
L_0033E6F4:
    set32(c.r[5], ld32((c.r[22].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033E948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 11856u);
    set32(c.r[4], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E718u);  if (depth < kMaxDepth) unit_00A3(c, 263u, depth + 1u); else { c.pc = 0x0038FB40u; return; } if (c.pc != 0x0033E718u) [[unlikely]] return; }
L_0033E718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    set32(c.r[17], c.r[29].w[0] + 288u);
    st8((c.r[29].w[0] + 316u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = 0ull | 65535ull;
    st32((c.r[29].w[0] + 304u), 0u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[29].w[0] + 308u), 0u);
    st32((c.r[29].w[0] + 292u), 0u);
    st32((c.r[29].w[0] + 296u), 0u);
    st8((c.r[29].w[0] + 300u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 30u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[20]);
    st32((c.r[29].w[0] + 384u), c.f[0]);
    st32((c.r[29].w[0] + 404u), c.f[0]);
    st32((c.r[29].w[0] + 424u), c.f[0]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[20]);
    st32((c.r[29].w[0] + 348u), c.f[20]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[20]);
    st32((c.r[17].w[0] + 160u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    st32((c.r[29].w[0] + 452u), 0u);
    st32((c.r[17].w[0] + 168u), c.f[1]);
    st32((c.r[17].w[0] + 172u), c.f[0]);
    st32((c.r[17].w[0] + 176u), c.f[2]);
    st8((c.r[29].w[0] + 469u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 468u), static_cast<std::uint8_t>(0u));
    c.budget -= 44;
L_0033E7C8:
    st32((c.r[29].w[0] + 296u), c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[22].w[0] + 4u)));
    st32((c.r[29].w[0] + 448u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E7E4u);  if (depth < kMaxDepth) unit_00B5(c, 157u, depth + 1u); else { c.pc = 0x003D6E88u; return; } if (c.pc != 0x0033E7E4u) [[unlikely]] return; }
L_0033E7E4:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[3]);
    set32(c.r[5], 0u + 160u);
    st32((c.r[29].w[0] + 348u), c.f[20]);
    set32(c.r[6], 0u + 36u);
    st8((c.r[29].w[0] + 468u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[4].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E824u) [[unlikely]] return; }
L_0033E824:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 160u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0033E830:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E840u);  if (depth < kMaxDepth) unit_00A2(c, 104u, depth + 1u); else { c.pc = 0x003891A0u; return; } if (c.pc != 0x0033E840u) [[unlikely]] return; }
L_0033E840:
    st32((c.r[22].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0033E844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E860; } }
L_0033E84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E854u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033E854u) [[unlikely]] return; }
L_0033E854:
    set32(c.r[6], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E908; } }
L_0033E860:
    set32(c.r[2], c.r[18].w[0] - 11856u);
    set32(c.r[5], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 548u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E874u);  if (depth < kMaxDepth) unit_00A5(c, 62u, depth + 1u); else { c.pc = 0x00394BA0u; return; } if (c.pc != 0x0033E874u) [[unlikely]] return; }
L_0033E874:
    set32(c.r[6], ld32((c.r[22].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033E8B4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0033E8B4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E8B4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E8B4u) [[unlikely]] return; }
L_0033E8B4:
    set32(c.r[4], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E8C0u);  if (depth < kMaxDepth) unit_00B5(c, 161u, depth + 1u); else { c.pc = 0x003D6EC8u; return; } if (c.pc != 0x0033E8C0u) [[unlikely]] return; }
L_0033E8C0:
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[7], 0u + 109u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0033E904; } }
    set32(c.r[6], ld32((c.r[2].w[0] + 48u)));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
L_0033E8E0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E854u | kUnwind; return; } goto L_0033E854; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E8E0u | kUnwind; return; } goto L_0033E8E0; } }
L_0033E904:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033E908:
    set32(c.r[4], ld32((c.r[22].w[0] + 8u)));
    set32(c.r[5], 0u + 111u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E918u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x0033E918u) [[unlikely]] return; }
L_0033E918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E928; } }
L_0033E920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E928u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033E928u) [[unlikely]] return; }
L_0033E928:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E938u);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x0033E938u) [[unlikely]] return; }
L_0033E938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033E948; } }
L_0033E940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E948u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0033E948u) [[unlikely]] return; }
L_0033E948:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E958u);  if (depth < kMaxDepth) unit_008F(c, 316u, depth + 1u); else { c.pc = 0x0033ECA0u; return; } if (c.pc != 0x0033E958u) [[unlikely]] return; }
L_0033E958:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EA1C; } }
L_0033E960:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E5B0u | kUnwind; return; } goto L_0033E5B0; } }
    set32(c.r[2], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] - c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E5B0u | kUnwind; return; } goto L_0033E5B0; } }
L_0033E980:
    set32(c.r[16], c.r[16].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E9A0u) [[unlikely]] return; }
L_0033E9A0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E980u | kUnwind; return; } goto L_0033E980; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E5B0u | kUnwind; return; } goto L_0033E5B0; } }
L_0033E9B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 36u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033E9DCu) [[unlikely]] return; }
L_0033E9DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E84Cu | kUnwind; return; } goto L_0033E84C; } }
L_0033E9E4:
    set32(c.r[4], c.r[29].w[0] + 288u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033E9F4u);  if (depth < kMaxDepth) unit_008B(c, 337u, depth + 1u); else { c.pc = 0x0032FA68u; return; } if (c.pc != 0x0033E9F4u) [[unlikely]] return; }
L_0033E9F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E920u | kUnwind; return; } goto L_0033E920; } }
L_0033E9FC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA0Cu);  if (depth < kMaxDepth) unit_008F(c, 316u, depth + 1u); else { c.pc = 0x0033ECA0u; return; } if (c.pc != 0x0033EA0Cu) [[unlikely]] return; }
L_0033EA0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033E940u | kUnwind; return; } goto L_0033E940; } }
L_0033EA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA1Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0033EA1Cu) [[unlikely]] return; }
L_0033EA1C:
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
    c.f[20] = ld32((c.r[29].w[0] + 640u));
    set32(c.r[29], c.r[29].w[0] + 656u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EA58:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EA88u);  if (depth < kMaxDepth) unit_00B5(c, 161u, depth + 1u); else { c.pc = 0x003D6EC8u; return; } if (c.pc != 0x0033EA88u) [[unlikely]] return; }
L_0033EA88:
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[8], 0u + 109u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0033EAD0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
L_0033EAA8:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[8].d[0];  if (t) { goto L_0033EB40; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EAA8u | kUnwind; return; } goto L_0033EAA8; } }
L_0033EAD0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033EAD4:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EBE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1968u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[18].d[0];  if (t) { goto L_0033EBE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EB10u);  if (depth < kMaxDepth) unit_00B5(c, 161u, depth + 1u); else { c.pc = 0x003D6EC8u; return; } if (c.pc != 0x0033EB10u) [[unlikely]] return; }
L_0033EB10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0033EB4C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EB38u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EB38u) [[unlikely]] return; }
L_0033EB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033EB68; } }
L_0033EB40:
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033EAD4u | kUnwind; return; } goto L_0033EAD4; } }
L_0033EB4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EB68u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EB68u) [[unlikely]] return; }
L_0033EB68:
    set32(c.r[2], c.r[20].w[0] - 1968u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] - 11856u);
    st32((c.r[2].w[0]), c.r[18].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EB98u);  if (depth < kMaxDepth) unit_00A4(c, 95u, depth + 1u); else { c.pc = 0x00391568u; return; } if (c.pc != 0x0033EB98u) [[unlikely]] return; }
L_0033EB98:
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EBA8u);  if (depth < kMaxDepth) unit_00A4(c, 84u, depth + 1u); else { c.pc = 0x003912E0u; return; } if (c.pc != 0x0033EBA8u) [[unlikely]] return; }
L_0033EBA8:
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033EBE4; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0033EBE4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EBE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EBE4u) [[unlikely]] return; }
L_0033EBE4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EC08:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0033EC2C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0033EC2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 1976u)));
    st32((c.r[4].w[0] - 7180u), c.r[3].w[0]);
    c.budget -= 4;
L_0033EC2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EC38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0033EC78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EC78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EC78u) [[unlikely]] return; }
L_0033EC78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EC88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EC90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EC98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ECA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0033ECE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ECE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033ECE0u) [[unlikely]] return; }
L_0033ECE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ECF0:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0033ED10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 1976u)));
    st32((c.r[4].w[0] - 7180u), c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ED10:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033ED24; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[2].w[0] - 7180u), c.r[4].w[0]);
    c.budget -= 2;
L_0033ED24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ED30:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 5640u);
    set32(c.r[8], c.r[8].w[0] - 5864u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 119u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ED64u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033ED64u) [[unlikely]] return; }
L_0033ED64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033ED78:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 5640u);
    set32(c.r[7], c.r[7].w[0] - 5856u);
    set32(c.r[8], 0u + 119u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EDA8u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033EDA8u) [[unlikely]] return; }
L_0033EDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EDB8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[7].w[0] - 5640u);
    set32(c.r[8], c.r[8].w[0] - 5848u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 119u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EDECu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0033EDECu) [[unlikely]] return; }
L_0033EDEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EE00:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] - 5640u);
    set32(c.r[7], c.r[7].w[0] - 5840u);
    set32(c.r[8], 0u + 119u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE30u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0033EE30u) [[unlikely]] return; }
L_0033EE30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EE40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 5552u);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EE74u);  if (depth < kMaxDepth) unit_00B5(c, 161u, depth + 1u); else { c.pc = 0x003D6EC8u; return; } if (c.pc != 0x0033EE74u) [[unlikely]] return; }
L_0033EE74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EE88:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EE98; } }
    st32((c.r[4].w[0]), 0u);
    c.budget -= 1;
L_0033EE98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EEA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EF2C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 11308u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EEDCu);  if (depth < kMaxDepth) unit_00B5(c, 161u, depth + 1u); else { c.pc = 0x003D6EC8u; return; } if (c.pc != 0x0033EEDCu) [[unlikely]] return; }
L_0033EEDC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EEECu);  if (depth < kMaxDepth) unit_00A4(c, 95u, depth + 1u); else { c.pc = 0x00391568u; return; } if (c.pc != 0x0033EEECu) [[unlikely]] return; }
L_0033EEEC:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033EF2C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0033EF2C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033EF2Cu) [[unlikely]] return; }
L_0033EF2C:
    c.r[2].d[0] = c.r[18].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033EF44; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EF44u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0033EF44u) [[unlikely]] return; }
L_0033EF44:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EF60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = ld32((c.r[5].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 8u));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033EFB8u);  if (depth < kMaxDepth) unit_00B5(c, 157u, depth + 1u); else { c.pc = 0x003D6E88u; return; } if (c.pc != 0x0033EFB8u) [[unlikely]] return; }
L_0033EFB8:
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[0] = ld32((c.r[2].w[0] - 7756u));
    vu::sub(c.vu0, 15u, 1u, 3u, 1u);
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[2] = c.r[2];
    st128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    vu::mulbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033EFF8:
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 64u) & ~15u, c.r[3]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 80u) & ~15u, c.r[2]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033F018:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F090; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F048u);  if (depth < kMaxDepth) unit_00B5(c, 157u, depth + 1u); else { c.pc = 0x003D6E88u; return; } if (c.pc != 0x0033F048u) [[unlikely]] return; }
L_0033F048:
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[3] = c.r[1].w[0];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[17].w[0] + 12u), c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[17].w[0]), c.f[0]);
    st32((c.r[17].w[0] + 4u), c.f[1]);
    st32((c.r[17].w[0] + 8u), c.f[2]);
    c.budget -= 18;
L_0033F090:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033F0A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F110; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F0D0u);  if (depth < kMaxDepth) unit_00B5(c, 157u, depth + 1u); else { c.pc = 0x003D6E88u; return; } if (c.pc != 0x0033F0D0u) [[unlikely]] return; }
L_0033F0D0:
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[3] = c.r[1].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    st32((c.r[16].w[0] + 12u), c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 4u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[2]);
    c.budget -= 16;
L_0033F110:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033F128:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033F130:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 7504u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F188; } }
    set32(c.r[16], c.r[2].w[0] + 320u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0033F188; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033F160:
    set32(c.r[16], c.r[16].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F180u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0033F180u) [[unlikely]] return; }
L_0033F180:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F160u | kUnwind; return; } goto L_0033F160; } }
L_0033F188:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033F1A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F1B8u);  if (depth < kMaxDepth) unit_008F(c, 310u, depth + 1u); else { c.pc = 0x0033EC08u; return; } if (c.pc != 0x0033F1B8u) [[unlikely]] return; }
L_0033F1B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033F1C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x504D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 17714ull;
    st32((c.r[17].w[0] + 280u), c.r[6].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[18].w[0]);
    st32((c.r[17].w[0] + 356u), 0u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033F270; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F228; } }
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F228:
    st32((c.r[17].w[0] + 324u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033F28C; } }
    c.budget -= 1;
L_0033F240:
    set32(c.r[2], ld32((c.r[17].w[0] + 324u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 324u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F25Cu);  if (depth < kMaxDepth) unit_008F(c, 363u, depth + 1u); else { c.pc = 0x0033F460u; return; } if (c.pc != 0x0033F25Cu) [[unlikely]] return; }
L_0033F25C:
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F240u | kUnwind; return; } goto L_0033F240; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F28C; } }
L_0033F270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4D4F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 17496ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033F28C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F330; } }
L_0033F28C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40470000u);
    c.r[1].d[0] = c.r[1].d[0] | 2621ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033F2BC; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F330; } }
L_0033F2BC:
    st32((c.r[17].w[0] + 292u), 0u);
    set32(c.r[4], c.r[17].w[0] + 12u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 132u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F2D8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0033F2D8u) [[unlikely]] return; }
L_0033F2D8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    st32((c.r[17].w[0] + 344u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F2F4; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F2F4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F30C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F30C:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[16], ld32((c.r[2].w[0] + 24u)));
    c.r[3].d[0] = c.r[16].d[0] & 3ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033F340; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F444; } }
L_0033F32C:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0033F330:
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F444; } }
L_0033F340:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033F36C; } }
L_0033F348:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F358u);  if (depth < kMaxDepth) unit_008F(c, 363u, depth + 1u); else { c.pc = 0x0033F460u; return; } if (c.pc != 0x0033F358u) [[unlikely]] return; }
L_0033F358:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F32Cu | kUnwind; return; } goto L_0033F32C; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F348u | kUnwind; return; } goto L_0033F348; } }
L_0033F36C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] - 7160u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 60u);
    st32((c.r[17].w[0] + 340u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 332u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 336u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F39Cu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x0033F39Cu) [[unlikely]] return; }
L_0033F39C:
    st32((c.r[17].w[0]), c.r[16].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3B4u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x0033F3B4u) [[unlikely]] return; }
L_0033F3B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033F430; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3C8u);  if (depth < kMaxDepth) unit_0090(c, 99u, depth + 1u); else { c.pc = 0x00340CC8u; return; } if (c.pc != 0x0033F3C8u) [[unlikely]] return; }
L_0033F3C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F430; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F3E4u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x0033F3E4u) [[unlikely]] return; }
L_0033F3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F430; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[3], c.r[2].w[0] + 208u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_0033F430; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] - 732u);
    c.budget -= 3;
L_0033F408:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 160u), 0u);
    st32((c.r[4].w[0] + 156u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 276u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F408u | kUnwind; return; } goto L_0033F408; } }
L_0033F430:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F43Cu);  if (depth < kMaxDepth) unit_0090(c, 85u, depth + 1u); else { c.pc = 0x00340B10u; return; } if (c.pc != 0x0033F43Cu) [[unlikely]] return; }
L_0033F43C:
    st32((c.r[17].w[0] + 276u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_0033F444:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033F460:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[4], ld32((c.r[3].w[0] - 7168u)));
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[3].w[0] - 7168u), c.r[2].w[0]);
    c.budget -= 18;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0033F4B8; } }
    st32((c.r[21].w[0] - 7168u), c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F974; } }
L_0033F4B8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F4D0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0033F4D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F930; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 5488u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_008F[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033F4FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F514; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F514:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033F92C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F92C; } }
    set32(c.r[3], c.r[2].w[0] + 16u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 2;
L_0033F538:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F550; } }
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0033F550:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F538u | kUnwind; return; } goto L_0033F538; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F92C; } }
L_0033F568:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F92C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F92C; } }
L_0033F588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xCCCC0000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 92u)));
    c.r[2].d[0] = c.r[2].d[0] | 52428ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033F92C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033F5B0; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F5B0:
    set32(c.r[5], ld32((c.r[18].w[0] + 92u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F918; } }
L_0033F5C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F5D0u);  if (depth < kMaxDepth) unit_0090(c, 106u, depth + 1u); else { c.pc = 0x00340E90u; return; } if (c.pc != 0x0033F5D0u) [[unlikely]] return; }
L_0033F5D0:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F5DC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F5ECu);  if (depth < kMaxDepth) unit_008F(c, 404u, depth + 1u); else { c.pc = 0x0033FAE0u; return; } if (c.pc != 0x0033F5ECu) [[unlikely]] return; }
L_0033F5EC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F5F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F608u);  if (depth < kMaxDepth) unit_008F(c, 399u, depth + 1u); else { c.pc = 0x0033F9A0u; return; } if (c.pc != 0x0033F608u) [[unlikely]] return; }
L_0033F608:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F614:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F624u);  if (depth < kMaxDepth) unit_0090(c, 100u, depth + 1u); else { c.pc = 0x00340CE8u; return; } if (c.pc != 0x0033F624u) [[unlikely]] return; }
L_0033F624:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F630:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F640u);  if (depth < kMaxDepth) unit_0090(c, 109u, depth + 1u); else { c.pc = 0x00340F28u; return; } if (c.pc != 0x0033F640u) [[unlikely]] return; }
L_0033F640:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F64C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F65Cu);  if (depth < kMaxDepth) unit_0090(c, 110u, depth + 1u); else { c.pc = 0x00340F68u; return; } if (c.pc != 0x0033F65Cu) [[unlikely]] return; }
L_0033F65C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F668:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F678u);  if (depth < kMaxDepth) unit_0090(c, 113u, depth + 1u); else { c.pc = 0x00341018u; return; } if (c.pc != 0x0033F678u) [[unlikely]] return; }
L_0033F678:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F684:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F69C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F69C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] + 12u);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0033F92C; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0033F6D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F714; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0033F714:
    set32(c.r[2], ld32((c.r[6].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F72C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[6].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F72C:
    set32(c.r[6], ld32((c.r[6].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F6D8u | kUnwind; return; } goto L_0033F6D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F92C; } }
L_0033F740:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F758; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F758:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F770; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F770:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[17].w[0] + 12u);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F7ACu);  if (depth < kMaxDepth) unit_0090(c, 96u, depth + 1u); else { c.pc = 0x00340C48u; return; } if (c.pc != 0x0033F7ACu) [[unlikely]] return; }
L_0033F7AC:
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033F930; } }
    c.budget -= 1;
L_0033F7C0:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F7FC; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_0033F7FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F814; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F814:
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F82C; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F82C:
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F83Cu);  if (depth < kMaxDepth) unit_0090(c, 96u, depth + 1u); else { c.pc = 0x00340C48u; return; } if (c.pc != 0x0033F83Cu) [[unlikely]] return; }
L_0033F83C:
    set32(c.r[16], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033F7C0u | kUnwind; return; } goto L_0033F7C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F850:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F860u);  if (depth < kMaxDepth) unit_0090(c, 118u, depth + 1u); else { c.pc = 0x00341120u; return; } if (c.pc != 0x0033F860u) [[unlikely]] return; }
L_0033F860:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F86C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F87Cu);  if (depth < kMaxDepth) unit_0090(c, 119u, depth + 1u); else { c.pc = 0x00341148u; return; } if (c.pc != 0x0033F87Cu) [[unlikely]] return; }
L_0033F87C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F888:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F898u);  if (depth < kMaxDepth) unit_0090(c, 103u, depth + 1u); else { c.pc = 0x00340DC8u; return; } if (c.pc != 0x0033F898u) [[unlikely]] return; }
L_0033F898:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F8A4:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F8B0:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F8C8; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F8C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F8E0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F8E0:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F8F8; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F8F8:
    set32(c.r[3], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033F92C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 5;
L_0033F918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033F920u);  if (depth < kMaxDepth) unit_0090(c, 96u, depth + 1u); else { c.pc = 0x00340C48u; return; } if (c.pc != 0x0033F920u) [[unlikely]] return; }
L_0033F920:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033F930; } }
L_0033F92C:
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_0033F930:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0];  if (t) { goto L_0033F964; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[4], c.r[17].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 10;
L_0033F964:
    set32(c.r[3], ld32((c.r[21].w[0] - 7168u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[21].w[0] - 7168u), c.r[3].w[0]);
    c.budget -= 4;
L_0033F974:
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
L_0033F9A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F9D8; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F9D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033F9F0; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_0033F9F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FA08; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 2;
L_0033FA08:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FA20; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 2;
L_0033FA20:
    set32(c.r[16], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033FA68; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_0033FA38:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FA48u);  if (depth < kMaxDepth) unit_008F(c, 363u, depth + 1u); else { c.pc = 0x0033F460u; return; } if (c.pc != 0x0033FA48u) [[unlikely]] return; }
L_0033FA48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0033FA5C; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FA60; } }
L_0033FA5C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033FA60:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FA38u | kUnwind; return; } goto L_0033FA38; } }
L_0033FA68:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033FABC; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033FAB8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0033FA88:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FA98u);  if (depth < kMaxDepth) unit_008F(c, 363u, depth + 1u); else { c.pc = 0x0033F460u; return; } if (c.pc != 0x0033FA98u) [[unlikely]] return; }
L_0033FA98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0033FAAC; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FAB0; } }
L_0033FAAC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033FAB0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FA88u | kUnwind; return; } goto L_0033FA88; } }
L_0033FAB8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033FABC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033FAE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FB18; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_0033FB18:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FB30; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 2;
L_0033FB30:
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FB48; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 2;
L_0033FB48:
    set32(c.r[2], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FB60; } }
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[17].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_0033FB60:
    set32(c.r[16], ld32((c.r[17].w[0] + 76u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033FBA8; } }
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_0033FB78:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FB88u);  if (depth < kMaxDepth) unit_008F(c, 363u, depth + 1u); else { c.pc = 0x0033F460u; return; } if (c.pc != 0x0033FB88u) [[unlikely]] return; }
L_0033FB88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0033FB9C; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FBA0; } }
L_0033FB9C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033FBA0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FB78u | kUnwind; return; } goto L_0033FB78; } }
L_0033FBA8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033FBFC; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0033FBF8; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0033FBC8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FBD8u);  if (depth < kMaxDepth) unit_008F(c, 363u, depth + 1u); else { c.pc = 0x0033F460u; return; } if (c.pc != 0x0033FBD8u) [[unlikely]] return; }
L_0033FBD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_0033FBEC; } }
    set32(c.r[16], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FBF0; } }
L_0033FBEC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0033FBF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FBC8u | kUnwind; return; } goto L_0033FBC8; } }
L_0033FBF8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0033FBFC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033FC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[8].w[0] + 316u), 0u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[8].w[0] + 300u), 0u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033FCCC; } }
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FC70; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033FCAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FD14; } }
L_0033FC70:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0033FCFC; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033FD14; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[8].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    st32((c.r[8].w[0] + 300u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 64u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FD14; } }
L_0033FCAC:
    set32(c.r[2], ld32((c.r[5].w[0] + 64u)));
    st32((c.r[8].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[8].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 68u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FD14; } }
L_0033FCCC:
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033FD14; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[9], 0u + 10u);
    st32((c.r[8].w[0] + 316u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    st32((c.r[8].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0] + 56u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FD14; } }
L_0033FCFC:
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    st32((c.r[8].w[0] + 316u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 16u)));
    st32((c.r[8].w[0] + 308u), c.r[3].w[0]);
    set32(c.r[9], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[5].w[0] + 48u)));
    c.budget -= 6;
L_0033FD14:
    set32(c.r[2], ld32((c.r[8].w[0] + 316u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FD2C; } }
L_0033FD20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FDE0; } }
L_0033FD2C:
    set32(c.r[2], ld32((c.r[8].w[0] + 300u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FD5C; } }
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FD20u | kUnwind; return; } goto L_0033FD20; } }
    c.r[2].d[0] = c.r[9].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FD58; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FD20u | kUnwind; return; } goto L_0033FD20; } }
L_0033FD58:
    st32((c.r[8].w[0] + 312u), c.r[9].w[0]);
    c.budget -= 1;
L_0033FD5C:
    set32(c.r[3], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FDC4; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 300u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FDC4; } }
    st32((c.r[8].w[0] + 320u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FD8C; } }
L_0033FD88:
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.budget -= 1;
L_0033FD8C:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033FDA8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0033FD88u | kUnwind; return; } goto L_0033FD88; } }
    st32((c.r[8].w[0] + 320u), c.r[5].w[0]);
    c.budget -= 1;
L_0033FDA8:
    set32(c.r[2], ld32((c.r[8].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FDC4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0033FDC4; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[8].w[0] + 308u), c.r[2].w[0]);
    c.budget -= 2;
L_0033FDC4:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[8].w[0] + 296u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[8].w[0] + 304u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033FDE0u);  if (depth < kMaxDepth) unit_008F(c, 413u, depth + 1u); else { c.pc = 0x0033FDF0u; return; } if (c.pc != 0x0033FDE0u) [[unlikely]] return; }
L_0033FDE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0033FDF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.lo.d[0] = 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[17]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033FE10; } }
    st32((c.r[5].w[0]), 0u);
    c.budget -= 1;
L_0033FE10:
    set32(c.r[2], ld32((c.r[8].w[0] + 296u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FE30; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 304u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 308u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033FE3C; } }
L_0033FE30:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 20u, depth); } }
L_0033FE3C:
    set32(c.r[9], ld32((c.r[8].w[0] + 300u)));
    c.r[13].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[8].w[0] + 316u)));
    c.r[12].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.r[25].d[0] = 0ull + 0ull;
    c.r[24].d[0] = 0ull + 0ull;
    c.r[15].d[0] = 0ull + 0ull;
    c.r[14].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = c.r[9].d[0] != c.r[2].d[0];  if (t) { goto L_0033FE84; } }
    c.r[15].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF14; } }
L_0033FE84:
    set32(c.r[3], ld32((c.r[8].w[0] + 312u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FF14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 5360u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_008F[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033FEB0:
    c.r[13].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF14; } }
L_0033FEBC:
    c.r[12].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF14; } }
L_0033FEC8:
    c.r[11].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF14; } }
L_0033FED4:
    c.r[10].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF14; } }
L_0033FEE0:
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF14; } }
L_0033FEEC:
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF14; } }
L_0033FEF8:
    c.r[25].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF14; } }
L_0033FF04:
    c.r[24].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF14; } }
L_0033FF10:
    c.r[14].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_0033FF14:
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_0033FF38; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 304u)));
    set32(c.r[2], 0u + 12u);
    c.lo.d[0] = c.r[15].d[0];
    mmi::madd(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 19u, depth); } }
L_0033FF38:
    set32(c.r[4], ld32((c.r[8].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 13u, depth); } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[3].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 8u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0033FF6C; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033FF98; } }
L_0033FF6C:
    set32(c.r[2], ld32((c.r[8].w[0] + 304u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0033FF98; } }
    c.r[2].d[0] = c.r[6].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033FF98; } }
    st32((c.r[5].w[0]), c.r[7].w[0]);
    c.budget -= 1;
L_0033FF98:
    set32(c.r[3], ld32((c.r[8].w[0] + 312u)));
    c.r[6].d[0] = c.r[6].d[0] & 16383ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(11ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 19u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 5312u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0033C000u < 16384u) { entry = entries_008F[(t - 0x0033C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033FFC8:
    set32(c.r[2], 0u + 44u);
    c.lo.d[0] = c.r[13].d[0];
    mmi::madd(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 19u, depth); } }
L_0033FFDC:
    set32(c.r[2], 0u + 28u);
    c.lo.d[0] = c.r[12].d[0];
    mmi::madd(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 19u, depth); } }
L_0033FFF0:
    set32(c.r[2], 0u + 124u);
    c.lo.d[0] = c.r[11].d[0];
    mmi::madd(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0090(c, 19u, depth); } }
    [[clang::musttail]] return unit_0090(c, 2u, depth);
}

}
