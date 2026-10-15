#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BF[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0,
    0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89,
    0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0,
    0, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0,
    157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170,
    0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0,
    0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0,
    0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313,
    0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0,
    0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0,
    0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0,
    0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425,
    0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0,
};

void unit_00BF(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003FC000;
    case 2u: goto L_003FC018;
    case 3u: goto L_003FC058;
    case 4u: goto L_003FC0A8;
    case 5u: goto L_003FC0BC;
    case 6u: goto L_003FC0F4;
    case 7u: goto L_003FC108;
    case 8u: goto L_003FC11C;
    case 9u: goto L_003FC140;
    case 10u: goto L_003FC160;
    case 11u: goto L_003FC168;
    case 12u: goto L_003FC178;
    case 13u: goto L_003FC180;
    case 14u: goto L_003FC1A0;
    case 15u: goto L_003FC1B0;
    case 16u: goto L_003FC1B8;
    case 17u: goto L_003FC1C4;
    case 18u: goto L_003FC1D0;
    case 19u: goto L_003FC1EC;
    case 20u: goto L_003FC200;
    case 21u: goto L_003FC220;
    case 22u: goto L_003FC234;
    case 23u: goto L_003FC23C;
    case 24u: goto L_003FC250;
    case 25u: goto L_003FC260;
    case 26u: goto L_003FC280;
    case 27u: goto L_003FC288;
    case 28u: goto L_003FC298;
    case 29u: goto L_003FC2B0;
    case 30u: goto L_003FC2B4;
    case 31u: goto L_003FC2E8;
    case 32u: goto L_003FC364;
    case 33u: goto L_003FC388;
    case 34u: goto L_003FC3A0;
    case 35u: goto L_003FC3B4;
    case 36u: goto L_003FC3D4;
    case 37u: goto L_003FC3DC;
    case 38u: goto L_003FC434;
    case 39u: goto L_003FC488;
    case 40u: goto L_003FC4B8;
    case 41u: goto L_003FC4EC;
    case 42u: goto L_003FC534;
    case 43u: goto L_003FC570;
    case 44u: goto L_003FC580;
    case 45u: goto L_003FC5B0;
    case 46u: goto L_003FC5C4;
    case 47u: goto L_003FC5F4;
    case 48u: goto L_003FC618;
    case 49u: goto L_003FC664;
    case 50u: goto L_003FC680;
    case 51u: goto L_003FC6A8;
    case 52u: goto L_003FC6C4;
    case 53u: goto L_003FC6D0;
    case 54u: goto L_003FC6EC;
    case 55u: goto L_003FC710;
    case 56u: goto L_003FC72C;
    case 57u: goto L_003FC738;
    case 58u: goto L_003FC754;
    case 59u: goto L_003FC788;
    case 60u: goto L_003FC7A4;
    case 61u: goto L_003FC7CC;
    case 62u: goto L_003FC7DC;
    case 63u: goto L_003FC818;
    case 64u: goto L_003FC834;
    case 65u: goto L_003FC844;
    case 66u: goto L_003FC860;
    case 67u: goto L_003FC8A0;
    case 68u: goto L_003FCA28;
    case 69u: goto L_003FCA58;
    case 70u: goto L_003FCAA0;
    case 71u: goto L_003FCAB8;
    case 72u: goto L_003FCAE8;
    case 73u: goto L_003FCAF8;
    case 74u: goto L_003FCB34;
    case 75u: goto L_003FCB60;
    case 76u: goto L_003FCB78;
    case 77u: goto L_003FCBA0;
    case 78u: goto L_003FCBB8;
    case 79u: goto L_003FCBF8;
    case 80u: goto L_003FCC10;
    case 81u: goto L_003FCC50;
    case 82u: goto L_003FCC88;
    case 83u: goto L_003FCCA0;
    case 84u: goto L_003FCCD0;
    case 85u: goto L_003FCCE8;
    case 86u: goto L_003FCD08;
    case 87u: goto L_003FCD1C;
    case 88u: goto L_003FCD48;
    case 89u: goto L_003FCD7C;
    case 90u: goto L_003FCD84;
    case 91u: goto L_003FCDB4;
    case 92u: goto L_003FCDD8;
    case 93u: goto L_003FCDE0;
    case 94u: goto L_003FCE0C;
    case 95u: goto L_003FCE1C;
    case 96u: goto L_003FCE24;
    case 97u: goto L_003FCE40;
    case 98u: goto L_003FCE48;
    case 99u: goto L_003FCE84;
    case 100u: goto L_003FCEB0;
    case 101u: goto L_003FCEC0;
    case 102u: goto L_003FCF1C;
    case 103u: goto L_003FCF50;
    case 104u: goto L_003FCF64;
    case 105u: goto L_003FCFA0;
    case 106u: goto L_003FCFB8;
    case 107u: goto L_003FD000;
    case 108u: goto L_003FD028;
    case 109u: goto L_003FD048;
    case 110u: goto L_003FD054;
    case 111u: goto L_003FD08C;
    case 112u: goto L_003FD0B0;
    case 113u: goto L_003FD0B8;
    case 114u: goto L_003FD0CC;
    case 115u: goto L_003FD0D4;
    case 116u: goto L_003FD0EC;
    case 117u: goto L_003FD0FC;
    case 118u: goto L_003FD130;
    case 119u: goto L_003FD188;
    case 120u: goto L_003FD1DC;
    case 121u: goto L_003FD1F0;
    case 122u: goto L_003FD204;
    case 123u: goto L_003FD214;
    case 124u: goto L_003FD238;
    case 125u: goto L_003FD258;
    case 126u: goto L_003FD290;
    case 127u: goto L_003FD2A8;
    case 128u: goto L_003FD2BC;
    case 129u: goto L_003FD2CC;
    case 130u: goto L_003FD300;
    case 131u: goto L_003FD314;
    case 132u: goto L_003FD338;
    case 133u: goto L_003FD3C4;
    case 134u: goto L_003FD3E0;
    case 135u: goto L_003FD3F4;
    case 136u: goto L_003FD418;
    case 137u: goto L_003FD434;
    case 138u: goto L_003FD44C;
    case 139u: goto L_003FD45C;
    case 140u: goto L_003FD4A0;
    case 141u: goto L_003FD508;
    case 142u: goto L_003FD514;
    case 143u: goto L_003FD52C;
    case 144u: goto L_003FD540;
    case 145u: goto L_003FD554;
    case 146u: goto L_003FD560;
    case 147u: goto L_003FD56C;
    case 148u: goto L_003FD584;
    case 149u: goto L_003FD58C;
    case 150u: goto L_003FD598;
    case 151u: goto L_003FD5A4;
    case 152u: goto L_003FD5BC;
    case 153u: goto L_003FD5C4;
    case 154u: goto L_003FD5D0;
    case 155u: goto L_003FD5DC;
    case 156u: goto L_003FD5F4;
    case 157u: goto L_003FD600;
    case 158u: goto L_003FD610;
    case 159u: goto L_003FD61C;
    case 160u: goto L_003FD638;
    case 161u: goto L_003FD650;
    case 162u: goto L_003FD688;
    case 163u: goto L_003FD6E0;
    case 164u: goto L_003FD708;
    case 165u: goto L_003FD758;
    case 166u: goto L_003FD768;
    case 167u: goto L_003FD798;
    case 168u: goto L_003FD7AC;
    case 169u: goto L_003FD7EC;
    case 170u: goto L_003FD7FC;
    case 171u: goto L_003FD804;
    case 172u: goto L_003FD820;
    case 173u: goto L_003FD828;
    case 174u: goto L_003FD838;
    case 175u: goto L_003FD840;
    case 176u: goto L_003FD85C;
    case 177u: goto L_003FD880;
    case 178u: goto L_003FD8C8;
    case 179u: goto L_003FD940;
    case 180u: goto L_003FD9C8;
    case 181u: goto L_003FD9F0;
    case 182u: goto L_003FD9FC;
    case 183u: goto L_003FDA08;
    case 184u: goto L_003FDA40;
    case 185u: goto L_003FDAA0;
    case 186u: goto L_003FDAD4;
    case 187u: goto L_003FDAE0;
    case 188u: goto L_003FDAEC;
    case 189u: goto L_003FDB34;
    case 190u: goto L_003FDB90;
    case 191u: goto L_003FDBF8;
    case 192u: goto L_003FDC10;
    case 193u: goto L_003FDC1C;
    case 194u: goto L_003FDC2C;
    case 195u: goto L_003FDC34;
    case 196u: goto L_003FDC78;
    case 197u: goto L_003FDCE0;
    case 198u: goto L_003FDCF0;
    case 199u: goto L_003FDD1C;
    case 200u: goto L_003FDD2C;
    case 201u: goto L_003FDD4C;
    case 202u: goto L_003FDD5C;
    case 203u: goto L_003FDDA8;
    case 204u: goto L_003FDDD4;
    case 205u: goto L_003FDDE4;
    case 206u: goto L_003FDE08;
    case 207u: goto L_003FDE30;
    case 208u: goto L_003FDE8C;
    case 209u: goto L_003FDEA8;
    case 210u: goto L_003FDEC0;
    case 211u: goto L_003FDED0;
    case 212u: goto L_003FDEE4;
    case 213u: goto L_003FDF00;
    case 214u: goto L_003FDF94;
    case 215u: goto L_003FDFAC;
    case 216u: goto L_003FDFC0;
    case 217u: goto L_003FDFEC;
    case 218u: goto L_003FE02C;
    case 219u: goto L_003FE0F4;
    case 220u: goto L_003FE168;
    case 221u: goto L_003FE1A0;
    case 222u: goto L_003FE1B0;
    case 223u: goto L_003FE1BC;
    case 224u: goto L_003FE1F0;
    case 225u: goto L_003FE284;
    case 226u: goto L_003FE29C;
    case 227u: goto L_003FE2B0;
    case 228u: goto L_003FE2D8;
    case 229u: goto L_003FE2F0;
    case 230u: goto L_003FE304;
    case 231u: goto L_003FE314;
    case 232u: goto L_003FE324;
    case 233u: goto L_003FE334;
    case 234u: goto L_003FE350;
    case 235u: goto L_003FE364;
    case 236u: goto L_003FE370;
    case 237u: goto L_003FE3A0;
    case 238u: goto L_003FE3EC;
    case 239u: goto L_003FE448;
    case 240u: goto L_003FE4D8;
    case 241u: goto L_003FE4E4;
    case 242u: goto L_003FE4EC;
    case 243u: goto L_003FE518;
    case 244u: goto L_003FE534;
    case 245u: goto L_003FE544;
    case 246u: goto L_003FE550;
    case 247u: goto L_003FE594;
    case 248u: goto L_003FE608;
    case 249u: goto L_003FE63C;
    case 250u: goto L_003FE660;
    case 251u: goto L_003FE668;
    case 252u: goto L_003FE684;
    case 253u: goto L_003FE68C;
    case 254u: goto L_003FE6E0;
    case 255u: goto L_003FE71C;
    case 256u: goto L_003FE744;
    case 257u: goto L_003FE780;
    case 258u: goto L_003FE7CC;
    case 259u: goto L_003FE7E8;
    case 260u: goto L_003FE808;
    case 261u: goto L_003FE820;
    case 262u: goto L_003FE830;
    case 263u: goto L_003FE83C;
    case 264u: goto L_003FE868;
    case 265u: goto L_003FE898;
    case 266u: goto L_003FE8AC;
    case 267u: goto L_003FE8BC;
    case 268u: goto L_003FE8CC;
    case 269u: goto L_003FE8FC;
    case 270u: goto L_003FE90C;
    case 271u: goto L_003FE92C;
    case 272u: goto L_003FE940;
    case 273u: goto L_003FE950;
    case 274u: goto L_003FE960;
    case 275u: goto L_003FE988;
    case 276u: goto L_003FE998;
    case 277u: goto L_003FE9A8;
    case 278u: goto L_003FE9C0;
    case 279u: goto L_003FE9F8;
    case 280u: goto L_003FEA3C;
    case 281u: goto L_003FEA98;
    case 282u: goto L_003FEB28;
    case 283u: goto L_003FEB38;
    case 284u: goto L_003FEB58;
    case 285u: goto L_003FEB64;
    case 286u: goto L_003FEBAC;
    case 287u: goto L_003FEC18;
    case 288u: goto L_003FEC4C;
    case 289u: goto L_003FEC54;
    case 290u: goto L_003FEC5C;
    case 291u: goto L_003FECB8;
    case 292u: goto L_003FECE4;
    case 293u: goto L_003FED08;
    case 294u: goto L_003FED30;
    case 295u: goto L_003FED38;
    case 296u: goto L_003FED70;
    case 297u: goto L_003FEDB8;
    case 298u: goto L_003FEDC4;
    case 299u: goto L_003FEDD0;
    case 300u: goto L_003FEDD8;
    case 301u: goto L_003FEE00;
    case 302u: goto L_003FEE1C;
    case 303u: goto L_003FEE2C;
    case 304u: goto L_003FEE38;
    case 305u: goto L_003FEE50;
    case 306u: goto L_003FEE70;
    case 307u: goto L_003FEE88;
    case 308u: goto L_003FEE90;
    case 309u: goto L_003FEE9C;
    case 310u: goto L_003FEEA8;
    case 311u: goto L_003FEEC0;
    case 312u: goto L_003FEEF0;
    case 313u: goto L_003FEEFC;
    case 314u: goto L_003FEF14;
    case 315u: goto L_003FEF1C;
    case 316u: goto L_003FEF2C;
    case 317u: goto L_003FEF60;
    case 318u: goto L_003FEFE8;
    case 319u: goto L_003FF05C;
    case 320u: goto L_003FF080;
    case 321u: goto L_003FF0BC;
    case 322u: goto L_003FF0E0;
    case 323u: goto L_003FF10C;
    case 324u: goto L_003FF11C;
    case 325u: goto L_003FF140;
    case 326u: goto L_003FF154;
    case 327u: goto L_003FF164;
    case 328u: goto L_003FF188;
    case 329u: goto L_003FF19C;
    case 330u: goto L_003FF1C4;
    case 331u: goto L_003FF1D4;
    case 332u: goto L_003FF1E4;
    case 333u: goto L_003FF200;
    case 334u: goto L_003FF248;
    case 335u: goto L_003FF2D8;
    case 336u: goto L_003FF338;
    case 337u: goto L_003FF368;
    case 338u: goto L_003FF39C;
    case 339u: goto L_003FF3DC;
    case 340u: goto L_003FF3F8;
    case 341u: goto L_003FF420;
    case 342u: goto L_003FF438;
    case 343u: goto L_003FF448;
    case 344u: goto L_003FF46C;
    case 345u: goto L_003FF494;
    case 346u: goto L_003FF4A4;
    case 347u: goto L_003FF4B4;
    case 348u: goto L_003FF4D0;
    case 349u: goto L_003FF4D8;
    case 350u: goto L_003FF518;
    case 351u: goto L_003FF588;
    case 352u: goto L_003FF5AC;
    case 353u: goto L_003FF5BC;
    case 354u: goto L_003FF5E0;
    case 355u: goto L_003FF5E8;
    case 356u: goto L_003FF5F8;
    case 357u: goto L_003FF628;
    case 358u: goto L_003FF630;
    case 359u: goto L_003FF640;
    case 360u: goto L_003FF67C;
    case 361u: goto L_003FF6B8;
    case 362u: goto L_003FF700;
    case 363u: goto L_003FF720;
    case 364u: goto L_003FF740;
    case 365u: goto L_003FF770;
    case 366u: goto L_003FF780;
    case 367u: goto L_003FF79C;
    case 368u: goto L_003FF7B0;
    case 369u: goto L_003FF7CC;
    case 370u: goto L_003FF7E8;
    case 371u: goto L_003FF808;
    case 372u: goto L_003FF824;
    case 373u: goto L_003FF840;
    case 374u: goto L_003FF860;
    case 375u: goto L_003FF884;
    case 376u: goto L_003FF8A0;
    case 377u: goto L_003FF8C0;
    case 378u: goto L_003FF8E0;
    case 379u: goto L_003FF900;
    case 380u: goto L_003FF920;
    case 381u: goto L_003FF948;
    case 382u: goto L_003FF968;
    case 383u: goto L_003FF988;
    case 384u: goto L_003FF9A8;
    case 385u: goto L_003FF9C8;
    case 386u: goto L_003FF9E8;
    case 387u: goto L_003FFA04;
    case 388u: goto L_003FFA14;
    case 389u: goto L_003FFA34;
    case 390u: goto L_003FFA44;
    case 391u: goto L_003FFAC8;
    case 392u: goto L_003FFAE8;
    case 393u: goto L_003FFB04;
    case 394u: goto L_003FFB24;
    case 395u: goto L_003FFB34;
    case 396u: goto L_003FFB44;
    case 397u: goto L_003FFB74;
    case 398u: goto L_003FFB98;
    case 399u: goto L_003FFBA8;
    case 400u: goto L_003FFBC8;
    case 401u: goto L_003FFBD4;
    case 402u: goto L_003FFBF0;
    case 403u: goto L_003FFC00;
    case 404u: goto L_003FFC20;
    case 405u: goto L_003FFC2C;
    case 406u: goto L_003FFC4C;
    case 407u: goto L_003FFC68;
    case 408u: goto L_003FFC80;
    case 409u: goto L_003FFC94;
    case 410u: goto L_003FFCA8;
    case 411u: goto L_003FFCB4;
    case 412u: goto L_003FFCC4;
    case 413u: goto L_003FFCE4;
    case 414u: goto L_003FFCF0;
    case 415u: goto L_003FFD0C;
    case 416u: goto L_003FFD20;
    case 417u: goto L_003FFD40;
    case 418u: goto L_003FFD4C;
    case 419u: goto L_003FFD6C;
    case 420u: goto L_003FFD8C;
    case 421u: goto L_003FFDA4;
    case 422u: goto L_003FFDBC;
    case 423u: goto L_003FFDD0;
    case 424u: goto L_003FFDF4;
    case 425u: goto L_003FFDFC;
    case 426u: goto L_003FFE0C;
    case 427u: goto L_003FFE1C;
    case 428u: goto L_003FFE2C;
    case 429u: goto L_003FFE58;
    case 430u: goto L_003FFE68;
    case 431u: goto L_003FFE84;
    case 432u: goto L_003FFE98;
    case 433u: goto L_003FFEB4;
    case 434u: goto L_003FFEF0;
    case 435u: goto L_003FFF58;
    case 436u: goto L_003FFF80;
    case 437u: goto L_003FFF94;
    case 438u: goto L_003FFFAC;
    case 439u: goto L_003FFFC4;
    case 440u: goto L_003FFFE8;
    default: bad_entry(c, 0x003FC000u); return;
    }
