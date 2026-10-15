#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0092[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0,
    34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0,
    0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0,
    0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0,
    243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0,
    0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0,
    260, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0,
    0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0,
    0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 400, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0092(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00348000;
    case 2u: goto L_00348008;
    case 3u: goto L_0034802C;
    case 4u: goto L_00348034;
    case 5u: goto L_00348050;
    case 6u: goto L_0034805C;
    case 7u: goto L_00348088;
    case 8u: goto L_003480D0;
    case 9u: goto L_003480D8;
    case 10u: goto L_003480E8;
    case 11u: goto L_00348110;
    case 12u: goto L_00348130;
    case 13u: goto L_00348140;
    case 14u: goto L_00348150;
    case 15u: goto L_003481B0;
    case 16u: goto L_003481B8;
    case 17u: goto L_003481D0;
    case 18u: goto L_003481D8;
    case 19u: goto L_003481E8;
    case 20u: goto L_003481F0;
    case 21u: goto L_00348218;
    case 22u: goto L_00348230;
    case 23u: goto L_0034825C;
    case 24u: goto L_00348270;
    case 25u: goto L_00348284;
    case 26u: goto L_0034829C;
    case 27u: goto L_003482D0;
    case 28u: goto L_003482E0;
    case 29u: goto L_00348310;
    case 30u: goto L_00348328;
    case 31u: goto L_00348348;
    case 32u: goto L_00348350;
    case 33u: goto L_0034836C;
    case 34u: goto L_00348380;
    case 35u: goto L_00348388;
    case 36u: goto L_003483A4;
    case 37u: goto L_003483AC;
    case 38u: goto L_00348428;
    case 39u: goto L_00348444;
    case 40u: goto L_0034844C;
    case 41u: goto L_00348478;
    case 42u: goto L_00348484;
    case 43u: goto L_003484AC;
    case 44u: goto L_003484D4;
    case 45u: goto L_003484E4;
    case 46u: goto L_00348500;
    case 47u: goto L_00348510;
    case 48u: goto L_00348518;
    case 49u: goto L_00348534;
    case 50u: goto L_0034853C;
    case 51u: goto L_0034855C;
    case 52u: goto L_00348564;
    case 53u: goto L_00348578;
    case 54u: goto L_003485B8;
    case 55u: goto L_003485C0;
    case 56u: goto L_003485D4;
    case 57u: goto L_0034861C;
    case 58u: goto L_00348640;
    case 59u: goto L_00348650;
    case 60u: goto L_00348670;
    case 61u: goto L_003486A4;
    case 62u: goto L_00348760;
    case 63u: goto L_00348784;
    case 64u: goto L_0034879C;
    case 65u: goto L_003487B8;
    case 66u: goto L_003487D4;
    case 67u: goto L_003487DC;
    case 68u: goto L_003487FC;
    case 69u: goto L_0034881C;
    case 70u: goto L_00348824;
    case 71u: goto L_00348878;
    case 72u: goto L_00348888;
    case 73u: goto L_003488B0;
    case 74u: goto L_003488C0;
    case 75u: goto L_003488C8;
    case 76u: goto L_003488E4;
    case 77u: goto L_003488FC;
    case 78u: goto L_00348934;
    case 79u: goto L_00348960;
    case 80u: goto L_00348970;
    case 81u: goto L_00348994;
    case 82u: goto L_0034899C;
    case 83u: goto L_003489B8;
    case 84u: goto L_003489D4;
    case 85u: goto L_003489DC;
    case 86u: goto L_00348A54;
    case 87u: goto L_00348A80;
    case 88u: goto L_00348A9C;
    case 89u: goto L_00348AB0;
    case 90u: goto L_00348ABC;
    case 91u: goto L_00348AC4;
    case 92u: goto L_00348AE4;
    case 93u: goto L_00348B04;
    case 94u: goto L_00348B1C;
    case 95u: goto L_00348B30;
    case 96u: goto L_00348B38;
    case 97u: goto L_00348B68;
    case 98u: goto L_00348B7C;
    case 99u: goto L_00348BBC;
    case 100u: goto L_00348C44;
    case 101u: goto L_00348C78;
    case 102u: goto L_00348CB0;
    case 103u: goto L_00348CDC;
    case 104u: goto L_00348D08;
    case 105u: goto L_00348D2C;
    case 106u: goto L_00348D8C;
    case 107u: goto L_00348DE0;
    case 108u: goto L_00348E58;
    case 109u: goto L_00348E94;
    case 110u: goto L_00348EA8;
    case 111u: goto L_00348EB4;
    case 112u: goto L_00348EC8;
    case 113u: goto L_00348EDC;
    case 114u: goto L_00348F00;
    case 115u: goto L_00348F24;
    case 116u: goto L_00348F34;
    case 117u: goto L_00348F3C;
    case 118u: goto L_00348F5C;
    case 119u: goto L_00348F78;
    case 120u: goto L_00348FE8;
    case 121u: goto L_00348FF8;
    case 122u: goto L_00349000;
    case 123u: goto L_00349070;
    case 124u: goto L_00349080;
    case 125u: goto L_00349088;
    case 126u: goto L_003490C4;
    case 127u: goto L_003490D4;
    case 128u: goto L_003490DC;
    case 129u: goto L_00349118;
    case 130u: goto L_00349128;
    case 131u: goto L_00349130;
    case 132u: goto L_00349140;
    case 133u: goto L_00349150;
    case 134u: goto L_00349158;
    case 135u: goto L_00349184;
    case 136u: goto L_0034918C;
    case 137u: goto L_0034919C;
    case 138u: goto L_003491A8;
    case 139u: goto L_003491B8;
    case 140u: goto L_003491C0;
    case 141u: goto L_003491D8;
    case 142u: goto L_003491E0;
    case 143u: goto L_003491F0;
    case 144u: goto L_00349208;
    case 145u: goto L_00349214;
    case 146u: goto L_00349224;
    case 147u: goto L_003492BC;
    case 148u: goto L_003492C4;
    case 149u: goto L_00349348;
    case 150u: goto L_00349350;
    case 151u: goto L_003493B4;
    case 152u: goto L_003493D0;
    case 153u: goto L_00349414;
    case 154u: goto L_0034941C;
    case 155u: goto L_003494A8;
    case 156u: goto L_003494DC;
    case 157u: goto L_003494E4;
    case 158u: goto L_00349508;
    case 159u: goto L_00349544;
    case 160u: goto L_0034958C;
    case 161u: goto L_003495C4;
    case 162u: goto L_00349600;
    case 163u: goto L_00349628;
    case 164u: goto L_00349644;
    case 165u: goto L_00349658;
    case 166u: goto L_00349670;
    case 167u: goto L_00349690;
    case 168u: goto L_0034969C;
    case 169u: goto L_003496F4;
    case 170u: goto L_00349704;
    case 171u: goto L_00349718;
    case 172u: goto L_0034972C;
    case 173u: goto L_00349734;
    case 174u: goto L_00349744;
    case 175u: goto L_00349754;
    case 176u: goto L_00349778;
    case 177u: goto L_00349798;
    case 178u: goto L_003497A8;
    case 179u: goto L_00349808;
    case 180u: goto L_00349868;
    case 181u: goto L_00349978;
    case 182u: goto L_00349980;
    case 183u: goto L_0034998C;
    case 184u: goto L_003499EC;
    case 185u: goto L_00349AA0;
    case 186u: goto L_00349AE4;
    case 187u: goto L_00349AEC;
    case 188u: goto L_00349B04;
    case 189u: goto L_00349B1C;
    case 190u: goto L_00349B24;
    case 191u: goto L_00349B98;
    case 192u: goto L_00349BE4;
    case 193u: goto L_00349C18;
    case 194u: goto L_00349C90;
    case 195u: goto L_00349CCC;
    case 196u: goto L_00349D40;
    case 197u: goto L_00349D64;
    case 198u: goto L_00349D80;
    case 199u: goto L_00349DAC;
    case 200u: goto L_00349E30;
    case 201u: goto L_00349E5C;
    case 202u: goto L_00349E68;
    case 203u: goto L_00349EC8;
    case 204u: goto L_00349ED4;
    case 205u: goto L_00349EE0;
    case 206u: goto L_00349F2C;
    case 207u: goto L_00349F34;
    case 208u: goto L_00349F7C;
    case 209u: goto L_00349F8C;
    case 210u: goto L_00349FA4;
    case 211u: goto L_00349FCC;
    case 212u: goto L_00349FE4;
    case 213u: goto L_00349FF0;
    case 214u: goto L_0034A03C;
    case 215u: goto L_0034A04C;
    case 216u: goto L_0034A0C0;
    case 217u: goto L_0034A10C;
    case 218u: goto L_0034A138;
    case 219u: goto L_0034A1C0;
    case 220u: goto L_0034A1EC;
    case 221u: goto L_0034A230;
    case 222u: goto L_0034A294;
    case 223u: goto L_0034A2CC;
    case 224u: goto L_0034A2D8;
    case 225u: goto L_0034A358;
    case 226u: goto L_0034A37C;
    case 227u: goto L_0034A390;
    case 228u: goto L_0034A3A8;
    case 229u: goto L_0034A3C0;
    case 230u: goto L_0034A418;
    case 231u: goto L_0034A430;
    case 232u: goto L_0034A448;
    case 233u: goto L_0034A450;
    case 234u: goto L_0034A494;
    case 235u: goto L_0034A4B4;
    case 236u: goto L_0034A4BC;
    case 237u: goto L_0034A4D0;
    case 238u: goto L_0034A500;
    case 239u: goto L_0034A508;
    case 240u: goto L_0034A540;
    case 241u: goto L_0034A55C;
    case 242u: goto L_0034A578;
    case 243u: goto L_0034A580;
    case 244u: goto L_0034A598;
    case 245u: goto L_0034A5A0;
    case 246u: goto L_0034A5BC;
    case 247u: goto L_0034A5C4;
    case 248u: goto L_0034A5E0;
    case 249u: goto L_0034A5E8;
    case 250u: goto L_0034A604;
    case 251u: goto L_0034A60C;
    case 252u: goto L_0034A640;
    case 253u: goto L_0034A648;
    case 254u: goto L_0034A664;
    case 255u: goto L_0034A678;
    case 256u: goto L_0034A68C;
    case 257u: goto L_0034A6EC;
    case 258u: goto L_0034A740;
    case 259u: goto L_0034A778;
    case 260u: goto L_0034A780;
    case 261u: goto L_0034A78C;
    case 262u: goto L_0034A7A0;
    case 263u: goto L_0034A7C4;
    case 264u: goto L_0034A7D8;
    case 265u: goto L_0034A808;
    case 266u: goto L_0034A810;
    case 267u: goto L_0034A850;
    case 268u: goto L_0034A858;
    case 269u: goto L_0034A87C;
    case 270u: goto L_0034A884;
    case 271u: goto L_0034A8C0;
    case 272u: goto L_0034A92C;
    case 273u: goto L_0034A94C;
    case 274u: goto L_0034A954;
    case 275u: goto L_0034A968;
    case 276u: goto L_0034A970;
    case 277u: goto L_0034A984;
    case 278u: goto L_0034A98C;
    case 279u: goto L_0034A9A0;
    case 280u: goto L_0034A9A8;
    case 281u: goto L_0034A9BC;
    case 282u: goto L_0034A9C4;
    case 283u: goto L_0034A9D8;
    case 284u: goto L_0034A9E0;
    case 285u: goto L_0034A9F8;
    case 286u: goto L_0034AA00;
    case 287u: goto L_0034AA28;
    case 288u: goto L_0034AA4C;
    case 289u: goto L_0034AA64;
    case 290u: goto L_0034AA78;
    case 291u: goto L_0034AAA8;
    case 292u: goto L_0034AAB0;
    case 293u: goto L_0034AACC;
    case 294u: goto L_0034AADC;
    case 295u: goto L_0034AAF4;
    case 296u: goto L_0034AB44;
    case 297u: goto L_0034AB80;
    case 298u: goto L_0034ABD0;
    case 299u: goto L_0034ABE8;
    case 300u: goto L_0034AC18;
    case 301u: goto L_0034AC78;
    case 302u: goto L_0034AC80;
    case 303u: goto L_0034ACB0;
    case 304u: goto L_0034ACB8;
    case 305u: goto L_0034AD18;
    case 306u: goto L_0034AD30;
    case 307u: goto L_0034AD90;
    case 308u: goto L_0034ADA8;
    case 309u: goto L_0034ADD8;
    case 310u: goto L_0034AE38;
    case 311u: goto L_0034AE40;
    case 312u: goto L_0034AE70;
    case 313u: goto L_0034AE78;
    case 314u: goto L_0034AED8;
    case 315u: goto L_0034AEF0;
    case 316u: goto L_0034AF50;
    case 317u: goto L_0034AF68;
    case 318u: goto L_0034AF98;
    case 319u: goto L_0034AFF8;
    case 320u: goto L_0034B000;
    case 321u: goto L_0034B030;
    case 322u: goto L_0034B038;
    case 323u: goto L_0034B098;
    case 324u: goto L_0034B0B0;
    case 325u: goto L_0034B110;
    case 326u: goto L_0034B128;
    case 327u: goto L_0034B158;
    case 328u: goto L_0034B1B8;
    case 329u: goto L_0034B1C0;
    case 330u: goto L_0034B200;
    case 331u: goto L_0034B208;
    case 332u: goto L_0034B274;
    case 333u: goto L_0034B298;
    case 334u: goto L_0034B304;
    case 335u: goto L_0034B318;
    case 336u: goto L_0034B348;
    case 337u: goto L_0034B3A8;
    case 338u: goto L_0034B3B0;
    case 339u: goto L_0034B3E0;
    case 340u: goto L_0034B3E8;
    case 341u: goto L_0034B448;
    case 342u: goto L_0034B460;
    case 343u: goto L_0034B4C0;
    case 344u: goto L_0034B4E8;
    case 345u: goto L_0034B518;
    case 346u: goto L_0034B558;
    case 347u: goto L_0034B568;
    case 348u: goto L_0034B598;
    case 349u: goto L_0034B5A8;
    case 350u: goto L_0034B5E4;
    case 351u: goto L_0034B5F8;
    case 352u: goto L_0034B63C;
    case 353u: goto L_0034B650;
    case 354u: goto L_0034B680;
    case 355u: goto L_0034B6E0;
    case 356u: goto L_0034B6E8;
    case 357u: goto L_0034B718;
    case 358u: goto L_0034B720;
    case 359u: goto L_0034B780;
    case 360u: goto L_0034B798;
    case 361u: goto L_0034B7F8;
    case 362u: goto L_0034B810;
    case 363u: goto L_0034B840;
    case 364u: goto L_0034B8A0;
    case 365u: goto L_0034B8A8;
    case 366u: goto L_0034B8D8;
    case 367u: goto L_0034B8E0;
    case 368u: goto L_0034B940;
    case 369u: goto L_0034B958;
    case 370u: goto L_0034B9B8;
    case 371u: goto L_0034B9D0;
    case 372u: goto L_0034BA00;
    case 373u: goto L_0034BA60;
    case 374u: goto L_0034BA68;
    case 375u: goto L_0034BA98;
    case 376u: goto L_0034BAA0;
    case 377u: goto L_0034BB00;
    case 378u: goto L_0034BB18;
    case 379u: goto L_0034BB78;
    case 380u: goto L_0034BB90;
    case 381u: goto L_0034BBC0;
    case 382u: goto L_0034BC20;
    case 383u: goto L_0034BC28;
    case 384u: goto L_0034BC58;
    case 385u: goto L_0034BC60;
    case 386u: goto L_0034BCC0;
    case 387u: goto L_0034BCD8;
    case 388u: goto L_0034BD38;
    case 389u: goto L_0034BD58;
    case 390u: goto L_0034BD88;
    case 391u: goto L_0034BDE4;
    case 392u: goto L_0034BDF8;
    case 393u: goto L_0034BE28;
    case 394u: goto L_0034BE30;
    case 395u: goto L_0034BE8C;
    case 396u: goto L_0034BEA0;
    case 397u: goto L_0034BEFC;
    case 398u: goto L_0034BF10;
    case 399u: goto L_0034BF40;
    case 400u: goto L_0034BF9C;
    case 401u: goto L_0034BFA0;
    case 402u: goto L_0034BFD0;
    case 403u: goto L_0034BFD8;
    default: bad_entry(c, 0x00348000u); return;
    }
