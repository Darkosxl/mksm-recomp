#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0013[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 25,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0,
    120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0,
    136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0,
    0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0,
    0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0,
    0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0,
    0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0013(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0014C000;
    case 2u: goto L_0014C018;
    case 3u: goto L_0014C038;
    case 4u: goto L_0014C058;
    case 5u: goto L_0014C078;
    case 6u: goto L_0014C098;
    case 7u: goto L_0014C0B8;
    case 8u: goto L_0014C0D8;
    case 9u: goto L_0014C0E0;
    case 10u: goto L_0014C140;
    case 11u: goto L_0014C198;
    case 12u: goto L_0014C1AC;
    case 13u: goto L_0014C1B4;
    case 14u: goto L_0014C1CC;
    case 15u: goto L_0014C1E4;
    case 16u: goto L_0014C200;
    case 17u: goto L_0014C210;
    case 18u: goto L_0014C220;
    case 19u: goto L_0014C240;
    case 20u: goto L_0014C258;
    case 21u: goto L_0014C284;
    case 22u: goto L_0014C2B4;
    case 23u: goto L_0014C2D8;
    case 24u: goto L_0014C2F0;
    case 25u: goto L_0014C2FC;
    case 26u: goto L_0014C31C;
    case 27u: goto L_0014C330;
    case 28u: goto L_0014C33C;
    case 29u: goto L_0014C348;
    case 30u: goto L_0014C35C;
    case 31u: goto L_0014C390;
    case 32u: goto L_0014C3AC;
    case 33u: goto L_0014C3C8;
    case 34u: goto L_0014C3DC;
    case 35u: goto L_0014C3E8;
    case 36u: goto L_0014C408;
    case 37u: goto L_0014C41C;
    case 38u: goto L_0014C428;
    case 39u: goto L_0014C434;
    case 40u: goto L_0014C448;
    case 41u: goto L_0014C4CC;
    case 42u: goto L_0014C518;
    case 43u: goto L_0014C548;
    case 44u: goto L_0014C5CC;
    case 45u: goto L_0014C5E4;
    case 46u: goto L_0014C624;
    case 47u: goto L_0014C754;
    case 48u: goto L_0014C910;
    case 49u: goto L_0014C998;
    case 50u: goto L_0014C9BC;
    case 51u: goto L_0014CA28;
    case 52u: goto L_0014CA54;
    case 53u: goto L_0014CA74;
    case 54u: goto L_0014CA94;
    case 55u: goto L_0014CAA8;
    case 56u: goto L_0014CAB8;
    case 57u: goto L_0014CAC8;
    case 58u: goto L_0014CB44;
    case 59u: goto L_0014CB50;
    case 60u: goto L_0014CB64;
    case 61u: goto L_0014CB78;
    case 62u: goto L_0014CB90;
    case 63u: goto L_0014CB9C;
    case 64u: goto L_0014CBAC;
    case 65u: goto L_0014CBE8;
    case 66u: goto L_0014CBF8;
    case 67u: goto L_0014CC04;
    case 68u: goto L_0014CC54;
    case 69u: goto L_0014CC60;
    case 70u: goto L_0014CC80;
    case 71u: goto L_0014CC94;
    case 72u: goto L_0014CCA8;
    case 73u: goto L_0014CCC0;
    case 74u: goto L_0014CCE0;
    case 75u: goto L_0014CCF0;
    case 76u: goto L_0014CD08;
    case 77u: goto L_0014CD20;
    case 78u: goto L_0014CD4C;
    case 79u: goto L_0014CD74;
    case 80u: goto L_0014CDA0;
    case 81u: goto L_0014CDAC;
    case 82u: goto L_0014CDBC;
    case 83u: goto L_0014CE08;
    case 84u: goto L_0014CE4C;
    case 85u: goto L_0014CE74;
    case 86u: goto L_0014CEA0;
    case 87u: goto L_0014CEAC;
    case 88u: goto L_0014CEBC;
    case 89u: goto L_0014CF50;
    case 90u: goto L_0014CF5C;
    case 91u: goto L_0014CF6C;
    case 92u: goto L_0014CFB8;
    case 93u: goto L_0014CFC8;
    case 94u: goto L_0014CFDC;
    case 95u: goto L_0014CFF8;
    case 96u: goto L_0014D040;
    case 97u: goto L_0014D050;
    case 98u: goto L_0014D060;
    case 99u: goto L_0014D070;
    case 100u: goto L_0014D098;
    case 101u: goto L_0014D0A8;
    case 102u: goto L_0014D0B8;
    case 103u: goto L_0014D0C8;
    case 104u: goto L_0014D0D8;
    case 105u: goto L_0014D0F8;
    case 106u: goto L_0014D120;
    case 107u: goto L_0014D140;
    case 108u: goto L_0014D168;
    case 109u: goto L_0014D188;
    case 110u: goto L_0014D1B0;
    case 111u: goto L_0014D1C4;
    case 112u: goto L_0014D1D8;
    case 113u: goto L_0014D1F4;
    case 114u: goto L_0014D208;
    case 115u: goto L_0014D21C;
    case 116u: goto L_0014D230;
    case 117u: goto L_0014D24C;
    case 118u: goto L_0014D260;
    case 119u: goto L_0014D270;
    case 120u: goto L_0014D280;
    case 121u: goto L_0014D290;
    case 122u: goto L_0014D2A0;
    case 123u: goto L_0014D2B0;
    case 124u: goto L_0014D2C0;
    case 125u: goto L_0014D2D0;
    case 126u: goto L_0014D2E0;
    case 127u: goto L_0014D2F0;
    case 128u: goto L_0014D300;
    case 129u: goto L_0014D310;
    case 130u: goto L_0014D320;
    case 131u: goto L_0014D330;
    case 132u: goto L_0014D340;
    case 133u: goto L_0014D350;
    case 134u: goto L_0014D360;
    case 135u: goto L_0014D370;
    case 136u: goto L_0014D380;
    case 137u: goto L_0014D390;
    case 138u: goto L_0014D3A0;
    case 139u: goto L_0014D3B0;
    case 140u: goto L_0014D3C0;
    case 141u: goto L_0014D3D0;
    case 142u: goto L_0014D3E0;
    case 143u: goto L_0014D3F0;
    case 144u: goto L_0014D408;
    case 145u: goto L_0014D450;
    case 146u: goto L_0014D464;
    case 147u: goto L_0014D47C;
    case 148u: goto L_0014D49C;
    case 149u: goto L_0014D4C0;
    case 150u: goto L_0014D4F8;
    case 151u: goto L_0014D508;
    case 152u: goto L_0014D528;
    case 153u: goto L_0014D54C;
    case 154u: goto L_0014D570;
    case 155u: goto L_0014D5A8;
    case 156u: goto L_0014D5B8;
    case 157u: goto L_0014D5D8;
    case 158u: goto L_0014D5FC;
    case 159u: goto L_0014D620;
    case 160u: goto L_0014D650;
    case 161u: goto L_0014D660;
    case 162u: goto L_0014D680;
    case 163u: goto L_0014D6A0;
    case 164u: goto L_0014D6C0;
    case 165u: goto L_0014D6F0;
    case 166u: goto L_0014D710;
    case 167u: goto L_0014D730;
    case 168u: goto L_0014D75C;
    case 169u: goto L_0014D778;
    case 170u: goto L_0014D798;
    case 171u: goto L_0014D7AC;
    case 172u: goto L_0014D7F8;
    case 173u: goto L_0014D820;
    case 174u: goto L_0014D838;
    case 175u: goto L_0014D850;
    case 176u: goto L_0014D86C;
    case 177u: goto L_0014D888;
    case 178u: goto L_0014D8D0;
    case 179u: goto L_0014D910;
    case 180u: goto L_0014D928;
    case 181u: goto L_0014D930;
    case 182u: goto L_0014D948;
    case 183u: goto L_0014D9C0;
    case 184u: goto L_0014D9E8;
    case 185u: goto L_0014D9FC;
    case 186u: goto L_0014DA10;
    case 187u: goto L_0014DA54;
    case 188u: goto L_0014DAF0;
    case 189u: goto L_0014DB18;
    case 190u: goto L_0014DB2C;
    case 191u: goto L_0014DB40;
    case 192u: goto L_0014DB84;
    case 193u: goto L_0014DC20;
    case 194u: goto L_0014DC68;
    case 195u: goto L_0014DC74;
    case 196u: goto L_0014DC94;
    case 197u: goto L_0014DCA0;
    case 198u: goto L_0014DD68;
    case 199u: goto L_0014DDA0;
    case 200u: goto L_0014DDB4;
    case 201u: goto L_0014DDC8;
    case 202u: goto L_0014DDE0;
    case 203u: goto L_0014DE10;
    case 204u: goto L_0014DE58;
    case 205u: goto L_0014DE64;
    case 206u: goto L_0014DE84;
    case 207u: goto L_0014DE90;
    case 208u: goto L_0014DF58;
    case 209u: goto L_0014DF90;
    case 210u: goto L_0014DFA4;
    case 211u: goto L_0014DFB8;
    case 212u: goto L_0014DFD0;
    case 213u: goto L_0014E000;
    case 214u: goto L_0014E028;
    case 215u: goto L_0014E03C;
    case 216u: goto L_0014E054;
    case 217u: goto L_0014E060;
    case 218u: goto L_0014E0A8;
    case 219u: goto L_0014E0B8;
    case 220u: goto L_0014E0CC;
    case 221u: goto L_0014E0F0;
    case 222u: goto L_0014E16C;
    case 223u: goto L_0014E178;
    case 224u: goto L_0014E18C;
    case 225u: goto L_0014E19C;
    case 226u: goto L_0014E1B0;
    case 227u: goto L_0014E1C4;
    case 228u: goto L_0014E1E4;
    case 229u: goto L_0014E210;
    case 230u: goto L_0014E230;
    case 231u: goto L_0014E2C0;
    case 232u: goto L_0014E2DC;
    case 233u: goto L_0014E2EC;
    case 234u: goto L_0014E300;
    case 235u: goto L_0014E324;
    case 236u: goto L_0014E338;
    case 237u: goto L_0014E340;
    case 238u: goto L_0014E358;
    case 239u: goto L_0014E36C;
    case 240u: goto L_0014E388;
    case 241u: goto L_0014E3E8;
    case 242u: goto L_0014E418;
    case 243u: goto L_0014E430;
    case 244u: goto L_0014E478;
    case 245u: goto L_0014E484;
    case 246u: goto L_0014E4BC;
    case 247u: goto L_0014E500;
    case 248u: goto L_0014E50C;
    case 249u: goto L_0014E524;
    case 250u: goto L_0014E570;
    case 251u: goto L_0014E594;
    case 252u: goto L_0014E5B0;
    case 253u: goto L_0014E5CC;
    case 254u: goto L_0014E5E4;
    case 255u: goto L_0014E5F8;
    case 256u: goto L_0014E60C;
    case 257u: goto L_0014E620;
    case 258u: goto L_0014E6A0;
    case 259u: goto L_0014E6B8;
    case 260u: goto L_0014E6E8;
    case 261u: goto L_0014E748;
    case 262u: goto L_0014E758;
    case 263u: goto L_0014E768;
    case 264u: goto L_0014E7A8;
    case 265u: goto L_0014E7F8;
    case 266u: goto L_0014E834;
    case 267u: goto L_0014E858;
    case 268u: goto L_0014E870;
    case 269u: goto L_0014E898;
    case 270u: goto L_0014E8A8;
    case 271u: goto L_0014E8B4;
    case 272u: goto L_0014E90C;
    case 273u: goto L_0014E924;
    case 274u: goto L_0014E934;
    case 275u: goto L_0014E948;
    case 276u: goto L_0014E974;
    case 277u: goto L_0014E988;
    case 278u: goto L_0014E998;
    case 279u: goto L_0014E9F8;
    case 280u: goto L_0014EA54;
    case 281u: goto L_0014EB1C;
    case 282u: goto L_0014EB30;
    case 283u: goto L_0014EB44;
    case 284u: goto L_0014EB70;
    case 285u: goto L_0014EB88;
    case 286u: goto L_0014EB90;
    case 287u: goto L_0014EBA8;
    case 288u: goto L_0014EBC0;
    case 289u: goto L_0014EBD0;
    case 290u: goto L_0014EBE0;
    case 291u: goto L_0014EBF0;
    case 292u: goto L_0014EC10;
    case 293u: goto L_0014EC20;
    case 294u: goto L_0014EC30;
    case 295u: goto L_0014EC3C;
    case 296u: goto L_0014EC8C;
    case 297u: goto L_0014EC94;
    case 298u: goto L_0014EC9C;
    case 299u: goto L_0014ECAC;
    case 300u: goto L_0014ECB4;
    case 301u: goto L_0014ECBC;
    case 302u: goto L_0014ECCC;
    case 303u: goto L_0014ECD4;
    case 304u: goto L_0014ECDC;
    case 305u: goto L_0014ED08;
    case 306u: goto L_0014ED18;
    case 307u: goto L_0014ED28;
    case 308u: goto L_0014ED38;
    case 309u: goto L_0014ED48;
    case 310u: goto L_0014ED58;
    case 311u: goto L_0014ED68;
    case 312u: goto L_0014ED78;
    case 313u: goto L_0014ED88;
    case 314u: goto L_0014ED98;
    case 315u: goto L_0014EDA8;
    case 316u: goto L_0014EDB8;
    case 317u: goto L_0014EDC8;
    case 318u: goto L_0014EDD8;
    case 319u: goto L_0014EDE8;
    case 320u: goto L_0014EDF8;
    case 321u: goto L_0014EE08;
    case 322u: goto L_0014EE18;
    case 323u: goto L_0014EE28;
    case 324u: goto L_0014EE38;
    case 325u: goto L_0014EE48;
    case 326u: goto L_0014EE60;
    case 327u: goto L_0014EEB8;
    case 328u: goto L_0014EEE8;
    case 329u: goto L_0014EF08;
    case 330u: goto L_0014EF20;
    case 331u: goto L_0014EF58;
    case 332u: goto L_0014EF98;
    case 333u: goto L_0014EFBC;
    case 334u: goto L_0014F018;
    case 335u: goto L_0014F028;
    case 336u: goto L_0014F040;
    case 337u: goto L_0014F05C;
    case 338u: goto L_0014F070;
    case 339u: goto L_0014F090;
    case 340u: goto L_0014F0BC;
    case 341u: goto L_0014F100;
    case 342u: goto L_0014F14C;
    case 343u: goto L_0014F16C;
    case 344u: goto L_0014F1DC;
    case 345u: goto L_0014F220;
    case 346u: goto L_0014F25C;
    case 347u: goto L_0014F280;
    case 348u: goto L_0014F2C0;
    case 349u: goto L_0014F380;
    case 350u: goto L_0014F3A4;
    case 351u: goto L_0014F3B8;
    case 352u: goto L_0014F3E4;
    case 353u: goto L_0014F558;
    case 354u: goto L_0014F590;
    case 355u: goto L_0014F5B8;
    case 356u: goto L_0014F5F0;
    case 357u: goto L_0014F620;
    case 358u: goto L_0014F72C;
    case 359u: goto L_0014F768;
    case 360u: goto L_0014F7A0;
    case 361u: goto L_0014F89C;
    case 362u: goto L_0014F8E0;
    case 363u: goto L_0014F90C;
    case 364u: goto L_0014F93C;
    case 365u: goto L_0014F974;
    case 366u: goto L_0014FA74;
    case 367u: goto L_0014FAB8;
    case 368u: goto L_0014FAE4;
    case 369u: goto L_0014FB18;
    case 370u: goto L_0014FB48;
    case 371u: goto L_0014FC64;
    case 372u: goto L_0014FCA8;
    case 373u: goto L_0014FCD4;
    case 374u: goto L_0014FD04;
    case 375u: goto L_0014FD34;
    case 376u: goto L_0014FE34;
    case 377u: goto L_0014FE78;
    case 378u: goto L_0014FEA4;
    case 379u: goto L_0014FED0;
    case 380u: goto L_0014FF08;
    default: bad_entry(c, 0x0014C000u); return;
    }
