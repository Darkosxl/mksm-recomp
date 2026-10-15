#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00CB[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0,
    123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0,
    153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 0,
    0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0,
    0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 379,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 399, 0, 400,
    0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0,
    0, 0, 420, 0, 421, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437,
    0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0,
    0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0,
    0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0,
};

void unit_00CB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0042C000;
    case 2u: goto L_0042C008;
    case 3u: goto L_0042C058;
    case 4u: goto L_0042C090;
    case 5u: goto L_0042C094;
    case 6u: goto L_0042C0C0;
    case 7u: goto L_0042C12C;
    case 8u: goto L_0042C1C0;
    case 9u: goto L_0042C1F4;
    case 10u: goto L_0042C214;
    case 11u: goto L_0042C270;
    case 12u: goto L_0042C2B0;
    case 13u: goto L_0042C314;
    case 14u: goto L_0042C338;
    case 15u: goto L_0042C36C;
    case 16u: goto L_0042C38C;
    case 17u: goto L_0042C3F0;
    case 18u: goto L_0042C448;
    case 19u: goto L_0042C4AC;
    case 20u: goto L_0042C4D0;
    case 21u: goto L_0042C504;
    case 22u: goto L_0042C524;
    case 23u: goto L_0042C580;
    case 24u: goto L_0042C5E0;
    case 25u: goto L_0042C64C;
    case 26u: goto L_0042C670;
    case 27u: goto L_0042C690;
    case 28u: goto L_0042C6AC;
    case 29u: goto L_0042C6D8;
    case 30u: goto L_0042C730;
    case 31u: goto L_0042C760;
    case 32u: goto L_0042C790;
    case 33u: goto L_0042C7A8;
    case 34u: goto L_0042C7C0;
    case 35u: goto L_0042C7C8;
    case 36u: goto L_0042C7D0;
    case 37u: goto L_0042C830;
    case 38u: goto L_0042C868;
    case 39u: goto L_0042C884;
    case 40u: goto L_0042C8C0;
    case 41u: goto L_0042C930;
    case 42u: goto L_0042C960;
    case 43u: goto L_0042C9A8;
    case 44u: goto L_0042C9B0;
    case 45u: goto L_0042C9B8;
    case 46u: goto L_0042CAB8;
    case 47u: goto L_0042CB38;
    case 48u: goto L_0042CBB0;
    case 49u: goto L_0042CBE4;
    case 50u: goto L_0042CCE8;
    case 51u: goto L_0042CD40;
    case 52u: goto L_0042CF48;
    case 53u: goto L_0042CF90;
    case 54u: goto L_0042D168;
    case 55u: goto L_0042D1C8;
    case 56u: goto L_0042D1F8;
    case 57u: goto L_0042D220;
    case 58u: goto L_0042D23C;
    case 59u: goto L_0042D258;
    case 60u: goto L_0042D274;
    case 61u: goto L_0042D290;
    case 62u: goto L_0042D298;
    case 63u: goto L_0042D2BC;
    case 64u: goto L_0042D2D8;
    case 65u: goto L_0042D2F0;
    case 66u: goto L_0042D31C;
    case 67u: goto L_0042D32C;
    case 68u: goto L_0042D348;
    case 69u: goto L_0042D360;
    case 70u: goto L_0042D3B8;
    case 71u: goto L_0042D404;
    case 72u: goto L_0042D428;
    case 73u: goto L_0042D468;
    case 74u: goto L_0042D494;
    case 75u: goto L_0042D49C;
    case 76u: goto L_0042D4B4;
    case 77u: goto L_0042D4BC;
    case 78u: goto L_0042D4C8;
    case 79u: goto L_0042D4F0;
    case 80u: goto L_0042D510;
    case 81u: goto L_0042D558;
    case 82u: goto L_0042D56C;
    case 83u: goto L_0042D580;
    case 84u: goto L_0042D594;
    case 85u: goto L_0042D5E8;
    case 86u: goto L_0042D610;
    case 87u: goto L_0042D65C;
    case 88u: goto L_0042D670;
    case 89u: goto L_0042D684;
    case 90u: goto L_0042D6B0;
    case 91u: goto L_0042D6C0;
    case 92u: goto L_0042D6C8;
    case 93u: goto L_0042D6D8;
    case 94u: goto L_0042D6EC;
    case 95u: goto L_0042D71C;
    case 96u: goto L_0042D728;
    case 97u: goto L_0042D734;
    case 98u: goto L_0042D740;
    case 99u: goto L_0042D74C;
    case 100u: goto L_0042D758;
    case 101u: goto L_0042D764;
    case 102u: goto L_0042D770;
    case 103u: goto L_0042D788;
    case 104u: goto L_0042D7A8;
    case 105u: goto L_0042D7C0;
    case 106u: goto L_0042D800;
    case 107u: goto L_0042D810;
    case 108u: goto L_0042D820;
    case 109u: goto L_0042D828;
    case 110u: goto L_0042D838;
    case 111u: goto L_0042D850;
    case 112u: goto L_0042D890;
    case 113u: goto L_0042D8A0;
    case 114u: goto L_0042D8A8;
    case 115u: goto L_0042D8B0;
    case 116u: goto L_0042D8B8;
    case 117u: goto L_0042D8C0;
    case 118u: goto L_0042D8D0;
    case 119u: goto L_0042D8E0;
    case 120u: goto L_0042D8E8;
    case 121u: goto L_0042D8F0;
    case 122u: goto L_0042D8F8;
    case 123u: goto L_0042D900;
    case 124u: goto L_0042D908;
    case 125u: goto L_0042D910;
    case 126u: goto L_0042D918;
    case 127u: goto L_0042D928;
    case 128u: goto L_0042D968;
    case 129u: goto L_0042D980;
    case 130u: goto L_0042D9A0;
    case 131u: goto L_0042D9D0;
    case 132u: goto L_0042D9F8;
    case 133u: goto L_0042DA4C;
    case 134u: goto L_0042DA74;
    case 135u: goto L_0042DA84;
    case 136u: goto L_0042DAA0;
    case 137u: goto L_0042DAC8;
    case 138u: goto L_0042DAF0;
    case 139u: goto L_0042DB18;
    case 140u: goto L_0042DB28;
    case 141u: goto L_0042DB48;
    case 142u: goto L_0042DB80;
    case 143u: goto L_0042DB88;
    case 144u: goto L_0042DBB0;
    case 145u: goto L_0042DBB8;
    case 146u: goto L_0042DBE0;
    case 147u: goto L_0042DBE8;
    case 148u: goto L_0042DC10;
    case 149u: goto L_0042DC18;
    case 150u: goto L_0042DC38;
    case 151u: goto L_0042DC60;
    case 152u: goto L_0042DC78;
    case 153u: goto L_0042DC80;
    case 154u: goto L_0042DC90;
    case 155u: goto L_0042DD00;
    case 156u: goto L_0042DD40;
    case 157u: goto L_0042DD68;
    case 158u: goto L_0042DD88;
    case 159u: goto L_0042DDBC;
    case 160u: goto L_0042DDC4;
    case 161u: goto L_0042DDCC;
    case 162u: goto L_0042DDDC;
    case 163u: goto L_0042DDF4;
    case 164u: goto L_0042DEA8;
    case 165u: goto L_0042DED0;
    case 166u: goto L_0042DEEC;
    case 167u: goto L_0042DEF8;
    case 168u: goto L_0042DF10;
    case 169u: goto L_0042DF2C;
    case 170u: goto L_0042DF34;
    case 171u: goto L_0042DF3C;
    case 172u: goto L_0042DF44;
    case 173u: goto L_0042DF68;
    case 174u: goto L_0042DF80;
    case 175u: goto L_0042DF98;
    case 176u: goto L_0042DFB4;
    case 177u: goto L_0042DFC0;
    case 178u: goto L_0042DFD8;
    case 179u: goto L_0042DFF4;
    case 180u: goto L_0042E018;
    case 181u: goto L_0042E020;
    case 182u: goto L_0042E038;
    case 183u: goto L_0042E054;
    case 184u: goto L_0042E060;
    case 185u: goto L_0042E074;
    case 186u: goto L_0042E090;
    case 187u: goto L_0042E0C8;
    case 188u: goto L_0042E0DC;
    case 189u: goto L_0042E0F8;
    case 190u: goto L_0042E12C;
    case 191u: goto L_0042E134;
    case 192u: goto L_0042E150;
    case 193u: goto L_0042E188;
    case 194u: goto L_0042E1D8;
    case 195u: goto L_0042E214;
    case 196u: goto L_0042E230;
    case 197u: goto L_0042E248;
    case 198u: goto L_0042E270;
    case 199u: goto L_0042E298;
    case 200u: goto L_0042E2D8;
    case 201u: goto L_0042E308;
    case 202u: goto L_0042E31C;
    case 203u: goto L_0042E32C;
    case 204u: goto L_0042E350;
    case 205u: goto L_0042E358;
    case 206u: goto L_0042E360;
    case 207u: goto L_0042E374;
    case 208u: goto L_0042E388;
    case 209u: goto L_0042E390;
    case 210u: goto L_0042E3A0;
    case 211u: goto L_0042E3B8;
    case 212u: goto L_0042E3D0;
    case 213u: goto L_0042E3E8;
    case 214u: goto L_0042E40C;
    case 215u: goto L_0042E420;
    case 216u: goto L_0042E428;
    case 217u: goto L_0042E448;
    case 218u: goto L_0042E498;
    case 219u: goto L_0042E4A8;
    case 220u: goto L_0042E4B8;
    case 221u: goto L_0042E4C4;
    case 222u: goto L_0042E4E8;
    case 223u: goto L_0042E50C;
    case 224u: goto L_0042E51C;
    case 225u: goto L_0042E530;
    case 226u: goto L_0042E568;
    case 227u: goto L_0042E58C;
    case 228u: goto L_0042E5B4;
    case 229u: goto L_0042E5C8;
    case 230u: goto L_0042E5E4;
    case 231u: goto L_0042E5EC;
    case 232u: goto L_0042E60C;
    case 233u: goto L_0042E628;
    case 234u: goto L_0042E640;
    case 235u: goto L_0042E658;
    case 236u: goto L_0042E66C;
    case 237u: goto L_0042E6C4;
    case 238u: goto L_0042E6F0;
    case 239u: goto L_0042E730;
    case 240u: goto L_0042E738;
    case 241u: goto L_0042E740;
    case 242u: goto L_0042E750;
    case 243u: goto L_0042E758;
    case 244u: goto L_0042E770;
    case 245u: goto L_0042E788;
    case 246u: goto L_0042E7A8;
    case 247u: goto L_0042E7B8;
    case 248u: goto L_0042E7C0;
    case 249u: goto L_0042E7D0;
    case 250u: goto L_0042E7D8;
    case 251u: goto L_0042E7E8;
    case 252u: goto L_0042E7F0;
    case 253u: goto L_0042E824;
    case 254u: goto L_0042E82C;
    case 255u: goto L_0042E840;
    case 256u: goto L_0042E860;
    case 257u: goto L_0042E87C;
    case 258u: goto L_0042E8A0;
    case 259u: goto L_0042E8E0;
    case 260u: goto L_0042E8F4;
    case 261u: goto L_0042E914;
    case 262u: goto L_0042E924;
    case 263u: goto L_0042E938;
    case 264u: goto L_0042E940;
    case 265u: goto L_0042E948;
    case 266u: goto L_0042E95C;
    case 267u: goto L_0042E964;
    case 268u: goto L_0042E990;
    case 269u: goto L_0042E9BC;
    case 270u: goto L_0042E9D0;
    case 271u: goto L_0042E9D8;
    case 272u: goto L_0042E9F8;
    case 273u: goto L_0042EA30;
    case 274u: goto L_0042EA40;
    case 275u: goto L_0042EA50;
    case 276u: goto L_0042EA58;
    case 277u: goto L_0042EA78;
    case 278u: goto L_0042EA9C;
    case 279u: goto L_0042EAAC;
    case 280u: goto L_0042EAB4;
    case 281u: goto L_0042EAD0;
    case 282u: goto L_0042EB00;
    case 283u: goto L_0042EB18;
    case 284u: goto L_0042EB28;
    case 285u: goto L_0042EB30;
    case 286u: goto L_0042EB50;
    case 287u: goto L_0042EB98;
    case 288u: goto L_0042EBB8;
    case 289u: goto L_0042EC14;
    case 290u: goto L_0042EC90;
    case 291u: goto L_0042ECB8;
    case 292u: goto L_0042ECE0;
    case 293u: goto L_0042ED3C;
    case 294u: goto L_0042ED54;
    case 295u: goto L_0042ED68;
    case 296u: goto L_0042ED84;
    case 297u: goto L_0042EDC8;
    case 298u: goto L_0042EDF0;
    case 299u: goto L_0042EE04;
    case 300u: goto L_0042EE0C;
    case 301u: goto L_0042EE20;
    case 302u: goto L_0042EE68;
    case 303u: goto L_0042EE84;
    case 304u: goto L_0042EE8C;
    case 305u: goto L_0042EEA0;
    case 306u: goto L_0042EEA8;
    case 307u: goto L_0042EEB8;
    case 308u: goto L_0042EED8;
    case 309u: goto L_0042EF14;
    case 310u: goto L_0042EF28;
    case 311u: goto L_0042EF38;
    case 312u: goto L_0042EF68;
    case 313u: goto L_0042F048;
    case 314u: goto L_0042F050;
    case 315u: goto L_0042F074;
    case 316u: goto L_0042F0A8;
    case 317u: goto L_0042F0CC;
    case 318u: goto L_0042F0DC;
    case 319u: goto L_0042F0F8;
    case 320u: goto L_0042F118;
    case 321u: goto L_0042F13C;
    case 322u: goto L_0042F14C;
    case 323u: goto L_0042F168;
    case 324u: goto L_0042F198;
    case 325u: goto L_0042F1A8;
    case 326u: goto L_0042F1B0;
    case 327u: goto L_0042F1D0;
    case 328u: goto L_0042F1E0;
    case 329u: goto L_0042F20C;
    case 330u: goto L_0042F224;
    case 331u: goto L_0042F240;
    case 332u: goto L_0042F250;
    case 333u: goto L_0042F274;
    case 334u: goto L_0042F284;
    case 335u: goto L_0042F2A0;
    case 336u: goto L_0042F2F8;
    case 337u: goto L_0042F300;
    case 338u: goto L_0042F30C;
    case 339u: goto L_0042F31C;
    case 340u: goto L_0042F348;
    case 341u: goto L_0042F35C;
    case 342u: goto L_0042F364;
    case 343u: goto L_0042F378;
    case 344u: goto L_0042F3B0;
    case 345u: goto L_0042F3C4;
    case 346u: goto L_0042F3CC;
    case 347u: goto L_0042F3E0;
    case 348u: goto L_0042F410;
    case 349u: goto L_0042F430;
    case 350u: goto L_0042F444;
    case 351u: goto L_0042F44C;
    case 352u: goto L_0042F454;
    case 353u: goto L_0042F468;
    case 354u: goto L_0042F480;
    case 355u: goto L_0042F498;
    case 356u: goto L_0042F4A8;
    case 357u: goto L_0042F4C4;
    case 358u: goto L_0042F4D0;
    case 359u: goto L_0042F4D8;
    case 360u: goto L_0042F4F0;
    case 361u: goto L_0042F528;
    case 362u: goto L_0042F548;
    case 363u: goto L_0042F574;
    case 364u: goto L_0042F5E8;
    case 365u: goto L_0042F604;
    case 366u: goto L_0042F610;
    case 367u: goto L_0042F628;
    case 368u: goto L_0042F658;
    case 369u: goto L_0042F680;
    case 370u: goto L_0042F69C;
    case 371u: goto L_0042F6A4;
    case 372u: goto L_0042F6B0;
    case 373u: goto L_0042F6B8;
    case 374u: goto L_0042F6D0;
    case 375u: goto L_0042F710;
    case 376u: goto L_0042F758;
    case 377u: goto L_0042F76C;
    case 378u: goto L_0042F774;
    case 379u: goto L_0042F77C;
    case 380u: goto L_0042F790;
    case 381u: goto L_0042F7A8;
    case 382u: goto L_0042F7C0;
    case 383u: goto L_0042F7D8;
    case 384u: goto L_0042F804;
    case 385u: goto L_0042F838;
    case 386u: goto L_0042F848;
    case 387u: goto L_0042F854;
    case 388u: goto L_0042F868;
    case 389u: goto L_0042F8C0;
    case 390u: goto L_0042F938;
    case 391u: goto L_0042F950;
    case 392u: goto L_0042F95C;
    case 393u: goto L_0042F988;
    case 394u: goto L_0042F9A4;
    case 395u: goto L_0042F9C8;
    case 396u: goto L_0042F9D0;
    case 397u: goto L_0042F9E0;
    case 398u: goto L_0042F9EC;
    case 399u: goto L_0042F9F4;
    case 400u: goto L_0042F9FC;
    case 401u: goto L_0042FA18;
    case 402u: goto L_0042FA3C;
    case 403u: goto L_0042FA50;
    case 404u: goto L_0042FA68;
    case 405u: goto L_0042FA7C;
    case 406u: goto L_0042FAA4;
    case 407u: goto L_0042FAC4;
    case 408u: goto L_0042FAD0;
    case 409u: goto L_0042FADC;
    case 410u: goto L_0042FAE4;
    case 411u: goto L_0042FAF0;
    case 412u: goto L_0042FB18;
    case 413u: goto L_0042FB3C;
    case 414u: goto L_0042FB4C;
    case 415u: goto L_0042FB68;
    case 416u: goto L_0042FBA0;
    case 417u: goto L_0042FBC0;
    case 418u: goto L_0042FBE4;
    case 419u: goto L_0042FBEC;
    case 420u: goto L_0042FC08;
    case 421u: goto L_0042FC10;
    case 422u: goto L_0042FC20;
    case 423u: goto L_0042FC28;
    case 424u: goto L_0042FC3C;
    case 425u: goto L_0042FC44;
    case 426u: goto L_0042FC74;
    case 427u: goto L_0042FCA0;
    case 428u: goto L_0042FCBC;
    case 429u: goto L_0042FCE0;
    case 430u: goto L_0042FCEC;
    case 431u: goto L_0042FD14;
    case 432u: goto L_0042FD20;
    case 433u: goto L_0042FD28;
    case 434u: goto L_0042FD38;
    case 435u: goto L_0042FD44;
    case 436u: goto L_0042FD68;
    case 437u: goto L_0042FD7C;
    case 438u: goto L_0042FD88;
    case 439u: goto L_0042FD98;
    case 440u: goto L_0042FDB8;
    case 441u: goto L_0042FDE0;
    case 442u: goto L_0042FDF4;
    case 443u: goto L_0042FE28;
    case 444u: goto L_0042FE30;
    case 445u: goto L_0042FE48;
    case 446u: goto L_0042FE58;
    case 447u: goto L_0042FE78;
    case 448u: goto L_0042FE88;
    case 449u: goto L_0042FE9C;
    case 450u: goto L_0042FEA4;
    case 451u: goto L_0042FEB4;
    case 452u: goto L_0042FEF0;
    case 453u: goto L_0042FF18;
    case 454u: goto L_0042FF30;
    case 455u: goto L_0042FF50;
    case 456u: goto L_0042FF60;
    case 457u: goto L_0042FF84;
    case 458u: goto L_0042FF98;
    case 459u: goto L_0042FFB0;
    case 460u: goto L_0042FFD0;
    case 461u: goto L_0042FFE0;
    case 462u: goto L_0042FFE8;
    case 463u: goto L_0042FFF8;
    default: bad_entry(c, 0x0042C000u); return;
    }