L_00348000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348008u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x00348008u) [[unlikely]] return; }
L_00348008:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[20].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0034802Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0034802Cu) [[unlikely]] return; }
L_0034802C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348034:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[17].d[0] = c.r[17].d[0] & c.r[16].d[0];
    c.r[16].d[0] = c.r[19].d[0] & c.r[16].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348050u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00348050u) [[unlikely]] return; }
L_00348050:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034805Cu);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x0034805Cu) [[unlikely]] return; }
L_0034805C:
    set32(c.r[8], ld32((c.r[2].w[0] + 724u)));
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[7].d[0] = c.r[17].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 200u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 204u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00348088u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00348088u) [[unlikely]] return; }
L_00348088:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 45);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 15);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 30);
    c.r[6].d[0] = c.r[6].d[0] & 32767ull;
    c.r[7].d[0] = c.r[7].d[0] & 32767ull;
    c.r[8].d[0] = c.r[8].d[0] & 32767ull;
    c.r[5].d[0] = c.r[19].d[0] & 32767ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003480D0u);  if (depth < kMaxDepth) unit_0073(c, 181u, depth + 1u); else { c.pc = 0x002CEAD0u; return; } if (c.pc != 0x003480D0u) [[unlikely]] return; }
L_003480D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003480D8:
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003480E8u);  if (depth < kMaxDepth) unit_007A(c, 132u, depth + 1u); else { c.pc = 0x002E9A50u; return; } if (c.pc != 0x003480E8u) [[unlikely]] return; }
L_003480E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348110u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00348110u) [[unlikely]] return; }
L_00348110:
    c.f[12] = ld32((c.r[29].w[0] + 160u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 164u));
    c.f[14] = ld32((c.r[29].w[0] + 168u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348130u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00348130u) [[unlikely]] return; }
L_00348130:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348140u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x00348140u) [[unlikely]] return; }
L_00348140:
    set32(c.r[3], ld32((c.r[2].w[0] + 212u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003489C0; } }
L_00348150:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 40);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[9].d[0] = c.r[9].d[0] & 255ull;
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[9].d[0] = c.r[9].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[10].d[0] = c.r[19].d[0] >> 56;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003481B0u);  if (depth < kMaxDepth) unit_0078(c, 87u, depth + 1u); else { c.pc = 0x002E0F78u; return; } if (c.pc != 0x003481B0u) [[unlikely]] return; }
L_003481B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003481B8:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003481D0u);  if (depth < kMaxDepth) unit_0078(c, 88u, depth + 1u); else { c.pc = 0x002E0FC8u; return; } if (c.pc != 0x003481D0u) [[unlikely]] return; }
L_003481D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003481D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003481E8u);  if (depth < kMaxDepth) unit_007A(c, 101u, depth + 1u); else { c.pc = 0x002E9360u; return; } if (c.pc != 0x003481E8u) [[unlikely]] return; }
L_003481E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003481F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[17].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348218u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x00348218u) [[unlikely]] return; }
L_00348218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034829C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348230u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x00348230u) [[unlikely]] return; }
L_00348230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034829C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034825Cu);  if (depth < kMaxDepth) unit_007C(c, 132u, depth + 1u); else { c.pc = 0x002F25F8u; return; } if (c.pc != 0x0034825Cu) [[unlikely]] return; }
L_0034825C:
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348270u);  if (depth < kMaxDepth) unit_0088(c, 333u, depth + 1u); else { c.pc = 0x00323FF8u; return; } if (c.pc != 0x00348270u) [[unlikely]] return; }
L_00348270:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348284u);  if (depth < kMaxDepth) unit_0089(c, 5u, depth + 1u); else { c.pc = 0x00324068u; return; } if (c.pc != 0x00348284u) [[unlikely]] return; }
L_00348284:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034829Cu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x0034829Cu) [[unlikely]] return; }
L_0034829C:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = 0ull < c.r[17].d[0] ? 1ull : 0ull;
    st32((c.r[3].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003482D0:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    st8((c.r[21].w[0] + 824u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003482E0:
    c.f[2] = ld32((c.r[18].w[0] + 128u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348310u);  if (depth < kMaxDepth) unit_0089(c, 43u, depth + 1u); else { c.pc = 0x00324A40u; return; } if (c.pc != 0x00348310u) [[unlikely]] return; }
L_00348310:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348328u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00348328u) [[unlikely]] return; }
L_00348328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348348u);  if (depth < kMaxDepth) unit_0061(c, 88u, depth + 1u); else { c.pc = 0x00284FE0u; return; } if (c.pc != 0x00348348u) [[unlikely]] return; }
L_00348348:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348350u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x00348350u) [[unlikely]] return; }
L_00348350:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348370; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034836Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0034836Cu) [[unlikely]] return; }
L_0034836C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00348370:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348380u);  if (depth < kMaxDepth) unit_001D(c, 112u, depth + 1u); else { c.pc = 0x00175510u; return; } if (c.pc != 0x00348380u) [[unlikely]] return; }
L_00348380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348388:
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003483A4u);  if (depth < kMaxDepth) unit_0084(c, 266u, depth + 1u); else { c.pc = 0x00313B48u; return; } if (c.pc != 0x003483A4u) [[unlikely]] return; }
L_003483A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003483AC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8938u)));
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 18;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003483F8; } }
    st16((c.r[18].w[0] + 8938u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 1;
L_003483F8:
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    st16((c.r[18].w[0] + 9014u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[18].w[0] + 9016u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] <= 0;  if (t) { goto L_0034AB44; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349338; } }
L_00348428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 6944u);
    c.r[6].d[0] = c.r[19].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348444u);  if (depth < kMaxDepth) unit_0091(c, 12u, depth + 1u); else { c.pc = 0x00344190u; return; } if (c.pc != 0x00348444u) [[unlikely]] return; }