L_003FC000:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FC120; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC018u); set32(c.r[4], ld32((c.r[23].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003FC018u) [[unlikely]] return; }
L_003FC018:
    c.f[0] = ld32((c.r[23].w[0] + 1624u));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.f[1] = ld32((c.r[21].w[0] + 8u));
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = c.f[0] ^ fp::kSign;
    set32(c.r[19], ld32((c.r[21].w[0] + 12u)));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[18], ld32((c.r[23].w[0] + 492u)));  if (t) { goto L_003FC090; } }
    set32(c.r[16], ld32((c.r[23].w[0] + 504u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 5;
    if (c.r[16].d[0] == c.r[2].d[0]) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_003FC0E8; }
    c.budget -= 1;
L_003FC058:
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = ld32((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[20].w[0]), c.f[1]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC058u | kUnwind; return; } goto L_003FC058; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FC0E8; } }
L_003FC090:
    set32(c.r[16], ld32((c.r[23].w[0] + 504u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[30], 0u - 1u);  if (t) { goto L_003FC0E4; } }
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 1;
L_003FC0A8:
    set32(c.r[4], c.r[29].w[0] + 24u);
    c.f[13] = ld32((c.r[21].w[0] + 8u));
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC0BCu); c.f[14] = ld32((c.r[23].w[0] + 1620u));  if (depth < kMaxDepth) unit_00BE(c, 115u, depth + 1u); else { c.pc = 0x003F9640u; return; } if (c.pc != 0x003FC0BCu) [[unlikely]] return; }
L_003FC0BC:
    c.f[1] = ld32((c.r[18].w[0]));
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[20].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 4u);  if (t) { goto L_003FC110; } }
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[30].d[0]) { c.f[12] = ld32((c.r[19].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC0A8u | kUnwind; return; } goto L_003FC0A8; }
L_003FC0E4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003FC0E8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC0F4u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 360u, depth + 1u); else { c.pc = 0x00402AD8u; return; } if (c.pc != 0x003FC0F4u) [[unlikely]] return; }
L_003FC0F4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC108u); set32(c.r[5], ld32((c.r[2].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FC108u) [[unlikely]] return; }
L_003FC108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003FC2B4; } }
L_003FC110:
    set32(c.r[5], ld32((c.r[23].w[0] + 2200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC11Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FC11Cu) [[unlikely]] return; }
L_003FC11C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003FC120:
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[16], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FC168; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], 0u - 1u);
    c.budget -= 2;
L_003FC140:
    c.r[6].d[0] = 0ull | 49188ull;
    c.r[6].d[0] = c.r[6].d[0] << 18;
    c.r[6].d[0] = c.r[6].d[0] | 52953ull;
    c.r[6].d[0] = c.r[6].d[0] << 30;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] - 448u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC160u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC160u) [[unlikely]] return; }
L_003FC160:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC140u | kUnwind; return; } goto L_003FC140; } }
L_003FC168:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 440u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC178u); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC178u) [[unlikely]] return; }
L_003FC178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003FC2B4; } }
L_003FC180:
    set32(c.r[4], ld32((c.r[21].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003FC2B4; } }
    set32(c.r[17], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[4].w[0] + 8u);  if (t) { goto L_003FC2B4; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003FC1A0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 28u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1B0u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 361u, depth + 1u); else { c.pc = 0x003E7C38u; return; } if (c.pc != 0x003FC1B0u) [[unlikely]] return; }
L_003FC1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1B8u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FC1B8u) [[unlikely]] return; }
L_003FC1B8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1C4u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FC1C4u) [[unlikely]] return; }
L_003FC1C4:
    c.f[12] = ld32((c.r[29].w[0] + 28u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1D0u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FC1D0u) [[unlikely]] return; }
L_003FC1D0:
    set32(c.r[8], ld32((c.r[21].w[0] + 56u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC1ECu); set32(c.r[5], c.r[19].w[0] - 288u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC1ECu) [[unlikely]] return; }
L_003FC1EC:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC1A0u | kUnwind; return; } goto L_003FC1A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003FC2B4; } }
L_003FC200:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FC220; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC220u); set32(c.r[5], c.r[5].w[0] - 264u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC220u) [[unlikely]] return; }
L_003FC220:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC234u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 118u, depth + 1u); else { c.pc = 0x003FD130u; return; } if (c.pc != 0x003FC234u) [[unlikely]] return; }
L_003FC234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);  if (t) { goto L_003FC2B4; } }
L_003FC23C:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 424u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC250u); c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FC250u) [[unlikely]] return; }
L_003FC250:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC260u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC260u) [[unlikely]] return; }
L_003FC260:
    set32(c.r[4], ld32((c.r[21].w[0] + 32u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_003FC2A8; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[4].w[0] + 8u);  if (t) { goto L_003FC2A4; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003FC280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC288u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FC288u) [[unlikely]] return; }
L_003FC288:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC298u); set32(c.r[5], c.r[17].w[0] - 416u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC298u) [[unlikely]] return; }
L_003FC298:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC280u | kUnwind; return; } goto L_003FC280; } }
L_003FC2A4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003FC2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC2B0u); set32(c.r[5], c.r[19].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC2B0u) [[unlikely]] return; }
L_003FC2B0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FC2B4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003FC2E8:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    set32(c.r[3], c.r[29].w[0] + 36u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    set32(c.r[7], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    set32(c.r[8], c.r[29].w[0] + 20u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    set32(c.r[9], c.r[29].w[0] + 24u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    set32(c.r[10], c.r[29].w[0] + 28u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[11], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0] + 2376u), 0u);
    set32(c.r[5], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC364u); set32(c.r[6], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_00BE(c, 201u, depth + 1u); else { c.pc = 0x003FA340u; return; } if (c.pc != 0x003FC364u) [[unlikely]] return; }
L_003FC364:
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FD0D4; } }
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 736u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FC388:
    set32(c.r[16], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2312u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003FC3A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC3A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_00BA(c, 131u, depth + 1u); else { c.pc = 0x003E95D0u; return; } if (c.pc != 0x003FC3A0u) [[unlikely]] return; }
L_003FC3A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FC3A4:
    set32(c.r[6], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003FCE38; } }
L_003FC3B4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FD0FC; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 52u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC3D4u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 405u, depth + 1u); else { c.pc = 0x004031A0u; return; } if (c.pc != 0x003FC3D4u) [[unlikely]] return; }
L_003FC3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
L_003FC3DC:
    set32(c.r[4], c.r[30].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 504u)));
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FD0D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;  if (t) { goto L_003FC404; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FD0D8; } }
L_003FC404:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[3], c.r[30].w[0] - 22720u);  goto L_003FC438; }
    set32(c.r[2], ld32((c.r[4].w[0] + 332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FC428; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC438; } }
L_003FC428:
    set32(c.r[4], ld32((c.r[4].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC434u); set32(c.r[5], c.r[5].w[0] - 120u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC434u) [[unlikely]] return; }
L_003FC434:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FC438:
    set32(c.r[2], 0u + 4u);
    set32(c.r[4], ld32((c.r[3].w[0] + 504u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC490; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC478; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC478; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC4F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC48C; } }
L_003FC478:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC488u); set32(c.r[5], c.r[5].w[0] - 40u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC488u) [[unlikely]] return; }
L_003FC488:
    set32(c.r[16], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FC48C:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_003FC490:
    set32(c.r[17], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC4F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 184u)));  goto L_003FC4BC; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4B8u); set32(c.r[5], c.r[5].w[0] + 48u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC4B8u) [[unlikely]] return; }
L_003FC4B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    c.budget -= 1;
L_003FC4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[6], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC4F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003FC4F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003FC4F4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC4ECu); set32(c.r[5], c.r[5].w[0] + 112u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC4ECu) [[unlikely]] return; }
L_003FC4EC:
    set32(c.r[6], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FC4F0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003FC4F4:
    set32(c.r[3], ld32((c.r[6].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003FC510; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[6].w[0] + 532u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 168u);  if (t) { goto L_003FC524; } }
L_003FC510:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003FC53C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[6].w[0] + 532u);
    set32(c.r[5], c.r[5].w[0] + 216u);
    c.budget -= 3;
L_003FC524:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 788u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC534u); c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC534u) [[unlikely]] return; }
L_003FC534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC5F8; } }
L_003FC53C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FC5F4; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 2392u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[6].w[0] + 2392u), c.r[2].w[0]);  if (t) { goto L_003FC598; } }
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_003FC59C; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 1;
L_003FC570:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC580u); set32(c.r[6], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00BF(c, 177u, depth + 1u); else { c.pc = 0x003FD880u; return; } if (c.pc != 0x003FC580u) [[unlikely]] return; }
L_003FC580:
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_003FC59C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], ld32((c.r[29].w[0] + 52u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC570u | kUnwind; return; } goto L_003FC570; } }
L_003FC598:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003FC59C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 40u)));  goto L_003FC5D4; }
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 8u);  if (t) { goto L_003FC5D0; } }
L_003FC5B0:
    set32(c.r[7], ld32((c.r[29].w[0] + 52u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC5C4u); set32(c.r[6], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00BF(c, 177u, depth + 1u); else { c.pc = 0x003FD880u; return; } if (c.pc != 0x003FC5C4u) [[unlikely]] return; }
L_003FC5C4:
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC5B0u | kUnwind; return; } goto L_003FC5B0; } }
L_003FC5D0:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_003FC5D4:
    set32(c.r[6], c.r[30].w[0] - 22720u);
    set32(c.r[7], c.r[6].w[0] + 532u);
    st32((c.r[6].w[0] + 2372u), 0u);
    st32((c.r[6].w[0] + 2484u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 272u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC5F4u); set32(c.r[6], c.r[6].w[0] + 788u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC5F4u) [[unlikely]] return; }
L_003FC5F4:
    set32(c.r[16], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FC5F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 188u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC864; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2376u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 2420u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC618u); st32((c.r[16].w[0] + 2376u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FC618u) [[unlikely]] return; }
L_003FC618:
    set32(c.r[3], ld32((c.r[16].w[0] + 512u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[29].w[0] + 40u), c.r[3].w[0]);  if (t) { goto L_003FC63C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_003FC63C; } }
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 1;
L_003FC63C:
    set32(c.r[2], c.r[30].w[0] - 22720u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 184u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[6], ld32((c.r[29].w[0] + 40u)));  if (t) { goto L_003FC66C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 288u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC664u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC664u) [[unlikely]] return; }
L_003FC664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[29].w[0] + 40u)));  if (t) { goto L_003FC684; } }
L_003FC66C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 304u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC680u); c.r[7].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC680u) [[unlikely]] return; }
L_003FC680:
    set32(c.r[16], ld32((c.r[29].w[0] + 40u)));
    c.budget -= 1;