L_0042C000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_0042C058; } }
L_0042C008:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_0042C05C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    set32(c.r[3], c.r[6].w[0] >> 31);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    st8((c.r[23].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0])));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 12;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0042C03Cu);  goto L_0042C040; }
L_0042C040:
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0042C058:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 1;
L_0042C05C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042C090; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0042C094; } }
    c.r[3].d[0] = ld8((c.r[22].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));  if (t) { goto L_0042C098; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 3;
L_0042C090:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042C094:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 1;
L_0042C098:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0042C0C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 56u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 14u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 16u);
    st64((c.r[29].w[0] + 72u), c.r[19].d[0]);
    set32(c.r[19], c.r[16].w[0] + 15u);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[2], c.r[16].w[0] + 24u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[16].w[0] + 156u);
    set32(c.r[7], c.r[16].w[0] + 12u);
    set32(c.r[8], c.r[16].w[0] + 13u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[11], c.r[16].w[0] + 20u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C12Cu); st32((c.r[29].w[0] + 8u), c.r[18].w[0]);  if (depth < kMaxDepth) unit_00CA(c, 419u, depth + 1u); else { c.pc = 0x0042BE90u; return; } if (c.pc != 0x0042C12Cu) [[unlikely]] return; }
L_0042C12C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 52u), 0u);  goto L_0042C140; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042C19C; } }
    c.budget -= 1;
L_0042C140:
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 40u), 0u);
    st32((c.r[16].w[0] + 32u), 0u);
    st16((c.r[16].w[0] + 28u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 38u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 36u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[16].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[16].w[0] + 80u), c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[16].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 32u)));
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    st16((c.r[16].w[0] + 152u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[16].w[0] + 92u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 96u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 100u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 140u), 0u);
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 23;
L_0042C19C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0042C1C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_0042C2F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C1F4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00CB(c, 142u, depth + 1u); else { c.pc = 0x0042DB80u; return; } if (c.pc != 0x0042C1F4u) [[unlikely]] return; }
L_0042C1F4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0042C2F4; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C214u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042C214u) [[unlikely]] return; }
L_0042C214:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0042C2A8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_0042C2D4; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0042C270:
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[5].d[0] = ld16((c.r[7].w[0]));
    set32(c.r[4], c.r[3].w[0] + c.r[10].w[0]);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[11].w[0]);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C270u | kUnwind; return; } goto L_0042C270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0042C2D4; } }
    c.budget -= 1;
L_0042C2A8:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0042C2D4; } }
L_0042C2B0:
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    c.r[5].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != 0ull; st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C2B0u | kUnwind; return; } goto L_0042C2B0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_0042C2D4:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_0042C2F4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0042C320; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C314u); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042C314u) [[unlikely]] return; }
L_0042C314:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0042C320:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042C338:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_0042C48C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C36Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00CB(c, 142u, depth + 1u); else { c.pc = 0x0042DB80u; return; } if (c.pc != 0x0042C36Cu) [[unlikely]] return; }
L_0042C36C:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0042C48C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C38Cu); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042C38Cu) [[unlikely]] return; }
L_0042C38C:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[10], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[11], c.r[10].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0042C438; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[12], c.r[10].w[0] + c.r[2].w[0]);  if (t) { goto L_0042C470; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[10].d[0] = 0ull | 65408ull;
    c.budget -= 3;
L_0042C3F0:
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[4], c.r[8].w[0] << 1);
    set32(c.r[5], c.r[4].w[0] + c.r[11].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[12].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 15;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C3F0u | kUnwind; return; } goto L_0042C3F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0042C470; } }
    c.budget -= 1;
L_0042C438:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0042C470; } }
    c.r[5].d[0] = c.r[11].d[0] + 0ull;
    c.r[6].d[0] = 0ull | 65408ull;
    c.budget -= 2;
L_0042C448:
    set32(c.r[2], c.r[18].w[0] + c.r[8].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[4].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C448u | kUnwind; return; } goto L_0042C448; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_0042C470:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 7;
L_0042C48C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0042C4B8; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C4ACu); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042C4ACu) [[unlikely]] return; }
L_0042C4AC:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0042C4B8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042C4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[16].w[0] + 72u);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[17].w[0])));  if (t) { goto L_0042C62C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C504u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00CB(c, 142u, depth + 1u); else { c.pc = 0x0042DB80u; return; } if (c.pc != 0x0042C504u) [[unlikely]] return; }
L_0042C504:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0042C62C; }
    set32(c.r[4], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[16].w[0] + 104u);
    set32(c.r[2], ld32((c.r[16].w[0] + 120u)));
    set32(c.r[6], c.r[16].w[0] + 108u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C524u); set32(c.r[7], c.r[16].w[0] + 112u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042C524u) [[unlikely]] return; }
L_0042C524:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[7], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[9], c.r[4].w[0] - c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 14u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[3].d[0];
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[11], ld32((c.r[17].w[0] + 20u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[9].d[0] = c.r[5].d[0];
    set32(c.r[10], c.r[11].w[0] + c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0042C5D0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 6;
    { const bool t = c.r[9].sd[0] <= 0; set32(c.r[11], c.r[11].w[0] + c.r[2].w[0]);  if (t) { goto L_0042C60C; } }
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0042C580:
    c.r[2].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[4], c.r[8].w[0] << 1);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[5], c.r[4].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[11].w[0]);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[6].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 17;
    { const bool t = c.r[6].d[0] != 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C580u | kUnwind; return; } goto L_0042C580; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));  if (t) { goto L_0042C60C; } }
    c.budget -= 1;
L_0042C5D0:
    c.budget -= 2;
    { const bool t = c.r[9].sd[0] <= 0; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0042C60C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 2;
L_0042C5E0:
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = c.r[8].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C5E0u | kUnwind; return; } goto L_0042C5E0; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 14u));
    c.budget -= 1;
L_0042C60C:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    st32((c.r[16].w[0] + 148u), c.r[2].w[0]);
    c.budget -= 8;
L_0042C62C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0042C658; }
    set32(c.r[3], ld32((c.r[16].w[0] + 128u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 132u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 148u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C64Cu); set32(c.r[6], ld32((c.r[16].w[0] + 144u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042C64Cu) [[unlikely]] return; }
L_0042C64C:
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0042C658:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042C670:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] - 27112u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C690u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 36u, depth + 1u); else { c.pc = 0x004745D8u; return; } if (c.pc != 0x0042C690u) [[unlikely]] return; }
L_0042C690:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[5].w[0] - 27104u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 4u);  if (t) { goto L_0042C6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C6ACu);  if (depth < kMaxDepth) unit_00DD(c, 36u, depth + 1u); else { c.pc = 0x004745D8u; return; } if (c.pc != 0x0042C6ACu) [[unlikely]] return; }
L_0042C6AC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0042C6C4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042C6C4; } }
    c.budget -= 1;
L_0042C6C0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042C6C4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042C6D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 156u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042C700; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C4D0u | kUnwind; return; } goto L_0042C4D0; }
L_0042C700:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042C710; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C338u | kUnwind; return; } goto L_0042C338; }
L_0042C710:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0042C728; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C1C0u | kUnwind; return; } goto L_0042C1C0; }
L_0042C728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042C730:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 1464u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_0042C758; } }
    st32((c.r[2].w[0] - 1472u), 0u);
    c.budget -= 1;
L_0042C758:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042C760:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] - 1464u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (t) { goto L_0042C784; } }
    st32((c.r[2].w[0] - 1472u), 0u);
    c.budget -= 1;
L_0042C784:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042C790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426EE0u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 292u, depth); }
L_0042C7A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426EF8u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 293u, depth); }
L_0042C7C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042C7C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042C7D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st32((c.r[29].w[0] + 56u), c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[22] = c.r[1].w[0];
    st32((c.r[29].w[0] + 40u), c.f[20]);
    c.f[20] = fp::sqrt(c.f[22]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[12] = c.f[22];
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[20]));
    c.budget -= 22;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = c.f[20];  if (t) { goto L_0042C834; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C830u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0042C830u) [[unlikely]] return; }
L_0042C830:
    c.f[21] = c.f[0];
    c.budget -= 1;
L_0042C834:
    c.f[12] = c.r[16].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4058ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C868u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0042C868u) [[unlikely]] return; }
L_0042C868:
    c.f[12] = c.f[22];
    c.f[1] = c.f[20];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[21] = fp::sub(c.f[21], c.f[0]);  if (t) { goto L_0042C888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C884u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0042C884u) [[unlikely]] return; }
L_0042C884:
    c.f[1] = c.f[0];
    c.budget -= 1;
L_0042C888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[21], c.f[20]);
    c.f[12] = fp::add(c.f[21], c.f[20]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = fp::sqrt(c.f[12]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[0]));
    c.budget -= 12;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = fp::sub(c.f[21], c.f[0]);  goto L_0042C8C4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042C8C0u);  if (depth < kMaxDepth) unit_0041(c, 416u, depth + 1u); else { c.pc = 0x00207C10u; return; } if (c.pc != 0x0042C8C0u) [[unlikely]] return; }