L_00348444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034844C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[22].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[21].d[0] = c.r[3].d[0] & 65535ull;
    c.r[19].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[17], c.r[4].w[0] + 27456u);
    c.r[20].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_00348478:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348484u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x00348484u) [[unlikely]] return; }
L_00348484:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003484E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_003484E4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003484ACu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x003484ACu) [[unlikely]] return; }
L_003484AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003484E4; } }
    st16((c.r[17].w[0] + 8938u), static_cast<std::uint16_t>(c.r[19].w[0]));
    st16((c.r[17].w[0] + 9014u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st16((c.r[17].w[0] + 9016u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003484E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003484D4u);  if (depth < kMaxDepth) unit_0065(c, 316u, depth + 1u); else { c.pc = 0x00297678u; return; } if (c.pc != 0x003484D4u) [[unlikely]] return; }
L_003484D4:
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8938u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003484E4u);  if (depth < kMaxDepth) unit_0065(c, 314u, depth + 1u); else { c.pc = 0x00297618u; return; } if (c.pc != 0x003484E4u) [[unlikely]] return; }
L_003484E4:
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 13248u);
    c.r[2].d[0] = c.r[20].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00348478u | kUnwind; return; } goto L_00348478; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348500:
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348510u);  if (depth < kMaxDepth) unit_007A(c, 150u, depth + 1u); else { c.pc = 0x002E9C78u; return; } if (c.pc != 0x00348510u) [[unlikely]] return; }
L_00348510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348518:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    set32(c.r[4], c.r[4].w[0] + 20032u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348534u);  if (depth < kMaxDepth) unit_0095(c, 392u, depth + 1u); else { c.pc = 0x003570A0u; return; } if (c.pc != 0x00348534u) [[unlikely]] return; }
L_00348534:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034853C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[7], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 19088u);
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[6], 0u - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034855Cu);  if (depth < kMaxDepth) unit_0089(c, 268u, depth + 1u); else { c.pc = 0x003272F8u; return; } if (c.pc != 0x0034855Cu) [[unlikely]] return; }
L_0034855C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348578u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00348578u) [[unlikely]] return; }
L_00348578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[6].d[0] = ld16((c.r[2].w[0] + 180u));
    set32(c.r[7], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 19088u);
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003485B8u);  if (depth < kMaxDepth) unit_0089(c, 268u, depth + 1u); else { c.pc = 0x003272F8u; return; } if (c.pc != 0x003485B8u) [[unlikely]] return; }
L_003485B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003485C0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003485D4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x003485D4u) [[unlikely]] return; }
L_003485D4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[7], ld32((c.r[18].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19088u);
    set32(c.r[6], 0u - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034861Cu);  if (depth < kMaxDepth) unit_0089(c, 268u, depth + 1u); else { c.pc = 0x003272F8u; return; } if (c.pc != 0x0034861Cu) [[unlikely]] return; }
L_0034861C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[3], c.r[3].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0034AB44; } }
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00348640:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348650u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x00348650u) [[unlikely]] return; }
L_00348650:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 180u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00348684; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348670u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x00348670u) [[unlikely]] return; }
L_00348670:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 168u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0034AA54; } }
L_00348684:
    set32(c.r[2], ld32((c.r[21].w[0] + 44u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[18], c.r[16].w[0] + 224u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00348640u | kUnwind; return; } goto L_00348640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003486A4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 26);
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 13);
    c.r[3].d[0] = c.r[3].d[0] & 8191ull;
    c.r[2].d[0] = c.r[2].d[0] & 8191ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 39);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 49);
    c.r[9].d[0] = c.r[3].d[0] << 32;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] & 1023ull;
    c.r[5].d[0] = c.r[5].d[0] & 31ull;
    c.r[8].d[0] = c.r[2].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[3].d[0] = c.r[19].d[0] & 8191ull;
    c.r[16].d[0] = c.r[4].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[20].d[0] = c.r[5].d[0] << 32;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.r[6].d[0] = c.r[19].d[0] >> 54;
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[2], 0u + 2u);
    c.budget -= 23;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00348768; } }
    c.r[2].d[0] = c.r[20].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348720; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_00348734; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034879C; } }
L_00348720:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0034878C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034879C; } }
L_00348734:
    set32(c.r[2], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 27456u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6080u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348760u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00348760u) [[unlikely]] return; }
L_00348760:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034879C; } }
L_00348768:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[5], c.r[5].w[0] - 6080u);
    set32(c.r[10], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348784u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00348784u) [[unlikely]] return; }
L_00348784:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034879C; } }
L_0034878C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034879Cu);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x0034879Cu) [[unlikely]] return; }
L_0034879C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] == c.r[2].d[0];  if (t) { goto L_0034AB44; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487B8u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x003487B8u) [[unlikely]] return; }
L_003487B8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[5], c.r[5].w[0] - 6080u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487D4u);  if (depth < kMaxDepth) unit_0049(c, 121u, depth + 1u); else { c.pc = 0x002259F8u; return; } if (c.pc != 0x003487D4u) [[unlikely]] return; }
L_003487D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003487DC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00730000u);
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[16], c.r[16].w[0] + 12320u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003487FCu);  if (depth < kMaxDepth) unit_0095(c, 106u, depth + 1u); else { c.pc = 0x00354B98u; return; } if (c.pc != 0x003487FCu) [[unlikely]] return; }
L_003487FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034881Cu);  if (depth < kMaxDepth) unit_0095(c, 109u, depth + 1u); else { c.pc = 0x00354C40u; return; } if (c.pc != 0x0034881Cu) [[unlikely]] return; }
L_0034881C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348824:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[3].d[0] = ld16((c.r[6].w[0] + 2824u));
    set32(c.r[4], c.r[4].w[0] - 18112u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[7].d[0] = c.r[19].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st16((c.r[6].w[0] + 2824u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.r[16].d[0] = c.r[5].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348878u);  if (depth < kMaxDepth) unit_007A(c, 132u, depth + 1u); else { c.pc = 0x002E9A50u; return; } if (c.pc != 0x00348878u) [[unlikely]] return; }
L_00348878:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348888u);  if (depth < kMaxDepth) unit_007A(c, 132u, depth + 1u); else { c.pc = 0x002E9A50u; return; } if (c.pc != 0x00348888u) [[unlikely]] return; }
L_00348888:
    set32(c.r[3], 0u - 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[3].d[0];  if (t) { goto L_0034AB44; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_0034AB44; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003488B0u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x003488B0u) [[unlikely]] return; }
L_003488B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003488C0u);  if (depth < kMaxDepth) unit_0032(c, 384u, depth + 1u); else { c.pc = 0x001CBBD8u; return; } if (c.pc != 0x003488C0u) [[unlikely]] return; }
L_003488C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003488C8:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003488E4u);  if (depth < kMaxDepth) unit_0097(c, 106u, depth + 1u); else { c.pc = 0x0035CEF0u; return; } if (c.pc != 0x003488E4u) [[unlikely]] return; }
L_003488E4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003489C8; } }
L_003488FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[20].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00348968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348934u);  if (depth < kMaxDepth) unit_0097(c, 106u, depth + 1u); else { c.pc = 0x0035CEF0u; return; } if (c.pc != 0x00348934u) [[unlikely]] return; }
L_00348934:
    set32(c.r[8], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[20].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[8].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00348960u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00348960u) [[unlikely]] return; }
L_00348960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348970u);  if (depth < kMaxDepth) unit_0097(c, 106u, depth + 1u); else { c.pc = 0x0035CEF0u; return; } if (c.pc != 0x00348970u) [[unlikely]] return; }
L_00348970:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00348994u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00348994u) [[unlikely]] return; }
L_00348994:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034899C:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003489B8u);  if (depth < kMaxDepth) unit_0097(c, 106u, depth + 1u); else { c.pc = 0x0035CEF0u; return; } if (c.pc != 0x003489B8u) [[unlikely]] return; }
L_003489B8:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_003489C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 2;
L_003489C8:
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003489D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003489D4u) [[unlikely]] return; }
L_003489D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003489DC:
    c.r[6].d[0] = c.r[19].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10010u)));
    set32(c.r[2], c.r[6].w[0] << 16);
    c.r[7].d[0] = ld16((c.r[18].w[0] + 10010u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(31000ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00348A14; } }
    st16((c.r[18].w[0] + 10010u), static_cast<std::uint16_t>(0u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00348A44; } }
L_00348A14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 23016u)));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 4664u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00348A44; } }
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    st16((c.r[18].w[0] + 10014u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 10010u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 10012u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00348A44:
    set32(c.r[2], ld32((c.r[8].w[0] + 23016u)));
    st32((c.r[4].w[0] + 4664u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348A54:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 30;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 14192u)));
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348A80u);  if (depth < kMaxDepth) unit_0096(c, 198u, depth + 1u); else { c.pc = 0x0035A9A8u; return; } if (c.pc != 0x00348A80u) [[unlikely]] return; }
L_00348A80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00348A9C; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 14192u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348A9Cu);  if (depth < kMaxDepth) unit_0096(c, 202u, depth + 1u); else { c.pc = 0x0035AA28u; return; } if (c.pc != 0x00348A9Cu) [[unlikely]] return; }
L_00348A9C:
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 14192u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348AB0u);  if (depth < kMaxDepth) unit_0096(c, 71u, depth + 1u); else { c.pc = 0x003590C8u; return; } if (c.pc != 0x00348AB0u) [[unlikely]] return; }
L_00348AB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348ABCu);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x00348ABCu) [[unlikely]] return; }
L_00348ABC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348AC4:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.r[3].d[0] = c.r[3].d[0] << 1;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 14;
    c.r[3].d[0] = c.r[3].d[0] | 16383ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A4EC; } }
L_00348AE4:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.r[3].d[0] = c.r[3].d[0] << 1;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 14;
    c.r[3].d[0] = c.r[3].d[0] | 16383ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A4EC; } }
L_00348B04:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    st16((c.r[18].w[0] + 10882u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B1Cu);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x00348B1Cu) [[unlikely]] return; }
L_00348B1C:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B30u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x00348B30u) [[unlikely]] return; }
L_00348B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348B38:
    c.r[5].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] | 16383ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348B68u);  if (depth < kMaxDepth) unit_001B(c, 183u, depth + 1u); else { c.pc = 0x0016E818u; return; } if (c.pc != 0x00348B68u) [[unlikely]] return; }