L_003FC684:
    set32(c.r[2], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[18], 0u - 1u);  if (t) { goto L_003FC6DC; } }
    set32(c.r[17], 0u + 20u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.budget -= 5;
L_003FC6A8:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x003FC6ACu);  goto L_003FC6B0; }
L_003FC6B0:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003FC6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6C4u); set32(c.r[5], c.r[20].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC6C4u) [[unlikely]] return; }
L_003FC6C4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003FC6C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6D0u); set32(c.r[5], c.r[19].w[0] - 264u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC6D0u) [[unlikely]] return; }
L_003FC6D0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[18].d[0]) { mmi::div(c, 0, c.r[16].w[0], c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC6A8u | kUnwind; return; } goto L_003FC6A8; }
L_003FC6DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC6ECu); set32(c.r[5], c.r[5].w[0] + 320u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC6ECu) [[unlikely]] return; }
L_003FC6EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[16], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[18], 0u - 1u);  if (t) { goto L_003FC744; } }
    set32(c.r[17], 0u + 20u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    mmi::div(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.budget -= 4;
L_003FC710:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x003FC714u);  goto L_003FC718; }
L_003FC718:
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003FC730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC72Cu); set32(c.r[5], c.r[20].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC72Cu) [[unlikely]] return; }
L_003FC72C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003FC730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC738u); set32(c.r[5], c.r[19].w[0] + 344u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC738u) [[unlikely]] return; }
L_003FC738:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[18].d[0]) { mmi::div(c, 0, c.r[16].w[0], c.r[17].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC710u | kUnwind; return; } goto L_003FC710; }
L_003FC744:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC754u); set32(c.r[5], c.r[5].w[0] + 352u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC754u) [[unlikely]] return; }
L_003FC754:
    set32(c.r[4], c.r[30].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 512u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 516u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC7F8; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[19], 0u + 4u);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
L_003FC788:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 184u)));  goto L_003FC7B8; }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 184u)));  goto L_003FC7B8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7A4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FC7A4u) [[unlikely]] return; }
L_003FC7A4:
    set32(c.r[3], ld32((c.r[17].w[0] + 512u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 504u)));  goto L_003FC7E0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 184u)));
    c.budget -= 1;
L_003FC7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003FC7D4; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 360u, depth + 1u); else { c.pc = 0x00402AD8u; return; } if (c.pc != 0x003FC7CCu) [[unlikely]] return; }
L_003FC7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[17].w[0] + 504u)));  if (t) { goto L_003FC7E0; } }
L_003FC7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC7DCu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 372u, depth + 1u); else { c.pc = 0x00402C40u; return; } if (c.pc != 0x003FC7DCu) [[unlikely]] return; }
L_003FC7DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 1;
L_003FC7E0:
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC788u | kUnwind; return; } goto L_003FC788; }
    set32(c.r[3], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FC7F8:
    set32(c.r[2], ld32((c.r[3].w[0] + 2420u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003FC854; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003FC850; } }
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], 0u + 4u);
    c.budget -= 2;
L_003FC818:
    set32(c.r[2], ld32((c.r[19].w[0] + 184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FC83C; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC834u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 360u, depth + 1u); else { c.pc = 0x00402AD8u; return; } if (c.pc != 0x003FC834u) [[unlikely]] return; }
L_003FC834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0])));  if (t) { goto L_003FC848; } }
L_003FC83C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC844u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 372u, depth + 1u); else { c.pc = 0x00402C40u; return; } if (c.pc != 0x003FC844u) [[unlikely]] return; }
L_003FC844:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003FC848:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FC818u | kUnwind; return; } goto L_003FC818; } }
L_003FC850:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FC854:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC860u); set32(c.r[5], c.r[5].w[0] + 376u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC860u) [[unlikely]] return; }
L_003FC860:
    set32(c.r[4], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FC864:
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC8A4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[3].w[0] + 1600u));  goto L_003FC8A8; }
    set32(c.r[6], ld32((c.r[4].w[0] + 2484u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 408u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] << 1);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FC8A0u); set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FC8A0u) [[unlikely]] return; }
L_003FC8A0:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FC8A4:
    c.f[1] = ld32((c.r[3].w[0] + 1600u));
    c.budget -= 1;
L_003FC8A8:
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.f[2] = fp::add(c.f[1], c.f[1]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[3].w[0] + 2360u), c.f[2]);  if (t) { goto L_003FC8C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[3].w[0] + 128u));  if (t) { goto L_003FC8D0; } }
L_003FC8C0:
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC8E8; } }
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    c.budget -= 1;
L_003FC8D0:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[3].w[0] + 2360u), c.f[0]);  goto L_003FC8E4; }
L_003FC8E4:
    set32(c.r[4], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FC8E8:
    c.f[2] = ld32((c.r[4].w[0] + 2360u));
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[4].w[0] + 2364u), c.f[2]);  if (t) { goto L_003FC928; } }
    c.f[1] = ld32((c.r[4].w[0] + 1604u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3CA30000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0] + 2364u), c.f[1]);  goto L_003FC928; }
L_003FC928:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    c.f[0] = ld32((c.r[23].w[0] + 720u));
    c.f[1] = ld32((c.r[3].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003FC970; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[30].w[0] - 22720u);  if (t) { goto L_003FC99C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 168u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FC99C; } }
    c.f[1] = ld32((c.r[3].w[0] + 44u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if (!(c.fcr31 & kFpuCondition)) { c.f[1] = ld32((c.r[4].w[0] + 140u));  goto L_003FC9A0; }
L_003FC970:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[3].w[0] + 1604u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = ld32((c.r[3].w[0] + 2364u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[3].w[0] + 2364u), c.f[0]);  goto L_003FC998; }
L_003FC998:
    set32(c.r[4], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FC99C:
    c.f[1] = ld32((c.r[4].w[0] + 140u));
    c.budget -= 1;
L_003FC9A0:
    c.f[0] = ld32((c.r[4].w[0] + 2364u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0] + 2364u), c.f[1]);  goto L_003FC9B4; }
L_003FC9B4:
    c.f[0] = ld32((c.r[23].w[0] + 720u));
    c.f[2] = ld32((c.r[4].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[3], ld32((c.r[4].w[0] + 184u)));  goto L_003FC9EC; }
    c.f[0] = ld32((c.r[4].w[0] + 504u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 2364u));
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 2364u), c.f[1]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 8;
L_003FC9EC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[3], c.r[30].w[0] - 22720u);  goto L_003FCD0C; }
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_003FCA1C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[22].d[0] + 0ull;  goto L_003FCA20; }
    set32(c.r[2], ld32((c.r[4].w[0] + 176u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003FCD0C; } }
L_003FCA1C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003FCA20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA28u); set32(c.r[6], ld32((c.r[29].w[0] + 52u)));  if (depth < kMaxDepth) unit_00BE(c, 286u, depth + 1u); else { c.pc = 0x003FB2D8u; return; } if (c.pc != 0x003FCA28u) [[unlikely]] return; }
L_003FCA28:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[30].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { c.r[2].d[0] = ld64((c.r[4].w[0] + 176u));  goto L_003FCA60; }
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FCA5C; } }
    c.f[12] = ld32((c.r[4].w[0] + 2364u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCA58u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 178u, depth + 1u); else { c.pc = 0x004015C0u; return; } if (c.pc != 0x003FCA58u) [[unlikely]] return; }
L_003FCA58:
    set32(c.r[4], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FCA5C:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 176u));
    c.budget -= 1;
L_003FCA60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[23], c.r[29].w[0] + 44u);  if (t) { goto L_003FCD00; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[4].w[0] + 2456u), c.r[2].w[0]);  if (t) { goto L_003FCAC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_003FCAC4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FCAC4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 8u);  if (t) { goto L_003FCAC4; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_003FCAA0:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 2196u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCAB8u); c.f[12] = ld32((c.r[17].w[0] + 2364u));  if (depth < kMaxDepth) unit_00C0(c, 169u, depth + 1u); else { c.pc = 0x004012F8u; return; } if (c.pc != 0x003FCAB8u) [[unlikely]] return; }
L_003FCAB8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCAA0u | kUnwind; return; } goto L_003FCAA0; } }
L_003FCAC4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[18].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FCBDC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FCBDC; } }
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[22], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 4;
L_003FCAE8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_003FCB04; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCAF8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FCAF8u) [[unlikely]] return; }
L_003FCAF8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003FCBC8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_003FCB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003FCBC4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[22].w[0] + 180u)));  goto L_003FCB38; }
    set32(c.r[2], ld32((c.r[3].w[0] + 184u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003FCB34; } }
    c.f[12] = ld32((c.r[3].w[0] + 2360u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB34u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 132u, depth + 1u); else { c.pc = 0x003FD338u; return; } if (c.pc != 0x003FCB34u) [[unlikely]] return; }
L_003FCB34:
    set32(c.r[2], ld32((c.r[22].w[0] + 180u)));
    c.budget -= 1;
L_003FCB38:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003FCBC8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_003FCB88; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003FCB84; } }
    set32(c.r[19], c.r[20].w[0] - 22720u);
    c.budget -= 2;
L_003FCB60:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[19].w[0] + 2364u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCB78u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 169u, depth + 1u); else { c.pc = 0x004012F8u; return; } if (c.pc != 0x003FCB78u) [[unlikely]] return; }
L_003FCB78:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCB60u | kUnwind; return; } goto L_003FCB60; } }
L_003FCB84:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003FCB88:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003FCBC8; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003FCBC4; } }
    set32(c.r[19], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003FCBA0:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[19].w[0] + 2364u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCBB8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 169u, depth + 1u); else { c.pc = 0x004012F8u; return; } if (c.pc != 0x003FCBB8u) [[unlikely]] return; }
L_003FCBB8:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCBA0u | kUnwind; return; } goto L_003FCBA0; } }
L_003FCBC4:
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_003FCBC8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_003FCBE0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 52u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCAE8u | kUnwind; return; } goto L_003FCAE8; } }
L_003FCBDC:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_003FCBE0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003FCD00; } }
    set32(c.r[18], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[19], c.r[3].w[0] + 8u);  if (t) { goto L_003FCD00; } }
    c.budget -= 1;
L_003FCBF8:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 12u)));  goto L_003FCC1C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC10u); set32(c.r[20], c.r[19].w[0] + 4u);  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FCC10u) [[unlikely]] return; }
L_003FCC10:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[19].w[0])));  goto L_003FCCF8; }
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    c.budget -= 1;
L_003FCC1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 4u);  if (t) { goto L_003FCCF4; } }
    set32(c.r[3], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 176u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003FCC54; }
    set32(c.r[2], ld32((c.r[3].w[0] + 184u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003FCC50; } }
    c.f[12] = ld32((c.r[3].w[0] + 2360u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCC50u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 132u, depth + 1u); else { c.pc = 0x003FD338u; return; } if (c.pc != 0x003FCC50u) [[unlikely]] return; }
L_003FCC50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003FCC54:
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 180u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 4u);  if (t) { goto L_003FCCF4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  goto L_003FCCB0; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003FCCAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[22], c.r[2].w[0] - 22720u);
    c.budget -= 3;
L_003FCC88:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[22].w[0] + 2364u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCCA0u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 169u, depth + 1u); else { c.pc = 0x004012F8u; return; } if (c.pc != 0x003FCCA0u) [[unlikely]] return; }
L_003FCCA0:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCC88u | kUnwind; return; } goto L_003FCC88; } }
L_003FCCAC:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003FCCB0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[19].w[0])));  goto L_003FCCF8; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003FCCF4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[22], c.r[3].w[0] - 22720u);
    c.budget -= 3;
L_003FCCD0:
    set32(c.r[6], ld32((c.r[18].w[0] + 12u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[22].w[0] + 2364u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCCE8u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 169u, depth + 1u); else { c.pc = 0x004012F8u; return; } if (c.pc != 0x003FCCE8u) [[unlikely]] return; }
L_003FCCE8:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCCD0u | kUnwind; return; } goto L_003FCCD0; } }
L_003FCCF4:
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 1;
L_003FCCF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCBF8u | kUnwind; return; } goto L_003FCBF8; } }
L_003FCD00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD08u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FCD08u) [[unlikely]] return; }
L_003FCD08:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FCD0C:
    set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2392u), c.r[2].w[0]);  if (t) { goto L_003FD0FC; } }
L_003FCD1C:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 476u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FCD4C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 216u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FCD4C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD48u); set32(c.r[5], c.r[5].w[0] + 424u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FCD48u) [[unlikely]] return; }
L_003FCD48:
    set32(c.r[2], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FCD4C:
    set32(c.r[3], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 2288u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0] + 2372u), c.r[4].w[0]);  if (t) { goto L_003FD0B8; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 408u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCD7Cu); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FCD7Cu) [[unlikely]] return; }
L_003FCD7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
L_003FCD84:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FCDBC; } }
    set32(c.r[9], ld32((c.r[3].w[0] + 504u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 496u);
    set32(c.r[7], c.r[3].w[0] + 532u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCDB4u); set32(c.r[6], c.r[3].w[0] + 788u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FCDB4u) [[unlikely]] return; }
L_003FCDB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
L_003FCDBC:
    set32(c.r[6], ld32((c.r[3].w[0] + 504u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCDD8u); set32(c.r[6], c.r[6].w[0] + 1u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FCDD8u) [[unlikely]] return; }
L_003FCDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
L_003FCDE0:
    set32(c.r[16], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FD0D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FCE0C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE0Cu); set32(c.r[5], c.r[5].w[0] + 528u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FCE0Cu) [[unlikely]] return; }
L_003FCE0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE1Cu); set32(c.r[5], c.r[5].w[0] + 584u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FCE1Cu) [[unlikely]] return; }
L_003FCE1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 2372u), 0u);  if (t) { goto L_003FD0FC; } }
L_003FCE24:
    set32(c.r[2], c.r[30].w[0] - 22720u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 504u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 5;
L_003FCE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE40u); set32(c.r[5], c.r[5].w[0] - 152u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FCE40u) [[unlikely]] return; }
L_003FCE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
L_003FCE48:
    set32(c.r[17], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[17].w[0] + 476u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FD0D8; } }
    set32(c.r[18], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 40u), c.r[18].w[0]);  if (t) { goto L_003FCE74; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_003FCEB8; } }
L_003FCE74:
    set32(c.r[4], ld32((c.r[17].w[0] + 2420u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCE84u); set32(c.r[16], c.r[16].w[0] + 592u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FCE84u) [[unlikely]] return; }
L_003FCE84:
    set32(c.r[9], ld32((c.r[29].w[0] + 24u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 512u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[9].w[0] >> 31);
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCEB0u); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FCEB0u) [[unlikely]] return; }
L_003FCEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[30].w[0] - 22720u);  if (t) { goto L_003FCF20; } }
L_003FCEB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCEC0u); set32(c.r[4], ld32((c.r[17].w[0] + 2420u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FCEC0u) [[unlikely]] return; }
L_003FCEC0:
    set32(c.r[3], ld32((c.r[17].w[0] + 512u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[17].w[0] + 2372u), c.r[6].w[0]);  if (t) { goto L_003FCEE0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
L_003FCEE0:
    set32(c.r[9], ld32((c.r[29].w[0] + 24u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[2], c.r[9].w[0] >> 31);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[9], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    set32(c.r[8], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[5].w[0] + 592u);
    set32(c.r[7], c.r[7].w[0] - c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF1Cu); set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[9].w[0]) >> 1));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FCF1Cu) [[unlikely]] return; }
