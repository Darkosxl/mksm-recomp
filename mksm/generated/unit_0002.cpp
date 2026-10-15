#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0002[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11,
    12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45,
    46, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94,
    95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0,
    0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0,
    150, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372,
    0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0,
    0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 405,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0,
    0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0002(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00108000;
    case 2u: goto L_00108004;
    case 3u: goto L_0010803C;
    case 4u: goto L_00108040;
    case 5u: goto L_0010804C;
    case 6u: goto L_00108080;
    case 7u: goto L_00108090;
    case 8u: goto L_001080B0;
    case 9u: goto L_001080C0;
    case 10u: goto L_001080C8;
    case 11u: goto L_001080FC;
    case 12u: goto L_00108100;
    case 13u: goto L_00108118;
    case 14u: goto L_00108124;
    case 15u: goto L_00108140;
    case 16u: goto L_00108150;
    case 17u: goto L_0010815C;
    case 18u: goto L_0010816C;
    case 19u: goto L_00108180;
    case 20u: goto L_001081B4;
    case 21u: goto L_001081C0;
    case 22u: goto L_001081CC;
    case 23u: goto L_001081D4;
    case 24u: goto L_001081E0;
    case 25u: goto L_001081EC;
    case 26u: goto L_00108200;
    case 27u: goto L_00108210;
    case 28u: goto L_00108230;
    case 29u: goto L_00108238;
    case 30u: goto L_0010826C;
    case 31u: goto L_00108298;
    case 32u: goto L_001082A8;
    case 33u: goto L_001082C0;
    case 34u: goto L_001082D0;
    case 35u: goto L_001082F0;
    case 36u: goto L_00108364;
    case 37u: goto L_00108370;
    case 38u: goto L_00108388;
    case 39u: goto L_00108398;
    case 40u: goto L_001083AC;
    case 41u: goto L_001083B8;
    case 42u: goto L_001083BC;
    case 43u: goto L_001083D4;
    case 44u: goto L_001083EC;
    case 45u: goto L_001083FC;
    case 46u: goto L_00108400;
    case 47u: goto L_00108408;
    case 48u: goto L_0010841C;
    case 49u: goto L_0010842C;
    case 50u: goto L_00108438;
    case 51u: goto L_00108440;
    case 52u: goto L_00108474;
    case 53u: goto L_00108490;
    case 54u: goto L_001084A4;
    case 55u: goto L_001084B8;
    case 56u: goto L_001084D8;
    case 57u: goto L_001084FC;
    case 58u: goto L_00108514;
    case 59u: goto L_00108528;
    case 60u: goto L_00108530;
    case 61u: goto L_00108554;
    case 62u: goto L_0010855C;
    case 63u: goto L_00108580;
    case 64u: goto L_0010858C;
    case 65u: goto L_00108598;
    case 66u: goto L_001085A4;
    case 67u: goto L_001085B4;
    case 68u: goto L_001085D0;
    case 69u: goto L_00108600;
    case 70u: goto L_00108614;
    case 71u: goto L_00108630;
    case 72u: goto L_00108650;
    case 73u: goto L_00108660;
    case 74u: goto L_00108688;
    case 75u: goto L_00108698;
    case 76u: goto L_001086BC;
    case 77u: goto L_001086C4;
    case 78u: goto L_001086D0;
    case 79u: goto L_00108700;
    case 80u: goto L_00108710;
    case 81u: goto L_00108728;
    case 82u: goto L_00108780;
    case 83u: goto L_00108790;
    case 84u: goto L_001087A4;
    case 85u: goto L_001087B8;
    case 86u: goto L_001087C0;
    case 87u: goto L_001087E4;
    case 88u: goto L_001087EC;
    case 89u: goto L_00108810;
    case 90u: goto L_0010881C;
    case 91u: goto L_00108838;
    case 92u: goto L_00108840;
    case 93u: goto L_00108870;
    case 94u: goto L_0010887C;
    case 95u: goto L_00108880;
    case 96u: goto L_00108890;
    case 97u: goto L_001088A8;
    case 98u: goto L_001088C0;
    case 99u: goto L_001088DC;
    case 100u: goto L_001088FC;
    case 101u: goto L_00108920;
    case 102u: goto L_0010894C;
    case 103u: goto L_001089A0;
    case 104u: goto L_00108A00;
    case 105u: goto L_00108A10;
    case 106u: goto L_00108A2C;
    case 107u: goto L_00108A88;
    case 108u: goto L_00108AA4;
    case 109u: goto L_00108AB4;
    case 110u: goto L_00108AC8;
    case 111u: goto L_00108AE4;
    case 112u: goto L_00108AF8;
    case 113u: goto L_00108B08;
    case 114u: goto L_00108B2C;
    case 115u: goto L_00108B3C;
    case 116u: goto L_00108B50;
    case 117u: goto L_00108B78;
    case 118u: goto L_00108B8C;
    case 119u: goto L_00108BA8;
    case 120u: goto L_00108BB8;
    case 121u: goto L_00108C04;
    case 122u: goto L_00108C20;
    case 123u: goto L_00108C5C;
    case 124u: goto L_00108C6C;
    case 125u: goto L_00108C88;
    case 126u: goto L_00108C90;
    case 127u: goto L_00108C9C;
    case 128u: goto L_00108CD0;
    case 129u: goto L_00108CE8;
    case 130u: goto L_00108D08;
    case 131u: goto L_00108D18;
    case 132u: goto L_00108D48;
    case 133u: goto L_00108D60;
    case 134u: goto L_00108D90;
    case 135u: goto L_00108E10;
    case 136u: goto L_00108E20;
    case 137u: goto L_00108E40;
    case 138u: goto L_00108E64;
    case 139u: goto L_00108E80;
    case 140u: goto L_00108EA0;
    case 141u: goto L_00108EC0;
    case 142u: goto L_00108F34;
    case 143u: goto L_00108F8C;
    case 144u: goto L_00108FB8;
    case 145u: goto L_00108FD8;
    case 146u: goto L_0010901C;
    case 147u: goto L_00109038;
    case 148u: goto L_00109054;
    case 149u: goto L_00109064;
    case 150u: goto L_00109080;
    case 151u: goto L_00109088;
    case 152u: goto L_00109090;
    case 153u: goto L_0010909C;
    case 154u: goto L_001090C0;
    case 155u: goto L_001090C8;
    case 156u: goto L_001090E0;
    case 157u: goto L_0010911C;
    case 158u: goto L_0010912C;
    case 159u: goto L_0010913C;
    case 160u: goto L_00109148;
    case 161u: goto L_00109160;
    case 162u: goto L_0010917C;
    case 163u: goto L_00109188;
    case 164u: goto L_001091A0;
    case 165u: goto L_001091D0;
    case 166u: goto L_001091E4;
    case 167u: goto L_00109200;
    case 168u: goto L_00109210;
    case 169u: goto L_0010922C;
    case 170u: goto L_0010923C;
    case 171u: goto L_00109258;
    case 172u: goto L_0010927C;
    case 173u: goto L_001092A8;
    case 174u: goto L_001092FC;
    case 175u: goto L_00109308;
    case 176u: goto L_00109328;
    case 177u: goto L_00109338;
    case 178u: goto L_00109348;
    case 179u: goto L_00109360;
    case 180u: goto L_00109378;
    case 181u: goto L_001093BC;
    case 182u: goto L_001093D8;
    case 183u: goto L_00109400;
    case 184u: goto L_00109410;
    case 185u: goto L_00109420;
    case 186u: goto L_0010942C;
    case 187u: goto L_00109458;
    case 188u: goto L_00109460;
    case 189u: goto L_001094A4;
    case 190u: goto L_001094C0;
    case 191u: goto L_001094D8;
    case 192u: goto L_001094E8;
    case 193u: goto L_00109510;
    case 194u: goto L_00109518;
    case 195u: goto L_00109524;
    case 196u: goto L_00109550;
    case 197u: goto L_00109568;
    case 198u: goto L_00109588;
    case 199u: goto L_00109598;
    case 200u: goto L_001095C8;
    case 201u: goto L_001095F0;
    case 202u: goto L_00109634;
    case 203u: goto L_00109650;
    case 204u: goto L_00109668;
    case 205u: goto L_00109678;
    case 206u: goto L_0010969C;
    case 207u: goto L_001096A4;
    case 208u: goto L_001096B0;
    case 209u: goto L_001096E0;
    case 210u: goto L_001096F8;
    case 211u: goto L_00109700;
    case 212u: goto L_00109724;
    case 213u: goto L_00109734;
    case 214u: goto L_00109740;
    case 215u: goto L_00109758;
    case 216u: goto L_00109788;
    case 217u: goto L_001097B0;
    case 218u: goto L_00109808;
    case 219u: goto L_00109824;
    case 220u: goto L_0010983C;
    case 221u: goto L_00109868;
    case 222u: goto L_00109880;
    case 223u: goto L_001098B8;
    case 224u: goto L_00109938;
    case 225u: goto L_0010998C;
    case 226u: goto L_001099EC;
    case 227u: goto L_00109A0C;
    case 228u: goto L_00109A38;
    case 229u: goto L_00109A58;
    case 230u: goto L_00109AA0;
    case 231u: goto L_00109ABC;
    case 232u: goto L_00109AD8;
    case 233u: goto L_00109AE8;
    case 234u: goto L_00109B20;
    case 235u: goto L_00109B2C;
    case 236u: goto L_00109B38;
    case 237u: goto L_00109B58;
    case 238u: goto L_00109B68;
    case 239u: goto L_00109BA0;
    case 240u: goto L_00109BAC;
    case 241u: goto L_00109BD4;
    case 242u: goto L_00109C28;
    case 243u: goto L_00109C88;
    case 244u: goto L_00109D54;
    case 245u: goto L_00109D9C;
    case 246u: goto L_00109DE8;
    case 247u: goto L_00109E24;
    case 248u: goto L_00109E68;
    case 249u: goto L_00109EB4;
    case 250u: goto L_00109EDC;
    case 251u: goto L_00109F00;
    case 252u: goto L_00109F20;
    case 253u: goto L_00109F30;
    case 254u: goto L_00109F68;
    case 255u: goto L_00109F74;
    case 256u: goto L_00109FA0;
    case 257u: goto L_0010A03C;
    case 258u: goto L_0010A110;
    case 259u: goto L_0010A134;
    case 260u: goto L_0010A14C;
    case 261u: goto L_0010A174;
    case 262u: goto L_0010A184;
    case 263u: goto L_0010A1BC;
    case 264u: goto L_0010A1CC;
    case 265u: goto L_0010A204;
    case 266u: goto L_0010A210;
    case 267u: goto L_0010A238;
    case 268u: goto L_0010A240;
    case 269u: goto L_0010A250;
    case 270u: goto L_0010A288;
    case 271u: goto L_0010A294;
    case 272u: goto L_0010A2B4;
    case 273u: goto L_0010A2C4;
    case 274u: goto L_0010A310;
    case 275u: goto L_0010A350;
    case 276u: goto L_0010A378;
    case 277u: goto L_0010A39C;
    case 278u: goto L_0010A3BC;
    case 279u: goto L_0010A3CC;
    case 280u: goto L_0010A404;
    case 281u: goto L_0010A410;
    case 282u: goto L_0010A470;
    case 283u: goto L_0010A490;
    case 284u: goto L_0010A4BC;
    case 285u: goto L_0010A4DC;
    case 286u: goto L_0010A4FC;
    case 287u: goto L_0010A508;
    case 288u: goto L_0010A518;
    case 289u: goto L_0010A538;
    case 290u: goto L_0010A5D4;
    case 291u: goto L_0010A5EC;
    case 292u: goto L_0010A63C;
    case 293u: goto L_0010A64C;
    case 294u: goto L_0010A684;
    case 295u: goto L_0010A690;
    case 296u: goto L_0010A6C8;
    case 297u: goto L_0010A6E8;
    case 298u: goto L_0010A6FC;
    case 299u: goto L_0010A730;
    case 300u: goto L_0010A750;
    case 301u: goto L_0010A764;
    case 302u: goto L_0010A808;
    case 303u: goto L_0010A830;
    case 304u: goto L_0010A8BC;
    case 305u: goto L_0010A8E4;
    case 306u: goto L_0010A958;
    case 307u: goto L_0010A968;
    case 308u: goto L_0010A9E0;
    case 309u: goto L_0010AA70;
    case 310u: goto L_0010AB00;
    case 311u: goto L_0010AB30;
    case 312u: goto L_0010AB4C;
    case 313u: goto L_0010AB64;
    case 314u: goto L_0010AB90;
    case 315u: goto L_0010ABB0;
    case 316u: goto L_0010ABC0;
    case 317u: goto L_0010AC00;
    case 318u: goto L_0010AC04;
    case 319u: goto L_0010AC10;
    case 320u: goto L_0010AC30;
    case 321u: goto L_0010AC50;
    case 322u: goto L_0010AC60;
    case 323u: goto L_0010AC78;
    case 324u: goto L_0010AC88;
    case 325u: goto L_0010ACA0;
    case 326u: goto L_0010ACB0;
    case 327u: goto L_0010AD00;
    case 328u: goto L_0010AD2C;
    case 329u: goto L_0010AD58;
    case 330u: goto L_0010AD70;
    case 331u: goto L_0010AD80;
    case 332u: goto L_0010AD98;
    case 333u: goto L_0010ADA8;
    case 334u: goto L_0010ADF0;
    case 335u: goto L_0010AE08;
    case 336u: goto L_0010AE28;
    case 337u: goto L_0010AE40;
    case 338u: goto L_0010AE70;
    case 339u: goto L_0010AE8C;
    case 340u: goto L_0010AEA4;
    case 341u: goto L_0010AEFC;
    case 342u: goto L_0010AF20;
    case 343u: goto L_0010AF5C;
    case 344u: goto L_0010AF8C;
    case 345u: goto L_0010AFA4;
    case 346u: goto L_0010AFE4;
    case 347u: goto L_0010B010;
    case 348u: goto L_0010B08C;
    case 349u: goto L_0010B0A0;
    case 350u: goto L_0010B0E8;
    case 351u: goto L_0010B118;
    case 352u: goto L_0010B12C;
    case 353u: goto L_0010B140;
    case 354u: goto L_0010B160;
    case 355u: goto L_0010B170;
    case 356u: goto L_0010B198;
    case 357u: goto L_0010B1D8;
    case 358u: goto L_0010B1E4;
    case 359u: goto L_0010B204;
    case 360u: goto L_0010B254;
    case 361u: goto L_0010B260;
    case 362u: goto L_0010B28C;
    case 363u: goto L_0010B2AC;
    case 364u: goto L_0010B2C4;
    case 365u: goto L_0010B2F4;
    case 366u: goto L_0010B318;
    case 367u: goto L_0010B360;
    case 368u: goto L_0010B3C4;
    case 369u: goto L_0010B454;
    case 370u: goto L_0010B468;
    case 371u: goto L_0010B4E4;
    case 372u: goto L_0010B4FC;
    case 373u: goto L_0010B51C;
    case 374u: goto L_0010B53C;
    case 375u: goto L_0010B548;
    case 376u: goto L_0010B554;
    case 377u: goto L_0010B564;
    case 378u: goto L_0010B5C0;
    case 379u: goto L_0010B5F4;
    case 380u: goto L_0010B60C;
    case 381u: goto L_0010B628;
    case 382u: goto L_0010B674;
    case 383u: goto L_0010B694;
    case 384u: goto L_0010B6B4;
    case 385u: goto L_0010B6C0;
    case 386u: goto L_0010B6CC;
    case 387u: goto L_0010B6E0;
    case 388u: goto L_0010B71C;
    case 389u: goto L_0010B758;
    case 390u: goto L_0010B780;
    case 391u: goto L_0010B7C0;
    case 392u: goto L_0010B824;
    case 393u: goto L_0010B880;
    case 394u: goto L_0010B8B4;
    case 395u: goto L_0010B8C8;
    case 396u: goto L_0010B944;
    case 397u: goto L_0010B95C;
    case 398u: goto L_0010B97C;
    case 399u: goto L_0010B99C;
    case 400u: goto L_0010B9A8;
    case 401u: goto L_0010B9B4;
    case 402u: goto L_0010B9C4;
    case 403u: goto L_0010B9E4;
    case 404u: goto L_0010B9F0;
    case 405u: goto L_0010B9FC;
    case 406u: goto L_0010BA0C;
    case 407u: goto L_0010BA68;
    case 408u: goto L_0010BA9C;
    case 409u: goto L_0010BAB4;
    case 410u: goto L_0010BAD0;
    case 411u: goto L_0010BB1C;
    case 412u: goto L_0010BB3C;
    case 413u: goto L_0010BB5C;
    case 414u: goto L_0010BB68;
    case 415u: goto L_0010BB74;
    case 416u: goto L_0010BB88;
    case 417u: goto L_0010BBC4;
    case 418u: goto L_0010BC00;
    case 419u: goto L_0010BC28;
    case 420u: goto L_0010BC68;
    case 421u: goto L_0010BCDC;
    case 422u: goto L_0010BCFC;
    case 423u: goto L_0010BD10;
    case 424u: goto L_0010BD44;
    case 425u: goto L_0010BD5C;
    case 426u: goto L_0010BDD4;
    case 427u: goto L_0010BDF0;
    case 428u: goto L_0010BE10;
    case 429u: goto L_0010BE7C;
    case 430u: goto L_0010BE94;
    case 431u: goto L_0010BEC8;
    case 432u: goto L_0010BEFC;
    case 433u: goto L_0010BF70;
    case 434u: goto L_0010BF90;
    case 435u: goto L_0010BFD4;
    default: bad_entry(c, 0x00108000u); return;
    }
