#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000C[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0,
    0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0,
    0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0,
    140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 220,
    0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 227, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 277, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0,
    320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0,
    371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0,
    382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0,
    399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0,
    447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0,
    475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0,
    487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0,
    0, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0,
    498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0,
    0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0,
    515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0,
    0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00130000;
    case 2u: goto L_0013008C;
    case 3u: goto L_0013009C;
    case 4u: goto L_001300AC;
    case 5u: goto L_001300B4;
    case 6u: goto L_001300C0;
    case 7u: goto L_001300CC;
    case 8u: goto L_001300D4;
    case 9u: goto L_001300DC;
    case 10u: goto L_001300E4;
    case 11u: goto L_001300EC;
    case 12u: goto L_00130104;
    case 13u: goto L_00130118;
    case 14u: goto L_00130124;
    case 15u: goto L_00130138;
    case 16u: goto L_00130174;
    case 17u: goto L_00130184;
    case 18u: goto L_00130194;
    case 19u: goto L_0013019C;
    case 20u: goto L_001301A8;
    case 21u: goto L_001301B4;
    case 22u: goto L_001301BC;
    case 23u: goto L_001301C4;
    case 24u: goto L_001301CC;
    case 25u: goto L_001301D4;
    case 26u: goto L_001301F4;
    case 27u: goto L_0013020C;
    case 28u: goto L_00130224;
    case 29u: goto L_0013023C;
    case 30u: goto L_00130254;
    case 31u: goto L_0013026C;
    case 32u: goto L_00130284;
    case 33u: goto L_0013029C;
    case 34u: goto L_00130374;
    case 35u: goto L_00130388;
    case 36u: goto L_0013039C;
    case 37u: goto L_001303B0;
    case 38u: goto L_001303C4;
    case 39u: goto L_001303D8;
    case 40u: goto L_001303EC;
    case 41u: goto L_00130400;
    case 42u: goto L_00130414;
    case 43u: goto L_00130428;
    case 44u: goto L_00130444;
    case 45u: goto L_0013044C;
    case 46u: goto L_00130464;
    case 47u: goto L_00130498;
    case 48u: goto L_001304C8;
    case 49u: goto L_001304D0;
    case 50u: goto L_001304DC;
    case 51u: goto L_001304E4;
    case 52u: goto L_001304F0;
    case 53u: goto L_001304F8;
    case 54u: goto L_0013053C;
    case 55u: goto L_00130548;
    case 56u: goto L_00130550;
    case 57u: goto L_00130568;
    case 58u: goto L_00130578;
    case 59u: goto L_00130584;
    case 60u: goto L_00130598;
    case 61u: goto L_001305B0;
    case 62u: goto L_001305E0;
    case 63u: goto L_00130634;
    case 64u: goto L_0013063C;
    case 65u: goto L_00130674;
    case 66u: goto L_001306B8;
    case 67u: goto L_001306D8;
    case 68u: goto L_00130714;
    case 69u: goto L_00130774;
    case 70u: goto L_0013079C;
    case 71u: goto L_001307B4;
    case 72u: goto L_001307D8;
    case 73u: goto L_0013080C;
    case 74u: goto L_00130828;
    case 75u: goto L_00130840;
    case 76u: goto L_00130864;
    case 77u: goto L_00130894;
    case 78u: goto L_001308B8;
    case 79u: goto L_001308FC;
    case 80u: goto L_00130910;
    case 81u: goto L_00130948;
    case 82u: goto L_00130958;
    case 83u: goto L_00130984;
    case 84u: goto L_001309AC;
    case 85u: goto L_001309B4;
    case 86u: goto L_001309E0;
    case 87u: goto L_001309FC;
    case 88u: goto L_00130A24;
    case 89u: goto L_00130A48;
    case 90u: goto L_00130A50;
    case 91u: goto L_00130A80;
    case 92u: goto L_00130A94;
    case 93u: goto L_00130A9C;
    case 94u: goto L_00130ACC;
    case 95u: goto L_00130AE0;
    case 96u: goto L_00130AE8;
    case 97u: goto L_00130B04;
    case 98u: goto L_00130B34;
    case 99u: goto L_00130B4C;
    case 100u: goto L_00130B70;
    case 101u: goto L_00130B88;
    case 102u: goto L_00130BB4;
    case 103u: goto L_00130BCC;
    case 104u: goto L_00130BE8;
    case 105u: goto L_00130C38;
    case 106u: goto L_00130C74;
    case 107u: goto L_00130C88;
    case 108u: goto L_00130CC8;
    case 109u: goto L_00130D08;
    case 110u: goto L_00130D30;
    case 111u: goto L_00130D5C;
    case 112u: goto L_00130DEC;
    case 113u: goto L_00130E34;
    case 114u: goto L_00130E4C;
    case 115u: goto L_00130E8C;
    case 116u: goto L_00130ECC;
    case 117u: goto L_00130F04;
    case 118u: goto L_00130F18;
    case 119u: goto L_00130F24;
    case 120u: goto L_00130F48;
    case 121u: goto L_00130F60;
    case 122u: goto L_00130F98;
    case 123u: goto L_00130FCC;
    case 124u: goto L_00130FF4;
    case 125u: goto L_00131008;
    case 126u: goto L_00131018;
    case 127u: goto L_00131028;
    case 128u: goto L_0013103C;
    case 129u: goto L_00131040;
    case 130u: goto L_00131050;
    case 131u: goto L_00131064;
    case 132u: goto L_00131080;
    case 133u: goto L_00131090;
    case 134u: goto L_001310AC;
    case 135u: goto L_001310C0;
    case 136u: goto L_001310CC;
    case 137u: goto L_001310D4;
    case 138u: goto L_001310E4;
    case 139u: goto L_001310F0;
    case 140u: goto L_00131100;
    case 141u: goto L_00131108;
    case 142u: goto L_00131130;
    case 143u: goto L_00131140;
    case 144u: goto L_0013115C;
    case 145u: goto L_00131170;
    case 146u: goto L_00131180;
    case 147u: goto L_00131198;
    case 148u: goto L_001311C0;
    case 149u: goto L_001311E8;
    case 150u: goto L_00131224;
    case 151u: goto L_00131240;
    case 152u: goto L_00131268;
    case 153u: goto L_001312B8;
    case 154u: goto L_001312F4;
    case 155u: goto L_00131310;
    case 156u: goto L_00131340;
    case 157u: goto L_0013138C;
    case 158u: goto L_001313C8;
    case 159u: goto L_001313E8;
    case 160u: goto L_00131400;
    case 161u: goto L_00131414;
    case 162u: goto L_00131464;
    case 163u: goto L_001314A0;
    case 164u: goto L_001314C0;
    case 165u: goto L_001314F0;
    case 166u: goto L_00131540;
    case 167u: goto L_0013154C;
    case 168u: goto L_00131568;
    case 169u: goto L_00131594;
    case 170u: goto L_001315E4;
    case 171u: goto L_00131620;
    case 172u: goto L_00131640;
    case 173u: goto L_001316BC;
    case 174u: goto L_001316D0;
    case 175u: goto L_001316E8;
    case 176u: goto L_001316F8;
    case 177u: goto L_00131710;
    case 178u: goto L_00131720;
    case 179u: goto L_00131768;
    case 180u: goto L_001317BC;
    case 181u: goto L_001317C0;
    case 182u: goto L_00131824;
    case 183u: goto L_0013183C;
    case 184u: goto L_00131840;
    case 185u: goto L_00131878;
    case 186u: goto L_00131880;
    case 187u: goto L_001318C0;
    case 188u: goto L_001318FC;
    case 189u: goto L_0013191C;
    case 190u: goto L_00131940;
    case 191u: goto L_00131974;
    case 192u: goto L_001319B8;
    case 193u: goto L_001319C0;
    case 194u: goto L_001319F4;
    case 195u: goto L_00131A38;
    case 196u: goto L_00131A58;
    case 197u: goto L_00131AC0;
    case 198u: goto L_00131ACC;
    case 199u: goto L_00131B10;
    case 200u: goto L_00131B4C;
    case 201u: goto L_00131B90;
    case 202u: goto L_00131BB0;
    case 203u: goto L_00131C18;
    case 204u: goto L_00131C40;
    case 205u: goto L_00131C60;
    case 206u: goto L_00131CB8;
    case 207u: goto L_00131D08;
    case 208u: goto L_00131D30;
    case 209u: goto L_00131D58;
    case 210u: goto L_00131D80;
    case 211u: goto L_00131DA4;
    case 212u: goto L_00131DC8;
    case 213u: goto L_00131E38;
    case 214u: goto L_00131E58;
    case 215u: goto L_00131EA0;
    case 216u: goto L_00131F04;
    case 217u: goto L_00131F48;
    case 218u: goto L_00131F58;
    case 219u: goto L_00131F70;
    case 220u: goto L_00131F7C;
    case 221u: goto L_00131F88;
    case 222u: goto L_00131FA0;
    case 223u: goto L_00131FC8;
    case 224u: goto L_00131FE0;
    case 225u: goto L_00132020;
    case 226u: goto L_00132038;
    case 227u: goto L_0013203C;
    case 228u: goto L_00132040;
    case 229u: goto L_00132060;
    case 230u: goto L_00132080;
    case 231u: goto L_00132098;
    case 232u: goto L_001320EC;
    case 233u: goto L_00132100;
    case 234u: goto L_00132114;
    case 235u: goto L_00132128;
    case 236u: goto L_00132138;
    case 237u: goto L_00132140;
    case 238u: goto L_00132158;
    case 239u: goto L_0013217C;
    case 240u: goto L_00132198;
    case 241u: goto L_00132210;
    case 242u: goto L_00132230;
    case 243u: goto L_00132254;
    case 244u: goto L_00132270;
    case 245u: goto L_00132288;
    case 246u: goto L_0013229C;
    case 247u: goto L_001322BC;
    case 248u: goto L_001322CC;
    case 249u: goto L_00132430;
    case 250u: goto L_00132470;
    case 251u: goto L_001325E0;
    case 252u: goto L_001325F8;
    case 253u: goto L_00132610;
    case 254u: goto L_00132628;
    case 255u: goto L_00132640;
    case 256u: goto L_00132658;
    case 257u: goto L_00132670;
    case 258u: goto L_00132688;
    case 259u: goto L_001326A0;
    case 260u: goto L_001326B8;
    case 261u: goto L_001326D0;
    case 262u: goto L_001326E8;
    case 263u: goto L_00132700;
    case 264u: goto L_00132718;
    case 265u: goto L_00132730;
    case 266u: goto L_00132748;
    case 267u: goto L_00132760;
    case 268u: goto L_00132778;
    case 269u: goto L_00132790;
    case 270u: goto L_001327A8;
    case 271u: goto L_001327C0;
    case 272u: goto L_001327D8;
    case 273u: goto L_001327F0;
    case 274u: goto L_00132808;
    case 275u: goto L_00132820;
    case 276u: goto L_00132838;
    case 277u: goto L_0013283C;
    case 278u: goto L_00132840;
    case 279u: goto L_00132850;
    case 280u: goto L_00132868;
    case 281u: goto L_00132880;
    case 282u: goto L_00132898;
    case 283u: goto L_001328B0;
    case 284u: goto L_001328C0;
    case 285u: goto L_001328C8;
    case 286u: goto L_001328E0;
    case 287u: goto L_001328F8;
    case 288u: goto L_00132910;
    case 289u: goto L_00132928;
    case 290u: goto L_00132940;
    case 291u: goto L_00132958;
    case 292u: goto L_00132970;
    case 293u: goto L_00132988;
    case 294u: goto L_001329A0;
    case 295u: goto L_001329B8;
    case 296u: goto L_001329D0;
    case 297u: goto L_001329E8;
    case 298u: goto L_00132A00;
    case 299u: goto L_00132A18;
    case 300u: goto L_00132A30;
    case 301u: goto L_00132A48;
    case 302u: goto L_00132A60;
    case 303u: goto L_00132A78;
    case 304u: goto L_00132A90;
    case 305u: goto L_00132AA8;
    case 306u: goto L_00132AC0;
    case 307u: goto L_00132AD8;
    case 308u: goto L_00132AF0;
    case 309u: goto L_00132B08;
    case 310u: goto L_00132B20;
    case 311u: goto L_00132B38;
    case 312u: goto L_00132B50;
    case 313u: goto L_00132B68;
    case 314u: goto L_00132B80;
    case 315u: goto L_00132B98;
    case 316u: goto L_00132BB0;
    case 317u: goto L_00132BC8;
    case 318u: goto L_00132BE0;
    case 319u: goto L_00132BF8;
    case 320u: goto L_00132C00;
    case 321u: goto L_00132C10;
    case 322u: goto L_00132C28;
    case 323u: goto L_00132C40;
    case 324u: goto L_00132C58;
    case 325u: goto L_00132C70;
    case 326u: goto L_00132C88;
    case 327u: goto L_00132CA0;
    case 328u: goto L_00132CB8;
    case 329u: goto L_00132CD0;
    case 330u: goto L_00132CE8;
    case 331u: goto L_00132D00;
    case 332u: goto L_00132D18;
    case 333u: goto L_00132D30;
    case 334u: goto L_00132D48;
    case 335u: goto L_00132D60;
    case 336u: goto L_00132D78;
    case 337u: goto L_00132D90;
    case 338u: goto L_00132DA8;
    case 339u: goto L_00132DC0;
    case 340u: goto L_00132DD8;
    case 341u: goto L_00132DF0;
    case 342u: goto L_00132E00;
    case 343u: goto L_00132E08;
    case 344u: goto L_00132E20;
    case 345u: goto L_00132E38;
    case 346u: goto L_00132E50;
    case 347u: goto L_00132E68;
    case 348u: goto L_00132E80;
    case 349u: goto L_00132E98;
    case 350u: goto L_00132EB0;
    case 351u: goto L_00132EC8;
    case 352u: goto L_00132EE0;
    case 353u: goto L_00132EF8;
    case 354u: goto L_00132F10;
    case 355u: goto L_00132F28;
    case 356u: goto L_00132F40;
    case 357u: goto L_00132F58;
    case 358u: goto L_00132F70;
    case 359u: goto L_00132F88;
    case 360u: goto L_00132FA0;
    case 361u: goto L_00132FB8;
    case 362u: goto L_00132FD0;
    case 363u: goto L_00132FE8;
    case 364u: goto L_00133000;
    case 365u: goto L_00133018;
    case 366u: goto L_00133030;
    case 367u: goto L_0013303C;
    case 368u: goto L_00133048;
    case 369u: goto L_00133060;
    case 370u: goto L_00133078;
    case 371u: goto L_00133080;
    case 372u: goto L_00133090;
    case 373u: goto L_001330A8;
    case 374u: goto L_001330C0;
    case 375u: goto L_001330D8;
    case 376u: goto L_001330F0;
    case 377u: goto L_00133108;
    case 378u: goto L_00133120;
    case 379u: goto L_00133138;
    case 380u: goto L_00133150;
    case 381u: goto L_00133168;
    case 382u: goto L_00133180;
    case 383u: goto L_00133198;
    case 384u: goto L_001331B0;
    case 385u: goto L_001331C0;
    case 386u: goto L_001331C8;
    case 387u: goto L_001331E0;
    case 388u: goto L_001331F8;
    case 389u: goto L_00133210;
    case 390u: goto L_00133228;
    case 391u: goto L_00133240;
    case 392u: goto L_00133258;
    case 393u: goto L_00133270;
    case 394u: goto L_00133288;
    case 395u: goto L_001332A0;
    case 396u: goto L_001332B8;
    case 397u: goto L_001332D0;
    case 398u: goto L_001332E8;
    case 399u: goto L_00133300;
    case 400u: goto L_00133318;
    case 401u: goto L_00133330;
    case 402u: goto L_00133348;
    case 403u: goto L_00133360;
    case 404u: goto L_00133378;
    case 405u: goto L_00133390;
    case 406u: goto L_001333A8;
    case 407u: goto L_001333C0;
    case 408u: goto L_001333D8;
    case 409u: goto L_001333F0;
    case 410u: goto L_00133408;
    case 411u: goto L_00133420;
    case 412u: goto L_00133438;
    case 413u: goto L_00133450;
    case 414u: goto L_00133468;
    case 415u: goto L_00133480;
    case 416u: goto L_00133498;
    case 417u: goto L_001334B0;
    case 418u: goto L_001334C8;
    case 419u: goto L_001334E0;
    case 420u: goto L_001334F8;
    case 421u: goto L_00133510;
    case 422u: goto L_00133528;
    case 423u: goto L_00133540;
    case 424u: goto L_00133558;
    case 425u: goto L_00133570;
    case 426u: goto L_00133588;
    case 427u: goto L_001335A0;
    case 428u: goto L_001335B8;
    case 429u: goto L_001335D0;
    case 430u: goto L_001335E8;
    case 431u: goto L_00133600;
    case 432u: goto L_00133618;
    case 433u: goto L_00133630;
    case 434u: goto L_00133648;
    case 435u: goto L_00133660;
    case 436u: goto L_00133678;
    case 437u: goto L_00133690;
    case 438u: goto L_001336A8;
    case 439u: goto L_001336C0;
    case 440u: goto L_001336D8;
    case 441u: goto L_001336F0;
    case 442u: goto L_00133708;
    case 443u: goto L_00133720;
    case 444u: goto L_00133738;
    case 445u: goto L_00133750;
    case 446u: goto L_00133768;
    case 447u: goto L_00133780;
    case 448u: goto L_00133798;
    case 449u: goto L_001337B0;
    case 450u: goto L_001337C8;
    case 451u: goto L_001337E0;
    case 452u: goto L_001337F8;
    case 453u: goto L_00133810;
    case 454u: goto L_00133828;
    case 455u: goto L_0013383C;
    case 456u: goto L_00133840;
    case 457u: goto L_00133858;
    case 458u: goto L_00133870;
    case 459u: goto L_00133888;
    case 460u: goto L_001338A0;
    case 461u: goto L_001338B8;
    case 462u: goto L_001338D0;
    case 463u: goto L_001338E8;
    case 464u: goto L_00133900;
    case 465u: goto L_00133918;
    case 466u: goto L_00133930;
    case 467u: goto L_00133948;
    case 468u: goto L_00133960;
    case 469u: goto L_00133978;
    case 470u: goto L_00133990;
    case 471u: goto L_001339A8;
    case 472u: goto L_001339C0;
    case 473u: goto L_001339D8;
    case 474u: goto L_001339F0;
    case 475u: goto L_00133A00;
    case 476u: goto L_00133A08;
    case 477u: goto L_00133A20;
    case 478u: goto L_00133A38;
    case 479u: goto L_00133A50;
    case 480u: goto L_00133A68;
    case 481u: goto L_00133A80;
    case 482u: goto L_00133A98;
    case 483u: goto L_00133AB0;
    case 484u: goto L_00133AC8;
    case 485u: goto L_00133AE0;
    case 486u: goto L_00133AF8;
    case 487u: goto L_00133B00;
    case 488u: goto L_00133B10;
    case 489u: goto L_00133B28;
    case 490u: goto L_00133B40;
    case 491u: goto L_00133B58;
    case 492u: goto L_00133B70;
    case 493u: goto L_00133B88;
    case 494u: goto L_00133BA0;
    case 495u: goto L_00133BB8;
    case 496u: goto L_00133BD0;
    case 497u: goto L_00133BE8;
    case 498u: goto L_00133C00;
    case 499u: goto L_00133C18;
    case 500u: goto L_00133C30;
    case 501u: goto L_00133C38;
    case 502u: goto L_00133C48;
    case 503u: goto L_00133C60;
    case 504u: goto L_00133C78;
    case 505u: goto L_00133C90;
    case 506u: goto L_00133CA8;
    case 507u: goto L_00133CC0;
    case 508u: goto L_00133CD8;
    case 509u: goto L_00133CF0;
    case 510u: goto L_00133D08;
    case 511u: goto L_00133D20;
    case 512u: goto L_00133D38;
    case 513u: goto L_00133D50;
    case 514u: goto L_00133D68;
    case 515u: goto L_00133D80;
    case 516u: goto L_00133D98;
    case 517u: goto L_00133DB0;
    case 518u: goto L_00133DC8;
    case 519u: goto L_00133DD8;
    case 520u: goto L_00133DF0;
    case 521u: goto L_00133E08;
    case 522u: goto L_00133E28;
    case 523u: goto L_00133E40;
    case 524u: goto L_00133E58;
    case 525u: goto L_00133E7C;
    case 526u: goto L_00133EA8;
    case 527u: goto L_00133F30;
    case 528u: goto L_00133F48;
    case 529u: goto L_00133F60;
    case 530u: goto L_00133F98;
    case 531u: goto L_00133FD0;
    default: bad_entry(c, 0x00130000u); return;
    }