L_003FCF1C:
    set32(c.r[4], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FCF20:
    set32(c.r[3], ld32((c.r[4].w[0] + 512u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 516u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[30].w[0] - 22720u);  if (t) { goto L_003FCF80; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 2188u)));
    c.budget -= 3;
L_003FCF50:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCF64u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 363u, depth + 1u); else { c.pc = 0x00402B38u; return; } if (c.pc != 0x003FCF64u) [[unlikely]] return; }
L_003FCF64:
    set32(c.r[2], ld32((c.r[17].w[0] + 504u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[16].d[0] < c.r[18].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0] + 2188u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCF50u | kUnwind; return; } goto L_003FCF50; }
    set32(c.r[3], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FCF80:
    set32(c.r[2], ld32((c.r[3].w[0] + 2420u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 24u);  goto L_003FCFC8; }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 8u);  if (t) { goto L_003FCFC4; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_003FCFA0:
    set32(c.r[4], ld32((c.r[18].w[0] + 2188u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 40u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FCFB8u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 363u, depth + 1u); else { c.pc = 0x00402B38u; return; } if (c.pc != 0x003FCFB8u) [[unlikely]] return; }
L_003FCFB8:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FCFA0u | kUnwind; return; } goto L_003FCFA0; } }
L_003FCFC4:
    set32(c.r[2], 0u + 24u);
    c.budget -= 1;
L_003FCFC8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
    set32(c.r[3], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FD100; } }
    set32(c.r[18], ld32((c.r[3].w[0] + 2212u)));
    c.budget -= 3;
    if (c.r[18].d[0] == 0ull) { ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);  goto L_003FD104; }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003FD0FC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 1;
L_003FD000:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003FD02C; }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003FD028; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 2188u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD028u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 118u, depth + 1u); else { c.pc = 0x003FD130u; return; } if (c.pc != 0x003FD028u) [[unlikely]] return; }
L_003FD028:
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_003FD02C:
    c.budget -= 2;
    if (c.r[18].d[0] == 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  goto L_003FD100; }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 60u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD000u | kUnwind; return; } goto L_003FD000; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
L_003FD048:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_003FD0C0; } }
L_003FD054:
    set32(c.r[7], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[7].w[0] + 476u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FD0D8; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FD094; } }
    set32(c.r[9], ld32((c.r[7].w[0] + 504u)));
    set32(c.r[6], c.r[7].w[0] + 788u);
    set32(c.r[8], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 608u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD08Cu); set32(c.r[7], c.r[7].w[0] + 532u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD08Cu) [[unlikely]] return; }
L_003FD08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
L_003FD094:
    set32(c.r[6], ld32((c.r[7].w[0] + 504u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 152u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0B0u); set32(c.r[6], c.r[6].w[0] - 1u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD0B0u) [[unlikely]] return; }
L_003FD0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
L_003FD0B8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 2;
L_003FD0C0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0CCu); set32(c.r[5], c.r[5].w[0] - 408u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD0CCu) [[unlikely]] return; }
L_003FD0CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FD100; } }
L_003FD0D4:
    set32(c.r[2], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FD0D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[5], c.r[5].w[0] + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0ECu); set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD0ECu) [[unlikely]] return; }
L_003FD0EC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD0FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003FD0FCu) [[unlikely]] return; }
L_003FD0FC:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FD100:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.budget -= 1;
L_003FD104:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003FD130:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 2312u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003FD314; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 2312u)));  goto L_003FD18C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD188u); set32(c.r[6], ld32((c.r[17].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD188u) [[unlikely]] return; }
L_003FD188:
    set32(c.r[3], ld32((c.r[16].w[0] + 2312u)));
    c.budget -= 1;
L_003FD18C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 24u);  if (t) { goto L_003FD268; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] - 1u);  if (t) { goto L_003FD1C8; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_003FD1CC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FD228; } }
L_003FD1C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_003FD1CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FD1E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD1DCu); set32(c.r[4], ld32((c.r[17].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BE(c, 119u, depth + 1u); else { c.pc = 0x003F9700u; return; } if (c.pc != 0x003FD1DCu) [[unlikely]] return; }
L_003FD1DC:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_003FD1E0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FD2D8; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 2;
L_003FD1F0:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD204u); c.f[12] = ld32((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD204u) [[unlikely]] return; }
L_003FD204:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD214u); set32(c.r[5], c.r[20].w[0] - 448u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD214u) [[unlikely]] return; }
L_003FD214:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD1F0u | kUnwind; return; } goto L_003FD1F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 7u);  if (t) { goto L_003FD2DC; } }
L_003FD228:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[2], 0u + 7u);  if (t) { goto L_003FD2DC; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003FD238:
    c.r[6].d[0] = 0ull | 49188ull;
    c.r[6].d[0] = c.r[6].d[0] << 18;
    c.r[6].d[0] = c.r[6].d[0] | 52953ull;
    c.r[6].d[0] = c.r[6].d[0] << 30;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] - 448u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD258u); set32(c.r[16], c.r[16].w[0] - 1u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD258u) [[unlikely]] return; }
L_003FD258:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 7u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD238u | kUnwind; return; } goto L_003FD238; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FD2DC; } }
L_003FD268:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[2].d[0]; set32(c.r[18], ld32((c.r[16].w[0] + 504u)));  if (t) { goto L_003FD27C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[2], c.r[18].w[0] - 1u);
    if (c.r[3].d[0] != 0) c.r[18].d[0] = c.r[2].d[0];
    c.budget -= 3;
L_003FD27C:
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FD294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD290u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 7u, depth + 1u); else { c.pc = 0x003F40F8u; return; } if (c.pc != 0x003FD290u) [[unlikely]] return; }
L_003FD290:
    st32((c.r[17].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_003FD294:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FD2D8; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
L_003FD2A8:
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2BCu); c.f[12] = ld32((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD2BCu) [[unlikely]] return; }
L_003FD2BC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD2CCu); set32(c.r[5], c.r[20].w[0] - 448u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD2CCu) [[unlikely]] return; }
L_003FD2CC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD2A8u | kUnwind; return; } goto L_003FD2A8; }
L_003FD2D8:
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_003FD2DC:
    c.budget -= 2;
    if (c.r[21].d[0] != c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003FD308; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] != c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003FD308; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD300u); set32(c.r[5], c.r[5].w[0] + 840u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD300u) [[unlikely]] return; }
L_003FD300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);  if (t) { goto L_003FD318; } }
L_003FD308:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD314u); set32(c.r[5], c.r[5].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD314u) [[unlikely]] return; }
L_003FD314:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FD318:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003FD338:
    set32(c.r[29], c.r[29].w[0] - 256u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 2312u)));
    st32((c.r[29].w[0] + 68u), 0u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[8], c.r[6].w[0] + 848u);
    ldl(c.r[4], (c.r[8].w[0] + 7u));
    ldr(c.r[4], (c.r[8].w[0]));
    set32(c.r[5], ld32((c.r[8].w[0] + 8u)));
    sdl(c.r[4], (c.r[29].w[0] + 55u));
    sdr(c.r[4], (c.r[29].w[0] + 48u));
    st32((c.r[29].w[0] + 56u), c.r[5].w[0]);
    c.budget -= 30;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.f[20] = c.f[12];  if (t) { goto L_003FD3D0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[21], ld32((c.r[19].w[0] + 20u)));  goto L_003FD3E4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3C4u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 7u, depth + 1u); else { c.pc = 0x003F40F8u; return; } if (c.pc != 0x003FD3C4u) [[unlikely]] return; }
L_003FD3C4:
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], ld32((c.r[19].w[0] + 20u)));  if (t) { goto L_003FD3E4; } }
L_003FD3D0:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3E0u); st32((c.r[29].w[0] + 68u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BD(c, 7u, depth + 1u); else { c.pc = 0x003F40F8u; return; } if (c.pc != 0x003FD3E0u) [[unlikely]] return; }
L_003FD3E0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003FD3E4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD3F4u); set32(c.r[5], c.r[5].w[0] + 864u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD3F4u) [[unlikely]] return; }
L_003FD3F4:
    set32(c.r[3], c.r[22].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2456u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FD420; } }
    st32((c.r[3].w[0] + 2456u), 0u);
    set32(c.r[5], c.r[5].w[0] + 912u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD418u); set32(c.r[6], ld32((c.r[19].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD418u) [[unlikely]] return; }
L_003FD418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 32u)));  if (t) { goto L_003FD438; } }
L_003FD420:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] + 1088u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD434u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD434u) [[unlikely]] return; }
L_003FD434:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_003FD438:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD44Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003FD44Cu) [[unlikely]] return; }
L_003FD44C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD45Cu); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003FD45Cu) [[unlikely]] return; }
L_003FD45C:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[22].w[0] - 22720u);
    set32(c.r[18], c.r[29].w[0] + 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 504u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[30], c.r[29].w[0] + 48u);  if (t) { goto L_003FD4D4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[7], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[8], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 8;
L_003FD4A0:
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[7], c.r[7].w[0] - 4u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[6], c.r[6].w[0] - 4u);
    st32((c.r[5].w[0]), c.f[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[8].d[0]; set32(c.r[5], c.r[5].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD4A0u | kUnwind; return; } goto L_003FD4A0; } }
L_003FD4D4:
    set32(c.r[17], c.r[22].w[0] - 22720u);
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], ld32((c.r[17].w[0] + 504u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_003FD4F4; } }
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 40u), 0u);  if (t) { goto L_003FD52C; } }
L_003FD4F4:
    c.budget -= 2;
    if (c.r[3].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[29].d[0] + 0ull;  goto L_003FD530; }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD508u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x00403508u; return; } if (c.pc != 0x003FD508u) [[unlikely]] return; }
L_003FD508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD514u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 436u, depth + 1u); else { c.pc = 0x00403508u; return; } if (c.pc != 0x003FD514u) [[unlikely]] return; }
L_003FD514:
    set32(c.r[5], ld32((c.r[17].w[0] + 184u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD52Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 17u, depth + 1u); else { c.pc = 0x003F4270u; return; } if (c.pc != 0x003FD52Cu) [[unlikely]] return; }
L_003FD52C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003FD530:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD540u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BE(c, 105u, depth + 1u); else { c.pc = 0x003F9428u; return; } if (c.pc != 0x003FD540u) [[unlikely]] return; }
L_003FD540:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = ld32((c.r[29].w[0]));
    set32(c.r[18], c.r[18].w[0] + 1136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD554u); set32(c.r[22], c.r[22].w[0] - 22720u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD554u) [[unlikely]] return; }
L_003FD554:
    c.f[12] = ld32((c.r[29].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD560u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD560u) [[unlikely]] return; }
L_003FD560:
    c.f[12] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD56Cu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD56Cu) [[unlikely]] return; }
L_003FD56C:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD584u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD584u) [[unlikely]] return; }
L_003FD584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD58Cu); c.f[12] = ld32((c.r[29].w[0] + 16u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD58Cu) [[unlikely]] return; }
L_003FD58C:
    c.f[12] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD598u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD598u) [[unlikely]] return; }
L_003FD598:
    c.f[12] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5A4u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD5A4u) [[unlikely]] return; }
L_003FD5A4:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5BCu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD5BCu) [[unlikely]] return; }
L_003FD5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5C4u); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD5C4u) [[unlikely]] return; }
L_003FD5C4:
    c.f[12] = ld32((c.r[29].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5D0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD5D0u) [[unlikely]] return; }
L_003FD5D0:
    c.f[12] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5DCu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD5DCu) [[unlikely]] return; }
L_003FD5DC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD5F4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD5F4u) [[unlikely]] return; }
L_003FD5F4:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD600u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 372u, depth + 1u); else { c.pc = 0x00402C40u; return; } if (c.pc != 0x003FD600u) [[unlikely]] return; }
L_003FD600:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD610u); set32(c.r[5], c.r[5].w[0] + 1160u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD610u) [[unlikely]] return; }
L_003FD610:
    set32(c.r[5], ld32((c.r[22].w[0] + 2200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD61Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FD61Cu) [[unlikely]] return; }
L_003FD61C:
    set32(c.r[6], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[8].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD638u); c.r[7].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 379u, depth + 1u); else { c.pc = 0x00402CE8u; return; } if (c.pc != 0x003FD638u) [[unlikely]] return; }
L_003FD638:
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);  if (t) { goto L_003FD654; } }
    set32(c.r[5], ld32((c.r[22].w[0] + 2200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD650u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FD650u) [[unlikely]] return; }
L_003FD650:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FD654:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003FD688:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 2376u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull; c.r[19].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003FD6E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD6E0u); set32(c.r[5], c.r[5].w[0] + 1168u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD6E0u) [[unlikely]] return; }
L_003FD6E0:
    set32(c.r[3], c.r[16].w[0] - 7u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(14ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FD85C; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1328u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003FC000u < 16384u) { entry = entries_00BF[(t - 0x003FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003FD708:
    set32(c.r[4], c.r[21].w[0] - 22720u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FD82C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003FD830; }
    set32(c.r[2], ld32((c.r[4].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_003FD830; }
    set32(c.r[2], ld32((c.r[4].w[0] + 2392u)));
    st32((c.r[29].w[0]), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull; st32((c.r[4].w[0] + 2392u), c.r[2].w[0]);  if (t) { goto L_003FD780; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003FD780; } }
L_003FD758:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD768u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 177u, depth + 1u); else { c.pc = 0x003FD880u; return; } if (c.pc != 0x003FD768u) [[unlikely]] return; }
L_003FD768:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003FD780; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD758u | kUnwind; return; } goto L_003FD758; } }
L_003FD780:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] - 22720u);  if (t) { goto L_003FD7BC; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 8u);  if (t) { goto L_003FD7BC; } }
    c.budget -= 1;
L_003FD798:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7ACu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 177u, depth + 1u); else { c.pc = 0x003FD880u; return; } if (c.pc != 0x003FD7ACu) [[unlikely]] return; }
L_003FD7AC:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD798u | kUnwind; return; } goto L_003FD798; } }
    set32(c.r[3], c.r[21].w[0] - 22720u);
    c.budget -= 1;
L_003FD7BC:
    set32(c.r[8], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0] + 2484u)));
    c.budget -= 4;
    if (c.r[8].d[0] != c.r[6].d[0]) { set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));  goto L_003FD7DC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 2372u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[8].d[0]; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003FD860; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 2192u)));
    c.budget -= 1;
L_003FD7DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 2372u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7ECu); set32(c.r[5], c.r[5].w[0] + 1208u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD7ECu) [[unlikely]] return; }
L_003FD7EC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD7FCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003FD7FCu) [[unlikely]] return; }
L_003FD7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003FD860; } }
L_003FD804:
    set32(c.r[2], c.r[21].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FD85C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD820u); set32(c.r[5], c.r[5].w[0] + 1312u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD820u) [[unlikely]] return; }
L_003FD820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003FD860; } }
L_003FD828:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FD82C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003FD830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD838u); set32(c.r[5], c.r[5].w[0] + 1304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD838u) [[unlikely]] return; }
L_003FD838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);  if (t) { goto L_003FD860; } }
L_003FD840:
    set32(c.r[2], c.r[21].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FD85C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD85Cu); set32(c.r[5], c.r[5].w[0] + 1312u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FD85Cu) [[unlikely]] return; }