L_00108000:
    c.budget -= 1;
L_00108004:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108054; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFE590000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 23787ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.budget -= 11;
L_0010803C:
    c.f[17] = c.f[13];
    c.budget -= 1;
L_00108040:
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010804Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0010804Cu) [[unlikely]] return; }
L_0010804C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108090; } }
L_00108054:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFE590000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 23787ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.budget -= 11;
L_00108080:
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108090u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x00108090u) [[unlikely]] return; }
L_00108090:
    st32((c.r[17].w[0] - 16812u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001080B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001080C0:
    c.budget -= 1;
    c.pc = 0x001080C4u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001080C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[19], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 280u)));
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108100u);  if (depth < kMaxDepth) unit_0001(c, 395u, depth + 1u); else { c.pc = 0x00106DA0u; return; } if (c.pc != 0x00108100u) [[unlikely]] return; }
    goto L_00108100;
L_001080FC:
    c.budget -= 1;
L_00108100:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108118u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00108118u) [[unlikely]] return; }
L_00108118:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108124u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x00108124u) [[unlikely]] return; }
L_00108124:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00108140u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00108140u) [[unlikely]] return; }
L_00108140:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108150u);  if (depth < kMaxDepth) unit_0036(c, 356u, depth + 1u); else { c.pc = 0x001DABE0u; return; } if (c.pc != 0x00108150u) [[unlikely]] return; }
L_00108150:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010815Cu);  if (depth < kMaxDepth) unit_0000(c, 260u, depth + 1u); else { c.pc = 0x00102928u; return; } if (c.pc != 0x0010815Cu) [[unlikely]] return; }
L_0010815C:
    st32((c.r[17].w[0] + 336u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010816Cu);  if (depth < kMaxDepth) unit_0002(c, 53u, depth + 1u); else { c.pc = 0x00108490u; return; } if (c.pc != 0x0010816Cu) [[unlikely]] return; }
L_0010816C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001081BC; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x58FD0000u);
    c.budget -= 3;
L_00108180:
    st32((c.r[18].w[0] + 276u), c.r[19].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[5].d[0] | 61403ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081B4u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001081B4u) [[unlikely]] return; }
L_001081B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001081CC; } }
L_001081BC:
    st32((c.r[18].w[0] + 276u), 0u);
    c.budget -= 1;
L_001081C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081CCu);  if (depth < kMaxDepth) unit_0001(c, 509u, depth + 1u); else { c.pc = 0x00107CF0u; return; } if (c.pc != 0x001081CCu) [[unlikely]] return; }
L_001081CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081D4u);  if (depth < kMaxDepth) unit_0037(c, 164u, depth + 1u); else { c.pc = 0x001DD338u; return; } if (c.pc != 0x001081D4u) [[unlikely]] return; }
L_001081D4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081E0u);  if (depth < kMaxDepth) unit_0002(c, 56u, depth + 1u); else { c.pc = 0x001084D8u; return; } if (c.pc != 0x001081E0u) [[unlikely]] return; }
L_001081E0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001081ECu);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x001081ECu) [[unlikely]] return; }
L_001081EC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
L_00108200:
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108230u);  if (depth < kMaxDepth) unit_0001(c, 395u, depth + 1u); else { c.pc = 0x00106DA0u; return; } if (c.pc != 0x00108230u) [[unlikely]] return; }
L_00108230:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_00108238:
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00108258; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00108258:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00108280; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010826Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010826Cu) [[unlikely]] return; }
L_0010826C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001082D0; } }
L_00108280:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[16], c.r[16].w[0] + 17200u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108298u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x00108298u) [[unlikely]] return; }
L_00108298:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082A8u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x001082A8u) [[unlikely]] return; }
L_001082A8:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001082C0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001082D4; } }
L_001082C0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082D0u);  if (depth < kMaxDepth) unit_0036(c, 477u, depth + 1u); else { c.pc = 0x001DB898u; return; } if (c.pc != 0x001082D0u) [[unlikely]] return; }
L_001082D0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001082D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001082F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    set32(c.r[3], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108324; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_00108324:
    set32(c.r[2], ld32((c.r[17].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108364; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 280u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00108364; } }
    st32((c.r[17].w[0] + 276u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108364u);  if (depth < kMaxDepth) unit_0001(c, 509u, depth + 1u); else { c.pc = 0x00107CF0u; return; } if (c.pc != 0x00108364u) [[unlikely]] return; }
L_00108364:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108370u);  if (depth < kMaxDepth) unit_0001(c, 395u, depth + 1u); else { c.pc = 0x00106DA0u; return; } if (c.pc != 0x00108370u) [[unlikely]] return; }
L_00108370:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001083F4; } }
    set32(c.r[4], 0u + 382u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108388u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00108388u) [[unlikely]] return; }
L_00108388:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108398u);  if (depth < kMaxDepth) unit_0039(c, 347u, depth + 1u); else { c.pc = 0x001E6EC8u; return; } if (c.pc != 0x00108398u) [[unlikely]] return; }
L_00108398:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083ACu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001083ACu) [[unlikely]] return; }
L_001083AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083B8u);  if (depth < kMaxDepth) unit_0002(c, 53u, depth + 1u); else { c.pc = 0x00108490u; return; } if (c.pc != 0x001083B8u) [[unlikely]] return; }
L_001083B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010841C; } }
    goto L_001083C0;
L_001083BC:
    c.budget -= 1;
L_001083C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 145u);
    set32(c.r[16], c.r[16].w[0] - 16832u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083D4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001083D4u) [[unlikely]] return; }
L_001083D4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083ECu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001083ECu) [[unlikely]] return; }
L_001083EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010841C; } }
L_001083F4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], 0u + 383u);
    c.budget -= 2;
L_001083FC:
    set32(c.r[16], c.r[16].w[0] - 16824u);
    c.budget -= 1;