L_00130000:
    set32(c.r[6], c.r[2].w[0] + 13120u);
    set32(c.r[4], ld32((c.r[3].w[0] + 23004u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[2].w[0] + 13128u);
    set32(c.r[9], c.r[3].w[0] + 13136u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[2].w[0] + 13152u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[8], c.r[3].w[0] + 13160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 13176u);
    c.budget -= 18;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00130068; } }
    st32((c.r[29].w[0]), c.r[6].w[0]);
    set32(c.r[16], 0u + 5u);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[8].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0013007C; } }
L_00130068:
    st32((c.r[29].w[0]), c.r[6].w[0]);
    set32(c.r[16], 0u + 4u);
    st32((c.r[29].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
L_0013007C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013008Cu);  if (depth < kMaxDepth) unit_009E(c, 332u, depth + 1u); else { c.pc = 0x0037B518u; return; } if (c.pc != 0x0013008Cu) [[unlikely]] return; }
L_0013008C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013009Cu);  if (depth < kMaxDepth) unit_009E(c, 239u, depth + 1u); else { c.pc = 0x0037AAB8u; return; } if (c.pc != 0x0013009Cu) [[unlikely]] return; }
L_0013009C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 14040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300ACu);  if (depth < kMaxDepth) unit_009C(c, 71u, depth + 1u); else { c.pc = 0x00370860u; return; } if (c.pc != 0x001300ACu) [[unlikely]] return; }
L_001300AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300B4u);  if (depth < kMaxDepth) unit_0044(c, 236u, depth + 1u); else { c.pc = 0x00213510u; return; } if (c.pc != 0x001300B4u) [[unlikely]] return; }
L_001300B4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300C0u);  if (depth < kMaxDepth) unit_0041(c, 255u, depth + 1u); else { c.pc = 0x00206030u; return; } if (c.pc != 0x001300C0u) [[unlikely]] return; }
L_001300C0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300CCu);  if (depth < kMaxDepth) unit_0041(c, 255u, depth + 1u); else { c.pc = 0x00206030u; return; } if (c.pc != 0x001300CCu) [[unlikely]] return; }
L_001300CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300D4u);  if (depth < kMaxDepth) unit_004C(c, 76u, depth + 1u); else { c.pc = 0x00231250u; return; } if (c.pc != 0x001300D4u) [[unlikely]] return; }
L_001300D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300DCu);  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024D128u; return; } if (c.pc != 0x001300DCu) [[unlikely]] return; }
L_001300DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300E4u);  if (depth < kMaxDepth) unit_0041(c, 286u, depth + 1u); else { c.pc = 0x002064E8u; return; } if (c.pc != 0x001300E4u) [[unlikely]] return; }
L_001300E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300ECu);  if (depth < kMaxDepth) unit_00E0(c, 355u, depth + 1u); else { c.pc = 0x004829E8u; return; } if (c.pc != 0x001300ECu) [[unlikely]] return; }
L_001300EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 13192u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130104u);  if (depth < kMaxDepth) unit_00E1(c, 289u, depth + 1u); else { c.pc = 0x00486570u; return; } if (c.pc != 0x00130104u) [[unlikely]] return; }
L_00130104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 24332u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130118u);  if (depth < kMaxDepth) unit_0071(c, 259u, depth + 1u); else { c.pc = 0x002C6D70u; return; } if (c.pc != 0x00130118u) [[unlikely]] return; }
L_00130118:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130124u);  if (depth < kMaxDepth) unit_0071(c, 260u, depth + 1u); else { c.pc = 0x002C6D90u; return; } if (c.pc != 0x00130124u) [[unlikely]] return; }
L_00130124:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00130138:
    set32(c.r[29], c.r[29].w[0] - 480u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 320u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130174u);  if (depth < kMaxDepth) unit_009E(c, 332u, depth + 1u); else { c.pc = 0x0037B518u; return; } if (c.pc != 0x00130174u) [[unlikely]] return; }