L_003FD85C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FD860:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003FD880:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 52u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.budget -= 16;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[30], ld32((c.r[6].w[0])));  if (t) { goto L_003FD8D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD8C8u); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 439u, depth + 1u); else { c.pc = 0x004035B8u; return; } if (c.pc != 0x003FD8C8u) [[unlikely]] return; }
L_003FD8C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FDB64; } }
L_003FD8D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FDB64; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[23].w[0] + 12u)));  goto L_003FD908; }
    set32(c.r[2], ld32((c.r[3].w[0] + 2344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);  if (t) { goto L_003FDB68; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 1;
L_003FD908:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  goto L_003FDB64; }
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003FD984; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[2] = c.r[1].w[0];
    set32(c.r[4], 0u + 2u);
    c.budget -= 9;
L_003FD940:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[2].w[0]), c.f[0]);  if (t) { goto L_003FD960; } }
    st32((c.r[2].w[0]), c.f[2]);
    c.budget -= 1;
L_003FD960:
    c.f[0] = ld32((c.r[2].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[2].w[0]), c.f[1]);  goto L_003FD974; }
L_003FD974:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD940u | kUnwind; return; } goto L_003FD940; } }
L_003FD984:
    set32(c.r[4], c.r[5].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[23].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2392u)));
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[23].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_003FDA64; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_003FDB5C; } }
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[22], c.r[2].w[0] + 8u);  if (t) { goto L_003FDB5C; } }
    set32(c.r[2], c.r[30].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[20], c.r[2].w[0] + 2u);
    set32(c.r[19], c.r[2].w[0] + 1u);
    c.budget -= 5;
L_003FD9C8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2392u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_003FDA50; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 3u);  goto L_003FDA44; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9F0u); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD9F0u) [[unlikely]] return; }
L_003FD9F0:
    c.f[12] = ld32((c.r[29].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FD9FCu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FD9FCu) [[unlikely]] return; }
L_003FD9FC:
    c.f[12] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA08u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FDA08u) [[unlikely]] return; }
L_003FDA08:
    set32(c.r[3], ld32((c.r[23].w[0] + 56u)));
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    set32(c.r[5], c.r[3].w[0] + 1384u);
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDA40u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FDA40u) [[unlikely]] return; }
L_003FDA40:
    set32(c.r[20], c.r[20].w[0] + 3u);
    c.budget -= 1;
L_003FDA44:
    set32(c.r[19], c.r[19].w[0] + 3u);
    set32(c.r[21], c.r[21].w[0] + 3u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 3;
L_003FDA50:
    set32(c.r[18], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FD9C8u | kUnwind; return; } goto L_003FD9C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_003FDB5C; } }
L_003FDA64:
    set32(c.r[2], ld32((c.r[23].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 52u)));  if (t) { goto L_003FDB5C; } }
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull; st32((c.r[29].w[0] + 56u), c.r[2].w[0]);  if (t) { goto L_003FDB58; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], c.r[30].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[21], c.r[2].w[0] + 2u);
    set32(c.r[20], c.r[2].w[0] + 1u);
    c.budget -= 8;
L_003FDAA0:
    set32(c.r[18], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[23].d[0]) { set32(c.r[18], ld32((c.r[19].w[0] + 8u)));  goto L_003FDAAC; }
L_003FDAAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2392u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_003FDB44; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[21], c.r[21].w[0] + 3u);  goto L_003FDB38; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAD4u); c.f[12] = ld32((c.r[29].w[0] + 32u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FDAD4u) [[unlikely]] return; }
L_003FDAD4:
    c.f[12] = ld32((c.r[29].w[0] + 36u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAE0u); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FDAE0u) [[unlikely]] return; }
L_003FDAE0:
    c.f[12] = ld32((c.r[29].w[0] + 40u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDAECu); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FDAECu) [[unlikely]] return; }
L_003FDAEC:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], ld32((c.r[23].w[0] + 56u)));
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[10].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 1432u);
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDB34u); st32((c.r[29].w[0] + 16u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FDB34u) [[unlikely]] return; }
L_003FDB34:
    set32(c.r[21], c.r[21].w[0] + 3u);
    c.budget -= 1;
L_003FDB38:
    set32(c.r[20], c.r[20].w[0] + 3u);
    set32(c.r[22], c.r[22].w[0] + 3u);
    set32(c.r[30], c.r[30].w[0] + 1u);
    c.budget -= 3;
L_003FDB44:
    set32(c.r[3], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[19], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[19].d[0] != 0ull; st32((c.r[29].w[0] + 56u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDAA0u | kUnwind; return; } goto L_003FDAA0; } }
L_003FDB58:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    c.budget -= 1;
L_003FDB5C:
    st32((c.r[4].w[0]), c.r[30].w[0]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.budget -= 2;
L_003FDB64:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.budget -= 1;
L_003FDB68:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003FDB90:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[29].w[0] + 36u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    set32(c.r[7], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    set32(c.r[8], c.r[29].w[0] + 20u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[9], c.r[29].w[0] + 24u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    set32(c.r[10], c.r[29].w[0] + 28u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[11], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDBF8u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 201u, depth + 1u); else { c.pc = 0x003FA340u; return; } if (c.pc != 0x003FDBF8u) [[unlikely]] return; }
L_003FDBF8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC10u); set32(c.r[16], c.r[16].w[0] - 408u);  if (depth < kMaxDepth) unit_00BE(c, 286u, depth + 1u); else { c.pc = 0x003FB2D8u; return; } if (c.pc != 0x003FDC10u) [[unlikely]] return; }
L_003FDC10:
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC1Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FDC1Cu) [[unlikely]] return; }
L_003FDC1C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC2Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FDC2Cu) [[unlikely]] return; }
L_003FDC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDC34u); set32(c.r[4], c.r[29].w[0] + 40u);  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FDC34u) [[unlikely]] return; }
L_003FDC34:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[22].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FDD74; } }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[22], ld32((c.r[19].w[0] + 4u)));  goto L_003FDC48; }
L_003FDC48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[5].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2396u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 2392u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 2396u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 2392u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[30].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003FDC80; } }
    c.budget -= 1;
L_003FDC78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[22].d[0]; ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);  if (t) { goto L_003FDD78; } }
L_003FDC80:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 32u)));  if (t) { goto L_003FDCA4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_003FDCB4; } }
L_003FDCA4:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[20], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 4;
L_003FDCB4:
    set32(c.r[21], c.r[30].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 2392u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 52u)));  goto L_003FDCF4; }
    set32(c.r[4], ld32((c.r[21].w[0] + 2192u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[17].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] + 1480u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDCE0u); set32(c.r[7], ld32((c.r[20].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FDCE0u) [[unlikely]] return; }
L_003FDCE0:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDCF0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 104u, depth + 1u); else { c.pc = 0x003ED100u; return; } if (c.pc != 0x003FDCF0u) [[unlikely]] return; }
L_003FDCF0:
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 1;
L_003FDCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[30].w[0] - 22720u);  if (t) { goto L_003FDD60; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[21].w[0] + 2396u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FDD30; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] - 408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD1Cu); st32((c.r[18].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FDD1Cu) [[unlikely]] return; }
L_003FDD1C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD2Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FDD2Cu) [[unlikely]] return; }
L_003FDD2C:
    set32(c.r[3], ld32((c.r[21].w[0] + 2396u)));
    c.budget -= 1;
L_003FDD30:
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FDD5C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], c.r[2].w[0] - 408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD4Cu); st32((c.r[19].w[0] + 16u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FDD4Cu) [[unlikely]] return; }
L_003FDD4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDD5Cu); c.r[4].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FDD5Cu) [[unlikely]] return; }
L_003FDD5C:
    set32(c.r[2], c.r[30].w[0] - 22720u);
    c.budget -= 1;
L_003FDD60:
    set32(c.r[3], ld32((c.r[2].w[0] + 2392u)));
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDC78u | kUnwind; return; } goto L_003FDC78; } }
L_003FDD74:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FDD78:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003FDDA8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDDD4u); c.r[6].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 286u, depth + 1u); else { c.pc = 0x003FB2D8u; return; } if (c.pc != 0x003FDDD4u) [[unlikely]] return; }
L_003FDDD4:
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDDE4u); c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00BA(c, 116u, depth + 1u); else { c.pc = 0x003E93B0u; return; } if (c.pc != 0x003FDDE4u) [[unlikely]] return; }
L_003FDDE4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003FDE80; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003FDE80; } }
    c.r[10].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[10].d[0] = c.r[10].d[0] | 65535ull;
    c.budget -= 3;
L_003FDE08:
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[9], c.r[16].w[0] + 4u);  if (t) { goto L_003FDE50; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { goto L_003FDE50; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_003FDE30:
    set32(c.r[2], ld32((c.r[2].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[8], 0u + 1u);  goto L_003FDE44; }
    set32(c.r[7], 0u + 1u);
    c.budget -= 1;
L_003FDE44:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDE30u | kUnwind; return; } goto L_003FDE30; } }
L_003FDE50:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] & c.r[10].d[0];  if (t) { goto L_003FDE6C; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[2].d[0] = c.r[5].d[0] | c.r[11].d[0];  if (t) { goto L_003FDE68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_003FDE6C; } }
L_003FDE68:
    c.r[2].d[0] = c.r[5].d[0] & c.r[10].d[0];
    c.budget -= 1;
L_003FDE6C:
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = c.r[9].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDE08u | kUnwind; return; } goto L_003FDE08; } }
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_003FDE80:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDE8Cu); set32(c.r[5], c.r[19].w[0] - 408u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FDE8Cu) [[unlikely]] return; }
L_003FDE8C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FDEDC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003FDEDC; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.budget -= 1;
L_003FDEA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003FDED4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDEC0u); set32(c.r[4], ld32((c.r[4].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FDEC0u) [[unlikely]] return; }
L_003FDEC0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDED0u); set32(c.r[5], c.r[19].w[0] - 408u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FDED0u) [[unlikely]] return; }
L_003FDED0:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003FDED4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FDEA8u | kUnwind; return; } goto L_003FDEA8; } }
L_003FDEDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDEE4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FDEE4u) [[unlikely]] return; }
L_003FDEE4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003FDF00:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[29].w[0] + 8u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    set32(c.r[23], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FDF60; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_003FDF6C; } }
L_003FDF60:
    set32(c.r[2], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[17], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_003FDF6C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[29].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[3].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDF94u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003FDF94u) [[unlikely]] return; }
L_003FDF94:
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[20].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 12u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDFACu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003FDFACu) [[unlikely]] return; }
L_003FDFAC:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDFC0u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003FDFC0u) [[unlikely]] return; }
L_003FDFC0:
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = ld32((c.r[20].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[20].w[0]), c.f[1]);  goto L_003FDFD8; }
L_003FDFD8:
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 12u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FDFECu); c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003FDFECu) [[unlikely]] return; }
L_003FDFEC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[16], c.r[3].w[0] - 22720u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[6], c.r[29].w[0] + 20u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003FE024; } }
    c.f[1] = ld32((c.r[17].w[0] + 1548u));
    c.f[0] = ld32((c.r[16].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[29].w[0] + 16u), 0u);  goto L_003FE0B0; }
L_003FE024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE02Cu); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 215u, depth + 1u); else { c.pc = 0x003F7930u; return; } if (c.pc != 0x003FE02Cu) [[unlikely]] return; }
L_003FE02C:
    c.f[1] = ld32((c.r[16].w[0] + 2324u));
    c.f[0] = ld32((c.r[17].w[0] + 1548u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = ld32((c.r[16].w[0] + 2364u));  if (t) { goto L_003FE058; } }
    c.f[0] = ld32((c.r[16].w[0] + 504u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 5;
L_003FE058:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[3] = fp::add(c.f[0], c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[3]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 20u), c.f[2]);  if (t) { goto L_003FE084; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[18].w[0] - 22720u);  if (t) { goto L_003FE0B8; } }
L_003FE084:
    c.f[0] = ld32((c.r[16].w[0] + 1604u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 16u), c.f[0]);  if (t) { goto L_003FE0B4; } }
L_003FE0B0:
    st32((c.r[29].w[0] + 20u), 0u);
    c.budget -= 1;
L_003FE0B4:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003FE0B8:
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003FE0DC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[18].w[0] - 22720u);  goto L_003FE0F8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FE150; } }
L_003FE0DC:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE0F4u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 326u, depth + 1u); else { c.pc = 0x00402708u; return; } if (c.pc != 0x003FE0F4u) [[unlikely]] return; }
L_003FE0F4:
    set32(c.r[3], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003FE0F8:
    set32(c.r[2], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FE150; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] - 22720u);  if (t) { goto L_003FE1A4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003FE1A8; } }
    c.f[0] = ld32((c.r[3].w[0] + 1604u));
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FE1A8; } }
L_003FE150:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[22].w[0] + 8u);
    c.budget -= 6;
L_003FE168:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE168u | kUnwind; return; } goto L_003FE168; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE1A0u); c.r[8].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 326u, depth + 1u); else { c.pc = 0x00402708u; return; } if (c.pc != 0x003FE1A0u) [[unlikely]] return; }
L_003FE1A0:
    set32(c.r[16], c.r[18].w[0] - 22720u);
    c.budget -= 1;
L_003FE1A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003FE1A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE1B0u); set32(c.r[5], ld32((c.r[16].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FE1B0u) [[unlikely]] return; }
L_003FE1B0:
    set32(c.r[5], ld32((c.r[16].w[0] + 2200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE1BCu); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FE1BCu) [[unlikely]] return; }
L_003FE1BC:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003FE1F0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[20], c.r[29].w[0] + 8u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FE250; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[18], ld32((c.r[2].w[0] + 4u)));  if (t) { goto L_003FE25C; } }
L_003FE250:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
L_003FE25C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[16], c.r[29].w[0] + 12u);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    st32((c.r[3].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE284u); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003FE284u) [[unlikely]] return; }
L_003FE284:
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0]), c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 12u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE29Cu); set32(c.r[4], ld32((c.r[18].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003FE29Cu) [[unlikely]] return; }
L_003FE29C:
    st32((c.r[21].w[0]), c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE2B0u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003FE2B0u) [[unlikely]] return; }