L_00108400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108408u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x00108408u) [[unlikely]] return; }
L_00108408:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010841Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x0010841Cu) [[unlikely]] return; }
L_0010841C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010842Cu);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x0010842Cu) [[unlikely]] return; }
L_0010842C:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    c.budget -= 3;
L_00108438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108440u);  if (depth < kMaxDepth) unit_0049(c, 177u, depth + 1u); else { c.pc = 0x00226540u; return; } if (c.pc != 0x00108440u) [[unlikely]] return; }
L_00108440:
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108474u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x00108474u) [[unlikely]] return; }
L_00108474:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084A4u);  if (depth < kMaxDepth) unit_0001(c, 395u, depth + 1u); else { c.pc = 0x00106DA0u; return; } if (c.pc != 0x001084A4u) [[unlikely]] return; }
L_001084A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084B8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001084B8u) [[unlikely]] return; }
L_001084B8:
    set32(c.r[3], ld32((c.r[2].w[0] + 928u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 920u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001084D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084FCu);  if (depth < kMaxDepth) unit_0001(c, 395u, depth + 1u); else { c.pc = 0x00106DA0u; return; } if (c.pc != 0x001084FCu) [[unlikely]] return; }
L_001084FC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001085B4; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108514u);  if (depth < kMaxDepth) unit_0001(c, 397u, depth + 1u); else { c.pc = 0x00106E10u; return; } if (c.pc != 0x00108514u) [[unlikely]] return; }
L_00108514:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108528u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00108528u) [[unlikely]] return; }
L_00108528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108530u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x00108530u) [[unlikely]] return; }
L_00108530:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 16960ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00108554u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00108554u) [[unlikely]] return; }
L_00108554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010855Cu);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x0010855Cu) [[unlikely]] return; }
L_0010855C:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 16960ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00108580u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00108580u) [[unlikely]] return; }
L_00108580:
    set32(c.r[4], c.r[17].w[0] + 10280u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010858Cu);  if (depth < kMaxDepth) unit_009E(c, 69u, depth + 1u); else { c.pc = 0x00378A08u; return; } if (c.pc != 0x0010858Cu) [[unlikely]] return; }
L_0010858C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108598u);  if (depth < kMaxDepth) unit_0039(c, 261u, depth + 1u); else { c.pc = 0x001E6208u; return; } if (c.pc != 0x00108598u) [[unlikely]] return; }
L_00108598:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001085A4u);  if (depth < kMaxDepth) unit_0001(c, 295u, depth + 1u); else { c.pc = 0x00105BD0u; return; } if (c.pc != 0x001085A4u) [[unlikely]] return; }
L_001085A4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001085B4u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325760u; return; } if (c.pc != 0x001085B4u) [[unlikely]] return; }
L_001085B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001085D0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16632u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00108604; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108614; } }
    goto L_00108604;
L_00108600:
    c.budget -= 1;
L_00108604:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108614u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00108614u) [[unlikely]] return; }
L_00108614:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108630u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x00108630u) [[unlikely]] return; }
L_00108630:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 16616u);
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 280u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108650u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00108650u) [[unlikely]] return; }
L_00108650:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108660u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00108660u) [[unlikely]] return; }
L_00108660:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108688u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00108688u) [[unlikely]] return; }
L_00108688:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108698u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00108698u) [[unlikely]] return; }
L_00108698:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001086C4; } }
L_001086BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001086C4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001086C4u) [[unlikely]] return; }
L_001086C4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001086E4; } }
L_001086D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001086BCu | kUnwind; return; } goto L_001086BC; } }
L_001086E4:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108700:
    set32(c.r[2], ld32((c.r[4].w[0] + 276u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108728:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[16].w[0] + 284u)));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    st32((c.r[2].w[0] + 4u), c.f[1]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108780u);  if (depth < kMaxDepth) unit_0001(c, 395u, depth + 1u); else { c.pc = 0x00106DA0u; return; } if (c.pc != 0x00108780u) [[unlikely]] return; }
L_00108780:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108790u);  if (depth < kMaxDepth) unit_0001(c, 397u, depth + 1u); else { c.pc = 0x00106E10u; return; } if (c.pc != 0x00108790u) [[unlikely]] return; }
L_00108790:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001087A4u);  if (depth < kMaxDepth) unit_0002(c, 110u, depth + 1u); else { c.pc = 0x00108AC8u; return; } if (c.pc != 0x001087A4u) [[unlikely]] return; }
L_001087A4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43C80000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001087B8u);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x001087B8u) [[unlikely]] return; }
L_001087B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001087C0u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001087C0u) [[unlikely]] return; }
L_001087C0:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 16960ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001087E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001087E4u) [[unlikely]] return; }
L_001087E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001087ECu);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001087ECu) [[unlikely]] return; }
L_001087EC:
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x000F0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 16960ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 44u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00108810u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00108810u) [[unlikely]] return; }
L_00108810:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010881Cu);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x0010881Cu) [[unlikely]] return; }
L_0010881C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108838:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.budget -= 2;
L_00108840:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[18].w[0] + 276u), 0u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    st32((c.r[18].w[0] + 280u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108870u);  if (depth < kMaxDepth) unit_0001(c, 401u, depth + 1u); else { c.pc = 0x00106EB8u; return; } if (c.pc != 0x00108870u) [[unlikely]] return; }
L_00108870:
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010887Cu);  if (depth < kMaxDepth) unit_0001(c, 397u, depth + 1u); else { c.pc = 0x00106E10u; return; } if (c.pc != 0x0010887Cu) [[unlikely]] return; }
L_0010887C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00108880:
    st8((c.r[16].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108890u);  if (depth < kMaxDepth) unit_0049(c, 202u, depth + 1u); else { c.pc = 0x00226858u; return; } if (c.pc != 0x00108890u) [[unlikely]] return; }
L_00108890:
    set32(c.r[2], ld32((c.r[16].w[0] + 13228u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001088F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[20], 0u + 24u);
    set32(c.r[19], c.r[2].w[0] - 10400u);
    c.budget -= 3;
L_001088A8:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 6;
L_001088C0:
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001088DC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001088DCu);  if (depth < kMaxDepth) unit_0049(c, 204u, depth + 1u); else { c.pc = 0x00226880u; return; } if (c.pc != 0x001088DCu) [[unlikely]] return; }
L_001088DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 13228u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001088A8u | kUnwind; return; } goto L_001088A8; } }
L_001088F0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001088FCu);  if (depth < kMaxDepth) unit_0001(c, 422u, depth + 1u); else { c.pc = 0x001071F8u; return; } if (c.pc != 0x001088FCu) [[unlikely]] return; }
L_001088FC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108960; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010894Cu);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x0010894Cu) [[unlikely]] return; }
L_0010894C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00108960; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108988; } }
L_00108960:
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00108984; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00108984:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_00108988:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001089A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001089CC; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001089CC:
    set32(c.r[3], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001089E8; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001089E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 280u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108A00; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A00u);  if (depth < kMaxDepth) unit_0002(c, 116u, depth + 1u); else { c.pc = 0x00108B50u; return; } if (c.pc != 0x00108A00u) [[unlikely]] return; }
L_00108A00:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A10u);  if (depth < kMaxDepth) unit_0009(c, 70u, depth + 1u); else { c.pc = 0x001258E0u; return; } if (c.pc != 0x00108A10u) [[unlikely]] return; }
L_00108A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108A20; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 2;
L_00108A20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A2Cu);  if (depth < kMaxDepth) unit_0002(c, 117u, depth + 1u); else { c.pc = 0x00108B78u; return; } if (c.pc != 0x00108A2Cu) [[unlikely]] return; }
L_00108A2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108A50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 284u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 7;
L_00108A50:
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00108A74; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00108A74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00108AB4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A88u);  if (depth < kMaxDepth) unit_0001(c, 397u, depth + 1u); else { c.pc = 0x00106E10u; return; } if (c.pc != 0x00108A88u) [[unlikely]] return; }
L_00108A88:
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], 0u + 128u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00108AB4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108AA4u);  if (depth < kMaxDepth) unit_0001(c, 395u, depth + 1u); else { c.pc = 0x00106DA0u; return; } if (c.pc != 0x00108AA4u) [[unlikely]] return; }
L_00108AA4:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108AB4u);  if (depth < kMaxDepth) unit_0036(c, 239u, depth + 1u); else { c.pc = 0x001D9E50u; return; } if (c.pc != 0x00108AB4u) [[unlikely]] return; }
L_00108AB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108AC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108AE4u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x00108AE4u) [[unlikely]] return; }
L_00108AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108AF8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108AF8u);  if (depth < kMaxDepth) unit_0039(c, 261u, depth + 1u); else { c.pc = 0x001E6208u; return; } if (c.pc != 0x00108AF8u) [[unlikely]] return; }
L_00108AF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B08u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325760u; return; } if (c.pc != 0x00108B08u) [[unlikely]] return; }
L_00108B08:
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 12u);
    st8((c.r[16].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B2Cu);  if (depth < kMaxDepth) unit_0062(c, 71u, depth + 1u); else { c.pc = 0x00289730u; return; } if (c.pc != 0x00108B2Cu) [[unlikely]] return; }
L_00108B2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B3Cu);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x00108B3Cu) [[unlikely]] return; }
L_00108B3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108B50:
    set32(c.r[2], ld32((c.r[4].w[0] + 284u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[4].w[0] + 280u), 0u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108B78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B8Cu);  if (depth < kMaxDepth) unit_0001(c, 397u, depth + 1u); else { c.pc = 0x00106E10u; return; } if (c.pc != 0x00108B8Cu) [[unlikely]] return; }
L_00108B8C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8938u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108BA8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108BB8:
    set32(c.r[29], c.r[29].w[0] - 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16464u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.f[20]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00108BF4; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108C04; } }