L_0042C8C0:
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 1;
L_0042C8C4:
    c.f[21] = ld32((c.r[29].w[0] + 48u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[3] = c.r[1].w[0];
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.f[20] = ld32((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = c.f[0] ^ fp::kSign;
    c.f[2] = fp::add(c.f[0], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042C930:
    c.r[8].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    set32(c.r[9], 0u + 128u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0042C98C; } }
    c.r[2].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[9].d[0]) { set32(c.r[7], c.r[7].w[0] + 2u);  goto L_0042C960; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0042C98C; } }
    c.budget -= 1;
L_0042C960:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + c.r[7].w[0]);  if (t) { goto L_0042C98C; } }
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[9].d[0]) { set32(c.r[7], c.r[7].w[0] + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C960u | kUnwind; return; } goto L_0042C960; }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[8].d[0] = c.r[7].d[0];
    c.budget -= 2;
L_0042C98C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    if (c.r[8].d[0] == c.r[2].d[0]) { st16((c.r[6].w[0]), static_cast<std::uint16_t>(0u));  goto L_0042C9A8; }
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0042C9A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_0042C9B0:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 2;
L_0042C9B8:
    c.r[5].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[13], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042CAB0; } }
    c.r[3].d[0] = ld8((c.r[12].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    c.r[4].d[0] = ld8((c.r[12].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_0042CAB0; } }
    c.r[3].d[0] = ld8((c.r[12].w[0] + 2u));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[12].w[0] + 4u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 5u));
    st8((c.r[9].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[12].w[0] + 6u));
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[12].w[0] + 7u));
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 8u));
    c.r[3].d[0] = ld8((c.r[12].w[0] + 10u));
    c.r[4].d[0] = ld8((c.r[12].w[0] + 9u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.r[5].d[0] = ld8((c.r[12].w[0] + 11u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[11].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[12].w[0] + 13u));
    c.r[2].d[0] = ld8((c.r[12].w[0] + 12u));
    c.r[4].d[0] = ld8((c.r[12].w[0] + 14u));
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[5].d[0] = ld8((c.r[12].w[0] + 15u));
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 40;
    if (c.r[8].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));  goto L_0042CA90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[13].w[0]), 0u);  if (t) { goto L_0042CAAC; } }
L_0042CA90:
    c.budget -= 2;
    if (c.r[8].d[0] == 0ull) { breakpoint(c, 0x0042CA94u);  goto L_0042CA98; }
L_0042CA98:
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 16u);
    mmi::div(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[13].w[0]), c.r[2].w[0]);
    c.budget -= 5;
L_0042CAAC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042CAB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042CAB8:
    c.r[5].d[0] = c.r[5].sd[0] < 18ll ? 1ull : 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042CB30; } }
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[8], 0u - 256u);
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_0042CB30; } }
    c.r[4].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & c.r[8].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042CB30; } }
    c.r[4].d[0] = ld16((c.r[7].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[4].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[8].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
L_0042CB30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042CB38:
    c.r[5].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042CBA8; } }
    c.r[3].d[0] = ld16((c.r[8].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_0042CBA8; } }
    c.r[3].d[0] = ld16((c.r[8].w[0] + 2u));
    set32(c.r[5], 0u - 256u);
    c.r[4].d[0] = ld8((c.r[8].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[4].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042CBA8; } }
    c.r[4].d[0] = ld8((c.r[8].w[0] + 18u));
    c.r[2].d[0] = 0ull + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[8].w[0] + 19u));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0042CBA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042CBB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CBE4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 47u, depth + 1u); else { c.pc = 0x0042CB38u; return; } if (c.pc != 0x0042CBE4u) [[unlikely]] return; }
L_0042CBE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042CCC8; } }
    c.r[2].d[0] = ld8((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(0u));  goto L_0042CCB8; }
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042CCC8; } }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[6], 0u - 256u);
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_0042CCC8; } }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 2u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < 28ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042CCC8; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 24u));
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 26u));
    set32(c.r[2], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 28u));
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 30u));
    set32(c.r[2], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0042CCC4; } }
L_0042CCB8:
    st16((c.r[18].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0042CCC4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042CCC8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042CCE8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[22].d[0]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 72u), c.r[23].d[0]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 1u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(0u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CD40u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 47u, depth + 1u); else { c.pc = 0x0042CB38u; return; } if (c.pc != 0x0042CD40u) [[unlikely]] return; }
L_0042CD40:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042CF20; }
    c.r[3].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[6], 0u + 48u);
    set32(c.r[4], 0u + 60u);
    c.r[7].d[0] = c.r[3].d[0] ^ 4ull;
    if (c.r[7].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0042CF1C; }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[14], 0u - 256u);  if (t) { goto L_0042CE20; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[5], c.r[6].w[0] - 4u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[14].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_0042CDC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042CF1C; } }
    c.budget -= 1;
L_0042CDC0:
    set32(c.r[13], 0u + 20u);
    if (c.r[7].d[0] == 0) c.r[13].d[0] = c.r[3].d[0];
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[7], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.r[5].d[0] = ld16((c.r[6].w[0]));
    c.r[4].d[0] = ld16((c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[5], c.r[5].w[0] << 8);
    c.r[6].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & c.r[14].d[0];
    c.r[5].d[0] = c.r[5].d[0] & c.r[14].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[6].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    st32((c.r[19].w[0]), c.r[3].w[0]);
    c.budget -= 24;
    { const bool t = c.r[4].d[0] == c.r[8].d[0]; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));  if (t) { goto L_0042CE28; } }
L_0042CE20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0042CF1C; } }
L_0042CE28:
    set32(c.r[13], c.r[13].w[0] + 2u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[10], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 2u);
    set32(c.r[3], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 4u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[11], c.r[16].w[0] + c.r[13].w[0]);
    set32(c.r[13], c.r[13].w[0] + 4u);
    c.r[7].d[0] = ld16((c.r[10].w[0]));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    set32(c.r[4], c.r[5].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[12], c.r[16].w[0] + c.r[13].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[13], c.r[13].w[0] + c.r[16].w[0]);
    c.r[8].d[0] = ld8((c.r[10].w[0] + 1u));
    set32(c.r[7], c.r[7].w[0] << 8);
    set32(c.r[5], ld32((c.r[11].w[0])));
    c.r[7].d[0] = c.r[7].d[0] & c.r[14].d[0];
    c.r[8].d[0] = c.r[8].d[0] | c.r[7].d[0];
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    set32(c.r[4], c.r[5].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[5].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[9].d[0];
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st16((c.r[22].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[12].w[0])));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[5], c.r[4].w[0] << 8);
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[4].w[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[23].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[13].w[0] + 4u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    set32(c.r[5], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[4].w[0] >> 24);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[9].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 96u)));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 61;
L_0042CF1C:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042CF20:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0042CF48:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 56u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0]), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042CF90u); set32(c.r[7], c.r[29].w[0] + 1u);  if (depth < kMaxDepth) unit_00CB(c, 47u, depth + 1u); else { c.pc = 0x0042CB38u; return; } if (c.pc != 0x0042CF90u) [[unlikely]] return; }
L_0042CF90:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042D144; }
    c.r[3].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[6], 0u + 60u);
    set32(c.r[4], 0u + 72u);
    c.r[7].d[0] = c.r[3].d[0] ^ 4ull;
    if (c.r[7].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[17].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u - 1u);  goto L_0042D140; }
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    c.r[5].d[0] = 0ull | 32768ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[10], 0u - 256u);  if (t) { goto L_0042D080; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[5], c.r[6].w[0] - 4u);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[3], 0u + 32u);  if (t) { goto L_0042D010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042D140; } }
    c.budget -= 1;
L_0042D010:
    set32(c.r[9], 0u + 20u);
    if (c.r[7].d[0] == 0) c.r[9].d[0] = c.r[3].d[0];
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41490000u);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[8].d[0] = c.r[8].d[0] | 20038ull;
    set32(c.r[5], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 2u);
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[6], c.r[9].w[0] + 20u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << 16);
    if (c.r[4].d[0] != 0) c.r[9].d[0] = c.r[6].d[0];
    set32(c.r[5], c.r[16].w[0] + c.r[9].w[0]);
    c.r[6].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 16);
    c.r[7].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 28;
    { const bool t = c.r[3].d[0] == c.r[8].d[0]; set32(c.r[9], c.r[9].w[0] + 4u);  if (t) { goto L_0042D088; } }
L_0042D080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0042D140; } }
L_0042D088:
    set32(c.r[3], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[8], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 8));
    set32(c.r[4], c.r[5].w[0] << 8);
    c.r[4].d[0] = c.r[4].d[0] & c.r[7].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[5].w[0] >> 24);
    set32(c.r[5], c.r[5].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[6].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[5], c.r[16].w[0] + c.r[9].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[6], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[9].w[0] + c.r[16].w[0]);
    ldl(c.r[3], (c.r[8].w[0] + 7u));
    ldr(c.r[3], (c.r[8].w[0]));
    ldl(c.r[4], (c.r[8].w[0] + 15u));
    ldr(c.r[4], (c.r[8].w[0] + 8u));
    sdl(c.r[3], (c.r[20].w[0] + 7u));
    sdr(c.r[3], (c.r[20].w[0]));
    sdl(c.r[4], (c.r[20].w[0] + 15u));
    sdr(c.r[4], (c.r[20].w[0] + 8u));
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[21].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.r[4].d[0] = ld8((c.r[6].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[19].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[10].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st16((c.r[19].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 46;
L_0042D140:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042D144:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0042D168:
    c.r[5].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042D1BC; } }
    c.r[3].d[0] = ld16((c.r[7].w[0]));
    c.r[5].d[0] = 0ull | 32769ull;
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] >> 8);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_0042D1BC; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 2u));
    set32(c.r[5], 0u - 256u);
    c.r[4].d[0] = ld8((c.r[7].w[0] + 3u));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] + 4u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 9;
L_0042D1BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042D1C8:
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0042D1F8; } }
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x0042D1DCu);  goto L_0042D1E0; }
L_0042D1E0:
    set32(c.r[2], c.r[2].w[0] + 33u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);  c.pc = t; return; }
L_0042D1F8:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    if (c.r[7].d[0] == 0ull) { breakpoint(c, 0x0042D200u);  goto L_0042D204; }
L_0042D204:
    set32(c.r[2], c.r[2].w[0] + 57u);
    mmi::divu(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - c.r[6].w[0]);  c.pc = t; return; }
L_0042D220:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1448u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D23Cu); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042D23Cu) [[unlikely]] return; }
L_0042D23C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[3].w[0] - 1456u), 0u);
    st32((c.r[2].w[0] - 1452u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042D258:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1448u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D274u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042D274u) [[unlikely]] return; }
L_0042D274:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[3].w[0] - 1456u), 0u);
    st32((c.r[2].w[0] - 1452u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042D290:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_0042D298:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] - 1448u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D2BCu); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0042D2BCu) [[unlikely]] return; }
L_0042D2BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1456u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0042D2D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D2D8u); set32(c.r[4], ld32((c.r[2].w[0] - 1452u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042D2D8u) [[unlikely]] return; }
L_0042D2D8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426FA0u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 300u, depth); }
L_0042D2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] - 1448u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[6], 0u + 255u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D31Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x0042D31Cu) [[unlikely]] return; }
L_0042D31C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D32Cu); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_00DD(c, 79u, depth + 1u); else { c.pc = 0x00475020u; return; } if (c.pc != 0x0042D32Cu) [[unlikely]] return; }
L_0042D32C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], ld32((c.r[3].w[0] - 1456u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042D348; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D348u); set32(c.r[4], ld32((c.r[2].w[0] - 1452u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042D348u) [[unlikely]] return; }
L_0042D348:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00426FA0u | kUnwind; return; } [[clang::musttail]] return unit_00C9(c, 300u, depth); }
L_0042D360:
    set32(c.r[2], 0u + 10u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u + 10u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 13;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0042D390u);  goto L_0042D394; }
L_0042D394:
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0042D3B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0042D3F4; } }
    c.budget -= 1;
L_0042D3B8:
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_0042D3F4; } }
    set32(c.r[2], 0u + 10u);
    set32(c.r[3], 0u + 10u);
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0042D3D4u);  goto L_0042D3D8; }
L_0042D3D8:
    c.r[8].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 6;
    if (c.r[4].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042D3B8u | kUnwind; return; } goto L_0042D3B8; }
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0042D3F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[2].w[0] - 5552u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D404u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0042D404u) [[unlikely]] return; }
L_0042D404:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[18].w[0] - 1u);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[7].d[0] = c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[7].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0042D444; } }
    set32(c.r[2], c.r[7].w[0] + c.r[17].w[0]);
    set32(c.r[6], c.r[2].w[0] - 1u);
    c.budget -= 3;
L_0042D428:
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042D428u | kUnwind; return; } goto L_0042D428; } }
L_0042D444:
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042D468:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D494u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 69u, depth + 1u); else { c.pc = 0x0042D360u; return; } if (c.pc != 0x0042D494u) [[unlikely]] return; }
L_0042D494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D49Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0042D49Cu) [[unlikely]] return; }
L_0042D49C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[17], c.r[17].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 27088u);
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D4B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 79u, depth + 1u); else { c.pc = 0x00475020u; return; } if (c.pc != 0x0042D4B4u) [[unlikely]] return; }
L_0042D4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D4BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0042D4BCu) [[unlikely]] return; }
L_0042D4BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D4C8u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x0042D4C8u) [[unlikely]] return; }
L_0042D4C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[6], 0u + 4u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042D360u | kUnwind; return; } goto L_0042D360; }
L_0042D4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00E0(c, 127u, depth); }
L_0042D510:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[4].w[0] - 1192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 5520u);
    set32(c.r[2], c.r[2].w[0] - 27080u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0042D5D4; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D558u); set32(c.r[6], 0u + 1088u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042D558u) [[unlikely]] return; }
L_0042D558:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D56Cu); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042D56Cu) [[unlikely]] return; }
L_0042D56C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] + 936u);
    set32(c.r[5], 0u + 255u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D580u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042D580u) [[unlikely]] return; }