L_003FE2B0:
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    c.f[0] = ld32((c.r[20].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[20].w[0]), c.f[1]);  goto L_003FE2C8; }
L_003FE2C8:
    c.f[12] = ld32((c.r[29].w[0] + 12u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE2D8u); set32(c.r[4], ld32((c.r[19].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003FE2D8u) [[unlikely]] return; }
L_003FE2D8:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; st32((c.r[22].w[0]), c.r[2].w[0]);  if (t) { goto L_003FE2F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE2F0u); set32(c.r[5], c.r[5].w[0] + 1640u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FE2F0u) [[unlikely]] return; }
L_003FE2F0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[17].w[0] + 1648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE304u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FE304u) [[unlikely]] return; }
L_003FE304:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE314u); c.f[12] = ld32((c.r[3].w[0] + 4u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FE314u) [[unlikely]] return; }
L_003FE314:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE324u); c.f[12] = ld32((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FE324u) [[unlikely]] return; }
L_003FE324:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE334u); c.f[12] = ld32((c.r[3].w[0] + 4u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FE334u) [[unlikely]] return; }
L_003FE334:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE350u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FE350u) [[unlikely]] return; }
L_003FE350:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] - 22720u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE364u); set32(c.r[5], ld32((c.r[16].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FE364u) [[unlikely]] return; }
L_003FE364:
    set32(c.r[5], ld32((c.r[16].w[0] + 2200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE370u); set32(c.r[4], ld32((c.r[29].w[0])));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FE370u) [[unlikely]] return; }
L_003FE370:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FE3A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE3ECu); c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003FE3ECu) [[unlikely]] return; }
L_003FE3EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[9], c.r[4].w[0] + 848u);
    ldl(c.r[2], (c.r[9].w[0] + 7u));
    ldr(c.r[2], (c.r[9].w[0]));
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    sdl(c.r[2], (c.r[29].w[0] + 23u));
    sdr(c.r[2], (c.r[29].w[0] + 16u));
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[29].w[0] + 36u);  if (t) { goto L_003FE440; } }
    c.f[1] = ld32((c.r[17].w[0] + 1692u));
    c.f[0] = ld32((c.r[16].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[29].w[0] + 32u), 0u);  goto L_003FE4CC; }
L_003FE440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE448u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 215u, depth + 1u); else { c.pc = 0x003F7930u; return; } if (c.pc != 0x003FE448u) [[unlikely]] return; }
L_003FE448:
    c.f[1] = ld32((c.r[16].w[0] + 2324u));
    c.f[0] = ld32((c.r[17].w[0] + 1692u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = ld32((c.r[16].w[0] + 2364u));  if (t) { goto L_003FE474; } }
    c.f[0] = ld32((c.r[16].w[0] + 504u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 5;
L_003FE474:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[3] = fp::add(c.f[0], c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 32u), c.f[3]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 36u), c.f[2]);  if (t) { goto L_003FE4A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE4D0; } }
L_003FE4A0:
    c.f[0] = ld32((c.r[16].w[0] + 1604u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.f[0]);  if (t) { goto L_003FE4D0; } }
L_003FE4CC:
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_003FE4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE4D8u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 177u, depth + 1u); else { c.pc = 0x003E5DF8u; return; } if (c.pc != 0x003FE4D8u) [[unlikely]] return; }
L_003FE4D8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE4E4u); st32((c.r[29].w[0] + 48u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FE4E4u) [[unlikely]] return; }
L_003FE4E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE4ECu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FE4ECu) [[unlikely]] return; }
L_003FE4EC:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[20], c.r[29].w[0] + 44u);
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[21], c.r[29].w[0] + 48u);  if (t) { goto L_003FE55C; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 8u);  if (t) { goto L_003FE55C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[18], c.r[2].w[0] - 20104u);
    c.budget -= 3;
L_003FE518:
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[6], c.r[29].w[0] + 40u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE534u); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003FE534u) [[unlikely]] return; }
L_003FE534:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE544u); c.f[12] = ld32((c.r[29].w[0] + 40u));  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003FE544u) [[unlikely]] return; }
L_003FE544:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE550u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FE550u) [[unlikely]] return; }
L_003FE550:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE518u | kUnwind; return; } goto L_003FE518; } }
L_003FE55C:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_003FE580; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 196u)));  if (t) { goto L_003FE59C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FE5F0; } }
L_003FE580:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 32u));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE594u); c.r[7].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 257u, depth + 1u); else { c.pc = 0x003FE780u; return; } if (c.pc != 0x003FE594u) [[unlikely]] return; }
L_003FE594:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 2;
L_003FE59C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FE5F0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_003FE640; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_003FE640; }
    c.f[0] = ld32((c.r[3].w[0] + 1604u));
    c.f[1] = ld32((c.r[29].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  goto L_003FE640; }
L_003FE5F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[23].w[0] + 8u);
    c.budget -= 6;
L_003FE608:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE608u | kUnwind; return; } goto L_003FE608; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 44u)));
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 36u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE63Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 257u, depth + 1u); else { c.pc = 0x003FE780u; return; } if (c.pc != 0x003FE63Cu) [[unlikely]] return; }
L_003FE63C:
    set32(c.r[2], ld32((c.r[29].w[0] + 44u)));
    c.budget -= 1;
L_003FE640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FE67C; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003FE67C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    c.budget -= 3;
L_003FE660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE668u); set32(c.r[5], ld32((c.r[17].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FE668u) [[unlikely]] return; }
L_003FE668:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE660u | kUnwind; return; } goto L_003FE660; } }
L_003FE67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE684u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FE684u) [[unlikely]] return; }
L_003FE684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE68Cu); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FE68Cu) [[unlikely]] return; }
L_003FE68C:
    set32(c.r[3], c.r[30].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  goto L_003FE6AC; }
    set32(c.r[2], ld32((c.r[3].w[0] + 332u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  goto L_003FE754; }
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_003FE6AC:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));  goto L_003FE6C8; }
    set32(c.r[2], ld32((c.r[3].w[0] + 2344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);  if (t) { goto L_003FE754; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));
    c.budget -= 1;
L_003FE6C8:
    set32(c.r[3], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[19].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003FE750; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[3].w[0] + 8u);  if (t) { goto L_003FE750; } }
L_003FE6E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[19].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 8u)));  goto L_003FE6EC; }
L_003FE6EC:
    set32(c.r[17], c.r[30].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[6].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 2392u)));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[16], ld32((c.r[18].w[0])));  goto L_003FE748; }
    set32(c.r[2], ld32((c.r[17].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FE71C; } }
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE71Cu); c.r[8].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 77u, depth + 1u); else { c.pc = 0x00400870u; return; } if (c.pc != 0x003FE71Cu) [[unlikely]] return; }
L_003FE71C:
    set32(c.r[2], ld32((c.r[17].w[0] + 332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003FE744; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE744u); set32(c.r[5], ld32((c.r[8].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C0(c, 111u, depth + 1u); else { c.pc = 0x00400CE8u; return; } if (c.pc != 0x003FE744u) [[unlikely]] return; }
L_003FE744:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 1;
L_003FE748:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE6E0u | kUnwind; return; } goto L_003FE6E0; } }
L_003FE750:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FE754:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_003FE780:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.f[20] = c.f[12];
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7CCu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FE7CCu) [[unlikely]] return; }
L_003FE7CC:
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 1696u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE7E8u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FE7E8u) [[unlikely]] return; }
L_003FE7E8:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[29].w[0]), c.r[22].w[0]);  goto L_003FE850; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE808u); set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FE808u) [[unlikely]] return; }
L_003FE808:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003FE850; } }
    set32(c.r[18], ld32((c.r[22].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[19], c.r[22].w[0] + 8u);  if (t) { goto L_003FE850; } }
    c.budget -= 1;
L_003FE820:
    c.f[12] = c.f[20] ^ fp::kSign;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE830u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003FE830u) [[unlikely]] return; }
L_003FE830:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE83Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FE83Cu) [[unlikely]] return; }
L_003FE83C:
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE820u | kUnwind; return; } goto L_003FE820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003FE854; } }
L_003FE850:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003FE854:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[29].w[0])));  goto L_003FE91C; }
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 8u);  if (t) { goto L_003FE918; } }
L_003FE868:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    set32(c.r[3], c.r[19].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[29].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003FE8E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[20], c.r[2].w[0] - 22720u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_003FE898:
    set32(c.r[2], ld32((c.r[20].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003FE8B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8ACu); set32(c.r[5], c.r[30].w[0] + 344u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FE8ACu) [[unlikely]] return; }
L_003FE8AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[20].w[0] + 504u)));  if (t) { goto L_003FE8D0; } }
L_003FE8B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8BCu); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FE8BCu) [[unlikely]] return; }
L_003FE8BC:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8CCu); set32(c.r[5], c.r[23].w[0] + 1720u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FE8CCu) [[unlikely]] return; }
L_003FE8CC:
    set32(c.r[2], ld32((c.r[20].w[0] + 504u)));
    c.budget -= 1;
L_003FE8D0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE898u | kUnwind; return; } goto L_003FE898; } }
L_003FE8E0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FE8FC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE8FCu); set32(c.r[5], ld32((c.r[3].w[0] + 2200u)));  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FE8FCu) [[unlikely]] return; }
L_003FE8FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE90Cu); set32(c.r[5], c.r[2].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FE90Cu) [[unlikely]] return; }
L_003FE90C:
    set32(c.r[18], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[19], ld32((c.r[29].w[0] + 12u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE868u | kUnwind; return; } goto L_003FE868; } }
L_003FE918:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003FE91C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FE930; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE92Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FE92Cu) [[unlikely]] return; }
L_003FE92C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FE930:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE940u); set32(c.r[5], c.r[3].w[0] + 1728u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FE940u) [[unlikely]] return; }
L_003FE940:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003FE974; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FE950:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 1728u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE960u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FE960u) [[unlikely]] return; }
L_003FE960:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FE950u | kUnwind; return; } goto L_003FE950; } }
L_003FE974:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], c.r[3].w[0] + 1736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE988u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FE988u) [[unlikely]] return; }
L_003FE988:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE998u); c.f[12] = ld32((c.r[3].w[0] + 4u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FE998u) [[unlikely]] return; }
L_003FE998:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9A8u); c.f[12] = ld32((c.r[3].w[0] + 8u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FE9A8u) [[unlikely]] return; }
L_003FE9A8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FE9C0u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FE9C0u) [[unlikely]] return; }
L_003FE9C0:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003FE9F8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 12u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA3Cu); c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003FEA3Cu) [[unlikely]] return; }
L_003FEA3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 22720u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 124u)));
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[9], c.r[4].w[0] + 848u);
    ldl(c.r[2], (c.r[9].w[0] + 7u));
    ldr(c.r[2], (c.r[9].w[0]));
    set32(c.r[7], ld32((c.r[9].w[0] + 8u)));
    sdl(c.r[2], (c.r[29].w[0] + 23u));
    sdr(c.r[2], (c.r[29].w[0] + 16u));
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[29].w[0] + 36u);  if (t) { goto L_003FEA90; } }
    c.f[1] = ld32((c.r[17].w[0] + 1764u));
    c.f[0] = ld32((c.r[16].w[0] + 2324u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if (!(c.fcr31 & kFpuCondition)) { st32((c.r[29].w[0] + 32u), 0u);  goto L_003FEB1C; }
L_003FEA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEA98u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BD(c, 215u, depth + 1u); else { c.pc = 0x003F7930u; return; } if (c.pc != 0x003FEA98u) [[unlikely]] return; }
L_003FEA98:
    c.f[1] = ld32((c.r[16].w[0] + 2324u));
    c.f[0] = ld32((c.r[17].w[0] + 1764u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = ld32((c.r[16].w[0] + 2364u));  if (t) { goto L_003FEAC4; } }
    c.f[0] = ld32((c.r[16].w[0] + 504u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::sqrt(c.f[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 5;
L_003FEAC4:
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[3] = fp::add(c.f[0], c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 180u)));
    c.f[2] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 32u), c.f[3]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0] + 36u), c.f[2]);  if (t) { goto L_003FEAF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 336u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FEB20; } }
L_003FEAF0:
    c.f[0] = ld32((c.r[16].w[0] + 1604u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[3], c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 32u), c.f[0]);  if (t) { goto L_003FEB20; } }
L_003FEB1C:
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 1;
L_003FEB20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB28u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B9(c, 177u, depth + 1u); else { c.pc = 0x003E5DF8u; return; } if (c.pc != 0x003FEB28u) [[unlikely]] return; }
L_003FEB28:
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], c.r[22].w[0] - 22720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB38u); set32(c.r[4], ld32((c.r[3].w[0] + 2208u)));  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FEB38u) [[unlikely]] return; }
L_003FEB38:
    set32(c.r[3], ld32((c.r[29].w[0] + 44u)));
    set32(c.r[17], c.r[29].w[0] + 40u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[29].w[0] + 44u);  if (t) { goto L_003FEB74; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 8u);  if (t) { goto L_003FEB74; } }
L_003FEB58:
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEB64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FEB64u) [[unlikely]] return; }
L_003FEB64:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEB58u | kUnwind; return; } goto L_003FEB58; } }
L_003FEB74:
    set32(c.r[3], c.r[22].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 40u)));  if (t) { goto L_003FEB98; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 196u)));  if (t) { goto L_003FEBB4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FEC04; } }
L_003FEB98:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 32u));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEBACu); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 257u, depth + 1u); else { c.pc = 0x003FE780u; return; } if (c.pc != 0x003FEBACu) [[unlikely]] return; }
L_003FEBAC:
    set32(c.r[3], c.r[22].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 196u)));
    c.budget -= 2;
L_003FEBB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FEC04; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003FEC4C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 212u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.f[1] = ld32((c.r[29].w[0] + 32u));  if (t) { goto L_003FEC4C; } }
    c.f[0] = ld32((c.r[3].w[0] + 1604u));
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.f[2] = ld32((c.r[29].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003FEC4C; } }
L_003FEC04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[18].w[0] + 8u);
    c.budget -= 5;
L_003FEC18:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[2], c.r[2].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEC18u | kUnwind; return; } goto L_003FEC18; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 40u)));
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[29].w[0] + 36u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC4Cu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 257u, depth + 1u); else { c.pc = 0x003FE780u; return; } if (c.pc != 0x003FEC4Cu) [[unlikely]] return; }
L_003FEC4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC54u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FEC54u) [[unlikely]] return; }
L_003FEC54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEC5Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FEC5Cu) [[unlikely]] return; }
L_003FEC5C:
    set32(c.r[3], c.r[22].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  goto L_003FEC7C; }
    set32(c.r[2], ld32((c.r[3].w[0] + 332u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  goto L_003FED48; }
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_003FEC7C:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));  goto L_003FEC98; }
    set32(c.r[2], ld32((c.r[3].w[0] + 2344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FED48; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 2392u)));
    c.budget -= 1;
L_003FEC98:
    set32(c.r[6], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; st32((c.r[19].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_003FED44; } }
    set32(c.r[16], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[6].w[0] + 8u);  if (t) { goto L_003FED44; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_003FECB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 2392u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[17].w[0] - 8u);  if (t) { goto L_003FED38; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 32u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 504u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FECE4u); set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));  if (depth < kMaxDepth) unit_00BB(c, 119u, depth + 1u); else { c.pc = 0x003ED450u; return; } if (c.pc != 0x003FECE4u) [[unlikely]] return; }
L_003FECE4:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 44u), c.r[7].w[0]);  if (t) { goto L_003FED08; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED08u); c.r[8].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 77u, depth + 1u); else { c.pc = 0x00400870u; return; } if (c.pc != 0x003FED08u) [[unlikely]] return; }
L_003FED08:
    set32(c.r[2], ld32((c.r[18].w[0] + 332u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 44u)));  if (t) { goto L_003FED30; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED30u); set32(c.r[5], ld32((c.r[8].w[0] + 8u)));  if (depth < kMaxDepth) unit_00C0(c, 111u, depth + 1u); else { c.pc = 0x00400CE8u; return; } if (c.pc != 0x003FED30u) [[unlikely]] return; }