L_00108BF4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C04u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00108C04u) [[unlikely]] return; }
L_00108C04:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C20u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x00108C20u) [[unlikely]] return; }
L_00108C20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] - 16440u);
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00108C4C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00108C4C:
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C5Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00108C5Cu) [[unlikely]] return; }
L_00108C5C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C6Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00108C6Cu) [[unlikely]] return; }
L_00108C6C:
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108C90; } }
L_00108C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C90u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00108C90u) [[unlikely]] return; }
L_00108C90:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108CB0; } }
L_00108C9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108C88u | kUnwind; return; } goto L_00108C88; } }
L_00108CB0:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    c.f[20] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108CD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108CE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 280u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D08u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x00108D08u) [[unlikely]] return; }
L_00108D08:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108D18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 128u);
    set32(c.r[3], c.r[2].w[0] + 14208u);
    set32(c.r[2], ld32((c.r[3].w[0] + 13284u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00108D3C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 26532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00108D48; } }
L_00108D3C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108D48:
    set32(c.r[2], ld32((c.r[4].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108D60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108D60:
    set32(c.r[2], ld32((c.r[4].w[0] + 280u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00108D84; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00108D84:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108D90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108DC4; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_00108DC4:
    set32(c.r[2], ld32((c.r[17].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00108E74; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00108DF4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00108DF4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00108E74; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E10u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x00108E10u) [[unlikely]] return; }
L_00108E10:
    set32(c.r[18], ld32((c.r[2].w[0] + 920u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E20u);  if (depth < kMaxDepth) unit_0062(c, 75u, depth + 1u); else { c.pc = 0x00289778u; return; } if (c.pc != 0x00108E20u) [[unlikely]] return; }
L_00108E20:
    set32(c.r[3], ld32((c.r[2].w[0] + 920u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108E48; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E40u);  if (depth < kMaxDepth) unit_0001(c, 384u, depth + 1u); else { c.pc = 0x00106C18u; return; } if (c.pc != 0x00108E40u) [[unlikely]] return; }
L_00108E40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108E74; } }
L_00108E48:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108E6C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E64u);  if (depth < kMaxDepth) unit_0001(c, 386u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00108E64u) [[unlikely]] return; }
L_00108E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108E74; } }
L_00108E6C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    st32((c.r[2].w[0] + 36u), 0u);
    c.budget -= 2;
L_00108E74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E80u);  if (depth < kMaxDepth) unit_0002(c, 140u, depth + 1u); else { c.pc = 0x00108EA0u; return; } if (c.pc != 0x00108E80u) [[unlikely]] return; }
L_00108E80:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108EA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108EC0u);  if (depth < kMaxDepth) unit_0049(c, 178u, depth + 1u); else { c.pc = 0x00226558u; return; } if (c.pc != 0x00108EC0u) [[unlikely]] return; }
L_00108EC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] - 17388u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[2]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[18], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00108F3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[2], 0u + 91u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F34u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x00108F34u) [[unlikely]] return; }
L_00108F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108FB8; } }
L_00108F3C:
    set32(c.r[3], ld32((c.r[16].w[0] + 280u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.f[2] = 0u;
    set32(c.r[5], c.r[2].w[0] - 16448u);
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00108F6C; } }
    c.f[1] = c.f[2];
    c.budget -= 1;
L_00108F6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F8Cu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x00108F8Cu) [[unlikely]] return; }
L_00108F8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7F800000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 32896ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108FB8u);  if (depth < kMaxDepth) unit_007D(c, 114u, depth + 1u); else { c.pc = 0x002F54B0u; return; } if (c.pc != 0x00108FB8u) [[unlikely]] return; }
L_00108FB8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00108FD8:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16256u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010900C; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010901C; } }
L_0010900C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010901Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0010901Cu) [[unlikely]] return; }
L_0010901C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109038u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x00109038u) [[unlikely]] return; }
L_00109038:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 16240u);
    st32((c.r[16].w[0] + 276u), 0u);
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109054u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00109054u) [[unlikely]] return; }
L_00109054:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109064u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00109064u) [[unlikely]] return; }
L_00109064:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 7;
L_00109080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109090; } }
L_00109088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109090u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00109090u) [[unlikely]] return; }
L_00109090:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001090B0; } }
L_0010909C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109088u | kUnwind; return; } goto L_00109088; } }
L_001090B0:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 4;
L_001090C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001090C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001090E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 276u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 280u)));
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010911Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0010911Cu) [[unlikely]] return; }
L_0010911C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010912Cu);  if (depth < kMaxDepth) unit_0001(c, 295u, depth + 1u); else { c.pc = 0x00105BD0u; return; } if (c.pc != 0x0010912Cu) [[unlikely]] return; }
L_0010912C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010913Cu);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325760u; return; } if (c.pc != 0x0010913Cu) [[unlikely]] return; }
L_0010913C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109148u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x00109148u) [[unlikely]] return; }
L_00109148:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010917Cu);  if (depth < kMaxDepth) unit_0001(c, 388u, depth + 1u); else { c.pc = 0x00106CF8u; return; } if (c.pc != 0x0010917Cu) [[unlikely]] return; }
L_0010917C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109188u);  if (depth < kMaxDepth) unit_0001(c, 422u, depth + 1u); else { c.pc = 0x001071F8u; return; } if (c.pc != 0x00109188u) [[unlikely]] return; }
L_00109188:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001091A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001091D0u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001091D0u) [[unlikely]] return; }
L_001091D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001091E4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001091E4u) [[unlikely]] return; }
L_001091E4:
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[17], c.r[2].w[0] + 17200u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109200u);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x00109200u) [[unlikely]] return; }
L_00109200:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109210u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x00109210u) [[unlikely]] return; }
L_00109210:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00109248; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010922Cu);  if (depth < kMaxDepth) unit_0071(c, 253u, depth + 1u); else { c.pc = 0x002C6C80u; return; } if (c.pc != 0x0010922Cu) [[unlikely]] return; }
L_0010922C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010923Cu);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x0010923Cu) [[unlikely]] return; }
L_0010923C:
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109264; } }
L_00109248:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109258u);  if (depth < kMaxDepth) unit_0036(c, 477u, depth + 1u); else { c.pc = 0x001DB898u; return; } if (c.pc != 0x00109258u) [[unlikely]] return; }
L_00109258:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010928C; } }
L_00109264:
    set32(c.r[2], ld32((c.r[18].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109288; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010927Cu);  if (depth < kMaxDepth) unit_0089(c, 124u, depth + 1u); else { c.pc = 0x00325790u; return; } if (c.pc != 0x0010927Cu) [[unlikely]] return; }
L_0010927C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010928C; } }
L_00109288:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010928C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001092A8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 280u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001092D8; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001092D8:
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00109348; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[17], c.r[2].w[0] - 14960u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001092FCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001092FCu) [[unlikely]] return; }
L_001092FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109308u);  if (depth < kMaxDepth) unit_0089(c, 124u, depth + 1u); else { c.pc = 0x00325790u; return; } if (c.pc != 0x00109308u) [[unlikely]] return; }
L_00109308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109348; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109328u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x00109328u) [[unlikely]] return; }
L_00109328:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109338u);  if (depth < kMaxDepth) unit_0001(c, 295u, depth + 1u); else { c.pc = 0x00105BD0u; return; } if (c.pc != 0x00109338u) [[unlikely]] return; }
L_00109338:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109348u);  if (depth < kMaxDepth) unit_0089(c, 122u, depth + 1u); else { c.pc = 0x00325760u; return; } if (c.pc != 0x00109348u) [[unlikely]] return; }
L_00109348:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109378:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16184u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001093AC; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001093BC; } }
L_001093AC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093BCu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001093BCu) [[unlikely]] return; }
L_001093BC:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093D8u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x001093D8u) [[unlikely]] return; }
L_001093D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 16168u);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109410u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00109410u) [[unlikely]] return; }
L_00109410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109434; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109420u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x00109420u) [[unlikely]] return; }
L_00109420:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010942Cu);  if (depth < kMaxDepth) unit_009B(c, 432u, depth + 1u); else { c.pc = 0x0036F778u; return; } if (c.pc != 0x0010942Cu) [[unlikely]] return; }
L_0010942C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00109440; } }
L_00109434:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109444; } }
L_00109440:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00109444:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109458:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109460:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16112u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00109494; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001094A4; } }
L_00109494:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094A4u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001094A4u) [[unlikely]] return; }
L_001094A4:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094C0u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x001094C0u) [[unlikely]] return; }
L_001094C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 16088u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094D8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001094D8u) [[unlikely]] return; }
L_001094D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094E8u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001094E8u) [[unlikely]] return; }
L_001094E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109518; } }
L_00109510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109518u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00109518u) [[unlikely]] return; }
L_00109518:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109538; } }
L_00109524:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109510u | kUnwind; return; } goto L_00109510; } }
L_00109538:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109568:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 276u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109588u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x00109588u) [[unlikely]] return; }
L_00109588:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109598:
    set32(c.r[2], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001095BC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001095BC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001095C8:
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001095E4; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001095E4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001095F0:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 16032u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00109624; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109634; } }
L_00109624:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109634u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x00109634u) [[unlikely]] return; }
L_00109634:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109650u);  if (depth < kMaxDepth) unit_0001(c, 417u, depth + 1u); else { c.pc = 0x001070D8u; return; } if (c.pc != 0x00109650u) [[unlikely]] return; }
L_00109650:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 16008u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109668u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x00109668u) [[unlikely]] return; }
L_00109668:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109678u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x00109678u) [[unlikely]] return; }
L_00109678:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 276u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001096A4; } }
L_0010969C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096A4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001096A4u) [[unlikely]] return; }
L_001096A4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001096C4; } }
L_001096B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[16].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010969Cu | kUnwind; return; } goto L_0010969C; } }
L_001096C4:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001096E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 17632u);
    st32((c.r[4].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001096F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_00109700:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109724u);  if (depth < kMaxDepth) unit_0001(c, 397u, depth + 1u); else { c.pc = 0x00106E10u; return; } if (c.pc != 0x00109724u) [[unlikely]] return; }
L_00109724:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109734u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x00109734u) [[unlikely]] return; }
L_00109734:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109740u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x00109740u) [[unlikely]] return; }
L_00109740:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109758:
    set32(c.r[2], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0010977C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010977C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109788:
    set32(c.r[3], ld32((c.r[4].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001097A4; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001097A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001097B0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[2].w[0] + 13248u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[20].w[0] - 31832u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[19], 0u - 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    set32(c.r[21], 0u + 1962u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[22], 0u + 1963u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[30], 0u + 77u);
    c.budget -= 22;
L_00109808:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_001098EC; } }
    set32(c.r[4], c.r[23].w[0] + 9872u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109824u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00109824u) [[unlikely]] return; }
L_00109824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001098EC; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001098EC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 1;
L_0010983C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_001098EC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_001098EC; } }
    set32(c.r[2], ld32((c.r[20].w[0] - 31832u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0010988C; } }
    c.budget -= 1;
L_00109868:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109890; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.budget -= 2;
L_00109880:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109868u | kUnwind; return; } goto L_00109868; } }
L_0010988C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00109890:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001098EC; } }
    set32(c.r[2], ld32((c.r[6].w[0] - 31832u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001098B8; } }
    st32((c.r[6].w[0] - 31832u), c.r[16].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001098E0; } }
    c.budget -= 1;
L_001098B8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001098E0; } }
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001098B8u | kUnwind; return; } goto L_001098B8; } }
    st32((c.r[2].w[0]), c.r[16].w[0]);
    c.budget -= 1;
L_001098E0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109904; } }
L_001098EC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109808u | kUnwind; return; } goto L_00109808; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00109904:
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
L_00109938:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00109C60; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010998Cu);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010998Cu) [[unlikely]] return; }
L_0010998C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001099A4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[2], 0u + 1960u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00109C60; } }
L_001099A4:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    st8((c.r[16].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109C60; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109C60; } }
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109C60; } }
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u + 800u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[17].w[0] + 96u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001099ECu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001099ECu) [[unlikely]] return; }
L_001099EC:
    set32(c.r[6], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00109A0Cu) [[unlikely]] return; }
L_00109A0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[18], c.r[29].w[0] + 16u);
    set32(c.r[4], ld32((c.r[17].w[0] + 576u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 948u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[13] = c.r[1].w[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A38u);  if (depth < kMaxDepth) unit_0067(c, 265u, depth + 1u); else { c.pc = 0x0029E890u; return; } if (c.pc != 0x00109A38u) [[unlikely]] return; }
L_00109A38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109A90; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A58u);  if (depth < kMaxDepth) unit_0061(c, 115u, depth + 1u); else { c.pc = 0x002853E0u; return; } if (c.pc != 0x00109A58u) [[unlikely]] return; }
L_00109A58:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[20].w[0] + 14208u);
    set32(c.r[6], 0u + 1963u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_00109A94; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[4].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109A94; } }
L_00109A90:
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_00109A94:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109AA0u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x00109AA0u) [[unlikely]] return; }
L_00109AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00109AB0; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_00109BAC; } }
L_00109AB0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109ABCu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00109ABCu) [[unlikely]] return; }
L_00109ABC:
    set32(c.r[3], 0u + 5u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00109AC8u);  goto L_00109ACC; }
L_00109ACC:
    c.r[16].d[0] = c.hi.d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109AD8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00109AD8u) [[unlikely]] return; }
L_00109AD8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109AE8u);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x00109AE8u) [[unlikely]] return; }
L_00109AE8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00109B2C; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B20u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x00109B20u) [[unlikely]] return; }
L_00109B20:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B2Cu);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x00109B2Cu) [[unlikely]] return; }
L_00109B2C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B38u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x00109B38u) [[unlikely]] return; }
L_00109B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109BAC; } }
    set32(c.r[16], c.r[16].w[0] + 8u);
    set32(c.r[3], 0u + 7u);
    c.r[2].d[0] = c.r[16].sd[0] < 12ll ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B58u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00109B58u) [[unlikely]] return; }
L_00109B58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B68u);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x00109B68u) [[unlikely]] return; }
L_00109B68:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00109BAC; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 56u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109BA0u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x00109BA0u) [[unlikely]] return; }
L_00109BA0:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109BACu);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x00109BACu) [[unlikely]] return; }
L_00109BAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8488u)));
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00109C60; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 1963u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109BD4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x00109BD4u) [[unlikely]] return; }
L_00109BD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[20].w[0] + 14208u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    set32(c.r[7], 0u + 6u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31832u)));
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 7700u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00109C28; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[9].w[0] - 31832u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00109C60; } }
    c.budget -= 1;
L_00109C28:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109C60; } }
    set32(c.r[3], c.r[9].w[0] - 31832u);
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109C28u | kUnwind; return; } goto L_00109C28; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00109C60:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00109C88:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[22]);
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010A9A4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 1502u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[2].w[0] + 14208u);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00109D9C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 20942u)));
    set32(c.r[17], 0u + 880u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4580000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] - 4440u);
    st32((c.r[19].w[0] + 13376u), c.f[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC41A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2BE0000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[5], ld32((c.r[2].w[0])));
    st32((c.r[19].w[0] + 13384u), c.f[1]);
    st32((c.r[19].w[0] + 13380u), c.f[21]);
    st32((c.r[19].w[0] + 13396u), c.f[20]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D54u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x00109D54u) [[unlikely]] return; }
