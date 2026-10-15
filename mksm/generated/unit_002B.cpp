#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002B[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0,
    20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0,
    0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0,
    0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_002B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001AC000;
    case 2u: goto L_001AC004;
    case 3u: goto L_001AC00C;
    case 4u: goto L_001AC020;
    case 5u: goto L_001AC030;
    case 6u: goto L_001AC038;
    case 7u: goto L_001AC04C;
    case 8u: goto L_001AC05C;
    case 9u: goto L_001AC064;
    case 10u: goto L_001AC078;
    case 11u: goto L_001AC090;
    case 12u: goto L_001AC098;
    case 13u: goto L_001AC0C8;
    case 14u: goto L_001AC0D0;
    case 15u: goto L_001AC0FC;
    case 16u: goto L_001AC128;
    case 17u: goto L_001AC154;
    case 18u: goto L_001AC164;
    case 19u: goto L_001AC170;
    case 20u: goto L_001AC180;
    case 21u: goto L_001AC188;
    case 22u: goto L_001AC19C;
    case 23u: goto L_001AC1C8;
    case 24u: goto L_001AC1D0;
    case 25u: goto L_001AC1E0;
    case 26u: goto L_001AC1F0;
    case 27u: goto L_001AC204;
    case 28u: goto L_001AC20C;
    case 29u: goto L_001AC22C;
    case 30u: goto L_001AC234;
    case 31u: goto L_001AC248;
    case 32u: goto L_001AC250;
    case 33u: goto L_001AC280;
    case 34u: goto L_001AC294;
    case 35u: goto L_001AC29C;
    case 36u: goto L_001AC2BC;
    case 37u: goto L_001AC2C4;
    case 38u: goto L_001AC2D8;
    case 39u: goto L_001AC2EC;
    case 40u: goto L_001AC300;
    case 41u: goto L_001AC308;
    case 42u: goto L_001AC328;
    case 43u: goto L_001AC330;
    case 44u: goto L_001AC34C;
    case 45u: goto L_001AC370;
    case 46u: goto L_001AC378;
    case 47u: goto L_001AC388;
    case 48u: goto L_001AC390;
    case 49u: goto L_001AC3B0;
    case 50u: goto L_001AC3B8;
    case 51u: goto L_001AC3C0;
    case 52u: goto L_001AC3E0;
    case 53u: goto L_001AC3F8;
    case 54u: goto L_001AC400;
    case 55u: goto L_001AC460;
    case 56u: goto L_001AC480;
    case 57u: goto L_001AC49C;
    case 58u: goto L_001AC4B4;
    case 59u: goto L_001AC4D0;
    case 60u: goto L_001AC4D8;
    case 61u: goto L_001AC4E8;
    case 62u: goto L_001AC4F8;
    case 63u: goto L_001AC520;
    case 64u: goto L_001AC540;
    case 65u: goto L_001AC558;
    case 66u: goto L_001AC578;
    case 67u: goto L_001AC590;
    case 68u: goto L_001AC5A8;
    case 69u: goto L_001AC5B0;
    case 70u: goto L_001AC5C8;
    case 71u: goto L_001AC5E0;
    case 72u: goto L_001AC5E8;
    case 73u: goto L_001AC600;
    case 74u: goto L_001AC614;
    case 75u: goto L_001AC65C;
    case 76u: goto L_001AC664;
    case 77u: goto L_001AC6B8;
    case 78u: goto L_001AC6C0;
    case 79u: goto L_001AC710;
    case 80u: goto L_001AC718;
    case 81u: goto L_001AC744;
    case 82u: goto L_001AC770;
    case 83u: goto L_001AC794;
    case 84u: goto L_001AC7B8;
    case 85u: goto L_001AC80C;
    case 86u: goto L_001ACA1C;
    case 87u: goto L_001ACA44;
    case 88u: goto L_001ACA5C;
    case 89u: goto L_001ACA6C;
    case 90u: goto L_001ACA88;
    case 91u: goto L_001ACAB0;
    case 92u: goto L_001ACAC4;
    case 93u: goto L_001ACAFC;
    case 94u: goto L_001ACB34;
    case 95u: goto L_001ACB4C;
    case 96u: goto L_001ACB64;
    case 97u: goto L_001ACB84;
    case 98u: goto L_001ACC10;
    case 99u: goto L_001ACC74;
    case 100u: goto L_001ACCA0;
    case 101u: goto L_001ACCC8;
    case 102u: goto L_001ACCF0;
    case 103u: goto L_001ACD00;
    case 104u: goto L_001ACD10;
    case 105u: goto L_001ACD24;
    case 106u: goto L_001ACD40;
    case 107u: goto L_001ACD58;
    case 108u: goto L_001ACD70;
    case 109u: goto L_001ACD88;
    case 110u: goto L_001ACDA0;
    case 111u: goto L_001ACDB8;
    case 112u: goto L_001ACDD0;
    case 113u: goto L_001ACDE8;
    case 114u: goto L_001ACDF8;
    case 115u: goto L_001ACE10;
    case 116u: goto L_001ACE34;
    case 117u: goto L_001ACE44;
    case 118u: goto L_001ACEAC;
    case 119u: goto L_001ACEF4;
    case 120u: goto L_001ACF28;
    case 121u: goto L_001ACF8C;
    case 122u: goto L_001ACFC0;
    case 123u: goto L_001ACFD8;
    case 124u: goto L_001ACFF0;
    case 125u: goto L_001AD008;
    case 126u: goto L_001AD010;
    case 127u: goto L_001AD044;
    case 128u: goto L_001AD05C;
    case 129u: goto L_001AD074;
    case 130u: goto L_001AD08C;
    case 131u: goto L_001AD094;
    case 132u: goto L_001AD0A8;
    case 133u: goto L_001AD0B0;
    case 134u: goto L_001AD0C4;
    case 135u: goto L_001AD0CC;
    case 136u: goto L_001AD120;
    case 137u: goto L_001AD190;
    case 138u: goto L_001AD1D0;
    case 139u: goto L_001AD1E8;
    case 140u: goto L_001AD200;
    case 141u: goto L_001AD218;
    case 142u: goto L_001AD24C;
    case 143u: goto L_001AD264;
    case 144u: goto L_001AD27C;
    case 145u: goto L_001AD298;
    case 146u: goto L_001AD2B0;
    case 147u: goto L_001AD2C0;
    case 148u: goto L_001AD2F8;
    case 149u: goto L_001AD300;
    case 150u: goto L_001AD30C;
    case 151u: goto L_001AD330;
    case 152u: goto L_001AD350;
    case 153u: goto L_001AD364;
    case 154u: goto L_001AD3EC;
    case 155u: goto L_001AD414;
    case 156u: goto L_001AD440;
    case 157u: goto L_001AD450;
    case 158u: goto L_001AD478;
    case 159u: goto L_001AD49C;
    case 160u: goto L_001AD4B4;
    case 161u: goto L_001AD4F0;
    case 162u: goto L_001AD504;
    case 163u: goto L_001AD520;
    case 164u: goto L_001AD568;
    case 165u: goto L_001AD5A0;
    case 166u: goto L_001AD5B8;
    case 167u: goto L_001AD5C0;
    case 168u: goto L_001AD5DC;
    case 169u: goto L_001AD5EC;
    case 170u: goto L_001AD630;
    case 171u: goto L_001AD658;
    case 172u: goto L_001AD660;
    case 173u: goto L_001AD66C;
    case 174u: goto L_001AD690;
    case 175u: goto L_001AD6AC;
    case 176u: goto L_001AD6DC;
    case 177u: goto L_001AD6F8;
    case 178u: goto L_001AD708;
    case 179u: goto L_001AD748;
    case 180u: goto L_001AD838;
    case 181u: goto L_001AD850;
    case 182u: goto L_001AD860;
    case 183u: goto L_001AD874;
    case 184u: goto L_001AD888;
    case 185u: goto L_001AD970;
    case 186u: goto L_001AD9AC;
    case 187u: goto L_001AD9BC;
    case 188u: goto L_001AD9E4;
    case 189u: goto L_001ADA0C;
    case 190u: goto L_001ADA1C;
    case 191u: goto L_001ADA5C;
    case 192u: goto L_001ADAB0;
    case 193u: goto L_001ADAD0;
    case 194u: goto L_001ADAF0;
    case 195u: goto L_001ADB40;
    case 196u: goto L_001ADB80;
    case 197u: goto L_001ADB98;
    case 198u: goto L_001ADBB4;
    case 199u: goto L_001ADC18;
    case 200u: goto L_001ADC30;
    case 201u: goto L_001ADC60;
    case 202u: goto L_001ADC80;
    case 203u: goto L_001ADC90;
    case 204u: goto L_001ADCB0;
    case 205u: goto L_001ADCC0;
    case 206u: goto L_001ADCD8;
    case 207u: goto L_001ADCE8;
    case 208u: goto L_001ADD00;
    case 209u: goto L_001ADD10;
    case 210u: goto L_001ADD28;
    case 211u: goto L_001ADD38;
    case 212u: goto L_001ADD64;
    case 213u: goto L_001ADD78;
    case 214u: goto L_001ADD94;
    case 215u: goto L_001ADDB8;
    case 216u: goto L_001ADDF4;
    case 217u: goto L_001ADE10;
    case 218u: goto L_001ADE28;
    case 219u: goto L_001ADE50;
    case 220u: goto L_001ADE68;
    case 221u: goto L_001ADE94;
    case 222u: goto L_001ADEC8;
    case 223u: goto L_001ADEE0;
    case 224u: goto L_001ADF14;
    case 225u: goto L_001ADF24;
    case 226u: goto L_001ADF48;
    case 227u: goto L_001ADF78;
    case 228u: goto L_001ADFB8;
    case 229u: goto L_001ADFF8;
    case 230u: goto L_001AE010;
    case 231u: goto L_001AE02C;
    case 232u: goto L_001AE0A8;
    case 233u: goto L_001AE100;
    case 234u: goto L_001AE120;
    case 235u: goto L_001AE130;
    case 236u: goto L_001AE178;
    case 237u: goto L_001AE1B0;
    case 238u: goto L_001AE1BC;
    case 239u: goto L_001AE1F0;
    case 240u: goto L_001AE240;
    case 241u: goto L_001AE260;
    case 242u: goto L_001AE274;
    case 243u: goto L_001AE2A0;
    case 244u: goto L_001AE2D0;
    case 245u: goto L_001AE310;
    case 246u: goto L_001AE320;
    case 247u: goto L_001AE358;
    case 248u: goto L_001AE374;
    case 249u: goto L_001AE394;
    case 250u: goto L_001AE3A4;
    case 251u: goto L_001AE3C8;
    case 252u: goto L_001AE418;
    case 253u: goto L_001AE464;
    case 254u: goto L_001AE488;
    case 255u: goto L_001AE498;
    case 256u: goto L_001AE4A0;
    case 257u: goto L_001AE4A8;
    case 258u: goto L_001AE4D0;
    case 259u: goto L_001AE4EC;
    case 260u: goto L_001AE500;
    case 261u: goto L_001AE518;
    case 262u: goto L_001AE528;
    case 263u: goto L_001AE588;
    case 264u: goto L_001AE5D0;
    case 265u: goto L_001AE628;
    case 266u: goto L_001AE63C;
    case 267u: goto L_001AE66C;
    case 268u: goto L_001AE694;
    case 269u: goto L_001AE69C;
    case 270u: goto L_001AE6C0;
    case 271u: goto L_001AE6F8;
    case 272u: goto L_001AE730;
    case 273u: goto L_001AE74C;
    case 274u: goto L_001AE768;
    case 275u: goto L_001AE7F8;
    case 276u: goto L_001AE854;
    case 277u: goto L_001AE864;
    case 278u: goto L_001AE874;
    case 279u: goto L_001AE888;
    case 280u: goto L_001AE8C8;
    case 281u: goto L_001AE9A8;
    case 282u: goto L_001AE9DC;
    case 283u: goto L_001AE9F8;
    case 284u: goto L_001AEA14;
    case 285u: goto L_001AEA40;
    case 286u: goto L_001AEA74;
    case 287u: goto L_001AEADC;
    case 288u: goto L_001AEB7C;
    case 289u: goto L_001AEB98;
    case 290u: goto L_001AEBB0;
    case 291u: goto L_001AEBC0;
    case 292u: goto L_001AEBD0;
    case 293u: goto L_001AEC78;
    case 294u: goto L_001AEC94;
    case 295u: goto L_001AECAC;
    case 296u: goto L_001AECC0;
    case 297u: goto L_001AED00;
    case 298u: goto L_001AED38;
    case 299u: goto L_001AEDA8;
    case 300u: goto L_001AEDB4;
    case 301u: goto L_001AEDC8;
    case 302u: goto L_001AEE10;
    case 303u: goto L_001AEE38;
    case 304u: goto L_001AEE74;
    case 305u: goto L_001AEE88;
    case 306u: goto L_001AEEC0;
    case 307u: goto L_001AEEE4;
    case 308u: goto L_001AEEF8;
    case 309u: goto L_001AEF18;
    case 310u: goto L_001AEF44;
    case 311u: goto L_001AEF80;
    case 312u: goto L_001AEF90;
    case 313u: goto L_001AEFC0;
    case 314u: goto L_001AEFD8;
    case 315u: goto L_001AF090;
    case 316u: goto L_001AF148;
    case 317u: goto L_001AF1B8;
    case 318u: goto L_001AF1C8;
    case 319u: goto L_001AF1F0;
    case 320u: goto L_001AF210;
    case 321u: goto L_001AF238;
    case 322u: goto L_001AF24C;
    case 323u: goto L_001AF260;
    case 324u: goto L_001AF280;
    case 325u: goto L_001AF294;
    case 326u: goto L_001AF2B8;
    case 327u: goto L_001AF2CC;
    case 328u: goto L_001AF2E8;
    case 329u: goto L_001AF2FC;
    case 330u: goto L_001AF348;
    case 331u: goto L_001AF37C;
    case 332u: goto L_001AF398;
    case 333u: goto L_001AF3E0;
    case 334u: goto L_001AF420;
    case 335u: goto L_001AF430;
    case 336u: goto L_001AF45C;
    case 337u: goto L_001AF470;
    case 338u: goto L_001AF4A0;
    case 339u: goto L_001AF4B0;
    case 340u: goto L_001AF4D0;
    case 341u: goto L_001AF4E8;
    case 342u: goto L_001AF518;
    case 343u: goto L_001AF528;
    case 344u: goto L_001AF540;
    case 345u: goto L_001AF558;
    case 346u: goto L_001AF5A0;
    case 347u: goto L_001AF5E0;
    case 348u: goto L_001AF600;
    case 349u: goto L_001AF620;
    case 350u: goto L_001AF638;
    case 351u: goto L_001AF658;
    case 352u: goto L_001AF678;
    case 353u: goto L_001AF690;
    case 354u: goto L_001AF698;
    case 355u: goto L_001AF6CC;
    case 356u: goto L_001AF6EC;
    case 357u: goto L_001AF738;
    case 358u: goto L_001AF748;
    case 359u: goto L_001AF760;
    case 360u: goto L_001AF770;
    case 361u: goto L_001AF7A4;
    case 362u: goto L_001AF7D0;
    case 363u: goto L_001AF7E4;
    case 364u: goto L_001AF7F0;
    case 365u: goto L_001AF808;
    case 366u: goto L_001AF838;
    case 367u: goto L_001AF850;
    case 368u: goto L_001AF880;
    case 369u: goto L_001AF898;
    case 370u: goto L_001AF8D0;
    case 371u: goto L_001AF900;
    case 372u: goto L_001AF954;
    case 373u: goto L_001AF96C;
    case 374u: goto L_001AF97C;
    case 375u: goto L_001AF9B8;
    case 376u: goto L_001AF9D4;
    case 377u: goto L_001AF9E4;
    case 378u: goto L_001AFA20;
    case 379u: goto L_001AFA38;
    case 380u: goto L_001AFA40;
    case 381u: goto L_001AFA50;
    case 382u: goto L_001AFA60;
    case 383u: goto L_001AFA70;
    case 384u: goto L_001AFA80;
    case 385u: goto L_001AFAB4;
    case 386u: goto L_001AFAD0;
    case 387u: goto L_001AFAE8;
    case 388u: goto L_001AFB10;
    case 389u: goto L_001AFB28;
    case 390u: goto L_001AFB58;
    case 391u: goto L_001AFB70;
    case 392u: goto L_001AFB80;
    case 393u: goto L_001AFBBC;
    case 394u: goto L_001AFBD8;
    case 395u: goto L_001AFBE8;
    case 396u: goto L_001AFC20;
    case 397u: goto L_001AFC88;
    case 398u: goto L_001AFD04;
    case 399u: goto L_001AFD40;
    case 400u: goto L_001AFD50;
    case 401u: goto L_001AFD78;
    case 402u: goto L_001AFD88;
    case 403u: goto L_001AFF20;
    default: bad_entry(c, 0x001AC000u); return;
    }