L_0014C000:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C018u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0014C018u) [[unlikely]] return; }
L_0014C018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C0E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C038u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0014C038u) [[unlikely]] return; }
L_0014C038:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C0E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C058u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0014C058u) [[unlikely]] return; }
L_0014C058:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C0E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C078u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0014C078u) [[unlikely]] return; }
L_0014C078:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C0E0; } }
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.f[12] = c.f[20];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C098u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0014C098u) [[unlikely]] return; }
L_0014C098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C0E0; } }
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C0B8u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0014C0B8u) [[unlikely]] return; }
L_0014C0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C0E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C0D8u);  if (depth < kMaxDepth) unit_0010(c, 288u, depth + 1u); else { c.pc = 0x001437B0u; return; } if (c.pc != 0x0014C0D8u) [[unlikely]] return; }
L_0014C0D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014C0EC; } }
L_0014C0E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C0F0; } }
L_0014C0EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014C0F0:
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 432u));
    c.f[26] = ld32((c.r[29].w[0] + 640u));
    c.f[25] = ld32((c.r[29].w[0] + 632u));
    c.f[24] = ld32((c.r[29].w[0] + 624u));
    c.f[23] = ld32((c.r[29].w[0] + 616u));
    c.f[22] = ld32((c.r[29].w[0] + 608u));
    c.f[21] = ld32((c.r[29].w[0] + 600u));
    c.f[20] = ld32((c.r[29].w[0] + 592u));
    set32(c.r[29], c.r[29].w[0] + 656u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014C140:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 304u), c.f[26]);
    st32((c.r[29].w[0] + 296u), c.f[25]);
    st32((c.r[29].w[0] + 288u), c.f[24]);
    st32((c.r[29].w[0] + 280u), c.f[23]);
    st32((c.r[29].w[0] + 272u), c.f[22]);
    st32((c.r[29].w[0] + 264u), c.f[21]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C198u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014C198u) [[unlikely]] return; }
L_0014C198:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1ACu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014C1ACu) [[unlikely]] return; }
L_0014C1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1B4u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014C1B4u) [[unlikely]] return; }
L_0014C1B4:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1CCu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014C1CCu) [[unlikely]] return; }
L_0014C1CC:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C1E4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014C1E4u) [[unlikely]] return; }
L_0014C1E4:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C200u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014C200u) [[unlikely]] return; }
L_0014C200:
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C210u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014C210u) [[unlikely]] return; }
L_0014C210:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C220u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014C220u) [[unlikely]] return; }
L_0014C220:
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C248; } }
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C240u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014C240u) [[unlikely]] return; }
L_0014C240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C258; } }
L_0014C248:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C258u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014C258u) [[unlikely]] return; }
L_0014C258:
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[5], c.r[29].w[0] + 100u);
    c.f[16] = ld32((c.r[19].w[0] + 304u));
    c.f[17] = ld32((c.r[19].w[0] + 312u));
    c.f[14] = ld32((c.r[20].w[0]));
    c.f[15] = ld32((c.r[20].w[0] + 8u));
    c.f[20] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C284u);  if (depth < kMaxDepth) unit_008A(c, 6u, depth + 1u); else { c.pc = 0x00328278u; return; } if (c.pc != 0x0014C284u) [[unlikely]] return; }
L_0014C284:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[25] = c.r[1].w[0];
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.f[13] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 100u));
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[24] = c.r[1].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C2B4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014C2B4u) [[unlikely]] return; }
L_0014C2B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[23] = c.r[1].w[0];
    c.f[12] = ld32((c.r[19].w[0] + 304u));
    c.f[13] = c.f[20];
    c.f[14] = ld32((c.r[19].w[0] + 312u));
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C2D8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014C2D8u) [[unlikely]] return; }
L_0014C2D8:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C2F0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014C2F0u) [[unlikely]] return; }
L_0014C2F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C2FCu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014C2FCu) [[unlikely]] return; }
L_0014C2FC:
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.f[13] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.f[15] = c.f[20];
    c.f[26] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C31Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014C31Cu) [[unlikely]] return; }
L_0014C31C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C330u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014C330u) [[unlikely]] return; }
L_0014C330:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C33Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014C33Cu) [[unlikely]] return; }
L_0014C33C:
    c.f[21] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C348u);  if (depth < kMaxDepth) unit_0049(c, 179u, depth + 1u); else { c.pc = 0x00226568u; return; } if (c.pc != 0x0014C348u) [[unlikely]] return; }
L_0014C348:
    c.f[0] = fp::mul(c.f[0], c.f[25]);
    fpu_div(c, 0u, c.f[0], c.f[24]);
    c.f[12] = fp::mul(c.f[0], c.f[23]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C35Cu);  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00207700u; return; } if (c.pc != 0x0014C35Cu) [[unlikely]] return; }
L_0014C35C:
    c.f[12] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[4], c.r[29].w[0] + 104u);
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    set32(c.r[5], c.r[29].w[0] + 108u);
    c.f[16] = ld32((c.r[19].w[0] + 308u));
    fpu_div(c, 21u, c.f[21], c.f[0]);
    c.f[17] = ld32((c.r[19].w[0] + 312u));
    c.f[14] = ld32((c.r[20].w[0] + 4u));
    c.f[15] = ld32((c.r[20].w[0] + 8u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C390u);  if (depth < kMaxDepth) unit_008A(c, 6u, depth + 1u); else { c.pc = 0x00328278u; return; } if (c.pc != 0x0014C390u) [[unlikely]] return; }
L_0014C390:
    c.f[13] = ld32((c.r[29].w[0] + 104u));
    c.f[12] = c.f[20];
    c.f[14] = ld32((c.r[29].w[0] + 108u));
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C3ACu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014C3ACu) [[unlikely]] return; }
L_0014C3AC:
    c.f[13] = ld32((c.r[19].w[0] + 308u));
    c.f[12] = c.f[20];
    c.f[14] = ld32((c.r[19].w[0] + 312u));
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C3C8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014C3C8u) [[unlikely]] return; }
L_0014C3C8:
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C3DCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014C3DCu) [[unlikely]] return; }
L_0014C3DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C3E8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014C3E8u) [[unlikely]] return; }
L_0014C3E8:
    c.f[12] = c.f[20];
    c.f[13] = ld32((c.r[29].w[0] + 84u));
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.f[15] = c.f[12];
    c.f[22] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C408u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014C408u) [[unlikely]] return; }
L_0014C408:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C41Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014C41Cu) [[unlikely]] return; }
L_0014C41C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C428u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014C428u) [[unlikely]] return; }
L_0014C428:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C434u);  if (depth < kMaxDepth) unit_0049(c, 180u, depth + 1u); else { c.pc = 0x00226578u; return; } if (c.pc != 0x0014C434u) [[unlikely]] return; }
L_0014C434:
    c.f[0] = fp::mul(c.f[0], c.f[25]);
    fpu_div(c, 0u, c.f[0], c.f[24]);
    c.f[12] = fp::mul(c.f[0], c.f[23]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C448u);  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00207700u; return; } if (c.pc != 0x0014C448u) [[unlikely]] return; }
L_0014C448:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.f[12] = fp::add(c.f[26], c.f[21]);
    c.f[22] = fp::add(c.f[22], c.f[20]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[22]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C468; } }
    c.f[12] = c.f[22];
    c.budget -= 1;
L_0014C468:
    c.f[0] = ld32((c.r[19].w[0] + 2584u));
    c.f[1] = ld32((c.r[19].w[0] + 2588u));
    c.f[12] = fp::add(c.f[12], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C490; } }
    c.f[12] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C4A8; } }
L_0014C490:
    c.f[0] = ld32((c.r[19].w[0] + 2592u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C4A8; } }
    c.f[12] = c.f[0];
    c.budget -= 1;
L_0014C4A8:
    set32(c.r[3], ld32((c.r[19].w[0] + 724u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 304u);
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 128u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 132u)));
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C4CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014C4CCu) [[unlikely]] return; }
L_0014C4CC:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.f[26] = ld32((c.r[29].w[0] + 304u));
    c.f[25] = ld32((c.r[29].w[0] + 296u));
    c.f[24] = ld32((c.r[29].w[0] + 288u));
    c.f[23] = ld32((c.r[29].w[0] + 280u));
    c.f[22] = ld32((c.r[29].w[0] + 272u));
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014C518:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C548u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x0014C548u) [[unlikely]] return; }
L_0014C548:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C5B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2604u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014C5B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12556u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014C5B8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 10960u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C5B4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014C5B8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 2420u)));
    set32(c.r[4], 0u + 112u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2416u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 812u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014C5B8; } }