L_00130174:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130184u);  if (depth < kMaxDepth) unit_009E(c, 239u, depth + 1u); else { c.pc = 0x0037AAB8u; return; } if (c.pc != 0x00130184u) [[unlikely]] return; }
L_00130184:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 14040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130194u);  if (depth < kMaxDepth) unit_009C(c, 71u, depth + 1u); else { c.pc = 0x00370860u; return; } if (c.pc != 0x00130194u) [[unlikely]] return; }
L_00130194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013019Cu);  if (depth < kMaxDepth) unit_0044(c, 236u, depth + 1u); else { c.pc = 0x00213510u; return; } if (c.pc != 0x0013019Cu) [[unlikely]] return; }
L_0013019C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301A8u);  if (depth < kMaxDepth) unit_0041(c, 255u, depth + 1u); else { c.pc = 0x00206030u; return; } if (c.pc != 0x001301A8u) [[unlikely]] return; }
L_001301A8:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301B4u);  if (depth < kMaxDepth) unit_0041(c, 255u, depth + 1u); else { c.pc = 0x00206030u; return; } if (c.pc != 0x001301B4u) [[unlikely]] return; }
L_001301B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301BCu);  if (depth < kMaxDepth) unit_004C(c, 76u, depth + 1u); else { c.pc = 0x00231250u; return; } if (c.pc != 0x001301BCu) [[unlikely]] return; }
L_001301BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301C4u);  if (depth < kMaxDepth) unit_0053(c, 89u, depth + 1u); else { c.pc = 0x0024D128u; return; } if (c.pc != 0x001301C4u) [[unlikely]] return; }
L_001301C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301CCu);  if (depth < kMaxDepth) unit_0041(c, 286u, depth + 1u); else { c.pc = 0x002064E8u; return; } if (c.pc != 0x001301CCu) [[unlikely]] return; }
L_001301CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301D4u);  if (depth < kMaxDepth) unit_00E0(c, 355u, depth + 1u); else { c.pc = 0x004829E8u; return; } if (c.pc != 0x001301D4u) [[unlikely]] return; }
L_001301D4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 13216u);
    set32(c.r[5], c.r[5].w[0] + 13232u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301F4u);  if (depth < kMaxDepth) unit_00DD(c, 107u, depth + 1u); else { c.pc = 0x00475730u; return; } if (c.pc != 0x001301F4u) [[unlikely]] return; }
L_001301F4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13248u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013020Cu);  if (depth < kMaxDepth) unit_00DD(c, 107u, depth + 1u); else { c.pc = 0x00475730u; return; } if (c.pc != 0x0013020Cu) [[unlikely]] return; }
L_0013020C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13256u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130224u);  if (depth < kMaxDepth) unit_00DD(c, 107u, depth + 1u); else { c.pc = 0x00475730u; return; } if (c.pc != 0x00130224u) [[unlikely]] return; }
L_00130224:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13272u);
    set32(c.r[6], 0u + 60u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013023Cu);  if (depth < kMaxDepth) unit_00DD(c, 107u, depth + 1u); else { c.pc = 0x00475730u; return; } if (c.pc != 0x0013023Cu) [[unlikely]] return; }
L_0013023C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13288u);
    set32(c.r[6], 0u + 240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130254u);  if (depth < kMaxDepth) unit_00DD(c, 107u, depth + 1u); else { c.pc = 0x00475730u; return; } if (c.pc != 0x00130254u) [[unlikely]] return; }
L_00130254:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13304u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013026Cu);  if (depth < kMaxDepth) unit_00DD(c, 107u, depth + 1u); else { c.pc = 0x00475730u; return; } if (c.pc != 0x0013026Cu) [[unlikely]] return; }
L_0013026C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13320u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130284u);  if (depth < kMaxDepth) unit_00DD(c, 107u, depth + 1u); else { c.pc = 0x00475730u; return; } if (c.pc != 0x00130284u) [[unlikely]] return; }
L_00130284:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 13336u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013029Cu);  if (depth < kMaxDepth) unit_00DD(c, 107u, depth + 1u); else { c.pc = 0x00475730u; return; } if (c.pc != 0x0013029Cu) [[unlikely]] return; }
L_0013029C:
    set32(c.r[2], c.r[29].w[0] + 144u);
    set32(c.r[3], c.r[29].w[0] + 176u);
    set32(c.r[17], c.r[29].w[0] + 16u);
    set32(c.r[18], c.r[29].w[0] + 32u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    set32(c.r[20], c.r[29].w[0] + 64u);
    set32(c.r[21], c.r[29].w[0] + 80u);
    set32(c.r[22], c.r[29].w[0] + 96u);
    set32(c.r[23], c.r[29].w[0] + 112u);
    set32(c.r[30], c.r[29].w[0] + 128u);
    set32(c.r[7], c.r[29].w[0] + 208u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[29].w[0] + 260u), c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + 13352u);
    st32((c.r[29].w[0] + 264u), c.r[18].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 268u), c.r[19].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 272u), c.r[20].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 276u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 280u), c.r[22].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 288u), c.r[30].w[0]);
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 256u), c.r[29].w[0]);
    st32((c.r[29].w[0] + 312u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 292u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 296u), c.r[3].w[0]);
    ldl(c.r[8], (c.r[29].w[0] + 263u));
    ldr(c.r[8], (c.r[29].w[0] + 256u));
    ldl(c.r[2], (c.r[29].w[0] + 271u));
    ldr(c.r[2], (c.r[29].w[0] + 264u));
    ldl(c.r[3], (c.r[29].w[0] + 279u));
    ldr(c.r[3], (c.r[29].w[0] + 272u));
    ldl(c.r[7], (c.r[29].w[0] + 287u));
    ldr(c.r[7], (c.r[29].w[0] + 280u));
    sdl(c.r[8], (c.r[29].w[0] + 215u));
    sdr(c.r[8], (c.r[29].w[0] + 208u));
    sdl(c.r[2], (c.r[29].w[0] + 223u));
    sdr(c.r[2], (c.r[29].w[0] + 216u));
    sdl(c.r[3], (c.r[29].w[0] + 231u));
    sdr(c.r[3], (c.r[29].w[0] + 224u));
    sdl(c.r[7], (c.r[29].w[0] + 239u));
    sdr(c.r[7], (c.r[29].w[0] + 232u));
    ldl(c.r[8], (c.r[29].w[0] + 295u));
    ldr(c.r[8], (c.r[29].w[0] + 288u));
    set32(c.r[2], ld32((c.r[29].w[0] + 296u)));
    sdl(c.r[8], (c.r[29].w[0] + 247u));
    sdr(c.r[8], (c.r[29].w[0] + 240u));
    st32((c.r[29].w[0] + 248u), c.r[2].w[0]);
    c.budget -= 54;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130374u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00130374u) [[unlikely]] return; }
L_00130374:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130388u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00130388u) [[unlikely]] return; }
L_00130388:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013039Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0013039Cu) [[unlikely]] return; }
L_0013039C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001303B0u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001303B0u) [[unlikely]] return; }
L_001303B0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001303C4u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001303C4u) [[unlikely]] return; }
L_001303C4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001303D8u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001303D8u) [[unlikely]] return; }
L_001303D8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001303ECu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001303ECu) [[unlikely]] return; }
L_001303EC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130400u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00130400u) [[unlikely]] return; }
L_00130400:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130414u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00130414u) [[unlikely]] return; }
L_00130414:
    set32(c.r[4], ld32((c.r[29].w[0] + 304u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 13136u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130428u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00130428u) [[unlikely]] return; }
L_00130428:
    set32(c.r[4], ld32((c.r[29].w[0] + 308u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 13360u);
    set32(c.r[6], c.r[6].w[0] + 13176u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130444u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00130444u) [[unlikely]] return; }
L_00130444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013044Cu);  if (depth < kMaxDepth) unit_00E0(c, 355u, depth + 1u); else { c.pc = 0x004829E8u; return; } if (c.pc != 0x0013044Cu) [[unlikely]] return; }
L_0013044C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[4], c.r[4].w[0] + 13368u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130464u);  if (depth < kMaxDepth) unit_00E1(c, 289u, depth + 1u); else { c.pc = 0x00486570u; return; } if (c.pc != 0x00130464u) [[unlikely]] return; }
L_00130464:
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
    set32(c.r[29], c.r[29].w[0] + 480u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00130498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[5], ld32((c.r[2].w[0] - 24388u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001304C8u);  if (depth < kMaxDepth) unit_0036(c, 282u, depth + 1u); else { c.pc = 0x001DA6A8u; return; } if (c.pc != 0x001304C8u) [[unlikely]] return; }
L_001304C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001304D0u);  if (depth < kMaxDepth) unit_0029(c, 337u, depth + 1u); else { c.pc = 0x001A7018u; return; } if (c.pc != 0x001304D0u) [[unlikely]] return; }
L_001304D0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001304DCu);  if (depth < kMaxDepth) unit_0029(c, 349u, depth + 1u); else { c.pc = 0x001A7148u; return; } if (c.pc != 0x001304DCu) [[unlikely]] return; }
L_001304DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001304E4u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001304E4u) [[unlikely]] return; }
L_001304E4:
    set32(c.r[4], ld32((c.r[2].w[0] + 212u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001304F0u);  if (depth < kMaxDepth) unit_0036(c, 413u, depth + 1u); else { c.pc = 0x001DAF90u; return; } if (c.pc != 0x001304F0u) [[unlikely]] return; }
L_001304F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001304F8u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x001304F8u) [[unlikely]] return; }
L_001304F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    set32(c.r[17], c.r[3].w[0] - 24376u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 44u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 10160u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 12228u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 7756u), c.r[16].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0] + 3484u), c.r[16].w[0]);
    st32((c.r[7].w[0] + 3472u), c.r[16].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013053Cu);  if (depth < kMaxDepth) unit_0071(c, 259u, depth + 1u); else { c.pc = 0x002C6D70u; return; } if (c.pc != 0x0013053Cu) [[unlikely]] return; }
L_0013053C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130548u);  if (depth < kMaxDepth) unit_0071(c, 260u, depth + 1u); else { c.pc = 0x002C6D90u; return; } if (c.pc != 0x00130548u) [[unlikely]] return; }
L_00130548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130550u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x00130550u) [[unlikely]] return; }
L_00130550:
    set32(c.r[3], ld32((c.r[2].w[0] + 136u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_0013058C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130568u);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x00130568u) [[unlikely]] return; }
L_00130568:
    set32(c.r[5], ld32((c.r[17].w[0] + 48u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130578u);  if (depth < kMaxDepth) unit_0071(c, 259u, depth + 1u); else { c.pc = 0x002C6D70u; return; } if (c.pc != 0x00130578u) [[unlikely]] return; }
L_00130578:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130584u);  if (depth < kMaxDepth) unit_0071(c, 260u, depth + 1u); else { c.pc = 0x002C6D90u; return; } if (c.pc != 0x00130584u) [[unlikely]] return; }
L_00130584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130598; } }
L_0013058C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130598u);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x00130598u) [[unlikely]] return; }
L_00130598:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001305B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 4u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001305E0u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x001305E0u) [[unlikely]] return; }
L_001305E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], 0u + 320u);
    set32(c.r[3], 0u + 223u);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[9], 0u + 26u);
    set32(c.r[10], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.r[11].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] - 5024u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 20u);
    set32(c.r[7], 0u + 9220u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130634u);  if (depth < kMaxDepth) unit_009D(c, 190u, depth + 1u); else { c.pc = 0x00376EE0u; return; } if (c.pc != 0x00130634u) [[unlikely]] return; }