L_001AC000:
    c.budget -= 1;
L_001AC004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC00C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 24040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC020u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x001AC020u) [[unlikely]] return; }
L_001AC020:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC030u);  if (depth < kMaxDepth) unit_007D(c, 266u, depth + 1u); else { c.pc = 0x002F7A58u; return; } if (c.pc != 0x001AC030u) [[unlikely]] return; }
L_001AC030:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC038:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 29816u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC04C:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC05Cu);  if (depth < kMaxDepth) unit_0018(c, 372u, depth + 1u); else { c.pc = 0x00163298u; return; } if (c.pc != 0x001AC05Cu) [[unlikely]] return; }
L_001AC05C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC064:
    c.r[3].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[2].w[0] + 13128u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC078:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC090u);  if (depth < kMaxDepth) unit_0088(c, 19u, depth + 1u); else { c.pc = 0x003202D0u; return; } if (c.pc != 0x001AC090u) [[unlikely]] return; }
L_001AC090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC098:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC0C8u);  if (depth < kMaxDepth) unit_0030(c, 31u, depth + 1u); else { c.pc = 0x001C05F8u; return; } if (c.pc != 0x001AC0C8u) [[unlikely]] return; }
L_001AC0C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC0D0:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001AC0EC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 11264u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC0EC:
    set32(c.r[2], ld32((c.r[19].w[0] + 11264u)));
    st32((c.r[2].w[0] + 104u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC0FC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001AC118; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 11264u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC118:
    set32(c.r[2], ld32((c.r[19].w[0] + 11264u)));
    st32((c.r[2].w[0] + 108u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC128:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001AC144; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 11264u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 112u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC144:
    set32(c.r[2], ld32((c.r[19].w[0] + 11264u)));
    st32((c.r[2].w[0] + 112u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC154:
    set32(c.r[16], ld32((c.r[19].w[0] + 11264u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC164u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x001AC164u) [[unlikely]] return; }
L_001AC164:
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC170:
    c.r[4].d[0] = c.r[18].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC180u);  if (depth < kMaxDepth) unit_0030(c, 139u, depth + 1u); else { c.pc = 0x001C1A20u; return; } if (c.pc != 0x001AC180u) [[unlikely]] return; }
L_001AC180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC188:
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 15);
    c.r[17].d[0] = c.r[18].d[0] & 32767ull;
    c.r[16].d[0] = c.r[16].d[0] & 32767ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC19Cu);  if (depth < kMaxDepth) unit_002A(c, 408u, depth + 1u); else { c.pc = 0x001AB738u; return; } if (c.pc != 0x001AC19Cu) [[unlikely]] return; }
L_001AC19C:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[16].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC1C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC1C8u) [[unlikely]] return; }
L_001AC1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC1D0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 12848u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC1E0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 12852u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC1F0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC204u);  if (depth < kMaxDepth) unit_0036(c, 243u, depth + 1u); else { c.pc = 0x001D9EE8u; return; } if (c.pc != 0x001AC204u) [[unlikely]] return; }
L_001AC204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC20C:
    set32(c.r[5], ld32((c.r[19].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12688u);
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC22Cu);  if (depth < kMaxDepth) unit_001A(c, 101u, depth + 1u); else { c.pc = 0x00169308u; return; } if (c.pc != 0x001AC22Cu) [[unlikely]] return; }
L_001AC22C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC234:
    set32(c.r[3], c.r[9].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[2].w[0] + 9368u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC248u);  if (depth < kMaxDepth) unit_0029(c, 395u, depth + 1u); else { c.pc = 0x001A7658u; return; } if (c.pc != 0x001AC248u) [[unlikely]] return; }
L_001AC248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC250:
    set32(c.r[2], ld32((c.r[19].w[0] + 12864u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_001AC794; } }
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    st32((c.r[19].w[0] + 12864u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[18].d[0] & c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[19].w[0] + 12860u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC280:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[8].w[0] + 544u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC29Cu);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001AC29Cu) [[unlikely]] return; }
L_001AC29C:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[6].d[0] = 0ull < c.r[18].d[0] ? 1ull : 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 152u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 156u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC2BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC2BCu) [[unlikely]] return; }
L_001AC2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC2C4:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[8].w[0] + 532u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC2D8:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[8].w[0] + 520u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC2EC:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st16((c.r[19].w[0] + 10242u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC308u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001AC308u) [[unlikely]] return; }
L_001AC308:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC3A4; } }
L_001AC328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC330u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001AC330u) [[unlikely]] return; }
L_001AC330:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001AC388; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC34Cu);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001AC34Cu) [[unlikely]] return; }
L_001AC34C:
    set32(c.r[17], c.r[16].w[0] + 13248u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC370u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC370u) [[unlikely]] return; }
L_001AC370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC378u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001AC378u) [[unlikely]] return; }
L_001AC378:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC398; } }
L_001AC388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC390u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001AC390u) [[unlikely]] return; }
L_001AC390:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 2;
L_001AC398:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 52u)));
    c.budget -= 3;
L_001AC3A4:
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC3B0u) [[unlikely]] return; }
L_001AC3B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3C0u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001AC3C0u) [[unlikely]] return; }
L_001AC3C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 72u)));
    set32(c.r[16], c.r[16].w[0] + 72u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3E0u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x001AC3E0u) [[unlikely]] return; }
L_001AC3E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC3F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC3F8u) [[unlikely]] return; }
L_001AC3F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC400:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 52);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 24);
    c.r[5].d[0] = c.r[2].d[0] & 15ull;
    c.r[7].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[3].d[0] = c.r[18].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001AC434; } }
    c.r[3].d[0] = 0ull - c.r[3].d[0];
    c.budget -= 1;
L_001AC434:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001AC440; } }
    c.r[7].d[0] = 0ull - c.r[7].d[0];
    c.budget -= 1;
L_001AC440:
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[8].w[0] + 516u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 512u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC460:
    c.r[16].d[0] = c.r[18].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    set32(c.r[2], c.r[16].w[0] - 84u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AC794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC480u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001AC480u) [[unlikely]] return; }
L_001AC480:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 108u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC49Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AC49Cu) [[unlikely]] return; }
L_001AC49C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC4BC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC4B4u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x001AC4B4u) [[unlikely]] return; }
L_001AC4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC794; } }
L_001AC4BC:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC4D0u);  if (depth < kMaxDepth) unit_001A(c, 137u, depth + 1u); else { c.pc = 0x00169A10u; return; } if (c.pc != 0x001AC4D0u) [[unlikely]] return; }
L_001AC4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC4D8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC4E8u);  if (depth < kMaxDepth) unit_006C(c, 300u, depth + 1u); else { c.pc = 0x002B3270u; return; } if (c.pc != 0x001AC4E8u) [[unlikely]] return; }
L_001AC4E8:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC4FC; } }
L_001AC4F8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001AC4FC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC52C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC520u);  if (depth < kMaxDepth) unit_0049(c, 207u, depth + 1u); else { c.pc = 0x002269C8u; return; } if (c.pc != 0x001AC520u) [[unlikely]] return; }
L_001AC520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC4F8u | kUnwind; return; } goto L_001AC4F8; } }
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AC52C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001AC56C; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_001AC794; } }
L_001AC540:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC558u);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226880u; return; } if (c.pc != 0x001AC558u) [[unlikely]] return; }
L_001AC558:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC540u | kUnwind; return; } goto L_001AC540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC56C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_001AC794; } }
L_001AC578:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC590u);  if (depth < kMaxDepth) unit_0049(c, 34u, depth + 1u); else { c.pc = 0x00224B28u; return; } if (c.pc != 0x001AC590u) [[unlikely]] return; }
L_001AC590:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC578u | kUnwind; return; } goto L_001AC578; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC5A8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001AC5B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC5C8u);  if (depth < kMaxDepth) unit_0049(c, 34u, depth + 1u); else { c.pc = 0x00224B28u; return; } if (c.pc != 0x001AC5C8u) [[unlikely]] return; }
L_001AC5C8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC5B0u | kUnwind; return; } goto L_001AC5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC5E0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001AC5E8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC600u);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226880u; return; } if (c.pc != 0x001AC600u) [[unlikely]] return; }
L_001AC600:
    c.r[2].d[0] = c.r[16].sd[0] < 200ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AC5E8u | kUnwind; return; } goto L_001AC5E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC614:
    c.r[2].d[0] = c.r[18].sd[0] < 67ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC794; } }
    set32(c.r[3], 0u + 268u);
    set32(c.r[5], c.r[9].w[0] - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC65Cu);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226880u; return; } if (c.pc != 0x001AC65Cu) [[unlikely]] return; }