L_0014C5B4:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0014C5B8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0014C660; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C5CCu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0014C5CCu) [[unlikely]] return; }
L_0014C5CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C5E4u);  if (depth < kMaxDepth) unit_0071(c, 315u, depth + 1u); else { c.pc = 0x002C7578u; return; } if (c.pc != 0x0014C5E4u) [[unlikely]] return; }
L_0014C5E4:
    c.r[3].d[0] = ld8((c.r[29].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[2].d[0] = ld8((c.r[29].w[0] + 3u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] - 128u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.f[21] = c.r[3].w[0];
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[5], c.r[5].w[0] + 27456u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C624u);  if (depth < kMaxDepth) unit_0087(c, 284u, depth + 1u); else { c.pc = 0x0031FEE0u; return; } if (c.pc != 0x0014C624u) [[unlikely]] return; }
L_0014C624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C660; } }
    c.f[0] = c.f[21] & fp::kAbs;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[2].w[0] + 10972u));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.f[3] = c.f[20] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.f[2] = c.f[0];
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C674; } }
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C674; } }
L_0014C660:
    c.f[3] = 0u;
    c.f[2] = c.f[3];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C800; } }
L_0014C674:
    c.f[1] = ld32((c.r[3].w[0] + 10972u));
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C694; } }
    c.f[21] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C6BC; } }
L_0014C694:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C6B8; } }
    c.f[21] = fp::sub(c.f[21], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C6BC; } }
L_0014C6B8:
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.budget -= 1;
L_0014C6BC:
    c.f[1] = ld32((c.r[3].w[0] + 10972u));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C6DC; } }
    c.f[20] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C704; } }
L_0014C6DC:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C700; } }
    c.f[20] = fp::sub(c.f[20], c.f[1]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C704; } }
L_0014C700:
    c.f[20] = fp::add(c.f[20], c.f[1]);
    c.budget -= 1;
L_0014C704:
    set32(c.r[2], ld32((c.r[16].w[0] + 2420u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[16].w[0] + 2416u)));
    c.f[1] = ld32((c.r[3].w[0] + 10972u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    set32(c.r[3], 0u + 112u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    fpu_div(c, 20u, c.f[20], c.f[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    fpu_div(c, 21u, c.f[21], c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 832u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C754u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014C754u) [[unlikely]] return; }
L_0014C754:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C778; } }
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C77C; } }
L_0014C778:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_0014C77C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[3] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C7C0; } }
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C7C4; } }
L_0014C7C0:
    c.f[0] = ld32((c.r[29].w[0] + 28u));
    c.budget -= 1;
L_0014C7C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8580u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014C7F8; } }
    c.f[3] = c.f[3] ^ fp::kSign;
    c.budget -= 1;
L_0014C7F8:
    c.f[2] = c.f[3];
    c.f[3] = c.f[0];
    c.budget -= 2;
L_0014C800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[2].w[0] + 10976u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C834; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = ld32((c.r[2].w[0] + 10984u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C854; } }
L_0014C834:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C864; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = ld32((c.r[2].w[0] + 10984u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
L_0014C854:
    st32((c.r[4].w[0] + 10976u), c.f[0]);
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C864; } }
    st32((c.r[4].w[0] + 10976u), c.f[2]);
    c.budget -= 1;
L_0014C864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[2].w[0] + 10980u));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C898; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = ld32((c.r[2].w[0] + 10988u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014C8B8; } }
L_0014C898:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C8C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = ld32((c.r[2].w[0] + 10988u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 4;
L_0014C8B8:
    st32((c.r[3].w[0] + 10980u), c.f[0]);
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014C8C8; } }
    st32((c.r[3].w[0] + 10980u), c.f[3]);
    c.budget -= 1;
L_0014C8C8:
    c.f[1] = ld32((c.r[4].w[0] + 10976u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[18].w[0]), c.f[0]);
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[1] = ld32((c.r[3].w[0] + 10980u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014C910:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 320u), c.f[24]);
    st32((c.r[29].w[0] + 312u), c.f[23]);
    st32((c.r[29].w[0] + 304u), c.f[22]);
    st32((c.r[29].w[0] + 296u), c.f[21]);
    st32((c.r[29].w[0] + 288u), c.f[20]);
    set32(c.r[2], ld32((c.r[18].w[0] + 500u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014C974; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[21], ld32((c.r[2].w[0] + 10960u)));
    c.budget -= 5;
    { const bool t = c.r[21].d[0] == c.r[3].d[0];  if (t) { goto L_0014C9C4; } }
L_0014C974:
    c.f[20] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 13184u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C998u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014C998u) [[unlikely]] return; }
L_0014C998:
    c.f[12] = c.f[20];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 10992u), c.f[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014C9BCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014C9BCu) [[unlikely]] return; }
L_0014C9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014CFE4; } }
L_0014C9C4:
    set32(c.r[3], ld32((c.r[18].w[0] + 2420u)));
    set32(c.r[19], 0u + 112u);
    set32(c.r[2], ld32((c.r[18].w[0] + 2416u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 804u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014CA0C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 2540u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014CA0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[16], c.r[2].w[0] + 14208u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20948u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0014CAD0; } }
L_0014CA0C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 13184u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CA28u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CA28u) [[unlikely]] return; }
L_0014CA28:
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.f[12] = ld32((c.r[18].w[0] + 10992u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[29].w[0] + 12u), 0u);
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CA54u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014CA54u) [[unlikely]] return; }
L_0014CA54:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CA74u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014CA74u) [[unlikely]] return; }
L_0014CA74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CA94u);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x0014CA94u) [[unlikely]] return; }
L_0014CA94:
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0] + 10992u), c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CAA8u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014CAA8u) [[unlikely]] return; }
L_0014CAA8:
    c.f[12] = ld32((c.r[18].w[0] + 10992u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CAB8u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014CAB8u) [[unlikely]] return; }
L_0014CAB8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CAC8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CAC8u) [[unlikely]] return; }
L_0014CAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014CFE4; } }
L_0014CAD0:
    set32(c.r[2], c.r[4].w[0] - 148u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014CB30; } }
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014CB30; } }
    set32(c.r[2], 0u + 199u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014CB30; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014CB30; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014CB30; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014CB30; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0014CB30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0014CB6C; } }
L_0014CB30:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 13184u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB44u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CB44u) [[unlikely]] return; }
L_0014CB44:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB50u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014CB50u) [[unlikely]] return; }
L_0014CB50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 10992u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB64u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014CB64u) [[unlikely]] return; }
L_0014CB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014CFE4; } }
L_0014CB6C:
    set32(c.r[4], c.r[16].w[0] + 26272u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB78u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014CB78u) [[unlikely]] return; }
L_0014CB78:
    set32(c.r[5], ld32((c.r[16].w[0] + 26416u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB90u);  if (depth < kMaxDepth) unit_006F(c, 183u, depth + 1u); else { c.pc = 0x002BFA00u; return; } if (c.pc != 0x0014CB90u) [[unlikely]] return; }
L_0014CB90:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CB9Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014CB9Cu) [[unlikely]] return; }
L_0014CB9C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CBACu);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014CBACu) [[unlikely]] return; }
L_0014CBAC:
    set32(c.r[3], ld32((c.r[18].w[0] + 2420u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 2416u)));
    set32(c.r[16], c.r[16].w[0] - 13184u);
    st32((c.r[29].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 808u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CBE8u);  if (depth < kMaxDepth) unit_008A(c, 240u, depth + 1u); else { c.pc = 0x0032B120u; return; } if (c.pc != 0x0014CBE8u) [[unlikely]] return; }
L_0014CBE8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CBF8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CBF8u) [[unlikely]] return; }
L_0014CBF8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CC04u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014CC04u) [[unlikely]] return; }
L_0014CC04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x425C0000u);
    c.f[1] = c.r[1].w[0];
    c.f[21] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[21]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014CC24; } }
    c.f[21] = c.f[1];
    c.budget -= 1;
L_0014CC24:
    c.f[0] = fp::sub(c.f[1], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[23] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40260000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[22] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[20] = fp::sub(c.f[23], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CC54u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0014CC54u) [[unlikely]] return; }
L_0014CC54:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CC60u);  if (depth < kMaxDepth) unit_009B(c, 434u, depth + 1u); else { c.pc = 0x0036F848u; return; } if (c.pc != 0x0014CC60u) [[unlikely]] return; }
L_0014CC60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014CC70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 2;
L_0014CC70:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CC80u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014CC80u) [[unlikely]] return; }
L_0014CC80:
    set32(c.r[17], c.r[18].w[0] + 320u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CC94u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CC94u) [[unlikely]] return; }
L_0014CC94:
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CCA8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CCA8u) [[unlikely]] return; }
L_0014CCA8:
    c.r[22].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.f[24] = ld32((c.r[18].w[0] + 572u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CCC0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CCC0u) [[unlikely]] return; }
L_0014CCC0:
    set32(c.r[3], ld32((c.r[18].w[0] + 724u)));
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CCE0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014CCE0u) [[unlikely]] return; }
L_0014CCE0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CCF0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CCF0u) [[unlikely]] return; }
L_0014CCF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 120u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 124u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CD08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0014CD08u) [[unlikely]] return; }
L_0014CD08:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CD20u);  if (depth < kMaxDepth) unit_009B(c, 264u, depth + 1u); else { c.pc = 0x0036D810u; return; } if (c.pc != 0x0014CD20u) [[unlikely]] return; }
L_0014CD20:
    set32(c.r[3], ld32((c.r[18].w[0] + 2420u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 2416u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 804u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0014CE3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CD4Cu);  if (depth < kMaxDepth) unit_0049(c, 179u, depth + 1u); else { c.pc = 0x00226568u; return; } if (c.pc != 0x0014CD4Cu) [[unlikely]] return; }
L_0014CD4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_div(c, 12u, c.f[0], c.f[22]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CD74u);  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00207700u; return; } if (c.pc != 0x0014CD74u) [[unlikely]] return; }
L_0014CD74:
    c.f[1] = ld32((c.r[18].w[0] + 572u));
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.f[15] = c.f[13];
    c.f[21] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CDA0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014CDA0u) [[unlikely]] return; }
L_0014CDA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CDACu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014CDACu) [[unlikely]] return; }
L_0014CDAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CDBCu);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x0014CDBCu) [[unlikely]] return; }
L_0014CDBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014CDE4; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 2;
L_0014CDE4:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[20] = fp::sub(c.f[23], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CE08u);  if (depth < kMaxDepth) unit_008A(c, 168u, depth + 1u); else { c.pc = 0x0032A620u; return; } if (c.pc != 0x0014CE08u) [[unlikely]] return; }
L_0014CE08:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0014CE2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 6;
L_0014CE2C:
    c.f[0] = fp::mul(c.f[21], c.f[20]);
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014CFA8; } }
L_0014CE3C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[21].d[0];  if (t) { goto L_0014CF04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CE4Cu);  if (depth < kMaxDepth) unit_0049(c, 179u, depth + 1u); else { c.pc = 0x00226568u; return; } if (c.pc != 0x0014CE4Cu) [[unlikely]] return; }
L_0014CE4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_div(c, 12u, c.f[0], c.f[22]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CE74u);  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00207700u; return; } if (c.pc != 0x0014CE74u) [[unlikely]] return; }
L_0014CE74:
    c.f[1] = ld32((c.r[18].w[0] + 572u));
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[12] = ld32((c.r[29].w[0] + 64u));
    c.f[14] = ld32((c.r[29].w[0] + 72u));
    c.f[15] = c.f[13];
    c.f[21] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CEA0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014CEA0u) [[unlikely]] return; }
L_0014CEA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CEACu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014CEACu) [[unlikely]] return; }
L_0014CEAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CEBCu);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x0014CEBCu) [[unlikely]] return; }
L_0014CEBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014CEE4; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 2;
L_0014CEE4:
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[23], c.f[0]);
    c.f[0] = fp::mul(c.f[21], c.f[0]);
    c.f[21] = fp::sub(c.f[21], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014CFA8; } }