L_00130634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013063Cu);  if (depth < kMaxDepth) unit_0039(c, 346u, depth + 1u); else { c.pc = 0x001E6EB8u; return; } if (c.pc != 0x0013063Cu) [[unlikely]] return; }
L_0013063C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013067C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], 0u + 1456u);
    set32(c.r[3], 0u + 70u);
    set32(c.r[5], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[6], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130674u);  if (depth < kMaxDepth) unit_009D(c, 177u, depth + 1u); else { c.pc = 0x00376C68u; return; } if (c.pc != 0x00130674u) [[unlikely]] return; }
L_00130674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001306B8; } }
L_0013067C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1456u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 55u);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 36u);
    st32((c.r[29].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 40u);
    st32((c.r[29].w[0] + 44u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 44u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001306B8u);  if (depth < kMaxDepth) unit_009D(c, 177u, depth + 1u); else { c.pc = 0x00376C68u; return; } if (c.pc != 0x001306B8u) [[unlikely]] return; }
L_001306B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001306D8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130714u);  if (depth < kMaxDepth) unit_009D(c, 276u, depth + 1u); else { c.pc = 0x00377CD8u; return; } if (c.pc != 0x00130714u) [[unlikely]] return; }
L_00130714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130F60; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00130730; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_00130730:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 672u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001308B8; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], 0u + 282u);
    set32(c.r[2], ld32((c.r[18].w[0] + 23004u)));
    set32(c.r[23], 0u + 312u);
    set32(c.r[4], 0u + 1459u);
    set32(c.r[21], 0u + 315u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    set32(c.r[22], 0u + 285u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[23].d[0];
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130774u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00130774u) [[unlikely]] return; }
L_00130774:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[20] = c.r[1].w[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 130u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013079Cu);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x0013079Cu) [[unlikely]] return; }
L_0013079C:
    set32(c.r[2], ld32((c.r[18].w[0] + 23004u)));
    set32(c.r[4], 0u + 1454u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[22].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001307B4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001307B4u) [[unlikely]] return; }
L_001307B4:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 152u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001307D8u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x001307D8u) [[unlikely]] return; }
L_001307D8:
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130864; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 23004u)));
    set32(c.r[2], 0u + 282u);
    c.r[16].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], 0u + 1458u);
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013080Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0013080Cu) [[unlikely]] return; }
L_0013080C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[4], 0u + 407u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130828u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x00130828u) [[unlikely]] return; }
L_00130828:
    set32(c.r[2], ld32((c.r[18].w[0] + 23004u)));
    set32(c.r[4], 0u + 1453u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[22].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130840u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00130840u) [[unlikely]] return; }
L_00130840:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 429u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130864u);  if (depth < kMaxDepth) unit_007D(c, 158u, depth + 1u); else { c.pc = 0x002F6370u; return; } if (c.pc != 0x00130864u) [[unlikely]] return; }
L_00130864:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001308B8; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 23004u)));
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], 0u + 1480u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[22].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130894u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00130894u) [[unlikely]] return; }
L_00130894:
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 320u);
    set32(c.r[6], 0u + 96u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001308B8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001308B8u) [[unlikely]] return; }
L_001308B8:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130B90; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 60u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130F60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13408u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00130000u < 16384u) { entry = entries_000C[(t - 0x00130000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001308FC:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130910u);  if (depth < kMaxDepth) unit_0036(c, 413u, depth + 1u); else { c.pc = 0x001DAF90u; return; } if (c.pc != 0x00130910u) [[unlikely]] return; }
L_00130910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23892u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00130934; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130950; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130934:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 4176u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130948u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00377D18u; return; } if (c.pc != 0x00130948u) [[unlikely]] return; }
L_00130948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130958u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x00130958u) [[unlikely]] return; }
L_00130958:
    set32(c.r[18], 0u + 12u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 14864u);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[17], c.r[16].w[0] + 84u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[2].w[0] + 204u), c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130984u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x00130984u) [[unlikely]] return; }
L_00130984:
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 488u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001309ACu);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00377D18u; return; } if (c.pc != 0x001309ACu) [[unlikely]] return; }
L_001309AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_001309B4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00130A04; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 24440u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001309E0u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x001309E0u) [[unlikely]] return; }
L_001309E0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[19].w[0] + 32u);
    st32((c.r[16].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001309FCu);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x00378418u; return; } if (c.pc != 0x001309FCu) [[unlikely]] return; }
L_001309FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130A04:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    set32(c.r[4], c.r[19].w[0] + 32u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00130A24; } }
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A24u);  if (depth < kMaxDepth) unit_009E(c, 37u, depth + 1u); else { c.pc = 0x003784A0u; return; } if (c.pc != 0x00130A24u) [[unlikely]] return; }
L_00130A24:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 1176u);
    st32((c.r[3].w[0] + 40u), 0u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A48u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00377D18u; return; } if (c.pc != 0x00130A48u) [[unlikely]] return; }
L_00130A48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130A50:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00130A78; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23800u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130E2C; } }
L_00130A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A80u);  if (depth < kMaxDepth) unit_000B(c, 183u, depth + 1u); else { c.pc = 0x0012E260u; return; } if (c.pc != 0x00130A80u) [[unlikely]] return; }
L_00130A80:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A94u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00377D18u; return; } if (c.pc != 0x00130A94u) [[unlikely]] return; }
L_00130A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130A9C:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00130AC4; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23800u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130E2C; } }
L_00130AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130ACCu);  if (depth < kMaxDepth) unit_000B(c, 183u, depth + 1u); else { c.pc = 0x0012E260u; return; } if (c.pc != 0x00130ACCu) [[unlikely]] return; }
L_00130ACC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130AE0u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00377D18u; return; } if (c.pc != 0x00130AE0u) [[unlikely]] return; }
L_00130AE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 14864u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130B04u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x00130B04u) [[unlikely]] return; }
L_00130B04:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00130ECC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 172u), c.r[4].w[0]);
    st32((c.r[3].w[0] - 21176u), c.r[2].w[0]);
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130B34u);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x00378418u; return; } if (c.pc != 0x00130B34u) [[unlikely]] return; }
L_00130B34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[2].w[0] + 29812u), 0u);
    st32((c.r[3].w[0] + 29816u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130ECC; } }
L_00130B4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 23880u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 60u), c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130B70u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x00130B70u) [[unlikely]] return; }
L_00130B70:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { goto L_00130F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130B88u);  if (depth < kMaxDepth) unit_0029(c, 123u, depth + 1u); else { c.pc = 0x001A50E0u; return; } if (c.pc != 0x00130B88u) [[unlikely]] return; }
L_00130B88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130B90:
    c.r[2].d[0] = c.r[3].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130C90; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[5], 0u + 2048u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    set32(c.r[16], c.r[19].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130BB4u);  if (depth < kMaxDepth) unit_0071(c, 305u, depth + 1u); else { c.pc = 0x002C72F8u; return; } if (c.pc != 0x00130BB4u) [[unlikely]] return; }
L_00130BB4:
    set32(c.r[3], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00130C90; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130BCCu);  if (depth < kMaxDepth) unit_009D(c, 172u, depth + 1u); else { c.pc = 0x00376B68u; return; } if (c.pc != 0x00130BCCu) [[unlikely]] return; }
L_00130BCC:
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130BE8u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x00130BE8u) [[unlikely]] return; }
L_00130BE8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], 0u + 320u);
    set32(c.r[3], 0u + 205u);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 26u);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5024u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], 0u + 9220u);
    c.f[13] = c.f[12];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130C38u);  if (depth < kMaxDepth) unit_009D(c, 190u, depth + 1u); else { c.pc = 0x00376EE0u; return; } if (c.pc != 0x00130C38u) [[unlikely]] return; }
L_00130C38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1438u);
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[3], 0u + 35u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130C74u);  if (depth < kMaxDepth) unit_009D(c, 177u, depth + 1u); else { c.pc = 0x00376C68u; return; } if (c.pc != 0x00130C74u) [[unlikely]] return; }
L_00130C74:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130C88u);  if (depth < kMaxDepth) unit_009E(c, 39u, depth + 1u); else { c.pc = 0x003784E0u; return; } if (c.pc != 0x00130C88u) [[unlikely]] return; }
L_00130C88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130C90:
    set32(c.r[2], ld32((c.r[20].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00130F60; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00130DF4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    set32(c.r[4], c.r[19].w[0] + 32u);
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130CC8u);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x00378418u; return; } if (c.pc != 0x00130CC8u) [[unlikely]] return; }
L_00130CC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23892u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00130CEC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130D40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130CEC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 14864u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130D08u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x00130D08u) [[unlikely]] return; }
L_00130D08:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], 0u + 12u);
    st32((c.r[16].w[0] + 68u), 0u);
    set32(c.r[5], 0u + 2u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130D30u);  if (depth < kMaxDepth) unit_000F(c, 223u, depth + 1u); else { c.pc = 0x0013EF48u; return; } if (c.pc != 0x00130D30u) [[unlikely]] return; }
L_00130D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 4976u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130D40:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[16].w[0] - 14864u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130D5Cu);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x00130D5Cu) [[unlikely]] return; }
L_00130D5C:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[3].w[0] - 4976u), 0u);
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    st32((c.r[17].w[0] + 72u), 0u);
    st32((c.r[17].w[0] + 68u), 0u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130DB8; } }
    set32(c.r[7], 0u + 12u);
    set32(c.r[5], c.r[17].w[0] + 76u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130DE0; } }
L_00130DB8:
    set32(c.r[6], 0u + 12u);
    set32(c.r[5], c.r[17].w[0] + 76u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 64u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.budget -= 10;
L_00130DE0:
    set32(c.r[4], c.r[16].w[0] - 14864u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130DECu);  if (depth < kMaxDepth) unit_000F(c, 223u, depth + 1u); else { c.pc = 0x0013EF48u; return; } if (c.pc != 0x00130DECu) [[unlikely]] return; }
L_00130DEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130DF4:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_00130E0C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00130E54; } }
L_00130E0C:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23800u);
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 8;
L_00130E2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E34u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x00130E34u) [[unlikely]] return; }
L_00130E34:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E4Cu);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x00130E4Cu) [[unlikely]] return; }
L_00130E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130E54:
    set32(c.r[18], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_00130EA8; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 24440u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), 0u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E8Cu);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x00130E8Cu) [[unlikely]] return; }
L_00130E8C:
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F10; } }
L_00130EA8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00130EDC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14864u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130ECCu);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x00130ECCu) [[unlikely]] return; }
L_00130ECC:
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130EDC:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00130F2C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 24440u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F04u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x00130F04u) [[unlikely]] return; }
L_00130F04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[16].w[0] + 60u), c.r[18].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    c.budget -= 3;
L_00130F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F18u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x00130F18u) [[unlikely]] return; }
L_00130F18:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F24u);  if (depth < kMaxDepth) unit_009E(c, 33u, depth + 1u); else { c.pc = 0x00378418u; return; } if (c.pc != 0x00130F24u) [[unlikely]] return; }
L_00130F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130F60; } }
L_00130F2C:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00130F60; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] + 8736u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F48u);  if (depth < kMaxDepth) unit_009D(c, 58u, depth + 1u); else { c.pc = 0x00374AB8u; return; } if (c.pc != 0x00130F48u) [[unlikely]] return; }
L_00130F48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 23880u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F60u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00377D00u; return; } if (c.pc != 0x00130F60u) [[unlikely]] return; }
L_00130F60:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00130F98:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_00130FF4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00130FE0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] - 24376u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130FCCu);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x00130FCCu) [[unlikely]] return; }
L_00130FCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 13432u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00130FF4; } }
L_00130FE0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 24376u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130FF4u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00130FF4u) [[unlikely]] return; }
L_00130FF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131008:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131018u);  if (depth < kMaxDepth) unit_009D(c, 257u, depth + 1u); else { c.pc = 0x00377A18u; return; } if (c.pc != 0x00131018u) [[unlikely]] return; }
L_00131018:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 60u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131040u);  if (depth < kMaxDepth) unit_009D(c, 260u, depth + 1u); else { c.pc = 0x00377A78u; return; } if (c.pc != 0x00131040u) [[unlikely]] return; }
    goto L_00131040;