L_003FED30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FED38u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003FED38u) [[unlikely]] return; }
L_003FED38:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FECB8u | kUnwind; return; } goto L_003FECB8; } }
L_003FED44:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FED48:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FED70:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[23], 0u + 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.budget -= 15;
    { const bool t = c.r[6].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003FEDB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEDB8u); set32(c.r[5], c.r[5].w[0] + 1768u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FEDB8u) [[unlikely]] return; }
L_003FEDB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEDC4u); c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00B9(c, 177u, depth + 1u); else { c.pc = 0x003E5DF8u; return; } if (c.pc != 0x003FEDC4u) [[unlikely]] return; }
L_003FEDC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEDD0u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FEDD0u) [[unlikely]] return; }
L_003FEDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEDD8u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 263u, depth + 1u); else { c.pc = 0x003EEDC0u; return; } if (c.pc != 0x003FEDD8u) [[unlikely]] return; }
L_003FEDD8:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[21], c.r[29].w[0] + 4u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[22], c.r[29].w[0] + 8u);  if (t) { goto L_003FEE44; } }
    set32(c.r[16], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] + 8u);  if (t) { goto L_003FEE44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[18], c.r[2].w[0] - 20104u);
    c.budget -= 2;
L_003FEE00:
    set32(c.r[2], ld32((c.r[18].w[0] + 204u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE1Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003FEE1Cu) [[unlikely]] return; }
L_003FEE1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE2Cu); c.f[12] = ld32((c.r[29].w[0]));  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003FEE2Cu) [[unlikely]] return; }
L_003FEE2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE38u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003FEE38u) [[unlikely]] return; }
L_003FEE38:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEE00u | kUnwind; return; } goto L_003FEE00; } }
L_003FEE44:
    set32(c.r[5], c.r[30].w[0] + 1776u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE50u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FEE50u) [[unlikely]] return; }
L_003FEE50:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FEF0C; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003FEEDC; } }
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003FEE70:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003FEE80; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[23].d[0] = 0ull + 0ull;  if (t) { goto L_003FEE88; } }
L_003FEE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE88u); set32(c.r[5], c.r[30].w[0] + 1768u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FEE88u) [[unlikely]] return; }
L_003FEE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE90u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FEE90u) [[unlikely]] return; }
L_003FEE90:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEE9Cu); c.r[17].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FEE9Cu) [[unlikely]] return; }
L_003FEE9C:
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEEA8u); c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FEEA8u) [[unlikely]] return; }
L_003FEEA8:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEEC0u); set32(c.r[5], c.r[19].w[0] + 1792u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FEEC0u) [[unlikely]] return; }
L_003FEEC0:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEE70u | kUnwind; return; } goto L_003FEE70; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FEF0C; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_003FEEDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003FEF0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    c.budget -= 3;
L_003FEEF0:
    set32(c.r[5], ld32((c.r[17].w[0] + 2200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEEFCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FEEFCu) [[unlikely]] return; }
L_003FEEFC:
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEEF0u | kUnwind; return; } goto L_003FEEF0; } }
L_003FEF0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF14u); c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FEF14u) [[unlikely]] return; }
L_003FEF14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF1Cu); c.r[4].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 143u, depth + 1u); else { c.pc = 0x003ED780u; return; } if (c.pc != 0x003FEF1Cu) [[unlikely]] return; }
L_003FEF1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FEF2Cu); set32(c.r[5], c.r[2].w[0] + 1824u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FEF2Cu) [[unlikely]] return; }
L_003FEF2C:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FEF60:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 2392u)));
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[21].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 204u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; c.r[22].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FF214; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[21].w[0] + 36u)));  goto L_003FEFD0; }
    set32(c.r[2], ld32((c.r[5].w[0] + 2344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FF218; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 1;
L_003FEFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FF218; } }
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_003FF214; } }
L_003FEFE8:
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[8].d[0] == c.r[21].d[0]) { set32(c.r[8], ld32((c.r[16].w[0] + 8u)));  goto L_003FEFF4; }
L_003FEFF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[7], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 2392u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st32((c.r[29].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_003FF200; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003FF030; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003FF204; } }
L_003FF030:
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003FF064; } }
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF05Cu); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00C0(c, 77u, depth + 1u); else { c.pc = 0x00400870u; return; } if (c.pc != 0x003FF05Cu) [[unlikely]] return; }
L_003FF05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003FF204; } }
L_003FF064:
    set32(c.r[2], ld32((c.r[7].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FF088; } }
    set32(c.r[6], ld32((c.r[21].w[0] + 56u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF080u); set32(c.r[5], c.r[3].w[0] + 1832u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF080u) [[unlikely]] return; }
L_003FF080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003FF0C0; } }
L_003FF088:
    set32(c.r[2], ld32((c.r[7].w[0] + 2372u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[3].w[0] + 1856u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    st32((c.r[7].w[0] + 2372u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[8], ld32((c.r[8].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[21].w[0] + 56u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF0BCu); c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF0BCu) [[unlikely]] return; }
L_003FF0BC:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003FF0C0:
    set32(c.r[7], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull; st32((c.r[29].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_003FF1A8; } }
    set32(c.r[16], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[20], c.r[7].w[0] + 8u);  if (t) { goto L_003FF1A8; } }
    c.budget -= 1;
L_003FF0E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 20104u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[20].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF10Cu); set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003FF10Cu) [[unlikely]] return; }
L_003FF10C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF11Cu); c.f[12] = ld32((c.r[29].w[0]));  if (depth < kMaxDepth) unit_00BD(c, 79u, depth + 1u); else { c.pc = 0x003F5700u; return; } if (c.pc != 0x003FF11Cu) [[unlikely]] return; }
L_003FF11C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 504u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FF178; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[2].w[0] - 22720u);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_003FF140:
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 504u)));  goto L_003FF168; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF154u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FF154u) [[unlikely]] return; }
L_003FF154:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF164u); set32(c.r[5], c.r[23].w[0] + 1720u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF164u) [[unlikely]] return; }
L_003FF164:
    set32(c.r[2], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 1;
L_003FF168:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF140u | kUnwind; return; } goto L_003FF140; } }
L_003FF178:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF188u); set32(c.r[5], c.r[3].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF188u) [[unlikely]] return; }
L_003FF188:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[5], ld32((c.r[4].w[0] + 2200u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF19Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003FF19Cu) [[unlikely]] return; }
L_003FF19C:
    set32(c.r[16], ld32((c.r[20].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[20].d[0] = c.r[30].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF0E0u | kUnwind; return; } goto L_003FF0E0; } }
L_003FF1A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[3].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003FF200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1C4u); c.f[12] = ld32((c.r[4].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FF1C4u) [[unlikely]] return; }
L_003FF1C4:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1D4u); c.f[12] = ld32((c.r[3].w[0] + 4u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FF1D4u) [[unlikely]] return; }
L_003FF1D4:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF1E4u); c.f[12] = ld32((c.r[4].w[0] + 8u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FF1E4u) [[unlikely]] return; }
L_003FF1E4:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF200u); set32(c.r[5], c.r[2].w[0] + 1880u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF200u) [[unlikely]] return; }
L_003FF200:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 1;
L_003FF204:
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[29].w[0] + 8u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FEFE8u | kUnwind; return; } goto L_003FEFE8; } }
L_003FF214:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FF218:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FF248:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[5], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 2392u)));
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 204u)));
    c.budget -= 21;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003FF4E4; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 4u)));  goto L_003FF2C0; }
    set32(c.r[2], ld32((c.r[5].w[0] + 2344u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FF4E8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 1;
L_003FF2C0:
    set32(c.r[6], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FF4E8; } }
    set32(c.r[16], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[23], c.r[6].w[0] + 8u);  if (t) { goto L_003FF4E4; } }
L_003FF2D8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2392u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[30], c.r[23].w[0] + 4u);  if (t) { goto L_003FF4D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 348u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);  if (t) { goto L_003FF30C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], ld32((c.r[23].w[0])));  goto L_003FF4DC; }
L_003FF30C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[6], c.r[23].w[0] - 8u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 2));
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF338u); set32(c.r[5], ld32((c.r[2].w[0] + 504u)));  if (depth < kMaxDepth) unit_00BB(c, 119u, depth + 1u); else { c.pc = 0x003ED450u; return; } if (c.pc != 0x003FF338u) [[unlikely]] return; }
L_003FF338:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003FF370; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[29].w[0] + 8u)));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF368u); set32(c.r[30], c.r[23].w[0] + 4u);  if (depth < kMaxDepth) unit_00C0(c, 77u, depth + 1u); else { c.pc = 0x00400870u; return; } if (c.pc != 0x003FF368u) [[unlikely]] return; }
L_003FF368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003FF4D0; } }
L_003FF370:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003FF3A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF39Cu); set32(c.r[5], c.r[3].w[0] + 1912u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF39Cu) [[unlikely]] return; }
L_003FF39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_003FF3E0; } }
L_003FF3A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] - 22720u);
    set32(c.r[5], c.r[3].w[0] + 1952u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2372u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 2372u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF3DCu); set32(c.r[6], ld32((c.r[2].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF3DCu) [[unlikely]] return; }
L_003FF3DC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_003FF3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[30], c.r[23].w[0] + 4u);  if (t) { goto L_003FF478; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[2].w[0] + 8u);  if (t) { goto L_003FF478; } }
    c.budget -= 1;
L_003FF3F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 504u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[21], c.r[18].w[0] + 4u);  if (t) { goto L_003FF45C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], c.r[4].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 4;
L_003FF420:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { goto L_003FF448; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF438u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FF438u) [[unlikely]] return; }
L_003FF438:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF448u); set32(c.r[5], c.r[22].w[0] + 1720u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF448u) [[unlikely]] return; }
L_003FF448:
    set32(c.r[2], ld32((c.r[19].w[0] + 504u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 56u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF420u | kUnwind; return; } goto L_003FF420; }
L_003FF45C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF46Cu); set32(c.r[5], c.r[2].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF46Cu) [[unlikely]] return; }
L_003FF46C:
    set32(c.r[17], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[18].d[0] = c.r[21].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF3F8u | kUnwind; return; } goto L_003FF3F8; } }
L_003FF478:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], c.r[3].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_003FF4D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF494u); c.f[12] = ld32((c.r[4].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FF494u) [[unlikely]] return; }
L_003FF494:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4A4u); c.f[12] = ld32((c.r[3].w[0] + 4u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FF4A4u) [[unlikely]] return; }
L_003FF4A4:
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4B4u); c.f[12] = ld32((c.r[4].w[0] + 8u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FF4B4u) [[unlikely]] return; }
L_003FF4B4:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4D0u); set32(c.r[5], c.r[2].w[0] + 1880u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF4D0u) [[unlikely]] return; }
L_003FF4D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF4D8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003FF4D8u) [[unlikely]] return; }
L_003FF4D8:
    set32(c.r[16], ld32((c.r[23].w[0])));
    c.budget -= 1;
L_003FF4DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[23].d[0] = c.r[30].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF2D8u | kUnwind; return; } goto L_003FF2D8; } }
L_003FF4E4:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FF4E8:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FF518:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0]), c.r[6].w[0]);  if (t) { goto L_003FF570; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20376u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FF68C; } }
L_003FF570:
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FF68C; } }
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[19], c.r[2].w[0] + 8u);  if (t) { goto L_003FF68C; } }
L_003FF588:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != c.r[2].d[0]; c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FF5AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22720u);
    set32(c.r[5], c.r[21].w[0] + 1728u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5ACu); set32(c.r[6], ld32((c.r[2].w[0] + 504u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF5ACu) [[unlikely]] return; }
L_003FF5AC:
    set32(c.r[6], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5BCu); set32(c.r[5], c.r[21].w[0] + 1728u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF5BCu) [[unlikely]] return; }
L_003FF5BC:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0]; set32(c.r[3], ld32((c.r[17].w[0])));  if (t) { goto L_003FF60C; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 4u);  if (t) { goto L_003FF670; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 8u);  if (t) { goto L_003FF670; } }
L_003FF5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5E8u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FF5E8u) [[unlikely]] return; }
L_003FF5E8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF5F8u); set32(c.r[5], c.r[21].w[0] + 1728u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF5F8u) [[unlikely]] return; }
L_003FF5F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF5E0u | kUnwind; return; } goto L_003FF5E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[23].w[0] - 440u);  if (t) { goto L_003FF674; } }
L_003FF60C:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[20], c.r[19].w[0] + 4u);  if (t) { goto L_003FF670; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 8u);  if (t) { goto L_003FF670; } }
    c.budget -= 1;
L_003FF628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF630u); set32(c.r[4], ld32((c.r[2].w[0] + 8u)));  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FF630u) [[unlikely]] return; }
L_003FF630:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF640u); set32(c.r[5], c.r[21].w[0] + 1728u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF640u) [[unlikely]] return; }
L_003FF640:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.budget -= 4;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[2], c.r[2].w[0] + 8u);  goto L_003FF658; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 12u);  if (t) { goto L_003FF664; } }
L_003FF658:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { goto L_003FF664; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_003FF664:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF628u | kUnwind; return; } goto L_003FF628; } }
L_003FF670:
    set32(c.r[5], c.r[23].w[0] - 440u);
    c.budget -= 1;
L_003FF674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF67Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF67Cu) [[unlikely]] return; }
L_003FF67C:
    set32(c.r[17], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[19].d[0] = c.r[20].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FF588u | kUnwind; return; } goto L_003FF588; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003FF68C:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FF6B8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.budget -= 15;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003FF708; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF700u); set32(c.r[5], c.r[5].w[0] + 1984u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF700u) [[unlikely]] return; }
L_003FF700:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FFEC4; } }
L_003FF708:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FF728; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF720u); set32(c.r[5], c.r[5].w[0] + 2000u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF720u) [[unlikely]] return; }
L_003FF720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FFEC4; } }
L_003FF728:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003FF748; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF740u); set32(c.r[5], c.r[5].w[0] + 2024u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF740u) [[unlikely]] return; }
L_003FF740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);  if (t) { goto L_003FFEC4; } }
L_003FF748:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2040u);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 364u)));
    st32((c.r[2].w[0] + 364u), 0u);
    st32((c.r[2].w[0] + 2480u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF770u); set32(c.r[6], ld32((c.r[19].w[0] + 56u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF770u) [[unlikely]] return; }
L_003FF770:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF780u); set32(c.r[5], c.r[5].w[0] + 2048u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF780u) [[unlikely]] return; }
L_003FF780:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF7A4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF79Cu); set32(c.r[5], c.r[5].w[0] + 2064u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF79Cu) [[unlikely]] return; }
L_003FF79C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_003FF7B4; } }
L_003FF7A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7B0u); set32(c.r[5], c.r[5].w[0] + 2072u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF7B0u) [[unlikely]] return; }
L_003FF7B0:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_003FF7B4:
    c.r[2].d[0] = c.r[2].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF7CC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7CCu); set32(c.r[5], c.r[5].w[0] + 2080u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF7CCu) [[unlikely]] return; }