L_0014CF04:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014CFA8; } }
    c.f[0] = ld32((c.r[18].w[0] + 572u));
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.f[12] = ld32((c.r[29].w[0] + 96u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 104u));
    c.f[0] = fp::mul(c.f[20], c.f[0]);
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[14] = c.f[14] ^ fp::kSign;
    c.f[20] = 0u;
    fpu_div(c, 21u, c.f[0], c.f[22]);
    c.f[13] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CF50u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014CF50u) [[unlikely]] return; }
L_0014CF50:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CF5Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014CF5Cu) [[unlikely]] return; }
L_0014CF5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CF6Cu);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x0014CF6Cu) [[unlikely]] return; }
L_0014CF6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014CFA4; } }
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014CFA8; } }
L_0014CFA4:
    c.f[21] = c.f[20];
    c.budget -= 1;
L_0014CFA8:
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CFB8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CFB8u) [[unlikely]] return; }
L_0014CFB8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CFC8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014CFC8u) [[unlikely]] return; }
L_0014CFC8:
    st32((c.r[18].w[0] + 572u), c.f[24]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CFDCu);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014CFDCu) [[unlikely]] return; }
L_0014CFDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 10992u), c.f[21]);
    c.budget -= 2;
L_0014CFE4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014CFF8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014CFF8u) [[unlikely]] return; }
L_0014CFF8:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[24] = ld32((c.r[29].w[0] + 320u));
    c.f[23] = ld32((c.r[29].w[0] + 312u));
    c.f[22] = ld32((c.r[29].w[0] + 304u));
    c.f[21] = ld32((c.r[29].w[0] + 296u));
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D040:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D050:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D060:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D070:
    set32(c.r[2], ld32((c.r[4].w[0] + 2416u)));
    set32(c.r[5], 0u + 112u);
    set32(c.r[3], ld32((c.r[4].w[0] + 2420u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 736u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D098:
    st32((c.r[4].w[0] + 2416u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D0A8:
    set32(c.r[2], ld32((c.r[4].w[0] + 2416u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D0B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 2420u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D0C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 2424u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D0D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 2420u)));
    set32(c.r[3], 0u + 112u);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[5].w[0] + 736u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D0F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 2420u)));
    set32(c.r[5], 0u + 112u);
    set32(c.r[3], ld32((c.r[4].w[0] + 2416u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 736u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D120:
    set32(c.r[2], ld32((c.r[4].w[0] + 2420u)));
    set32(c.r[3], 0u + 112u);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 740u), c.r[6].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D140:
    set32(c.r[2], ld32((c.r[4].w[0] + 2420u)));
    set32(c.r[5], 0u + 112u);
    set32(c.r[3], ld32((c.r[4].w[0] + 2416u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 740u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D168:
    set32(c.r[2], ld32((c.r[4].w[0] + 2420u)));
    set32(c.r[3], 0u + 112u);
    set32(c.r[5], c.r[5].w[0] - c.r[2].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 744u), c.f[12]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D188:
    set32(c.r[3], ld32((c.r[4].w[0] + 2420u)));
    set32(c.r[5], 0u + 112u);
    set32(c.r[2], ld32((c.r[4].w[0] + 2416u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 744u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D1B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 2432u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D1C4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014D1C4u) [[unlikely]] return; }
L_0014D1C4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D1D8:
    set32(c.r[2], c.r[4].w[0] + 2432u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D1F4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014D1F4u) [[unlikely]] return; }
L_0014D1F4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D208:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 2448u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D21Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014D21Cu) [[unlikely]] return; }
L_0014D21C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D230:
    set32(c.r[2], c.r[4].w[0] + 2448u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D24Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014D24Cu) [[unlikely]] return; }
L_0014D24C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 10960u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D270:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 10960u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 10964u), c.f[12]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D290:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[0] = ld32((c.r[2].w[0] + 10964u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D2A0:
    st32((c.r[4].w[0] + 2524u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D2B0:
    set32(c.r[2], ld32((c.r[4].w[0] + 2524u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D2C0:
    st32((c.r[4].w[0] + 2532u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D2D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 2532u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D2E0:
    st32((c.r[4].w[0] + 2548u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D2F0:
    c.f[0] = ld32((c.r[4].w[0] + 2548u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D300:
    st32((c.r[4].w[0] + 2552u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D310:
    c.f[0] = ld32((c.r[4].w[0] + 2552u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D320:
    st32((c.r[4].w[0] + 2572u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D330:
    st32((c.r[4].w[0] + 2580u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D340:
    set32(c.r[2], ld32((c.r[4].w[0] + 2580u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D350:
    st32((c.r[4].w[0] + 2588u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D360:
    st32((c.r[4].w[0] + 2592u), c.f[12]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D370:
    st32((c.r[4].w[0] + 2596u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D380:
    st32((c.r[4].w[0] + 2600u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D390:
    set32(c.r[2], ld32((c.r[4].w[0] + 2596u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D3A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 2600u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D3B0:
    st32((c.r[4].w[0] + 2604u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D3C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 2604u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D3D0:
    st32((c.r[4].w[0] + 2608u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D3E0:
    set32(c.r[2], ld32((c.r[4].w[0] + 2608u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D3F0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D408:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 17800u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[17].w[0] + 736u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014D46C; } }
    set32(c.r[16], c.r[17].w[0] + 2416u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0014D46C; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0014D450:
    set32(c.r[16], c.r[16].w[0] - 112u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D464u);  if (depth < kMaxDepth) unit_0013(c, 261u, depth + 1u); else { c.pc = 0x0014E748u; return; } if (c.pc != 0x0014D464u) [[unlikely]] return; }
L_0014D464:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014D450u | kUnwind; return; } goto L_0014D450; } }
L_0014D46C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D47Cu);  if (depth < kMaxDepth) unit_009B(c, 233u, depth + 1u); else { c.pc = 0x0036D470u; return; } if (c.pc != 0x0014D47Cu) [[unlikely]] return; }
L_0014D47C:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D49C; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D49Cu);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0014D49Cu) [[unlikely]] return; }
L_0014D49C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D4C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D4F8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0014D4F8u) [[unlikely]] return; }
L_0014D4F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D530; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D508u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0014D508u) [[unlikely]] return; }
L_0014D508:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014D54C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D528u);  if (depth < kMaxDepth) unit_001C(c, 6u, depth + 1u); else { c.pc = 0x001700A8u; return; } if (c.pc != 0x0014D528u) [[unlikely]] return; }
L_0014D528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D54C; } }
L_0014D530:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D54Cu);  if (depth < kMaxDepth) unit_009B(c, 314u, depth + 1u); else { c.pc = 0x0036DF08u; return; } if (c.pc != 0x0014D54Cu) [[unlikely]] return; }
L_0014D54C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D570:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D5A8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0014D5A8u) [[unlikely]] return; }
L_0014D5A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D5E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D5B8u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0014D5B8u) [[unlikely]] return; }
L_0014D5B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014D5FC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D5D8u);  if (depth < kMaxDepth) unit_001C(c, 6u, depth + 1u); else { c.pc = 0x001700A8u; return; } if (c.pc != 0x0014D5D8u) [[unlikely]] return; }
L_0014D5D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D5FC; } }
L_0014D5E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D5FCu);  if (depth < kMaxDepth) unit_009B(c, 315u, depth + 1u); else { c.pc = 0x0036DFA0u; return; } if (c.pc != 0x0014D5FCu) [[unlikely]] return; }
L_0014D5FC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D650u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0014D650u) [[unlikely]] return; }
L_0014D650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D688; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D660u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0014D660u) [[unlikely]] return; }
L_0014D660:
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[2], 0u + 64u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014D6A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D680u);  if (depth < kMaxDepth) unit_001C(c, 6u, depth + 1u); else { c.pc = 0x001700A8u; return; } if (c.pc != 0x0014D680u) [[unlikely]] return; }
L_0014D680:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D6A0; } }
L_0014D688:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D6A0u);  if (depth < kMaxDepth) unit_009B(c, 325u, depth + 1u); else { c.pc = 0x0036E1E8u; return; } if (c.pc != 0x0014D6A0u) [[unlikely]] return; }
L_0014D6A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D6C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D6F0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0014D6F0u) [[unlikely]] return; }
L_0014D6F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014D710; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D710u);  if (depth < kMaxDepth) unit_009B(c, 328u, depth + 1u); else { c.pc = 0x0036E2A0u; return; } if (c.pc != 0x0014D710u) [[unlikely]] return; }
L_0014D710:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D730:
    set32(c.r[3], ld32((c.r[4].w[0] + 2420u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014D750; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 2424u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D75C; } }
L_0014D750:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D75C:
    set32(c.r[2], c.r[5].w[0] - c.r[3].w[0]);
    set32(c.r[3], 0u + 112u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 736u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D778:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 736u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
L_0014D798:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D7ACu);  if (depth < kMaxDepth) unit_009B(c, 334u, depth + 1u); else { c.pc = 0x0036E498u; return; } if (c.pc != 0x0014D7ACu) [[unlikely]] return; }
L_0014D7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D7C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014D7D8; } }
L_0014D7C0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 112u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014D798u | kUnwind; return; } goto L_0014D798; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014D7D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D7F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[16], c.r[5].w[0] << 16);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    set32(c.r[17], c.r[4].w[0] + 736u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D820u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014D820u) [[unlikely]] return; }
L_0014D820:
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D838u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014D838u) [[unlikely]] return; }
L_0014D838:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0014D89C; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D850u);  if (depth < kMaxDepth) unit_0087(c, 54u, depth + 1u); else { c.pc = 0x0031CD38u; return; } if (c.pc != 0x0014D850u) [[unlikely]] return; }
L_0014D850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D89C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D86Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0014D86Cu) [[unlikely]] return; }
L_0014D86C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014D89C; } }
L_0014D874:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D890; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D888u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0014D888u) [[unlikely]] return; }
L_0014D888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D89C; } }
L_0014D890:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014D8B4; } }
L_0014D89C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 112u);
    c.r[2].d[0] = c.r[18].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014D838u | kUnwind; return; } goto L_0014D838; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014D8B4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D8D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[5].w[0] << 16);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 16));
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D910u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014D910u) [[unlikely]] return; }
L_0014D910:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[19].w[0] + 736u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D928u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014D928u) [[unlikely]] return; }
L_0014D928:
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2420u)));
    c.budget -= 2;
L_0014D930:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014D974; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D948u);  if (depth < kMaxDepth) unit_009B(c, 367u, depth + 1u); else { c.pc = 0x0036EF18u; return; } if (c.pc != 0x0014D948u) [[unlikely]] return; }
L_0014D948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D974; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 2420u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014D974; } }
    c.r[2].d[0] = ld16((c.r[19].w[0] + 2420u));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 4;
L_0014D974:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 112u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[20], c.r[20].w[0] + c.r[21].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014D930u | kUnwind; return; } goto L_0014D930; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014D9C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D9E8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014D9E8u) [[unlikely]] return; }
L_0014D9E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014D9FCu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014D9FCu) [[unlikely]] return; }
L_0014D9FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DA10u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0014DA10u) [[unlikely]] return; }
L_0014DA10:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[16].w[0] + 2496u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DA84; } }
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 2500u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DA84; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DA54u);  if (depth < kMaxDepth) unit_0089(c, 93u, depth + 1u); else { c.pc = 0x00325280u; return; } if (c.pc != 0x0014DA54u) [[unlikely]] return; }
L_0014DA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014DA70; } }
    c.f[0] = ld32((c.r[16].w[0] + 2500u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DA84; } }
L_0014DA70:
    c.f[0] = ld32((c.r[16].w[0] + 2500u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DAB0; } }
L_0014DA84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 142u);
    set32(c.r[3], ld32((c.r[2].w[0] - 30380u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0014DAB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 2500u), c.f[20]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DAB4; } }
L_0014DAB0:
    c.f[0] = ld32((c.r[16].w[0] + 2496u));
    c.budget -= 1;