L_0013103C:
    c.budget -= 1;
L_00131040:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131064u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x00131064u) [[unlikely]] return; }
L_00131064:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[16], c.r[16].w[0] - 14864u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    c.budget -= 7;
L_00131080:
    set32(c.r[5], ld32((c.r[3].w[0] + 84u)));
    st32((c.r[2].w[0] + 204u), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131090u);  if (depth < kMaxDepth) unit_0019(c, 203u, depth + 1u); else { c.pc = 0x001663E0u; return; } if (c.pc != 0x00131090u) [[unlikely]] return; }
L_00131090:
    set32(c.r[4], 0u + 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st32((c.r[2].w[0] + 12228u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 10160u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001310ACu);  if (depth < kMaxDepth) unit_002E(c, 506u, depth + 1u); else { c.pc = 0x001BB8A8u; return; } if (c.pc != 0x001310ACu) [[unlikely]] return; }
L_001310AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] - 29688u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001310C0u);  if (depth < kMaxDepth) unit_003B(c, 173u, depth + 1u); else { c.pc = 0x001EE858u; return; } if (c.pc != 0x001310C0u) [[unlikely]] return; }
L_001310C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001310CCu); c.r[4].d[0] = 0ull | 0ull;  if (depth < kMaxDepth) unit_0071(c, 259u, depth + 1u); else { c.pc = 0x002C6D70u; return; } if (c.pc != 0x001310CCu) [[unlikely]] return; }
L_001310CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001310D4u); c.r[4].d[0] = 0ull | 0ull;  if (depth < kMaxDepth) unit_0071(c, 260u, depth + 1u); else { c.pc = 0x002C6D90u; return; } if (c.pc != 0x001310D4u) [[unlikely]] return; }
L_001310D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[11].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001310E4u);  if (depth < kMaxDepth) unit_000E(c, 425u, depth + 1u); else { c.pc = 0x0013B730u; return; } if (c.pc != 0x001310E4u) [[unlikely]] return; }
L_001310E4:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001310F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
L_00131100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131108u);  if (depth < kMaxDepth) unit_009D(c, 253u, depth + 1u); else { c.pc = 0x00377988u; return; } if (c.pc != 0x00131108u) [[unlikely]] return; }
L_00131108:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 13432u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0013115C; } }
    goto L_00131144;
L_00131140:
    c.budget -= 1;
L_00131144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], ld32((c.r[2].w[0] - 5180u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013115Cu);  if (depth < kMaxDepth) unit_009D(c, 264u, depth + 1u); else { c.pc = 0x00377AE8u; return; } if (c.pc != 0x0013115Cu) [[unlikely]] return; }
L_0013115C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131170:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_00131180:
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131198u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x00131198u) [[unlikely]] return; }
L_00131198:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], 0u + 320u);
    set32(c.r[3], 0u + 205u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 10;
L_001311C0:
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 26u);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5024u);
    set32(c.r[7], 0u + 9220u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001311E8u);  if (depth < kMaxDepth) unit_009D(c, 190u, depth + 1u); else { c.pc = 0x00376EE0u; return; } if (c.pc != 0x001311E8u) [[unlikely]] return; }
L_001311E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1438u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 35u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131224u);  if (depth < kMaxDepth) unit_009D(c, 177u, depth + 1u); else { c.pc = 0x00376C68u; return; } if (c.pc != 0x00131224u) [[unlikely]] return; }
L_00131224:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131240:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131268u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x00131268u) [[unlikely]] return; }
L_00131268:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], 0u + 320u);
    set32(c.r[3], 0u + 205u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 26u);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5072u);
    set32(c.r[7], 0u + 9220u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001312B8u);  if (depth < kMaxDepth) unit_009D(c, 190u, depth + 1u); else { c.pc = 0x00376EE0u; return; } if (c.pc != 0x001312B8u) [[unlikely]] return; }
L_001312B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1447u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 35u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001312F4u);  if (depth < kMaxDepth) unit_009D(c, 177u, depth + 1u); else { c.pc = 0x00376C68u; return; } if (c.pc != 0x001312F4u) [[unlikely]] return; }
L_001312F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131310:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[17], 0u + 2u);
    st32((c.r[16].w[0] + 60u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131340u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x00131340u) [[unlikely]] return; }
L_00131340:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[2], 0u + 320u);
    set32(c.r[3], 0u + 205u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[9], 0u + 26u);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5024u);
    set32(c.r[7], 0u + 9220u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013138Cu);  if (depth < kMaxDepth) unit_009D(c, 190u, depth + 1u); else { c.pc = 0x00376EE0u; return; } if (c.pc != 0x0013138Cu) [[unlikely]] return; }
L_0013138C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1449u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 35u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001313C8u);  if (depth < kMaxDepth) unit_009D(c, 177u, depth + 1u); else { c.pc = 0x00376C68u; return; } if (c.pc != 0x001313C8u) [[unlikely]] return; }
L_001313C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001313E8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_00131400:
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131414u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x00131414u) [[unlikely]] return; }
L_00131414:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], 0u + 320u);
    set32(c.r[3], 0u + 205u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 26u);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5024u);
    set32(c.r[7], 0u + 9220u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131464u);  if (depth < kMaxDepth) unit_009D(c, 190u, depth + 1u); else { c.pc = 0x00376EE0u; return; } if (c.pc != 0x00131464u) [[unlikely]] return; }
L_00131464:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1517u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 35u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001314A0u);  if (depth < kMaxDepth) unit_009D(c, 177u, depth + 1u); else { c.pc = 0x00376C68u; return; } if (c.pc != 0x001314A0u) [[unlikely]] return; }
L_001314A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001314C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[17], 0u + 1u);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001314F0u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x001314F0u) [[unlikely]] return; }
L_001314F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[2], 0u + 320u);
    set32(c.r[3], 0u + 208u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), c.r[17].w[0]);
    set32(c.r[7], 0u + 9220u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 32u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[11], 0u + 1u);
    c.f[13] = c.f[12];
    set32(c.r[6], c.r[6].w[0] - 4992u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131540u);  if (depth < kMaxDepth) unit_009D(c, 190u, depth + 1u); else { c.pc = 0x00376EE0u; return; } if (c.pc != 0x00131540u) [[unlikely]] return; }
L_00131540:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013154Cu);  if (depth < kMaxDepth) unit_009D(c, 176u, depth + 1u); else { c.pc = 0x00376C50u; return; } if (c.pc != 0x0013154Cu) [[unlikely]] return; }
L_0013154C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131568:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 5u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131594u);  if (depth < kMaxDepth) unit_009D(c, 274u, depth + 1u); else { c.pc = 0x00377CA8u; return; } if (c.pc != 0x00131594u) [[unlikely]] return; }
L_00131594:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], 0u + 2u);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], 0u + 320u);
    set32(c.r[3], 0u + 223u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 20u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 26u);
    set32(c.r[10], 0u + 2u);
    c.r[11].d[0] = 0ull + 0ull;
    c.f[13] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 5024u);
    set32(c.r[7], 0u + 9220u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001315E4u);  if (depth < kMaxDepth) unit_009D(c, 190u, depth + 1u); else { c.pc = 0x00376EE0u; return; } if (c.pc != 0x001315E4u) [[unlikely]] return; }
L_001315E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 1472u);
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], 0u + 55u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 24u);
    st32((c.r[29].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 28u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131620u);  if (depth < kMaxDepth) unit_009D(c, 177u, depth + 1u); else { c.pc = 0x00376C68u; return; } if (c.pc != 0x00131620u) [[unlikely]] return; }
L_00131620:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[2].w[0] + 12u), 0u);
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001316BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[2].w[0] - 23892u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001316BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] - 14688u);
    set32(c.r[6], ld32((c.r[4].w[0] + 23004u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], 0u + 345u);
    c.r[6].d[0] = c.r[6].d[0] ^ 1ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[5], 0u + 367u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    if (c.r[6].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    set32(c.r[8], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], 0u + 320u);
    set32(c.r[6], 0u + 30u);
    set32(c.r[7], 0u + 2u);
    c.f[13] = c.f[12];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001316BCu);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x001316BCu) [[unlikely]] return; }
L_001316BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001316D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001316E8u);  if (depth < kMaxDepth) unit_000C(c, 122u, depth + 1u); else { c.pc = 0x00130F98u; return; } if (c.pc != 0x001316E8u) [[unlikely]] return; }
L_001316E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001316F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131710u);  if (depth < kMaxDepth) unit_000C(c, 122u, depth + 1u); else { c.pc = 0x00130F98u; return; } if (c.pc != 0x00131710u) [[unlikely]] return; }
L_00131710:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131720:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[5].d[0] & 4096ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131788; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00131B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131768; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131768u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131768u) [[unlikely]] return; }
L_00131768:
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00131778; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_00131778:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131B58; } }
L_00131788:
    c.r[2].d[0] = c.r[5].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001317F0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00131B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001317BC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001317BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001317BCu) [[unlikely]] return; }
L_001317BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_001317C0:
    set32(c.r[3], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001317E4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131B58; } }
L_001317E4:
    st32((c.r[16].w[0] + 100u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131B58; } }
L_001317F0:
    c.r[2].d[0] = c.r[5].d[0] & 32768ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131844; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00131B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131824; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131824u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131824u) [[unlikely]] return; }
L_00131824:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_00131834; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_00131834:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 2;
L_0013183C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131B58; } }
    goto L_00131844;
L_00131840:
    c.budget -= 1;
L_00131844:
    c.r[2].d[0] = c.r[5].d[0] & 8192ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001318D8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00131B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131878; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131878u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131878u) [[unlikely]] return; }
L_00131878:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 2;
L_00131880:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001318A0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001318A4; } }
L_001318A0:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_001318A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 96u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 7;
L_001318C0:
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131B58; } }
L_001318D8:
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131A14; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00131B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001318FCu);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x001318FCu) [[unlikely]] return; }
L_001318FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00131B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013191C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013191Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013191Cu) [[unlikely]] return; }
L_0013191C:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00131938; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131B50; } }
L_00131938:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 2;
L_00131940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001319F4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00131960; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131964; } }
L_00131960:
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_00131964:
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131974u);  if (depth < kMaxDepth) unit_000D(c, 26u, depth + 1u); else { c.pc = 0x00134538u; return; } if (c.pc != 0x00131974u) [[unlikely]] return; }
L_00131974:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001319C0; } }
    set32(c.r[8], 0u + 139u);
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 112u);
    st32((c.r[29].w[0] + 4u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 20712u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 115u);
    set32(c.r[9], 0u + 102u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001319B8u);  if (depth < kMaxDepth) unit_000D(c, 18u, depth + 1u); else { c.pc = 0x00134360u; return; } if (c.pc != 0x001319B8u) [[unlikely]] return; }
L_001319B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001319F4; } }
L_001319C0:
    set32(c.r[8], 0u + 151u);
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 112u);
    st32((c.r[29].w[0] + 4u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 20712u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 115u);
    set32(c.r[9], 0u + 109u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001319F4u);  if (depth < kMaxDepth) unit_000D(c, 18u, depth + 1u); else { c.pc = 0x00134360u; return; } if (c.pc != 0x001319F4u) [[unlikely]] return; }