L_00109D54:
    c.r[2].d[0] = 0ull | 32768ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4720000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[1] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1422u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[19].w[0] + 26624u), c.f[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 26628u), c.f[21]);
    st32((c.r[19].w[0] + 26632u), c.f[1]);
    st32((c.r[19].w[0] + 26644u), c.f[20]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D9Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x00109D9Cu) [[unlikely]] return; }
L_00109D9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8488u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00109DCC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31900u)));
    c.r[2].d[0] = c.r[2].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109DCC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    st32((c.r[2].w[0] + 332u), 0u);
    c.budget -= 2;
L_00109DCC:
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 1502u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00109F94; } }
    set32(c.r[4], 0u + 1502u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109DE8u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x00109DE8u) [[unlikely]] return; }
L_00109DE8:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109F94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31820u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00109F94; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 31812u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00109F94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109E24u);  if (depth < kMaxDepth) unit_0002(c, 217u, depth + 1u); else { c.pc = 0x001097B0u; return; } if (c.pc != 0x00109E24u) [[unlikely]] return; }
L_00109E24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0010A5D4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[19], 0u + 1u);
    st32((c.r[16].w[0] - 31812u), c.r[19].w[0]);
    set32(c.r[5], 0u + 1503u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[16], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5510000u);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2A80000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109E68u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x00109E68u) [[unlikely]] return; }
L_00109E68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46200000u);
    c.r[1].d[0] = c.r[1].d[0] | 40960ull;
    c.f[22] = c.r[1].w[0];
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[4], 0u + 13248u);
    set32(c.r[6], c.r[22].w[0] + 14208u);
    set32(c.r[5], 0u + 1504u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 148u), 0u);
    st32((c.r[18].w[0] + 128u), c.f[20]);
    st32((c.r[18].w[0] + 132u), c.f[21]);
    st32((c.r[18].w[0] + 136u), c.f[22]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109EB4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x00109EB4u) [[unlikely]] return; }
L_00109EB4:
    st32((c.r[17].w[0] + 7700u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[17].w[0] + 128u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 132u), c.f[21]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st32((c.r[17].w[0] + 136u), c.f[22]);
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109EDCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x00109EDCu) [[unlikely]] return; }
L_00109EDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00109F7C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00109F7C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F00u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x00109F00u) [[unlikely]] return; }
L_00109F00:
    set32(c.r[3], 0u + 5u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00109F0Cu);  goto L_00109F10; }
L_00109F10:
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[16].w[0] + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F20u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x00109F20u) [[unlikely]] return; }
L_00109F20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F30u);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x00109F30u) [[unlikely]] return; }
L_00109F30:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00109F74; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F68u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x00109F68u) [[unlikely]] return; }
L_00109F68:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F74u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x00109F74u) [[unlikely]] return; }
L_00109F74:
    set32(c.r[2], ld32((c.r[17].w[0] + 224u)));
    st32((c.r[2].w[0] + 480u), c.r[19].w[0]);
    c.budget -= 2;
L_00109F7C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31800u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] - 31800u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A5D4; } }
L_00109F94:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109FA0u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x00109FA0u) [[unlikely]] return; }
L_00109FA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010A04C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8488u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010A04C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] - 31900u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00109FD0; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] - 31900u), c.r[2].w[0]);
    c.budget -= 2;
L_00109FD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 928u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 920u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 15;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0010A9A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31816u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010A03C; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[18].w[0] + 208u), 0u);
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    st32((c.r[18].w[0] + 212u), 0u);
    st32((c.r[18].w[0] + 216u), 0u);
    st16((c.r[18].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_0010A03C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31820u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010A5D4; } }
L_0010A04C:
    set32(c.r[16], ld32((c.r[19].w[0] + 8488u)));
    set32(c.r[6], c.r[19].w[0] + 8488u);
    c.r[21].d[0] = ld16((c.r[20].w[0] + 514u));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0010A590; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[16].w[0] - 31900u)));
    set32(c.r[17], 0u - 1u);
    st32((c.r[2].w[0] + 300u), 0u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0010A084; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] - 31900u), c.r[2].w[0]);
    c.budget -= 2;
L_0010A084:
    set32(c.r[6], ld32((c.r[20].w[0] + 196u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[3] = c.r[1].w[0];
    c.f[0] = ld32((c.r[6].w[0] + 920u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[6].w[0] + 928u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010A9A4; } }
    set32(c.r[5], ld32((c.r[16].w[0] - 31900u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { goto L_0010A9A4; } }
    set32(c.r[2], 0u + 1600u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] - 31896u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 601u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], 0u + 1500u);
    st32((c.r[16].w[0] - 31900u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] - 31820u)));
    st32((c.r[6].w[0] + 332u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010A218; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A110u);  if (depth < kMaxDepth) unit_0088(c, 19u, depth + 1u); else { c.pc = 0x003202D0u; return; } if (c.pc != 0x0010A110u) [[unlikely]] return; }
L_0010A110:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] - 31812u)));
    st32((c.r[19].w[0] - 31820u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0010A134; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A134u);  if (depth < kMaxDepth) unit_0037(c, 37u, depth + 1u); else { c.pc = 0x001DC3A8u; return; } if (c.pc != 0x0010A134u) [[unlikely]] return; }
L_0010A134:
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], 0u + 1502u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A14Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010A14Cu) [[unlikely]] return; }
L_0010A14C:
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[22].w[0] + 14208u);
    set32(c.r[6], 0u + 6u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[6].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A174u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0010A174u) [[unlikely]] return; }
L_0010A174:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A184u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x0010A184u) [[unlikely]] return; }
L_0010A184:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC1200000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2A80000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45070000u);
    c.r[1].d[0] = c.r[1].d[0] | 61440ull;
    c.f[2] = c.r[1].w[0];
    st32((c.r[2].w[0] + 652u), 0u);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    st32((c.r[18].w[0] + 132u), c.f[1]);
    st32((c.r[18].w[0] + 136u), c.f[2]);
    st32((c.r[18].w[0] + 148u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A1BCu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010A1BCu) [[unlikely]] return; }
L_0010A1BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A1CCu);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x0010A1CCu) [[unlikely]] return; }
L_0010A1CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010A5D4; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A204u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0010A204u) [[unlikely]] return; }
L_0010A204:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A210u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0010A210u) [[unlikely]] return; }
L_0010A210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A5D4; } }
L_0010A218:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31816u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010A4E4; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A238u);  if (depth < kMaxDepth) unit_0037(c, 37u, depth + 1u); else { c.pc = 0x001DC3A8u; return; } if (c.pc != 0x0010A238u) [[unlikely]] return; }
L_0010A238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A240u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010A240u) [[unlikely]] return; }
L_0010A240:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A250u);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x0010A250u) [[unlikely]] return; }
L_0010A250:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010A294; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A288u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0010A288u) [[unlikely]] return; }
L_0010A288:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A294u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0010A294u) [[unlikely]] return; }
L_0010A294:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2540000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 150u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[18].w[0] + 132u), c.f[0]);
    st16((c.r[20].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A2B4u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0010A2B4u) [[unlikely]] return; }
L_0010A2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010A45C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A2C4u);  if (depth < kMaxDepth) unit_0002(c, 217u, depth + 1u); else { c.pc = 0x001097B0u; return; } if (c.pc != 0x0010A2C4u) [[unlikely]] return; }
L_0010A2C4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0010A5D4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], 0u + 1503u);
    st16((c.r[20].w[0] + 514u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[16], 0u + 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5510000u);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    c.f[20] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2A80000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46200000u);
    c.r[1].d[0] = c.r[1].d[0] | 40960ull;
    c.f[22] = c.r[1].w[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A310u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010A310u) [[unlikely]] return; }
L_0010A310:
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[4], 0u + 13248u);
    set32(c.r[6], c.r[22].w[0] + 14208u);
    set32(c.r[5], 0u + 1504u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 148u), 0u);
    st32((c.r[18].w[0] + 128u), c.f[20]);
    st32((c.r[18].w[0] + 132u), c.f[21]);
    st32((c.r[18].w[0] + 136u), c.f[22]);
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A350u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010A350u) [[unlikely]] return; }
L_0010A350:
    st32((c.r[17].w[0] + 7700u), c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[17].w[0] + 128u), c.f[20]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[17].w[0] + 132u), c.f[21]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st32((c.r[17].w[0] + 136u), c.f[22]);
    st32((c.r[17].w[0] + 148u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A378u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0010A378u) [[unlikely]] return; }
L_0010A378:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0010A41C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010A41C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A39Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010A39Cu) [[unlikely]] return; }
L_0010A39C:
    set32(c.r[3], 0u + 5u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0010A3A8u);  goto L_0010A3AC; }
L_0010A3AC:
    c.r[16].d[0] = c.hi.d[0];
    set32(c.r[16], c.r[16].w[0] + 7u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3BCu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010A3BCu) [[unlikely]] return; }
L_0010A3BC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3CCu);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x0010A3CCu) [[unlikely]] return; }
L_0010A3CC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010A410; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A404u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0010A404u) [[unlikely]] return; }
L_0010A404:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A410u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0010A410u) [[unlikely]] return; }
L_0010A410:
    set32(c.r[3], ld32((c.r[17].w[0] + 224u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 480u), c.r[2].w[0]);
    c.budget -= 3;
L_0010A41C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[4].w[0] - 31800u)));
    set32(c.r[3], ld32((c.r[5].w[0] - 31804u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] - 31800u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010A5D4; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st32((c.r[19].w[0] - 31816u), c.r[2].w[0]);
    st32((c.r[5].w[0] - 31804u), c.r[3].w[0]);
    st32((c.r[4].w[0] - 31800u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A5D4; } }
L_0010A45C:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[20].w[0] + 96u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A470u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0010A470u) [[unlikely]] return; }
L_0010A470:
    set32(c.r[6], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A490u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010A490u) [[unlikely]] return; }
L_0010A490:
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[17], c.r[29].w[0] + 16u);
    set32(c.r[4], ld32((c.r[20].w[0] + 576u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 948u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[13] = c.r[1].w[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A4BCu);  if (depth < kMaxDepth) unit_0067(c, 265u, depth + 1u); else { c.pc = 0x0029E890u; return; } if (c.pc != 0x0010A4BCu) [[unlikely]] return; }
L_0010A4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010A5D4; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A4DCu);  if (depth < kMaxDepth) unit_0061(c, 115u, depth + 1u); else { c.pc = 0x002853E0u; return; } if (c.pc != 0x0010A4DCu) [[unlikely]] return; }
L_0010A4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A5D4; } }
L_0010A4E4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A4FCu);  if (depth < kMaxDepth) unit_0088(c, 19u, depth + 1u); else { c.pc = 0x003202D0u; return; } if (c.pc != 0x0010A4FCu) [[unlikely]] return; }
L_0010A4FC:
    st32((c.r[16].w[0] - 31900u), c.r[17].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A508u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x0010A508u) [[unlikely]] return; }
L_0010A508:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A518u);  if (depth < kMaxDepth) unit_009B(c, 415u, depth + 1u); else { c.pc = 0x0036F550u; return; } if (c.pc != 0x0010A518u) [[unlikely]] return; }
L_0010A518:
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 1505u);
    st32((c.r[2].w[0] + 652u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A538u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010A538u) [[unlikely]] return; }
L_0010A538:
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[22].w[0] + 14208u);
    set32(c.r[6], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[2] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2540000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x464F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 37888ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 7700u), c.r[6].w[0]);
    st32((c.r[18].w[0] + 128u), c.f[2]);
    st32((c.r[18].w[0] + 132u), c.f[0]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 148u), 0u);
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A9A8; } }
L_0010A590:
    set32(c.r[17], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_0010A88C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[5].w[0] - 31904u)));
    set32(c.r[4], 0u + 5000u);
    st16((c.r[2].w[0] + 962u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010A5E0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 592u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010A5D0; } }
    set32(c.r[2], 0u + 2u);
    st32((c.r[19].w[0] + 8488u), c.r[2].w[0]);
    c.budget -= 2;