L_0014DAB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[16].w[0] + 2496u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 10960u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014DACC; } }
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_0014DACC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014DAF0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB18u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014DB18u) [[unlikely]] return; }
L_0014DB18:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB2Cu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014DB2Cu) [[unlikely]] return; }
L_0014DB2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB40u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x0014DB40u) [[unlikely]] return; }
L_0014DB40:
    c.f[20] = c.f[0];
    c.f[1] = ld32((c.r[16].w[0] + 2504u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DBB4; } }
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = ld32((c.r[16].w[0] + 2508u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DBB4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DB84u);  if (depth < kMaxDepth) unit_0089(c, 93u, depth + 1u); else { c.pc = 0x00325280u; return; } if (c.pc != 0x0014DB84u) [[unlikely]] return; }
L_0014DB84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014DBA0; } }
    c.f[0] = ld32((c.r[16].w[0] + 2508u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DBB4; } }
L_0014DBA0:
    c.f[0] = ld32((c.r[16].w[0] + 2508u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DBE0; } }
L_0014DBB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005F0000u);
    set32(c.r[4], 0u + 142u);
    set32(c.r[3], ld32((c.r[2].w[0] - 30380u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0014DBE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44610000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 2508u), c.f[20]);
    c.f[0] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DBE4; } }
L_0014DBE0:
    c.f[0] = ld32((c.r[16].w[0] + 2504u));
    c.budget -= 1;
L_0014DBE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[16].w[0] + 2504u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 10960u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014DBFC; } }
    st32((c.r[18].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_0014DBFC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014DC20:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[18].w[0] + 304u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[18].w[0] + 240u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC68u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014DC68u) [[unlikely]] return; }
L_0014DC68:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC74u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014DC74u) [[unlikely]] return; }
L_0014DC74:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[20] = c.f[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DC94u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014DC94u) [[unlikely]] return; }
L_0014DC94:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DCA0u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014DCA0u) [[unlikely]] return; }
L_0014DCA0:
    c.f[3] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DCD4; } }
    c.f[1] = c.f[2];
    c.budget -= 1;
L_0014DCD4:
    c.f[0] = fp::sub(c.f[3], c.f[20]);
    c.f[2] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DCF8; } }
    c.f[0] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DD0C; } }
L_0014DCF8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DD0C; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0014DD0C:
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DD44; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DD48; } }
L_0014DD44:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0014DD48:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DD5C; } }
    c.f[20] = c.f[3];
    c.budget -= 1;
L_0014DD5C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DD68u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014DD68u) [[unlikely]] return; }
L_0014DD68:
    c.f[1] = 0u;
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DD84; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014DD84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014DDD0; } }
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DDA0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0014DDA0u) [[unlikely]] return; }
L_0014DDA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DDB4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0014DDB4u) [[unlikely]] return; }
L_0014DDB4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DDC8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014DDC8u) [[unlikely]] return; }
L_0014DDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DDE0; } }
L_0014DDD0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DDE0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014DDE0u) [[unlikely]] return; }
L_0014DDE0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014DE10:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[18].w[0] + 320u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[6], c.r[18].w[0] + 256u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DE58u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014DE58u) [[unlikely]] return; }
L_0014DE58:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DE64u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014DE64u) [[unlikely]] return; }
L_0014DE64:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[20] = c.f[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DE84u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014DE84u) [[unlikely]] return; }
L_0014DE84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DE90u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014DE90u) [[unlikely]] return; }
L_0014DE90:
    c.f[3] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DEC4; } }
    c.f[1] = c.f[2];
    c.budget -= 1;
L_0014DEC4:
    c.f[0] = fp::sub(c.f[3], c.f[20]);
    c.f[2] = c.f[1] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DEE8; } }
    c.f[0] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DEFC; } }
L_0014DEE8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DEFC; } }
    c.f[0] = c.f[2];
    c.budget -= 1;
L_0014DEFC:
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DF34; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DF38; } }
L_0014DF34:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_0014DF38:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014DF4C; } }
    c.f[20] = c.f[3];
    c.budget -= 1;
L_0014DF4C:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DF58u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014DF58u) [[unlikely]] return; }
L_0014DF58:
    c.f[1] = 0u;
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0014DF74; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0014DF74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014DFC0; } }
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DF90u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0014DF90u) [[unlikely]] return; }
L_0014DF90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DFA4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0014DFA4u) [[unlikely]] return; }
L_0014DFA4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DFB8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014DFB8u) [[unlikely]] return; }
L_0014DFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014DFD0; } }
L_0014DFC0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014DFD0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014DFD0u) [[unlikely]] return; }
L_0014DFD0:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E000:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[20]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E028u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014E028u) [[unlikely]] return; }
L_0014E028:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E03Cu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014E03Cu) [[unlikely]] return; }
L_0014E03C:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E054u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014E054u) [[unlikely]] return; }
L_0014E054:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E060u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014E060u) [[unlikely]] return; }
L_0014E060:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[20] = ld32((c.r[16].w[0] + 584u));
    set32(c.r[2], ld32((c.r[3].w[0] + 10960u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014E080; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_0014E080:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014E0CC; } }
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0A8u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0014E0A8u) [[unlikely]] return; }
L_0014E0A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0B8u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014E0B8u) [[unlikely]] return; }
L_0014E0B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E0CCu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014E0CCu) [[unlikely]] return; }
L_0014E0CC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E0F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.f[22] = c.f[12];
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[21] = c.r[1].w[0];
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[20] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E16Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014E16Cu) [[unlikely]] return; }
L_0014E16C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E178u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014E178u) [[unlikely]] return; }
L_0014E178:
    c.f[12] = ld32((c.r[17].w[0] + 2572u));
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    fpu_div(c, 12u, c.f[12], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E18Cu);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0014E18Cu) [[unlikely]] return; }
L_0014E18C:
    c.f[12] = fp::mul(c.f[0], c.f[22]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E19Cu);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014E19Cu) [[unlikely]] return; }
L_0014E19C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1B0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014E1B0u) [[unlikely]] return; }
L_0014E1B0:
    c.f[12] = ld32((c.r[17].w[0] + 2572u));
    c.f[12] = fp::mul(c.f[12], c.f[21]);
    fpu_div(c, 12u, c.f[12], c.f[20]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1C4u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x0014E1C4u) [[unlikely]] return; }
L_0014E1C4:
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E1E4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014E1E4u) [[unlikely]] return; }
L_0014E1E4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E230u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x0014E230u) [[unlikely]] return; }
L_0014E230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E2A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 2604u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014E2A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 12556u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E2A0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[3].w[0] + 10960u)));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E29C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014E2A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 2420u)));
    set32(c.r[4], 0u + 112u);
    set32(c.r[2], ld32((c.r[16].w[0] + 2416u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 812u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014E2A0; } }
L_0014E29C:
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_0014E2A0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E2C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E2DCu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0014E2DCu) [[unlikely]] return; }
L_0014E2DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E2ECu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014E2ECu) [[unlikely]] return; }
L_0014E2EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E300u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014E300u) [[unlikely]] return; }
L_0014E300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014E36C; } }
L_0014E308:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0014E36C; } }
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014E36C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E324u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014E324u) [[unlikely]] return; }
L_0014E324:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E338u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014E338u) [[unlikely]] return; }
L_0014E338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E340u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014E340u) [[unlikely]] return; }
L_0014E340:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E358u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014E358u) [[unlikely]] return; }
L_0014E358:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E36Cu);  if (depth < kMaxDepth) unit_008A(c, 267u, depth + 1u); else { c.pc = 0x0032B7E8u; return; } if (c.pc != 0x0014E36Cu) [[unlikely]] return; }
L_0014E36C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E388:
    set32(c.r[29], c.r[29].w[0] - 800u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 592u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 784u), c.f[26]);
    st32((c.r[29].w[0] + 776u), c.f[25]);
    st32((c.r[29].w[0] + 768u), c.f[24]);
    st32((c.r[29].w[0] + 760u), c.f[23]);
    st32((c.r[29].w[0] + 752u), c.f[22]);
    st32((c.r[29].w[0] + 744u), c.f[21]);
    st32((c.r[29].w[0] + 736u), c.f[20]);
    set32(c.r[4], ld32((c.r[2].w[0] - 17248u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E3E8u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x0014E3E8u) [[unlikely]] return; }
L_0014E3E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014E650; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E418u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0014E418u) [[unlikely]] return; }
L_0014E418:
    c.f[26] = 0u;
    set32(c.r[19], c.r[29].w[0] + 560u);
    set32(c.r[18], c.r[29].w[0] + 528u);
    set32(c.r[21], c.r[29].w[0] + 544u);
    set32(c.r[22], c.r[16].w[0] + 28u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 6;
L_0014E430:
    set32(c.r[3], ld32((c.r[22].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014E630; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[3].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E460; } }
    c.f[20] = ld32((c.r[3].w[0] + 32u));
    c.f[21] = ld32((c.r[3].w[0] + 40u));
    c.budget -= 2;
L_0014E460:
    c.f[25] = ld32((c.r[3].w[0] + 24u));
    c.f[22] = ld32((c.r[3].w[0]));
    c.f[23] = ld32((c.r[3].w[0] + 8u));
    c.f[24] = ld32((c.r[3].w[0] + 16u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E478u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0014E478u) [[unlikely]] return; }
L_0014E478:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E484u);  if (depth < kMaxDepth) unit_009B(c, 434u, depth + 1u); else { c.pc = 0x0036F848u; return; } if (c.pc != 0x0014E484u) [[unlikely]] return; }
L_0014E484:
    set32(c.r[16], c.r[29].w[0] + 576u);
    set32(c.r[17], c.r[29].w[0] + 580u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014E53C; } }
    c.f[14] = c.f[22];
    c.f[15] = c.f[23];
    c.f[16] = c.f[24];
    c.f[17] = c.f[25];
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E4BCu);  if (depth < kMaxDepth) unit_008A(c, 6u, depth + 1u); else { c.pc = 0x00328278u; return; } if (c.pc != 0x0014E4BCu) [[unlikely]] return; }
L_0014E4BC:
    c.f[0] = ld32((c.r[29].w[0] + 576u));
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.f[1] = ld32((c.r[29].w[0] + 580u));
    set32(c.r[6], c.r[29].w[0] + 528u);
    st32((c.r[29].w[0] + 544u), c.f[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 552u), c.f[1]);
    st32((c.r[29].w[0] + 548u), 0u);
    st32((c.r[29].w[0] + 556u), 0u);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 544u), c.f[20]);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 548u), 0u);
    st32((c.r[29].w[0] + 552u), c.f[21]);
    st32((c.r[29].w[0] + 556u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E500u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014E500u) [[unlikely]] return; }
L_0014E500:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E50Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x0014E50Cu) [[unlikely]] return; }
L_0014E50C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A70000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E524u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x0014E524u) [[unlikely]] return; }
L_0014E524:
    c.f[0] = ld32((c.r[29].w[0] + 560u));
    c.f[1] = ld32((c.r[29].w[0] + 568u));
    c.f[24] = fp::add(c.f[24], c.f[0]);
    c.f[25] = fp::add(c.f[25], c.f[1]);
    c.f[22] = fp::add(c.f[22], c.f[0]);
    c.f[23] = fp::add(c.f[23], c.f[1]);
    c.budget -= 6;
L_0014E53C:
    c.f[14] = ld32((c.r[20].w[0]));
    c.f[12] = c.f[20];
    c.f[15] = ld32((c.r[20].w[0] + 8u));
    c.f[13] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[16] = c.f[22];
    c.f[17] = c.f[23];
    c.f[18] = c.f[24];
    c.f[19] = c.f[25];
    set32(c.r[6], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E570u);  if (depth < kMaxDepth) unit_008A(c, 1u, depth + 1u); else { c.pc = 0x00328000u; return; } if (c.pc != 0x0014E570u) [[unlikely]] return; }
L_0014E570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014E630; } }
    c.f[12] = ld32((c.r[20].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = ld32((c.r[20].w[0] + 8u));
    c.f[13] = c.f[26];
    c.f[15] = c.f[26];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E594u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014E594u) [[unlikely]] return; }
L_0014E594:
    c.f[12] = c.f[22];
    c.f[14] = c.f[23];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = c.f[26];
    c.f[15] = c.f[26];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5B0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014E5B0u) [[unlikely]] return; }
L_0014E5B0:
    c.f[14] = c.f[25];
    c.f[13] = c.f[26];
    c.f[15] = c.f[26];
    c.f[12] = c.f[24];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5CCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014E5CCu) [[unlikely]] return; }