L_0042D580:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] + 1192u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D594u); set32(c.r[6], 0u + 32u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042D594u) [[unlikely]] return; }
L_0042D594:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0] + 1236u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1240u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 1224u), 0u);
    st32((c.r[7].w[0] + 928u), 0u);
    st32((c.r[8].w[0] + 1228u), 0u);
    st32((c.r[9].w[0] + 1232u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 16;
L_0042D5D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042D5E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], c.r[3].w[0] - 1192u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0042D6A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D610u);  if (depth < kMaxDepth) unit_00C4(c, 324u, depth + 1u); else { c.pc = 0x004131E0u; return; } if (c.pc != 0x0042D610u) [[unlikely]] return; }
L_0042D610:
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[10], 0u + 1u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1192u);
    set32(c.r[6], 0u + 32u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[12].w[0] + 1240u), c.r[10].w[0]);
    st32((c.r[11].w[0] + 1236u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 1232u), 0u);
    st32((c.r[7].w[0] + 1228u), 0u);
    st32((c.r[8].w[0] + 928u), 0u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D65Cu); st32((c.r[9].w[0] + 1224u), 0u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042D65Cu) [[unlikely]] return; }
L_0042D65C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], 0u + 255u);
    set32(c.r[4], c.r[4].w[0] + 936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D670u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042D670u) [[unlikely]] return; }
L_0042D670:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[4].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D684u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042D684u) [[unlikely]] return; }
L_0042D684:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1184u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1088u);
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_0042D6A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042D6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D6C0u);  if (depth < kMaxDepth) unit_00CB(c, 34u, depth + 1u); else { c.pc = 0x0042C7C0u; return; } if (c.pc != 0x0042D6C0u) [[unlikely]] return; }
L_0042D6C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D6C8u);  if (depth < kMaxDepth) unit_00CB(c, 93u, depth + 1u); else { c.pc = 0x0042D6D8u; return; } if (c.pc != 0x0042D6C8u) [[unlikely]] return; }
L_0042D6C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C7C8u | kUnwind; return; } goto L_0042C7C8; }
L_0042D6D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D6ECu);  if (depth < kMaxDepth) unit_00CB(c, 32u, depth + 1u); else { c.pc = 0x0042C790u; return; } if (c.pc != 0x0042D6ECu) [[unlikely]] return; }
L_0042D6EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[16], c.r[2].w[0] + 1244u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));  if (t) { goto L_0042D710; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C7A8u | kUnwind; return; } goto L_0042C7A8; }
L_0042D710:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D71Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CB(c, 33u, depth + 1u); else { c.pc = 0x0042C7A8u; return; } if (c.pc != 0x0042D71Cu) [[unlikely]] return; }
L_0042D71C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D728u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 317u, depth + 1u); else { c.pc = 0x0041E388u; return; } if (c.pc != 0x0042D728u) [[unlikely]] return; }
L_0042D728:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D734u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 21u, depth + 1u); else { c.pc = 0x004181F8u; return; } if (c.pc != 0x0042D734u) [[unlikely]] return; }
L_0042D734:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D740u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 14u, depth + 1u); else { c.pc = 0x00418150u; return; } if (c.pc != 0x0042D740u) [[unlikely]] return; }
L_0042D740:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D74Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C4(c, 387u, depth + 1u); else { c.pc = 0x00413850u; return; } if (c.pc != 0x0042D74Cu) [[unlikely]] return; }
L_0042D74C:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D758u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 14u, depth + 1u); else { c.pc = 0x00418150u; return; } if (c.pc != 0x0042D758u) [[unlikely]] return; }
L_0042D758:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D764u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C6(c, 21u, depth + 1u); else { c.pc = 0x004181F8u; return; } if (c.pc != 0x0042D764u) [[unlikely]] return; }
L_0042D764:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D770u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C7(c, 317u, depth + 1u); else { c.pc = 0x0041E388u; return; } if (c.pc != 0x0042D770u) [[unlikely]] return; }
L_0042D770:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042D788:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 8;
L_0042D7A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1248u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D7C0u);  if (depth < kMaxDepth) unit_00CB(c, 128u, depth + 1u); else { c.pc = 0x0042D968u; return; } if (c.pc != 0x0042D7C0u) [[unlikely]] return; }
L_0042D7C0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0042D7F8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042D82C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0042D808; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042D818; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042D830; } }
    c.budget -= 1;
L_0042D7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D800u);  if (depth < kMaxDepth) unit_00CB(c, 118u, depth + 1u); else { c.pc = 0x0042D8D0u; return; } if (c.pc != 0x0042D800u) [[unlikely]] return; }
L_0042D800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042D82C; } }
L_0042D808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D810u);  if (depth < kMaxDepth) unit_00C9(c, 342u, depth + 1u); else { c.pc = 0x00427660u; return; } if (c.pc != 0x0042D810u) [[unlikely]] return; }
L_0042D810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042D82C; } }
L_0042D818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D820u);  if (depth < kMaxDepth) unit_00C9(c, 343u, depth + 1u); else { c.pc = 0x00427678u; return; } if (c.pc != 0x0042D820u) [[unlikely]] return; }
L_0042D820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D828u);  if (depth < kMaxDepth) unit_00C9(c, 344u, depth + 1u); else { c.pc = 0x00427690u; return; } if (c.pc != 0x0042D828u) [[unlikely]] return; }
L_0042D828:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0042D82C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042D830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042D838:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 1248u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D850u);  if (depth < kMaxDepth) unit_00CB(c, 128u, depth + 1u); else { c.pc = 0x0042D968u; return; } if (c.pc != 0x0042D850u) [[unlikely]] return; }
L_0042D850:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0042D8C0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042D8C4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0042D888; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042D898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042D8C8; } }
    c.budget -= 1;
L_0042D888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D890u);  if (depth < kMaxDepth) unit_00C9(c, 337u, depth + 1u); else { c.pc = 0x004275E8u; return; } if (c.pc != 0x0042D890u) [[unlikely]] return; }
L_0042D890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042D8C4; } }
L_0042D898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D8A0u);  if (depth < kMaxDepth) unit_00C9(c, 337u, depth + 1u); else { c.pc = 0x004275E8u; return; } if (c.pc != 0x0042D8A0u) [[unlikely]] return; }
L_0042D8A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D8A8u);  if (depth < kMaxDepth) unit_00C9(c, 338u, depth + 1u); else { c.pc = 0x00427600u; return; } if (c.pc != 0x0042D8A8u) [[unlikely]] return; }
L_0042D8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D8B0u);  if (depth < kMaxDepth) unit_00C9(c, 339u, depth + 1u); else { c.pc = 0x00427618u; return; } if (c.pc != 0x0042D8B0u) [[unlikely]] return; }
L_0042D8B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D8B8u);  if (depth < kMaxDepth) unit_00C9(c, 340u, depth + 1u); else { c.pc = 0x00427630u; return; } if (c.pc != 0x0042D8B8u) [[unlikely]] return; }
L_0042D8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D8C0u);  if (depth < kMaxDepth) unit_00C9(c, 342u, depth + 1u); else { c.pc = 0x00427660u; return; } if (c.pc != 0x0042D8C0u) [[unlikely]] return; }
L_0042D8C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0042D8C4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042D8C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042D8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D8E0u);  if (depth < kMaxDepth) unit_00C9(c, 337u, depth + 1u); else { c.pc = 0x004275E8u; return; } if (c.pc != 0x0042D8E0u) [[unlikely]] return; }
L_0042D8E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D8E8u);  if (depth < kMaxDepth) unit_00C9(c, 338u, depth + 1u); else { c.pc = 0x00427600u; return; } if (c.pc != 0x0042D8E8u) [[unlikely]] return; }
L_0042D8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D8F0u);  if (depth < kMaxDepth) unit_00C9(c, 339u, depth + 1u); else { c.pc = 0x00427618u; return; } if (c.pc != 0x0042D8F0u) [[unlikely]] return; }
L_0042D8F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D8F8u);  if (depth < kMaxDepth) unit_00C9(c, 340u, depth + 1u); else { c.pc = 0x00427630u; return; } if (c.pc != 0x0042D8F8u) [[unlikely]] return; }
L_0042D8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D900u);  if (depth < kMaxDepth) unit_00C9(c, 341u, depth + 1u); else { c.pc = 0x00427648u; return; } if (c.pc != 0x0042D900u) [[unlikely]] return; }
L_0042D900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D908u);  if (depth < kMaxDepth) unit_00C9(c, 342u, depth + 1u); else { c.pc = 0x00427660u; return; } if (c.pc != 0x0042D908u) [[unlikely]] return; }
L_0042D908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D910u);  if (depth < kMaxDepth) unit_00C9(c, 343u, depth + 1u); else { c.pc = 0x00427678u; return; } if (c.pc != 0x0042D910u) [[unlikely]] return; }
L_0042D910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D918u);  if (depth < kMaxDepth) unit_00C9(c, 344u, depth + 1u); else { c.pc = 0x00427690u; return; } if (c.pc != 0x0042D918u) [[unlikely]] return; }
L_0042D918:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042D928:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 16;
L_0042D968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042D990; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042D980u);  if (depth < kMaxDepth) unit_00C5(c, 127u, depth + 1u); else { c.pc = 0x00414D18u; return; } if (c.pc != 0x0042D980u) [[unlikely]] return; }
L_0042D980:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    set32(c.r[4], 0u + 2u);
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_0042D990:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042D9A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 1264u);
    set32(c.r[6], 0u + 960u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_0042D9D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[4].w[0] + 1264u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0042DA1C; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0042D9F8:
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 60u);  if (t) { goto L_0042DA1C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042D9F8u | kUnwind; return; } goto L_0042D9F8; }
L_0042DA1C:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042DA88; } }
    set32(c.r[16], c.r[17].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + 1264u);
    set32(c.r[16], c.r[16].w[0] - c.r[17].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] << 2);
    set32(c.r[6], 0u + 60u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DA4Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042DA4Cu) [[unlikely]] return; }
L_0042DA4C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[4], 0u + 500u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = 0ull | 44100ull;
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[6], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 12u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DA74u); set32(c.r[7], c.r[16].w[0] + 50u);  if (depth < kMaxDepth) unit_00CB(c, 36u, depth + 1u); else { c.pc = 0x0042C7D0u; return; } if (c.pc != 0x0042DA74u) [[unlikely]] return; }
L_0042DA74:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DA84u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042DA84u) [[unlikely]] return; }
L_0042DA84:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0042DA88:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042DAA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], c.r[2].w[0] + 50u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 48u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042C7D0u | kUnwind; return; } goto L_0042C7D0; }
L_0042DAC8:
    c.r[3].d[0] = ld16((c.r[5].w[0]));
    st16((c.r[4].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0]));
    st16((c.r[4].w[0] + 42u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    st16((c.r[4].w[0] + 44u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0042DAF0:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 40u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 42u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 44u));
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 46u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0042DB18:
    st16((c.r[4].w[0] + 56u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st16((c.r[4].w[0] + 52u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 54u), static_cast<std::uint16_t>(c.r[6].w[0]));  c.pc = t; return; }
L_0042DB28:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 52u));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 54u));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[7].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  c.pc = t; return; }
L_0042DB48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042DB70; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 60u);
    st32((c.r[2].w[0]), 0u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_0042DB70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042DB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_0042DB88:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0042DBB0; } }
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[7].w[0]);  c.pc = t; return; }
L_0042DBB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0042DBB8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0042DBE0; } }
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[7].w[0]);  c.pc = t; return; }
L_0042DBE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0042DBE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0042DC10; } }
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[7].w[0]);  c.pc = t; return; }
L_0042DC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0042DC18:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042DC2C; } }
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0042DC2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042DC38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 8u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00DD(c, 50u, depth); }
L_0042DC60:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[4].w[0] + 12u), 0u);  goto L_0042DC70; }
L_0042DC70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0042DC78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_0042DC80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 1256u), c.r[2].w[0]);  c.pc = t; return; }
L_0042DC90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0042DCC0; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_0042DCC0:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0042DD74; }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[17].d[0]) { c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));  goto L_0042DD08; }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], c.r[16].w[0] + 40u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[10], c.r[16].w[0] + 52u);
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 50u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 54u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DD00u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CD(c, 54u, depth + 1u); else { c.pc = 0x00435268u; return; } if (c.pc != 0x0042DD00u) [[unlikely]] return; }
L_0042DD00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0042DD68; } }
L_0042DD08:
    set32(c.r[12], c.r[16].w[0] + 52u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[7], c.r[16].w[0] + 40u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[9], c.r[16].w[0] + 44u);
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 36u)));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 50u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 56u)));
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0]), c.r[12].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DD40u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CD(c, 63u, depth + 1u); else { c.pc = 0x00435B58u; return; } if (c.pc != 0x0042DD40u) [[unlikely]] return; }
L_0042DD40:
    set32(c.r[3], c.r[2].w[0] >> 31);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0042DD6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DD68u);  if (depth < kMaxDepth) unit_00CB(c, 153u, depth + 1u); else { c.pc = 0x0042DC80u; return; } if (c.pc != 0x0042DD68u) [[unlikely]] return; }
L_0042DD68:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0042DD6C:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0042DD74:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042DD88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[18], c.r[16].w[0] + 24u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DDBCu); c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x0042DDBCu) [[unlikely]] return; }
L_0042DDBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DDC4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 165u, depth + 1u); else { c.pc = 0x0042DED0u; return; } if (c.pc != 0x0042DDC4u) [[unlikely]] return; }
L_0042DDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DDCCu);  if (depth < kMaxDepth) unit_00CB(c, 186u, depth + 1u); else { c.pc = 0x0042E090u; return; } if (c.pc != 0x0042DDCCu) [[unlikely]] return; }
L_0042DDCC:
    set32(c.r[17], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[21], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DDDCu); set32(c.r[16], ld32((c.r[21].w[0] + 4u)));  if (depth < kMaxDepth) unit_00C5(c, 174u, depth + 1u); else { c.pc = 0x00415368u; return; } if (c.pc != 0x0042DDDCu) [[unlikely]] return; }
L_0042DDDC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DDF4u); c.r[8].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 193u, depth + 1u); else { c.pc = 0x0042E188u; return; } if (c.pc != 0x0042DDF4u) [[unlikely]] return; }
L_0042DDF4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00430000u);
    set32(c.r[12], c.r[5].w[0] - 8344u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[11], c.r[4].w[0] - 8320u);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[9], c.r[2].w[0] - 8456u);
    set32(c.r[10], c.r[3].w[0] - 8296u);
    set32(c.r[6], c.r[6].w[0] - 7336u);
    set32(c.r[7], c.r[7].w[0] - 6264u);
    c.budget -= 17;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] - 26976u);  if (t) { goto L_0042DE68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 27000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042D2F0u | kUnwind; return; } goto L_0042D2F0; }