L_001AC65C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC664:
    c.r[2].d[0] = c.r[18].sd[0] < 67ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC794; } }
    set32(c.r[3], 0u + 268u);
    set32(c.r[4], c.r[9].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AC794; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC6B8u);  if (depth < kMaxDepth) unit_0049(c, 34u, depth + 1u); else { c.pc = 0x00224B28u; return; } if (c.pc != 0x001AC6B8u) [[unlikely]] return; }
L_001AC6B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC6C0:
    c.r[2].d[0] = c.r[18].sd[0] < 67ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC794; } }
    set32(c.r[3], 0u + 268u);
    set32(c.r[4], c.r[9].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AC794; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC710u);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226880u; return; } if (c.pc != 0x001AC710u) [[unlikely]] return; }
L_001AC710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC718:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001AC734; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 11264u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC734:
    set32(c.r[2], ld32((c.r[19].w[0] + 11264u)));
    st32((c.r[2].w[0] + 100u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC744:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001AC75C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 11264u)));
    st32((c.r[2].w[0] + 120u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC75C:
    set32(c.r[3], ld32((c.r[19].w[0] + 11264u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC770:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001AC788; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 11264u)));
    st32((c.r[2].w[0] + 128u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AC794; } }
L_001AC788:
    set32(c.r[3], ld32((c.r[19].w[0] + 11264u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 128u), c.r[2].w[0]);
    c.budget -= 3;
L_001AC794:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AC7B8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    set32(c.r[21], c.r[2].w[0] + 9872u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AC80Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001AC80Cu) [[unlikely]] return; }
L_001AC80C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 437u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACB04; } }
    c.r[2].d[0] = c.r[16].sd[0] < 438ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC8FC; } }
    set32(c.r[2], 0u + 194u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACD60; } }
    c.r[2].d[0] = c.r[16].sd[0] < 195ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC898; } }
    set32(c.r[2], 0u + 190u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACD2C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 191ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC884; } }
    set32(c.r[2], 0u + 188u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACCF8; } }
    c.r[2].d[0] = c.r[16].sd[0] < 189ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACD18; } }
    set32(c.r[2], 0u + 187u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001AC884:
    c.r[2].d[0] = c.r[16].sd[0] < 193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACEF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACD48; } }
L_001AC898:
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACDC0; } }
    c.r[2].d[0] = c.r[16].sd[0] < 199ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC8D0; } }
    set32(c.r[2], 0u + 196u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACD90; } }
    c.r[2].d[0] = c.r[16].sd[0] < 197ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACDA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACD78; } }
L_001AC8D0:
    set32(c.r[2], 0u + 435u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACDD8; } }
    c.r[2].d[0] = c.r[16].sd[0] < 436ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACACC; } }
    set32(c.r[2], 0u + 270u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACE58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001AC8FC:
    set32(c.r[2], 0u + 493u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACCD0; } }
    c.r[2].d[0] = c.r[16].sd[0] < 494ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC984; } }
    set32(c.r[2], 0u + 467u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACEF4; } }
    c.r[2].d[0] = c.r[16].sd[0] < 468ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC958; } }
    set32(c.r[2], 0u + 465u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACB54; } }
    c.r[2].d[0] = c.r[16].sd[0] < 466ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACB6C; } }
    set32(c.r[2], 0u + 464u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACB3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001AC958:
    set32(c.r[2], 0u + 469u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACC08; } }
    c.r[2].d[0] = c.r[16].sd[0] < 469ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACB8C; } }
    set32(c.r[2], 0u + 471u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACBA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001AC984:
    set32(c.r[2], 0u + 545u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACA64; } }
    c.r[2].d[0] = c.r[16].sd[0] < 546ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC9DC; } }
    set32(c.r[2], 0u + 520u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACA90; } }
    c.r[2].d[0] = c.r[16].sd[0] < 521ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AC9C8; } }
    set32(c.r[2], 0u + 497u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001AC9C8:
    set32(c.r[2], 0u + 522u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACC7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001AC9DC:
    set32(c.r[2], 0u + 549u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACA4C; } }
    c.r[2].d[0] = c.r[16].sd[0] < 550ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACA08; } }
    set32(c.r[2], 0u + 548u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001ACA34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACA08:
    set32(c.r[2], 0u + 550u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001ACEF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA1Cu);  if (depth < kMaxDepth) unit_0006(c, 363u, depth + 1u); else { c.pc = 0x0011AFC8u; return; } if (c.pc != 0x001ACA1Cu) [[unlikely]] return; }
L_001ACA1C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACA7C; } }
L_001ACA34:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA44u);  if (depth < kMaxDepth) unit_001E(c, 221u, depth + 1u); else { c.pc = 0x0017BE48u; return; } if (c.pc != 0x001ACA44u) [[unlikely]] return; }
L_001ACA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACA4C:
    c.r[4].d[0] = c.r[17].d[0] ^ 1ull;
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA5Cu);  if (depth < kMaxDepth) unit_001F(c, 27u, depth + 1u); else { c.pc = 0x0017C478u; return; } if (c.pc != 0x001ACA5Cu) [[unlikely]] return; }
L_001ACA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA6Cu);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001ACA6Cu) [[unlikely]] return; }
L_001ACA6C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 168u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 4;
L_001ACA7C:
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACA88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001ACA88u) [[unlikely]] return; }
L_001ACA88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACA90:
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[5].d[0] = c.r[17].d[0] & 32767ull;
    c.r[16].d[0] = c.r[16].d[0] & 32767ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACAB0u);  if (depth < kMaxDepth) unit_002B(c, 201u, depth + 1u); else { c.pc = 0x001ADC60u; return; } if (c.pc != 0x001ACAB0u) [[unlikely]] return; }
L_001ACAB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACAC4u);  if (depth < kMaxDepth) unit_002B(c, 203u, depth + 1u); else { c.pc = 0x001ADC90u; return; } if (c.pc != 0x001ACAC4u) [[unlikely]] return; }
L_001ACAC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACACC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACAFCu);  if (depth < kMaxDepth) unit_0003(c, 286u, depth + 1u); else { c.pc = 0x0010F8E0u; return; } if (c.pc != 0x001ACAFCu) [[unlikely]] return; }
L_001ACAFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACB04:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] & c.r[5].d[0];
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB34u);  if (depth < kMaxDepth) unit_0003(c, 303u, depth + 1u); else { c.pc = 0x0010FCD0u; return; } if (c.pc != 0x001ACB34u) [[unlikely]] return; }
L_001ACB34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACB3C:
    c.r[5].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB4Cu);  if (depth < kMaxDepth) unit_0036(c, 441u, depth + 1u); else { c.pc = 0x001DB520u; return; } if (c.pc != 0x001ACB4Cu) [[unlikely]] return; }
L_001ACB4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACB54:
    c.r[5].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB64u);  if (depth < kMaxDepth) unit_0036(c, 447u, depth + 1u); else { c.pc = 0x001DB5F0u; return; } if (c.pc != 0x001ACB64u) [[unlikely]] return; }
L_001ACB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACB6C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACB84u);  if (depth < kMaxDepth) unit_0036(c, 449u, depth + 1u); else { c.pc = 0x001DB618u; return; } if (c.pc != 0x001ACB84u) [[unlikely]] return; }
L_001ACB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACB8C:
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st32((c.r[18].w[0] + 12856u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACBA4:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 45);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 30);
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    c.r[4].d[0] = c.r[4].d[0] & 32767ull;
    c.r[5].d[0] = c.r[5].d[0] & 32767ull;
    c.r[2].d[0] = c.r[17].d[0] & 32767ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[6].w[0] + 31540u), c.r[2].w[0]);
    st32((c.r[7].w[0] + 31544u), c.r[3].w[0]);
    st32((c.r[8].w[0] + 31532u), c.r[4].w[0]);
    st32((c.r[9].w[0] + 31536u), c.r[5].w[0]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC10u);  if (depth < kMaxDepth) unit_001B(c, 306u, depth + 1u); else { c.pc = 0x0016FE70u; return; } if (c.pc != 0x001ACC10u) [[unlikely]] return; }
L_001ACC10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACEF4; } }
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 30);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[6].d[0] = c.r[6].d[0] & 32767ull;
    c.r[7].d[0] = c.r[7].d[0] & 32767ull;
    c.r[5].d[0] = c.r[17].d[0] & 32767ull;
    set32(c.r[2], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[4].w[0] + 31516u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 31520u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[8].w[0] + 31524u), c.r[6].w[0]);
    st32((c.r[9].w[0] + 31528u), c.r[7].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACC74u);  if (depth < kMaxDepth) unit_001B(c, 310u, depth + 1u); else { c.pc = 0x0016FEB0u; return; } if (c.pc != 0x001ACC74u) [[unlikely]] return; }
L_001ACC74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACC7C:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 16);
    c.r[4].d[0] = c.r[17].d[0] & 65535ull;
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCA0u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x001806E0u; return; } if (c.pc != 0x001ACCA0u) [[unlikely]] return; }
L_001ACCA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACCA8:
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12688u);
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCC8u);  if (depth < kMaxDepth) unit_001A(c, 102u, depth + 1u); else { c.pc = 0x00169338u; return; } if (c.pc != 0x001ACCC8u) [[unlikely]] return; }
L_001ACCC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACCD0:
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACCF0u);  if (depth < kMaxDepth) unit_0009(c, 59u, depth + 1u); else { c.pc = 0x00125768u; return; } if (c.pc != 0x001ACCF0u) [[unlikely]] return; }
L_001ACCF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACCF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD00u);  if (depth < kMaxDepth) unit_003B(c, 333u, depth + 1u); else { c.pc = 0x001EFE58u; return; } if (c.pc != 0x001ACD00u) [[unlikely]] return; }
L_001ACD00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD10u);  if (depth < kMaxDepth) unit_003B(c, 334u, depth + 1u); else { c.pc = 0x001EFE68u; return; } if (c.pc != 0x001ACD10u) [[unlikely]] return; }
L_001ACD10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACD18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD24u);  if (depth < kMaxDepth) unit_0070(c, 139u, depth + 1u); else { c.pc = 0x002C1A28u; return; } if (c.pc != 0x001ACD24u) [[unlikely]] return; }
L_001ACD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACD2C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD40u);  if (depth < kMaxDepth) unit_003B(c, 261u, depth + 1u); else { c.pc = 0x001EF070u; return; } if (c.pc != 0x001ACD40u) [[unlikely]] return; }
L_001ACD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACD48:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD58u);  if (depth < kMaxDepth) unit_003B(c, 217u, depth + 1u); else { c.pc = 0x001EEC60u; return; } if (c.pc != 0x001ACD58u) [[unlikely]] return; }
L_001ACD58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACD60:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD70u);  if (depth < kMaxDepth) unit_003B(c, 220u, depth + 1u); else { c.pc = 0x001EECA8u; return; } if (c.pc != 0x001ACD70u) [[unlikely]] return; }
L_001ACD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACD78:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACD88u);  if (depth < kMaxDepth) unit_003B(c, 254u, depth + 1u); else { c.pc = 0x001EEFE0u; return; } if (c.pc != 0x001ACD88u) [[unlikely]] return; }
L_001ACD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACD90:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDA0u);  if (depth < kMaxDepth) unit_003B(c, 257u, depth + 1u); else { c.pc = 0x001EF028u; return; } if (c.pc != 0x001ACDA0u) [[unlikely]] return; }
L_001ACDA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACDA8:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDB8u);  if (depth < kMaxDepth) unit_003B(c, 200u, depth + 1u); else { c.pc = 0x001EEAC8u; return; } if (c.pc != 0x001ACDB8u) [[unlikely]] return; }
L_001ACDB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACDC0:
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDD0u);  if (depth < kMaxDepth) unit_003B(c, 235u, depth + 1u); else { c.pc = 0x001EEE10u; return; } if (c.pc != 0x001ACDD0u) [[unlikely]] return; }
L_001ACDD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACDD8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACDE8u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x001ACDE8u) [[unlikely]] return; }
L_001ACDE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001ACEF4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 1;
L_001ACDF8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ACE34; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE10u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x001ACE10u) [[unlikely]] return; }
L_001ACE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ACE34; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[18].w[0] - 16016u);
    c.r[7].d[0] = c.r[17].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE34u);  if (depth < kMaxDepth) unit_0063(c, 307u, depth + 1u); else { c.pc = 0x0028EC28u; return; } if (c.pc != 0x001ACE34u) [[unlikely]] return; }