L_003FF7CC:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF7E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF7E8u); set32(c.r[5], c.r[5].w[0] + 2096u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF7E8u) [[unlikely]] return; }
L_003FF7E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF808; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF808u); set32(c.r[5], c.r[5].w[0] + 2112u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF808u) [[unlikely]] return; }
L_003FF808:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF824; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF824u); set32(c.r[5], c.r[5].w[0] + 2128u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF824u) [[unlikely]] return; }
L_003FF824:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF840; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF840u); set32(c.r[5], c.r[5].w[0] + 2144u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF840u) [[unlikely]] return; }
L_003FF840:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x08000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF860; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF860u); set32(c.r[5], c.r[5].w[0] + 2152u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF860u) [[unlikely]] return; }
L_003FF860:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  goto L_003FF888; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF884u); set32(c.r[5], c.r[5].w[0] + 2160u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF884u) [[unlikely]] return; }
L_003FF884:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_003FF888:
    c.r[2].d[0] = c.r[2].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF8A0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8A0u); set32(c.r[5], c.r[5].w[0] + 2168u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF8A0u) [[unlikely]] return; }
L_003FF8A0:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF8C0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8C0u); set32(c.r[5], c.r[5].w[0] + 2176u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF8C0u) [[unlikely]] return; }
L_003FF8C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF8E0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF8E0u); set32(c.r[5], c.r[5].w[0] + 2192u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF8E0u) [[unlikely]] return; }
L_003FF8E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF900; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF900u); set32(c.r[5], c.r[5].w[0] + 2208u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF900u) [[unlikely]] return; }
L_003FF900:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF920; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF920u); set32(c.r[5], c.r[5].w[0] + 2224u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF920u) [[unlikely]] return; }
L_003FF920:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00C00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  goto L_003FF94C; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF948u); set32(c.r[5], c.r[5].w[0] + 2240u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF948u) [[unlikely]] return; }
L_003FF948:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_003FF94C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF968; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF968u); set32(c.r[5], c.r[5].w[0] + 2256u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF968u) [[unlikely]] return; }
L_003FF968:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF988; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF988u); set32(c.r[5], c.r[5].w[0] + 2272u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF988u) [[unlikely]] return; }
L_003FF988:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF9A8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9A8u); set32(c.r[5], c.r[5].w[0] + 2288u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF9A8u) [[unlikely]] return; }
L_003FF9A8:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF9C8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9C8u); set32(c.r[5], c.r[5].w[0] + 2304u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF9C8u) [[unlikely]] return; }
L_003FF9C8:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FF9E8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FF9E8u); set32(c.r[5], c.r[5].w[0] + 2320u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FF9E8u) [[unlikely]] return; }
L_003FF9E8:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    if (c.r[2].sd[0] >= 0) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003FFA08; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA04u); set32(c.r[5], c.r[5].w[0] + 2336u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFA04u) [[unlikely]] return; }
L_003FFA04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FFA08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA14u); set32(c.r[5], c.r[5].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFA14u) [[unlikely]] return; }
L_003FFA14:
    set32(c.r[5], ld32((c.r[19].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFA4C; } }
    c.f[12] = ld32((c.r[19].w[0] + 16u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA34u); set32(c.r[16], c.r[16].w[0] + 2352u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FFA34u) [[unlikely]] return; }
L_003FFA34:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFA44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFA44u) [[unlikely]] return; }
L_003FFA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_003FFAEC; } }
L_003FFA4C:
    set32(c.r[3], c.r[23].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2344u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[19].w[0] + 16u)));  if (t) { goto L_003FFA7C; } }
    c.r[2].d[0] = c.r[5].d[0] & 2048ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[19].w[0] + 60u)));  goto L_003FFA80; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFA7C; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2376u);  if (t) { goto L_003FFAC0; } }
L_003FFA7C:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_003FFA80:
    c.r[2].d[0] = c.r[3].d[0] & 1024ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[3].d[0] & 512ull;  goto L_003FFAA8; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  goto L_003FFAEC; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[19].d[0]; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFAE8; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[5].w[0] + 2400u);  if (t) { goto L_003FFAC0; } }
L_003FFAA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003FFAD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFAE8; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] + 2448u);
    c.budget -= 2;
L_003FFAC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFAC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFAC8u) [[unlikely]] return; }
L_003FFAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[19].w[0] + 60u)));  if (t) { goto L_003FFAEC; } }
L_003FFAD0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFAE8; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 56u)));
    set32(c.r[5], c.r[5].w[0] + 2496u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFAE8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFAE8u) [[unlikely]] return; }
L_003FFAE8:
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 1;
L_003FFAEC:
    c.r[6].d[0] = c.r[2].d[0] & 511ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFB04; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB04u); set32(c.r[5], c.r[5].w[0] + 2528u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFB04u) [[unlikely]] return; }
L_003FFB04:
    set32(c.r[17], c.r[23].w[0] - 22720u);
    set32(c.r[7], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 504u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 2552u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB24u); set32(c.r[8], 0u - 1u);  if (depth < kMaxDepth) unit_00C0(c, 363u, depth + 1u); else { c.pc = 0x00402B38u; return; } if (c.pc != 0x003FFB24u) [[unlikely]] return; }
L_003FFB24:
    c.f[12] = ld32((c.r[19].w[0] + 8u));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB34u); set32(c.r[16], c.r[16].w[0] + 2568u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FFB34u) [[unlikely]] return; }
L_003FFB34:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB44u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFB44u) [[unlikely]] return; }
L_003FFB44:
    set32(c.r[3], ld32((c.r[17].w[0] + 2312u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFB60; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003FFB78; } }
L_003FFB60:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 2592u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB74u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BF(c, 118u, depth + 1u); else { c.pc = 0x003FD130u; return; } if (c.pc != 0x003FFB74u) [[unlikely]] return; }
L_003FFB74:
    set32(c.r[2], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003FFB78:
    c.f[12] = ld32((c.r[19].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 1600u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFBA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFB98u); set32(c.r[16], c.r[16].w[0] + 2608u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FFB98u) [[unlikely]] return; }
L_003FFB98:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFBA8u) [[unlikely]] return; }
L_003FFBA8:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFCC4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 48u)));  goto L_003FFCC8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBC8u);  if (depth < kMaxDepth) unit_00BB(c, 245u, depth + 1u); else { c.pc = 0x003EEB30u; return; } if (c.pc != 0x003FFBC8u) [[unlikely]] return; }
L_003FFBC8:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBD4u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FFBD4u) [[unlikely]] return; }
L_003FFBD4:
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFC44; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 2640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFBF0u); c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FFBF0u) [[unlikely]] return; }
L_003FFBF0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFC00u) [[unlikely]] return; }
L_003FFC00:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.f[12] = ld32((c.r[19].w[0]));  goto L_003FFCAC; }
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003FFCA8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003FFC20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC2Cu); set32(c.r[5], c.r[17].w[0] + 2680u);  if (depth < kMaxDepth) unit_00C0(c, 360u, depth + 1u); else { c.pc = 0x00402AD8u; return; } if (c.pc != 0x003FFC2Cu) [[unlikely]] return; }
L_003FFC2C:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFC20u | kUnwind; return; } goto L_003FFC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[12] = ld32((c.r[19].w[0]));  if (t) { goto L_003FFCAC; } }
L_003FFC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC4Cu); set32(c.r[4], ld32((c.r[19].w[0] + 44u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FFC4Cu) [[unlikely]] return; }
L_003FFC4C:
    c.r[2].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFC70; } }
    set32(c.r[6], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[5], c.r[5].w[0] + 2688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 141u, depth + 1u); else { c.pc = 0x003F9A10u; return; } if (c.pc != 0x003FFC68u) [[unlikely]] return; }
L_003FFC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFCA8; } }
L_003FFC70:
    set32(c.r[4], ld32((c.r[19].w[0] + 44u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC80u); set32(c.r[16], c.r[16].w[0] + 2712u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FFC80u) [[unlikely]] return; }
L_003FFC80:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFC94u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFC94u) [[unlikely]] return; }
L_003FFC94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 360u, depth + 1u); else { c.pc = 0x00402AD8u; return; } if (c.pc != 0x003FFCA8u) [[unlikely]] return; }
L_003FFCA8:
    c.f[12] = ld32((c.r[19].w[0]));
    c.budget -= 1;
L_003FFCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCB4u); set32(c.r[16], c.r[21].w[0] + 2760u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FFCB4u) [[unlikely]] return; }
L_003FFCB4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCC4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFCC4u) [[unlikely]] return; }
L_003FFCC4:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 1;
L_003FFCC8:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 32u)));  goto L_003FFE10; }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], ld32((c.r[19].w[0] + 32u)));  goto L_003FFE10; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCE4u);  if (depth < kMaxDepth) unit_00BB(c, 245u, depth + 1u); else { c.pc = 0x003EEB30u; return; } if (c.pc != 0x003FFCE4u) [[unlikely]] return; }
L_003FFCE4:
    set32(c.r[4], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFCF0u); c.r[20].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FFCF0u) [[unlikely]] return; }
L_003FFCF0:
    c.r[2].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFD64; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 2792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD0Cu); c.r[22].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003FFD0Cu) [[unlikely]] return; }
L_003FFD0C:
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFD20u) [[unlikely]] return; }
L_003FFD20:
    set32(c.r[2], ld32((c.r[19].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[22].w[0] - 20104u);  goto L_003FFDD4; }
    set32(c.r[6], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003FFDD0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 2;
L_003FFD40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD4Cu); set32(c.r[5], c.r[17].w[0] + 2680u);  if (depth < kMaxDepth) unit_00C0(c, 360u, depth + 1u); else { c.pc = 0x00402AD8u; return; } if (c.pc != 0x003FFD4Cu) [[unlikely]] return; }
L_003FFD4C:
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFD40u | kUnwind; return; } goto L_003FFD40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[22].w[0] - 20104u);  if (t) { goto L_003FFDD4; } }
L_003FFD64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD6Cu); set32(c.r[4], ld32((c.r[19].w[0] + 48u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FFD6Cu) [[unlikely]] return; }
L_003FFD6C:
    c.r[2].d[0] = c.r[2].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[19].w[0] + 48u)));  goto L_003FFD98; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 48u)));
    set32(c.r[5], c.r[5].w[0] + 2832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFD8Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BE(c, 141u, depth + 1u); else { c.pc = 0x003F9A10u; return; } if (c.pc != 0x003FFD8Cu) [[unlikely]] return; }
L_003FFD8C:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFDD0; } }
L_003FFD98:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDA4u); set32(c.r[16], c.r[16].w[0] + 2856u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003FFDA4u) [[unlikely]] return; }
L_003FFDA4:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDBCu); c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFDBCu) [[unlikely]] return; }
L_003FFDBC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2744u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDD0u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 360u, depth + 1u); else { c.pc = 0x00402AD8u; return; } if (c.pc != 0x003FFDD0u) [[unlikely]] return; }
L_003FFDD0:
    set32(c.r[2], c.r[22].w[0] - 20104u);
    c.budget -= 1;
L_003FFDD4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 204u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[21].w[0] + 2888u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDF4u); st32((c.r[2].w[0] + 204u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_00BC(c, 133u, depth + 1u); else { c.pc = 0x003F2A90u; return; } if (c.pc != 0x003FFDF4u) [[unlikely]] return; }
L_003FFDF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFDFCu); c.f[12] = ld32((c.r[29].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003FFDFCu) [[unlikely]] return; }
L_003FFDFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE0Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFE0Cu) [[unlikely]] return; }
L_003FFE0C:
    set32(c.r[6], ld32((c.r[19].w[0] + 32u)));
    c.budget -= 1;
L_003FFE10:
    set32(c.r[5], c.r[30].w[0] + 2920u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C0(c, 411u, depth + 1u); else { c.pc = 0x00403228u; return; } if (c.pc != 0x003FFE1Cu) [[unlikely]] return; }
L_003FFE1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE2Cu); set32(c.r[5], c.r[2].w[0] + 2936u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFE2Cu) [[unlikely]] return; }
L_003FFE2C:
    set32(c.r[5], ld32((c.r[19].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFEA8; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[5].w[0] + 8u);  if (t) { goto L_003FFEA4; } }
    set32(c.r[22], 0u + 2u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[20], 0u + 1u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 5;
L_003FFE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[22].d[0]; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003FFE70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE68u); set32(c.r[5], c.r[21].w[0] + 2968u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFE68u) [[unlikely]] return; }
L_003FFE68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_003FFE9C; } }
L_003FFE70:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[20].d[0]) { set32(c.r[6], ld32((c.r[2].w[0] + 56u)));  goto L_003FFE8C; }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE84u); set32(c.r[5], c.r[19].w[0] + 2976u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFE84u) [[unlikely]] return; }
L_003FFE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_003FFE9C; } }
L_003FFE8C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFE98u); set32(c.r[5], c.r[17].w[0] + 2984u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFE98u) [[unlikely]] return; }
L_003FFE98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003FFE9C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFE58u | kUnwind; return; } goto L_003FFE58; } }
L_003FFEA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FFEA8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFEB4u); set32(c.r[5], c.r[2].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFEB4u) [[unlikely]] return; }
L_003FFEB4:
    set32(c.r[3], c.r[23].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2480u)));
    st32((c.r[3].w[0] + 364u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.budget -= 4;
L_003FFEC4:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_003FFEF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == 0ull; c.r[30].d[0] = 0ull + 0ull;  if (t) { goto L_003FFFB4; } }
    set32(c.r[2], c.r[18].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 2344u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003FFFB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] + 2992u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF58u); c.r[22].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFF58u) [[unlikely]] return; }
L_003FFF58:
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_003FFFA4; } }
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + 8u);  if (t) { goto L_003FFFA4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    c.budget -= 4;
L_003FFF80:
    set32(c.r[6], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 3032u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFF94u); c.r[6].d[0] = c.r[6].d[0] & c.r[18].d[0];  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFF94u) [[unlikely]] return; }
L_003FFF94:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFF80u | kUnwind; return; } goto L_003FFF80; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 1;
L_003FFFA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFACu); set32(c.r[5], c.r[22].w[0] - 440u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFFACu) [[unlikely]] return; }
L_003FFFAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  if (t) { [[clang::musttail]] return unit_00C0(c, 21u, depth); } }
L_003FFFB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003FFFB8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003FFFC4u); set32(c.r[5], c.r[5].w[0] + 3040u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003FFFC4u) [[unlikely]] return; }
L_003FFFC4:
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] - 22720u);  if (t) { [[clang::musttail]] return unit_00C0(c, 3u, depth); } }
    set32(c.r[16], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[17], c.r[5].w[0] + 8u);  if (t) { [[clang::musttail]] return unit_00C0(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFEFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 3;
L_003FFFE8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003FFFE8u | kUnwind; return; } goto L_003FFFE8; } }
    [[clang::musttail]] return unit_00C0(c, 2u, depth);
}

}