L_00348B68:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 104u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 7710u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348B7C:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00348C1C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] | 65471ull;
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] | 16383ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348BBCu);  if (depth < kMaxDepth) unit_001B(c, 183u, depth + 1u); else { c.pc = 0x0016E818u; return; } if (c.pc != 0x00348BBCu) [[unlikely]] return; }
L_00348BBC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7712u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00348BD8; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00348BE8; } }
L_00348BD8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7710u)));
    c.r[2].d[0] = ~(0ull | c.r[3].d[0]);
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
L_00348BE8:
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], 0u + 8u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 7700u), c.r[5].w[0]);
    st64((c.r[4].w[0] + 560u), 0ull);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348C1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] | 65471ull;
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] | 16383ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00348C6C; } }
L_00348C44:
    c.r[5].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.r[2].d[0] = c.r[2].d[0] << 1;
    c.r[2].d[0] = c.r[2].d[0] | 65471ull;
    c.r[2].d[0] = c.r[2].d[0] << 14;
    c.r[2].d[0] = c.r[2].d[0] | 16383ull;
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 29;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 10;
L_00348C6C:
    c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348C78u);  if (depth < kMaxDepth) unit_001B(c, 183u, depth + 1u); else { c.pc = 0x0016E818u; return; } if (c.pc != 0x00348C78u) [[unlikely]] return; }
L_00348C78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7712u)));
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 7700u), c.r[5].w[0]);
    set32(c.r[4], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[4].w[0]);
    st64((c.r[2].w[0] + 560u), 0ull);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348CB0:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[18].w[0] + 10912u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00348CE0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348CDCu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00348CDCu) [[unlikely]] return; }
L_00348CDC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00348CE0:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 5024u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 4096ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 11052u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 11056u), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348D08:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[18].w[0] + 10920u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 10922u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348D2C:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 25);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 18);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 10);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] & 127ull;
    c.r[2].d[0] = c.r[19].d[0] & 1023ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    st16((c.r[18].w[0] + 10928u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 10930u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 10932u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[18].w[0] + 10934u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 10936u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { const bool t = c.r[17].sd[0] < 0;  if (t) { goto L_00348D90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348D8Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00348D8Cu) [[unlikely]] return; }
L_00348D8C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00348D90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 105u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9284u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00348DACu);  goto L_00348DB0; }
L_00348DB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10960u)));
    set32(c.r[6], 0u + 13248u);
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[18].w[0] + 10930u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 10936u), 0u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348DE0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7696u)));
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 25);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + 27456u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 18);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 10);
    c.r[3].d[0] = c.r[3].d[0] & 127ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] & 127ull;
    c.r[2].d[0] = c.r[19].d[0] & 1023ull;
    set32(c.r[16], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    st16((c.r[16].w[0] + 10928u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 10930u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 10932u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 10934u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st32((c.r[16].w[0] + 10936u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 26;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_00348E5C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348E58u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x00348E58u) [[unlikely]] return; }
L_00348E58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00348E5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 105u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 9284u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00348E7Cu);  goto L_00348E80; }
L_00348E80:
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st16((c.r[16].w[0] + 10930u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348E94:
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348EA8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348EB4u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x00348EB4u) [[unlikely]] return; }
L_00348EB4:
    c.f[1] = ld32((c.r[18].w[0] + 148u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 148u), c.f[1]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348EC8:
    set32(c.r[2], 0u + 1u);
    if (c.r[19].d[0] == 0) c.r[2].d[0] = 0ull;
    st32((c.r[18].w[0] + 11156u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348EDC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[4].d[0] = c.r[19].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F00u);  if (depth < kMaxDepth) unit_007A(c, 132u, depth + 1u); else { c.pc = 0x002E9A50u; return; } if (c.pc != 0x00348F00u) [[unlikely]] return; }
L_00348F00:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00348F2C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00348F2C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F24u);  if (depth < kMaxDepth) unit_007B(c, 89u, depth + 1u); else { c.pc = 0x002ED118u; return; } if (c.pc != 0x00348F24u) [[unlikely]] return; }
L_00348F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F34u);  if (depth < kMaxDepth) unit_007B(c, 76u, depth + 1u); else { c.pc = 0x002ECDE0u; return; } if (c.pc != 0x00348F34u) [[unlikely]] return; }
L_00348F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348F3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[16], c.r[2].w[0] + 14664u);
    set32(c.r[3], ld32((c.r[16].w[0] + 216u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0034AB44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348F5Cu);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x00348F5Cu) [[unlikely]] return; }
L_00348F5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = c.r[19].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    st32((c.r[16].w[0] + 220u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00348F78:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FE8u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x00348FE8u) [[unlikely]] return; }
L_00348FE8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00348FF8u);  if (depth < kMaxDepth) unit_0074(c, 121u, depth + 1u); else { c.pc = 0x002D15A0u; return; } if (c.pc != 0x00348FF8u) [[unlikely]] return; }
L_00348FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349000:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    c.r[8].d[0] = c.r[8].d[0] & 255ull;
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[8].d[0] << 32;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 32);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[8].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349070u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x00349070u) [[unlikely]] return; }
L_00349070:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349080u);  if (depth < kMaxDepth) unit_0074(c, 121u, depth + 1u); else { c.pc = 0x002D15A0u; return; } if (c.pc != 0x00349080u) [[unlikely]] return; }
L_00349080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490C4u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x003490C4u) [[unlikely]] return; }
L_003490C4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003490D4u);  if (depth < kMaxDepth) unit_0074(c, 123u, depth + 1u); else { c.pc = 0x002D1620u; return; } if (c.pc != 0x003490D4u) [[unlikely]] return; }
L_003490D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003490DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349118u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x00349118u) [[unlikely]] return; }
L_00349118:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349128u);  if (depth < kMaxDepth) unit_0074(c, 123u, depth + 1u); else { c.pc = 0x002D1620u; return; } if (c.pc != 0x00349128u) [[unlikely]] return; }
L_00349128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349130:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349140u);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x00349140u) [[unlikely]] return; }
L_00349140:
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349150u);  if (depth < kMaxDepth) unit_0074(c, 125u, depth + 1u); else { c.pc = 0x002D1670u; return; } if (c.pc != 0x00349150u) [[unlikely]] return; }
L_00349150:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349158:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = c.r[19].d[0] & c.r[4].d[0];
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349184u);  if (depth < kMaxDepth) unit_0074(c, 35u, depth + 1u); else { c.pc = 0x002D05E8u; return; } if (c.pc != 0x00349184u) [[unlikely]] return; }
L_00349184:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034918C:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034919Cu);  if (depth < kMaxDepth) unit_0074(c, 126u, depth + 1u); else { c.pc = 0x002D1690u; return; } if (c.pc != 0x0034919Cu) [[unlikely]] return; }
L_0034919C:
    set32(c.r[4], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491A8u);  if (depth < kMaxDepth) unit_0074(c, 125u, depth + 1u); else { c.pc = 0x002D1670u; return; } if (c.pc != 0x003491A8u) [[unlikely]] return; }
L_003491A8:
    c.r[4].d[0] = c.r[19].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491B8u);  if (depth < kMaxDepth) unit_0074(c, 59u, depth + 1u); else { c.pc = 0x002D0AE0u; return; } if (c.pc != 0x003491B8u) [[unlikely]] return; }
L_003491B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003491C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003491D8u);  if (depth < kMaxDepth) unit_0074(c, 72u, depth + 1u); else { c.pc = 0x002D0CC8u; return; } if (c.pc != 0x003491D8u) [[unlikely]] return; }
L_003491D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003491E0:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    st8((c.r[18].w[0] + 10100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003491F0:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 10093u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 10092u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349208:
    st8((c.r[18].w[0] + 10092u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349214:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349224u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x00349224u) [[unlikely]] return; }
L_00349224:
    set32(c.r[17], c.r[16].w[0] - 23136u);
    c.f[1] = 0u;
    st32((c.r[17].w[0] + 28u), c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00349250; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349258; } }
L_00349250:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] - 23136u), c.r[2].w[0]);
    c.budget -= 2;
L_00349258:
    c.r[6].d[0] = c.r[19].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[7], c.r[16].w[0] - 23136u);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    st32((c.r[7].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    st32((c.r[7].w[0] + 12u), c.r[6].w[0]);
    c.f[12] = c.f[0];
    st32((c.r[7].w[0] + 24u), c.f[0]);
    c.f[13] = c.f[1];
    st32((c.r[7].w[0] + 20u), c.f[1]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003492BCu);  if (depth < kMaxDepth) unit_0073(c, 96u, depth + 1u); else { c.pc = 0x002CDBE8u; return; } if (c.pc != 0x003492BCu) [[unlikely]] return; }
L_003492BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003492C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10097u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8938u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003492EC; } }
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[18].w[0] + 8938u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
L_003492EC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    st16((c.r[18].w[0] + 9014u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 9016u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 5;
L_00349338:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349348u);  if (depth < kMaxDepth) unit_0079(c, 183u, depth + 1u); else { c.pc = 0x002E6B68u; return; } if (c.pc != 0x00349348u) [[unlikely]] return; }
L_00349348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349350:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10097u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7696u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034AB44; } }
    set32(c.r[2], 0u + 13248u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[19].d[0] & 255ull;
    c.r[5].d[0] = c.r[5].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st16((c.r[2].w[0] + 8938u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[2].w[0] + 9016u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[2].w[0] + 9014u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003493B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10097u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    st8((c.r[18].w[0] + 10079u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003493D0:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003493F8; } }
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349408; } }
L_003493F8:
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_00349408:
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349414u);  if (depth < kMaxDepth) unit_007E(c, 316u, depth + 1u); else { c.pc = 0x002FB300u; return; } if (c.pc != 0x00349414u) [[unlikely]] return; }
L_00349414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034941C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 113u)));
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034944C; } }
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[3], c.r[3].w[0] + 2832u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 8;
L_0034944C:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[10], 0u + 1u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003494A8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x003494A8u) [[unlikely]] return; }
L_003494A8:
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    c.r[7].d[0] = c.r[19].d[0] << 16;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[3] = fp::cvt_w_s(c.f[2]);
    set32(c.r[6], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[5], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003494DCu);  if (depth < kMaxDepth) unit_0007(c, 416u, depth + 1u); else { c.pc = 0x0011F650u; return; } if (c.pc != 0x003494DCu) [[unlikely]] return; }