L_001ACE34:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[22].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACE44u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x001ACE44u) [[unlikely]] return; }
L_001ACE44:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ACDF8u | kUnwind; return; } goto L_001ACDF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ACEF4; } }
L_001ACE58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2696u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001ACEF4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 1056u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.f[20] = 0u;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 17040u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACEACu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001ACEACu) [[unlikely]] return; }
L_001ACEAC:
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] & c.r[5].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACEF4u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001ACEF4u) [[unlikely]] return; }
L_001ACEF4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ACF28:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] + 18288u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[5].w[0] - 415u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    c.r[4].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], ld32((c.r[6].w[0])));
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD16C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 32080u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001AC000u < 16384u) { entry = entries_002B[(t - 0x001AC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001ACF8C:
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 45);
    c.r[6].d[0] = c.r[17].d[0] & 32767ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[18].d[0] = c.r[18].d[0] & 32767ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 30);
    c.r[16].d[0] = c.r[16].d[0] & 32767ull;
    c.r[17].d[0] = c.r[17].d[0] & 32767ull;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACFC0u);  if (depth < kMaxDepth) unit_0067(c, 175u, depth + 1u); else { c.pc = 0x0029DB60u; return; } if (c.pc != 0x001ACFC0u) [[unlikely]] return; }
L_001ACFC0:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACFD8u);  if (depth < kMaxDepth) unit_0067(c, 175u, depth + 1u); else { c.pc = 0x0029DB60u; return; } if (c.pc != 0x001ACFD8u) [[unlikely]] return; }
L_001ACFD8:
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ACFF0u);  if (depth < kMaxDepth) unit_0067(c, 175u, depth + 1u); else { c.pc = 0x0029DB60u; return; } if (c.pc != 0x001ACFF0u) [[unlikely]] return; }
L_001ACFF0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD008u);  if (depth < kMaxDepth) unit_0067(c, 175u, depth + 1u); else { c.pc = 0x0029DB60u; return; } if (c.pc != 0x001AD008u) [[unlikely]] return; }
L_001AD008:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD16C; } }
L_001AD010:
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 45);
    c.r[6].d[0] = c.r[17].d[0] & 32767ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[18].d[0] = c.r[18].d[0] & 32767ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 30);
    c.r[16].d[0] = c.r[16].d[0] & 32767ull;
    c.r[17].d[0] = c.r[17].d[0] & 32767ull;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD044u);  if (depth < kMaxDepth) unit_0067(c, 175u, depth + 1u); else { c.pc = 0x0029DB60u; return; } if (c.pc != 0x001AD044u) [[unlikely]] return; }
L_001AD044:
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD05Cu);  if (depth < kMaxDepth) unit_0067(c, 175u, depth + 1u); else { c.pc = 0x0029DB60u; return; } if (c.pc != 0x001AD05Cu) [[unlikely]] return; }
L_001AD05C:
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD074u);  if (depth < kMaxDepth) unit_0067(c, 175u, depth + 1u); else { c.pc = 0x0029DB60u; return; } if (c.pc != 0x001AD074u) [[unlikely]] return; }
L_001AD074:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[5], 0u + 7u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD08Cu);  if (depth < kMaxDepth) unit_0067(c, 175u, depth + 1u); else { c.pc = 0x0029DB60u; return; } if (c.pc != 0x001AD08Cu) [[unlikely]] return; }
L_001AD08C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD16C; } }
L_001AD094:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0A8u);  if (depth < kMaxDepth) unit_0067(c, 145u, depth + 1u); else { c.pc = 0x0029D6E0u; return; } if (c.pc != 0x001AD0A8u) [[unlikely]] return; }
L_001AD0A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD16C; } }
L_001AD0B0:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD0C4u);  if (depth < kMaxDepth) unit_0006(c, 28u, depth + 1u); else { c.pc = 0x00118370u; return; } if (c.pc != 0x001AD0C4u) [[unlikely]] return; }
L_001AD0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD16C; } }
L_001AD0CC:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 45);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 30);
    c.r[4].d[0] = c.r[4].d[0] & 32767ull;
    c.r[5].d[0] = c.r[5].d[0] & 32767ull;
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    c.r[2].d[0] = c.r[17].d[0] & 32767ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[19].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD16C; } }
L_001AD120:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 45);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 15);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 30);
    c.r[4].d[0] = c.r[4].d[0] & 32767ull;
    c.r[5].d[0] = c.r[5].d[0] & 32767ull;
    c.r[3].d[0] = c.r[3].d[0] & 32767ull;
    c.r[2].d[0] = c.r[17].d[0] & 32767ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 68u), c.r[5].w[0]);
    c.budget -= 19;
L_001AD16C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001AD200; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AD200; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[16], c.r[16].w[0] + 15024u);
    set32(c.r[5], c.r[5].w[0] - 12504u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1D0u);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x001AD1D0u) [[unlikely]] return; }
L_001AD1D0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17232u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD1E8u);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x001AD1E8u) [[unlikely]] return; }
L_001AD1E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14408u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD200u);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x001AD200u) [[unlikely]] return; }
L_001AD200:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD218:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 12504u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], c.r[16].w[0] + 15024u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD24Cu);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x001AD24Cu) [[unlikely]] return; }
L_001AD24C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 17232u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD264u);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x001AD264u) [[unlikely]] return; }
L_001AD264:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14408u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD27Cu);  if (depth < kMaxDepth) unit_0093(c, 150u, depth + 1u); else { c.pc = 0x0034DBD8u; return; } if (c.pc != 0x001AD27Cu) [[unlikely]] return; }
L_001AD27C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD298:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD2B0u);  if (depth < kMaxDepth) unit_002B(c, 137u, depth + 1u); else { c.pc = 0x001AD190u; return; } if (c.pc != 0x001AD2B0u) [[unlikely]] return; }
L_001AD2B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD2C0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[19].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD2F8u);  if (depth < kMaxDepth) unit_008E(c, 304u, depth + 1u); else { c.pc = 0x0033B598u; return; } if (c.pc != 0x001AD2F8u) [[unlikely]] return; }
L_001AD2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD300u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001AD300u) [[unlikely]] return; }
L_001AD300:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD30Cu);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001AD30Cu) [[unlikely]] return; }
L_001AD30C:
    st32((c.r[19].w[0] + 8u), 0u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.f[12] = ld32((c.r[19].w[0] + 8u));
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD330u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001AD330u) [[unlikely]] return; }
L_001AD330:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001AD450; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[20].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD350u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD350u) [[unlikely]] return; }
L_001AD350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD450; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD364u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001AD364u) [[unlikely]] return; }
L_001AD364:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.f[1] = ld32((c.r[29].w[0] + 56u));
    c.f[2] = ld32((c.r[2].w[0] + 132u));
    set32(c.r[4], 0u + 1u);
    mmi::por(c.r[2], c.r[0], c.r[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    st32((c.r[29].w[0] + 148u), c.f[2]);
    st32((c.r[29].w[0] + 152u), c.f[1]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[5].w[0] + 11504u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001AD3D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[2] = ld32((c.r[5].w[0] + 11556u));
    c.f[0] = ld32((c.r[2].w[0] - 27996u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AD3D4; } }
    st32((c.r[29].w[0] + 132u), c.f[2]);
    c.budget -= 1;
L_001AD3D4:
    set32(c.r[17], c.r[19].w[0] + 16u);
    set32(c.r[18], c.r[20].w[0] + 320u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD3ECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001AD3ECu) [[unlikely]] return; }
L_001AD3EC:
    set32(c.r[16], c.r[16].w[0] - 17840u);
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.f[14] = ld32((c.r[19].w[0] + 16u));
    c.f[15] = ld32((c.r[19].w[0] + 24u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD414u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001AD414u) [[unlikely]] return; }
L_001AD414:
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[4], c.r[20].w[0] + 384u);
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[19].w[0] + 16u), c.f[1]);
    st32((c.r[16].w[0] + 136u), c.f[0]);
    st32((c.r[19].w[0] + 24u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD440u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001AD440u) [[unlikely]] return; }
L_001AD440:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD450u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001AD450u) [[unlikely]] return; }
L_001AD450:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD478:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD49Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001AD49Cu) [[unlikely]] return; }
L_001AD49C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st16((c.r[3].w[0] + 7694u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD4B4u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001AD4B4u) [[unlikely]] return; }
L_001AD4B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[2], c.r[2].w[0] - 17840u);
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[2]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD4F0u);  if (depth < kMaxDepth) unit_008E(c, 301u, depth + 1u); else { c.pc = 0x0033B520u; return; } if (c.pc != 0x001AD4F0u) [[unlikely]] return; }
L_001AD4F0:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD504u);  if (depth < kMaxDepth) unit_008E(c, 365u, depth + 1u); else { c.pc = 0x0033BF40u; return; } if (c.pc != 0x001AD504u) [[unlikely]] return; }
L_001AD504:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD520:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = 0u;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[17].w[0] + 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD568u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001AD568u) [[unlikely]] return; }
L_001AD568:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AD60C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5A0u);  if (depth < kMaxDepth) unit_0089(c, 11u, depth + 1u); else { c.pc = 0x003242A8u; return; } if (c.pc != 0x001AD5A0u) [[unlikely]] return; }
L_001AD5A0:
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5B8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001AD5B8u) [[unlikely]] return; }
L_001AD5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5C0u);  if (depth < kMaxDepth) unit_0017(c, 372u, depth + 1u); else { c.pc = 0x0015F138u; return; } if (c.pc != 0x001AD5C0u) [[unlikely]] return; }
L_001AD5C0:
    set32(c.r[7], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + 4u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5DCu);  if (depth < kMaxDepth) unit_0018(c, 50u, depth + 1u); else { c.pc = 0x00160658u; return; } if (c.pc != 0x001AD5DCu) [[unlikely]] return; }
L_001AD5DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD5ECu);  if (depth < kMaxDepth) unit_0045(c, 16u, depth + 1u); else { c.pc = 0x00214208u; return; } if (c.pc != 0x001AD5ECu) [[unlikely]] return; }
L_001AD5EC:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[18].w[0] + 136u), c.f[2]);
    c.budget -= 8;
L_001AD60C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD630:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD658u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001AD658u) [[unlikely]] return; }
L_001AD658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD660u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001AD660u) [[unlikely]] return; }
L_001AD660:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD66Cu);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001AD66Cu) [[unlikely]] return; }
L_001AD66C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001AD728; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD690u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD690u) [[unlikely]] return; }
L_001AD690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AD728; } }
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD6ACu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001AD6ACu) [[unlikely]] return; }
L_001AD6AC:
    c.f[2] = ld32((c.r[18].w[0] + 32u));
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[3] = ld32((c.r[18].w[0] + 40u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    c.f[1] = fp::add(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD6DCu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001AD6DCu) [[unlikely]] return; }
L_001AD6DC:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 112u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD6F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AD6F8u) [[unlikely]] return; }
L_001AD6F8:
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD708u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001AD708u) [[unlikely]] return; }
L_001AD708:
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] - 17840u);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[2].w[0] + 144u), c.f[1]);
    st32((c.r[2].w[0] + 152u), c.f[0]);
    st32((c.r[2].w[0] + 148u), c.f[2]);
    c.budget -= 8;