L_0014E5CC:
    set32(c.r[7], c.r[29].w[0] + 584u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5E4u);  if (depth < kMaxDepth) unit_008A(c, 101u, depth + 1u); else { c.pc = 0x00329970u; return; } if (c.pc != 0x0014E5E4u) [[unlikely]] return; }
L_0014E5E4:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E5F8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014E5F8u) [[unlikely]] return; }
L_0014E5F8:
    c.f[12] = ld32((c.r[29].w[0] + 584u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E60Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0014E60Cu) [[unlikely]] return; }
L_0014E60C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E620u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014E620u) [[unlikely]] return; }
L_0014E620:
    c.f[0] = ld32((c.r[29].w[0] + 528u));
    c.f[1] = ld32((c.r[29].w[0] + 536u));
    st32((c.r[20].w[0]), c.f[0]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    c.budget -= 4;
L_0014E630:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[23], c.r[23].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[22], c.r[22].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E430u | kUnwind; return; } goto L_0014E430; } }
L_0014E650:
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 592u));
    c.f[26] = ld32((c.r[29].w[0] + 784u));
    c.f[25] = ld32((c.r[29].w[0] + 776u));
    c.f[24] = ld32((c.r[29].w[0] + 768u));
    c.f[23] = ld32((c.r[29].w[0] + 760u));
    c.f[22] = ld32((c.r[29].w[0] + 752u));
    c.f[21] = ld32((c.r[29].w[0] + 744u));
    c.f[20] = ld32((c.r[29].w[0] + 736u));
    set32(c.r[29], c.r[29].w[0] + 800u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E6B8u);  if (depth < kMaxDepth) unit_009B(c, 361u, depth + 1u); else { c.pc = 0x0036EDD8u; return; } if (c.pc != 0x0014E6B8u) [[unlikely]] return; }
L_0014E6B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3CED0000u);
    c.r[1].d[0] = c.r[1].d[0] | 37224ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[3], 0u + 9u);
    st32((c.r[16].w[0] + 72u), c.f[0]);
    set32(c.r[2], c.r[16].w[0] + 64u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 12;
L_0014E6E8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014E6E8u | kUnwind; return; } goto L_0014E6E8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[2] = c.r[1].w[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 96u), c.f[2]);
    st32((c.r[16].w[0] + 100u), c.f[1]);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.f[2]);
    st32((c.r[16].w[0] + 108u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E748:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E758u);  if (depth < kMaxDepth) unit_009B(c, 362u, depth + 1u); else { c.pc = 0x0036EDF8u; return; } if (c.pc != 0x0014E758u) [[unlikely]] return; }
L_0014E758:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E768:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0014E79C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014E79C; } }
    set32(c.r[2], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 28u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E79C; } }
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0014E79C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E7A8:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.f[0] = ld32((c.r[7].w[0] + 8u));
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[6].w[0] + 8u), c.f[0]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E7F8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 780u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E9D8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 748u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014E83C; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E834u);  if (depth < kMaxDepth) unit_0013(c, 335u, depth + 1u); else { c.pc = 0x0014F028u; return; } if (c.pc != 0x0014E834u) [[unlikely]] return; }
L_0014E834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014E870; } }
L_0014E83C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014E860; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E858u);  if (depth < kMaxDepth) unit_0013(c, 341u, depth + 1u); else { c.pc = 0x0014F100u; return; } if (c.pc != 0x0014E858u) [[unlikely]] return; }
L_0014E858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014E870; } }
L_0014E860:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E870u);  if (depth < kMaxDepth) unit_0013(c, 345u, depth + 1u); else { c.pc = 0x0014F220u; return; } if (c.pc != 0x0014E870u) [[unlikely]] return; }
L_0014E870:
    set32(c.r[2], ld32((c.r[18].w[0] + 772u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E90C; } }
    set32(c.r[17], c.r[29].w[0] + 32u);
    set32(c.r[16], c.r[18].w[0] + 448u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E898u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0014E898u) [[unlikely]] return; }
L_0014E898:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E8A8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014E8A8u) [[unlikely]] return; }
L_0014E8A8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E8B4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0014E8B4u) [[unlikely]] return; }
L_0014E8B4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014E8EC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 752u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014E8EC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 772u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014E90C; } }
L_0014E8EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E90Cu);  if (depth < kMaxDepth) unit_009B(c, 289u, depth + 1u); else { c.pc = 0x0036DD18u; return; } if (c.pc != 0x0014E90Cu) [[unlikely]] return; }
L_0014E90C:
    set32(c.r[16], c.r[18].w[0] + 320u);
    set32(c.r[4], c.r[18].w[0] + 256u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[18].w[0] + 336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E924u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014E924u) [[unlikely]] return; }
L_0014E924:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E934u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014E934u) [[unlikely]] return; }
L_0014E934:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E948u);  if (depth < kMaxDepth) unit_0013(c, 348u, depth + 1u); else { c.pc = 0x0014F2C0u; return; } if (c.pc != 0x0014E948u) [[unlikely]] return; }
L_0014E948:
    set32(c.r[2], ld32((c.r[18].w[0] + 772u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014E978; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E974u);  if (depth < kMaxDepth) unit_008A(c, 229u, depth + 1u); else { c.pc = 0x0032AF60u; return; } if (c.pc != 0x0014E974u) [[unlikely]] return; }
L_0014E974:
    st32((c.r[29].w[0] + 28u), 0u);
    c.budget -= 1;
L_0014E978:
    set32(c.r[4], c.r[18].w[0] + 272u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E988u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014E988u) [[unlikely]] return; }
L_0014E988:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014E998u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014E998u) [[unlikely]] return; }
L_0014E998:
    set32(c.r[3], ld32((c.r[18].w[0] + 748u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014E9C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17280u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 28u)));
    st32((c.r[18].w[0] + 752u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014E9D8; } }
L_0014E9C0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0014E9D8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 752u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 752u), c.r[2].w[0]);
    c.budget -= 3;
L_0014E9D8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014E9F8:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 264u), c.f[21]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    set32(c.r[2], ld32((c.r[20].w[0] + 780u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014ECDC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014EAC4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 748u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0014EA5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EA54u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0014EA54u) [[unlikely]] return; }
L_0014EA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014EAC4; } }
L_0014EA5C:
    set32(c.r[6], ld32((c.r[20].w[0] + 748u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0014EAA0; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 752u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014EAC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17280u)));
    set32(c.r[5], ld32((c.r[3].w[0] - 17284u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0014EAC4; } }
L_0014EAA0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_0014ECDC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 756u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 752u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014ECDC; } }
L_0014EAC4:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[20].w[0] + 776u)));
    st32((c.r[20].w[0] + 764u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 752u), 0u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0014ECAC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[20] = ld32((c.r[20].w[0] + 340u));
    set32(c.r[18], c.r[20].w[0] + 320u);
    c.f[21] = ld32((c.r[20].w[0] + 336u));
    set32(c.r[19], c.r[20].w[0] + 304u);
    c.f[20] = fp::mul(c.f[20], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::mul(c.f[21], c.f[1]);
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[21] = fp::mul(c.f[21], c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB1Cu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0014EB1Cu) [[unlikely]] return; }
L_0014EB1C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB30u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x0014EB30u) [[unlikely]] return; }
L_0014EB30:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB44u);  if (depth < kMaxDepth) unit_0045(c, 38u, depth + 1u); else { c.pc = 0x002148A0u; return; } if (c.pc != 0x0014EB44u) [[unlikely]] return; }
L_0014EB44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    mmi::por(c.r[2], c.r[0], c.r[0]);
    set32(c.r[16], c.r[29].w[0] + 80u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB70u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x0014EB70u) [[unlikely]] return; }
L_0014EB70:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB88u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0014EB88u) [[unlikely]] return; }
L_0014EB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EB90u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0014EB90u) [[unlikely]] return; }
L_0014EB90:
    set32(c.r[16], c.r[29].w[0] + 96u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EBA8u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0014EBA8u) [[unlikely]] return; }
L_0014EBA8:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EBC0u);  if (depth < kMaxDepth) unit_008B(c, 132u, depth + 1u); else { c.pc = 0x0032D028u; return; } if (c.pc != 0x0014EBC0u) [[unlikely]] return; }
L_0014EBC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EBD0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014EBD0u) [[unlikely]] return; }
L_0014EBD0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EBE0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0014EBE0u) [[unlikely]] return; }
L_0014EBE0:
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EBF0u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x0014EBF0u) [[unlikely]] return; }
L_0014EBF0:
    set32(c.r[17], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3AC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + 336u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EC10u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0014EC10u) [[unlikely]] return; }
L_0014EC10:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EC20u);  if (depth < kMaxDepth) unit_009B(c, 254u, depth + 1u); else { c.pc = 0x0036D6C8u; return; } if (c.pc != 0x0014EC20u) [[unlikely]] return; }
L_0014EC20:
    set32(c.r[4], c.r[20].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EC30u);  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032D938u; return; } if (c.pc != 0x0014EC30u) [[unlikely]] return; }
L_0014EC30:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EC3Cu);  if (depth < kMaxDepth) unit_008B(c, 213u, depth + 1u); else { c.pc = 0x0032DEF0u; return; } if (c.pc != 0x0014EC3Cu) [[unlikely]] return; }
L_0014EC3C:
    ldl(c.r[3], (c.r[29].w[0] + 135u));
    ldr(c.r[3], (c.r[29].w[0] + 128u));
    ldl(c.r[4], (c.r[29].w[0] + 143u));
    ldr(c.r[4], (c.r[29].w[0] + 136u));
    sdl(c.r[3], (c.r[29].w[0] + 151u));
    sdr(c.r[3], (c.r[29].w[0] + 144u));
    sdl(c.r[4], (c.r[29].w[0] + 159u));
    sdr(c.r[4], (c.r[29].w[0] + 152u));
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[5], 0u + 2u);
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[2] = ld32((c.r[29].w[0] + 148u));
    c.f[3] = ld32((c.r[29].w[0] + 152u));
    c.f[0] = ld32((c.r[29].w[0] + 156u));
    st32((c.r[20].w[0] + 352u), c.f[1]);
    st32((c.r[20].w[0] + 364u), c.f[0]);
    st32((c.r[20].w[0] + 356u), c.f[2]);
    st32((c.r[20].w[0] + 360u), c.f[3]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EC8Cu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014EC8Cu) [[unlikely]] return; }