L_001319F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[16].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131B50; } }
L_00131A14:
    c.r[2].d[0] = c.r[5].d[0] & 8ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131B58; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00131B58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131A38u);  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x003791C0u; return; } if (c.pc != 0x00131A38u) [[unlikely]] return; }
L_00131A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00131B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 21968u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131A58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131A58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131A58u) [[unlikely]] return; }
L_00131A58:
    set32(c.r[4], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 116u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00131A8C; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[16].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131B50; } }
L_00131A8C:
    set32(c.r[3], ld32((c.r[16].w[0] + 112u)));
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00131B4C; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131ABC; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st32((c.r[16].w[0] + 92u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131AC0; } }
L_00131ABC:
    st32((c.r[16].w[0] + 92u), 0u);
    c.budget -= 1;
L_00131AC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131ACCu);  if (depth < kMaxDepth) unit_000D(c, 26u, depth + 1u); else { c.pc = 0x00134538u; return; } if (c.pc != 0x00131ACCu) [[unlikely]] return; }
L_00131ACC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00131B18; } }
    set32(c.r[8], 0u + 139u);
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 112u);
    st32((c.r[29].w[0] + 4u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 20712u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 115u);
    set32(c.r[9], 0u + 102u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B10u);  if (depth < kMaxDepth) unit_000D(c, 18u, depth + 1u); else { c.pc = 0x00134360u; return; } if (c.pc != 0x00131B10u) [[unlikely]] return; }
L_00131B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131B4C; } }
L_00131B18:
    set32(c.r[8], 0u + 151u);
    set32(c.r[5], ld32((c.r[16].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], 0u + 112u);
    st32((c.r[29].w[0] + 4u), c.r[8].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 20712u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[8], 0u + 115u);
    set32(c.r[9], 0u + 109u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B4Cu);  if (depth < kMaxDepth) unit_000D(c, 18u, depth + 1u); else { c.pc = 0x00134360u; return; } if (c.pc != 0x00131B4Cu) [[unlikely]] return; }
L_00131B4C:
    st32((c.r[16].w[0] + 96u), 0u);
    c.budget -= 1;
L_00131B50:
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_00131B58:
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 96u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[16].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B90u);  if (depth < kMaxDepth) unit_000D(c, 7u, depth + 1u); else { c.pc = 0x001340E8u; return; } if (c.pc != 0x00131B90u) [[unlikely]] return; }
L_00131B90:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131BB0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131E74; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[21], c.r[17].w[0] + 168u);
    set32(c.r[5], ld32((c.r[17].w[0] + 96u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[17].w[0] + 92u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00131C30; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 2;
L_00131C18:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 12u);
    set32(c.r[22], c.r[22].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131C18u | kUnwind; return; } goto L_00131C18; } }
L_00131C30:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_00131C6C; } }
    c.budget -= 1;
L_00131C40:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131C60u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00131C60u) [[unlikely]] return; }
L_00131C60:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131C40u | kUnwind; return; } goto L_00131C40; } }
L_00131C6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131E0C; } }
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00131E0C; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_00131CB8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[20].d[0];  if (t) { goto L_00131D24; } }
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131CDC; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00131CFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131DC8; } }
L_00131CDC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00131D4C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_00131D74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131DC8; } }
L_00131CFC:
    set32(c.r[4], c.r[16].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131D08u);  if (depth < kMaxDepth) unit_0030(c, 157u, depth + 1u); else { c.pc = 0x001C1DE8u; return; } if (c.pc != 0x00131D08u) [[unlikely]] return; }
L_00131D08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00131D88; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131D94; } }
L_00131D24:
    set32(c.r[4], c.r[16].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131D30u);  if (depth < kMaxDepth) unit_0030(c, 158u, depth + 1u); else { c.pc = 0x001C1E40u; return; } if (c.pc != 0x00131D30u) [[unlikely]] return; }
L_00131D30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00131D88; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131D94; } }
L_00131D4C:
    set32(c.r[4], c.r[16].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131D58u);  if (depth < kMaxDepth) unit_0030(c, 156u, depth + 1u); else { c.pc = 0x001C1D90u; return; } if (c.pc != 0x00131D58u) [[unlikely]] return; }
L_00131D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_00131D88; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131D94; } }
L_00131D74:
    set32(c.r[4], c.r[16].w[0] + c.r[22].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131D80u);  if (depth < kMaxDepth) unit_0030(c, 159u, depth + 1u); else { c.pc = 0x001C1E98u; return; } if (c.pc != 0x00131D80u) [[unlikely]] return; }
L_00131D80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_00131DAC; } }
L_00131D88:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00131D94:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131DA4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00131DA4u) [[unlikely]] return; }
L_00131DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00131DC8; } }
L_00131DAC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131DC8u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00131DC8u) [[unlikely]] return; }
L_00131DC8:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 92u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[19].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131E0C; } }
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131CB8u | kUnwind; return; } goto L_00131CB8; } }
L_00131E0C:
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 12u);
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00131E74; } }
    set32(c.r[18], 0u + 12u);
    c.budget -= 2;
L_00131E38:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131E58u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00131E58u) [[unlikely]] return; }
L_00131E58:
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131E38u | kUnwind; return; } goto L_00131E38; } }
L_00131E74:
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
L_00131EA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[30].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[16], ld32((c.r[2].w[0] + 18708u)));
    set32(c.r[20], ld32((c.r[21].w[0] + 28u)));
    st32((c.r[29].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    st32((c.r[19].w[0] - 3028u), c.r[16].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F04u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00131F04u) [[unlikely]] return; }
L_00131F04:
    set32(c.r[5], ld32((c.r[20].w[0] + 92u)));
    set32(c.r[3], 0u + 12u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[7], c.r[18].w[0] + 13536u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[9], 0u + 404u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[8], c.r[8].w[0] + 13592u);
    st32((c.r[17].w[0] - 24312u), c.r[2].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[22], ld32((c.r[5].w[0] + 168u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[22].w[0] << 2);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F48u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x00131F48u) [[unlikely]] return; }
L_00131F48:
    set32(c.r[4], ld32((c.r[19].w[0] - 3028u)));
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F58u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00131F58u) [[unlikely]] return; }
L_00131F58:
    set32(c.r[3], ld32((c.r[17].w[0] - 24312u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] - 24312u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F70u);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x00131F70u) [[unlikely]] return; }
L_00131F70:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F7Cu);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00131F7Cu) [[unlikely]] return; }
L_00131F7C:
    st32((c.r[20].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[22].sd[0] <= 0;  if (t) { goto L_0013202C; } }
L_00131F88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[5], c.r[20].w[0] + 8u);
    c.r[4].d[0] = c.r[4].d[0] | 183ull;
    set32(c.r[16], c.r[18].w[0] << 2);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131FA0u);  if (depth < kMaxDepth) unit_000C(c, 242u, depth + 1u); else { c.pc = 0x00132230u; return; } if (c.pc != 0x00131FA0u) [[unlikely]] return; }
L_00131FA0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 4u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131FC8u);  if (depth < kMaxDepth) unit_0044(c, 122u, depth + 1u); else { c.pc = 0x002124C0u; return; } if (c.pc != 0x00131FC8u) [[unlikely]] return; }
L_00131FC8:
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131FE0u);  if (depth < kMaxDepth) unit_0057(c, 196u, depth + 1u); else { c.pc = 0x0025ECA0u; return; } if (c.pc != 0x00131FE0u) [[unlikely]] return; }
L_00131FE0:
    set32(c.r[3], ld32((c.r[20].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 480u)));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132020u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00132020u) [[unlikely]] return; }
L_00132020:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131F88u | kUnwind; return; } goto L_00131F88; } }
L_0013202C:
    set32(c.r[4], ld32((c.r[20].w[0] + 64u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132038u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00132038u) [[unlikely]] return; }
L_00132038:
    set32(c.r[3], ld32((c.r[20].w[0] + 72u)));
    c.budget -= 1;
L_0013203C:
    set32(c.r[6], c.r[30].w[0] + 13536u);
    c.budget -= 1;
L_00132040:
    set32(c.r[7], c.r[23].w[0] + 13592u);
    set32(c.r[8], 0u + 430u);
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[20].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[21].w[0] + 16u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132060u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00132060u) [[unlikely]] return; }
L_00132060:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.budget -= 8;
L_00132080:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132098:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 18708u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 108u)));
    st32((c.r[5].w[0] - 3028u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 29316u), 0u);
    c.budget -= 15;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_001320F4; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001320ECu);  if (depth < kMaxDepth) unit_0044(c, 122u, depth + 1u); else { c.pc = 0x002124C0u; return; } if (c.pc != 0x001320ECu) [[unlikely]] return; }
L_001320EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00132108; } }
L_001320F4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00132108; } }
L_00132100:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00132108:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132114u);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x00132114u) [[unlikely]] return; }
L_00132114:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.r[4].d[0] = c.r[4].d[0] | 184ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132128u);  if (depth < kMaxDepth) unit_000C(c, 242u, depth + 1u); else { c.pc = 0x00132230u; return; } if (c.pc != 0x00132128u) [[unlikely]] return; }
L_00132128:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132138u);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x00132138u) [[unlikely]] return; }
L_00132138:
    st32((c.r[16].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[6], 0u + 3u);
    c.budget -= 2;
L_00132140:
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132158u);  if (depth < kMaxDepth) unit_0057(c, 190u, depth + 1u); else { c.pc = 0x0025EB58u; return; } if (c.pc != 0x00132158u) [[unlikely]] return; }
L_00132158:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[3].w[0] + 296u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 480u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013217Cu);  if (depth < kMaxDepth) unit_0044(c, 29u, depth + 1u); else { c.pc = 0x00210DA8u; return; } if (c.pc != 0x0013217Cu) [[unlikely]] return; }
L_0013217C:
    set32(c.r[3], ld32((c.r[16].w[0] + 76u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 76u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132198u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00132198u) [[unlikely]] return; }
L_00132198:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[6].w[0] - 2316u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001321EC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.f[0] = ld32((c.r[3].w[0] - 2312u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[2].w[0] - 2308u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[4].w[0] + 192u), c.f[0]);
    c.r[5].d[0] = ld16((c.r[3].w[0] - 2304u));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[2].w[0] + 196u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 296u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 480u)));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st16((c.r[3].w[0] + 312u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[6].w[0] - 2316u), 0u);
    c.budget -= 17;
L_001321EC:
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], c.r[6].w[0] + 13536u);
    set32(c.r[7], c.r[7].w[0] + 13632u);
    set32(c.r[8], 0u + 567u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132210u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x00132210u) [[unlikely]] return; }
L_00132210:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132230:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132254u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x00132254u) [[unlikely]] return; }
L_00132254:
    c.r[5].d[0] = c.r[17].d[0] << 32;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] >> 32;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132270u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00132270u) [[unlikely]] return; }