L_001AD728:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD748:
    set32(c.r[29], c.r[29].w[0] - 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 16u), c.f[1]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AD7C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AD93C; } }
L_001AD7C0:
    set32(c.r[3], 0u + 268u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC9740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 14152u);
    mmi::por(c.r[4], c.r[0], c.r[0]);
    set32(c.r[16], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[4]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[4]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    set32(c.r[23], c.r[2].w[0] + 27456u);
    st32((c.r[29].w[0] + 56u), c.f[1]);
    set32(c.r[17], c.r[3].w[0] + 4u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[19], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[18], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    set32(c.r[20], 0u + 15u);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 30;
L_001AD838:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[22].w[0] + c.r[23].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD850u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001AD850u) [[unlikely]] return; }
L_001AD850:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD860u);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x001AD860u) [[unlikely]] return; }
L_001AD860:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD874u);  if (depth < kMaxDepth) unit_0045(c, 12u, depth + 1u); else { c.pc = 0x00214190u; return; } if (c.pc != 0x001AD874u) [[unlikely]] return; }
L_001AD874:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD888u);  if (depth < kMaxDepth) unit_0045(c, 13u, depth + 1u); else { c.pc = 0x002141A8u; return; } if (c.pc != 0x001AD888u) [[unlikely]] return; }
L_001AD888:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AD838u | kUnwind; return; } goto L_001AD838; } }
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.f[4] = ld32((c.r[29].w[0] + 36u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[5] = ld32((c.r[29].w[0] + 40u));
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    c.f[6] = ld32((c.r[29].w[0]));
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[5] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    c.f[4] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[6]);
    c.f[3] = ld32((c.r[29].w[0] + 16u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    st32((c.r[21].w[0]), c.f[1]);
    st32((c.r[21].w[0] + 4u), c.f[2]);
    st32((c.r[21].w[0] + 8u), c.f[0]);
    c.budget -= 27;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AD900; } }
    st32((c.r[21].w[0]), c.f[3]);
    c.budget -= 1;
L_001AD900:
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AD91C; } }
    st32((c.r[21].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_001AD91C:
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AD938; } }
    st32((c.r[21].w[0] + 8u), c.f[1]);
    c.budget -= 1;
L_001AD938:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AD93C:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AD970:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AD9C4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD9ACu);  if (depth < kMaxDepth) unit_008F(c, 42u, depth + 1u); else { c.pc = 0x0033C7B0u; return; } if (c.pc != 0x001AD9ACu) [[unlikely]] return; }
L_001AD9AC:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD9BCu);  if (depth < kMaxDepth) unit_008F(c, 42u, depth + 1u); else { c.pc = 0x0033C7B0u; return; } if (c.pc != 0x001AD9BCu) [[unlikely]] return; }
L_001AD9BC:
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.budget -= 2;
L_001AD9C4:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AD9E4u);  if (depth < kMaxDepth) unit_002B(c, 179u, depth + 1u); else { c.pc = 0x001AD748u; return; } if (c.pc != 0x001AD9E4u) [[unlikely]] return; }
L_001AD9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADAD0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[20] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA0Cu);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001ADA0Cu) [[unlikely]] return; }
L_001ADA0C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA1Cu);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x001ADA1Cu) [[unlikely]] return; }
L_001ADA1C:
    c.f[2] = ld32((c.r[17].w[0] + 16u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.f[0] = ld32((c.r[17].w[0] + 24u));
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 44u), 0u);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADA5Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001ADA5Cu) [[unlikely]] return; }
L_001ADA5C:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[4], c.r[16].w[0] - 11856u);
    c.f[2] = ld32((c.r[29].w[0] + 8u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 60u), 0u);
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[7], 0u + 14u);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 56u), c.f[2]);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[8].d[0] = c.r[8].d[0] | 65535ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADAB0u);  if (depth < kMaxDepth) unit_008E(c, 117u, depth + 1u); else { c.pc = 0x00339A58u; return; } if (c.pc != 0x001ADAB0u) [[unlikely]] return; }
L_001ADAB0:
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << (c.r[18].w[0] & 31u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADAD0u);  if (depth < kMaxDepth) unit_002B(c, 226u, depth + 1u); else { c.pc = 0x001ADF48u; return; } if (c.pc != 0x001ADAD0u) [[unlikely]] return; }
L_001ADAD0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADAF0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001ADC30; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001ADC30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[4], c.r[2].w[0] + 22016u);
    set32(c.r[19], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[4].w[0] + 16u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
L_001ADB40:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ADB40u | kUnwind; return; } goto L_001ADB40; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[5].w[0] + 1120u), 0u);
    set32(c.r[18], c.r[4].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[22], c.r[2].w[0] + 27456u);
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[21], 0u + 13248u);
    set32(c.r[20], 0u + 80u);
    c.budget -= 10;
L_001ADB80:
    mmi::mult(c, 0, c.r[16].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[22].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADB98u);  if (depth < kMaxDepth) unit_002B(c, 215u, depth + 1u); else { c.pc = 0x001ADDB8u; return; } if (c.pc != 0x001ADB98u) [[unlikely]] return; }
L_001ADB98:
    set32(c.r[2], ld32((c.r[17].w[0] + 1120u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[17].w[0]);
    c.budget -= 7;
L_001ADBB4:
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ADBB4u | kUnwind; return; } goto L_001ADBB4; } }
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 1120u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 1120u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ADB80u | kUnwind; return; } goto L_001ADB80; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 23168u);
    set32(c.r[2], c.r[2].w[0] - 31376u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC18u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001ADC18u) [[unlikely]] return; }
L_001ADC18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31392u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC30u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001ADC30u) [[unlikely]] return; }
L_001ADC30:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADC60:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] + 22016u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADC80u);  if (depth < kMaxDepth) unit_002B(c, 232u, depth + 1u); else { c.pc = 0x001AE0A8u; return; } if (c.pc != 0x001ADC80u) [[unlikely]] return; }
L_001ADC80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADC90:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] + 22016u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADCB0u);  if (depth < kMaxDepth) unit_002B(c, 235u, depth + 1u); else { c.pc = 0x001AE130u; return; } if (c.pc != 0x001ADCB0u) [[unlikely]] return; }
L_001ADCB0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADCC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 22016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADCD8u);  if (depth < kMaxDepth) unit_002B(c, 239u, depth + 1u); else { c.pc = 0x001AE1F0u; return; } if (c.pc != 0x001ADCD8u) [[unlikely]] return; }
L_001ADCD8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADCE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 22016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD00u);  if (depth < kMaxDepth) unit_002B(c, 236u, depth + 1u); else { c.pc = 0x001AE178u; return; } if (c.pc != 0x001ADD00u) [[unlikely]] return; }
L_001ADD00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADD10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 22016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD28u);  if (depth < kMaxDepth) unit_002B(c, 236u, depth + 1u); else { c.pc = 0x001AE178u; return; } if (c.pc != 0x001ADD28u) [[unlikely]] return; }
L_001ADD28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADD38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 80u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], c.r[2].w[0] + 22032u);
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD64u);  if (depth < kMaxDepth) unit_002B(c, 246u, depth + 1u); else { c.pc = 0x001AE320u; return; } if (c.pc != 0x001ADD64u) [[unlikely]] return; }
L_001ADD64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADD78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADD94u);  if (depth < kMaxDepth) unit_002B(c, 215u, depth + 1u); else { c.pc = 0x001ADDB8u; return; } if (c.pc != 0x001ADD94u) [[unlikely]] return; }
L_001ADD94:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADDB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = 0u;
    set32(c.r[4], c.r[16].w[0] + 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 64u), 0u);
    c.f[12] = c.f[20];
    st32((c.r[16].w[0]), 0u);
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADDF4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001ADDF4u) [[unlikely]] return; }
L_001ADDF4:
    c.f[12] = c.f[20];
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE10u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001ADE10u) [[unlikely]] return; }
L_001ADE10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADE28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADE58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE50u);  if (depth < kMaxDepth) unit_002B(c, 246u, depth + 1u); else { c.pc = 0x001AE320u; return; } if (c.pc != 0x001ADE50u) [[unlikely]] return; }
L_001ADE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001ADEC8; } }
L_001ADE58:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE68u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001ADE68u) [[unlikely]] return; }
L_001ADE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADEC8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADE9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001ADE9C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADE94u);  if (depth < kMaxDepth) unit_002B(c, 251u, depth + 1u); else { c.pc = 0x001AE3C8u; return; } if (c.pc != 0x001ADE94u) [[unlikely]] return; }
L_001ADE94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADEC8; } }
L_001ADE9C:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], 0u - 666u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001ADEC8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001ADEC8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADEC8u);  if (depth < kMaxDepth) unit_002B(c, 246u, depth + 1u); else { c.pc = 0x001AE320u; return; } if (c.pc != 0x001ADEC8u) [[unlikely]] return; }
L_001ADEC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADEE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001ADF2C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF14u);  if (depth < kMaxDepth) unit_008F(c, 42u, depth + 1u); else { c.pc = 0x0033C7B0u; return; } if (c.pc != 0x001ADF14u) [[unlikely]] return; }
L_001ADF14:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001ADF24u);  if (depth < kMaxDepth) unit_008F(c, 42u, depth + 1u); else { c.pc = 0x0033C7B0u; return; } if (c.pc != 0x001ADF24u) [[unlikely]] return; }
L_001ADF24:
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 2;
L_001ADF2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADF48:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001ADF6C; } }
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 5;
L_001ADF6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001ADF78:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[2], 0u + 13u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[19].w[0] + 16u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    set32(c.r[20], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 16;
L_001ADFB8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ADFB8u | kUnwind; return; } goto L_001ADFB8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 1120u), 0u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[19].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[23], c.r[2].w[0] + 27456u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[22], 0u + 13248u);
    set32(c.r[21], 0u + 80u);
    c.budget -= 10;
L_001ADFF8:
    mmi::mult(c, 0, c.r[16].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE010u);  if (depth < kMaxDepth) unit_002B(c, 215u, depth + 1u); else { c.pc = 0x001ADDB8u; return; } if (c.pc != 0x001AE010u) [[unlikely]] return; }
L_001AE010:
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[3], c.r[16].w[0] + 1u);
    st32((c.r[29].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 1120u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[18].w[0]);
    c.budget -= 7;
L_001AE02C:
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[20].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE02Cu | kUnwind; return; } goto L_001AE02C; } }
    ld128((c.r[4].w[0]) & ~15u, c.r[6]);
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    c.r[3].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 1120u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 1120u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001ADFF8u | kUnwind; return; } goto L_001ADFF8; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE0A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE120; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    c.r[4].d[0] = ~(0ull | c.r[5].d[0]);
    set32(c.r[3], 0u - 666u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], c.r[2].w[0] - 1u);
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[6].d[0];
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AE108; } }
    set32(c.r[4], 0u + 80u);
    set32(c.r[2], c.r[7].w[0] + 16u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE100u);  if (depth < kMaxDepth) unit_002B(c, 245u, depth + 1u); else { c.pc = 0x001AE310u; return; } if (c.pc != 0x001AE100u) [[unlikely]] return; }
L_001AE100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE120; } }
L_001AE108:
    set32(c.r[4], 0u + 80u);
    set32(c.r[2], c.r[7].w[0] + 16u);
    mmi::mult(c, 0, c.r[8].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE120u);  if (depth < kMaxDepth) unit_002B(c, 246u, depth + 1u); else { c.pc = 0x001AE320u; return; } if (c.pc != 0x001AE120u) [[unlikely]] return; }
L_001AE120:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE130:
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[3], 0u + 80u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE16C; } }
    st32((c.r[2].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 20u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 5;
L_001AE16C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE178:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1120u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001AE1D4; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 80u);
    c.budget -= 2;
L_001AE1B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE1BCu);  if (depth < kMaxDepth) unit_002B(c, 246u, depth + 1u); else { c.pc = 0x001AE320u; return; } if (c.pc != 0x001AE1BCu) [[unlikely]] return; }
L_001AE1BC:
    set32(c.r[16], c.r[16].w[0] + 80u);
    set32(c.r[2], ld32((c.r[17].w[0] + 1120u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE1B0u | kUnwind; return; } goto L_001AE1B0; } }