L_0014EC8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014EC9C; } }
L_0014EC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EC9Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0014EC9Cu) [[unlikely]] return; }
L_0014EC9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ECACu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014ECACu) [[unlikely]] return; }
L_0014ECAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ECB4u);  if (depth < kMaxDepth) unit_007A(c, 265u, depth + 1u); else { c.pc = 0x002EB940u; return; } if (c.pc != 0x0014ECB4u) [[unlikely]] return; }
L_0014ECB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014ECDC; } }
L_0014ECBC:
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ECCCu);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x0014ECCCu) [[unlikely]] return; }
L_0014ECCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0014EC94u | kUnwind; return; } goto L_0014EC94; } }
L_0014ECD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014ECDCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0014ECDCu) [[unlikely]] return; }
L_0014ECDC:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    c.f[21] = ld32((c.r[29].w[0] + 264u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED08:
    st32((c.r[4].w[0] + 740u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED18:
    set32(c.r[2], ld32((c.r[4].w[0] + 740u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED28:
    set32(c.r[2], ld32((c.r[4].w[0] + 744u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED38:
    set32(c.r[2], ld32((c.r[4].w[0] + 748u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED48:
    st32((c.r[4].w[0] + 752u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED58:
    st32((c.r[4].w[0] + 772u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED68:
    set32(c.r[2], ld32((c.r[4].w[0] + 772u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED78:
    st32((c.r[4].w[0] + 776u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED88:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014ED98:
    st32((c.r[4].w[0] + 744u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EDA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 752u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EDB8:
    st32((c.r[4].w[0] + 756u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EDC8:
    set32(c.r[2], ld32((c.r[4].w[0] + 756u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EDD8:
    st32((c.r[4].w[0] + 760u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EDE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 760u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EDF8:
    st32((c.r[4].w[0] + 764u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EE08:
    set32(c.r[2], ld32((c.r[4].w[0] + 764u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EE18:
    st32((c.r[4].w[0] + 768u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EE28:
    set32(c.r[2], ld32((c.r[4].w[0] + 768u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EE38:
    set32(c.r[2], ld32((c.r[4].w[0] + 776u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EE48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EE60u);  if (depth < kMaxDepth) unit_009A(c, 308u, depth + 1u); else { c.pc = 0x0036BE78u; return; } if (c.pc != 0x0014EE60u) [[unlikely]] return; }
L_0014EE60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 18072u);
    st32((c.r[16].w[0] + 776u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 724u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 736u), 0u);
    st32((c.r[16].w[0] + 740u), 0u);
    st32((c.r[16].w[0] + 744u), 0u);
    st32((c.r[16].w[0] + 748u), 0u);
    st32((c.r[16].w[0] + 752u), 0u);
    st32((c.r[16].w[0] + 756u), 0u);
    st32((c.r[16].w[0] + 760u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 764u), 0u);
    st32((c.r[16].w[0] + 768u), 0u);
    st32((c.r[16].w[0] + 772u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 780u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EEB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 18072u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EEE8u);  if (depth < kMaxDepth) unit_009B(c, 233u, depth + 1u); else { c.pc = 0x0036D470u; return; } if (c.pc != 0x0014EEE8u) [[unlikely]] return; }
L_0014EEE8:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0014EF08; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EF08u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0014EF08u) [[unlikely]] return; }
L_0014EF08:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EF20:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 780u), 0u);
    st32((c.r[4].w[0] + 776u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 736u), 0u);
    st32((c.r[4].w[0] + 744u), 0u);
    st32((c.r[4].w[0] + 752u), 0u);
    st32((c.r[4].w[0] + 756u), 0u);
    st32((c.r[4].w[0] + 760u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 764u), 0u);
    st32((c.r[4].w[0] + 768u), 0u);
    st32((c.r[4].w[0] + 772u), c.r[2].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014EF58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 736u), 0u);
    st32((c.r[16].w[0] + 744u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 752u), 0u);
    st32((c.r[16].w[0] + 748u), c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0014EFA0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EF98u);  if (depth < kMaxDepth) unit_006C(c, 255u, depth + 1u); else { c.pc = 0x002B2B58u; return; } if (c.pc != 0x0014EF98u) [[unlikely]] return; }
L_0014EF98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014EFBC; } }
L_0014EFA0:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0014EFC0; } }
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014EFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014EFBCu);  if (depth < kMaxDepth) unit_007A(c, 253u, depth + 1u); else { c.pc = 0x002EB708u; return; } if (c.pc != 0x0014EFBCu) [[unlikely]] return; }
L_0014EFBC:
    st32((c.r[16].w[0] + 756u), c.r[2].w[0]);
    c.budget -= 1;
L_0014EFC0:
    st32((c.r[16].w[0] + 764u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[16].w[0] + 780u), 0u);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[16].w[0] + 320u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[16].w[0] + 324u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[16].w[0] + 328u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 144u));
    st32((c.r[16].w[0] + 336u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[16].w[0] + 340u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 152u));
    st32((c.r[16].w[0] + 344u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014F018:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 736u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014F028:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.budget -= 6;
L_0014F040:
    set32(c.r[18], c.r[2].w[0] + 12320u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F05Cu);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0014F05Cu) [[unlikely]] return; }
L_0014F05C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0014F0DC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F070u);  if (depth < kMaxDepth) unit_006C(c, 260u, depth + 1u); else { c.pc = 0x002B2BF0u; return; } if (c.pc != 0x0014F070u) [[unlikely]] return; }
L_0014F070:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_0014F0DC; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0] + 744u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F090u);  if (depth < kMaxDepth) unit_006C(c, 243u, depth + 1u); else { c.pc = 0x002B29B8u; return; } if (c.pc != 0x0014F090u) [[unlikely]] return; }
L_0014F090:
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 8u));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4800000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[7], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F0BCu);  if (depth < kMaxDepth) unit_007A(c, 176u, depth + 1u); else { c.pc = 0x002EA2A8u; return; } if (c.pc != 0x0014F0BCu) [[unlikely]] return; }
L_0014F0BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[19].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[19].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_0014F0DC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014F100:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[15] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] - 17280u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[20] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F14Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F14Cu) [[unlikely]] return; }
L_0014F14C:
    set32(c.r[2], ld32((c.r[16].w[0] - 17280u)));
    c.f[13] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45400000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = ld32((c.r[2].w[0] + 148u));
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F16Cu);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x0014F16Cu) [[unlikely]] return; }
L_0014F16C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    c.f[15] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[15]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014F194; } }
    c.f[15] = fp::sub(c.f[15], c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014F1B4; } }
L_0014F194:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[15]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014F1B4; } }
    c.f[15] = fp::add(c.f[15], c.f[20]);
    c.budget -= 1;
L_0014F1B4:
    set32(c.r[2], ld32((c.r[16].w[0] - 17280u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 744u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 752u)));
    c.f[12] = ld32((c.r[29].w[0]));
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.f[14] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F1DCu);  if (depth < kMaxDepth) unit_007A(c, 255u, depth + 1u); else { c.pc = 0x002EB750u; return; } if (c.pc != 0x0014F1DCu) [[unlikely]] return; }
L_0014F1DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[17].w[0]), c.f[0]);
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[17].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[17].w[0] + 8u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014F220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.f[20] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F25Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F25Cu) [[unlikely]] return; }
L_0014F25C:
    set32(c.r[6], ld32((c.r[17].w[0] + 744u)));
    c.f[15] = c.f[20];
    set32(c.r[4], ld32((c.r[17].w[0] + 752u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 4u));
    c.f[14] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F280u);  if (depth < kMaxDepth) unit_007A(c, 255u, depth + 1u); else { c.pc = 0x002EB750u; return; } if (c.pc != 0x0014F280u) [[unlikely]] return; }
L_0014F280:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[16].w[0] + 8u), c.f[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014F2C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[2].w[0] - 17840u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[6].w[0] + 144u));
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 748u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0014F364; } }
    c.f[0] = ld32((c.r[6].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4FF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    st32((c.r[5].w[0] + 4u), c.f[2]);
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014F328; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 5;
L_0014F328:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0014F36C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0014F368; } }
L_0014F364:
    c.f[0] = ld32((c.r[6].w[0] + 148u));
    c.budget -= 1;
L_0014F368:
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 1;
L_0014F36C:
    set32(c.r[2], c.r[7].w[0] - 17840u);
    c.f[0] = ld32((c.r[2].w[0] + 152u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014F380:
    set32(c.r[2], ld32((c.r[4].w[0] + 780u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    st32((c.r[4].w[0] + 780u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0014F3A4; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014F3A4:
    st32((c.r[4].w[0] + 780u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0014F3B8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 64u), c.f[22]);
    st32((c.r[29].w[0] + 56u), c.f[21]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F3E4u);  if (depth < kMaxDepth) unit_0012(c, 198u, depth + 1u); else { c.pc = 0x00149660u; return; } if (c.pc != 0x0014F3E4u) [[unlikely]] return; }
L_0014F3E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42440000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + 18488u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[3] = c.r[1].w[0];
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], 0u + 60u);
    st32((c.r[17].w[0] + 2672u), c.f[1]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[17].w[0] + 2768u), c.f[3]);
    st32((c.r[17].w[0] + 2776u), c.f[2]);
    st32((c.r[17].w[0] + 2824u), c.f[0]);
    st32((c.r[17].w[0] + 724u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 2728u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 2732u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[5] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2624u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 2848u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 2720u), 0u);
    st32((c.r[17].w[0] + 2724u), 0u);
    st32((c.r[17].w[0] + 2772u), 0u);
    st32((c.r[17].w[0] + 2780u), 0u);
    st32((c.r[17].w[0] + 2784u), 0u);
    st32((c.r[17].w[0] + 2788u), 0u);
    st32((c.r[17].w[0] + 2792u), 0u);
    st32((c.r[17].w[0] + 2796u), 0u);
    st32((c.r[17].w[0] + 2800u), 0u);
    st32((c.r[17].w[0] + 2804u), 0u);
    st32((c.r[17].w[0] + 2808u), 0u);
    st32((c.r[17].w[0] + 2812u), 0u);
    st32((c.r[17].w[0] + 2816u), 0u);
    st32((c.r[17].w[0] + 2820u), 0u);
    st32((c.r[17].w[0] + 2828u), 0u);
    st32((c.r[17].w[0] + 2832u), 0u);
    st32((c.r[17].w[0] + 2836u), 0u);
    st32((c.r[17].w[0] + 2840u), 0u);
    st32((c.r[17].w[0] + 2844u), 0u);
    st32((c.r[17].w[0] + 2852u), 0u);
    st32((c.r[17].w[0] + 2856u), 0u);
    st32((c.r[17].w[0] + 2860u), 0u);
    st32((c.r[17].w[0] + 2864u), 0u);
    st32((c.r[17].w[0] + 2868u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC47A0000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[4] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2872u), 0u);
    st32((c.r[17].w[0] + 2876u), c.f[0]);
    st32((c.r[17].w[0] + 2880u), c.f[1]);
    st32((c.r[17].w[0] + 2888u), c.f[2]);
    st32((c.r[17].w[0] + 2900u), c.f[5]);
    st32((c.r[17].w[0] + 3408u), c.f[3]);
    st32((c.r[17].w[0] + 3412u), c.f[4]);
    st32((c.r[17].w[0] + 2884u), c.f[5]);
    st32((c.r[17].w[0] + 2892u), 0u);
    st32((c.r[17].w[0] + 2896u), 0u);
    st32((c.r[17].w[0] + 2904u), 0u);
    st16((c.r[17].w[0] + 3392u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 3396u), 0u);
    st16((c.r[17].w[0] + 3400u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 3402u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 3404u), 0u);
    st16((c.r[17].w[0] + 3496u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 3500u), 0u);
    set32(c.r[2], ld32((c.r[6].w[0] + 12228u)));
    set32(c.r[4], c.r[2].w[0] - 169u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 86;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0014(c, 53u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 18336u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0014C000u < 16384u) { entry = entries_0013[(t - 0x0014C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0014F558:
    c.f[20] = 0u;
    set32(c.r[4], c.r[17].w[0] + 2736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7610000u);
    c.r[1].d[0] = c.r[1].d[0] | 51200ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7430000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5B20000u);
    c.r[1].d[0] = c.r[1].d[0] | 8192ull;
    c.f[14] = c.r[1].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F590u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F590u) [[unlikely]] return; }
L_0014F590:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7370000u);
    c.r[1].d[0] = c.r[1].d[0] | 38912ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45860000u);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    c.f[14] = c.r[1].w[0];
    c.f[13] = c.f[20];
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0014(c, 55u, depth); } }
L_0014F5B8:
    c.f[20] = 0u;
    set32(c.r[4], c.r[17].w[0] + 2736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7620000u);
    c.r[1].d[0] = c.r[1].d[0] | 36864ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7430000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F5F0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F5F0u) [[unlikely]] return; }
L_0014F5F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC72F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 51200ull;
    c.f[12] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[13] = c.r[1].w[0];
    c.f[14] = c.f[21];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F620u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F620u) [[unlikely]] return; }
L_0014F620:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[13] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46840000u);
    c.r[1].d[0] = c.r[1].d[0] | 53248ull;
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[15] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46EA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x449C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x451C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC69C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45670000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[11] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2768u), c.f[0]);
    st32((c.r[17].w[0] + 2784u), c.f[20]);
    st32((c.r[17].w[0] + 2796u), c.f[1]);
    st32((c.r[17].w[0] + 2804u), c.f[2]);
    st32((c.r[17].w[0] + 2812u), c.f[14]);
    st32((c.r[17].w[0] + 2816u), c.f[3]);
    st32((c.r[17].w[0] + 2820u), c.f[4]);
    st32((c.r[17].w[0] + 2828u), c.f[21]);
    st32((c.r[17].w[0] + 2832u), c.f[5]);
    st32((c.r[17].w[0] + 2836u), c.f[6]);
    st32((c.r[17].w[0] + 2840u), c.f[7]);
    st32((c.r[17].w[0] + 2844u), c.f[13]);
    st32((c.r[17].w[0] + 2864u), c.f[15]);
    st32((c.r[17].w[0] + 2868u), c.f[8]);
    st32((c.r[17].w[0] + 2872u), c.f[9]);
    st32((c.r[17].w[0] + 2884u), c.f[12]);
    st32((c.r[17].w[0] + 2888u), c.f[10]);
    st32((c.r[17].w[0] + 2892u), c.f[11]);
    st32((c.r[17].w[0] + 2772u), c.f[12]);
    st32((c.r[17].w[0] + 2776u), c.f[13]);
    st32((c.r[17].w[0] + 2788u), c.f[14]);
    st32((c.r[17].w[0] + 2808u), c.f[21]);
    st32((c.r[17].w[0] + 2860u), c.f[15]);
    c.budget -= 67;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0014(c, 58u, depth); } }