L_00132270:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132288u);  if (depth < kMaxDepth) unit_0056(c, 285u, depth + 1u); else { c.pc = 0x0025B038u; return; } if (c.pc != 0x00132288u) [[unlikely]] return; }
L_00132288:
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013229Cu);  if (depth < kMaxDepth) unit_0056(c, 332u, depth + 1u); else { c.pc = 0x0025B7F0u; return; } if (c.pc != 0x0013229Cu) [[unlikely]] return; }
L_0013229C:
    set32(c.r[2], ld32((c.r[18].w[0] + 120u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st16((c.r[18].w[0] + 312u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 2048ull;
    st32((c.r[18].w[0] + 120u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001322BCu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x001322BCu) [[unlikely]] return; }
L_001322BC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001322CCu);  if (depth < kMaxDepth) unit_0058(c, 71u, depth + 1u); else { c.pc = 0x00260B40u; return; } if (c.pc != 0x001322CCu) [[unlikely]] return; }
L_001322CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 184ull;
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld16((c.r[16].w[0]));
    st16((c.r[4].w[0] + 4u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 4u));
    st16((c.r[4].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 20u));
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[4] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    st16((c.r[18].w[0] + 308u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[4].w[0] + 6u));
    st16((c.r[18].w[0] + 310u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 18;
    { const bool t = c.r[17].d[0] != c.r[3].d[0];  if (t) { goto L_00132344; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 44u), 0u);
    st32((c.r[4].w[0] + 72u), c.f[0]);
    st32((c.r[4].w[0] + 48u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    st32((c.r[4].w[0] + 64u), 0u);
    st32((c.r[4].w[0] + 68u), c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00132428; } }
L_00132344:
    c.f[2] = fp::add(c.f[4], c.f[1]);
    set32(c.r[2], c.r[5].w[0] << 16);
    c.f[1] = fp::add(c.f[3], c.f[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 80u);
    fpu_div(c, 0u, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 310u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[4], c.f[0]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 308u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[3], c.f[0]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 310u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 56u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 308u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 60u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 310u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[4], c.f[0]);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 308u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 68u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 310u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    st32((c.r[4].w[0] + 72u), c.f[2]);
    st16((c.r[18].w[0] + 318u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 316u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 320u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 57;
L_00132428:
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[4].w[0] + 26u);
    c.budget -= 2;
L_00132430:
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132430u | kUnwind; return; } goto L_00132430; } }
    st32((c.r[18].w[0] + 480u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132470:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], 0u + 453u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00132A48; } }
    c.r[2].d[0] = c.r[3].sd[0] < 454ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00132524; } }
    set32(c.r[2], 0u + 379u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00133C48; } }
    c.r[2].d[0] = c.r[3].sd[0] < 380ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001324E4; } }
    set32(c.r[2], 0u + 345u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00132D48; } }
    c.r[2].d[0] = c.r[3].sd[0] < 346ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001324D0; } }
    set32(c.r[2], 0u + 328u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00132BC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00133DC8; } }
L_001324D0:
    set32(c.r[2], 0u + 362u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00132EC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00133DC8; } }
L_001324E4:
    set32(c.r[2], 0u + 419u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00132748; } }
    c.r[2].d[0] = c.r[3].sd[0] < 420ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00132510; } }
    set32(c.r[2], 0u + 402u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001325C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00133DC8; } }
L_00132510:
    set32(c.r[2], 0u + 436u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001328C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00133DC8; } }
L_00132524:
    set32(c.r[2], 0u + 525u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001331C8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 526ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0013257C; } }
    set32(c.r[2], 0u + 491u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001337C8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 492ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00132568; } }
    set32(c.r[2], 0u + 474u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00133648; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00133DC8; } }
L_00132568:
    set32(c.r[2], 0u + 508u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00133048; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00133DC8; } }
L_0013257C:
    set32(c.r[2], 0u + 559u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001334C8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 560ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001325A8; } }
    set32(c.r[2], 0u + 542u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00133348; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00133DC8; } }
L_001325A8:
    set32(c.r[2], 0u + 615u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00133948; } }
    set32(c.r[2], 0u + 632u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00133AC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00133DC8; } }
L_001325C8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001325E0; } }
    set32(c.r[2], 0u + 402u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001325E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001325F8; } }
    set32(c.r[2], 0u + 403u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001325F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132610; } }
    set32(c.r[2], 0u + 404u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132610:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132628; } }
    set32(c.r[2], 0u + 405u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132628:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132640; } }
    set32(c.r[2], 0u + 406u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132640:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132658; } }
    set32(c.r[2], 0u + 407u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132658:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132670; } }
    set32(c.r[2], 0u + 408u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132670:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132688; } }
    set32(c.r[2], 0u + 409u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132688:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001326A0; } }
    set32(c.r[2], 0u + 410u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001326A0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001326B8; } }
    set32(c.r[2], 0u + 411u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001326B8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001326D0; } }
    set32(c.r[2], 0u + 412u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001326D0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001326E8; } }
    set32(c.r[2], 0u + 413u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001326E8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132700; } }
    set32(c.r[2], 0u + 414u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132700:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132718; } }
    set32(c.r[2], 0u + 415u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132718:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132730; } }
    set32(c.r[2], 0u + 416u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132730:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132748; } }
    set32(c.r[2], 0u + 417u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132748:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00132760; } }
    set32(c.r[2], 0u + 419u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132760:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132778; } }
    set32(c.r[2], 0u + 420u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132778:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132790; } }
    set32(c.r[2], 0u + 421u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132790:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001327A8; } }
    set32(c.r[2], 0u + 422u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001327A8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001327C0; } }
    set32(c.r[2], 0u + 423u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001327C0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001327D8; } }
    set32(c.r[2], 0u + 424u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001327D8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001327F0; } }
    set32(c.r[2], 0u + 425u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001327F0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132808; } }
    set32(c.r[2], 0u + 426u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132808:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132820; } }
    set32(c.r[2], 0u + 427u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132820:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132838; } }
    set32(c.r[2], 0u + 428u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132838:
    set32(c.r[2], 0u + 10u);
    c.budget -= 1;
L_0013283C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132850; } }
    goto L_00132844;
L_00132840:
    c.budget -= 1;
L_00132844:
    set32(c.r[2], 0u + 429u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132850:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132868; } }
    set32(c.r[2], 0u + 430u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132868:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132880; } }
    set32(c.r[2], 0u + 431u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132880:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132898; } }
    set32(c.r[2], 0u + 432u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132898:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001328B0; } }
    set32(c.r[2], 0u + 433u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001328B0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001328C8; } }
    set32(c.r[2], 0u + 434u);
    c.budget -= 1;
L_001328C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001328C8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001328E0; } }
    set32(c.r[2], 0u + 436u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001328E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001328F8; } }
    set32(c.r[2], 0u + 437u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001328F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132910; } }
    set32(c.r[2], 0u + 438u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132910:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132928; } }
    set32(c.r[2], 0u + 439u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132928:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132940; } }
    set32(c.r[2], 0u + 440u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132940:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132958; } }
    set32(c.r[2], 0u + 441u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132958:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132970; } }
    set32(c.r[2], 0u + 442u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132970:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132988; } }
    set32(c.r[2], 0u + 443u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132988:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001329A0; } }
    set32(c.r[2], 0u + 444u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001329A0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001329B8; } }
    set32(c.r[2], 0u + 445u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001329B8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001329D0; } }
    set32(c.r[2], 0u + 446u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001329D0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001329E8; } }
    set32(c.r[2], 0u + 447u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001329E8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132A00; } }
    set32(c.r[2], 0u + 448u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132A00:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132A18; } }
    set32(c.r[2], 0u + 449u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132A18:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132A30; } }
    set32(c.r[2], 0u + 450u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132A30:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132A48; } }
    set32(c.r[2], 0u + 451u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132A48:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00132A60; } }
    set32(c.r[2], 0u + 453u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132A60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132A78; } }
    set32(c.r[2], 0u + 454u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132A78:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132A90; } }
    set32(c.r[2], 0u + 455u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132A90:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132AA8; } }
    set32(c.r[2], 0u + 456u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132AA8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132AC0; } }
    set32(c.r[2], 0u + 457u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132AC0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132AD8; } }
    set32(c.r[2], 0u + 458u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132AD8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132AF0; } }
    set32(c.r[2], 0u + 459u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132AF0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132B08; } }
    set32(c.r[2], 0u + 460u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132B08:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132B20; } }
    set32(c.r[2], 0u + 461u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132B20:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132B38; } }
    set32(c.r[2], 0u + 462u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132B38:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132B50; } }
    set32(c.r[2], 0u + 463u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132B50:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132B68; } }
    set32(c.r[2], 0u + 464u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132B68:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132B80; } }
    set32(c.r[2], 0u + 465u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132B80:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132B98; } }
    set32(c.r[2], 0u + 466u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132B98:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132BB0; } }
    set32(c.r[2], 0u + 467u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132BB0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132BC8; } }
    set32(c.r[2], 0u + 468u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132BC8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00132BE0; } }
    set32(c.r[2], 0u + 328u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132BE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132BF8; } }
    set32(c.r[2], 0u + 329u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132BF8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132C10; } }
    goto L_00132C04;
L_00132C00:
    c.budget -= 1;
L_00132C04:
    set32(c.r[2], 0u + 330u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132C10:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132C28; } }
    set32(c.r[2], 0u + 331u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132C28:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132C40; } }
    set32(c.r[2], 0u + 332u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132C40:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132C58; } }
    set32(c.r[2], 0u + 333u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132C58:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132C70; } }
    set32(c.r[2], 0u + 334u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132C70:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132C88; } }
    set32(c.r[2], 0u + 335u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132C88:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132CA0; } }
    set32(c.r[2], 0u + 336u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132CA0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132CB8; } }
    set32(c.r[2], 0u + 337u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132CB8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132CD0; } }
    set32(c.r[2], 0u + 338u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132CD0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132CE8; } }
    set32(c.r[2], 0u + 339u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132CE8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132D00; } }
    set32(c.r[2], 0u + 340u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132D00:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132D18; } }
    set32(c.r[2], 0u + 341u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132D18:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132D30; } }
    set32(c.r[2], 0u + 342u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132D30:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132D48; } }
    set32(c.r[2], 0u + 343u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132D48:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00132D60; } }
    set32(c.r[2], 0u + 345u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132D60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132D78; } }
    set32(c.r[2], 0u + 346u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132D78:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132D90; } }
    set32(c.r[2], 0u + 347u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132D90:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132DA8; } }
    set32(c.r[2], 0u + 348u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132DA8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132DC0; } }
    set32(c.r[2], 0u + 349u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132DC0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132DD8; } }
    set32(c.r[2], 0u + 350u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132DD8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132DF0; } }
    set32(c.r[2], 0u + 351u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132DF0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132E08; } }
    set32(c.r[2], 0u + 352u);
    c.budget -= 1;
L_00132E00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132E08:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132E20; } }
    set32(c.r[2], 0u + 353u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132E20:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132E38; } }
    set32(c.r[2], 0u + 354u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132E38:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132E50; } }
    set32(c.r[2], 0u + 355u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132E50:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132E68; } }
    set32(c.r[2], 0u + 356u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132E68:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132E80; } }
    set32(c.r[2], 0u + 357u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132E80:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132E98; } }
    set32(c.r[2], 0u + 358u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132E98:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132EB0; } }
    set32(c.r[2], 0u + 359u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132EB0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132EC8; } }
    set32(c.r[2], 0u + 360u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132EC8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00132EE0; } }
    set32(c.r[2], 0u + 362u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132EE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132EF8; } }
    set32(c.r[2], 0u + 363u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132EF8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132F10; } }
    set32(c.r[2], 0u + 364u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132F10:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132F28; } }
    set32(c.r[2], 0u + 365u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132F28:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132F40; } }
    set32(c.r[2], 0u + 366u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132F40:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132F58; } }
    set32(c.r[2], 0u + 367u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132F58:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132F70; } }
    set32(c.r[2], 0u + 368u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132F70:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132F88; } }
    set32(c.r[2], 0u + 369u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132F88:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132FA0; } }
    set32(c.r[2], 0u + 370u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132FA0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132FB8; } }
    set32(c.r[2], 0u + 371u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132FB8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132FD0; } }
    set32(c.r[2], 0u + 372u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132FD0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00132FE8; } }
    set32(c.r[2], 0u + 373u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132FE8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133000; } }
    set32(c.r[2], 0u + 374u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133000:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133018; } }
    set32(c.r[2], 0u + 375u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133018:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133030; } }
    set32(c.r[2], 0u + 376u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133030:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133048; } }
L_0013303C:
    set32(c.r[2], 0u + 377u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133048:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00133060; } }
    set32(c.r[2], 0u + 508u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133060:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133078; } }
    set32(c.r[2], 0u + 509u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133078:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133090; } }
    goto L_00133084;
L_00133080:
    c.budget -= 1;