L_003494DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003494E4:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[3].d[0] = c.r[19].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[18].w[0] + 10002u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 10004u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349508:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10076u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7696u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0034AB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349544u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x00349544u) [[unlikely]] return; }
L_00349544:
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[16].d[0] = c.r[19].d[0] << 40;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 40);
    c.r[2].d[0] = c.r[16].d[0] & 63ull;
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0034958C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034958Cu);  if (depth < kMaxDepth) unit_0079(c, 183u, depth + 1u); else { c.pc = 0x002E6B68u; return; } if (c.pc != 0x0034958Cu) [[unlikely]] return; }
L_0034958C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 6);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 12);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 18);
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[18].w[0] + 9014u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 8938u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 9016u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003495C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10076u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7696u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0034AB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349600u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x00349600u) [[unlikely]] return; }
L_00349600:
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[19].d[0] = c.r[19].d[0] & 255ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[19].d[0] + c.r[2].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349628u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x00349628u) [[unlikely]] return; }
L_00349628:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349648; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349644u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x00349644u) [[unlikely]] return; }
L_00349644:
    set32(c.r[19], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00349648:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
L_00349658:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349670u);  if (depth < kMaxDepth) unit_0078(c, 94u, depth + 1u); else { c.pc = 0x002E1150u; return; } if (c.pc != 0x00349670u) [[unlikely]] return; }
L_00349670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00349658u | kUnwind; return; } goto L_00349658; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349690:
    set32(c.r[4], c.r[20].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034969Cu);  if (depth < kMaxDepth) unit_0081(c, 192u, depth + 1u); else { c.pc = 0x00306598u; return; } if (c.pc != 0x0034969Cu) [[unlikely]] return; }
L_0034969C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9299u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_003496B4; } }
    st8((c.r[18].w[0] + 9299u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[18].w[0] + 9297u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 9298u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003496B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9297u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 27);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], 0u + 131u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] + 9304u);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st64((c.r[3].w[0] + 8u), c.r[19].d[0]);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9297u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 9297u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003496F4:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    st8((c.r[18].w[0] + 10140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349704:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00349720; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349718u);  if (depth < kMaxDepth) unit_001B(c, 219u, depth + 1u); else { c.pc = 0x0016ED60u; return; } if (c.pc != 0x00349718u) [[unlikely]] return; }
L_00349718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349720:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034972Cu);  if (depth < kMaxDepth) unit_001B(c, 221u, depth + 1u); else { c.pc = 0x0016ED80u; return; } if (c.pc != 0x0034972Cu) [[unlikely]] return; }
L_0034972C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349734:
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    st16((c.r[18].w[0] + 9978u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349744:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    st8((c.r[18].w[0] + 10099u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349754:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 28u), c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349778u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x00349778u) [[unlikely]] return; }
L_00349778:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349798u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x00349798u) [[unlikely]] return; }
L_00349798:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_003497A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2696u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 40);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[23].d[0] = c.r[4].d[0] << 32;
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 32);
    c.r[16].d[0] = c.r[5].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[19].d[0] = c.r[3].d[0] << 32;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349808u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00349808u) [[unlikely]] return; }
L_00349808:
    set32(c.r[3], 0u + 100u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00349818u);  goto L_0034981C; }
L_0034981C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4A900000u);
    set32(c.r[6], ld32((c.r[4].w[0] - 12556u)));
    c.r[2].d[0] = c.r[2].d[0] | 62301ull;
    c.r[5].d[0] = c.hi.d[0];
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00349888; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 7694u));
    set32(c.r[2], c.r[2].w[0] - 76u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349888; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[20].d[0];  if (t) { goto L_00349870; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349868u);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x00349868u) [[unlikely]] return; }
L_00349868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0034987C; } }
L_00349870:
    c.r[21].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349940; } }
L_0034987C:
    set32(c.r[19], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349940; } }
L_00349888:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 106u);
    set32(c.r[3], ld32((c.r[2].w[0] + 12228u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_003498E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x8F320000u);
    c.r[2].d[0] = c.r[2].d[0] | 28964ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_003498BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB6BF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19937ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_003498E8; } }
L_003498BC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9041u));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349934; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00349934; } }
    set32(c.r[19], 0u + 10u);
    st8((c.r[18].w[0] + 9041u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349940; } }
L_003498E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4EAF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 29105ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00349918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x6F8F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 2888ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00349918; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x2CC10000u);
    c.r[2].d[0] = c.r[2].d[0] | 25213ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00349940; } }
L_00349918:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9041u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349934; } }
    st8((c.r[18].w[0] + 9041u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349940; } }
L_00349934:
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[21].d[0] = c.r[19].d[0] + 0ull;
    st8((c.r[18].w[0] + 9041u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00349940:
    c.r[2].d[0] = c.r[21].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    set32(c.r[2], c.r[16].w[0] << 24);
    set32(c.r[3], 0u + 14u);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_003499AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349978u);  if (depth < kMaxDepth) unit_0043(c, 33u, depth + 1u); else { c.pc = 0x0020C7E0u; return; } if (c.pc != 0x00349978u) [[unlikely]] return; }
L_00349978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034998C; } }
L_00349980:
    set32(c.r[4], c.r[19].w[0] + 10168u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034998Cu);  if (depth < kMaxDepth) unit_0043(c, 35u, depth + 1u); else { c.pc = 0x0020C818u; return; } if (c.pc != 0x0034998Cu) [[unlikely]] return; }
L_0034998C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003499AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[2], 0u + 52u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00349980u | kUnwind; return; } goto L_00349980; } }
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9289u)));
    c.budget -= 1;
L_003499AC:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[19], 0u + 1056u);
    set32(c.r[3], c.r[20].w[0] + 17040u);
    c.f[20] = 0u;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[15] = c.f[20];
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003499ECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x003499ECu) [[unlikely]] return; }
L_003499EC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_00349A5C; } }
    set32(c.r[2], 0u + 277u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00349A34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349A90; } }
L_00349A34:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[8], c.r[8].w[0] + 15984u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349AC8; } }
L_00349A5C:
    set32(c.r[2], 0u + 277u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0];  if (t) { goto L_00349AA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9289u)));
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 10;
L_00349A90:
    c.f[13] = c.f[20];
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349AA0u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x00349AA0u) [[unlikely]] return; }
L_00349AA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349AA8:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[8], c.r[8].w[0] + 15984u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9289u)));
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 8;
L_00349AC8:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[9].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[10], c.r[10].w[0] + 14720u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[2].w[0] + c.r[8].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349AE4u);  if (depth < kMaxDepth) unit_0008(c, 76u, depth + 1u); else { c.pc = 0x00120DB8u; return; } if (c.pc != 0x00349AE4u) [[unlikely]] return; }
L_00349AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349AEC:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00349B0C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349B04u);  if (depth < kMaxDepth) unit_009E(c, 243u, depth + 1u); else { c.pc = 0x0037AB08u; return; } if (c.pc != 0x00349B04u) [[unlikely]] return; }
L_00349B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349B0C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349B1Cu);  if (depth < kMaxDepth) unit_009E(c, 245u, depth + 1u); else { c.pc = 0x0037AB30u; return; } if (c.pc != 0x00349B1Cu) [[unlikely]] return; }
L_00349B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349B24:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00349B84; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349B78; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349B84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349B78:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
L_00349B84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] + 14904u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], c.r[16].w[0] + 60u);
    c.budget -= 5;
L_00349B98:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349C00; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[13] = 0u;
    st32((c.r[20].w[0] - 16812u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.f[14] = c.f[13];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349BE4u);  if (depth < kMaxDepth) unit_0087(c, 25u, depth + 1u); else { c.pc = 0x0031C498u; return; } if (c.pc != 0x00349BE4u) [[unlikely]] return; }
L_00349BE4:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349BF4; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00349BF4:
    st32((c.r[20].w[0] - 16812u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349C00:
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00349B98u | kUnwind; return; } goto L_00349B98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349C18:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00349C78; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349C6C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349C78; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349C6C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
L_00349C78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[12].d[0] = 0ull + 0ull;
    set32(c.r[13], c.r[2].w[0] + 14904u);
    set32(c.r[5], c.r[13].w[0] + 60u);
    set32(c.r[14], c.r[13].w[0] + 4u);
    c.r[3].d[0] = c.r[13].d[0] + 0ull;
    c.budget -= 6;
L_00349C90:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[11].d[0] = c.r[12].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00349CAC; } }
    set32(c.r[10], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != 0ull;  if (t) { goto L_0034AA80; } }
L_00349CAC:
    set32(c.r[3], c.r[3].w[0] + 12u);
    set32(c.r[12], c.r[11].w[0] + 12u);
    set32(c.r[14], c.r[14].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00349C90u | kUnwind; return; } goto L_00349C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349CCC:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 48);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[3].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00349D2C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349D20; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00349D2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349D20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
L_00349D2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14904u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[16], c.r[2].w[0] + 8u);
    c.budget -= 5;
L_00349D40:
    set32(c.r[2], ld32((c.r[16].w[0] - 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00349D90; } }
    set32(c.r[5], ld32((c.r[16].w[0] - 4u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00349D70; } }
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D64u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x00349D64u) [[unlikely]] return; }
L_00349D64:
    st32((c.r[16].w[0] - 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349D84; } }
L_00349D70:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349D80u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x00349D80u) [[unlikely]] return; }
L_00349D80:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_00349D84:
    st32((c.r[16].w[0] - 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349D90:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00349D40u | kUnwind; return; } goto L_00349D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349DAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2696u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], 0u + 1056u);
    set32(c.r[2], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 40);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[2].d[0] = c.r[19].d[0] & c.r[2].d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    set32(c.r[5], c.r[5].w[0] + 17040u);
    c.r[19].d[0] = c.r[2].d[0] << 32;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    c.f[15] = 0u;
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[4].w[0]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[5].w[0] + 4u));
    c.r[16].d[0] = c.r[3].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.f[14] = ld32((c.r[7].w[0] + 8u));
    c.r[20].d[0] = c.r[6].d[0] << 32;
    c.r[20].d[0] = static_cast<std::uint64_t>(c.r[20].sd[0] >> 32);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E30u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00349E30u) [[unlikely]] return; }
L_00349E30:
    set32(c.r[3], c.r[22].w[0] - 287u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1088u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_0092[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00349E5C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349E68u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00349E68u) [[unlikely]] return; }
L_00349E68:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00349E74u);  goto L_00349E78; }
L_00349E78:
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[13] = 0u;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] - 16812u), c.r[20].w[0]);
    set32(c.r[5], 0u - 1u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349EC8u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x00349EC8u) [[unlikely]] return; }
L_00349EC8:
    st32((c.r[16].w[0] - 16812u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349ED4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349EE0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00349EE0u) [[unlikely]] return; }
L_00349EE0:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00349EECu);  goto L_00349EF0; }
L_00349EF0:
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[8], c.r[18].w[0] + 128u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], c.r[10].w[0] + 14720u);
    set32(c.r[5], 0u - 1u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F2Cu);  if (depth < kMaxDepth) unit_0008(c, 76u, depth + 1u); else { c.pc = 0x00120DB8u; return; } if (c.pc != 0x00349F2Cu) [[unlikely]] return; }