L_0042DE68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[16].w[0] + 180u), c.r[8].w[0]);
    st32((c.r[2].w[0] - 11176u), c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[3].w[0] - 5688u), c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[2].w[0] - 5692u), c.r[11].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[3].w[0] - 5696u), c.r[12].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[2].w[0] - 5700u), c.r[6].w[0]);
    st32((c.r[3].w[0] - 5664u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DEA8u); set32(c.r[5], ld32((c.r[21].w[0] + 80u)));  if (depth < kMaxDepth) unit_00CB(c, 241u, depth + 1u); else { c.pc = 0x0042E740u; return; } if (c.pc != 0x0042DEA8u) [[unlikely]] return; }
L_0042DEA8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415380u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 175u, depth); }
L_0042DED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[2].w[0] - 11176u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042DEEC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DEECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042DEECu) [[unlikely]] return; }
L_0042DEEC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042DEF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF10u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C6(c, 188u, depth + 1u); else { c.pc = 0x00419308u; return; } if (c.pc != 0x0042DF10u) [[unlikely]] return; }
L_0042DF10:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[17].w[0] + 180u)));
    c.budget -= 5;
    if (c.r[16].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0042DF58; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF2Cu);  if (depth < kMaxDepth) unit_00C5(c, 174u, depth + 1u); else { c.pc = 0x00415368u; return; } if (c.pc != 0x0042DF2Cu) [[unlikely]] return; }
L_0042DF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF34u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 211u, depth + 1u); else { c.pc = 0x0042E3B8u; return; } if (c.pc != 0x0042DF34u) [[unlikely]] return; }
L_0042DF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF3Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 200u, depth + 1u); else { c.pc = 0x0042E2D8u; return; } if (c.pc != 0x0042DF3Cu) [[unlikely]] return; }
L_0042DF3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DF44u); st32((c.r[17].w[0] + 180u), 0u);  if (depth < kMaxDepth) unit_00C5(c, 175u, depth + 1u); else { c.pc = 0x00415380u; return; } if (c.pc != 0x0042DF44u) [[unlikely]] return; }
L_0042DF44:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_0042E0F8; }
L_0042DF58:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042DF68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0042E7A0; }
L_0042DF80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_0042E7A8; }
L_0042DF98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DFB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 174u, depth + 1u); else { c.pc = 0x00415368u; return; } if (c.pc != 0x0042DFB4u) [[unlikely]] return; }
L_0042DFB4:
    set32(c.r[18], ld32((c.r[16].w[0] + 180u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DFC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 204u, depth + 1u); else { c.pc = 0x0042E350u; return; } if (c.pc != 0x0042DFC0u) [[unlikely]] return; }
L_0042DFC0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0042DFDC; }
    st32((c.r[16].w[0] + 144u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DFD8u); st32((c.r[16].w[0] + 136u), 0u);  if (depth < kMaxDepth) unit_00CB(c, 211u, depth + 1u); else { c.pc = 0x0042E3B8u; return; } if (c.pc != 0x0042DFD8u) [[unlikely]] return; }
L_0042DFD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_0042DFDC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], 0u + 2u);  goto L_0042E000; }
    st32((c.r[16].w[0] + 136u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042DFF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 206u, depth + 1u); else { c.pc = 0x0042E360u; return; } if (c.pc != 0x0042DFF4u) [[unlikely]] return; }
L_0042DFF4:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0042E078; } }
L_0042E000:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0042E07C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_0042E030; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0042E018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E020u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_00CB(c, 238u, depth + 1u); else { c.pc = 0x0042E6F0u; return; } if (c.pc != 0x0042E020u) [[unlikely]] return; }
L_0042E020:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E018u | kUnwind; return; } goto L_0042E018; }
L_0042E030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E038u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 240u, depth + 1u); else { c.pc = 0x0042E738u; return; } if (c.pc != 0x0042E038u) [[unlikely]] return; }
L_0042E038:
    set32(c.r[3], ld32((c.r[16].w[0] + 136u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E054u); st32((c.r[16].w[0] + 136u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00CB(c, 239u, depth + 1u); else { c.pc = 0x0042E730u; return; } if (c.pc != 0x0042E054u) [[unlikely]] return; }
L_0042E054:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E060u); st32((c.r[16].w[0] + 148u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CB(c, 204u, depth + 1u); else { c.pc = 0x0042E350u; return; } if (c.pc != 0x0042E060u) [[unlikely]] return; }
L_0042E060:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0042E07C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E074u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 211u, depth + 1u); else { c.pc = 0x0042E3B8u; return; } if (c.pc != 0x0042E074u) [[unlikely]] return; }
L_0042E074:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0042E078:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0042E07C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00415380u | kUnwind; return; } [[clang::musttail]] return unit_00C5(c, 175u, depth); }
L_0042E090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[3].w[0] + 2224u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2228u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0042E0E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E0C8u);  if (depth < kMaxDepth) unit_00CD(c, 103u, depth + 1u); else { c.pc = 0x00436410u; return; } if (c.pc != 0x0042E0C8u) [[unlikely]] return; }
L_0042E0C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E0DCu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042E0DCu) [[unlikely]] return; }
L_0042E0DC:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0042E0E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E0F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 2224u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0042E138; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2232u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E12Cu); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042E12Cu) [[unlikely]] return; }
L_0042E12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E134u);  if (depth < kMaxDepth) unit_00CD(c, 106u, depth + 1u); else { c.pc = 0x00436468u; return; } if (c.pc != 0x0042E134u) [[unlikely]] return; }
L_0042E134:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_0042E138:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[3], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    st8((c.r[4].w[0] + 7u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    st32((c.r[4].w[0] + 36u), 0u);
    st32((c.r[4].w[0] + 40u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), 0u);  c.pc = t; return; }
L_0042E188:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[3], c.r[20].w[0] + 2232u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_0042E1FC; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_0042E1D8:
    c.r[2].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_0042E1FC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E1D8u | kUnwind; return; } goto L_0042E1D8; }
L_0042E1FC:
    set32(c.r[3], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042E2B4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E214u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042E214u) [[unlikely]] return; }
L_0042E214:
    set32(c.r[3], c.r[20].w[0] + 2232u);
    set32(c.r[2], c.r[17].w[0] << 2);
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E230u); st32((c.r[2].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00CD(c, 64u, depth + 1u); else { c.pc = 0x00435BD8u; return; } if (c.pc != 0x0042E230u) [[unlikely]] return; }
L_0042E230:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_0042E2B4; } }
    set32(c.r[4], c.r[16].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E248u); set32(c.r[5], 0u + 6716u);  if (depth < kMaxDepth) unit_00CD(c, 108u, depth + 1u); else { c.pc = 0x004364B8u; return; } if (c.pc != 0x0042E248u) [[unlikely]] return; }
L_0042E248:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0042E2B4; } }
    st32((c.r[16].w[0] + 16u), c.r[19].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[18].sd[0] <= 0; st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(c.r[18].w[0]));  if (t) { goto L_0042E28C; } }
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 20u);
    c.budget -= 3;
L_0042E270:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E270u | kUnwind; return; } goto L_0042E270; } }
L_0042E28C:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E298u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 192u, depth + 1u); else { c.pc = 0x0042E150u; return; } if (c.pc != 0x0042E298u) [[unlikely]] return; }
L_0042E298:
    st32((c.r[16].w[0] + 64u), 0u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
L_0042E2B4:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042E2D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0042E33C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0042E308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E308u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00CD(c, 69u, depth + 1u); else { c.pc = 0x00435D08u; return; } if (c.pc != 0x0042E308u) [[unlikely]] return; }
L_0042E308:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0042E320; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E31Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_00CD(c, 113u, depth + 1u); else { c.pc = 0x00436598u; return; } if (c.pc != 0x0042E31Cu) [[unlikely]] return; }
L_0042E31C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0042E320:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E32Cu); set32(c.r[6], 0u + 80u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042E32Cu) [[unlikely]] return; }
L_0042E32C:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[1], c.r[1].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] + 2232u), 0u);
    c.budget -= 4;
L_0042E33C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042E350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));  c.pc = t; return; }
L_0042E358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[5].w[0]);  c.pc = t; return; }
L_0042E360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E374u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 192u, depth + 1u); else { c.pc = 0x0042E150u; return; } if (c.pc != 0x0042E374u) [[unlikely]] return; }
L_0042E374:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0042E388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E388u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_00CD(c, 69u, depth + 1u); else { c.pc = 0x00435D08u; return; } if (c.pc != 0x0042E388u) [[unlikely]] return; }
L_0042E388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E390u); set32(c.r[4], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_00CD(c, 64u, depth + 1u); else { c.pc = 0x00435BD8u; return; } if (c.pc != 0x0042E390u) [[unlikely]] return; }
L_0042E390:
    set32(c.r[4], ld32((c.r[16].w[0])));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E3A0u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 126u, depth + 1u); else { c.pc = 0x004366C0u; return; } if (c.pc != 0x0042E3A0u) [[unlikely]] return; }
L_0042E3A0:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E3B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E3D0u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00CD(c, 116u, depth + 1u); else { c.pc = 0x004365F8u; return; } if (c.pc != 0x0042E3D0u) [[unlikely]] return; }
L_0042E3D0:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E3E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E40Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042E40Cu) [[unlikely]] return; }
L_0042E40C:
    c.r[2].d[0] = c.r[2].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0]));  goto L_0042E43C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E420u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00CD(c, 128u, depth + 1u); else { c.pc = 0x004366F8u; return; } if (c.pc != 0x0042E420u) [[unlikely]] return; }
L_0042E420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E428u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_00CD(c, 138u, depth + 1u); else { c.pc = 0x004368A0u; return; } if (c.pc != 0x0042E428u) [[unlikely]] return; }
L_0042E428:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
L_0042E43C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E448:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 40u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[22].d[0]);
    set32(c.r[22], c.r[17].w[0] + 20u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 72u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7u)));
    set32(c.r[21], ld32((c.r[17].w[0])));
    c.budget -= 16;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_0042E4B0; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E498u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042E498u) [[unlikely]] return; }
L_0042E498:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042E4B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E4A8u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_00CD(c, 82u, depth + 1u); else { c.pc = 0x00436098u; return; } if (c.pc != 0x0042E4A8u) [[unlikely]] return; }
L_0042E4A8:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[16].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 44u)));  goto L_0042E544; }
L_0042E4B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E4B8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 244u, depth + 1u); else { c.pc = 0x0042E770u; return; } if (c.pc != 0x0042E4B8u) [[unlikely]] return; }
L_0042E4B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E4C4u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 243u, depth + 1u); else { c.pc = 0x0042E758u; return; } if (c.pc != 0x0042E4C4u) [[unlikely]] return; }
L_0042E4C4:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[2].w[0] + 7u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    set32(c.r[6], ld32((c.r[4].w[0])));
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0] + 36u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E4E8u); set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 3));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042E4E8u) [[unlikely]] return; }
L_0042E4E8:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { breakpoint(c, 0x0042E4ECu);  goto L_0042E4F0; }
L_0042E4F0:
    mmi::div(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0042E6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E50Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 145u, depth + 1u); else { c.pc = 0x00436980u; return; } if (c.pc != 0x0042E50Cu) [[unlikely]] return; }
L_0042E50C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[22].w[0])));  goto L_0042E570; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E51Cu);  if (depth < kMaxDepth) unit_00CD(c, 213u, depth + 1u); else { c.pc = 0x00437738u; return; } if (c.pc != 0x0042E51Cu) [[unlikely]] return; }
L_0042E51C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[16], c.r[3].w[0] + 2296u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E530u); st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CD(c, 138u, depth + 1u); else { c.pc = 0x004368A0u; return; } if (c.pc != 0x0042E530u) [[unlikely]] return; }
L_0042E530:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042E558; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 1;
L_0042E544:
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.r[3].w[0]);  if (t) { goto L_0042E6C4; } }
    c.budget -= 1;
L_0042E558:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_0042E6C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E568u);  if (depth < kMaxDepth) unit_00CD(c, 213u, depth + 1u); else { c.pc = 0x00437738u; return; } if (c.pc != 0x0042E568u) [[unlikely]] return; }
L_0042E568:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.budget -= 2;
L_0042E570:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E58Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042E58Cu) [[unlikely]] return; }
L_0042E58C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; set32(c.r[19], ld32((c.r[29].w[0])));  if (t) { goto L_0042E5C0; } }
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E5B4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042E5B4u) [[unlikely]] return; }
L_0042E5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0042E6C8; } }
    c.budget -= 1;
L_0042E5C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E5C8u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00550000u);  if (depth < kMaxDepth) unit_00CD(c, 213u, depth + 1u); else { c.pc = 0x00437738u; return; } if (c.pc != 0x0042E5C8u) [[unlikely]] return; }
L_0042E5C8:
    set32(c.r[16], c.r[16].w[0] + 2296u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E5E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 146u, depth + 1u); else { c.pc = 0x00436990u; return; } if (c.pc != 0x0042E5E4u) [[unlikely]] return; }
L_0042E5E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E5ECu); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 213u, depth + 1u); else { c.pc = 0x00437738u; return; } if (c.pc != 0x0042E5ECu) [[unlikely]] return; }
L_0042E5EC:
    mmi::mult(c, 0, c.r[19].w[0], c.r[18].w[0]);
    set32(c.r[18], c.r[29].w[0] + 16u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E60Cu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 233u, depth + 1u); else { c.pc = 0x00426578u; return; } if (c.pc != 0x0042E60Cu) [[unlikely]] return; }