L_0010A5D0:
    st32((c.r[5].w[0] - 31904u), 0u);
    c.budget -= 1;
L_0010A5D4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A9A8; } }
L_0010A5E0:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A5ECu);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010A5ECu) [[unlikely]] return; }
L_0010A5EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A5D4u | kUnwind; return; } goto L_0010A5D4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31792u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010A628; } }
    st32((c.r[3].w[0] - 31792u), c.r[16].w[0]);
    set32(c.r[2], 0u + 2u);
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    st32((c.r[18].w[0] + 208u), 0u);
    st32((c.r[18].w[0] + 212u), 0u);
    st32((c.r[18].w[0] + 216u), 0u);
    st16((c.r[18].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_0010A628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[16], ld32((c.r[2].w[0] - 31808u)));
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A63Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010A63Cu) [[unlikely]] return; }
L_0010A63C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A64Cu);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x0010A64Cu) [[unlikely]] return; }
L_0010A64C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010A69C; } }
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A684u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0010A684u) [[unlikely]] return; }
L_0010A684:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A690u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0010A690u) [[unlikely]] return; }
L_0010A690:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A6A0; } }
L_0010A69C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010A6A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A5D4u | kUnwind; return; } goto L_0010A5D4; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[17], c.r[29].w[0] + 32u);
    set32(c.r[2], 0u - 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[3].w[0] + 236u), c.r[2].w[0]);
    set32(c.r[5], c.r[20].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6C8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0010A6C8u) [[unlikely]] return; }
L_0010A6C8:
    set32(c.r[6], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010A6E8u) [[unlikely]] return; }
L_0010A6E8:
    set32(c.r[2], 0u + 150u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[20].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6FCu);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0010A6FCu) [[unlikely]] return; }
L_0010A6FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010A758; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[4], ld32((c.r[20].w[0] + 576u)));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0] + 948u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[13] = c.r[1].w[0];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A730u);  if (depth < kMaxDepth) unit_0067(c, 265u, depth + 1u); else { c.pc = 0x0029E890u; return; } if (c.pc != 0x0010A730u) [[unlikely]] return; }
L_0010A730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010A880; } }
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A750u);  if (depth < kMaxDepth) unit_0061(c, 115u, depth + 1u); else { c.pc = 0x002853E0u; return; } if (c.pc != 0x0010A750u) [[unlikely]] return; }
L_0010A750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A5D4u | kUnwind; return; } goto L_0010A5D4; } }
L_0010A758:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A764u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010A764u) [[unlikely]] return; }
L_0010A764:
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], 0u + 13248u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0010A774u);  goto L_0010A778; }
L_0010A778:
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[4], c.r[22].w[0] + 14208u);
    set32(c.r[7], ld32((c.r[18].w[0] - 31808u)));
    set32(c.r[5], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    c.r[8].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 148u), 0u);
    c.budget -= 11;
    { const bool t = c.r[7].d[0] != c.r[5].d[0];  if (t) { goto L_0010A7B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31864u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A7E8; } }
L_0010A7B8:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_0010A7D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 31848u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A7E8; } }
L_0010A7D8:
    set32(c.r[3], c.r[7].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], c.r[2].w[0] - 31888u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 4;
L_0010A7E8:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[16], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A808u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010A808u) [[unlikely]] return; }
L_0010A808:
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], 0u + 13248u);
    set32(c.r[6], c.r[22].w[0] + 14208u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[16].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A830u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0010A830u) [[unlikely]] return; }
L_0010A830:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 6u);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0010A844u);  goto L_0010A848; }
L_0010A848:
    set32(c.r[3], ld32((c.r[18].w[0] - 31808u)));
    c.r[4].d[0] = c.hi.d[0];
    if (c.r[4].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0010A868; } }
    st32((c.r[18].w[0] - 31808u), c.r[5].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A880; } }
L_0010A868:
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[2].sd[0] < 6ll ? 1ull : 0ull;
    st32((c.r[18].w[0] - 31808u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010A880; } }
    st32((c.r[18].w[0] - 31808u), c.r[6].w[0]);
    c.budget -= 1;
L_0010A880:
    st16((c.r[20].w[0] + 514u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A5D4u | kUnwind; return; } goto L_0010A5D4; } }
L_0010A88C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0010A988; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[2], 0u + 31u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[3].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 22480u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A8BCu);  if (depth < kMaxDepth) unit_0088(c, 19u, depth + 1u); else { c.pc = 0x003202D0u; return; } if (c.pc != 0x0010A8BCu) [[unlikely]] return; }
L_0010A8BC:
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], 0u + 5000u);
    set32(c.r[4], c.r[18].w[0] + 10280u);
    st32((c.r[3].w[0] + 236u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    st32((c.r[2].w[0] + 264u), c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    st16((c.r[3].w[0] + 962u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A8E4u);  if (depth < kMaxDepth) unit_009E(c, 69u, depth + 1u); else { c.pc = 0x00378A08u; return; } if (c.pc != 0x0010A8E4u) [[unlikely]] return; }
L_0010A8E4:
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[3], 0u + 1465u);
    st32((c.r[2].w[0] + 244u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0010A904; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 31796u), c.r[17].w[0]);
    c.budget -= 2;
L_0010A904:
    set32(c.r[2], c.r[4].w[0] - 95u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010A938; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31796u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010A938; } }
    set32(c.r[2], ld32((c.r[4].w[0] - 31824u)));
    st32((c.r[3].w[0] - 31796u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] - 31824u), c.r[2].w[0]);
    c.budget -= 4;
L_0010A938:
    set32(c.r[2], ld32((c.r[4].w[0] - 31824u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010A9A4; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A958u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0010A958u) [[unlikely]] return; }
L_0010A958:
    set32(c.r[4], ld32((c.r[20].w[0] + 196u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A968u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0010A968u) [[unlikely]] return; }
L_0010A968:
    set32(c.r[2], c.r[19].w[0] + 8488u);
    set32(c.r[3], ld32((c.r[2].w[0] + 592u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010A9A4; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[19].w[0] + 8488u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010A9A4; } }
L_0010A988:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0010A9A4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 196u)));
    st16((c.r[2].w[0] + 962u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[20].w[0] + 196u)));
    st32((c.r[3].w[0] + 264u), 0u);
    c.budget -= 4;
L_0010A9A4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010A9A8:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010A9E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[17]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[7], 0u + 1600u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[6].w[0] - 31804u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31832u);
    st32((c.r[8].w[0] - 31896u), c.r[7].w[0]);
    st32((c.r[5].w[0] - 31808u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[10].w[0] - 31792u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[11].w[0] - 31904u), 0u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[12].w[0] - 31796u), 0u);
    st32((c.r[13].w[0] - 31824u), 0u);
    st32((c.r[14].w[0] - 31900u), 0u);
    st32((c.r[15].w[0] - 31812u), 0u);
    st32((c.r[16].w[0] - 31820u), 0u);
    st32((c.r[17].w[0] - 31816u), 0u);
    st32((c.r[9].w[0] - 31800u), 0u);
    c.budget -= 36;
L_0010AA70:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AA70u | kUnwind; return; } goto L_0010AA70; } }
    set32(c.r[5], c.r[6].w[0] + 8488u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00110000u);
    set32(c.r[2], c.r[2].w[0] - 25464u);
    set32(c.r[3], ld32((c.r[5].w[0] + 592u)));
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010AAA8; } }
    st32((c.r[6].w[0] + 8488u), 0u);
    c.budget -= 1;
L_0010AAA8:
    set32(c.r[2], 0u + 3u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0]) & ~15u, c.r[17]);
    st32((c.r[5].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 88u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 100u), 0u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 56u), 0u);
    st32((c.r[5].w[0] + 64u), c.r[4].w[0]);
    st32((c.r[5].w[0] + 24u), 0u);
    st32((c.r[5].w[0] + 28u), 0u);
    st32((c.r[5].w[0] + 92u), 0u);
    st32((c.r[5].w[0] + 32u), 0u);
    st32((c.r[5].w[0] + 96u), 0u);
    st32((c.r[5].w[0] + 36u), 0u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010AB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0010AB7C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010AB6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 8488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AB30u);  if (depth < kMaxDepth) unit_0063(c, 362u, depth + 1u); else { c.pc = 0x0028F238u; return; } if (c.pc != 0x0010AB30u) [[unlikely]] return; }
L_0010AB30:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] + 9088u);
    set32(c.r[2], c.r[2].w[0] - 15744u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AB4Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010AB4Cu) [[unlikely]] return; }
L_0010AB4C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15760u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AB64u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0010AB64u) [[unlikely]] return; }
L_0010AB64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010AB7C; } }
L_0010AB6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 27200u);
    st32((c.r[3].w[0] + 9084u), c.r[2].w[0]);
    c.budget -= 4;
L_0010AB7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010AB90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ABB0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010ABB0u) [[unlikely]] return; }
L_0010ABB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ABC0u);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x0010ABC0u) [[unlikely]] return; }
L_0010ABC0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010ABD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010AC14; } }
L_0010ABD8:
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC04u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0010AC04u) [[unlikely]] return; }
    goto L_0010AC04;
L_0010AC00:
    c.budget -= 1;
L_0010AC04:
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC10u);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0010AC10u) [[unlikely]] return; }
L_0010AC10:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010AC14:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010AC30:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31900u)));
    c.r[2].d[0] = c.r[2].sd[0] < 601ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010AC50; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010AC50:
    st32((c.r[3].w[0] - 31900u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010AC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC78u);  if (depth < kMaxDepth) unit_0002(c, 310u, depth + 1u); else { c.pc = 0x0010AB00u; return; } if (c.pc != 0x0010AC78u) [[unlikely]] return; }
L_0010AC78:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010AC88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ACA0u);  if (depth < kMaxDepth) unit_0002(c, 310u, depth + 1u); else { c.pc = 0x0010AB00u; return; } if (c.pc != 0x0010ACA0u) [[unlikely]] return; }
L_0010ACA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010ACB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[3].w[0] + 9104u);
    set32(c.r[2], ld32((c.r[4].w[0] + 592u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010ACC8; } }
    st32((c.r[3].w[0] + 9104u), 0u);
    c.budget -= 1;
L_0010ACC8:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), 0u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[4].w[0] + 92u), 0u);
    st32((c.r[4].w[0] + 32u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010AD00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0010AD44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0010AD34; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[4], c.r[4].w[0] + 9104u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD2Cu);  if (depth < kMaxDepth) unit_0063(c, 362u, depth + 1u); else { c.pc = 0x0028F238u; return; } if (c.pc != 0x0010AD2Cu) [[unlikely]] return; }
L_0010AD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010AD44; } }
L_0010AD34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[2], c.r[2].w[0] + 27200u);
    st32((c.r[3].w[0] + 9700u), c.r[2].w[0]);
    c.budget -= 4;
L_0010AD44:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010AD58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD70u);  if (depth < kMaxDepth) unit_0002(c, 327u, depth + 1u); else { c.pc = 0x0010AD00u; return; } if (c.pc != 0x0010AD70u) [[unlikely]] return; }
L_0010AD70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010AD80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD98u);  if (depth < kMaxDepth) unit_0002(c, 327u, depth + 1u); else { c.pc = 0x0010AD00u; return; } if (c.pc != 0x0010AD98u) [[unlikely]] return; }
L_0010AD98:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010ADA8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ADF0u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010ADF0u) [[unlikely]] return; }
L_0010ADF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010AE4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], 0u + 13248u);
    set32(c.r[17], c.r[2].w[0] + 14208u);
    c.budget -= 3;
L_0010AE08:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010AE30; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AE28u);  if (depth < kMaxDepth) unit_007A(c, 266u, depth + 1u); else { c.pc = 0x002EB990u; return; } if (c.pc != 0x0010AE28u) [[unlikely]] return; }
L_0010AE28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010AE70; } }
L_0010AE30:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AE40u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010AE40u) [[unlikely]] return; }
L_0010AE40:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AE08u | kUnwind; return; } goto L_0010AE08; } }
L_0010AE4C:
    c.r[2].d[0] = ld16((c.r[18].w[0] + 234u));
    set32(c.r[2], c.r[2].w[0] - 66u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010AEC8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 44u)));
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010AEC8; } }
L_0010AE70:
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AE8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010AE8Cu) [[unlikely]] return; }
L_0010AE8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    st32((c.r[2].w[0] - 31128u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AEA4u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0010AEA4u) [[unlikely]] return; }
L_0010AEA4:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[4], 0u + 1000u);
    st32((c.r[18].w[0] + 480u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B324; } }