L_00349F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349F34:
    set32(c.r[2], ld32((c.r[18].w[0] + 9268u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    set32(c.r[16], c.r[16].w[0] - 22920u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F7Cu);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x00349F7Cu) [[unlikely]] return; }
L_00349F7C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349F8Cu);  if (depth < kMaxDepth) unit_0086(c, 266u, depth + 1u); else { c.pc = 0x0031B538u; return; } if (c.pc != 0x00349F8Cu) [[unlikely]] return; }
L_00349F8C:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    st16((c.r[18].w[0] + 9266u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[18].w[0] + 9272u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 9268u), c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349FA4:
    set32(c.r[5], ld32((c.r[18].w[0] + 9268u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = ld16((c.r[18].w[0] + 9266u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00349FD4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349FCCu);  if (depth < kMaxDepth) unit_009E(c, 363u, depth + 1u); else { c.pc = 0x0037B790u; return; } if (c.pc != 0x00349FCCu) [[unlikely]] return; }
L_00349FCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00349FE4; } }
L_00349FD4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00349FE4u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037AE10u; return; } if (c.pc != 0x00349FE4u) [[unlikely]] return; }
L_00349FE4:
    st32((c.r[18].w[0] + 9268u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_00349FF0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[18], ld32((c.r[16].w[0] - 29196u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[13] = 0u;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] - 16812u), c.r[20].w[0]);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] - 29196u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A03Cu);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x0034A03Cu) [[unlikely]] return; }
L_0034A03C:
    st32((c.r[16].w[0] - 29196u), c.r[18].w[0]);
    st32((c.r[17].w[0] - 16812u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A04C:
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[2].d[0] = c.r[19].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034A084; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9067u));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st8((c.r[18].w[0] + 9067u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 9220u), c.r[4].w[0]);
    c.budget -= 7;
L_0034A084:
    c.r[2].d[0] = c.r[19].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9067u));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    st8((c.r[18].w[0] + 9067u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 9220u), c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A0C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2696u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9067u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x12F10000u);
    set32(c.r[16], ld32((c.r[18].w[0] + 9220u)));
    c.r[2].d[0] = c.r[2].d[0] | 39926ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0034A160; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9041u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034A214; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A10Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0034A10Cu) [[unlikely]] return; }
L_0034A10C:
    set32(c.r[3], 0u + 100u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0034A118u);  goto L_0034A11C; }
L_0034A11C:
    c.r[4].d[0] = c.hi.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < 81ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0034A208; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A138u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0034A138u) [[unlikely]] return; }
L_0034A138:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9067u));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0034A144u);  goto L_0034A148; }
L_0034A148:
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 9220u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A208; } }
L_0034A160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x31CC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 6957ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034A1A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDAEA0000u);
    c.r[2].d[0] = c.r[2].d[0] | 41192ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034A1A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x38DB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 4124ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0034A1A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xF40C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 45361ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0034A224; } }
L_0034A1A0:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9041u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034A214; } }
    c.r[16].d[0] = ld8((c.r[18].w[0] + 9067u));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A1C0u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0034A1C0u) [[unlikely]] return; }
L_0034A1C0:
    set32(c.r[3], 0u + 100u);
    set32(c.r[6], c.r[16].w[0] - 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0034A1D0u);  goto L_0034A1D4; }
L_0034A1D4:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.hi.d[0];
    c.r[5].d[0] = c.r[5].sd[0] < 31ll ? 1ull : 0ull;
    if (c.r[5].d[0] == 0) c.r[16].d[0] = c.r[6].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A1ECu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0034A1ECu) [[unlikely]] return; }
L_0034A1EC:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x0034A1F4u);  goto L_0034A1F8; }
L_0034A1F8:
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0] + 9220u)));
    c.budget -= 4;
L_0034A208:
    st8((c.r[18].w[0] + 9041u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A250; } }
L_0034A214:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 9041u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A250; } }
L_0034A224:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A230u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0034A230u) [[unlikely]] return; }
L_0034A230:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9067u));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0034A23Cu);  goto L_0034A240; }
L_0034A240:
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 9220u)));
    c.budget -= 4;
L_0034A250:
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
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A294u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0034A294u) [[unlikely]] return; }
L_0034A294:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = c.f[20];
    set32(c.r[5], 0u - 1u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A2CCu);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x0034A2CCu) [[unlikely]] return; }
L_0034A2CC:
    st8((c.r[18].w[0] + 9067u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A2D8:
    c.r[11].d[0] = ld8((c.r[18].w[0] + 9065u));
    set32(c.r[3], c.r[18].w[0] + 9072u);
    set32(c.r[5], 0u - 1u);
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    set32(c.r[12], c.r[3].w[0] + c.r[11].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[10].d[0] = ld8((c.r[12].w[0]));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034A31C; } }
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 9140u), c.r[4].w[0]);
    c.budget -= 6;
L_0034A31C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.r[4].d[0] = c.r[2].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034A34C; } }
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[3], c.r[11].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[10], c.r[10].w[0] + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 9140u), c.r[4].w[0]);
    c.budget -= 6;
L_0034A34C:
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A358:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 2696u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9065u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 9065u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A37C:
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.r[4].d[0] = 0ull - c.r[4].d[0];
    c.r[4].d[0] = c.r[4].d[0] << 1;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A390u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034A390u) [[unlikely]] return; }
L_0034A390:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    st32((c.r[18].w[0] + 212u), c.f[0]);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A3A8:
    c.r[3].d[0] = c.r[19].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 21440u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A3C0:
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], c.r[5].w[0] - 5552u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[10], 0u + 1u);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A418u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0034A418u) [[unlikely]] return; }
L_0034A418:
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A430u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0034A430u) [[unlikely]] return; }
L_0034A430:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u - 1u);
    set32(c.r[6], 0u + 180u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A448u);  if (depth < kMaxDepth) unit_0044(c, 155u, depth + 1u); else { c.pc = 0x00212BE0u; return; } if (c.pc != 0x0034A448u) [[unlikely]] return; }
L_0034A448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A450:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[17].d[0] = c.r[3].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[18].w[0] + 640u)));
    if (c.r[17].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    if (c.r[16].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 14;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A494u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0034A494u) [[unlikely]] return; }
L_0034A494:
    c.r[7].d[0] = c.r[19].d[0] & 255ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4B4u);  if (depth < kMaxDepth) unit_0044(c, 155u, depth + 1u); else { c.pc = 0x00212BE0u; return; } if (c.pc != 0x0034A4B4u) [[unlikely]] return; }
L_0034A4B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A4BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A4D0u);  if (depth < kMaxDepth) unit_0089(c, 23u, depth + 1u); else { c.pc = 0x003245E8u; return; } if (c.pc != 0x0034A4D0u) [[unlikely]] return; }
L_0034A4D0:
    c.r[3].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0034A4EC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A500u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x0034A500u) [[unlikely]] return; }
L_0034A500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    set32(c.r[16], c.r[2].w[0] + 14664u);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[19].d[0] & 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A540u);  if (depth < kMaxDepth) unit_007A(c, 132u, depth + 1u); else { c.pc = 0x002E9A50u; return; } if (c.pc != 0x0034A540u) [[unlikely]] return; }
L_0034A540:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0034AB44; } }
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A55C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A578u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x0034A578u) [[unlikely]] return; }
L_0034A578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A580:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A598u);  if (depth < kMaxDepth) unit_007A(c, 158u, depth + 1u); else { c.pc = 0x002E9D70u; return; } if (c.pc != 0x0034A598u) [[unlikely]] return; }
L_0034A598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A5A0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5BCu);  if (depth < kMaxDepth) unit_007A(c, 156u, depth + 1u); else { c.pc = 0x002E9CD0u; return; } if (c.pc != 0x0034A5BCu) [[unlikely]] return; }
L_0034A5BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A5C4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A5E0u);  if (depth < kMaxDepth) unit_007A(c, 156u, depth + 1u); else { c.pc = 0x002E9CD0u; return; } if (c.pc != 0x0034A5E0u) [[unlikely]] return; }
L_0034A5E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A5E8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A604u);  if (depth < kMaxDepth) unit_007A(c, 156u, depth + 1u); else { c.pc = 0x002E9CD0u; return; } if (c.pc != 0x0034A604u) [[unlikely]] return; }
L_0034A604:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A60C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[6].d[0] = c.r[6].d[0] & c.r[5].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[19].d[0] & c.r[5].d[0];
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A640u);  if (depth < kMaxDepth) unit_0093(c, 247u, depth + 1u); else { c.pc = 0x0034E908u; return; } if (c.pc != 0x0034A640u) [[unlikely]] return; }
L_0034A640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A648:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    c.r[16].d[0] = c.r[2].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A664u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034A664u) [[unlikely]] return; }
L_0034A664:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.f[22] = c.f[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A678u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034A678u) [[unlikely]] return; }
L_0034A678:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.f[21] = c.f[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A68Cu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034A68Cu) [[unlikely]] return; }
L_0034A68C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0] - 18128u)));
    c.r[17].d[0] = c.r[2].d[0] << 32;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 32);
    c.f[20] = c.f[0];
    set32(c.r[6], c.r[4].w[0] - 18128u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034A6F4; } }
    set32(c.r[6], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0034A6F4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[5], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A6ECu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0034A6ECu) [[unlikely]] return; }
L_0034A6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034A740; } }
L_0034A6F4:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[4], 0u + 268u);
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A740u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x0034A740u) [[unlikely]] return; }
L_0034A740:
    set32(c.r[2], c.r[16].w[0] - 6080u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.f[14] = ld32((c.r[2].w[0] + 136u));
    set32(c.r[4], c.r[4].w[0] + 27792u);
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[16] = c.f[22];
    c.f[13] = ld32((c.r[2].w[0] + 132u));
    c.f[17] = c.f[21];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45160000u);
    c.f[15] = c.r[1].w[0];
    c.f[18] = c.f[20];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A778u);  if (depth < kMaxDepth) unit_009E(c, 126u, depth + 1u); else { c.pc = 0x00379738u; return; } if (c.pc != 0x0034A778u) [[unlikely]] return; }
L_0034A778:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A780:
    c.r[4].d[0] = c.r[19].d[0] & 255ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A78Cu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034A78Cu) [[unlikely]] return; }
L_0034A78C:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 8);
    c.f[22] = c.f[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A7A0u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034A7A0u) [[unlikely]] return; }
L_0034A7A0:
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[16].d[0] = c.r[16].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.f[21] = c.f[0];
    c.r[16].d[0] = c.r[16].d[0] << 32;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A7C4u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034A7C4u) [[unlikely]] return; }