L_0042E60C:
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0])));  if (t) { goto L_0042E628; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 76u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E628u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042E628u) [[unlikely]] return; }
L_0042E628:
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E640u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042E640u) [[unlikely]] return; }
L_0042E640:
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E658u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042E658u) [[unlikely]] return; }
L_0042E658:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E66Cu); st32((c.r[17].w[0] + 32u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CD(c, 81u, depth + 1u); else { c.pc = 0x00436090u; return; } if (c.pc != 0x0042E66Cu) [[unlikely]] return; }
L_0042E66C:
    set32(c.r[5], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[4], c.r[2].w[0] + 7u);
    set32(c.r[2], c.r[2].w[0] + 14u);
    set32(c.r[6], ld32((c.r[17].w[0] + 52u)));
    c.r[3].d[0] = c.r[4].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[2], c.r[6].w[0] + c.r[19].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 3));
    set32(c.r[5], c.r[5].w[0] + c.r[19].w[0]);
    st32((c.r[17].w[0] + 36u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] < 0; st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_0042E6C4; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0042E6C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));  goto L_0042E6CC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E6C4u); set32(c.r[4], ld32((c.r[17].w[0] + 68u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042E6C4u) [[unlikely]] return; }
L_0042E6C4:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_0042E6C8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 1;
L_0042E6CC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 56u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 72u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 88u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0042E6F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042E718; } }
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E448u | kUnwind; return; } goto L_0042E448; }
L_0042E718:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0042E728; } }
    c.budget -= 2;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E3E8u | kUnwind; return; } goto L_0042E3E8; }
L_0042E728:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_0042E738:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_0042E740:
    st32((c.r[4].w[0] + 76u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 72u), c.r[5].w[0]);  c.pc = t; return; }
L_0042E750:
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    c.budget -= 2;
L_0042E758:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 156u, depth); }
L_0042E770:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 157u, depth); }
L_0042E788:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 158u, depth); }
L_0042E7A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 44u), c.r[5].w[0]);  c.pc = t; return; }
L_0042E7A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_0042E7B8:
    st32((c.r[2].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 2;
L_0042E7C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E7D0u);  if (depth < kMaxDepth) unit_00CB(c, 460u, depth + 1u); else { c.pc = 0x0042FFD0u; return; } if (c.pc != 0x0042E7D0u) [[unlikely]] return; }
L_0042E7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E7D8u);  if (depth < kMaxDepth) unit_00CC(c, 156u, depth + 1u); else { c.pc = 0x00431688u; return; } if (c.pc != 0x0042E7D8u) [[unlikely]] return; }
L_0042E7D8:
    c.r[2].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E7E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0042E7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[2].w[0] + 2316u);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 2312u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0042E88C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E824u);  if (depth < kMaxDepth) unit_00C5(c, 6u, depth + 1u); else { c.pc = 0x00414048u; return; } if (c.pc != 0x0042E824u) [[unlikely]] return; }
L_0042E824:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E82Cu);  if (depth < kMaxDepth) unit_00CC(c, 67u, depth + 1u); else { c.pc = 0x00430860u; return; } if (c.pc != 0x0042E82Cu) [[unlikely]] return; }
L_0042E82C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 2336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E840u); set32(c.r[6], 0u + 2496u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042E840u) [[unlikely]] return; }
L_0042E840:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[6].w[0] - 6208u);
    set32(c.r[8], c.r[8].w[0] - 26848u);
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E860u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 320u, depth + 1u); else { c.pc = 0x004272A0u; return; } if (c.pc != 0x0042E860u) [[unlikely]] return; }
L_0042E860:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] - 6168u);
    set32(c.r[7], c.r[7].w[0] - 26832u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E87Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 308u, depth + 1u); else { c.pc = 0x004270A0u; return; } if (c.pc != 0x0042E87Cu) [[unlikely]] return; }
L_0042E87C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st32((c.r[3].w[0] + 2320u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 4;
L_0042E88C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042E8A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], c.r[3].w[0] + 2316u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_0042E970; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[18], 0u + 1u);
    set32(c.r[16], c.r[19].w[0] + 2336u);
    set32(c.r[17], 0u + 3u);
    c.budget -= 4;
L_0042E8E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0042E8F8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E8F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 301u, depth + 1u); else { c.pc = 0x0042EE20u; return; } if (c.pc != 0x0042E8F4u) [[unlikely]] return; }
L_0042E8F4:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0042E8F8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 624u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E8E0u | kUnwind; return; } goto L_0042E8E0; } }
    set32(c.r[16], c.r[19].w[0] + 2336u);
    set32(c.r[6], 0u + 2496u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E914u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042E914u) [[unlikely]] return; }
L_0042E914:
    set32(c.r[4], 0u + 2u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E924u); c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (depth < kMaxDepth) unit_00C9(c, 316u, depth + 1u); else { c.pc = 0x004271C8u; return; } if (c.pc != 0x0042E924u) [[unlikely]] return; }
L_0042E924:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 2320u)));
    set32(c.r[4], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E938u); set32(c.r[17], 0u + 3u);  if (depth < kMaxDepth) unit_00C9(c, 316u, depth + 1u); else { c.pc = 0x004271C8u; return; } if (c.pc != 0x0042E938u) [[unlikely]] return; }
L_0042E938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E940u);  if (depth < kMaxDepth) unit_00CC(c, 70u, depth + 1u); else { c.pc = 0x004308B8u; return; } if (c.pc != 0x0042E940u) [[unlikely]] return; }
L_0042E940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E948u);  if (depth < kMaxDepth) unit_00C5(c, 28u, depth + 1u); else { c.pc = 0x004141C0u; return; } if (c.pc != 0x0042E948u) [[unlikely]] return; }
L_0042E948:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0042E968; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E95Cu); set32(c.r[4], c.r[18].w[0] - 26816u);  if (depth < kMaxDepth) unit_00C9(c, 304u, depth + 1u); else { c.pc = 0x00427048u; return; } if (c.pc != 0x0042E95Cu) [[unlikely]] return; }
L_0042E95C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E964u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 301u, depth + 1u); else { c.pc = 0x0042EE20u; return; } if (c.pc != 0x0042E964u) [[unlikely]] return; }
L_0042E964:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0042E968:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 624u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042E948u | kUnwind; return; } goto L_0042E948; } }
L_0042E970:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042E990:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E9BCu); c.r[19].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042E9BCu) [[unlikely]] return; }
L_0042E9BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E9D0u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 272u, depth + 1u); else { c.pc = 0x0042E9F8u; return; } if (c.pc != 0x0042E9D0u) [[unlikely]] return; }
L_0042E9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042E9D8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 237u, depth + 1u); else { c.pc = 0x00437B20u; return; } if (c.pc != 0x0042E9D8u) [[unlikely]] return; }
L_0042E9D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042E9F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EA30u); c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042EA30u) [[unlikely]] return; }
L_0042EA30:
    st32((c.r[29].w[0]), c.r[17].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EA40u); st32((c.r[29].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042EA40u) [[unlikely]] return; }
L_0042EA40:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EA50u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 286u, depth + 1u); else { c.pc = 0x0042EB50u; return; } if (c.pc != 0x0042EA50u) [[unlikely]] return; }
L_0042EA50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EA58u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x0042EA58u) [[unlikely]] return; }
L_0042EA58:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042EA78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EA9Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042EA9Cu) [[unlikely]] return; }
L_0042EA9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EAACu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 281u, depth + 1u); else { c.pc = 0x0042EAD0u; return; } if (c.pc != 0x0042EAACu) [[unlikely]] return; }
L_0042EAAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EAB4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 237u, depth + 1u); else { c.pc = 0x00437B20u; return; } if (c.pc != 0x0042EAB4u) [[unlikely]] return; }
L_0042EAB4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042EAD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EB00u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042EB00u) [[unlikely]] return; }
L_0042EB00:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0]), c.r[16].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EB18u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042EB18u) [[unlikely]] return; }
L_0042EB18:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EB28u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 286u, depth + 1u); else { c.pc = 0x0042EB50u; return; } if (c.pc != 0x0042EB28u) [[unlikely]] return; }
L_0042EB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EB30u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x0042EB30u) [[unlikely]] return; }
L_0042EB30:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042EB50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[7], 0u - 64u);
    set32(c.r[3], c.r[5].w[0] + 63u);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[3].d[0] & c.r[7].d[0];
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[2], c.r[19].w[0] - c.r[5].w[0]);
    st64((c.r[29].w[0] + 40u), c.r[21].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[18], c.r[6].w[0] - c.r[2].w[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != 0ull; st64((c.r[29].w[0] + 48u), c.r[31].d[0]);  if (t) { goto L_0042EBA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EB98u); set32(c.r[4], c.r[4].w[0] - 26768u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x0042EB98u) [[unlikely]] return; }
L_0042EB98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042EDCC; } }
L_0042EBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[4].w[0] + 2336u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0042EBDC; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0042EBB8:
    c.r[2].d[0] = c.r[7].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 624u);  if (t) { goto L_0042EBDC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042EBB8u | kUnwind; return; } goto L_0042EBB8; }
L_0042EBDC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == c.r[3].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042EDCC; } }
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + 2336u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[6], 0u + 624u);
    set32(c.r[2], c.r[2].w[0] - c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EC14u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042EC14u) [[unlikely]] return; }
L_0042EC14:
    c.r[3].d[0] = ld8((c.r[21].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[21].w[0] + 4u));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 8192u);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    st32((c.r[16].w[0] + 416u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    st32((c.r[16].w[0] + 616u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 420u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 14;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[21].w[0] + 4u)));  goto L_0042EC60; }
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[2].d[0] = 0ull | 34240ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[17].d[0] = c.lo.d[0];  if (t) { goto L_0042EC80; } }
    c.budget -= 1;
L_0042EC60:
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[3].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + 64u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 8;
L_0042EC80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EC90u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 36u, depth + 1u); else { c.pc = 0x00430368u; return; } if (c.pc != 0x0042EC90u) [[unlikely]] return; }
L_0042EC90:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[18], c.r[18].w[0] - c.r[17].w[0]);  if (t) { goto L_0042EDC0; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[19], c.r[19].w[0] + c.r[17].w[0]);  if (t) { goto L_0042EDC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0042ED00; } }
    set32(c.r[17], c.r[16].w[0] + 288u);
    set32(c.r[2], ld32((c.r[16].w[0] + 416u)));
    c.budget -= 3;
L_0042ECB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 420u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0]), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[18].sd[0] < 0; set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);  if (t) { goto L_0042EDC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ECE0u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_00C9(c, 104u, depth + 1u); else { c.pc = 0x00424E78u; return; } if (c.pc != 0x0042ECE0u) [[unlikely]] return; }
L_0042ECE0:
    st32((c.r[17].w[0] - 140u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_0042EDC0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 416u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042ECB8u | kUnwind; return; } goto L_0042ECB8; }
L_0042ED00:
    set32(c.r[2], c.r[18].w[0] - 8192u);
    set32(c.r[5], c.r[18].w[0] - 6145u);
    c.r[3].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    st32((c.r[16].w[0] + 276u), c.r[19].w[0]);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[3], 0u + 8192u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    st32((c.r[16].w[0] + 284u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 11);
    st32((c.r[16].w[0] + 144u), 0u);
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 8192u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ED3Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 104u, depth + 1u); else { c.pc = 0x00424E78u; return; } if (c.pc != 0x0042ED3Cu) [[unlikely]] return; }
L_0042ED3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 140u), c.r[2].w[0]);  if (t) { goto L_0042EDC0; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[6], c.r[16].w[0] + 148u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ED54u); set32(c.r[5], ld32((c.r[16].w[0] + 144u)));  if (depth < kMaxDepth) unit_00CC(c, 73u, depth + 1u); else { c.pc = 0x00430908u; return; } if (c.pc != 0x0042ED54u) [[unlikely]] return; }
L_0042ED54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0042EDC0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 140u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ED68u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 417u, depth + 1u); else { c.pc = 0x00417338u; return; } if (c.pc != 0x0042ED68u) [[unlikely]] return; }
L_0042ED68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0042EDC0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00430000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042ED84u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 500u, depth + 1u); else { c.pc = 0x00417A20u; return; } if (c.pc != 0x0042ED84u) [[unlikely]] return; }
L_0042ED84:
    st32((c.r[16].w[0] + 424u), 0u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 433u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 432u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 440u), 0u);
    st32((c.r[16].w[0] + 448u), 0u);
    st32((c.r[16].w[0] + 444u), 0u);
    st32((c.r[16].w[0] + 452u), 0u);
    st32((c.r[16].w[0] + 456u), c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 480u), 0u);  if (t) { goto L_0042EDCC; } }
    c.budget -= 1;
L_0042EDC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EDC8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 301u, depth + 1u); else { c.pc = 0x0042EE20u; return; } if (c.pc != 0x0042EDC8u) [[unlikely]] return; }
L_0042EDC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0042EDCC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042EDF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EE04u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042EE04u) [[unlikely]] return; }
L_0042EE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EE0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 301u, depth + 1u); else { c.pc = 0x0042EE20u; return; } if (c.pc != 0x0042EE0Cu) [[unlikely]] return; }
L_0042EE0C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_0042EE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0042EE60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 26720u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_0042EE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EE68u);  if (depth < kMaxDepth) unit_00CB(c, 343u, depth + 1u); else { c.pc = 0x0042F378u; return; } if (c.pc != 0x0042EE68u) [[unlikely]] return; }
L_0042EE68:
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0042EE8C; } }
    st32((c.r[17].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EE84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 500u, depth + 1u); else { c.pc = 0x00417A20u; return; } if (c.pc != 0x0042EE84u) [[unlikely]] return; }
L_0042EE84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EE8Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 424u, depth + 1u); else { c.pc = 0x004173C8u; return; } if (c.pc != 0x0042EE8Cu) [[unlikely]] return; }
L_0042EE8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042EEA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EEA0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 41u, depth + 1u); else { c.pc = 0x00430480u; return; } if (c.pc != 0x0042EEA0u) [[unlikely]] return; }
L_0042EEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EEA8u); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042EEA8u) [[unlikely]] return; }
L_0042EEA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));  if (t) { goto L_0042EEF4; } }
    set32(c.r[16], c.r[17].w[0] + 148u);
    c.budget -= 1;
L_0042EEB8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0042EEDC; } }
    set32(c.r[3], ld32((c.r[3].w[0])));
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EED8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042EED8u) [[unlikely]] return; }
L_0042EED8:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 3u));
    c.budget -= 1;
L_0042EEDC:
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042EEB8u | kUnwind; return; } goto L_0042EEB8; } }
L_0042EEF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 140u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  goto L_0042EF18; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 140u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EF14u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042EF14u) [[unlikely]] return; }
L_0042EF14:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0042EF18:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_0042EF2C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EF28u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00CC(c, 80u, depth + 1u); else { c.pc = 0x00430A10u; return; } if (c.pc != 0x0042EF28u) [[unlikely]] return; }
L_0042EF28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042EF2C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042EF38u); set32(c.r[6], 0u + 624u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x0042EF38u) [[unlikely]] return; }
L_0042EF38:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 235u, depth); }
L_0042EF68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 18496u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 17;
    if (c.r[16].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0042EFB8; }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0042EFE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 1;