L_001AE1D4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE1F0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 80u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1120u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001AE2E8; } }
    set32(c.r[21], 0u + 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[19], 0u - 666u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 80u);
    c.budget -= 5;
L_001AE240:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 112u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_001AE268; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE260u);  if (depth < kMaxDepth) unit_002B(c, 246u, depth + 1u); else { c.pc = 0x001AE320u; return; } if (c.pc != 0x001AE260u) [[unlikely]] return; }
L_001AE260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE2D0; } }
L_001AE268:
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE274u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001AE274u) [[unlikely]] return; }
L_001AE274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE2D0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE2A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AE2A8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2A0u);  if (depth < kMaxDepth) unit_002B(c, 251u, depth + 1u); else { c.pc = 0x001AE3C8u; return; } if (c.pc != 0x001AE2A0u) [[unlikely]] return; }
L_001AE2A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE2D0; } }
L_001AE2A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_001AE2D0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001AE2D0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE2D0u);  if (depth < kMaxDepth) unit_002B(c, 246u, depth + 1u); else { c.pc = 0x001AE320u; return; } if (c.pc != 0x001AE2D0u) [[unlikely]] return; }
L_001AE2D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 1120u)));
    set32(c.r[16], c.r[16].w[0] + 80u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE240u | kUnwind; return; } goto L_001AE240; } }
L_001AE2E8:
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
L_001AE310:
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE320:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[13] = c.f[12];
    st32((c.r[17].w[0] + 64u), 0u);
    c.f[14] = c.f[12];
    st32((c.r[17].w[0]), 0u);
    c.f[15] = c.f[12];
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE358u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001AE358u) [[unlikely]] return; }
L_001AE358:
    c.f[12] = 0u;
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE374u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001AE374u) [[unlikely]] return; }
L_001AE374:
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AE3AC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE394u);  if (depth < kMaxDepth) unit_008F(c, 42u, depth + 1u); else { c.pc = 0x0033C7B0u; return; } if (c.pc != 0x001AE394u) [[unlikely]] return; }
L_001AE394:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE3A4u);  if (depth < kMaxDepth) unit_008F(c, 42u, depth + 1u); else { c.pc = 0x0033C7B0u; return; } if (c.pc != 0x001AE3A4u) [[unlikely]] return; }
L_001AE3A4:
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 2;
L_001AE3AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE3C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x477A0000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = c.f[12];
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[8], 0u + 1u);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE418u);  if (depth < kMaxDepth) unit_006E(c, 158u, depth + 1u); else { c.pc = 0x002B9FD8u; return; } if (c.pc != 0x001AE418u) [[unlikely]] return; }
L_001AE418:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001AE430; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE474; } }
L_001AE430:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].d[0] = ld16((c.r[29].w[0]));
    c.f[1] = ld32((c.r[2].w[0] - 27740u));
    st16((c.r[4].w[0] + 7696u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AE470; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE464u);  if (depth < kMaxDepth) unit_002B(c, 185u, depth + 1u); else { c.pc = 0x001AD970u; return; } if (c.pc != 0x001AE464u) [[unlikely]] return; }
L_001AE464:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE474; } }
L_001AE470:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AE474:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE488:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE498:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE4A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE4A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE4D0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001AE4D0u) [[unlikely]] return; }
L_001AE4D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 22016u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE4ECu);  if (depth < kMaxDepth) unit_002B(c, 232u, depth + 1u); else { c.pc = 0x001AE0A8u; return; } if (c.pc != 0x001AE4ECu) [[unlikely]] return; }
L_001AE4EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE518u);  if (depth < kMaxDepth) unit_002B(c, 194u, depth + 1u); else { c.pc = 0x001ADAF0u; return; } if (c.pc != 0x001AE518u) [[unlikely]] return; }
L_001AE518:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AE528:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[6], c.r[3].w[0] + 14208u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[5].d[0] = c.r[5].d[0] | 54400ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[7], c.r[2].w[0] - 2592u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[3].w[0] - 2504u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[6].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 24;
L_001AE588:
    set32(c.r[2], ld32((c.r[6].w[0] + 10372u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE5A0; } }
    st32((c.r[2].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 10372u)));
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 3;
L_001AE5A0:
    set32(c.r[6], c.r[6].w[0] + 13248u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE588u | kUnwind; return; } goto L_001AE588; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[17], c.r[3].w[0] + 27456u);
    c.r[2].d[0] = c.r[2].d[0] | 41152ull;
    set32(c.r[22], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[21], 0u + 352u);
    set32(c.r[18], 0u + 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 8;
L_001AE5D0:
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[16], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_001AE63C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_001AE63C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 244u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 244u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001AE618; } }
    st32((c.r[16].w[0] + 244u), 0u);
    c.budget -= 1;
L_001AE618:
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE628u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001AE628u) [[unlikely]] return; }
L_001AE628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE63C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE63Cu);  if (depth < kMaxDepth) unit_002B(c, 275u, depth + 1u); else { c.pc = 0x001AE7F8u; return; } if (c.pc != 0x001AE63Cu) [[unlikely]] return; }
L_001AE63C:
    set32(c.r[17], c.r[17].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE5D0u | kUnwind; return; } goto L_001AE5D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 14192u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 520u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE66Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE66Cu) [[unlikely]] return; }
L_001AE66C:
    set32(c.r[2], ld32((c.r[23].w[0] - 26604u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[23].w[0] - 26604u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AE694; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE694u);  if (depth < kMaxDepth) unit_008D(c, 267u, depth + 1u); else { c.pc = 0x00336FE8u; return; } if (c.pc != 0x001AE694u) [[unlikely]] return; }
L_001AE694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE69Cu);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001AE69Cu) [[unlikely]] return; }
L_001AE69C:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C880000u);
    c.r[1].d[0] = c.r[1].d[0] | 34953ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE6C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AE6C0u) [[unlikely]] return; }
L_001AE6C0:
    set32(c.r[2], ld32((c.r[30].w[0] - 26600u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE6D8; } }
    st32((c.r[30].w[0] - 26600u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE740; } }
L_001AE6D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    c.r[2].d[0] = c.r[2].d[0] | 41152ull;
    set32(c.r[20], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[17], 0u + 1u);
    set32(c.r[18], 0u + 352u);
    c.budget -= 8;
L_001AE6F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001AE730; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_001AE730; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE730u);  if (depth < kMaxDepth) unit_002B(c, 285u, depth + 1u); else { c.pc = 0x001AEA40u; return; } if (c.pc != 0x001AE730u) [[unlikely]] return; }
L_001AE730:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE6F8u | kUnwind; return; } goto L_001AE6F8; } }
L_001AE740:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE74Cu);  if (depth < kMaxDepth) unit_002B(c, 316u, depth + 1u); else { c.pc = 0x001AF148u; return; } if (c.pc != 0x001AE74Cu) [[unlikely]] return; }
L_001AE74C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
L_001AE768:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 112u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001AE7B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_001AE7B0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 11504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_001AE7B0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 11516u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE7B0; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 10372u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AE7B0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    st32((c.r[4].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 2;
L_001AE7B0:
    set32(c.r[3], c.r[3].w[0] + 13248u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AE768u | kUnwind; return; } goto L_001AE768; } }
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
L_001AE7F8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 268u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    set32(c.r[17], c.r[19].w[0] + 272u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 240u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[20], c.r[5].w[0] - 1u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE854u);  if (depth < kMaxDepth) unit_004F(c, 39u, depth + 1u); else { c.pc = 0x0023C790u; return; } if (c.pc != 0x001AE854u) [[unlikely]] return; }
L_001AE854:
    set32(c.r[4], ld32((c.r[19].w[0] + 240u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE864u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001AE864u) [[unlikely]] return; }
L_001AE864:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE874u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001AE874u) [[unlikely]] return; }
L_001AE874:
    set32(c.r[6], ld32((c.r[19].w[0] + 240u)));
    set32(c.r[4], c.r[18].w[0] - 19312u);
    set32(c.r[5], c.r[19].w[0] + 320u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE888u);  if (depth < kMaxDepth) unit_0089(c, 11u, depth + 1u); else { c.pc = 0x003242A8u; return; } if (c.pc != 0x001AE888u) [[unlikely]] return; }
L_001AE888:
    set32(c.r[16], ld32((c.r[19].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.f[0] = 0u;
    c.f[1] = ld32((c.r[16].w[0] + 11240u));
    c.f[20] = ld32((c.r[2].w[0] - 26596u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AE8BC; } }
    c.f[0] = ld32((c.r[19].w[0] + 324u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE900; } }
L_001AE8BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE8C8u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001AE8C8u) [[unlikely]] return; }
L_001AE8C8:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AE8F8; } }
    c.f[0] = ld32((c.r[19].w[0] + 324u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE900; } }
L_001AE8F8:
    c.f[0] = ld32((c.r[19].w[0] + 324u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.budget -= 2;
L_001AE900:
    st32((c.r[19].w[0] + 324u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.f[0] = ld32((c.r[19].w[0] + 320u));
    set32(c.r[5], c.r[2].w[0] - 11856u);
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 10816u), c.f[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 240u)));
    c.f[0] = ld32((c.r[19].w[0] + 324u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 10820u), c.f[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 240u)));
    c.f[0] = ld32((c.r[19].w[0] + 328u));
    c.f[1] = ld32((c.r[4].w[0] + 136u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 10824u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 240u)));
    st32((c.r[3].w[0] + 10828u), c.f[2]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4272u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 27;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE984; } }
    set32(c.r[2], 0u + 192u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 628u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AE988; } }
L_001AE984:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AE988:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE9A8; } }
    set32(c.r[4], c.r[16].w[0] - 11856u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 272u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9A8u);  if (depth < kMaxDepth) unit_008E(c, 301u, depth + 1u); else { c.pc = 0x0033B520u; return; } if (c.pc != 0x001AE9A8u) [[unlikely]] return; }
L_001AE9A8:
    set32(c.r[4], ld32((c.r[19].w[0] + 240u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = ld64((c.r[4].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AE9D0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AE9E4; } }
L_001AE9D0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9DCu);  if (depth < kMaxDepth) unit_002B(c, 302u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AE9DCu) [[unlikely]] return; }
L_001AE9DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AEA00; } }
L_001AE9E4:
    set32(c.r[4], c.r[16].w[0] - 11856u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AE9F8u);  if (depth < kMaxDepth) unit_008F(c, 4u, depth + 1u); else { c.pc = 0x0033C038u; return; } if (c.pc != 0x001AE9F8u) [[unlikely]] return; }
L_001AE9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEA14; } }
L_001AEA00:
    set32(c.r[4], c.r[16].w[0] - 11856u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA14u);  if (depth < kMaxDepth) unit_008E(c, 365u, depth + 1u); else { c.pc = 0x0033BF40u; return; } if (c.pc != 0x001AEA14u) [[unlikely]] return; }
L_001AEA14:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AEA40:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEA74u);  if (depth < kMaxDepth) unit_0049(c, 280u, depth + 1u); else { c.pc = 0x00227468u; return; } if (c.pc != 0x001AEA74u) [[unlikely]] return; }
L_001AEA74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AEDE8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 11856u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4272u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEAB0; } }
    set32(c.r[2], 0u + 192u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 628u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEAB4; } }