L_0034A7C4:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 40);
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A7D8u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034A7D8u) [[unlikely]] return; }
L_0034A7D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[14] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 27792u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 15u, c.f[0], c.f[14]);
    c.r[6].d[0] = c.r[19].d[0] >> 48;
    fpu_div(c, 12u, c.f[22], c.f[14]);
    fpu_div(c, 13u, c.f[21], c.f[14]);
    fpu_div(c, 14u, c.f[20], c.f[14]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A808u);  if (depth < kMaxDepth) unit_009E(c, 137u, depth + 1u); else { c.pc = 0x003799A8u; return; } if (c.pc != 0x0034A808u) [[unlikely]] return; }
L_0034A808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A810:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[7].d[0] = c.r[7].d[0] & 65535ull;
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 27792u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[7].d[0] = c.r[7].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[19].d[0] >> 48;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A850u);  if (depth < kMaxDepth) unit_009E(c, 138u, depth + 1u); else { c.pc = 0x00379A10u; return; } if (c.pc != 0x0034A850u) [[unlikely]] return; }
L_0034A850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 1056u);
    set32(c.r[4], c.r[4].w[0] - 1048u);
    st32((c.r[29].w[0] + 560u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[29].w[0] + 560u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A87Cu);  if (depth < kMaxDepth) unit_00E1(c, 289u, depth + 1u); else { c.pc = 0x00486570u; return; } if (c.pc != 0x0034A87Cu) [[unlikely]] return; }
L_0034A87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A884:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 16);
    c.r[5].d[0] = c.r[19].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 14664u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 208u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 200u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 204u), c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A8C0:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 15);
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 45);
    c.r[6].d[0] = c.r[2].d[0] & 32767ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 30);
    c.r[5].d[0] = c.r[3].d[0] & 32767ull;
    c.r[4].d[0] = c.r[19].d[0] & 32767ull;
    c.r[2].d[0] = c.r[10].d[0] & 256ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = c.r[10].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0034AB44; } }
    c.r[2].d[0] = c.r[10].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034A934; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0034A934; } }
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A92Cu);  if (depth < kMaxDepth) unit_007E(c, 163u, depth + 1u); else { c.pc = 0x002F9980u; return; } if (c.pc != 0x0034A92Cu) [[unlikely]] return; }
L_0034A92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A934:
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.r[5].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A94Cu);  if (depth < kMaxDepth) unit_007E(c, 163u, depth + 1u); else { c.pc = 0x002F9980u; return; } if (c.pc != 0x0034A94Cu) [[unlikely]] return; }
L_0034A94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A954:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A968u);  if (depth < kMaxDepth) unit_009C(c, 146u, depth + 1u); else { c.pc = 0x00371188u; return; } if (c.pc != 0x0034A968u) [[unlikely]] return; }
L_0034A968:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A970:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A984u);  if (depth < kMaxDepth) unit_009C(c, 146u, depth + 1u); else { c.pc = 0x00371188u; return; } if (c.pc != 0x0034A984u) [[unlikely]] return; }
L_0034A984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A98C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9A0u);  if (depth < kMaxDepth) unit_009C(c, 146u, depth + 1u); else { c.pc = 0x00371188u; return; } if (c.pc != 0x0034A9A0u) [[unlikely]] return; }
L_0034A9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A9A8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9BCu);  if (depth < kMaxDepth) unit_009C(c, 158u, depth + 1u); else { c.pc = 0x00371640u; return; } if (c.pc != 0x0034A9BCu) [[unlikely]] return; }
L_0034A9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A9C4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9D8u);  if (depth < kMaxDepth) unit_009C(c, 170u, depth + 1u); else { c.pc = 0x00371CE8u; return; } if (c.pc != 0x0034A9D8u) [[unlikely]] return; }
L_0034A9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034A9E0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034A9F8u);  if (depth < kMaxDepth) unit_009C(c, 178u, depth + 1u); else { c.pc = 0x003721D8u; return; } if (c.pc != 0x0034A9F8u) [[unlikely]] return; }
L_0034A9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034AA00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[18].d[0] = c.r[19].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AA34; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA28u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0034AA28u) [[unlikely]] return; }
L_0034AA28:
    set32(c.r[6], c.r[2].w[0] - c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AA38; } }
L_0034AA34:
    set32(c.r[6], 0u - 1u);
    c.budget -= 1;
L_0034AA38:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA4Cu);  if (depth < kMaxDepth) unit_0096(c, 284u, depth + 1u); else { c.pc = 0x0035B788u; return; } if (c.pc != 0x0034AA4Cu) [[unlikely]] return; }
L_0034AA4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034AA54:
    set32(c.r[16], ld32((c.r[20].w[0] + 224u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA64u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x0034AA64u) [[unlikely]] return; }
L_0034AA64:
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AA78u);  if (depth < kMaxDepth) unit_0067(c, 94u, depth + 1u); else { c.pc = 0x0029CF90u; return; } if (c.pc != 0x0034AA78u) [[unlikely]] return; }
L_0034AA78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034AA80:
    set32(c.r[2], c.r[13].w[0] + 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[2], c.r[12].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    st32((c.r[2].w[0]), c.r[10].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[14].w[0]), 0u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AAA8u);  if (depth < kMaxDepth) unit_009E(c, 273u, depth + 1u); else { c.pc = 0x0037ADE8u; return; } if (c.pc != 0x0034AAA8u) [[unlikely]] return; }
L_0034AAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0034AB44; } }
L_0034AAB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 24);
    c.r[4].d[0] = c.r[19].d[0] & c.r[2].d[0];
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AACCu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034AACCu) [[unlikely]] return; }
L_0034AACC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[21] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AADCu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x0034AADCu) [[unlikely]] return; }
L_0034AADC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AAF4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0034AAF4u) [[unlikely]] return; }
L_0034AAF4:
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[12] = c.f[21];
    st32((c.r[29].w[0] + 16u), c.f[0]);
    c.f[14] = c.f[20];
    c.f[13] = ld32((c.r[3].w[0] - 10360u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[15] = c.r[1].w[0];
    st32((c.r[29].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[29].w[0] + 28u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0034AB44u);  if (depth < kMaxDepth) unit_009F(c, 324u, depth + 1u); else { c.pc = 0x0037FCD8u; return; } if (c.pc != 0x0034AB44u) [[unlikely]] return; }
L_0034AB44:
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 576u));
    c.f[22] = ld32((c.r[29].w[0] + 736u));
    c.f[21] = ld32((c.r[29].w[0] + 728u));
    c.f[20] = ld32((c.r[29].w[0] + 720u));
    set32(c.r[29], c.r[29].w[0] + 752u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034AB80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 24);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[5], c.r[5].w[0] - 128u);
    c.r[10].d[0] = c.r[6].d[0] << 40;
    c.r[7].d[0] = c.r[3].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 40);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(23ll) ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0093(c, 52u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 1120u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00348000u < 16384u) { entry = entries_0092[(t - 0x00348000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0034ABD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AC78; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034ABE8:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AC60; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 974u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 980u);
    c.budget -= 6;
L_0034AC18:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AC50; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034AC50; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034AC50:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AC18u | kUnwind; return; } goto L_0034AC18; } }
L_0034AC60:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ABE8u | kUnwind; return; } goto L_0034ABE8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034AC78:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034AC80:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AD78; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034AD18; } }
    set32(c.r[11], c.r[8].w[0] + 980u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 974u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034ACB0:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034ACB8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034ACF0; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034ACF0; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034ACF0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ACB8u | kUnwind; return; } goto L_0034ACB8; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ACB0u | kUnwind; return; } goto L_0034ACB0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034AD18:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 974u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 980u);
    c.budget -= 6;
L_0034AD30:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AD68; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034AD68; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034AD68:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AD30u | kUnwind; return; } goto L_0034AD30; } }
L_0034AD78:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AC80u | kUnwind; return; } goto L_0034AC80; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034AD90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AE38; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034ADA8:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AE20; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 670u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 676u);
    c.budget -= 6;
L_0034ADD8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AE10; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034AE10; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034AE10:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ADD8u | kUnwind; return; } goto L_0034ADD8; } }
L_0034AE20:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ADA8u | kUnwind; return; } goto L_0034ADA8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034AE38:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034AE40:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AF38; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034AED8; } }
    set32(c.r[11], c.r[8].w[0] + 676u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 670u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034AE70:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034AE78:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AEB0; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034AEB0; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034AEB0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AE78u | kUnwind; return; } goto L_0034AE78; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AE70u | kUnwind; return; } goto L_0034AE70; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034AED8:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 670u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 676u);
    c.budget -= 6;
L_0034AEF0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AF28; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034AF28; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034AF28:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AEF0u | kUnwind; return; } goto L_0034AEF0; } }
L_0034AF38:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AE40u | kUnwind; return; } goto L_0034AE40; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034AF50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AFF8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034AF68:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AFE0; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 1278u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 1284u);
    c.budget -= 6;
L_0034AF98:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034AFD0; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034AFD0; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034AFD0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AF98u | kUnwind; return; } goto L_0034AF98; } }
L_0034AFE0:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034AF68u | kUnwind; return; } goto L_0034AF68; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034AFF8:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034B000:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B0F8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034B098; } }
    set32(c.r[11], c.r[8].w[0] + 1284u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 1278u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034B030:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034B038:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B070; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B070; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034B070:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B038u | kUnwind; return; } goto L_0034B038; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B030u | kUnwind; return; } goto L_0034B030; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B098:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 1278u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 1284u);
    c.budget -= 6;
L_0034B0B0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B0E8; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B0E8; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034B0E8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B0B0u | kUnwind; return; } goto L_0034B0B0; } }
L_0034B0F8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B000u | kUnwind; return; } goto L_0034B000; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B1B8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034B128:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B1A0; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 1582u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 1588u);
    c.budget -= 6;
L_0034B158:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B190; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034B190; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034B190:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B158u | kUnwind; return; } goto L_0034B158; } }
L_0034B1A0:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B128u | kUnwind; return; } goto L_0034B128; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B1B8:
    c.r[6].d[0] = 0ull + 0ull;
    c.r[24].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.budget -= 2;
L_0034B1C0:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B2EC; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034B274; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[15], c.r[24].w[0] - 6080u);
    set32(c.r[11], c.r[8].w[0] + 1588u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 8u);
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 1582u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 9;
L_0034B200:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034B208:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B24C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[14].d[0];  if (t) { goto L_0034B224; } }
    st32((c.r[15].w[0] + 128u), c.f[0]);
    c.budget -= 1;
L_0034B224:
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B24C; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034B24C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B208u | kUnwind; return; } goto L_0034B208; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B200u | kUnwind; return; } goto L_0034B200; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B274:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[15], 0u + 8u);
    set32(c.r[14], c.r[24].w[0] - 6080u);
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 1582u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 1588u);
    c.budget -= 9;