L_0042EFB8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 26672u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_0042EFE0:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));  if (t) { goto L_0042F010; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 26624u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_0042F010:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] > 0;  if (t) { goto L_0042F040; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 26576u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_0042F040:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F048u);  if (depth < kMaxDepth) unit_00CB(c, 343u, depth + 1u); else { c.pc = 0x0042F378u; return; } if (c.pc != 0x0042F048u) [[unlikely]] return; }
L_0042F048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F050u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042F050u) [[unlikely]] return; }
L_0042F050:
    set32(c.r[2], ld32((c.r[16].w[0] + 140u)));
    st32((c.r[16].w[0] + 460u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 468u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 464u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 472u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F074u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CC(c, 86u, depth + 1u); else { c.pc = 0x00430A88u; return; } if (c.pc != 0x0042F074u) [[unlikely]] return; }
L_0042F074:
    st32((c.r[16].w[0] + 476u), 0u);
    set32(c.r[2], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 434u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_00CD(c, 235u, depth); }
L_0042F0A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F0CCu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042F0CCu) [[unlikely]] return; }
L_0042F0CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F0DCu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 319u, depth + 1u); else { c.pc = 0x0042F0F8u; return; } if (c.pc != 0x0042F0DCu) [[unlikely]] return; }
L_0042F0DC:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_0042F0F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042EF68u | kUnwind; return; } goto L_0042EF68; }
L_0042F118:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F13Cu); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042F13Cu) [[unlikely]] return; }
L_0042F13C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F14Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 323u, depth + 1u); else { c.pc = 0x0042F168u; return; } if (c.pc != 0x0042F14Cu) [[unlikely]] return; }
L_0042F14C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_0042F168:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0042F1A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F198u); set32(c.r[4], c.r[4].w[0] - 26528u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x0042F198u) [[unlikely]] return; }
L_0042F198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0042F228; } }
L_0042F1A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F1A8u);  if (depth < kMaxDepth) unit_00CB(c, 343u, depth + 1u); else { c.pc = 0x0042F378u; return; } if (c.pc != 0x0042F1A8u) [[unlikely]] return; }
L_0042F1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F1B0u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042F1B0u) [[unlikely]] return; }
L_0042F1B0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5512u);
    set32(c.r[8], c.r[29].w[0] + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F1D0u); set32(c.r[9], c.r[29].w[0] + 8u);  if (depth < kMaxDepth) unit_00C4(c, 430u, depth + 1u); else { c.pc = 0x00413C98u; return; } if (c.pc != 0x0042F1D0u) [[unlikely]] return; }
L_0042F1D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0042F21C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F1E0u);  if (depth < kMaxDepth) unit_00C4(c, 442u, depth + 1u); else { c.pc = 0x00413EB8u; return; } if (c.pc != 0x0042F1E0u) [[unlikely]] return; }
L_0042F1E0:
    set32(c.r[5], ld32((c.r[16].w[0] + 140u)));
    st32((c.r[16].w[0] + 460u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 144u), c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[16].w[0] + 464u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 468u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F20Cu); st32((c.r[16].w[0] + 472u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_00CC(c, 86u, depth + 1u); else { c.pc = 0x00430A88u; return; } if (c.pc != 0x0042F20Cu) [[unlikely]] return; }
L_0042F20C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 476u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 434u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0042F21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F224u);  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x0042F224u) [[unlikely]] return; }
L_0042F224:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042F228:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042F240:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
L_0042F250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F274u); c.r[18].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042F274u) [[unlikely]] return; }
L_0042F274:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F284u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 335u, depth + 1u); else { c.pc = 0x0042F2A0u; return; } if (c.pc != 0x0042F284u) [[unlikely]] return; }
L_0042F284:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_0042F2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 24u), c.r[31].d[0]);  if (t) { goto L_0042F2CC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0042F2F0; } }
L_0042F2CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 26432u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_0042F2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F2F8u);  if (depth < kMaxDepth) unit_00CB(c, 343u, depth + 1u); else { c.pc = 0x0042F378u; return; } if (c.pc != 0x0042F2F8u) [[unlikely]] return; }
L_0042F2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F300u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042F300u) [[unlikely]] return; }
L_0042F300:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F30Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 36u, depth + 1u); else { c.pc = 0x00424468u; return; } if (c.pc != 0x0042F30Cu) [[unlikely]] return; }
L_0042F30C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0] + 144u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F31Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 86u, depth + 1u); else { c.pc = 0x00430A88u; return; } if (c.pc != 0x0042F31Cu) [[unlikely]] return; }
L_0042F31C:
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 476u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 235u, depth); }
L_0042F348:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F35Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042F35Cu) [[unlikely]] return; }
L_0042F35C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F364u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 343u, depth + 1u); else { c.pc = 0x0042F378u; return; } if (c.pc != 0x0042F364u) [[unlikely]] return; }
L_0042F364:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_0042F378:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 8u), c.r[31].d[0]);  if (t) { goto L_0042F3A8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 26384u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_0042F3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F3B0u);  if (depth < kMaxDepth) unit_00CC(c, 44u, depth + 1u); else { c.pc = 0x004304F8u; return; } if (c.pc != 0x0042F3B0u) [[unlikely]] return; }
L_0042F3B0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0042F3C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F3C4u);  if (depth < kMaxDepth) unit_00C5(c, 488u, depth + 1u); else { c.pc = 0x00417908u; return; } if (c.pc != 0x0042F3C4u) [[unlikely]] return; }
L_0042F3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F3CCu);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042F3CCu) [[unlikely]] return; }
L_0042F3CC:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0042F3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F3E0u);  if (depth < kMaxDepth) unit_00CC(c, 85u, depth + 1u); else { c.pc = 0x00430A80u; return; } if (c.pc != 0x0042F3E0u) [[unlikely]] return; }
L_0042F3E0:
    set32(c.r[3], ld32((c.r[16].w[0] + 476u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 428u), 0u);  goto L_0042F414; }
    set32(c.r[2], ld32((c.r[16].w[0] + 144u)));
    st32((c.r[16].w[0] + 144u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0042F410; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F410u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042F410u) [[unlikely]] return; }
L_0042F410:
    st32((c.r[16].w[0] + 428u), 0u);
    c.budget -= 1;
L_0042F414:
    st32((c.r[16].w[0] + 144u), 0u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 235u, depth); }
L_0042F430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F444u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042F444u) [[unlikely]] return; }
L_0042F444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F44Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 353u, depth + 1u); else { c.pc = 0x0042F468u; return; } if (c.pc != 0x0042F44Cu) [[unlikely]] return; }
L_0042F44C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F454u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 237u, depth + 1u); else { c.pc = 0x00437B20u; return; } if (c.pc != 0x0042F454u) [[unlikely]] return; }
L_0042F454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042F468:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042F488; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F480u); set32(c.r[4], c.r[4].w[0] - 26336u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x0042F480u) [[unlikely]] return; }
L_0042F480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042F48C; } }
L_0042F488:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    c.budget -= 1;
L_0042F48C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042F498:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
L_0042F4A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F4C4u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042F4C4u) [[unlikely]] return; }
L_0042F4C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F4D0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 360u, depth + 1u); else { c.pc = 0x0042F4F0u; return; } if (c.pc != 0x0042F4D0u) [[unlikely]] return; }
L_0042F4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F4D8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 237u, depth + 1u); else { c.pc = 0x00437B20u; return; } if (c.pc != 0x0042F4D8u) [[unlikely]] return; }
L_0042F4D8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042F4F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042F510; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] - 26240u);  if (t) { goto L_0042F520; } }
    c.budget -= 1;
L_0042F510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_0042F530; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] - 26192u);
    c.budget -= 2;
L_0042F520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F528u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x0042F528u) [[unlikely]] return; }
L_0042F528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042F538; } }
L_0042F530:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 2;
L_0042F538:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042F548:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.f[1] = 0u;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.f[0] = ld32((c.r[16].w[0] + 480u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 9;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[5], ld32((c.r[16].w[0] + 280u)));  goto L_0042F5A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F574u);  if (depth < kMaxDepth) unit_00CB(c, 383u, depth + 1u); else { c.pc = 0x0042F7D8u; return; } if (c.pc != 0x0042F574u) [[unlikely]] return; }
L_0042F574:
    c.f[1] = ld32((c.r[16].w[0] + 480u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00418240u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 25u, depth); }
L_0042F5A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[5].w[0] >> 31);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00418240u | kUnwind; return; } [[clang::musttail]] return unit_00C6(c, 25u, depth); }
L_0042F5E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F604u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042F604u) [[unlikely]] return; }
L_0042F604:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F610u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 367u, depth + 1u); else { c.pc = 0x0042F628u; return; } if (c.pc != 0x0042F610u) [[unlikely]] return; }
L_0042F610:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_0042F628:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042F648; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] - 26136u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_0042F648:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[4].w[0] + 432u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042F658:
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
L_0042F680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F69Cu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042F69Cu) [[unlikely]] return; }
L_0042F69C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F6A4u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042F6A4u) [[unlikely]] return; }
L_0042F6A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F6B0u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 374u, depth + 1u); else { c.pc = 0x0042F6D0u; return; } if (c.pc != 0x0042F6B0u) [[unlikely]] return; }
L_0042F6B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F6B8u);  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x0042F6B8u) [[unlikely]] return; }
L_0042F6B8:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_0042F6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0042F708; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    set32(c.r[4], c.r[4].w[0] - 25800u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CD(c, 238u, depth); }
L_0042F708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F710u);  if (depth < kMaxDepth) unit_00CB(c, 353u, depth + 1u); else { c.pc = 0x0042F468u; return; } if (c.pc != 0x0042F710u) [[unlikely]] return; }
L_0042F710:
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st32((c.r[16].w[0] + 424u), c.r[17].w[0]);  if (t) { goto L_0042F740; } }
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CC(c, 47u, depth); }
L_0042F740:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042F758:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F76Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042F76Cu) [[unlikely]] return; }
L_0042F76C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F774u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 380u, depth + 1u); else { c.pc = 0x0042F790u; return; } if (c.pc != 0x0042F774u) [[unlikely]] return; }
L_0042F774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F77Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 237u, depth + 1u); else { c.pc = 0x00437B20u; return; } if (c.pc != 0x0042F77Cu) [[unlikely]] return; }
L_0042F77C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042F790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0042F7B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F7A8u); set32(c.r[4], c.r[4].w[0] - 25752u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x0042F7A8u) [[unlikely]] return; }
L_0042F7A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0042F7B4; } }
L_0042F7B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 424u)));
    c.budget -= 1;
L_0042F7B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0042F7C0:
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
L_0042F7D8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[20].d[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 40u), c.r[31].d[0]);  if (t) { goto L_0042F810; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F804u); set32(c.r[4], c.r[4].w[0] - 25448u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x0042F804u) [[unlikely]] return; }
L_0042F804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0042F89C; } }
    c.budget -= 1;
L_0042F810:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0042F89C; }
    set32(c.r[18], ld32((c.r[4].w[0] + 4u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F838u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 89u, depth + 1u); else { c.pc = 0x00430AA0u; return; } if (c.pc != 0x0042F838u) [[unlikely]] return; }
L_0042F838:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; c.r[2].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_0042F89C; } }
    c.budget -= 1;
L_0042F848:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F854u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 90u, depth + 1u); else { c.pc = 0x00430AA8u; return; } if (c.pc != 0x0042F854u) [[unlikely]] return; }
L_0042F854:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F868u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 91u, depth + 1u); else { c.pc = 0x00430AB8u; return; } if (c.pc != 0x0042F868u) [[unlikely]] return; }
L_0042F868:
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 31u);
    c.r[2].d[0] = c.r[2].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 5));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0042F848u | kUnwind; return; } goto L_0042F848; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0042F89C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042F8C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 428u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0042F8F4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042FA00; }
L_0042F8F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 444u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 432u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[16].w[0] + 444u), c.r[4].w[0]);  if (t) { goto L_0042F920; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 456u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 433u)));  goto L_0042F924; }
    set32(c.r[2], ld32((c.r[16].w[0] + 452u)));
    st32((c.r[16].w[0] + 444u), c.r[2].w[0]);
    c.budget -= 2;
L_0042F920:
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 433u)));
    c.budget -= 1;
L_0042F924:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042FA00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F938u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CC(c, 92u, depth + 1u); else { c.pc = 0x00430AC8u; return; } if (c.pc != 0x0042F938u) [[unlikely]] return; }
L_0042F938:
    set32(c.r[3], ld32((c.r[16].w[0] + 444u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  goto L_0042FA00; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F950u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042F950u) [[unlikely]] return; }
L_0042F950:
    set32(c.r[17], ld32((c.r[16].w[0] + 444u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F95Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CC(c, 95u, depth + 1u); else { c.pc = 0x00430B10u; return; } if (c.pc != 0x0042F95Cu) [[unlikely]] return; }
L_0042F95C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  goto L_0042F978; }
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[18].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_0042F9D8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042F9F4; } }
    c.budget -= 1;
L_0042F978:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F988u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 93u, depth + 1u); else { c.pc = 0x00430AD0u; return; } if (c.pc != 0x0042F988u) [[unlikely]] return; }
L_0042F988:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[5].w[0] + 2047u);
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F9A4u); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));  if (depth < kMaxDepth) unit_00C5(c, 461u, depth + 1u); else { c.pc = 0x00417710u; return; } if (c.pc != 0x0042F9A4u) [[unlikely]] return; }
L_0042F9A4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + 2047u);
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F9C8u); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x0042F9C8u) [[unlikely]] return; }
L_0042F9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F9D0u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 472u, depth + 1u); else { c.pc = 0x00417800u; return; } if (c.pc != 0x0042F9D0u) [[unlikely]] return; }
L_0042F9D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042F9F4; } }
L_0042F9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F9E0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 461u, depth + 1u); else { c.pc = 0x00417710u; return; } if (c.pc != 0x0042F9E0u) [[unlikely]] return; }
L_0042F9E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F9ECu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x0042F9ECu) [[unlikely]] return; }
L_0042F9EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F9F4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 472u, depth + 1u); else { c.pc = 0x00417800u; return; } if (c.pc != 0x0042F9F4u) [[unlikely]] return; }
L_0042F9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042F9FCu);  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x0042F9FCu) [[unlikely]] return; }
L_0042F9FC:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042FA00:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 40u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0042FA18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[18].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 24u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FA3Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 442u, depth + 1u); else { c.pc = 0x004175E0u; return; } if (c.pc != 0x0042FA3Cu) [[unlikely]] return; }
L_0042FA3C:
    set32(c.r[4], ld32((c.r[16].w[0] + 144u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FA50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042FA50u) [[unlikely]] return; }
L_0042FA50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    if (c.r[3].sd[0] <= 0) { set32(c.r[7], ld32((c.r[16].w[0] + 468u)));  goto L_0042FA90; }
    set32(c.r[17], c.r[16].w[0] + 148u);
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_0042FA68:
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FA7Cu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042FA7Cu) [[unlikely]] return; }
L_0042FA7C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042FA68u | kUnwind; return; } goto L_0042FA68; }
    set32(c.r[7], ld32((c.r[16].w[0] + 468u)));
    c.budget -= 1;