L_0014F72C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[21] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2736u);
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7430000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC6140000u);
    c.r[1].d[0] = c.r[1].d[0] | 28672ull;
    c.f[14] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F768u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F768u) [[unlikely]] return; }
L_0014F768:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x451C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[22] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46880000u);
    c.r[1].d[0] = c.r[1].d[0] | 47104ull;
    c.f[12] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x456D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[13] = c.r[1].w[0];
    c.f[14] = c.f[22];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F7A0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F7A0u) [[unlikely]] return; }
L_0014F7A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[11] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46840000u);
    c.r[1].d[0] = c.r[1].d[0] | 53248ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[13] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46EA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x449C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC69C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45670000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[10] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2768u), c.f[0]);
    st32((c.r[17].w[0] + 2784u), c.f[20]);
    st32((c.r[17].w[0] + 2796u), c.f[1]);
    st32((c.r[17].w[0] + 2804u), c.f[2]);
    st32((c.r[17].w[0] + 2812u), c.f[12]);
    st32((c.r[17].w[0] + 2816u), c.f[3]);
    st32((c.r[17].w[0] + 2820u), c.f[4]);
    st32((c.r[17].w[0] + 2828u), c.f[13]);
    st32((c.r[17].w[0] + 2832u), c.f[22]);
    st32((c.r[17].w[0] + 2836u), c.f[5]);
    st32((c.r[17].w[0] + 2840u), c.f[6]);
    st32((c.r[17].w[0] + 2844u), c.f[11]);
    st32((c.r[17].w[0] + 2864u), c.f[14]);
    st32((c.r[17].w[0] + 2868u), c.f[7]);
    st32((c.r[17].w[0] + 2872u), c.f[8]);
    st32((c.r[17].w[0] + 2884u), c.f[21]);
    st32((c.r[17].w[0] + 2888u), c.f[9]);
    st32((c.r[17].w[0] + 2892u), c.f[10]);
    st32((c.r[17].w[0] + 2772u), c.f[21]);
    st32((c.r[17].w[0] + 2776u), c.f[11]);
    st32((c.r[17].w[0] + 2788u), c.f[12]);
    st32((c.r[17].w[0] + 2808u), c.f[13]);
    st32((c.r[17].w[0] + 2860u), c.f[14]);
    c.budget -= 63;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0014(c, 58u, depth); } }
L_0014F89C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2688u);
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44790000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4490000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x441E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2672u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F8E0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F8E0u) [[unlikely]] return; }
L_0014F8E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4AB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[14] = c.r[1].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F90Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F90Cu) [[unlikely]] return; }
L_0014F90C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7430000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F93Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F93Cu) [[unlikely]] return; }
L_0014F93C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45DA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[22] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[21] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x462F0000u);
    c.f[12] = c.r[1].w[0];
    c.f[13] = c.f[22];
    c.f[14] = c.f[21];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014F974u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014F974u) [[unlikely]] return; }
L_0014F974:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[13] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46840000u);
    c.r[1].d[0] = c.r[1].d[0] | 53248ull;
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[15] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x449C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x451C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC69C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45670000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    c.f[11] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2768u), c.f[21]);
    st32((c.r[17].w[0] + 2784u), c.f[20]);
    st32((c.r[17].w[0] + 2796u), c.f[0]);
    st32((c.r[17].w[0] + 2804u), c.f[1]);
    st32((c.r[17].w[0] + 2812u), c.f[14]);
    st32((c.r[17].w[0] + 2816u), c.f[22]);
    st32((c.r[17].w[0] + 2820u), c.f[2]);
    st32((c.r[17].w[0] + 2828u), c.f[15]);
    st32((c.r[17].w[0] + 2832u), c.f[3]);
    st32((c.r[17].w[0] + 2836u), c.f[4]);
    st32((c.r[17].w[0] + 2840u), c.f[5]);
    st32((c.r[17].w[0] + 2844u), c.f[13]);
    st32((c.r[17].w[0] + 2864u), c.f[16]);
    st32((c.r[17].w[0] + 2868u), c.f[6]);
    st32((c.r[17].w[0] + 2872u), c.f[7]);
    st32((c.r[17].w[0] + 2884u), c.f[12]);
    st32((c.r[17].w[0] + 2888u), c.f[8]);
    st32((c.r[17].w[0] + 2892u), c.f[9]);
    st32((c.r[17].w[0] + 3408u), c.f[10]);
    st32((c.r[17].w[0] + 3412u), c.f[11]);
    c.budget -= 64;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0014(c, 57u, depth); } }
L_0014FA74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2688u);
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44790000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4490000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x441E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2672u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FAB8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FAB8u) [[unlikely]] return; }
L_0014FAB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4AB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[14] = c.r[1].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FAE4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FAE4u) [[unlikely]] return; }
L_0014FAE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x478F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 36352ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7430000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FB18u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FB18u) [[unlikely]] return; }
L_0014FB18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x47A20000u);
    c.r[1].d[0] = c.r[1].d[0] | 7168ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5B50000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45480000u);
    c.f[14] = c.r[1].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FB48u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FB48u) [[unlikely]] return; }
L_0014FB48:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[15] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46840000u);
    c.r[1].d[0] = c.r[1].d[0] | 53248ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[17] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[18] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45DA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x449C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x451C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC69C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45670000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[11] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    c.f[13] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2768u), c.f[0]);
    st32((c.r[17].w[0] + 2784u), c.f[20]);
    st32((c.r[17].w[0] + 2796u), c.f[1]);
    st32((c.r[17].w[0] + 2804u), c.f[2]);
    st32((c.r[17].w[0] + 2812u), c.f[16]);
    st32((c.r[17].w[0] + 2816u), c.f[3]);
    st32((c.r[17].w[0] + 2820u), c.f[4]);
    st32((c.r[17].w[0] + 2828u), c.f[17]);
    st32((c.r[17].w[0] + 2832u), c.f[5]);
    st32((c.r[17].w[0] + 2836u), c.f[6]);
    st32((c.r[17].w[0] + 2840u), c.f[7]);
    st32((c.r[17].w[0] + 2844u), c.f[15]);
    st32((c.r[17].w[0] + 2864u), c.f[18]);
    st32((c.r[17].w[0] + 2868u), c.f[8]);
    st32((c.r[17].w[0] + 2872u), c.f[9]);
    st32((c.r[17].w[0] + 2884u), c.f[14]);
    st32((c.r[17].w[0] + 2888u), c.f[10]);
    st32((c.r[17].w[0] + 2892u), c.f[11]);
    st32((c.r[17].w[0] + 3408u), c.f[12]);
    st32((c.r[17].w[0] + 3412u), c.f[13]);
    st32((c.r[17].w[0] + 2772u), c.f[14]);
    c.budget -= 71;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0014(c, 52u, depth); } }
L_0014FC64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2688u);
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44790000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4490000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x441E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2672u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FCA8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FCA8u) [[unlikely]] return; }
L_0014FCA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4AB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[14] = c.r[1].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FCD4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FCD4u) [[unlikely]] return; }
L_0014FCD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7430000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC57A0000u);
    c.f[14] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FD04u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FD04u) [[unlikely]] return; }
L_0014FD04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45990000u);
    c.r[1].d[0] = c.r[1].d[0] | 8192ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC42F0000u);
    c.f[13] = c.r[1].w[0];
    c.f[14] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45540000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[15] = c.r[1].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FD34u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FD34u) [[unlikely]] return; }
L_0014FD34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[13] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46840000u);
    c.r[1].d[0] = c.r[1].d[0] | 53248ull;
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[15] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x449C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x451C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC69C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45670000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    c.f[11] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2768u), c.f[0]);
    st32((c.r[17].w[0] + 2784u), c.f[20]);
    st32((c.r[17].w[0] + 2796u), c.f[1]);
    st32((c.r[17].w[0] + 2804u), c.f[2]);
    st32((c.r[17].w[0] + 2812u), c.f[14]);
    st32((c.r[17].w[0] + 2820u), c.f[3]);
    st32((c.r[17].w[0] + 2828u), c.f[15]);
    st32((c.r[17].w[0] + 2832u), c.f[4]);
    st32((c.r[17].w[0] + 2836u), c.f[5]);
    st32((c.r[17].w[0] + 2840u), c.f[6]);
    st32((c.r[17].w[0] + 2844u), c.f[13]);
    st32((c.r[17].w[0] + 2864u), c.f[16]);
    st32((c.r[17].w[0] + 2868u), c.f[7]);
    st32((c.r[17].w[0] + 2872u), c.f[8]);
    st32((c.r[17].w[0] + 2884u), c.f[12]);
    st32((c.r[17].w[0] + 2888u), c.f[9]);
    st32((c.r[17].w[0] + 2892u), c.f[10]);
    st32((c.r[17].w[0] + 3408u), c.f[21]);
    st32((c.r[17].w[0] + 3412u), c.f[11]);
    c.budget -= 64;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0014(c, 57u, depth); } }
L_0014FE34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x428A0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2688u);
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44790000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4490000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x441E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2672u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FE78u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FE78u) [[unlikely]] return; }
L_0014FE78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42E60000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2704u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4AB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[14] = c.r[1].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FEA4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FEA4u) [[unlikely]] return; }
L_0014FEA4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5DA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC7430000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[13] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.f[14] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FED0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FED0u) [[unlikely]] return; }
L_0014FED0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[22] = c.r[1].w[0];
    set32(c.r[4], c.r[17].w[0] + 2752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[21] = c.r[1].w[0];
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46240000u);
    c.r[1].d[0] = c.r[1].d[0] | 4096ull;
    c.f[12] = c.r[1].w[0];
    c.f[13] = c.f[22];
    c.f[14] = c.f[21];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0014FF08u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0014FF08u) [[unlikely]] return; }
L_0014FF08:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[11] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46840000u);
    c.r[1].d[0] = c.r[1].d[0] | 53248ull;
    c.f[13] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x457A0000u);
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[15] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x449C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x451C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC69C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45670000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4FA0000u);
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    c.f[10] = c.r[1].w[0];
    st32((c.r[17].w[0] + 2768u), c.f[21]);
    st32((c.r[17].w[0] + 2784u), c.f[20]);
    st32((c.r[17].w[0] + 2796u), c.f[0]);
    st32((c.r[17].w[0] + 2804u), c.f[1]);
    st32((c.r[17].w[0] + 2812u), c.f[13]);
    st32((c.r[17].w[0] + 2820u), c.f[2]);
    st32((c.r[17].w[0] + 2828u), c.f[14]);
    st32((c.r[17].w[0] + 2832u), c.f[3]);
    st32((c.r[17].w[0] + 2836u), c.f[22]);
    st32((c.r[17].w[0] + 2840u), c.f[4]);
    st32((c.r[17].w[0] + 2844u), c.f[12]);
    st32((c.r[17].w[0] + 2864u), c.f[15]);
    st32((c.r[17].w[0] + 2868u), c.f[5]);
    st32((c.r[17].w[0] + 2872u), c.f[6]);
    st32((c.r[17].w[0] + 2884u), c.f[11]);
    st32((c.r[17].w[0] + 2888u), c.f[7]);
    st32((c.r[17].w[0] + 2892u), c.f[8]);
    st32((c.r[17].w[0] + 3408u), c.f[9]);
    st32((c.r[17].w[0] + 3412u), c.f[10]);
    st32((c.r[17].w[0] + 2772u), c.f[11]);
    st32((c.r[17].w[0] + 2776u), c.f[12]);
    st32((c.r[17].w[0] + 2788u), c.f[13]);
    c.budget -= 62;
    [[clang::musttail]] return unit_0014(c, 1u, depth);
}

}