L_0010AEC8:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFF70000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], 0u + 50u);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[18].w[0] + 480u), c.r[5].w[0]);
    set32(c.r[4], c.r[20].w[0] + 9872u);
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AEFCu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010AEFCu) [[unlikely]] return; }
L_0010AEFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010AFF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[30], 0u + 65u);
    set32(c.r[23], c.r[2].w[0] + 14208u);
    set32(c.r[22], 0u + 13248u);
    set32(c.r[21], 0u + 1722u);
    set32(c.r[19], 0u + 1724u);
    c.budget -= 6;
L_0010AF20:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010AFD4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 234u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_0010AFD4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[3].w[0] + c.r[23].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_0010AFCC; } }
    set32(c.r[4], 0u + 1722u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF5Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010AF5Cu) [[unlikely]] return; }
L_0010AF5C:
    set32(c.r[3], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010AFD4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010AF8Cu) [[unlikely]] return; }
L_0010AF8C:
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    st32((c.r[2].w[0] - 31128u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AFA4u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0010AFA4u) [[unlikely]] return; }
L_0010AFA4:
    set32(c.r[4], 0u + 1000u);
    c.r[3].d[0] = ld64((c.r[18].w[0] + 8u));
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st32((c.r[18].w[0] + 480u), 0u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    st64((c.r[18].w[0] + 8u), c.r[3].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B328; } }
L_0010AFCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AE70u | kUnwind; return; } goto L_0010AE70; } }
L_0010AFD4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AFE4u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010AFE4u) [[unlikely]] return; }
L_0010AFE4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AF20u | kUnwind; return; } goto L_0010AF20; } }
L_0010AFF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(601ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AE70u | kUnwind; return; } goto L_0010AE70; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B010u);  if (depth < kMaxDepth) unit_0061(c, 86u, depth + 1u); else { c.pc = 0x00284E60u; return; } if (c.pc != 0x0010B010u) [[unlikely]] return; }
L_0010B010:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010B040; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[19].w[0] + 14208u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[2], 0u + 1723u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0010B324; } }
L_0010B040:
    set32(c.r[2], c.r[19].w[0] + 14208u);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.f[5] = ld32((c.r[2].w[0] + 26632u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 13376u));
    c.f[1] = ld32((c.r[2].w[0] + 13380u));
    c.f[2] = ld32((c.r[2].w[0] + 13384u));
    c.f[3] = ld32((c.r[2].w[0] + 26624u));
    c.f[4] = ld32((c.r[2].w[0] + 26628u));
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] + 144u);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[3]);
    st32((c.r[29].w[0] + 20u), c.f[4]);
    st32((c.r[29].w[0] + 24u), c.f[5]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B08Cu);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0010B08Cu) [[unlikely]] return; }
L_0010B08C:
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B0A0u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0010B0A0u) [[unlikely]] return; }
L_0010B0A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] - 31128u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010B0FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0010B0FC; } }
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[6], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B0E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010B0E8u) [[unlikely]] return; }
L_0010B0E8:
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    st32((c.r[17].w[0] - 31128u), 0u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B310; } }
L_0010B0FC:
    set32(c.r[2], ld32((c.r[17].w[0] - 31128u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { goto L_0010B220; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B118u);  if (depth < kMaxDepth) unit_0066(c, 99u, depth + 1u); else { c.pc = 0x00298DC0u; return; } if (c.pc != 0x0010B118u) [[unlikely]] return; }
L_0010B118:
    set32(c.r[20], 0u + 13248u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B12Cu);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0010B12Cu) [[unlikely]] return; }
L_0010B12C:
    set32(c.r[19], c.r[19].w[0] + 14208u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B140u);  if (depth < kMaxDepth) unit_0066(c, 100u, depth + 1u); else { c.pc = 0x00298DD8u; return; } if (c.pc != 0x0010B140u) [[unlikely]] return; }
L_0010B140:
    set32(c.r[3], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[4], 0u + 105u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B160u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0010B160u) [[unlikely]] return; }
L_0010B160:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 65u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B170u);  if (depth < kMaxDepth) unit_0098(c, 197u, depth + 1u); else { c.pc = 0x00362718u; return; } if (c.pc != 0x0010B170u) [[unlikely]] return; }
L_0010B170:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_0010B1A0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B198u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010B198u) [[unlikely]] return; }
L_0010B198:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AEA4u | kUnwind; return; } goto L_0010AEA4; } }
L_0010B1A0:
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[2].w[0] + 11568u);
    st32((c.r[17].w[0] - 31128u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 11568u), c.f[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 12u));
    st32((c.r[3].w[0] + 8u), c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B1D8u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0010B1D8u) [[unlikely]] return; }
L_0010B1D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B1E4u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0010B1E4u) [[unlikely]] return; }
L_0010B1E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010B2A0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], 0u + 1723u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B204u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010B204u) [[unlikely]] return; }
L_0010B204:
    mmi::mult(c, 0, c.r[16].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[4].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B328; } }
L_0010B220:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[4], 0u + 1723u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0010B2B8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 11568u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B254u);  if (depth < kMaxDepth) unit_0065(c, 230u, depth + 1u); else { c.pc = 0x00296830u; return; } if (c.pc != 0x0010B254u) [[unlikely]] return; }
L_0010B254:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B260u);  if (depth < kMaxDepth) unit_0065(c, 294u, depth + 1u); else { c.pc = 0x00297228u; return; } if (c.pc != 0x0010B260u) [[unlikely]] return; }
L_0010B260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010B2A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], 0u + 1723u);
    st32((c.r[16].w[0] + 148u), c.f[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B28Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010B28Cu) [[unlikely]] return; }
L_0010B28C:
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B328; } }
L_0010B2A0:
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B2ACu);  if (depth < kMaxDepth) unit_0061(c, 243u, depth + 1u); else { c.pc = 0x00286658u; return; } if (c.pc != 0x0010B2ACu) [[unlikely]] return; }
L_0010B2AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B328; } }
L_0010B2B8:
    set32(c.r[4], 0u + 1723u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B2C4u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010B2C4u) [[unlikely]] return; }
L_0010B2C4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010B324; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B2F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010B2F4u) [[unlikely]] return; }
L_0010B2F4:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 8u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00080000u);
    st32((c.r[17].w[0] - 31128u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    st64((c.r[18].w[0] + 8u), c.r[2].d[0]);
    c.budget -= 7;
L_0010B310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B318u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0010B318u) [[unlikely]] return; }
L_0010B318:
    set32(c.r[2], 0u + 1000u);
    st32((c.r[18].w[0] + 480u), 0u);
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0010B324:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010B328:
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
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B360:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 13248u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010B3D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B3C4u);  if (depth < kMaxDepth) unit_0089(c, 20u, depth + 1u); else { c.pc = 0x00324568u; return; } if (c.pc != 0x0010B3C4u) [[unlikely]] return; }
L_0010B3C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 31120u), 0u);
    st32((c.r[3].w[0] - 31116u), 0u);
    st32((c.r[19].w[0] - 31140u), 0u);
    c.budget -= 5;
L_0010B3D8:
    set32(c.r[2], ld32((c.r[19].w[0] - 31140u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[8] = ld32((c.r[16].w[0] + 13376u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 13380u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[4] = ld32((c.r[16].w[0] + 13384u));
    c.f[5] = ld32((c.r[16].w[0] + 26624u));
    c.f[6] = ld32((c.r[16].w[0] + 26628u));
    c.f[7] = ld32((c.r[16].w[0] + 26632u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12288ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46D90000u);
    c.r[1].d[0] = c.r[1].d[0] | 5632ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 57344ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[19].w[0] - 31140u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[8]);
    st32((c.r[29].w[0] + 20u), c.f[3]);
    st32((c.r[29].w[0] + 24u), c.f[4]);
    st32((c.r[29].w[0] + 32u), c.f[5]);
    st32((c.r[29].w[0] + 36u), c.f[6]);
    st32((c.r[29].w[0] + 40u), c.f[7]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B454u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0010B454u) [[unlikely]] return; }
L_0010B454:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B468u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0010B468u) [[unlikely]] return; }
L_0010B468:
    set32(c.r[2], ld32((c.r[16].w[0] + 13284u)));
    c.f[1] = c.f[0];
    set32(c.r[3], 0u + 2984u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010B49C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B090000u);
    c.r[1].d[0] = c.r[1].d[0] | 21568ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0010B4C8; } }
L_0010B49C:
    set32(c.r[2], ld32((c.r[16].w[0] + 26532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010B57C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B090000u);
    c.r[1].d[0] = c.r[1].d[0] | 21568ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010B57C; } }
L_0010B4C8:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B4E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010B4E4u) [[unlikely]] return; }
L_0010B4E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 1763u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B4FCu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010B4FCu) [[unlikely]] return; }
L_0010B4FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[17], c.r[2].w[0] + 26848u);
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B51Cu);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010B51Cu) [[unlikely]] return; }
L_0010B51C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010B554; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B53Cu);  if (depth < kMaxDepth) unit_0093(c, 269u, depth + 1u); else { c.pc = 0x0034EB90u; return; } if (c.pc != 0x0010B53Cu) [[unlikely]] return; }
L_0010B53C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B548u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0010B548u) [[unlikely]] return; }
L_0010B548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B554u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0010B554u) [[unlikely]] return; }
L_0010B554:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B564u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010B564u) [[unlikely]] return; }
L_0010B564:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010B798; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B798; } }
L_0010B57C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[2].w[0] - 12584u);
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010B5A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[19].w[0] - 31140u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 31152u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010B5D8; } }
L_0010B5A8:
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010B5CC; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B5C0u);  if (depth < kMaxDepth) unit_001B(c, 295u, depth + 1u); else { c.pc = 0x0016FCB8u; return; } if (c.pc != 0x0010B5C0u) [[unlikely]] return; }
L_0010B5C0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010B5D0; } }
L_0010B5CC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010B5D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010B63C; } }
L_0010B5D8:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B5F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010B5F4u) [[unlikely]] return; }
L_0010B5F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 1720u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B60Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010B60Cu) [[unlikely]] return; }
L_0010B60C:
    set32(c.r[2], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B628u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010B628u) [[unlikely]] return; }
L_0010B628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010B798; } }
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B798; } }
L_0010B63C:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 1718u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010B6D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31120u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010B768; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 1718u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B674u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010B674u) [[unlikely]] return; }
L_0010B674:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[17], c.r[2].w[0] + 26848u);
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B694u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010B694u) [[unlikely]] return; }
L_0010B694:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010B798; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 6u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B6B4u);  if (depth < kMaxDepth) unit_0093(c, 269u, depth + 1u); else { c.pc = 0x0034EB90u; return; } if (c.pc != 0x0010B6B4u) [[unlikely]] return; }
L_0010B6B4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B6C0u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0010B6C0u) [[unlikely]] return; }
L_0010B6C0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B6CCu);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0010B6CCu) [[unlikely]] return; }
L_0010B6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B798; } }
L_0010B6D4:
    set32(c.r[4], 0u + 1718u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B6E0u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010B6E0u) [[unlikely]] return; }
L_0010B6E0:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010B798; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31120u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010B730; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B71Cu);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010B71Cu) [[unlikely]] return; }
L_0010B71C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010B730; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0010B730:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[16].w[0] - 31120u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    set32(c.r[5], 0u + 1719u);
    st32((c.r[6].w[0] - 31116u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B758u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010B758u) [[unlikely]] return; }
L_0010B758:
    set32(c.r[2], 0u + 6u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B798; } }
L_0010B768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010B798; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B780u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010B780u) [[unlikely]] return; }
L_0010B780:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010B798; } }
    st32((c.r[18].w[0] + 28u), 0u);
    c.budget -= 1;