L_00133084:
    set32(c.r[2], 0u + 510u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133090:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001330A8; } }
    set32(c.r[2], 0u + 511u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001330A8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001330C0; } }
    set32(c.r[2], 0u + 512u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001330C0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001330D8; } }
    set32(c.r[2], 0u + 513u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001330D8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001330F0; } }
    set32(c.r[2], 0u + 514u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001330F0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133108; } }
    set32(c.r[2], 0u + 515u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133108:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133120; } }
    set32(c.r[2], 0u + 516u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133120:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133138; } }
    set32(c.r[2], 0u + 517u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133138:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133150; } }
    set32(c.r[2], 0u + 518u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133150:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133168; } }
    set32(c.r[2], 0u + 519u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133168:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133180; } }
    set32(c.r[2], 0u + 520u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133180:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133198; } }
    set32(c.r[2], 0u + 521u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133198:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001331B0; } }
    set32(c.r[2], 0u + 522u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001331B0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001331C8; } }
    set32(c.r[2], 0u + 523u);
    c.budget -= 1;
L_001331C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001331C8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001331E0; } }
    set32(c.r[2], 0u + 525u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001331E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001331F8; } }
    set32(c.r[2], 0u + 526u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001331F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133210; } }
    set32(c.r[2], 0u + 527u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133210:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133228; } }
    set32(c.r[2], 0u + 528u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133228:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133240; } }
    set32(c.r[2], 0u + 529u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133240:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133258; } }
    set32(c.r[2], 0u + 530u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133258:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133270; } }
    set32(c.r[2], 0u + 531u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133270:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133288; } }
    set32(c.r[2], 0u + 532u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133288:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001332A0; } }
    set32(c.r[2], 0u + 533u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001332A0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001332B8; } }
    set32(c.r[2], 0u + 534u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001332B8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001332D0; } }
    set32(c.r[2], 0u + 535u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001332D0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001332E8; } }
    set32(c.r[2], 0u + 536u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001332E8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133300; } }
    set32(c.r[2], 0u + 537u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133300:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133318; } }
    set32(c.r[2], 0u + 538u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133318:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133330; } }
    set32(c.r[2], 0u + 539u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133330:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133348; } }
    set32(c.r[2], 0u + 540u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133348:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00133360; } }
    set32(c.r[2], 0u + 542u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133360:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133378; } }
    set32(c.r[2], 0u + 543u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133378:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133390; } }
    set32(c.r[2], 0u + 544u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133390:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001333A8; } }
    set32(c.r[2], 0u + 545u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001333A8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001333C0; } }
    set32(c.r[2], 0u + 546u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001333C0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001333D8; } }
    set32(c.r[2], 0u + 547u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001333D8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001333F0; } }
    set32(c.r[2], 0u + 548u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001333F0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133408; } }
    set32(c.r[2], 0u + 549u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133408:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133420; } }
    set32(c.r[2], 0u + 550u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133420:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133438; } }
    set32(c.r[2], 0u + 551u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133438:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133450; } }
    set32(c.r[2], 0u + 552u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133450:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133468; } }
    set32(c.r[2], 0u + 553u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133468:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133480; } }
    set32(c.r[2], 0u + 554u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133480:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133498; } }
    set32(c.r[2], 0u + 555u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133498:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001334B0; } }
    set32(c.r[2], 0u + 556u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001334B0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001334C8; } }
    set32(c.r[2], 0u + 557u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001334C8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001334E0; } }
    set32(c.r[2], 0u + 559u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001334E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001334F8; } }
    set32(c.r[2], 0u + 560u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001334F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133510; } }
    set32(c.r[2], 0u + 561u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133510:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133528; } }
    set32(c.r[2], 0u + 562u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133528:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133540; } }
    set32(c.r[2], 0u + 563u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133540:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133558; } }
    set32(c.r[2], 0u + 564u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133558:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133570; } }
    set32(c.r[2], 0u + 565u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133570:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133588; } }
    set32(c.r[2], 0u + 566u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133588:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001335A0; } }
    set32(c.r[2], 0u + 567u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001335A0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001335B8; } }
    set32(c.r[2], 0u + 568u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001335B8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001335D0; } }
    set32(c.r[2], 0u + 569u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001335D0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001335E8; } }
    set32(c.r[2], 0u + 570u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001335E8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133600; } }
    set32(c.r[2], 0u + 571u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133600:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133618; } }
    set32(c.r[2], 0u + 572u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133618:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133630; } }
    set32(c.r[2], 0u + 573u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133630:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133648; } }
    set32(c.r[2], 0u + 574u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133648:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00133660; } }
    set32(c.r[2], 0u + 474u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133660:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133678; } }
    set32(c.r[2], 0u + 475u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133678:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133690; } }
    set32(c.r[2], 0u + 476u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133690:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001336A8; } }
    set32(c.r[2], 0u + 477u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001336A8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001336C0; } }
    set32(c.r[2], 0u + 478u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001336C0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001336D8; } }
    set32(c.r[2], 0u + 479u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001336D8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001336F0; } }
    set32(c.r[2], 0u + 480u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001336F0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133708; } }
    set32(c.r[2], 0u + 481u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133708:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133720; } }
    set32(c.r[2], 0u + 482u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133720:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133738; } }
    set32(c.r[2], 0u + 483u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133738:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133750; } }
    set32(c.r[2], 0u + 484u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133750:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133768; } }
    set32(c.r[2], 0u + 485u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133768:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133780; } }
    set32(c.r[2], 0u + 486u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133780:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133798; } }
    set32(c.r[2], 0u + 487u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133798:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001337B0; } }
    set32(c.r[2], 0u + 488u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001337B0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001337C8; } }
    set32(c.r[2], 0u + 489u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001337C8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001337E0; } }
    set32(c.r[2], 0u + 491u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001337E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001337F8; } }
    set32(c.r[2], 0u + 492u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001337F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133810; } }
    set32(c.r[2], 0u + 493u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133810:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133828; } }
    set32(c.r[2], 0u + 494u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133828:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133840; } }
    set32(c.r[2], 0u + 495u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0013383C:
    c.budget -= 1;
L_00133840:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133858; } }
    set32(c.r[2], 0u + 496u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133858:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133870; } }
    set32(c.r[2], 0u + 497u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133870:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133888; } }
    set32(c.r[2], 0u + 498u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133888:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001338A0; } }
    set32(c.r[2], 0u + 499u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001338A0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001338B8; } }
    set32(c.r[2], 0u + 500u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001338B8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001338D0; } }
    set32(c.r[2], 0u + 501u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001338D0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001338E8; } }
    set32(c.r[2], 0u + 502u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001338E8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133900; } }
    set32(c.r[2], 0u + 503u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133900:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133918; } }
    set32(c.r[2], 0u + 504u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133918:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133930; } }
    set32(c.r[2], 0u + 505u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133930:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133948; } }
    set32(c.r[2], 0u + 506u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133948:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00133960; } }
    set32(c.r[2], 0u + 615u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133960:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133978; } }
    set32(c.r[2], 0u + 616u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133978:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133990; } }
    set32(c.r[2], 0u + 617u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133990:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001339A8; } }
    set32(c.r[2], 0u + 618u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001339A8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001339C0; } }
    set32(c.r[2], 0u + 619u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001339C0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001339D8; } }
    set32(c.r[2], 0u + 620u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001339D8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001339F0; } }
    set32(c.r[2], 0u + 621u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001339F0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133A08; } }
    set32(c.r[2], 0u + 622u);
    c.budget -= 1;
L_00133A00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133A08:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133A20; } }
    set32(c.r[2], 0u + 623u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133A20:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133A38; } }
    set32(c.r[2], 0u + 624u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133A38:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133A50; } }
    set32(c.r[2], 0u + 625u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133A50:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133A68; } }
    set32(c.r[2], 0u + 626u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133A68:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133A80; } }
    set32(c.r[2], 0u + 627u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133A80:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133A98; } }
    set32(c.r[2], 0u + 628u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133A98:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133AB0; } }
    set32(c.r[2], 0u + 629u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133AB0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133AC8; } }
    set32(c.r[2], 0u + 630u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133AC8:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00133AE0; } }
    set32(c.r[2], 0u + 632u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133AE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133AF8; } }
    set32(c.r[2], 0u + 633u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133AF8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133B10; } }
    goto L_00133B04;
L_00133B00:
    c.budget -= 1;
L_00133B04:
    set32(c.r[2], 0u + 634u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133B10:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133B28; } }
    set32(c.r[2], 0u + 635u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133B28:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133B40; } }
    set32(c.r[2], 0u + 636u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133B40:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133B58; } }
    set32(c.r[2], 0u + 637u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133B58:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133B70; } }
    set32(c.r[2], 0u + 638u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133B70:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133B88; } }
    set32(c.r[2], 0u + 639u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133B88:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133BA0; } }
    set32(c.r[2], 0u + 640u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133BA0:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133BB8; } }
    set32(c.r[2], 0u + 641u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133BB8:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133BD0; } }
    set32(c.r[2], 0u + 642u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133BD0:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133BE8; } }
    set32(c.r[2], 0u + 643u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133BE8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133C00; } }
    set32(c.r[2], 0u + 644u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133C00:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133C18; } }
    set32(c.r[2], 0u + 645u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133C18:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133C30; } }
    set32(c.r[2], 0u + 646u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133C30:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133C48; } }
    goto L_00133C3C;
L_00133C38:
    c.budget -= 1;
L_00133C3C:
    set32(c.r[2], 0u + 647u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133C48:
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00133C60; } }
    set32(c.r[2], 0u + 379u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133C60:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133C78; } }
    set32(c.r[2], 0u + 380u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133C78:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133C90; } }
    set32(c.r[2], 0u + 381u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133C90:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133CA8; } }
    set32(c.r[2], 0u + 382u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133CA8:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133CC0; } }
    set32(c.r[2], 0u + 383u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133CC0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133CD8; } }
    set32(c.r[2], 0u + 384u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133CD8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133CF0; } }
    set32(c.r[2], 0u + 385u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133CF0:
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133D08; } }
    set32(c.r[2], 0u + 386u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133D08:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133D20; } }
    set32(c.r[2], 0u + 387u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133D20:
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133D38; } }
    set32(c.r[2], 0u + 388u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133D38:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133D50; } }
    set32(c.r[2], 0u + 389u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133D50:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133D68; } }
    set32(c.r[2], 0u + 390u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133D68:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133D80; } }
    set32(c.r[2], 0u + 391u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133D80:
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133D98; } }
    set32(c.r[2], 0u + 392u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133D98:
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133DB0; } }
    set32(c.r[2], 0u + 393u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133DB0:
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00133DC8; } }
    set32(c.r[2], 0u + 394u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133DC8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133DD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133DF0u);  if (depth < kMaxDepth) unit_000C(c, 524u, depth + 1u); else { c.pc = 0x00133E58u; return; } if (c.pc != 0x00133DF0u) [[unlikely]] return; }
L_00133DF0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133E08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E28u);  if (depth < kMaxDepth) unit_000C(c, 524u, depth + 1u); else { c.pc = 0x00133E58u; return; } if (c.pc != 0x00133E28u) [[unlikely]] return; }
L_00133E28:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00133E40; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E40u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x00133E40u) [[unlikely]] return; }
L_00133E40:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133E58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 132u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 160u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E7Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x00133E7Cu) [[unlikely]] return; }
L_00133E7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[6], c.r[16].w[0] + 168u);
    c.r[4].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00133ED8; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 2;
L_00133EA8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133EA8u | kUnwind; return; } goto L_00133EA8; } }
L_00133ED8:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 112u), 0u);
    st32((c.r[16].w[0] + 60u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 100u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 72u), 0u);
    st32((c.r[16].w[0] + 76u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133F30:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00133F48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133F48:
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133F60:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00133F80; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00133F80:
    c.f[0] = ld32((c.r[2].w[0] + 192u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133F98:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00133FB8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
L_00133FB8:
    c.f[0] = ld32((c.r[2].w[0] + 196u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[5].d[0] & 64ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_000D(c, 3u, depth); } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_000D(c, 2u, depth); } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
    [[clang::musttail]] return unit_000D(c, 1u, depth);
}

}