L_001AEAB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AEAB4:
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    set32(c.r[16], c.r[17].w[0] + 256u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEDC8; } }
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEB98; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEADCu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001AEADCu) [[unlikely]] return; }
L_001AEADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEB98; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEB98; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[4].d[0];  if (t) { goto L_001AEB98; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[2], c.r[18].w[0] << 4);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 22808u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEB34; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEB38; } }
L_001AEB34:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AEB38:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[6].w[0] - 22808u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEB64; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEB68; } }
L_001AEB64:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AEB68:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001AEB98; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB7Cu);  if (depth < kMaxDepth) unit_0070(c, 70u, depth + 1u); else { c.pc = 0x002C0EC0u; return; } if (c.pc != 0x001AEB7Cu) [[unlikely]] return; }
L_001AEB7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEB98; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEB98u);  if (depth < kMaxDepth) unit_006E(c, 26u, depth + 1u); else { c.pc = 0x002B84C8u; return; } if (c.pc != 0x001AEB98u) [[unlikely]] return; }
L_001AEB98:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] - 11856u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBB0u);  if (depth < kMaxDepth) unit_008E(c, 304u, depth + 1u); else { c.pc = 0x0033B598u; return; } if (c.pc != 0x001AEBB0u) [[unlikely]] return; }
L_001AEBB0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBC0u);  if (depth < kMaxDepth) unit_0044(c, 275u, depth + 1u); else { c.pc = 0x00213C98u; return; } if (c.pc != 0x001AEBC0u) [[unlikely]] return; }
L_001AEBC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEBD0u);  if (depth < kMaxDepth) unit_0089(c, 217u, depth + 1u); else { c.pc = 0x00326770u; return; } if (c.pc != 0x001AEBD0u) [[unlikely]] return; }
L_001AEBD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[16], c.r[2].w[0] - 19312u);
    c.f[0] = ld32((c.r[3].w[0] + 10832u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 10832u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 10836u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 10836u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[3].w[0] + 10840u));
    c.f[1] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 10840u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[4] = ld32((c.r[17].w[0] + 336u));
    c.f[0] = ld32((c.r[2].w[0] + 10816u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[3] = ld32((c.r[2].w[0] + 128u));
    c.f[0] = fp::sub(c.f[4], c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 340u));
    c.f[2] = ld32((c.r[17].w[0] + 344u));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[3] = ld32((c.r[2].w[0] + 10820u));
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 10824u));
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    c.f[12] = ld32((c.r[2].w[0] + 10816u));
    c.f[12] = fp::sub(c.f[4], c.f[12]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC78u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x001AEC78u) [[unlikely]] return; }
L_001AEC78:
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0] + 344u));
    c.f[12] = ld32((c.r[5].w[0] + 10824u));
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEC94u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x001AEC94u) [[unlikely]] return; }
L_001AEC94:
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    c.f[1] = ld32((c.r[17].w[0] + 340u));
    c.f[0] = ld32((c.r[4].w[0] + 10820u));
    c.f[20] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECACu);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001AECACu) [[unlikely]] return; }
L_001AECAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AED08; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AECC0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001AECC0u) [[unlikely]] return; }
L_001AECC0:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AED38; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[5].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AED38; } }
    c.f[0] = ld32((c.r[17].w[0] + 340u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0] + 10820u));
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED00u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x001AED00u) [[unlikely]] return; }
L_001AED00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AED38; } }
L_001AED08:
    set32(c.r[5], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[5].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AED38; } }
    c.f[0] = ld32((c.r[17].w[0] + 340u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0] + 10820u));
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AED38u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x001AED38u) [[unlikely]] return; }
L_001AED38:
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    set32(c.r[5], c.r[17].w[0] + 256u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 10832u));
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 10832u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 10836u));
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[2].w[0] + 10836u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[3].w[0] + 10840u));
    c.f[1] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 10840u), c.f[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[17].w[0] + 256u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[5].w[0] + 12u), 0u);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEDA8u);  if (depth < kMaxDepth) unit_002B(c, 353u, depth + 1u); else { c.pc = 0x001AF690u; return; } if (c.pc != 0x001AEDA8u) [[unlikely]] return; }
L_001AEDA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEDB4u);  if (depth < kMaxDepth) unit_002B(c, 315u, depth + 1u); else { c.pc = 0x001AF090u; return; } if (c.pc != 0x001AEDB4u) [[unlikely]] return; }
L_001AEDB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEDC8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEDC8u);  if (depth < kMaxDepth) unit_0088(c, 219u, depth + 1u); else { c.pc = 0x003225A8u; return; } if (c.pc != 0x001AEDC8u) [[unlikely]] return; }
L_001AEDC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    st32((c.r[17].w[0] + 256u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 132u));
    st32((c.r[16].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 8u), c.f[0]);
    c.budget -= 8;
L_001AEDE8:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AEE10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 18848u);
    set32(c.r[5], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE38u);  if (depth < kMaxDepth) unit_0006(c, 77u, depth + 1u); else { c.pc = 0x001189D0u; return; } if (c.pc != 0x001AEE38u) [[unlikely]] return; }
L_001AEE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AEEC8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 240u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] + 28128u);
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_001AEEC8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE74u);  if (depth < kMaxDepth) unit_002B(c, 313u, depth + 1u); else { c.pc = 0x001AEFC0u; return; } if (c.pc != 0x001AEE74u) [[unlikely]] return; }
L_001AEE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEEA8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEE88u);  if (depth < kMaxDepth) unit_0088(c, 231u, depth + 1u); else { c.pc = 0x00322940u; return; } if (c.pc != 0x001AEE88u) [[unlikely]] return; }
L_001AEE88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEEA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] - 26592u)));
    st32((c.r[16].w[0] + 244u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEFA8; } }
L_001AEEA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 244u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001AEED4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEEC0u);  if (depth < kMaxDepth) unit_0088(c, 231u, depth + 1u); else { c.pc = 0x00322940u; return; } if (c.pc != 0x001AEEC0u) [[unlikely]] return; }
L_001AEEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEED4; } }
L_001AEEC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEFA8; } }
L_001AEED4:
    st32((c.r[16].w[0] + 244u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEEE4u);  if (depth < kMaxDepth) unit_002B(c, 313u, depth + 1u); else { c.pc = 0x001AEFC0u; return; } if (c.pc != 0x001AEEE4u) [[unlikely]] return; }
L_001AEEE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AEF0C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEEF8u);  if (depth < kMaxDepth) unit_0088(c, 231u, depth + 1u); else { c.pc = 0x00322940u; return; } if (c.pc != 0x001AEEF8u) [[unlikely]] return; }
L_001AEEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AEF0C; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AEF1C; } }
L_001AEF0C:
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF18u);  if (depth < kMaxDepth) unit_0088(c, 231u, depth + 1u); else { c.pc = 0x00322940u; return; } if (c.pc != 0x001AEF18u) [[unlikely]] return; }
L_001AEF18:
    c.r[17].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 1;
L_001AEF1C:
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] + 18288u);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF44u);  if (depth < kMaxDepth) unit_0067(c, 150u, depth + 1u); else { c.pc = 0x0029D7A8u; return; } if (c.pc != 0x001AEF44u) [[unlikely]] return; }
L_001AEF44:
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    set32(c.r[6], 0u + 1536u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00720000u);
    if (c.r[2].d[0] != 0) c.r[17].d[0] = 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] - 6944u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] - 1392u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    if (c.r[7].d[0] != 0) c.r[17].d[0] = 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF80u);  if (depth < kMaxDepth) unit_006B(c, 108u, depth + 1u); else { c.pc = 0x002AE560u; return; } if (c.pc != 0x001AEF80u) [[unlikely]] return; }
L_001AEF80:
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AEF90u);  if (depth < kMaxDepth) unit_002B(c, 357u, depth + 1u); else { c.pc = 0x001AF738u; return; } if (c.pc != 0x001AEF90u) [[unlikely]] return; }
L_001AEF90:
    set32(c.r[4], ld32((c.r[16].w[0] + 240u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 11332u)));
    c.r[2].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[17].d[0];
    c.budget -= 6;
L_001AEFA8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AEFC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AEFD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AEFD8:
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 22808u);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF014; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF018; } }
L_001AF014:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF018:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001AF030; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001AF080; } }
L_001AF030:
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[5].w[0] - 22808u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF05C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF060; } }
L_001AF05C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF060:
    set32(c.r[5], ld32((c.r[3].w[0] + 320u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 1u));
    c.r[3].d[0] = c.r[3].d[0] >> 7;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF084; } }
L_001AF080:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF084:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF090:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 240u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 22808u);
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF0D4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF0D8; } }
L_001AF0D4:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF0D8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF13C; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 240u)));
    set32(c.r[4], c.r[6].w[0] - 22808u);
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF118; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF11C; } }
L_001AF118:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF11C:
    set32(c.r[5], ld32((c.r[4].w[0] + 320u)));
    set32(c.r[4], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AF140; } }
L_001AF13C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF140:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF148:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[3], 0u + 1u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[2].w[0] - 26588u)));
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.budget -= 17;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_001AF310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 54400ull;
    set32(c.r[18], c.r[4].w[0] - 19312u);
    set32(c.r[21], 0u + 352u);
    set32(c.r[23], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[20], c.r[2].w[0] + 10816u);
    set32(c.r[22], 0u + 1u);
    c.budget -= 11;
L_001AF1B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1C8u);  if (depth < kMaxDepth) unit_0088(c, 318u, depth + 1u); else { c.pc = 0x00323A18u; return; } if (c.pc != 0x001AF1C8u) [[unlikely]] return; }
L_001AF1C8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001AF2FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF1F0u);  if (depth < kMaxDepth) unit_002B(c, 302u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AF1F0u) [[unlikely]] return; }
L_001AF1F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF2FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001AF2FC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF210u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001AF210u) [[unlikely]] return; }
L_001AF210:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_001AF2FC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF238u);  if (depth < kMaxDepth) unit_002B(c, 302u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AF238u) [[unlikely]] return; }
L_001AF238:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF2FC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF24Cu);  if (depth < kMaxDepth) unit_0089(c, 174u, depth + 1u); else { c.pc = 0x00325ED8u; return; } if (c.pc != 0x001AF24Cu) [[unlikely]] return; }
L_001AF24C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF2FC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF260u);  if (depth < kMaxDepth) unit_0089(c, 174u, depth + 1u); else { c.pc = 0x00325ED8u; return; } if (c.pc != 0x001AF260u) [[unlikely]] return; }
L_001AF260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF2FC; } }
    mmi::por(c.r[2], c.r[0], c.r[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF280u);  if (depth < kMaxDepth) unit_007A(c, 172u, depth + 1u); else { c.pc = 0x002E9FD0u; return; } if (c.pc != 0x001AF280u) [[unlikely]] return; }
L_001AF280:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 10816u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF294u);  if (depth < kMaxDepth) unit_007A(c, 172u, depth + 1u); else { c.pc = 0x002E9FD0u; return; } if (c.pc != 0x001AF294u) [[unlikely]] return; }
L_001AF294:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AF2D4; } }
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2B8u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x001AF2B8u) [[unlikely]] return; }
L_001AF2B8:
    c.f[12] = ld32((c.r[17].w[0] + 136u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2CCu);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x001AF2CCu) [[unlikely]] return; }
L_001AF2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF2FC; } }
L_001AF2D4:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2E8u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x001AF2E8u) [[unlikely]] return; }
L_001AF2E8:
    c.f[12] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF2FCu);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x001AF2FCu) [[unlikely]] return; }
L_001AF2FC:
    set32(c.r[17], c.r[17].w[0] + 13248u);
    set32(c.r[20], c.r[20].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[23].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF1B8u | kUnwind; return; } goto L_001AF1B8; } }
L_001AF310:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF348:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001AF408; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001AF408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[2].w[0] + 23184u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF37Cu);  if (depth < kMaxDepth) unit_0089(c, 216u, depth + 1u); else { c.pc = 0x00326748u; return; } if (c.pc != 0x001AF37Cu) [[unlikely]] return; }
L_001AF37C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 30984u);
    set32(c.r[3], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u + 13u);
    c.budget -= 7;
L_001AF398:
    st32((c.r[3].w[0] + 184u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0] + 176u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 180u), 0u);
    st32((c.r[3].w[0] + 244u), 0u);
    set32(c.r[3], c.r[3].w[0] + 352u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF398u | kUnwind; return; } goto L_001AF398; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 41152ull;
    set32(c.r[4], c.r[4].w[0] + 27456u);
    st32((c.r[2].w[0] - 26608u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 4832u);
    set32(c.r[3], 0u + 13u);
    c.budget -= 10;
L_001AF3E0:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 352u);
    set32(c.r[4], c.r[4].w[0] - 13248u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF3E0u | kUnwind; return; } goto L_001AF3E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 2840u);
    st32((c.r[3].w[0] + 948u), c.r[2].w[0]);
    c.budget -= 4;