L_0034B298:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B2DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[15].d[0];  if (t) { goto L_0034B2B4; } }
    st32((c.r[14].w[0] + 128u), c.f[0]);
    c.budget -= 1;
L_0034B2B4:
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B2DC; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034B2DC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B298u | kUnwind; return; } goto L_0034B298; } }
L_0034B2EC:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B1C0u | kUnwind; return; } goto L_0034B1C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B304:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B3A8; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034B318:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B390; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 1886u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 1892u);
    c.budget -= 6;
L_0034B348:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B380; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034B380; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034B380:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B348u | kUnwind; return; } goto L_0034B348; } }
L_0034B390:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B318u | kUnwind; return; } goto L_0034B318; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B3A8:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034B3B0:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B4A8; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034B448; } }
    set32(c.r[11], c.r[8].w[0] + 1892u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 1886u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034B3E0:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034B3E8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B420; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B420; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034B420:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B3E8u | kUnwind; return; } goto L_0034B3E8; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B3E0u | kUnwind; return; } goto L_0034B3E0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B448:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 1886u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 1892u);
    c.budget -= 6;
L_0034B460:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B498; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B498; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034B498:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B460u | kUnwind; return; } goto L_0034B460; } }
L_0034B4A8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B3B0u | kUnwind; return; } goto L_0034B3B0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B4C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[10].d[0] = c.r[6].d[0] & c.r[3].d[0];
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B558; } }
    set32(c.r[11], c.r[8].w[0] + 2192u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 76u);
    c.budget -= 3;
L_0034B4E8:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B540; } }
    set32(c.r[2], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] + c.r[11].w[0]);
    c.r[5].d[0] = c.r[10].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.budget -= 6;
L_0034B518:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B52C; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0034B52C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B518u | kUnwind; return; } goto L_0034B518; } }
L_0034B540:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B4E8u | kUnwind; return; } goto L_0034B4E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B558:
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[11], c.r[8].w[0] + 2192u);
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 4;
L_0034B568:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B620; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034B5E4; } }
    set32(c.r[9], c.r[8].w[0] + 2192u);
    c.r[6].d[0] = c.r[10].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 76u);
    c.budget -= 5;
L_0034B598:
    mmi::mult(c, 0, c.r[5].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[2].w[0] + c.r[9].w[0]);
    c.budget -= 4;
L_0034B5A8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B5BC; } }
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_0034B5BC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B5A8u | kUnwind; return; } goto L_0034B5A8; } }
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B598u | kUnwind; return; } goto L_0034B598; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B5E4:
    c.r[3].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[10].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    set32(c.r[4], c.r[9].w[0] + c.r[11].w[0]);
    c.budget -= 5;
L_0034B5F8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B60C; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_0034B60C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B5F8u | kUnwind; return; } goto L_0034B5F8; } }
L_0034B620:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[9], c.r[9].w[0] + 76u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B568u | kUnwind; return; } goto L_0034B568; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B63C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B6E0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034B650:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B6C8; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 2800u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 2806u);
    c.budget -= 6;
L_0034B680:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B6B8; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034B6B8; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034B6B8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B680u | kUnwind; return; } goto L_0034B680; } }
L_0034B6C8:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B650u | kUnwind; return; } goto L_0034B650; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B6E0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034B6E8:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B7E0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034B780; } }
    set32(c.r[11], c.r[8].w[0] + 2806u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 2800u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034B718:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034B720:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B758; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B758; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034B758:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B720u | kUnwind; return; } goto L_0034B720; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B718u | kUnwind; return; } goto L_0034B718; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B780:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 2800u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 2806u);
    c.budget -= 6;
L_0034B798:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B7D0; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B7D0; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034B7D0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B798u | kUnwind; return; } goto L_0034B798; } }
L_0034B7E0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B6E8u | kUnwind; return; } goto L_0034B6E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B7F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B8A0; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034B810:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B888; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 3104u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 3110u);
    c.budget -= 6;
L_0034B840:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B878; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034B878; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034B878:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B840u | kUnwind; return; } goto L_0034B840; } }
L_0034B888:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B810u | kUnwind; return; } goto L_0034B810; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B8A0:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034B8A8:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B9A0; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034B940; } }
    set32(c.r[11], c.r[8].w[0] + 3110u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 3104u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034B8D8:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034B8E0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B918; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B918; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034B918:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B8E0u | kUnwind; return; } goto L_0034B8E0; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B8D8u | kUnwind; return; } goto L_0034B8D8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B940:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 3104u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 3110u);
    c.budget -= 6;
L_0034B958:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034B990; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034B990; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034B990:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B958u | kUnwind; return; } goto L_0034B958; } }
L_0034B9A0:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B8A8u | kUnwind; return; } goto L_0034B8A8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034B9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BA60; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034B9D0:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BA48; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 3408u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 3414u);
    c.budget -= 6;
L_0034BA00:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BA38; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034BA38; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034BA38:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BA00u | kUnwind; return; } goto L_0034BA00; } }
L_0034BA48:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034B9D0u | kUnwind; return; } goto L_0034B9D0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BA60:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034BA68:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BB60; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034BB00; } }
    set32(c.r[11], c.r[8].w[0] + 3414u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 3408u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034BA98:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034BAA0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BAD8; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034BAD8; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034BAD8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BAA0u | kUnwind; return; } goto L_0034BAA0; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BA98u | kUnwind; return; } goto L_0034BA98; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BB00:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 3408u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 3414u);
    c.budget -= 6;
L_0034BB18:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BB50; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034BB50; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034BB50:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BB18u | kUnwind; return; } goto L_0034BB18; } }
L_0034BB60:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BA68u | kUnwind; return; } goto L_0034BA68; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BB78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BC20; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034BB90:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BC08; } }
    set32(c.r[12], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 3712u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[6], c.r[8].w[0] + 3718u);
    c.budget -= 6;
L_0034BBC0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BBF8; } }
    mmi::mult(c, 0, c.r[12].w[0], c.r[14].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[13].d[0];  if (t) { goto L_0034BBF8; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034BBF8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BBC0u | kUnwind; return; } goto L_0034BBC0; } }
L_0034BC08:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BB90u | kUnwind; return; } goto L_0034BB90; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BC20:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034BC28:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BD20; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034BCC0; } }
    set32(c.r[11], c.r[8].w[0] + 3718u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[4], c.r[8].w[0] + 3712u);
    set32(c.r[12], 0u + 2u);
    c.budget -= 5;
L_0034BC58:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[9].w[0] + 1u);
    c.budget -= 2;
L_0034BC60:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BC98; } }
    mmi::mult(c, 0, c.r[9].w[0], c.r[13].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[5].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034BC98; } }
    set32(c.r[2], c.r[11].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_0034BC98:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BC60u | kUnwind; return; } goto L_0034BC60; } }
    c.r[9].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BC58u | kUnwind; return; } goto L_0034BC58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BCC0:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 38u);
    set32(c.r[11], c.r[8].w[0] + 3712u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[9], c.r[8].w[0] + 3718u);
    c.budget -= 6;
L_0034BCD8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BD10; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[13].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[10].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[11].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034BD10; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0034BD10:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BCD8u | kUnwind; return; } goto L_0034BCD8; } }
L_0034BD20:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BC28u | kUnwind; return; } goto L_0034BC28; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BD38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BDE4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 10076u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0093(c, 52u, depth); } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034BD58:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BDCC; } }
    set32(c.r[11], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 152u);
    set32(c.r[6], c.r[8].w[0] + 4472u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[5], c.r[8].w[0] + 4496u);
    c.budget -= 6;
L_0034BD88:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BDBC; } }
    mmi::mult(c, 0, c.r[11].w[0], c.r[13].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034BDBC; } }
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 2;
L_0034BDBC:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BD88u | kUnwind; return; } goto L_0034BD88; } }
L_0034BDCC:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BD58u | kUnwind; return; } goto L_0034BD58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BDE4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 10076u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0093(c, 52u, depth); } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0034BDF8:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BEE4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0034BE8C; } }
    set32(c.r[9], c.r[8].w[0] + 4496u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[12], 0u + 152u);
    set32(c.r[4], c.r[8].w[0] + 4472u);
    set32(c.r[11], 0u + 2u);
    c.budget -= 5;
L_0034BE28:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0034BE30:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BE64; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[12].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { goto L_0034BE64; } }
    set32(c.r[2], c.r[9].w[0] + c.r[5].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 2;
L_0034BE64:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BE30u | kUnwind; return; } goto L_0034BE30; } }
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BE28u | kUnwind; return; } goto L_0034BE28; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BE8C:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[12], 0u + 152u);
    set32(c.r[9], c.r[8].w[0] + 4472u);
    set32(c.r[11], 0u + 2u);
    set32(c.r[5], c.r[8].w[0] + 4496u);
    c.budget -= 5;
L_0034BEA0:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BED4; } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[12].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { goto L_0034BED4; } }
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 2;
L_0034BED4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BEA0u | kUnwind; return; } goto L_0034BEA0; } }
L_0034BEE4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BDF8u | kUnwind; return; } goto L_0034BDF8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BEFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x07800000u);
    c.r[2].d[0] = c.r[7].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BF9C; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034BF10:
    set32(c.r[2], c.r[6].w[0] + 23u);
    set32(c.r[9], c.r[6].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BF84; } }
    set32(c.r[11], c.r[6].w[0] + 4u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 152u);
    set32(c.r[6], c.r[8].w[0] + 5688u);
    set32(c.r[12], 0u + 2u);
    set32(c.r[5], c.r[8].w[0] + 5712u);
    c.budget -= 6;
L_0034BF40:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0034BF74; } }
    mmi::mult(c, 0, c.r[11].w[0], c.r[13].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[12].d[0];  if (t) { goto L_0034BF74; } }
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 2;
L_0034BF74:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 19ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BF40u | kUnwind; return; } goto L_0034BF40; } }
L_0034BF84:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0034BF10u | kUnwind; return; } goto L_0034BF10; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0034BF9C:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0034BFA0:
    set32(c.r[2], c.r[6].w[0] + 19u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[2].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0093(c, 6u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0093(c, 4u, depth); } }
    set32(c.r[9], c.r[8].w[0] + 5712u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[12], 0u + 152u);
    set32(c.r[4], c.r[8].w[0] + 5688u);
    set32(c.r[11], 0u + 2u);
    c.budget -= 5;
L_0034BFD0:
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0034BFD8:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> (c.r[3].w[0] & 31u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0093(c, 3u, depth); } }
    mmi::mult(c, 0, c.r[6].w[0], c.r[12].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st64((c.r[2].w[0]), c.r[10].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[11].d[0];  if (t) { [[clang::musttail]] return unit_0093(c, 3u, depth); } }
    [[clang::musttail]] return unit_0093(c, 2u, depth);
}

}