L_0042FA90:
    set32(c.r[8], ld32((c.r[16].w[0] + 472u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 460u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FAA4u); set32(c.r[6], ld32((c.r[16].w[0] + 464u)));  if (depth < kMaxDepth) unit_00C5(c, 430u, depth + 1u); else { c.pc = 0x00417450u; return; } if (c.pc != 0x0042FAA4u) [[unlikely]] return; }
L_0042FAA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], c.r[5].w[0] >> 31);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FAC4u); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));  if (depth < kMaxDepth) unit_00C6(c, 25u, depth + 1u); else { c.pc = 0x00418240u; return; } if (c.pc != 0x0042FAC4u) [[unlikely]] return; }
L_0042FAC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FAD0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C5(c, 461u, depth + 1u); else { c.pc = 0x00417710u; return; } if (c.pc != 0x0042FAD0u) [[unlikely]] return; }
L_0042FAD0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FADCu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x0042FADCu) [[unlikely]] return; }
L_0042FADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FAE4u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 472u, depth + 1u); else { c.pc = 0x00417800u; return; } if (c.pc != 0x0042FAE4u) [[unlikely]] return; }
L_0042FAE4:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FAF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CC(c, 87u, depth + 1u); else { c.pc = 0x00430A90u; return; } if (c.pc != 0x0042FAF0u) [[unlikely]] return; }
L_0042FAF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 24u));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 32u);  [[clang::musttail]] return unit_00CC(c, 83u, depth); }
L_0042FB18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st64((c.r[29].w[0] + 8u), c.r[17].d[0]);
    set32(c.r[17], c.r[2].w[0] + 2324u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FB3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C9(c, 356u, depth + 1u); else { c.pc = 0x004277E8u; return; } if (c.pc != 0x0042FB3Cu) [[unlikely]] return; }
L_0042FB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0042FB50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FB4Cu);  if (depth < kMaxDepth) unit_00CB(c, 415u, depth + 1u); else { c.pc = 0x0042FB68u; return; } if (c.pc != 0x0042FB4Cu) [[unlikely]] return; }
L_0042FB4C:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_0042FB50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 8u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0042FB68:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 24u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[20].d[0]);
    set32(c.r[20], c.r[17].w[0] + 12u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 40u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 56u), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[19], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_0042FBA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FBA0u); set32(c.r[4], c.r[4].w[0] - 25384u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x0042FBA0u) [[unlikely]] return; }
L_0042FBA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0042FFB4; } }
L_0042FBA8:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { goto L_0042FED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FBC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CC(c, 47u, depth + 1u); else { c.pc = 0x00430568u; return; } if (c.pc != 0x0042FBC0u) [[unlikely]] return; }
L_0042FBC0:
    set32(c.r[2], ld32((c.r[17].w[0] + 428u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0042FE50; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 476u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042FDB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FBE4u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 456u, depth + 1u); else { c.pc = 0x004176D0u; return; } if (c.pc != 0x0042FBE4u) [[unlikely]] return; }
L_0042FBE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FBECu); c.r[18].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042FBECu) [[unlikely]] return; }
L_0042FBEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 434u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[16].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0042FC18; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_0042FC18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FC08u); st8((c.r[17].w[0] + 434u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x0042FC08u) [[unlikely]] return; }
L_0042FC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FC10u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 401u, depth + 1u); else { c.pc = 0x0042FA18u; return; } if (c.pc != 0x0042FC10u) [[unlikely]] return; }
L_0042FC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042FC20; } }
L_0042FC18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FC20u);  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x0042FC20u) [[unlikely]] return; }
L_0042FC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FC28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 82u, depth + 1u); else { c.pc = 0x00430A40u; return; } if (c.pc != 0x0042FC28u) [[unlikely]] return; }
L_0042FC28:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  goto L_0042FED4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FC3Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 89u, depth + 1u); else { c.pc = 0x00430AA0u; return; } if (c.pc != 0x0042FC3Cu) [[unlikely]] return; }
L_0042FC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FC44u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 95u, depth + 1u); else { c.pc = 0x00430B10u; return; } if (c.pc != 0x0042FC44u) [[unlikely]] return; }
L_0042FC44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042FC60; } }
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  goto L_0042FD30; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { goto L_0042FDA8; } }
L_0042FC60:
    set32(c.r[16], ld32((c.r[17].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; st32((c.r[17].w[0] + 444u), c.r[16].w[0]);  if (t) { goto L_0042FC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FC74u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_00CC(c, 92u, depth + 1u); else { c.pc = 0x00430AC8u; return; } if (c.pc != 0x0042FC74u) [[unlikely]] return; }
L_0042FC74:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0042FC90; } }
L_0042FC80:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0042FFB0; } }
    c.budget -= 1;
L_0042FC90:
    set32(c.r[7], c.r[29].w[0] + 4u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FCA0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 93u, depth + 1u); else { c.pc = 0x00430AD0u; return; } if (c.pc != 0x0042FCA0u) [[unlikely]] return; }
L_0042FCA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[5].w[0] + 2047u);
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FCBCu); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));  if (depth < kMaxDepth) unit_00C5(c, 461u, depth + 1u); else { c.pc = 0x00417710u; return; } if (c.pc != 0x0042FCBCu) [[unlikely]] return; }
L_0042FCBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[5].w[0] + 2047u);
    c.r[2].d[0] = c.r[5].sd[0] < 0ll ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FCE0u); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x0042FCE0u) [[unlikely]] return; }
L_0042FCE0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FCECu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 87u, depth + 1u); else { c.pc = 0x00430A90u; return; } if (c.pc != 0x0042FCECu) [[unlikely]] return; }
L_0042FCEC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 432u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0042FD0C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 433u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042FD18; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0042FD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FD14u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CC(c, 88u, depth + 1u); else { c.pc = 0x00430A98u; return; } if (c.pc != 0x0042FD14u) [[unlikely]] return; }
L_0042FD14:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0042FD18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FD20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CC(c, 54u, depth + 1u); else { c.pc = 0x00430680u; return; } if (c.pc != 0x0042FD20u) [[unlikely]] return; }
L_0042FD20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FD28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 50u, depth + 1u); else { c.pc = 0x004305F0u; return; } if (c.pc != 0x0042FD28u) [[unlikely]] return; }
L_0042FD28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042FDA4; } }
L_0042FD30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FD38u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_00C5(c, 504u, depth + 1u); else { c.pc = 0x00417A80u; return; } if (c.pc != 0x0042FD38u) [[unlikely]] return; }
L_0042FD38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FD44u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 87u, depth + 1u); else { c.pc = 0x00430A90u; return; } if (c.pc != 0x0042FD44u) [[unlikely]] return; }
L_0042FD44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 432u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0042FD60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 433u)));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_0042FD6C; }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_0042FD60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FD68u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CC(c, 88u, depth + 1u); else { c.pc = 0x00430A98u; return; } if (c.pc != 0x0042FD68u) [[unlikely]] return; }
L_0042FD68:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_0042FD6C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);  goto L_0042FD90; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FD7Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00C6(c, 362u, depth + 1u); else { c.pc = 0x0041A780u; return; } if (c.pc != 0x0042FD7Cu) [[unlikely]] return; }
L_0042FD7C:
    set32(c.r[4], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FD88u); set32(c.r[5], ld32((c.r[17].w[0] + 148u)));  if (depth < kMaxDepth) unit_00C6(c, 172u, depth + 1u); else { c.pc = 0x00419198u; return; } if (c.pc != 0x0042FD88u) [[unlikely]] return; }
L_0042FD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042FDA4; } }
L_0042FD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FD98u); set32(c.r[4], c.r[4].w[0] - 25336u);  if (depth < kMaxDepth) unit_00CD(c, 238u, depth + 1u); else { c.pc = 0x00437B28u; return; } if (c.pc != 0x0042FD98u) [[unlikely]] return; }
L_0042FD98:
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_0042FDA4:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 1;
L_0042FDA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 428u), c.r[2].w[0]);  if (t) { goto L_0042FED4; } }
L_0042FDB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FDB8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 82u, depth + 1u); else { c.pc = 0x00430A40u; return; } if (c.pc != 0x0042FDB8u) [[unlikely]] return; }
L_0042FDB8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0042FE38; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_0042FE04; } }
    set32(c.r[16], c.r[17].w[0] + 148u);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 3;
L_0042FDE0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FDF4u); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0042FDF4u) [[unlikely]] return; }
L_0042FDF4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0042FDE0u | kUnwind; return; } goto L_0042FDE0; }
L_0042FE04:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 432u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_0042FE20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 433u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0042FE28; } }
L_0042FE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FE28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_00CC(c, 88u, depth + 1u); else { c.pc = 0x00430A98u; return; } if (c.pc != 0x0042FE28u) [[unlikely]] return; }
L_0042FE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FE30u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 83u, depth + 1u); else { c.pc = 0x00430A48u; return; } if (c.pc != 0x0042FE30u) [[unlikely]] return; }
L_0042FE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { goto L_0042FED4; } }
L_0042FE38:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  goto L_0042FED4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FE48u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 50u, depth + 1u); else { c.pc = 0x004305F0u; return; } if (c.pc != 0x0042FE48u) [[unlikely]] return; }
L_0042FE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 428u), c.r[16].w[0]);  if (t) { goto L_0042FED0; } }
L_0042FE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FE58u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 95u, depth + 1u); else { c.pc = 0x00430B10u; return; } if (c.pc != 0x0042FE58u) [[unlikely]] return; }
L_0042FE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0042FE70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0042FEC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { goto L_0042FED4; } }
L_0042FE70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FE78u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 58u, depth + 1u); else { c.pc = 0x004306F0u; return; } if (c.pc != 0x0042FE78u) [[unlikely]] return; }
L_0042FE78:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  goto L_0042FED4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FE88u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042FE88u) [[unlikely]] return; }
L_0042FE88:
    set32(c.r[2], ld32((c.r[17].w[0] + 424u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0042FE9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FE9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 47u, depth + 1u); else { c.pc = 0x00430568u; return; } if (c.pc != 0x0042FE9Cu) [[unlikely]] return; }
L_0042FE9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FEA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CB(c, 362u, depth + 1u); else { c.pc = 0x0042F548u; return; } if (c.pc != 0x0042FEA4u) [[unlikely]] return; }
L_0042FEA4:
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FEB4u); st32((c.r[17].w[0] + 428u), 0u);  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x0042FEB4u) [[unlikely]] return; }
L_0042FEB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));  if (t) { goto L_0042FED4; } }
    c.budget -= 1;
L_0042FEC0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0042FED4; } }
    c.budget -= 1;
L_0042FED0:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 1u));
    c.budget -= 1;
L_0042FED4:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[3], 0u + 2u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0042FF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FEF0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 95u, depth + 1u); else { c.pc = 0x00430B10u; return; } if (c.pc != 0x0042FEF0u) [[unlikely]] return; }
L_0042FEF0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0042FF10; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0042FF48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042FF7C; } }
    c.budget -= 1;
L_0042FF10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FF18u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 82u, depth + 1u); else { c.pc = 0x00430A40u; return; } if (c.pc != 0x0042FF18u) [[unlikely]] return; }
L_0042FF18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0042FF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FF30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00CC(c, 62u, depth + 1u); else { c.pc = 0x004307A8u; return; } if (c.pc != 0x0042FF30u) [[unlikely]] return; }
L_0042FF30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));  goto L_0042FF7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0042FF7C; } }
    c.budget -= 1;
L_0042FF48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FF50u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C5(c, 456u, depth + 1u); else { c.pc = 0x004176D0u; return; } if (c.pc != 0x0042FF50u) [[unlikely]] return; }
L_0042FF50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0042FF7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FF60u); set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  if (depth < kMaxDepth) unit_00C6(c, 197u, depth + 1u); else { c.pc = 0x004193F8u; return; } if (c.pc != 0x0042FF60u) [[unlikely]] return; }
L_0042FF60:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0042FF78; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0042FF7C; } }
L_0042FF78:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0042FF7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FF84u);  if (depth < kMaxDepth) unit_00CD(c, 234u, depth + 1u); else { c.pc = 0x00437AE8u; return; } if (c.pc != 0x0042FF84u) [[unlikely]] return; }
L_0042FF84:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0042FFA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FF98u);  if (depth < kMaxDepth) unit_00C5(c, 456u, depth + 1u); else { c.pc = 0x004176D0u; return; } if (c.pc != 0x0042FF98u) [[unlikely]] return; }
L_0042FF98:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  goto L_0042FFA8; }
L_0042FFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FFB0u);  if (depth < kMaxDepth) unit_00CD(c, 235u, depth + 1u); else { c.pc = 0x00437B00u; return; } if (c.pc != 0x0042FFB0u) [[unlikely]] return; }
L_0042FFB0:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0042FFB4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 24u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 40u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 56u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0042FFD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FFE0u);  if (depth < kMaxDepth) unit_00CD(c, 236u, depth + 1u); else { c.pc = 0x00437B18u; return; } if (c.pc != 0x0042FFE0u) [[unlikely]] return; }
L_0042FFE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0042FFE8u);  if (depth < kMaxDepth) unit_00CB(c, 463u, depth + 1u); else { c.pc = 0x0042FFF8u; return; } if (c.pc != 0x0042FFE8u) [[unlikely]] return; }
L_0042FFE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  [[clang::musttail]] return unit_00CD(c, 237u, depth); }
L_0042FFF8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 2;
    [[clang::musttail]] return unit_00CC(c, 1u, depth);
}

}