L_001AF408:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF420:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 26608u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] - 26608u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF45Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF45Cu) [[unlikely]] return; }
L_001AF45C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 26608u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF4A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF4A0u) [[unlikely]] return; }
L_001AF4A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF4B0:
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[3], 0u + 352u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF4D0:
    set32(c.r[3], 0u + 352u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF4E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 352u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 26608u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF518u);  if (depth < kMaxDepth) unit_002B(c, 354u, depth + 1u); else { c.pc = 0x001AF698u; return; } if (c.pc != 0x001AF518u) [[unlikely]] return; }
L_001AF518:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF528:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF540u);  if (depth < kMaxDepth) unit_0089(c, 216u, depth + 1u); else { c.pc = 0x00326748u; return; } if (c.pc != 0x001AF540u) [[unlikely]] return; }
L_001AF540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 30984u);
    set32(c.r[3], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u + 13u);
    c.budget -= 6;
L_001AF558:
    st32((c.r[3].w[0] + 184u), 0u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[3].w[0] + 176u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 180u), 0u);
    st32((c.r[3].w[0] + 244u), 0u);
    set32(c.r[3], c.r[3].w[0] + 352u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF558u | kUnwind; return; } goto L_001AF558; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    st32((c.r[2].w[0] - 26608u), c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 41152ull;
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 4832u);
    c.budget -= 10;
L_001AF5A0:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 352u);
    set32(c.r[4], c.r[4].w[0] - 13248u);
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF5A0u | kUnwind; return; } goto L_001AF5A0; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    set32(c.r[3], c.r[3].w[0] - 2840u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0] + 948u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF5E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF600u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001AF600u) [[unlikely]] return; }
L_001AF600:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF620u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF620u) [[unlikely]] return; }
L_001AF620:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF638:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF658u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001AF658u) [[unlikely]] return; }
L_001AF658:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[17].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF678u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF678u) [[unlikely]] return; }
L_001AF678:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF698:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 40u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 240u)));
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    c.f[21] = fp::add(c.f[13], c.f[0]);
    c.f[20] = fp::add(c.f[12], c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF6CCu);  if (depth < kMaxDepth) unit_002B(c, 302u, depth + 1u); else { c.pc = 0x001AEE10u; return; } if (c.pc != 0x001AF6CCu) [[unlikely]] return; }
L_001AF6CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF718; } }
    c.f[13] = ld32((c.r[16].w[0] + 264u));
    c.f[14] = c.f[20];
    c.f[12] = ld32((c.r[16].w[0] + 256u));
    c.f[15] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF6ECu);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x001AF6ECu) [[unlikely]] return; }
L_001AF6EC:
    set32(c.r[2], 0u + 2000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[3].w[0] - 7520u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AF71C; } }
L_001AF718:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AF71C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 40u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF738:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF748:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF760u);  if (depth < kMaxDepth) unit_002B(c, 330u, depth + 1u); else { c.pc = 0x001AF348u; return; } if (c.pc != 0x001AF760u) [[unlikely]] return; }
L_001AF760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF770:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF7A4u) [[unlikely]] return; }
L_001AF7A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF7B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF8AC; } }
L_001AF7B8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7D0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001AF7D0u) [[unlikely]] return; }
L_001AF7D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7E4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001AF7E4u) [[unlikely]] return; }
L_001AF7E4:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF7F0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001AF7F0u) [[unlikely]] return; }
L_001AF7F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF81C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF808u);  if (depth < kMaxDepth) unit_002B(c, 370u, depth + 1u); else { c.pc = 0x001AF8D0u; return; } if (c.pc != 0x001AF808u) [[unlikely]] return; }
L_001AF808:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF81C; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF8AC; } }
L_001AF81C:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF844; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF838u);  if (depth < kMaxDepth) unit_0019(c, 243u, depth + 1u); else { c.pc = 0x00166828u; return; } if (c.pc != 0x001AF838u) [[unlikely]] return; }
L_001AF838:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF870; } }
L_001AF844:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF850u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x001AF850u) [[unlikely]] return; }
L_001AF850:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF86C; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.r[17].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF870; } }
L_001AF86C:
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_001AF870:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF880u);  if (depth < kMaxDepth) unit_002B(c, 370u, depth + 1u); else { c.pc = 0x001AF8D0u; return; } if (c.pc != 0x001AF880u) [[unlikely]] return; }
L_001AF880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF8A8; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF898u);  if (depth < kMaxDepth) unit_002B(c, 370u, depth + 1u); else { c.pc = 0x001AF8D0u; return; } if (c.pc != 0x001AF898u) [[unlikely]] return; }
L_001AF898:
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AF8AC; } }
L_001AF8A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001AF8AC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AF8D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10090u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001AF900; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF90C; } }
L_001AF900:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFA04; } }
L_001AF90C:
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF900u | kUnwind; return; } goto L_001AF900; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 6944u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 988u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AF900u | kUnwind; return; } goto L_001AF900; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF954u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF954u) [[unlikely]] return; }
L_001AF954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AF9A0; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF96Cu);  if (depth < kMaxDepth) unit_0089(c, 196u, depth + 1u); else { c.pc = 0x00326188u; return; } if (c.pc != 0x001AF96Cu) [[unlikely]] return; }
L_001AF96C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF97Cu);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x001AF97Cu) [[unlikely]] return; }
L_001AF97C:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AF9A0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFA04; } }
L_001AF9A0:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF9B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AF9B8u) [[unlikely]] return; }
L_001AF9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFA00; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF9D4u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x001AF9D4u) [[unlikely]] return; }
L_001AF9D4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AF9E4u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x001AF9E4u) [[unlikely]] return; }
L_001AF9E4:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AFA04; } }
L_001AFA00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AFA04:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 30912u);
    st32((c.r[4].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA50:
    set32(c.r[2], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA70:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFA80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 30912u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.f[12]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[7].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFAB4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001AFAB4u) [[unlikely]] return; }
L_001AFAB4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFAE8u);  if (depth < kMaxDepth) unit_002B(c, 360u, depth + 1u); else { c.pc = 0x001AF770u; return; } if (c.pc != 0x001AFAE8u) [[unlikely]] return; }
L_001AFAE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001AFB14; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AFB10u) [[unlikely]] return; }
L_001AFB10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001AFB14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFB28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AFB58u) [[unlikely]] return; }
L_001AFB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFBA4; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB70u);  if (depth < kMaxDepth) unit_0089(c, 196u, depth + 1u); else { c.pc = 0x00326188u; return; } if (c.pc != 0x001AFB70u) [[unlikely]] return; }
L_001AFB70:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFB80u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x001AFB80u) [[unlikely]] return; }
L_001AFB80:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AFBA4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFC08; } }
L_001AFBA4:
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFBBCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001AFBBCu) [[unlikely]] return; }
L_001AFBBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFC04; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFBD8u);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x001AFBD8u) [[unlikely]] return; }
L_001AFBD8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFBE8u);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x001AFBE8u) [[unlikely]] return; }
L_001AFBE8:
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    set32(c.r[2], 0u + 1u);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001AFC08; } }
L_001AFC04:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001AFC08:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFC20:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFCE0; } }
    set32(c.r[2], c.r[5].w[0] + 256u);
    set32(c.r[17], c.r[16].w[0] + 272u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[18], c.r[16].w[0] + 304u);
    set32(c.r[19], c.r[16].w[0] + 320u);
    set32(c.r[20], c.r[16].w[0] + 336u);
    set32(c.r[21], c.r[16].w[0] + 352u);
    c.budget -= 9;
L_001AFC88:
    ldl(c.r[4], (c.r[5].w[0] + 7u));
    ldr(c.r[4], (c.r[5].w[0]));
    ldl(c.r[6], (c.r[5].w[0] + 15u));
    ldr(c.r[6], (c.r[5].w[0] + 8u));
    ldl(c.r[7], (c.r[5].w[0] + 23u));
    ldr(c.r[7], (c.r[5].w[0] + 16u));
    ldl(c.r[8], (c.r[5].w[0] + 31u));
    ldr(c.r[8], (c.r[5].w[0] + 24u));
    sdl(c.r[4], (c.r[3].w[0] + 7u));
    sdr(c.r[4], (c.r[3].w[0]));
    sdl(c.r[6], (c.r[3].w[0] + 15u));
    sdr(c.r[6], (c.r[3].w[0] + 8u));
    sdl(c.r[7], (c.r[3].w[0] + 23u));
    sdr(c.r[7], (c.r[3].w[0] + 16u));
    sdl(c.r[8], (c.r[3].w[0] + 31u));
    sdr(c.r[8], (c.r[3].w[0] + 24u));
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFC88u | kUnwind; return; } goto L_001AFC88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFD34; } }
L_001AFCE0:
    set32(c.r[2], c.r[5].w[0] + 256u);
    set32(c.r[17], c.r[16].w[0] + 272u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[18], c.r[16].w[0] + 304u);
    set32(c.r[19], c.r[16].w[0] + 320u);
    set32(c.r[20], c.r[16].w[0] + 336u);
    set32(c.r[21], c.r[16].w[0] + 352u);
    c.budget -= 9;
L_001AFD04:
    c.r[4].d[0] = ld64((c.r[5].w[0]));
    c.r[6].d[0] = ld64((c.r[5].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[5].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[5].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[4].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[6].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[5], c.r[5].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001AFD04u | kUnwind; return; } goto L_001AFD04; } }
L_001AFD34:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD40u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001AFD40u) [[unlikely]] return; }
L_001AFD40:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD50u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001AFD50u) [[unlikely]] return; }
L_001AFD50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD78u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001AFD78u) [[unlikely]] return; }
L_001AFD78:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001AFD88u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001AFD88u) [[unlikely]] return; }
L_001AFD88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 264u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[3] = c.r[1].w[0];
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[0]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[4] = ld32((c.r[2].w[0] - 25352u));
    c.f[5] = ld32((c.r[30].w[0] - 25348u));
    c.f[6] = ld32((c.r[23].w[0] - 25344u));
    c.f[7] = ld32((c.r[22].w[0] - 25340u));
    st32((c.r[16].w[0] + 304u), c.f[0]);
    c.f[1] = fp::add(c.f[5], c.f[6]);
    st32((c.r[18].w[0] + 4u), c.f[3]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.f[1] = fp::add(c.f[1], c.f[7]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.f[0] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[18].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 16u));
    c.f[2] = ld32((c.r[29].w[0] + 20u));
    st32((c.r[16].w[0] + 320u), c.f[1]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 28u));
    st32((c.r[19].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    st32((c.r[16].w[0] + 336u), c.f[0]);
    st32((c.r[20].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    st32((c.r[20].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 44u));
    st32((c.r[20].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    st32((c.r[16].w[0] + 352u), c.f[0]);
    st32((c.r[21].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[21].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 12u));
    st32((c.r[21].w[0] + 12u), c.f[1]);
    st32((c.r[17].w[0] + 116u), c.f[4]);
    st32((c.r[17].w[0] + 112u), 0u);
    c.budget -= 68;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001AFEB8; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[17].w[0] + 108u), c.f[4]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 96u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001AFEE0; } }
L_001AFEB8:
    c.f[0] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[17].w[0] + 4u), 0u);
    c.f[2] = fp::mul(c.f[4], c.f[6]);
    st32((c.r[17].w[0] + 16u), 0u);
    c.f[1] = fp::mul(c.f[4], c.f[7]);
    st32((c.r[17].w[0] + 96u), c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    st32((c.r[17].w[0] + 108u), c.f[1]);
    c.budget -= 10;
L_001AFEE0:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001AFF20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 260u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFF50; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001AFF50:
    set32(c.r[3], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFF6C; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001AFF6C:
    set32(c.r[17], c.r[16].w[0] + 272u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002C(c, 8u, depth); } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_002C(c, 7u, depth); } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001AFFA8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001AFFC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002C(c, 7u, depth); } }
L_001AFFA8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002C(c, 3u, depth); } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_002C(c, 5u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_002C(c, 7u, depth); } }
L_001AFFC8:
    c.f[12] = ld32((c.r[17].w[0] + 112u));
    c.f[2] = ld32((c.r[17].w[0] + 96u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_002C(c, 2u, depth); } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    fpu_div(c, 12u, c.f[12], c.f[2]);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.budget -= 8;
    [[clang::musttail]] return unit_002C(c, 1u, depth);
}

}