L_0010B798:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010B7C0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 13248u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 14208u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[29].w[0] + 128u), c.f[20]);
    set32(c.r[4], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010B838; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B824u);  if (depth < kMaxDepth) unit_0089(c, 20u, depth + 1u); else { c.pc = 0x00324568u; return; } if (c.pc != 0x0010B824u) [[unlikely]] return; }
L_0010B824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 31112u), 0u);
    st32((c.r[3].w[0] - 31108u), 0u);
    st32((c.r[19].w[0] - 31136u), 0u);
    c.budget -= 5;
L_0010B838:
    set32(c.r[2], ld32((c.r[19].w[0] - 31136u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[8] = ld32((c.r[16].w[0] + 13376u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 13380u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[4] = ld32((c.r[16].w[0] + 13384u));
    c.f[5] = ld32((c.r[16].w[0] + 26624u));
    c.f[6] = ld32((c.r[16].w[0] + 26628u));
    c.f[7] = ld32((c.r[16].w[0] + 26632u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC52D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12288ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46D80000u);
    c.r[1].d[0] = c.r[1].d[0] | 60416ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5BB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43008ull;
    c.budget -= 18;
L_0010B880:
    c.f[0] = c.r[1].w[0];
    st32((c.r[19].w[0] - 31136u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[8]);
    st32((c.r[29].w[0] + 20u), c.f[3]);
    st32((c.r[29].w[0] + 24u), c.f[4]);
    st32((c.r[29].w[0] + 32u), c.f[5]);
    st32((c.r[29].w[0] + 36u), c.f[6]);
    st32((c.r[29].w[0] + 40u), c.f[7]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B8B4u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0010B8B4u) [[unlikely]] return; }
L_0010B8B4:
    c.f[20] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B8C8u);  if (depth < kMaxDepth) unit_008A(c, 167u, depth + 1u); else { c.pc = 0x0032A5F0u; return; } if (c.pc != 0x0010B8C8u) [[unlikely]] return; }
L_0010B8C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 13284u)));
    c.f[1] = c.f[0];
    set32(c.r[3], 0u + 2984u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010B8FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B090000u);
    c.r[1].d[0] = c.r[1].d[0] | 21568ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0010B928; } }
L_0010B8FC:
    set32(c.r[2], ld32((c.r[16].w[0] + 26532u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0010BA24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B090000u);
    c.r[1].d[0] = c.r[1].d[0] | 21568ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010BA24; } }
L_0010B928:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B944u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010B944u) [[unlikely]] return; }
L_0010B944:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 1797u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B95Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010B95Cu) [[unlikely]] return; }
L_0010B95C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[17], c.r[2].w[0] + 26848u);
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B97Cu);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010B97Cu) [[unlikely]] return; }
L_0010B97C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010B9B4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B99Cu);  if (depth < kMaxDepth) unit_0093(c, 269u, depth + 1u); else { c.pc = 0x0034EB90u; return; } if (c.pc != 0x0010B99Cu) [[unlikely]] return; }
L_0010B99C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9A8u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0010B9A8u) [[unlikely]] return; }
L_0010B9A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9B4u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0010B9B4u) [[unlikely]] return; }
L_0010B9B4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9C4u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010B9C4u) [[unlikely]] return; }
L_0010B9C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010B9FC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9E4u);  if (depth < kMaxDepth) unit_0093(c, 269u, depth + 1u); else { c.pc = 0x0034EB90u; return; } if (c.pc != 0x0010B9E4u) [[unlikely]] return; }
L_0010B9E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9F0u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0010B9F0u) [[unlikely]] return; }
L_0010B9F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9FCu);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0010B9FCu) [[unlikely]] return; }
L_0010B9FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BA0Cu);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010BA0Cu) [[unlikely]] return; }
L_0010BA0C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010BC40; } }
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010BC40; } }
L_0010BA24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[5], c.r[2].w[0] - 12584u);
    set32(c.r[3], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010BA50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[4], ld32((c.r[19].w[0] - 31136u)));
    set32(c.r[3], ld32((c.r[2].w[0] - 31152u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010BA80; } }
L_0010BA50:
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010BA74; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BA68u);  if (depth < kMaxDepth) unit_001B(c, 295u, depth + 1u); else { c.pc = 0x0016FCB8u; return; } if (c.pc != 0x0010BA68u) [[unlikely]] return; }
L_0010BA68:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010BA78; } }
L_0010BA74:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010BA78:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010BAE4; } }
L_0010BA80:
    set32(c.r[2], ld32((c.r[17].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BA9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010BA9Cu) [[unlikely]] return; }
L_0010BA9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 1727u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BAB4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010BAB4u) [[unlikely]] return; }
L_0010BAB4:
    set32(c.r[2], 0u + 6u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BAD0u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010BAD0u) [[unlikely]] return; }
L_0010BAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010BC40; } }
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010BC40; } }
L_0010BAE4:
    set32(c.r[4], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 1725u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010BB7C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31112u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010BC10; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[5], 0u + 1725u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB1Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010BB1Cu) [[unlikely]] return; }
L_0010BB1C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[17], c.r[2].w[0] + 26848u);
    st32((c.r[18].w[0] + 7700u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB3Cu);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010BB3Cu) [[unlikely]] return; }
L_0010BB3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010BC40; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB5Cu);  if (depth < kMaxDepth) unit_0093(c, 269u, depth + 1u); else { c.pc = 0x0034EB90u; return; } if (c.pc != 0x0010BB5Cu) [[unlikely]] return; }
L_0010BB5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB68u);  if (depth < kMaxDepth) unit_0093(c, 345u, depth + 1u); else { c.pc = 0x0034F4C8u; return; } if (c.pc != 0x0010BB68u) [[unlikely]] return; }
L_0010BB68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB74u);  if (depth < kMaxDepth) unit_0093(c, 338u, depth + 1u); else { c.pc = 0x0034F398u; return; } if (c.pc != 0x0010BB74u) [[unlikely]] return; }
L_0010BB74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010BC40; } }
L_0010BB7C:
    set32(c.r[4], 0u + 1725u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB88u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010BB88u) [[unlikely]] return; }
L_0010BB88:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010BC40; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 31112u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010BBD8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BBC4u);  if (depth < kMaxDepth) unit_0093(c, 261u, depth + 1u); else { c.pc = 0x0034EA18u; return; } if (c.pc != 0x0010BBC4u) [[unlikely]] return; }
L_0010BBC4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010BBD8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0010BBD8:
    set32(c.r[3], ld32((c.r[17].w[0] + 196u)));
    set32(c.r[2], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[16].w[0] - 31112u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 228u)));
    set32(c.r[5], 0u + 1726u);
    st32((c.r[6].w[0] - 31108u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BC00u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010BC00u) [[unlikely]] return; }
L_0010BC00:
    set32(c.r[2], 0u + 6u);
    st32((c.r[18].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010BC40; } }
L_0010BC10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31108u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010BC40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BC28u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010BC28u) [[unlikely]] return; }
L_0010BC28:
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010BC40; } }
    st32((c.r[18].w[0] + 28u), 0u);
    c.budget -= 1;
L_0010BC40:
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0010BC68:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[5], 0u + 13248u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    set32(c.r[4], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 52u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 228u)));
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010BCE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BCDCu);  if (depth < kMaxDepth) unit_0089(c, 20u, depth + 1u); else { c.pc = 0x00324568u; return; } if (c.pc != 0x0010BCDCu) [[unlikely]] return; }
L_0010BCDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 31092u), 0u);
    c.budget -= 2;
L_0010BCE4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BCFCu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010BCFCu) [[unlikely]] return; }
L_0010BCFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010BD68; } }
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], 0u + 13248u);
    c.budget -= 2;
L_0010BD10:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010BD4C; } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 234u));
    set32(c.r[2], c.r[2].w[0] - 66u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010BD4C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 228u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[21].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BD44u);  if (depth < kMaxDepth) unit_007A(c, 266u, depth + 1u); else { c.pc = 0x002EB990u; return; } if (c.pc != 0x0010BD44u) [[unlikely]] return; }
L_0010BD44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 31u, depth); } }
L_0010BD4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BD5Cu);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010BD5Cu) [[unlikely]] return; }
L_0010BD5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BD10u | kUnwind; return; } goto L_0010BD10; } }
L_0010BD68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[4].w[0] - 31092u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010BF1C; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[2], 0u + 1701u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010BDB8; } }
    set32(c.r[2], 0u + 1704u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010BDB8; } }
    set32(c.r[2], 0u + 1705u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010BDB8; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0010BDB8; } }
    set32(c.r[2], 0u + 1706u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0010BEF4; } }
L_0010BDB8:
    set32(c.r[2], ld32((c.r[18].w[0] + 196u)));
    set32(c.r[5], 0u + 1724u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 228u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BDD4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0010BDD4u) [[unlikely]] return; }
L_0010BDD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[19].w[0] + 148u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BDF0u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010BDF0u) [[unlikely]] return; }
L_0010BDF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010BED4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[21], 0u + 1000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.budget -= 5;
L_0010BE10:
    set32(c.r[3], ld32((c.r[16].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0010BEB8; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 234u));
    set32(c.r[2], c.r[2].w[0] - 66u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010BEB8; } }
    c.f[0] = ld32((c.r[30].w[0] - 31132u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0010BEB8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 188u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 592u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010BE5C; } }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 1;
L_0010BE5C:
    set32(c.r[6], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[5], 0u + 9u);
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BE7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010BE7Cu) [[unlikely]] return; }
L_0010BE7C:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 204u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 196u)));
    st32((c.r[22].w[0] - 31128u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BE94u);  if (depth < kMaxDepth) unit_0061(c, 244u, depth + 1u); else { c.pc = 0x00286668u; return; } if (c.pc != 0x0010BE94u) [[unlikely]] return; }
L_0010BE94:
    set32(c.r[2], ld32((c.r[16].w[0] + 224u)));
    st32((c.r[2].w[0] + 480u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 224u)));
    st16((c.r[3].w[0] + 514u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 224u)));
    c.r[2].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[17].d[0];
    st64((c.r[4].w[0] + 8u), c.r[2].d[0]);
    st16((c.r[16].w[0] + 962u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
L_0010BEB8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BEC8u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010BEC8u) [[unlikely]] return; }
L_0010BEC8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BE10u | kUnwind; return; } goto L_0010BE10; } }
L_0010BED4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 6u);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] - 31132u), c.f[0]);
    st32((c.r[19].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 32u, depth); } }
L_0010BEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BEFCu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010BEFCu) [[unlikely]] return; }
L_0010BEFC:
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 31u, depth); } }
    st32((c.r[19].w[0] + 28u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 31u, depth); } }
L_0010BF1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.f[1] = ld32((c.r[2].w[0] - 31144u));
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] - 31132u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0010BF60; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[2].w[0] - 31104u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[30].w[0] - 31132u), 0u);
    st32((c.r[4].w[0] - 31092u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 32u, depth); } }
L_0010BF60:
    set32(c.r[4], c.r[20].w[0] + 9872u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BF70u);  if (depth < kMaxDepth) unit_0062(c, 103u, depth + 1u); else { c.pc = 0x00289BF8u; return; } if (c.pc != 0x0010BF70u) [[unlikely]] return; }
L_0010BF70:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 7u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[23], 0u + 13248u);
    set32(c.r[22], c.r[2].w[0] + 14208u);
    set32(c.r[21], 0u + 1723u);
    c.budget -= 5;
L_0010BF90:
    set32(c.r[2], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 5u, depth); } }
    c.r[2].d[0] = ld16((c.r[2].w[0] + 234u));
    set32(c.r[2], c.r[2].w[0] - 66u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 5u, depth); } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 228u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[23].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[22].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[21].d[0];  if (t) { [[clang::musttail]] return unit_0003(c, 5u, depth); } }
    set32(c.r[4], 0u + 1723u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BFD4u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0010BFD4u) [[unlikely]] return; }
L_0010BFD4:
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0003(c, 5u, depth); } }
    set32(c.r[2], ld32((c.r[18].w[0] + 128u)));
    set32(c.r[5], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C004u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010C004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0003(c, 2u, depth);
}

}
