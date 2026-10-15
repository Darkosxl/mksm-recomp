#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0007[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0,
    0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0,
    0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 114, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0,
    216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0,
    374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0,
    413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0,
};

void unit_0007(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0011C000;
    case 2u: goto L_0011C01C;
    case 3u: goto L_0011C02C;
    case 4u: goto L_0011C050;
    case 5u: goto L_0011C054;
    case 6u: goto L_0011C070;
    case 7u: goto L_0011C194;
    case 8u: goto L_0011C1C0;
    case 9u: goto L_0011C1E0;
    case 10u: goto L_0011C234;
    case 11u: goto L_0011C250;
    case 12u: goto L_0011C258;
    case 13u: goto L_0011C260;
    case 14u: goto L_0011C278;
    case 15u: goto L_0011C290;
    case 16u: goto L_0011C2A8;
    case 17u: goto L_0011C2B0;
    case 18u: goto L_0011C2B8;
    case 19u: goto L_0011C2C0;
    case 20u: goto L_0011C2D0;
    case 21u: goto L_0011C2F8;
    case 22u: goto L_0011C35C;
    case 23u: goto L_0011C368;
    case 24u: goto L_0011C378;
    case 25u: goto L_0011C3B8;
    case 26u: goto L_0011C3CC;
    case 27u: goto L_0011C3E0;
    case 28u: goto L_0011C41C;
    case 29u: goto L_0011C434;
    case 30u: goto L_0011C458;
    case 31u: goto L_0011C480;
    case 32u: goto L_0011C490;
    case 33u: goto L_0011C4BC;
    case 34u: goto L_0011C4E0;
    case 35u: goto L_0011C4EC;
    case 36u: goto L_0011C508;
    case 37u: goto L_0011C540;
    case 38u: goto L_0011C570;
    case 39u: goto L_0011C584;
    case 40u: goto L_0011C5A0;
    case 41u: goto L_0011C5DC;
    case 42u: goto L_0011C5E8;
    case 43u: goto L_0011C5FC;
    case 44u: goto L_0011C638;
    case 45u: goto L_0011C650;
    case 46u: goto L_0011C66C;
    case 47u: goto L_0011C67C;
    case 48u: goto L_0011C690;
    case 49u: goto L_0011C6B4;
    case 50u: goto L_0011C6CC;
    case 51u: goto L_0011C6DC;
    case 52u: goto L_0011C70C;
    case 53u: goto L_0011C728;
    case 54u: goto L_0011C74C;
    case 55u: goto L_0011C75C;
    case 56u: goto L_0011C780;
    case 57u: goto L_0011C794;
    case 58u: goto L_0011C7A8;
    case 59u: goto L_0011C7BC;
    case 60u: goto L_0011C7C4;
    case 61u: goto L_0011C7D8;
    case 62u: goto L_0011C7E8;
    case 63u: goto L_0011C850;
    case 64u: goto L_0011C870;
    case 65u: goto L_0011C8BC;
    case 66u: goto L_0011C8E0;
    case 67u: goto L_0011C904;
    case 68u: goto L_0011C928;
    case 69u: goto L_0011C940;
    case 70u: goto L_0011C974;
    case 71u: goto L_0011C988;
    case 72u: goto L_0011C998;
    case 73u: goto L_0011C9C0;
    case 74u: goto L_0011C9EC;
    case 75u: goto L_0011C9F8;
    case 76u: goto L_0011CA10;
    case 77u: goto L_0011CA20;
    case 78u: goto L_0011CA38;
    case 79u: goto L_0011CA48;
    case 80u: goto L_0011CA94;
    case 81u: goto L_0011CAA8;
    case 82u: goto L_0011CAF0;
    case 83u: goto L_0011CB00;
    case 84u: goto L_0011CB24;
    case 85u: goto L_0011CB58;
    case 86u: goto L_0011CB98;
    case 87u: goto L_0011CBB0;
    case 88u: goto L_0011CBD0;
    case 89u: goto L_0011CBE8;
    case 90u: goto L_0011CC00;
    case 91u: goto L_0011CC10;
    case 92u: goto L_0011CC18;
    case 93u: goto L_0011CC20;
    case 94u: goto L_0011CC44;
    case 95u: goto L_0011CC68;
    case 96u: goto L_0011CC84;
    case 97u: goto L_0011CCA8;
    case 98u: goto L_0011CCC0;
    case 99u: goto L_0011CCD8;
    case 100u: goto L_0011CCE8;
    case 101u: goto L_0011CCF4;
    case 102u: goto L_0011CD04;
    case 103u: goto L_0011CD18;
    case 104u: goto L_0011CD30;
    case 105u: goto L_0011CD40;
    case 106u: goto L_0011CD78;
    case 107u: goto L_0011CDB8;
    case 108u: goto L_0011CDFC;
    case 109u: goto L_0011CE18;
    case 110u: goto L_0011CE48;
    case 111u: goto L_0011CE68;
    case 112u: goto L_0011CEA4;
    case 113u: goto L_0011CF00;
    case 114u: goto L_0011CF10;
    case 115u: goto L_0011CF14;
    case 116u: goto L_0011CF2C;
    case 117u: goto L_0011CF3C;
    case 118u: goto L_0011CF5C;
    case 119u: goto L_0011CF64;
    case 120u: goto L_0011CF6C;
    case 121u: goto L_0011CF94;
    case 122u: goto L_0011CFA0;
    case 123u: goto L_0011CFA8;
    case 124u: goto L_0011CFB0;
    case 125u: goto L_0011CFD8;
    case 126u: goto L_0011D028;
    case 127u: goto L_0011D080;
    case 128u: goto L_0011D090;
    case 129u: goto L_0011D0A0;
    case 130u: goto L_0011D0B0;
    case 131u: goto L_0011D0C8;
    case 132u: goto L_0011D118;
    case 133u: goto L_0011D128;
    case 134u: goto L_0011D12C;
    case 135u: goto L_0011D13C;
    case 136u: goto L_0011D14C;
    case 137u: goto L_0011D15C;
    case 138u: goto L_0011D164;
    case 139u: goto L_0011D16C;
    case 140u: goto L_0011D190;
    case 141u: goto L_0011D19C;
    case 142u: goto L_0011D1B0;
    case 143u: goto L_0011D1BC;
    case 144u: goto L_0011D1C4;
    case 145u: goto L_0011D1CC;
    case 146u: goto L_0011D1F8;
    case 147u: goto L_0011D220;
    case 148u: goto L_0011D258;
    case 149u: goto L_0011D29C;
    case 150u: goto L_0011D2E4;
    case 151u: goto L_0011D308;
    case 152u: goto L_0011D338;
    case 153u: goto L_0011D360;
    case 154u: goto L_0011D370;
    case 155u: goto L_0011D388;
    case 156u: goto L_0011D3A8;
    case 157u: goto L_0011D3B0;
    case 158u: goto L_0011D3B8;
    case 159u: goto L_0011D3D0;
    case 160u: goto L_0011D3DC;
    case 161u: goto L_0011D3E4;
    case 162u: goto L_0011D3EC;
    case 163u: goto L_0011D410;
    case 164u: goto L_0011D430;
    case 165u: goto L_0011D440;
    case 166u: goto L_0011D450;
    case 167u: goto L_0011D464;
    case 168u: goto L_0011D490;
    case 169u: goto L_0011D4D8;
    case 170u: goto L_0011D548;
    case 171u: goto L_0011D578;
    case 172u: goto L_0011D588;
    case 173u: goto L_0011D5C8;
    case 174u: goto L_0011D5D0;
    case 175u: goto L_0011D5F8;
    case 176u: goto L_0011D608;
    case 177u: goto L_0011D640;
    case 178u: goto L_0011D648;
    case 179u: goto L_0011D668;
    case 180u: goto L_0011D690;
    case 181u: goto L_0011D6C0;
    case 182u: goto L_0011D6D0;
    case 183u: goto L_0011D6EC;
    case 184u: goto L_0011D720;
    case 185u: goto L_0011D750;
    case 186u: goto L_0011D778;
    case 187u: goto L_0011D798;
    case 188u: goto L_0011D7A8;
    case 189u: goto L_0011D7B8;
    case 190u: goto L_0011D7D0;
    case 191u: goto L_0011D7F0;
    case 192u: goto L_0011D800;
    case 193u: goto L_0011D80C;
    case 194u: goto L_0011D828;
    case 195u: goto L_0011D848;
    case 196u: goto L_0011D888;
    case 197u: goto L_0011D8A8;
    case 198u: goto L_0011D8E8;
    case 199u: goto L_0011D920;
    case 200u: goto L_0011D938;
    case 201u: goto L_0011D968;
    case 202u: goto L_0011D9B0;
    case 203u: goto L_0011D9D4;
    case 204u: goto L_0011DA30;
    case 205u: goto L_0011DA88;
    case 206u: goto L_0011DAC0;
    case 207u: goto L_0011DAD8;
    case 208u: goto L_0011DB08;
    case 209u: goto L_0011DB30;
    case 210u: goto L_0011DB68;
    case 211u: goto L_0011DB88;
    case 212u: goto L_0011DBA4;
    case 213u: goto L_0011DBC0;
    case 214u: goto L_0011DBE8;
    case 215u: goto L_0011DBF8;
    case 216u: goto L_0011DC00;
    case 217u: goto L_0011DC10;
    case 218u: goto L_0011DC20;
    case 219u: goto L_0011DC2C;
    case 220u: goto L_0011DC58;
    case 221u: goto L_0011DC84;
    case 222u: goto L_0011DC94;
    case 223u: goto L_0011DCA8;
    case 224u: goto L_0011DCB8;
    case 225u: goto L_0011DCC0;
    case 226u: goto L_0011DCCC;
    case 227u: goto L_0011DCE0;
    case 228u: goto L_0011DD18;
    case 229u: goto L_0011DD38;
    case 230u: goto L_0011DD48;
    case 231u: goto L_0011DD58;
    case 232u: goto L_0011DD6C;
    case 233u: goto L_0011DD98;
    case 234u: goto L_0011DDD8;
    case 235u: goto L_0011DE08;
    case 236u: goto L_0011DE30;
    case 237u: goto L_0011DE70;
    case 238u: goto L_0011DE80;
    case 239u: goto L_0011DE98;
    case 240u: goto L_0011DED8;
    case 241u: goto L_0011DF10;
    case 242u: goto L_0011DF20;
    case 243u: goto L_0011DF34;
    case 244u: goto L_0011DF70;
    case 245u: goto L_0011DFA0;
    case 246u: goto L_0011DFDC;
    case 247u: goto L_0011DFFC;
    case 248u: goto L_0011E010;
    case 249u: goto L_0011E028;
    case 250u: goto L_0011E060;
    case 251u: goto L_0011E070;
    case 252u: goto L_0011E084;
    case 253u: goto L_0011E098;
    case 254u: goto L_0011E0D8;
    case 255u: goto L_0011E104;
    case 256u: goto L_0011E138;
    case 257u: goto L_0011E148;
    case 258u: goto L_0011E158;
    case 259u: goto L_0011E170;
    case 260u: goto L_0011E180;
    case 261u: goto L_0011E1B8;
    case 262u: goto L_0011E1C8;
    case 263u: goto L_0011E1DC;
    case 264u: goto L_0011E1F0;
    case 265u: goto L_0011E230;
    case 266u: goto L_0011E25C;
    case 267u: goto L_0011E290;
    case 268u: goto L_0011E2A0;
    case 269u: goto L_0011E2B0;
    case 270u: goto L_0011E2C8;
    case 271u: goto L_0011E2D8;
    case 272u: goto L_0011E334;
    case 273u: goto L_0011E350;
    case 274u: goto L_0011E370;
    case 275u: goto L_0011E390;
    case 276u: goto L_0011E3A4;
    case 277u: goto L_0011E3B8;
    case 278u: goto L_0011E3C8;
    case 279u: goto L_0011E3D8;
    case 280u: goto L_0011E3F0;
    case 281u: goto L_0011E408;
    case 282u: goto L_0011E41C;
    case 283u: goto L_0011E430;
    case 284u: goto L_0011E440;
    case 285u: goto L_0011E458;
    case 286u: goto L_0011E460;
    case 287u: goto L_0011E480;
    case 288u: goto L_0011E4B0;
    case 289u: goto L_0011E4F4;
    case 290u: goto L_0011E524;
    case 291u: goto L_0011E540;
    case 292u: goto L_0011E58C;
    case 293u: goto L_0011E5BC;
    case 294u: goto L_0011E5F0;
    case 295u: goto L_0011E678;
    case 296u: goto L_0011E6AC;
    case 297u: goto L_0011E6D0;
    case 298u: goto L_0011E708;
    case 299u: goto L_0011E72C;
    case 300u: goto L_0011E748;
    case 301u: goto L_0011E754;
    case 302u: goto L_0011E780;
    case 303u: goto L_0011E7B4;
    case 304u: goto L_0011E7F0;
    case 305u: goto L_0011E810;
    case 306u: goto L_0011E824;
    case 307u: goto L_0011E840;
    case 308u: goto L_0011E858;
    case 309u: goto L_0011E87C;
    case 310u: goto L_0011E898;
    case 311u: goto L_0011E8B0;
    case 312u: goto L_0011E8C0;
    case 313u: goto L_0011E8DC;
    case 314u: goto L_0011E8E8;
    case 315u: goto L_0011E8FC;
    case 316u: goto L_0011E90C;
    case 317u: goto L_0011E934;
    case 318u: goto L_0011E964;
    case 319u: goto L_0011E998;
    case 320u: goto L_0011E9D0;
    case 321u: goto L_0011E9E0;
    case 322u: goto L_0011EA38;
    case 323u: goto L_0011EA48;
    case 324u: goto L_0011EAB0;
    case 325u: goto L_0011EAEC;
    case 326u: goto L_0011EB04;
    case 327u: goto L_0011EB18;
    case 328u: goto L_0011EB34;
    case 329u: goto L_0011EB50;
    case 330u: goto L_0011EB60;
    case 331u: goto L_0011EB70;
    case 332u: goto L_0011EB90;
    case 333u: goto L_0011EBB4;
    case 334u: goto L_0011EBC8;
    case 335u: goto L_0011EBD8;
    case 336u: goto L_0011EC20;
    case 337u: goto L_0011EC50;
    case 338u: goto L_0011EC98;
    case 339u: goto L_0011ECC8;
    case 340u: goto L_0011ECD8;
    case 341u: goto L_0011ECF0;
    case 342u: goto L_0011ED10;
    case 343u: goto L_0011ED1C;
    case 344u: goto L_0011ED3C;
    case 345u: goto L_0011ED68;
    case 346u: goto L_0011ED80;
    case 347u: goto L_0011ED8C;
    case 348u: goto L_0011EDBC;
    case 349u: goto L_0011EDD0;
    case 350u: goto L_0011EDFC;
    case 351u: goto L_0011EE10;
    case 352u: goto L_0011EE28;
    case 353u: goto L_0011EE38;
    case 354u: goto L_0011EE64;
    case 355u: goto L_0011EE7C;
    case 356u: goto L_0011EE90;
    case 357u: goto L_0011EEA8;
    case 358u: goto L_0011EEF8;
    case 359u: goto L_0011EF14;
    case 360u: goto L_0011EF24;
    case 361u: goto L_0011EF3C;
    case 362u: goto L_0011EF4C;
    case 363u: goto L_0011EF74;
    case 364u: goto L_0011EF8C;
    case 365u: goto L_0011EFA0;
    case 366u: goto L_0011EFE0;
    case 367u: goto L_0011F020;
    case 368u: goto L_0011F030;
    case 369u: goto L_0011F068;
    case 370u: goto L_0011F07C;
    case 371u: goto L_0011F0A8;
    case 372u: goto L_0011F0D8;
    case 373u: goto L_0011F0F4;
    case 374u: goto L_0011F100;
    case 375u: goto L_0011F118;
    case 376u: goto L_0011F130;
    case 377u: goto L_0011F168;
    case 378u: goto L_0011F180;
    case 379u: goto L_0011F194;
    case 380u: goto L_0011F1F4;
    case 381u: goto L_0011F210;
    case 382u: goto L_0011F228;
    case 383u: goto L_0011F268;
    case 384u: goto L_0011F278;
    case 385u: goto L_0011F2A0;
    case 386u: goto L_0011F2B0;
    case 387u: goto L_0011F2BC;
    case 388u: goto L_0011F2E4;
    case 389u: goto L_0011F2FC;
    case 390u: goto L_0011F370;
    case 391u: goto L_0011F388;
    case 392u: goto L_0011F398;
    case 393u: goto L_0011F3C4;
    case 394u: goto L_0011F3E4;
    case 395u: goto L_0011F3EC;
    case 396u: goto L_0011F404;
    case 397u: goto L_0011F41C;
    case 398u: goto L_0011F424;
    case 399u: goto L_0011F43C;
    case 400u: goto L_0011F454;
    case 401u: goto L_0011F45C;
    case 402u: goto L_0011F474;
    case 403u: goto L_0011F48C;
    case 404u: goto L_0011F4A8;
    case 405u: goto L_0011F508;
    case 406u: goto L_0011F528;
    case 407u: goto L_0011F530;
    case 408u: goto L_0011F548;
    case 409u: goto L_0011F560;
    case 410u: goto L_0011F588;
    case 411u: goto L_0011F5D8;
    case 412u: goto L_0011F5F8;
    case 413u: goto L_0011F600;
    case 414u: goto L_0011F618;
    case 415u: goto L_0011F630;
    case 416u: goto L_0011F650;
    case 417u: goto L_0011F6B0;
    case 418u: goto L_0011F6B8;
    case 419u: goto L_0011F6D0;
    case 420u: goto L_0011F6E8;
    case 421u: goto L_0011F700;
    case 422u: goto L_0011F730;
    case 423u: goto L_0011F76C;
    case 424u: goto L_0011F794;
    case 425u: goto L_0011F79C;
    case 426u: goto L_0011F7AC;
    case 427u: goto L_0011F7C0;
    case 428u: goto L_0011F7F4;
    case 429u: goto L_0011F810;
    case 430u: goto L_0011F830;
    case 431u: goto L_0011F870;
    case 432u: goto L_0011F8A8;
    case 433u: goto L_0011F8D8;
    case 434u: goto L_0011F900;
    case 435u: goto L_0011F920;
    case 436u: goto L_0011F960;
    case 437u: goto L_0011F9B0;
    case 438u: goto L_0011F9CC;
    case 439u: goto L_0011F9DC;
    case 440u: goto L_0011FA08;
    case 441u: goto L_0011FA48;
    case 442u: goto L_0011FAB8;
    case 443u: goto L_0011FAF8;
    case 444u: goto L_0011FB2C;
    case 445u: goto L_0011FB80;
    case 446u: goto L_0011FB90;
    case 447u: goto L_0011FBA8;
    case 448u: goto L_0011FC04;
    case 449u: goto L_0011FC8C;
    case 450u: goto L_0011FCB0;
    case 451u: goto L_0011FCDC;
    case 452u: goto L_0011FD00;
    case 453u: goto L_0011FD14;
    case 454u: goto L_0011FD40;
    case 455u: goto L_0011FD5C;
    case 456u: goto L_0011FD68;
    case 457u: goto L_0011FE14;
    case 458u: goto L_0011FE30;
    case 459u: goto L_0011FE50;
    case 460u: goto L_0011FE78;
    case 461u: goto L_0011FEA4;
    case 462u: goto L_0011FEC0;
    case 463u: goto L_0011FEE0;
    case 464u: goto L_0011FF08;
    case 465u: goto L_0011FF18;
    case 466u: goto L_0011FF44;
    case 467u: goto L_0011FF60;
    case 468u: goto L_0011FF6C;
    case 469u: goto L_0011FFA0;
    case 470u: goto L_0011FFD8;
    case 471u: goto L_0011FFE8;
    default: bad_entry(c, 0x0011C000u); return;
    }
L_0011C000:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C01Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C01Cu) [[unlikely]] return; }
L_0011C01C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011C054; } }
L_0011C02C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011C054; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C050u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C050u) [[unlikely]] return; }
L_0011C050:
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 1;
L_0011C054:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C070:
    mmi::padduw(c.r[1], c.r[0], c.r[0]);
    mmi::padduw(c.r[2], c.r[0], c.r[0]);
    mmi::padduw(c.r[3], c.r[0], c.r[0]);
    mmi::padduw(c.r[4], c.r[0], c.r[0]);
    mmi::padduw(c.r[5], c.r[0], c.r[0]);
    mmi::padduw(c.r[6], c.r[0], c.r[0]);
    mmi::padduw(c.r[7], c.r[0], c.r[0]);
    mmi::padduw(c.r[8], c.r[0], c.r[0]);
    mmi::padduw(c.r[9], c.r[0], c.r[0]);
    mmi::padduw(c.r[10], c.r[0], c.r[0]);
    mmi::padduw(c.r[11], c.r[0], c.r[0]);
    mmi::padduw(c.r[12], c.r[0], c.r[0]);
    mmi::padduw(c.r[13], c.r[0], c.r[0]);
    mmi::padduw(c.r[14], c.r[0], c.r[0]);
    mmi::padduw(c.r[15], c.r[0], c.r[0]);
    mmi::padduw(c.r[16], c.r[0], c.r[0]);
    mmi::padduw(c.r[17], c.r[0], c.r[0]);
    mmi::padduw(c.r[18], c.r[0], c.r[0]);
    mmi::padduw(c.r[19], c.r[0], c.r[0]);
    mmi::padduw(c.r[20], c.r[0], c.r[0]);
    mmi::padduw(c.r[21], c.r[0], c.r[0]);
    mmi::padduw(c.r[22], c.r[0], c.r[0]);
    mmi::padduw(c.r[23], c.r[0], c.r[0]);
    mmi::padduw(c.r[24], c.r[0], c.r[0]);
    mmi::padduw(c.r[25], c.r[0], c.r[0]);
    mmi::padduw(c.r[28], c.r[0], c.r[0]);
    mmi::padduw(c.r[29], c.r[0], c.r[0]);
    mmi::padduw(c.r[30], c.r[0], c.r[0]);
    mmi::padduw(c.r[31], c.r[0], c.r[0]);
    c.hi.d[0] = 0ull;
    c.hi.d[1] = 0ull;
    c.lo.d[0] = 0ull;
    c.lo.d[1] = 0ull;
    c.sa = ((0u ^ 0u) & 7u) * 2u;
    c.f[0] = 0u;
    c.f[1] = 0u;
    c.f[2] = 0u;
    c.f[3] = 0u;
    c.f[4] = 0u;
    c.f[5] = 0u;
    c.f[6] = 0u;
    c.f[7] = 0u;
    c.f[8] = 0u;
    c.f[9] = 0u;
    c.f[10] = 0u;
    c.f[11] = 0u;
    c.f[12] = 0u;
    c.f[13] = 0u;
    c.f[14] = 0u;
    c.f[15] = 0u;
    c.f[16] = 0u;
    c.f[17] = 0u;
    c.f[18] = 0u;
    c.f[19] = 0u;
    c.f[20] = 0u;
    c.f[21] = 0u;
    c.f[22] = 0u;
    c.f[23] = 0u;
    c.f[24] = 0u;
    c.f[25] = 0u;
    c.f[26] = 0u;
    c.f[27] = 0u;
    c.f[28] = 0u;
    c.f[29] = 0u;
    c.f[30] = 0u;
    c.f[31] = 0u;
    c.facc = fp::add(c.f[0], c.f[1]);
    ctc1(c, 31u, 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[2], c.r[2].w[0] + 8192u);
    set32(c.r[3], c.r[3].w[0] + 2200u);
    c.budget -= 73;
L_0011C194:
    c.r[4].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011C1B4; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C194u | kUnwind; return; } goto L_0011C194; }
L_0011C1B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65520ull;
    c.r[4].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 3;
L_0011C1C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0011C1E0; } }
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    c.budget -= 6;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C1C0u | kUnwind; return; } goto L_0011C1C0; }
L_0011C1E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0011C200; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0011C1E0u | kUnwind; return; } goto L_0011C1E0; }
L_0011C200:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01FF0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[4], c.r[4].w[0] - 24592u);
    set32(c.r[5], c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] - 25600u);
    set32(c.r[8], c.r[8].w[0] - 15688u);
    c.r[28].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 60u);
    c.budget -= 12;
    c.pc = 0x0011C234u; syscall(c, 0x0011C230u); if (c.pc != 0x0011C234u) return;
    c.budget -= 1;
L_0011C234:
    c.r[29].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00000000u);
    set32(c.r[4], c.r[4].w[0] + 2200u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], 0u + 61u);
    c.budget -= 6;
    c.pc = 0x0011C250u; syscall(c, 0x0011C24Cu); if (c.pc != 0x0011C250u) return;
    c.budget -= 1;
L_0011C250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C258u);  if (depth < kMaxDepth) unit_00E1(c, 241u, depth + 1u); else { c.pc = 0x00486228u; return; } if (c.pc != 0x0011C258u) [[unlikely]] return; }
L_0011C258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C260u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00E0(c, 29u, depth + 1u); else { c.pc = 0x004800E0u; return; } if (c.pc != 0x0011C260u) [[unlikely]] return; }
L_0011C260:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[16], c.r[16].w[0] + 24040u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011C278; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C278u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C278u) [[unlikely]] return; }
L_0011C278:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[4], c.r[4].w[0] + 24048u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011C290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C290u);  if (depth < kMaxDepth) unit_00DD(c, 222u, depth + 1u); else { c.pc = 0x00476848u; return; } if (c.pc != 0x0011C290u) [[unlikely]] return; }
L_0011C290:
    set_interrupts(c, true);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 25600u);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C2A8u); set32(c.r[5], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0044(c, 176u, depth + 1u); else { c.pc = 0x00212F70u; return; } if (c.pc != 0x0011C2A8u) [[unlikely]] return; }
L_0011C2A8:
    c.budget -= 2;
    { c.r[4].d[0] = c.r[2].d[0] + 0ull;  [[clang::musttail]] return unit_0040(c, 179u, depth); }
L_0011C2B0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00E1(c, 292u, depth); }
L_0011C2B8:
    set32(c.r[3], 0u + 35u);
    c.budget -= 1;
    c.pc = 0x0011C2C0u; syscall(c, 0x0011C2BCu); if (c.pc != 0x0011C2C0u) return;
    c.budget -= 1;
L_0011C2C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C2D0:
    c.f[0] = ld32((c.r[4].w[0] + 16u));
    st32((c.r[5].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 20u));
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 28u));
    st32((c.r[5].w[0] + 12u), c.f[1]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C2F8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 9296u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[18].w[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 64u), 0u);
    st32((c.r[16].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 32u), c.f[12]);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C35Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0011C35Cu) [[unlikely]] return; }
L_0011C35C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C368u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x0011C368u) [[unlikely]] return; }
L_0011C368:
    st32((c.r[16].w[0] + 28u), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C378u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0011C378u) [[unlikely]] return; }
L_0011C378:
    set32(c.r[3], 0u + 360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C8E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64053ull;
    c.f[0] = c.r[1].w[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0011C394u);  goto L_0011C398; }
L_0011C398:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.hi.d[0];
    c.f[12] = c.r[6].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C3B8u);  if (depth < kMaxDepth) unit_0045(c, 22u, depth + 1u); else { c.pc = 0x002143A0u; return; } if (c.pc != 0x0011C3B8u) [[unlikely]] return; }
L_0011C3B8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C3CCu);  if (depth < kMaxDepth) unit_0045(c, 30u, depth + 1u); else { c.pc = 0x00214658u; return; } if (c.pc != 0x0011C3CCu) [[unlikely]] return; }
L_0011C3CC:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C3E0u);  if (depth < kMaxDepth) unit_002D(c, 41u, depth + 1u); else { c.pc = 0x001B4518u; return; } if (c.pc != 0x0011C3E0u) [[unlikely]] return; }
L_0011C3E0:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFB0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 26213ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C41Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0011C41Cu) [[unlikely]] return; }
L_0011C41C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 115u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C434u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x0011C434u) [[unlikely]] return; }
L_0011C434:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C458:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 9296u);
    set32(c.r[5], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 60u)));
    st32((c.r[3].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C480u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x0011C480u) [[unlikely]] return; }
L_0011C480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[1] = c.f[12];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C4BCu);  if (depth < kMaxDepth) unit_0007(c, 73u, depth + 1u); else { c.pc = 0x0011C9C0u; return; } if (c.pc != 0x0011C4BCu) [[unlikely]] return; }
L_0011C4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011C4E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C4E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011C4E0u) [[unlikely]] return; }
L_0011C4E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C4ECu);  if (depth < kMaxDepth) unit_0007(c, 72u, depth + 1u); else { c.pc = 0x0011C998u; return; } if (c.pc != 0x0011C4ECu) [[unlikely]] return; }
L_0011C4EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C508:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011C5F0; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C540u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x0011C540u) [[unlikely]] return; }
L_0011C540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[20] = c.r[1].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3C80000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], 0u + 115u);
    c.f[12] = c.f[20];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C570u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x0011C570u) [[unlikely]] return; }
L_0011C570:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    set32(c.r[4], 0u + 114u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C584u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x0011C584u) [[unlikely]] return; }
L_0011C584:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], 0u + 112u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C5A0u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x0011C5A0u) [[unlikely]] return; }
L_0011C5A0:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x29420000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 55042ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C5DCu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0011C5DCu) [[unlikely]] return; }
L_0011C5DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C5E8u);  if (depth < kMaxDepth) unit_0007(c, 45u, depth + 1u); else { c.pc = 0x0011C650u; return; } if (c.pc != 0x0011C5E8u) [[unlikely]] return; }
L_0011C5E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011C638; } }
L_0011C5F0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C5FCu);  if (depth < kMaxDepth) unit_0007(c, 69u, depth + 1u); else { c.pc = 0x0011C940u; return; } if (c.pc != 0x0011C5FCu) [[unlikely]] return; }
L_0011C5FC:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFAFC0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 8540ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C638u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x0011C638u) [[unlikely]] return; }
L_0011C638:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C66Cu);  if (depth < kMaxDepth) unit_0007(c, 48u, depth + 1u); else { c.pc = 0x0011C690u; return; } if (c.pc != 0x0011C66Cu) [[unlikely]] return; }
L_0011C66C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C67Cu);  if (depth < kMaxDepth) unit_0007(c, 48u, depth + 1u); else { c.pc = 0x0011C690u; return; } if (c.pc != 0x0011C67Cu) [[unlikely]] return; }
L_0011C67C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C690:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C6B4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0011C6B4u) [[unlikely]] return; }
L_0011C6B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C6CCu);  if (depth < kMaxDepth) unit_0089(c, 118u, depth + 1u); else { c.pc = 0x00325648u; return; } if (c.pc != 0x0011C6CCu) [[unlikely]] return; }
L_0011C6CC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C6DCu);  if (depth < kMaxDepth) unit_008A(c, 166u, depth + 1u); else { c.pc = 0x0032A5B0u; return; } if (c.pc != 0x0011C6DCu) [[unlikely]] return; }
L_0011C6DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49A10000u);
    c.r[1].d[0] = c.r[1].d[0] | 28704ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0011C70C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C70Cu);  if (depth < kMaxDepth) unit_0007(c, 53u, depth + 1u); else { c.pc = 0x0011C728u; return; } if (c.pc != 0x0011C70Cu) [[unlikely]] return; }
L_0011C70C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C728:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 336u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C74Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x0011C74Cu) [[unlikely]] return; }
L_0011C74C:
    set32(c.r[4], 0u + 1631u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C75Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x0011C75Cu) [[unlikely]] return; }
L_0011C75C:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011C774; } }
    st8((c.r[29].w[0] + 80u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011C780; } }
L_0011C774:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C780u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x0011C780u) [[unlikely]] return; }
L_0011C780:
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C794u);  if (depth < kMaxDepth) unit_002C(c, 476u, depth + 1u); else { c.pc = 0x001B3570u; return; } if (c.pc != 0x0011C794u) [[unlikely]] return; }
L_0011C794:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C7A8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0011C7A8u) [[unlikely]] return; }
L_0011C7A8:
    set32(c.r[5], ld32((c.r[2].w[0] + 920u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C7BCu);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0011C7BCu) [[unlikely]] return; }
L_0011C7BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C7C4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011C7C4u) [[unlikely]] return; }
L_0011C7C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011C7D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C7D8u);  if (depth < kMaxDepth) unit_003B(c, 209u, depth + 1u); else { c.pc = 0x001EEB88u; return; } if (c.pc != 0x0011C7D8u) [[unlikely]] return; }
L_0011C7D8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C7E8u);  if (depth < kMaxDepth) unit_0007(c, 64u, depth + 1u); else { c.pc = 0x0011C870u; return; } if (c.pc != 0x0011C7E8u) [[unlikely]] return; }
L_0011C7E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[7], c.r[18].w[0] + 16u);
    set32(c.r[6], 0u - 9u);
    set32(c.r[2], 0u + 100u);
    set32(c.r[3], 0u + 80u);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[5], 0u + 15u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[6], 0u + 104u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[7], 0u + 104u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[8], 0u + 80u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[9], 0u - 1u);
    st32((c.r[29].w[0] + 40u), 0u);
    set32(c.r[10], 0u + 12u);
    st32((c.r[29].w[0] + 48u), 0u);
    set32(c.r[11], 0u - 50u);
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C850u);  if (depth < kMaxDepth) unit_003C(c, 2u, depth + 1u); else { c.pc = 0x001F0008u; return; } if (c.pc != 0x0011C850u) [[unlikely]] return; }
L_0011C850:
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 336u));
    set32(c.r[29], c.r[29].w[0] + 400u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C870:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], 0u + 84u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 20696u);
    set32(c.r[16], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 120u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[8], 0u + 16425u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C8BCu);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x0011C8BCu) [[unlikely]] return; }
L_0011C8BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 15u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 16425u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C8E0u);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x0011C8E0u) [[unlikely]] return; }
L_0011C8E0:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 16425u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C904u);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x0011C904u) [[unlikely]] return; }
L_0011C904:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 120u);
    set32(c.r[8], 0u + 16425u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C928u);  if (depth < kMaxDepth) unit_0072(c, 214u, depth + 1u); else { c.pc = 0x002CA5A0u; return; } if (c.pc != 0x0011C928u) [[unlikely]] return; }
L_0011C928:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011C988; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0011C97C; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C974u);  if (depth < kMaxDepth) unit_0098(c, 341u, depth + 1u); else { c.pc = 0x00363E80u; return; } if (c.pc != 0x0011C974u) [[unlikely]] return; }
L_0011C974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011C988; } }
L_0011C97C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011C988u);  if (depth < kMaxDepth) unit_0098(c, 341u, depth + 1u); else { c.pc = 0x00363E80u; return; } if (c.pc != 0x0011C988u) [[unlikely]] return; }
L_0011C988:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C998:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011C9B4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0011C9B8; } }
L_0011C9B4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011C9B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C9C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011C9EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011C9EC; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C9EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011C9F8:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 64u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CA10:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CA20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA38u);  if (depth < kMaxDepth) unit_002D(c, 28u, depth + 1u); else { c.pc = 0x001B4328u; return; } if (c.pc != 0x0011CA38u) [[unlikely]] return; }
L_0011CA38:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CA48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011CA94; } }
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0011CA88; } }
    c.f[1] = c.f[12];
    c.budget -= 1;
L_0011CA88:
    c.f[12] = fp::sub(c.f[12], c.f[1]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CA94u);  if (depth < kMaxDepth) unit_0007(c, 81u, depth + 1u); else { c.pc = 0x0011CAA8u; return; } if (c.pc != 0x0011CA94u) [[unlikely]] return; }
L_0011CA94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CAA8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], 0u - 1u);
    c.f[0] = fp::sub(c.f[0], c.f[12]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[5], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 60u)));
    c.f[20] = fp::add(c.f[12], c.f[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CAF0u);  if (depth < kMaxDepth) unit_002D(c, 28u, depth + 1u); else { c.pc = 0x001B4328u; return; } if (c.pc != 0x0011CAF0u) [[unlikely]] return; }
L_0011CAF0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011CB10; } }
L_0011CB00:
    set32(c.r[2], ld32((c.r[3].w[0] - 21468u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0011CB10:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 14208u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CB24u);  if (depth < kMaxDepth) unit_006C(c, 332u, depth + 1u); else { c.pc = 0x002B3740u; return; } if (c.pc != 0x0011CB24u) [[unlikely]] return; }
L_0011CB24:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    set32(c.r[4], c.f[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CB00u | kUnwind; return; } goto L_0011CB00; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CB58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0011CBE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011CBE8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 25216u);
    set32(c.r[2], c.r[2].w[0] - 9144u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CB98u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011CB98u) [[unlikely]] return; }
L_0011CB98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 9224u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CBB0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0011CBB0u) [[unlikely]] return; }
L_0011CBB0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 25200u);
    set32(c.r[2], c.r[2].w[0] - 9192u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CBD0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011CBD0u) [[unlikely]] return; }
L_0011CBD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 9208u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CBE8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x0011CBE8u) [[unlikely]] return; }
L_0011CBE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CC00:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CC10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CC18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC44u);  if (depth < kMaxDepth) unit_0036(c, 306u, depth + 1u); else { c.pc = 0x001DA918u; return; } if (c.pc != 0x0011CC44u) [[unlikely]] return; }
L_0011CC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011CC84; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[19], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[17], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[18], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC68u);  if (depth < kMaxDepth) unit_0036(c, 306u, depth + 1u); else { c.pc = 0x001DA918u; return; } if (c.pc != 0x0011CC68u) [[unlikely]] return; }
L_0011CC68:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CC84u);  if (depth < kMaxDepth) unit_0007(c, 111u, depth + 1u); else { c.pc = 0x0011CE68u; return; } if (c.pc != 0x0011CC84u) [[unlikely]] return; }
L_0011CC84:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CCA8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CCC0u);  if (depth < kMaxDepth) unit_0036(c, 306u, depth + 1u); else { c.pc = 0x001DA918u; return; } if (c.pc != 0x0011CCC0u) [[unlikely]] return; }
L_0011CCC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011CD04; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CCD8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011CCD8u) [[unlikely]] return; }
L_0011CCD8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CCE8u);  if (depth < kMaxDepth) unit_0098(c, 210u, depth + 1u); else { c.pc = 0x00362828u; return; } if (c.pc != 0x0011CCE8u) [[unlikely]] return; }
L_0011CCE8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CCF4u);  if (depth < kMaxDepth) unit_0036(c, 306u, depth + 1u); else { c.pc = 0x001DA918u; return; } if (c.pc != 0x0011CCF4u) [[unlikely]] return; }
L_0011CCF4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD04u);  if (depth < kMaxDepth) unit_0007(c, 244u, depth + 1u); else { c.pc = 0x0011DF70u; return; } if (c.pc != 0x0011CD04u) [[unlikely]] return; }
L_0011CD04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CD18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CD30u);  if (depth < kMaxDepth) unit_0007(c, 85u, depth + 1u); else { c.pc = 0x0011CB58u; return; } if (c.pc != 0x0011CD30u) [[unlikely]] return; }
L_0011CD30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CD40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 9064u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[4].w[0] + 52u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011CD98; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_0011CD78:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011CD8C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_0011CD8C:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CD78u | kUnwind; return; } goto L_0011CD78; } }
L_0011CD98:
    set32(c.r[2], c.r[4].w[0] + 8u);
    set32(c.r[19], c.r[4].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[4].w[0] + 96u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011CE08; } }
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011CDB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011CDD8; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    st32((c.r[17].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_0011CDD8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0011CDFC; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 68u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CDFCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011CDFCu) [[unlikely]] return; }
L_0011CDFC:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CDB8u | kUnwind; return; } goto L_0011CDB8; } }
L_0011CE08:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011CE38; } }
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_0011CE18:
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011CE2C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[18].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 2;
L_0011CE2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CE18u | kUnwind; return; } goto L_0011CE18; } }
L_0011CE38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CE48u);  if (depth < kMaxDepth) unit_0006(c, 226u, depth + 1u); else { c.pc = 0x00119D38u; return; } if (c.pc != 0x0011CE48u) [[unlikely]] return; }
L_0011CE48:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011CE68:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CEA4u);  if (depth < kMaxDepth) unit_0007(c, 184u, depth + 1u); else { c.pc = 0x0011D720u; return; } if (c.pc != 0x0011CEA4u) [[unlikely]] return; }
L_0011CEA4:
    set32(c.r[3], c.r[17].w[0] + 52u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0011CEF4; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[2].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[20].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011CFB0; } }
L_0011CEF4:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CF00u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011CF00u) [[unlikely]] return; }
L_0011CF00:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CF10u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0011CF10u) [[unlikely]] return; }
L_0011CF10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011CF14:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[20].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CF2Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011CF2Cu) [[unlikely]] return; }
L_0011CF2C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CF3Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0011CF3Cu) [[unlikely]] return; }
L_0011CF3C:
    c.f[0] = c.r[21].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 8;
L_0011CF5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011CF6C; } }
L_0011CF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CF6Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0011CF6Cu) [[unlikely]] return; }
L_0011CF6C:
    set32(c.r[2], c.r[17].w[0] + 52u);
    set32(c.r[3], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011CFB0; } }
L_0011CF94:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CFA0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011CFA0u) [[unlikely]] return; }
L_0011CFA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011CF64u | kUnwind; return; } goto L_0011CF64; } }
L_0011CFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011CFB0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0011CFB0u) [[unlikely]] return; }
L_0011CFB0:
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
L_0011CFD8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[19].w[0] + 52u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0011D044; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0011D044; } }
L_0011D028:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0011D044; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D028u | kUnwind; return; } goto L_0011D028; } }
L_0011D044:
    set32(c.r[3], c.r[19].w[0] + 52u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0011D06C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D078; } }
L_0011D06C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 16u)));
    c.f[20] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 3;
L_0011D078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D080u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011D080u) [[unlikely]] return; }
L_0011D080:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D090u);  if (depth < kMaxDepth) unit_0098(c, 226u, depth + 1u); else { c.pc = 0x00362AF0u; return; } if (c.pc != 0x0011D090u) [[unlikely]] return; }
L_0011D090:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011D1CC; } }
    c.budget -= 1;
L_0011D0A0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D0B0u);  if (depth < kMaxDepth) unit_0007(c, 228u, depth + 1u); else { c.pc = 0x0011DD18u; return; } if (c.pc != 0x0011D0B0u) [[unlikely]] return; }
L_0011D0B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D188; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D0C8u);  if (depth < kMaxDepth) unit_0007(c, 234u, depth + 1u); else { c.pc = 0x0011DDD8u; return; } if (c.pc != 0x0011D0C8u) [[unlikely]] return; }
L_0011D0C8:
    set32(c.r[3], c.r[19].w[0] + 96u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0011D108; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[20]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D188; } }
L_0011D108:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[20], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D118u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011D118u) [[unlikely]] return; }
L_0011D118:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 12u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D128u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0011D128u) [[unlikely]] return; }
L_0011D128:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0011D12C:
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D13Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011D13Cu) [[unlikely]] return; }
L_0011D13C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D14Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0011D14Cu) [[unlikely]] return; }
L_0011D14C:
    st32((c.r[2].w[0] + 12u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[20]);
    st32((c.r[2].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
L_0011D15C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D16C; } }
L_0011D164:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D16Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0011D16Cu) [[unlikely]] return; }
L_0011D16C:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    c.budget -= 7;
L_0011D188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D190u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011D190u) [[unlikely]] return; }
L_0011D190:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D19Cu);  if (depth < kMaxDepth) unit_0098(c, 228u, depth + 1u); else { c.pc = 0x00362B38u; return; } if (c.pc != 0x0011D19Cu) [[unlikely]] return; }
L_0011D19C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D0A0u | kUnwind; return; } goto L_0011D0A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D1CC; } }
L_0011D1B0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D1BCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011D1BCu) [[unlikely]] return; }
L_0011D1BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D164u | kUnwind; return; } goto L_0011D164; } }
L_0011D1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D1CCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0011D1CCu) [[unlikely]] return; }
L_0011D1CC:
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
L_0011D1F8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D220u);  if (depth < kMaxDepth) unit_0007(c, 213u, depth + 1u); else { c.pc = 0x0011DBC0u; return; } if (c.pc != 0x0011D220u) [[unlikely]] return; }
L_0011D220:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011D3EC; } }
    set32(c.r[4], c.r[18].w[0] + 52u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0011D274; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[16].d[0];  if (t) { goto L_0011D274; } }
L_0011D258:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0011D274; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D258u | kUnwind; return; } goto L_0011D258; } }
L_0011D274:
    set32(c.r[2], ld32((c.r[6].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0011D3EC; } }
    set32(c.r[19], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D29Cu);  if (depth < kMaxDepth) unit_0007(c, 208u, depth + 1u); else { c.pc = 0x0011DB08u; return; } if (c.pc != 0x0011D29Cu) [[unlikely]] return; }
L_0011D29C:
    set32(c.r[3], ld32((c.r[19].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D3EC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0011D2D0; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011D2D0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011D3EC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D2E4u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0011D2E4u) [[unlikely]] return; }
L_0011D2E4:
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x0011D2F0u);  goto L_0011D2F4; }
L_0011D2F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.hi.d[0];
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D308u);  if (depth < kMaxDepth) unit_0007(c, 220u, depth + 1u); else { c.pc = 0x0011DC58u; return; } if (c.pc != 0x0011D308u) [[unlikely]] return; }
L_0011D308:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 4u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 8u), c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D338u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0011D338u) [[unlikely]] return; }
L_0011D338:
    set32(c.r[3], 0u + 100u);
    c.r[4].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0011D348u);  goto L_0011D34C; }
L_0011D34C:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    c.r[16].d[0] = c.hi.d[0];
    c.r[16].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D360u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011D360u) [[unlikely]] return; }
L_0011D360:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D370u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0011D370u) [[unlikely]] return; }
L_0011D370:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D388u);  if (depth < kMaxDepth) unit_0007(c, 253u, depth + 1u); else { c.pc = 0x0011E098u; return; } if (c.pc != 0x0011D388u) [[unlikely]] return; }
L_0011D388:
    set32(c.r[3], c.r[18].w[0] + 8u);
    set32(c.r[4], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 8;
L_0011D3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D3B8; } }
L_0011D3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D3B8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0011D3B8u) [[unlikely]] return; }
L_0011D3B8:
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D3EC; } }
L_0011D3D0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D3DCu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011D3DCu) [[unlikely]] return; }
L_0011D3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D3B0u | kUnwind; return; } goto L_0011D3B0; } }
L_0011D3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D3ECu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0011D3ECu) [[unlikely]] return; }
L_0011D3EC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D410:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D430u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x0011D430u) [[unlikely]] return; }
L_0011D430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D440u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x0011D440u) [[unlikely]] return; }
L_0011D440:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D450u);  if (depth < kMaxDepth) unit_002C(c, 478u, depth + 1u); else { c.pc = 0x001B35A8u; return; } if (c.pc != 0x0011D450u) [[unlikely]] return; }
L_0011D450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D470; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D4B4; } }
L_0011D464:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D4B0; } }
L_0011D470:
    set32(c.r[3], c.r[17].w[0] + 8u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0011D4AC; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0011D490:
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D464u | kUnwind; return; } goto L_0011D464; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D490u | kUnwind; return; } goto L_0011D490; } }
L_0011D4AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011D4B0:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0011D4B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D4C8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011D52C; } }
L_0011D4C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D4D8u);  if (depth < kMaxDepth) unit_0007(c, 234u, depth + 1u); else { c.pc = 0x0011DDD8u; return; } if (c.pc != 0x0011D4D8u) [[unlikely]] return; }
L_0011D4D8:
    set32(c.r[3], c.r[17].w[0] + 96u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0011D528; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0011D51C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011D51C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011D52C; } }
L_0011D528:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011D52C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D548:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[6].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D578u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011D578u) [[unlikely]] return; }
L_0011D578:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D588u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0011D588u) [[unlikely]] return; }
L_0011D588:
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 16u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D5C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D5D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[4].d[0] = 0ull + 0ull;
    c.f[20] = c.f[12];
    st32((c.r[16].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D5F8u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x0011D5F8u) [[unlikely]] return; }
L_0011D5F8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D608u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x0011D608u) [[unlikely]] return; }
L_0011D608:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.f[20]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[3].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D640:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D648:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[12]);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D668:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011D684; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_0011D684:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D690:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0011D6B4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011D6B4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D6C0:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D6ECu);  if (depth < kMaxDepth) unit_0006(c, 225u, depth + 1u); else { c.pc = 0x00119CF8u; return; } if (c.pc != 0x0011D6ECu) [[unlikely]] return; }
L_0011D6EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9064u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    st32((c.r[16].w[0] + 176u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D720:
    set32(c.r[6], c.r[4].w[0] + 52u);
    set32(c.r[2], ld32((c.r[6].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_0011D76C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0011D76C; } }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_0011D750:
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0011D76C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D750u | kUnwind; return; } goto L_0011D750; } }
L_0011D76C:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D778:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D798u);  if (depth < kMaxDepth) unit_0007(c, 190u, depth + 1u); else { c.pc = 0x0011D7D0u; return; } if (c.pc != 0x0011D798u) [[unlikely]] return; }
L_0011D798:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D7A8u);  if (depth < kMaxDepth) unit_0007(c, 201u, depth + 1u); else { c.pc = 0x0011D968u; return; } if (c.pc != 0x0011D7A8u) [[unlikely]] return; }
L_0011D7A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D7B8u);  if (depth < kMaxDepth) unit_0007(c, 205u, depth + 1u); else { c.pc = 0x0011DA88u; return; } if (c.pc != 0x0011D7B8u) [[unlikely]] return; }
L_0011D7B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D7D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D7F0u);  if (depth < kMaxDepth) unit_0007(c, 194u, depth + 1u); else { c.pc = 0x0011D828u; return; } if (c.pc != 0x0011D7F0u) [[unlikely]] return; }
L_0011D7F0:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D800u);  if (depth < kMaxDepth) unit_0007(c, 196u, depth + 1u); else { c.pc = 0x0011D888u; return; } if (c.pc != 0x0011D800u) [[unlikely]] return; }
L_0011D800:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D80Cu);  if (depth < kMaxDepth) unit_0007(c, 198u, depth + 1u); else { c.pc = 0x0011D8E8u; return; } if (c.pc != 0x0011D80Cu) [[unlikely]] return; }
L_0011D80C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D828:
    set32(c.r[4], c.r[4].w[0] + 52u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0011D880; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0011D848:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011D868; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_0011D868:
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D848u | kUnwind; return; } goto L_0011D848; } }
L_0011D880:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D888:
    set32(c.r[4], c.r[4].w[0] + 96u);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0011D8E0; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 2;
L_0011D8A8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011D8C8; } }
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_0011D8C8:
    set32(c.r[2], ld32((c.r[5].w[0] + 80u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D8A8u | kUnwind; return; } goto L_0011D8A8; } }
L_0011D8E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D8E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 52u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0011D94C; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0011D920:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D938u);  if (depth < kMaxDepth) unit_0007(c, 125u, depth + 1u); else { c.pc = 0x0011CFD8u; return; } if (c.pc != 0x0011D938u) [[unlikely]] return; }
L_0011D938:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D920u | kUnwind; return; } goto L_0011D920; } }
L_0011D94C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011D968:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    set32(c.r[17], c.r[19].w[0] + 8u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0011DA5C; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 2;
L_0011D9B0:
    set32(c.r[18], ld32((c.r[17].w[0])));
    c.f[12] = c.f[20];
    set32(c.r[16], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[18].w[0] + 68u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011D9D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011D9D4u) [[unlikely]] return; }
L_0011D9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011DA44; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_0011D9F8; } }
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 4u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0011D9F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011DA0C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 2;
L_0011DA0C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0011DA30; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 68u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DA30u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011DA30u) [[unlikely]] return; }
L_0011DA30:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0011DA5C; } }
L_0011DA44:
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011D9B0u | kUnwind; return; } goto L_0011D9B0; } }
L_0011DA5C:
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
L_0011DA88:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 52u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0011DAEC; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0011DAC0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DAD8u);  if (depth < kMaxDepth) unit_0007(c, 146u, depth + 1u); else { c.pc = 0x0011D1F8u; return; } if (c.pc != 0x0011DAD8u) [[unlikely]] return; }
L_0011DAD8:
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DAC0u | kUnwind; return; } goto L_0011DAC0; } }
L_0011DAEC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DB08:
    set32(c.r[6], c.r[4].w[0] + 8u);
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 40u)));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_0011DB58; } }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0011DB30:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[5], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 122u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[9].d[0];
    if (c.r[2].d[0] == 0) c.r[7].d[0] = c.r[5].d[0];
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DB30u | kUnwind; return; } goto L_0011DB30; } }
L_0011DB58:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DB68:
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0011DBB0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0011DB88:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0011DBA4; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DBA4:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DB88u | kUnwind; return; } goto L_0011DB88; } }
L_0011DBB0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DBC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DBE8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011DBE8u) [[unlikely]] return; }
L_0011DBE8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DBF8u);  if (depth < kMaxDepth) unit_0098(c, 226u, depth + 1u); else { c.pc = 0x00362AF0u; return; } if (c.pc != 0x0011DBF8u) [[unlikely]] return; }
L_0011DBF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011DC34; } }
L_0011DC00:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DC10u);  if (depth < kMaxDepth) unit_0007(c, 163u, depth + 1u); else { c.pc = 0x0011D410u; return; } if (c.pc != 0x0011DC10u) [[unlikely]] return; }
L_0011DC10:
    set32(c.r[3], c.r[17].w[0] + 1u);
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DC20u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011DC20u) [[unlikely]] return; }
L_0011DC20:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DC2Cu);  if (depth < kMaxDepth) unit_0098(c, 228u, depth + 1u); else { c.pc = 0x00362B38u; return; } if (c.pc != 0x0011DC2Cu) [[unlikely]] return; }
L_0011DC2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DC00u | kUnwind; return; } goto L_0011DC00; } }
L_0011DC34:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DC58:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DC84u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011DC84u) [[unlikely]] return; }
L_0011DC84:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DC94u);  if (depth < kMaxDepth) unit_0098(c, 226u, depth + 1u); else { c.pc = 0x00362AF0u; return; } if (c.pc != 0x0011DC94u) [[unlikely]] return; }
L_0011DC94:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DCA8u);  if (depth < kMaxDepth) unit_0007(c, 163u, depth + 1u); else { c.pc = 0x0011D410u; return; } if (c.pc != 0x0011DCA8u) [[unlikely]] return; }
L_0011DCA8:
    c.r[16].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011DCF4; } }
L_0011DCB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DCC0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011DCC0u) [[unlikely]] return; }
L_0011DCC0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DCCCu);  if (depth < kMaxDepth) unit_0098(c, 228u, depth + 1u); else { c.pc = 0x00362B38u; return; } if (c.pc != 0x0011DCCCu) [[unlikely]] return; }
L_0011DCCC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DCE0u);  if (depth < kMaxDepth) unit_0007(c, 163u, depth + 1u); else { c.pc = 0x0011D410u; return; } if (c.pc != 0x0011DCE0u) [[unlikely]] return; }
L_0011DCE0:
    set32(c.r[3], c.r[16].w[0] + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DCB8u | kUnwind; return; } goto L_0011DCB8; } }
L_0011DCF4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DD18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DD38u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x0011DD38u) [[unlikely]] return; }
L_0011DD38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011DD78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DD48u);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x0011DD48u) [[unlikely]] return; }
L_0011DD48:
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DD58u);  if (depth < kMaxDepth) unit_002C(c, 478u, depth + 1u); else { c.pc = 0x001B35A8u; return; } if (c.pc != 0x0011DD58u) [[unlikely]] return; }
L_0011DD58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011DD78; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011DDBC; } }
L_0011DD6C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011DDB8; } }
L_0011DD78:
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0011DDB4; } }
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0011DD98:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DD6Cu | kUnwind; return; } goto L_0011DD6C; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DD98u | kUnwind; return; } goto L_0011DD98; } }
L_0011DDB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011DDB8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0011DDBC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DDD8:
    set32(c.r[6], c.r[4].w[0] + 96u);
    set32(c.r[2], ld32((c.r[6].w[0] + 80u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == c.r[7].d[0];  if (t) { goto L_0011DE24; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0011DE24; } }
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 2;
L_0011DE08:
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0011DE24; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DE08u | kUnwind; return; } goto L_0011DE08; } }
L_0011DE24:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DE30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[4].w[0] + 8u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0011DEB0; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011DE70:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DE80u);  if (depth < kMaxDepth) unit_0007(c, 77u, depth + 1u); else { c.pc = 0x0011CA20u; return; } if (c.pc != 0x0011DE80u) [[unlikely]] return; }
L_0011DE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_0011DE98; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DE98u);  if (depth < kMaxDepth) unit_0007(c, 75u, depth + 1u); else { c.pc = 0x0011C9F8u; return; } if (c.pc != 0x0011DE98u) [[unlikely]] return; }
L_0011DE98:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DE70u | kUnwind; return; } goto L_0011DE70; } }
L_0011DEB0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DED8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[4].w[0] + 8u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0011DF4C; } }
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0011DF10:
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DF20u);  if (depth < kMaxDepth) unit_0007(c, 77u, depth + 1u); else { c.pc = 0x0011CA20u; return; } if (c.pc != 0x0011DF20u) [[unlikely]] return; }
L_0011DF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_0011DF34; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DF34u);  if (depth < kMaxDepth) unit_0007(c, 76u, depth + 1u); else { c.pc = 0x0011CA10u; return; } if (c.pc != 0x0011DF34u) [[unlikely]] return; }
L_0011DF34:
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DF10u | kUnwind; return; } goto L_0011DF10; } }
L_0011DF4C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011DF70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[4].w[0] + 8u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0011DFC8; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_0011DFA0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0011DFBC; } }
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011DFCC; } }
L_0011DFBC:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011DFA0u | kUnwind; return; } goto L_0011DFA0; } }
L_0011DFC8:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011DFCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011E010; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DFDCu);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x0011DFDCu) [[unlikely]] return; }
L_0011DFDC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 88u)));
    set32(c.r[16], c.r[16].w[0] + 88u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011DFFCu);  if (depth < kMaxDepth) unit_0007(c, 77u, depth + 1u); else { c.pc = 0x0011CA20u; return; } if (c.pc != 0x0011DFFCu) [[unlikely]] return; }
L_0011DFFC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E010u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011E010u) [[unlikely]] return; }
L_0011E010:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0011E060; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011E060; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 25184u);
    set32(c.r[5], c.r[5].w[0] - 8984u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E060u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x0011E060u) [[unlikely]] return; }
L_0011E060:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E084u);  if (depth < kMaxDepth) unit_0007(c, 30u, depth + 1u); else { c.pc = 0x0011C458u; return; } if (c.pc != 0x0011E084u) [[unlikely]] return; }
L_0011E084:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E098:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[16].w[0] - 25184u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E0D8u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x0011E0D8u) [[unlikely]] return; }
L_0011E0D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x443B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E104u);  if (depth < kMaxDepth) unit_0007(c, 21u, depth + 1u); else { c.pc = 0x0011C2F8u; return; } if (c.pc != 0x0011E104u) [[unlikely]] return; }
L_0011E104:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 9024u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E138:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E148u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C508u; return; } if (c.pc != 0x0011E148u) [[unlikely]] return; }
L_0011E148:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E158:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E170u);  if (depth < kMaxDepth) unit_0007(c, 249u, depth + 1u); else { c.pc = 0x0011E028u; return; } if (c.pc != 0x0011E170u) [[unlikely]] return; }
L_0011E170:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0011E1B8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011E1B8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 25120u);
    set32(c.r[5], c.r[5].w[0] - 8928u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E1B8u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x0011E1B8u) [[unlikely]] return; }
L_0011E1B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E1C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E1DCu);  if (depth < kMaxDepth) unit_0007(c, 30u, depth + 1u); else { c.pc = 0x0011C458u; return; } if (c.pc != 0x0011E1DCu) [[unlikely]] return; }
L_0011E1DC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E1F0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[16], c.r[16].w[0] - 25120u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E230u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x0011E230u) [[unlikely]] return; }
L_0011E230:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x443B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E25Cu);  if (depth < kMaxDepth) unit_0007(c, 21u, depth + 1u); else { c.pc = 0x0011C2F8u; return; } if (c.pc != 0x0011E25Cu) [[unlikely]] return; }
L_0011E25C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 8968u);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 68u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E2A0u);  if (depth < kMaxDepth) unit_0007(c, 36u, depth + 1u); else { c.pc = 0x0011C508u; return; } if (c.pc != 0x0011E2A0u) [[unlikely]] return; }
L_0011E2A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E2B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E2C8u);  if (depth < kMaxDepth) unit_0007(c, 260u, depth + 1u); else { c.pc = 0x0011E180u; return; } if (c.pc != 0x0011E2C8u) [[unlikely]] return; }
L_0011E2C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E2D8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[17].d[0];  if (t) { goto L_0011E314; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0011E324; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E494; } }
L_0011E314:
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E494; } }
L_0011E324:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E334u);  if (depth < kMaxDepth) unit_0007(c, 329u, depth + 1u); else { c.pc = 0x0011EB50u; return; } if (c.pc != 0x0011E334u) [[unlikely]] return; }
L_0011E334:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    st32((c.r[16].w[0]), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] - 22596u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E350u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011E350u) [[unlikely]] return; }
L_0011E350:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011E494; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E370u);  if (depth < kMaxDepth) unit_002A(c, 11u, depth + 1u); else { c.pc = 0x001A8188u; return; } if (c.pc != 0x0011E370u) [[unlikely]] return; }
L_0011E370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E494; } }
L_0011E378:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[18], c.r[2].w[0] + 9872u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E390u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0011E390u) [[unlikely]] return; }
L_0011E390:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011E494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3A4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011E3A4u) [[unlikely]] return; }
L_0011E3A4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011E3D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3B8u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x0011E3B8u) [[unlikely]] return; }
L_0011E3B8:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3C8u);  if (depth < kMaxDepth) unit_0001(c, 378u, depth + 1u); else { c.pc = 0x00106B18u; return; } if (c.pc != 0x0011E3C8u) [[unlikely]] return; }
L_0011E3C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E494; } }
L_0011E3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3D8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011E3D8u) [[unlikely]] return; }
L_0011E3D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E3F8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E3F0u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0011E3F0u) [[unlikely]] return; }
L_0011E3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E440; } }
L_0011E3F8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E408u);  if (depth < kMaxDepth) unit_0062(c, 71u, depth + 1u); else { c.pc = 0x00289730u; return; } if (c.pc != 0x0011E408u) [[unlikely]] return; }
L_0011E408:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E41Cu);  if (depth < kMaxDepth) unit_0062(c, 71u, depth + 1u); else { c.pc = 0x00289730u; return; } if (c.pc != 0x0011E41Cu) [[unlikely]] return; }
L_0011E41C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E430u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0011E430u) [[unlikely]] return; }
L_0011E430:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[4].w[0] + 928u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E440u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0011E440u) [[unlikely]] return; }
L_0011E440:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    set32(c.r[16], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E458u);  if (depth < kMaxDepth) unit_0036(c, 288u, depth + 1u); else { c.pc = 0x001DA780u; return; } if (c.pc != 0x0011E458u) [[unlikely]] return; }
L_0011E458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E460u);  if (depth < kMaxDepth) unit_0039(c, 11u, depth + 1u); else { c.pc = 0x001E40E0u; return; } if (c.pc != 0x0011E460u) [[unlikely]] return; }
L_0011E460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] + 3472u), c.r[16].w[0]);
    st32((c.r[4].w[0] - 29700u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 3484u), c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E480u);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0011E480u) [[unlikely]] return; }
L_0011E480:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29688u), c.r[16].w[0]);
    st32((c.r[2].w[0] - 29692u), c.r[4].w[0]);
    c.budget -= 5;
L_0011E494:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E4B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011E6AC; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 6ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011E6AC; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E4F4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011E4F4u) [[unlikely]] return; }
L_0011E4F4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011E54C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011E52C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E524u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0011E524u) [[unlikely]] return; }
L_0011E524:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E540; } }
L_0011E52C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E540u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0011E540u) [[unlikely]] return; }
L_0011E540:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E550; } }
L_0011E54C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011E550:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0011E648; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 14936u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E59C; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[18].w[0] - 24872u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E594; } }
    set32(c.r[4], c.r[20].w[0] - 25056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E58Cu);  if (depth < kMaxDepth) unit_0007(c, 319u, depth + 1u); else { c.pc = 0x0011E998u; return; } if (c.pc != 0x0011E58Cu) [[unlikely]] return; }
L_0011E58C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] - 24872u), c.r[2].w[0]);
    c.budget -= 2;
L_0011E594:
    set32(c.r[2], c.r[20].w[0] - 25056u);
    st32((c.r[19].w[0] - 14936u), c.r[2].w[0]);
    c.budget -= 2;
L_0011E59C:
    set32(c.r[6], ld32((c.r[19].w[0] - 14936u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E5BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011E5BCu) [[unlikely]] return; }
L_0011E5BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011E648; } }
    set32(c.r[2], ld32((c.r[19].w[0] - 14936u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E600; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[16].w[0] - 24872u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E5F8; } }
    set32(c.r[4], c.r[20].w[0] - 25056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E5F0u);  if (depth < kMaxDepth) unit_0007(c, 319u, depth + 1u); else { c.pc = 0x0011E998u; return; } if (c.pc != 0x0011E5F0u) [[unlikely]] return; }
L_0011E5F0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] - 24872u), c.r[2].w[0]);
    c.budget -= 2;
L_0011E5F8:
    set32(c.r[2], c.r[20].w[0] - 25056u);
    st32((c.r[19].w[0] - 14936u), c.r[2].w[0]);
    c.budget -= 2;
L_0011E600:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], 0u + 12u);
    set32(c.r[5], ld32((c.r[19].w[0] - 14936u)));
    set32(c.r[8], 0u + 880u);
    set32(c.r[2], ld32((c.r[3].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[8].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 632u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[7].d[0];  if (t) { goto L_0011E6AC; } }
L_0011E648:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E668; } }
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E6AC; } }
L_0011E668:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E678u);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0011E678u) [[unlikely]] return; }
L_0011E678:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E690; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011E6AC; } }
L_0011E690:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011E6AC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E6ACu);  if (depth < kMaxDepth) unit_0007(c, 297u, depth + 1u); else { c.pc = 0x0011E6D0u; return; } if (c.pc != 0x0011E6ACu) [[unlikely]] return; }
L_0011E6AC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E6D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 5ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011E718; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E708u);  if (depth < kMaxDepth) unit_001F(c, 27u, depth + 1u); else { c.pc = 0x0017C478u; return; } if (c.pc != 0x0011E708u) [[unlikely]] return; }
L_0011E708:
    set32(c.r[2], 0u + 5u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011E7CC; } }
L_0011E718:
    set32(c.r[2], 0u + 6u);
    set32(c.r[19], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E72Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011E72Cu) [[unlikely]] return; }
L_0011E72C:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011E7CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E748u);  if (depth < kMaxDepth) unit_007D(c, 258u, depth + 1u); else { c.pc = 0x002F7978u; return; } if (c.pc != 0x0011E748u) [[unlikely]] return; }
L_0011E748:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E754u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0011E754u) [[unlikely]] return; }
L_0011E754:
    set32(c.r[3], 0u + 51u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0011E764u);  goto L_0011E768; }
L_0011E768:
    st32((c.r[5].w[0] - 22596u), c.r[19].w[0]);
    set32(c.r[5], 0u + 3u);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 239u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E780u);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x001806E0u; return; } if (c.pc != 0x0011E780u) [[unlikely]] return; }
L_0011E780:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 14936u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E7C0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 24872u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E7B8; } }
    set32(c.r[4], c.r[16].w[0] - 25056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E7B4u);  if (depth < kMaxDepth) unit_0007(c, 319u, depth + 1u); else { c.pc = 0x0011E998u; return; } if (c.pc != 0x0011E7B4u) [[unlikely]] return; }
L_0011E7B4:
    st32((c.r[17].w[0] - 24872u), c.r[19].w[0]);
    c.budget -= 1;
L_0011E7B8:
    set32(c.r[2], c.r[16].w[0] - 25056u);
    st32((c.r[18].w[0] - 14936u), c.r[2].w[0]);
    c.budget -= 2;
L_0011E7C0:
    set32(c.r[3], ld32((c.r[18].w[0] - 14936u)));
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 180u), c.r[2].w[0]);
    c.budget -= 3;
L_0011E7CC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E7F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E810u);  if (depth < kMaxDepth) unit_0007(c, 376u, depth + 1u); else { c.pc = 0x0011F130u; return; } if (c.pc != 0x0011E810u) [[unlikely]] return; }
L_0011E810:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E82C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E824u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x0011E824u) [[unlikely]] return; }
L_0011E824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E97C; } }
L_0011E82C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[18], c.r[2].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E840u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x0011E840u) [[unlikely]] return; }
L_0011E840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E97C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E858u);  if (depth < kMaxDepth) unit_0088(c, 302u, depth + 1u); else { c.pc = 0x00323720u; return; } if (c.pc != 0x0011E858u) [[unlikely]] return; }
L_0011E858:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E97C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E97C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E87Cu);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x0011E87Cu) [[unlikely]] return; }
L_0011E87C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011E97C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E898u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0011E898u) [[unlikely]] return; }
L_0011E898:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011E97C; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E8B0u);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x0011E8B0u) [[unlikely]] return; }
L_0011E8B0:
    set32(c.r[17], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E8C0u);  if (depth < kMaxDepth) unit_0072(c, 47u, depth + 1u); else { c.pc = 0x002C86D0u; return; } if (c.pc != 0x0011E8C0u) [[unlikely]] return; }
L_0011E8C0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E8DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0011E8DCu) [[unlikely]] return; }
L_0011E8DC:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E8E8u);  if (depth < kMaxDepth) unit_006D(c, 163u, depth + 1u); else { c.pc = 0x002B7888u; return; } if (c.pc != 0x0011E8E8u) [[unlikely]] return; }
L_0011E8E8:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12864u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E8FCu);  if (depth < kMaxDepth) unit_0019(c, 321u, depth + 1u); else { c.pc = 0x00167718u; return; } if (c.pc != 0x0011E8FCu) [[unlikely]] return; }
L_0011E8FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E90Cu);  if (depth < kMaxDepth) unit_0089(c, 9u, depth + 1u); else { c.pc = 0x00324198u; return; } if (c.pc != 0x0011E90Cu) [[unlikely]] return; }
L_0011E90C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7676u)));
    c.r[2].d[0] = c.r[2].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011E924; } }
    st16((c.r[3].w[0] + 7676u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_0011E924:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E934u);  if (depth < kMaxDepth) unit_0088(c, 333u, depth + 1u); else { c.pc = 0x00323FF8u; return; } if (c.pc != 0x0011E934u) [[unlikely]] return; }
L_0011E934:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[4], ld32((c.r[5].w[0] + 104u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 632u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E964u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x0011E964u) [[unlikely]] return; }
L_0011E964:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23016u)));
    set32(c.r[3], 0u + 12u);
    st32((c.r[5].w[0] + 7700u), c.r[3].w[0]);
    st32((c.r[16].w[0]), c.r[4].w[0]);
    c.budget -= 6;
L_0011E97C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011E998:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 8680u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[18].w[0] + 4u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011E9D0u);  if (depth < kMaxDepth) unit_0097(c, 180u, depth + 1u); else { c.pc = 0x0035DB90u; return; } if (c.pc != 0x0011E9D0u) [[unlikely]] return; }
L_0011E9D0:
    set32(c.r[4], c.r[18].w[0] + 8u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], 0u + 13u);
    c.budget -= 4;
L_0011E9E0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011E9E0u | kUnwind; return; } goto L_0011E9E0; } }
    st32((c.r[4].w[0] + 168u), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[4], c.r[4].w[0] - 8768u);
    set32(c.r[3], c.r[3].w[0] - 8744u);
    set32(c.r[5], c.r[5].w[0] + 27456u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    st32((c.r[18].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[20], c.r[17].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    set32(c.r[16], c.r[18].w[0] + 8u);
    st32((c.r[18].w[0] + 180u), 0u);
    set32(c.r[19], 0u + 12u);
    c.budget -= 16;
L_0011EA38:
    st32((c.r[29].w[0] + 4u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EA48u);  if (depth < kMaxDepth) unit_0007(c, 327u, depth + 1u); else { c.pc = 0x0011EB18u; return; } if (c.pc != 0x0011EA48u) [[unlikely]] return; }
L_0011EA48:
    set32(c.r[17], c.r[17].w[0] + 13248u);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    c.r[4].d[0] = c.r[17].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    ldl(c.r[5], (c.r[29].w[0] + 7u));
    ldr(c.r[5], (c.r[29].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[5], (c.r[2].w[0] + 7u));
    sdr(c.r[5], (c.r[2].w[0]));
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 168u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EA38u | kUnwind; return; } goto L_0011EA38; } }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0011EB04; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011EB04; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 24864u);
    set32(c.r[2], c.r[2].w[0] - 8616u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EAECu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x0011EAECu) [[unlikely]] return; }
L_0011EAEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 8784u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EB04u);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x0011EB04u) [[unlikely]] return; }
L_0011EB04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EB18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EB34u);  if (depth < kMaxDepth) unit_0007(c, 329u, depth + 1u); else { c.pc = 0x0011EB50u; return; } if (c.pc != 0x0011EB34u) [[unlikely]] return; }
L_0011EB34:
    st32((c.r[16].w[0]), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EB50:
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EB60:
    set32(c.r[2], ld32((c.r[4].w[0] + 180u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EB70:
    set32(c.r[3], ld32((c.r[5].w[0] + 104u)));
    set32(c.r[2], 0u + 12u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EB90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 12u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EBB4u);  if (depth < kMaxDepth) unit_0007(c, 288u, depth + 1u); else { c.pc = 0x0011E4B0u; return; } if (c.pc != 0x0011EBB4u) [[unlikely]] return; }
L_0011EBB4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EBC8:
    st32((c.r[4].w[0] + 180u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EBD8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] - 14936u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011EC30; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 24872u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011EC28; } }
    set32(c.r[4], c.r[16].w[0] - 25056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC20u);  if (depth < kMaxDepth) unit_0007(c, 319u, depth + 1u); else { c.pc = 0x0011E998u; return; } if (c.pc != 0x0011EC20u) [[unlikely]] return; }
L_0011EC20:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 24872u), c.r[2].w[0]);
    c.budget -= 2;
L_0011EC28:
    set32(c.r[2], c.r[16].w[0] - 25056u);
    st32((c.r[18].w[0] - 14936u), c.r[2].w[0]);
    c.budget -= 2;
L_0011EC30:
    set32(c.r[2], ld32((c.r[18].w[0] - 14936u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] - 14936u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011ECA8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 24872u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011ECA0; } }
    set32(c.r[4], c.r[16].w[0] - 25056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EC98u);  if (depth < kMaxDepth) unit_0007(c, 319u, depth + 1u); else { c.pc = 0x0011E998u; return; } if (c.pc != 0x0011EC98u) [[unlikely]] return; }
L_0011EC98:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 24872u), c.r[2].w[0]);
    c.budget -= 2;
L_0011ECA0:
    set32(c.r[2], c.r[16].w[0] - 25056u);
    st32((c.r[18].w[0] - 14936u), c.r[2].w[0]);
    c.budget -= 2;
L_0011ECA8:
    set32(c.r[2], ld32((c.r[18].w[0] - 14936u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011ECC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ECD8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011ECD8u) [[unlikely]] return; }
L_0011ECD8:
    c.r[2].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011ECF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 4040u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED10u);  if (depth < kMaxDepth) unit_0036(c, 288u, depth + 1u); else { c.pc = 0x001DA780u; return; } if (c.pc != 0x0011ED10u) [[unlikely]] return; }
L_0011ED10:
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED1Cu);  if (depth < kMaxDepth) unit_0039(c, 11u, depth + 1u); else { c.pc = 0x001E40E0u; return; } if (c.pc != 0x0011ED1Cu) [[unlikely]] return; }
L_0011ED1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st32((c.r[3].w[0] + 3472u), c.r[16].w[0]);
    st32((c.r[4].w[0] - 29700u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 3484u), c.r[16].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED3Cu);  if (depth < kMaxDepth) unit_0036(c, 264u, depth + 1u); else { c.pc = 0x001DA4B8u; return; } if (c.pc != 0x0011ED3Cu) [[unlikely]] return; }
L_0011ED3C:
    set32(c.r[4], ld32((c.r[2].w[0] + 200u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[3].w[0] - 29688u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 29692u), c.r[4].w[0]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011ED68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED80u);  if (depth < kMaxDepth) unit_007D(c, 258u, depth + 1u); else { c.pc = 0x002F7978u; return; } if (c.pc != 0x0011ED80u) [[unlikely]] return; }
L_0011ED80:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011ED8Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x0011ED8Cu) [[unlikely]] return; }
L_0011ED8C:
    set32(c.r[3], 0u + 51u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0011ED9Cu);  goto L_0011EDA0; }
L_0011EDA0:
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[6].w[0] - 22596u), c.r[2].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[4].w[0] + 239u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EDBCu);  if (depth < kMaxDepth) unit_0020(c, 44u, depth + 1u); else { c.pc = 0x001806E0u; return; } if (c.pc != 0x0011EDBCu) [[unlikely]] return; }
L_0011EDBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 13192u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011EE90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EDFCu);  if (depth < kMaxDepth) unit_0007(c, 377u, depth + 1u); else { c.pc = 0x0011F168u; return; } if (c.pc != 0x0011EDFCu) [[unlikely]] return; }
L_0011EDFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE10u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0011EE10u) [[unlikely]] return; }
L_0011EE10:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011EE90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE28u);  if (depth < kMaxDepth) unit_0007(c, 271u, depth + 1u); else { c.pc = 0x0011E2D8u; return; } if (c.pc != 0x0011EE28u) [[unlikely]] return; }
L_0011EE28:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE38u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0011EE38u) [[unlikely]] return; }
L_0011EE38:
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[5], ld32((c.r[4].w[0] - 14940u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0011EE64; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE64u);  if (depth < kMaxDepth) unit_0007(c, 288u, depth + 1u); else { c.pc = 0x0011E4B0u; return; } if (c.pc != 0x0011EE64u) [[unlikely]] return; }
L_0011EE64:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011EE90; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE7Cu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x0011EE7Cu) [[unlikely]] return; }
L_0011EE7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011EE90; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EE90u);  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0011E7F0u; return; } if (c.pc != 0x0011EE90u) [[unlikely]] return; }
L_0011EE90:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011EEA8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 12u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 8u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0011EFB8; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 12u);
    c.budget -= 5;
L_0011EEF8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 13192u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011EFA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF14u);  if (depth < kMaxDepth) unit_0007(c, 377u, depth + 1u); else { c.pc = 0x0011F168u; return; } if (c.pc != 0x0011EF14u) [[unlikely]] return; }
L_0011EF14:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], c.r[21].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF24u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0011EF24u) [[unlikely]] return; }
L_0011EF24:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0011EFA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF3Cu);  if (depth < kMaxDepth) unit_0007(c, 271u, depth + 1u); else { c.pc = 0x0011E2D8u; return; } if (c.pc != 0x0011EF3Cu) [[unlikely]] return; }
L_0011EF3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF4Cu);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x0011EF4Cu) [[unlikely]] return; }
L_0011EF4C:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[20].w[0] - 14940u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0011EF74; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF74u);  if (depth < kMaxDepth) unit_0007(c, 288u, depth + 1u); else { c.pc = 0x0011E4B0u; return; } if (c.pc != 0x0011EF74u) [[unlikely]] return; }
L_0011EF74:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011EFA0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EF8Cu);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x0011EF8Cu) [[unlikely]] return; }
L_0011EF8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011EFA0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011EFA0u);  if (depth < kMaxDepth) unit_0007(c, 304u, depth + 1u); else { c.pc = 0x0011E7F0u; return; } if (c.pc != 0x0011EFA0u) [[unlikely]] return; }
L_0011EFA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 168u)));
    set32(c.r[16], c.r[16].w[0] + 12u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011EEF8u | kUnwind; return; } goto L_0011EEF8; } }
L_0011EFB8:
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
L_0011EFE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 12u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 8u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[4].w[0] + 180u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 168u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0011F04C; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 12u);
    c.budget -= 3;
L_0011F020:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F030u);  if (depth < kMaxDepth) unit_0007(c, 329u, depth + 1u); else { c.pc = 0x0011EB50u; return; } if (c.pc != 0x0011F030u) [[unlikely]] return; }
L_0011F030:
    st32((c.r[16].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 12u);
    set32(c.r[2], ld32((c.r[17].w[0] + 168u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F020u | kUnwind; return; } goto L_0011F020; } }
L_0011F04C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F068:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F07Cu);  if (depth < kMaxDepth) unit_0081(c, 150u, depth + 1u); else { c.pc = 0x00305EE0u; return; } if (c.pc != 0x0011F07Cu) [[unlikely]] return; }
L_0011F07C:
    set32(c.r[4], c.r[2].w[0] + 1u);
    set32(c.r[5], 0u + 13248u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[3].w[0] + 13248u);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[5].d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F0A8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011F0A8u) [[unlikely]] return; }
L_0011F0A8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0011F0FC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011F0E0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F0D8u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0011F0D8u) [[unlikely]] return; }
L_0011F0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F100; } }
L_0011F0E0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F0F4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0011F0F4u) [[unlikely]] return; }
L_0011F0F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F100; } }
L_0011F0FC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F118; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F118u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x0011F118u) [[unlikely]] return; }
L_0011F118:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F130:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x469C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0011F15C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F15C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F168:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F180u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011F180u) [[unlikely]] return; }
L_0011F180:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0011F210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F194u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011F194u) [[unlikely]] return; }
L_0011F194:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0011F210; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 13192u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F210; } }
    c.f[1] = ld32((c.r[5].w[0] + 132u));
    c.r[2].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x469C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0011F1DC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0011F1DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F210; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F1F4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x0011F1F4u) [[unlikely]] return; }
L_0011F1F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F210; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 10000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F210u);  if (depth < kMaxDepth) unit_0061(c, 88u, depth + 1u); else { c.pc = 0x00284FE0u; return; } if (c.pc != 0x0011F210u) [[unlikely]] return; }
L_0011F210:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F228:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 3u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[21], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[22], 0u + 12u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F268u);  if (depth < kMaxDepth) unit_0007(c, 335u, depth + 1u); else { c.pc = 0x0011EBD8u; return; } if (c.pc != 0x0011F268u) [[unlikely]] return; }
L_0011F268:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[18].w[0] + 8u);
    c.budget -= 4;
L_0011F278:
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011F32C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011F32C; } }
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F2A0u);  if (depth < kMaxDepth) unit_0020(c, 47u, depth + 1u); else { c.pc = 0x00180750u; return; } if (c.pc != 0x0011F2A0u) [[unlikely]] return; }
L_0011F2A0:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F2B0u);  if (depth < kMaxDepth) unit_001A(c, 221u, depth + 1u); else { c.pc = 0x0016A638u; return; } if (c.pc != 0x0011F2B0u) [[unlikely]] return; }
L_0011F2B0:
    set32(c.r[16], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F2BCu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x0011F2BCu) [[unlikely]] return; }
L_0011F2BC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[21].d[0];  if (t) { goto L_0011F304; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0011F2EC; } }
    set32(c.r[4], c.r[17].w[0] - 14960u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F2E4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0011F2E4u) [[unlikely]] return; }
L_0011F2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F308; } }
L_0011F2EC:
    set32(c.r[4], c.r[17].w[0] - 14960u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F2FCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0011F2FCu) [[unlikely]] return; }
L_0011F2FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F308; } }
L_0011F304:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F308:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F320; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[20].w[0]);
    c.budget -= 4;
L_0011F320:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F344; } }
L_0011F32C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F278u | kUnwind; return; } goto L_0011F278; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F344:
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
L_0011F370:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F388u);  if (depth < kMaxDepth) unit_0007(c, 324u, depth + 1u); else { c.pc = 0x0011EAB0u; return; } if (c.pc != 0x0011F388u) [[unlikely]] return; }
L_0011F388:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F398:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[15] = c.f[20];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F3C4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0011F3C4u) [[unlikely]] return; }
L_0011F3C4:
    c.f[12] = 0u;
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F3E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0011F3E4u) [[unlikely]] return; }
L_0011F3E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F3ECu);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x0011F3ECu) [[unlikely]] return; }
L_0011F3EC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 44u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F404u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x0011F404u) [[unlikely]] return; }
L_0011F404:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F41Cu);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x0011F41Cu) [[unlikely]] return; }
L_0011F41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F424u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x0011F424u) [[unlikely]] return; }
L_0011F424:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 45u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F43Cu);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x0011F43Cu) [[unlikely]] return; }
L_0011F43C:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F454u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x0011F454u) [[unlikely]] return; }
L_0011F454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F45Cu);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x0011F45Cu) [[unlikely]] return; }
L_0011F45C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 46u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F474u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x0011F474u) [[unlikely]] return; }
L_0011F474:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F48Cu);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x0011F48Cu) [[unlikely]] return; }
L_0011F48C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F4A8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.f[13] = c.r[5].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.f[14] = c.r[6].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[12] = c.r[4].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.f[15] = c.f[20];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F508u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0011F508u) [[unlikely]] return; }
L_0011F508:
    c.f[12] = 0u;
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F528u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0011F528u) [[unlikely]] return; }
L_0011F528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F530u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x0011F530u) [[unlikely]] return; }
L_0011F530:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F548u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x0011F548u) [[unlikely]] return; }
L_0011F548:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F560u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x0011F560u) [[unlikely]] return; }
L_0011F560:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F588:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.f[13] = c.r[5].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[14] = c.r[6].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[12] = c.r[4].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[15] = c.f[20];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F5D8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0011F5D8u) [[unlikely]] return; }
L_0011F5D8:
    c.f[12] = 0u;
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F5F8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0011F5F8u) [[unlikely]] return; }
L_0011F5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F600u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x0011F600u) [[unlikely]] return; }
L_0011F600:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F618u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x0011F618u) [[unlikely]] return; }
L_0011F618:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F630u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x0011F630u) [[unlikely]] return; }
L_0011F630:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F650:
    c.f[12] = c.r[4].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.f[13] = c.r[5].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.r[6].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 3u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[20], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F6B0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x0011F6B0u) [[unlikely]] return; }
L_0011F6B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[17], c.r[2].w[0] - 13832u);
    c.budget -= 2;
L_0011F6B8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_0011F700; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F6D0u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x0011F6D0u) [[unlikely]] return; }
L_0011F6D0:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F6E8u);  if (depth < kMaxDepth) unit_0076(c, 6u, depth + 1u); else { c.pc = 0x002D8040u; return; } if (c.pc != 0x0011F6E8u) [[unlikely]] return; }
L_0011F6E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[19].w[0] - 16016u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F700u);  if (depth < kMaxDepth) unit_0076(c, 188u, depth + 1u); else { c.pc = 0x002DBC60u; return; } if (c.pc != 0x0011F700u) [[unlikely]] return; }
L_0011F700:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F6B8u | kUnwind; return; } goto L_0011F6B8; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[7], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F76Cu);  if (depth < kMaxDepth) unit_0008(c, 59u, depth + 1u); else { c.pc = 0x00120B18u; return; } if (c.pc != 0x0011F76Cu) [[unlikely]] return; }
L_0011F76C:
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 2u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[11].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F794u);  if (depth < kMaxDepth) unit_0008(c, 59u, depth + 1u); else { c.pc = 0x00120B18u; return; } if (c.pc != 0x0011F794u) [[unlikely]] return; }
L_0011F794:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F79Cu);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x0011F79Cu) [[unlikely]] return; }
L_0011F79C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F7ACu);  if (depth < kMaxDepth) unit_0077(c, 27u, depth + 1u); else { c.pc = 0x002DC6B8u; return; } if (c.pc != 0x0011F7ACu) [[unlikely]] return; }
L_0011F7AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011F7C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[16], c.r[4].w[0] + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 14960u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F7F4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x0011F7F4u) [[unlikely]] return; }
L_0011F7F4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0011F8E8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F810u);  if (depth < kMaxDepth) unit_0039(c, 316u, depth + 1u); else { c.pc = 0x001E6B38u; return; } if (c.pc != 0x0011F810u) [[unlikely]] return; }
L_0011F810:
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] - 24848u);
    set32(c.r[9], c.r[7].w[0] + 8u);
    set32(c.r[5], c.r[7].w[0] + 12u);
    c.budget -= 8;
L_0011F830:
    set32(c.r[3], ld32((c.r[5].w[0] - 4u)));
    set32(c.r[6], c.r[4].w[0] << 5);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_0011F84C; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0011F8BC; } }
L_0011F84C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.r[2].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F830u | kUnwind; return; } goto L_0011F830; } }
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], c.r[7].w[0] + 12u);
    c.budget -= 4;
L_0011F870:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[6], c.r[4].w[0] << 5);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_0011F88C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011F8BC; } }
L_0011F88C:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.r[2].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F870u | kUnwind; return; } goto L_0011F870; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F8A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0011F8CC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FA9C; } }
L_0011F8BC:
    set32(c.r[2], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F8A8u | kUnwind; return; } goto L_0011F8A8; } }
L_0011F8CC:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FA94; } }
L_0011F8D8:
    set32(c.r[2], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011F998; } }
L_0011F8E8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0011F9C0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F900u);  if (depth < kMaxDepth) unit_0039(c, 316u, depth + 1u); else { c.pc = 0x001E6B38u; return; } if (c.pc != 0x0011F900u) [[unlikely]] return; }
L_0011F900:
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 24848u);
    set32(c.r[7], c.r[2].w[0] + 648u);
    set32(c.r[9], c.r[2].w[0] + 656u);
    set32(c.r[4], c.r[2].w[0] + 660u);
    c.budget -= 8;
L_0011F920:
    set32(c.r[3], ld32((c.r[4].w[0] - 4u)));
    set32(c.r[6], c.r[5].w[0] << 5);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_0011F93C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F8D8u | kUnwind; return; } goto L_0011F8D8; } }
L_0011F93C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F920u | kUnwind; return; } goto L_0011F920; } }
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], c.r[7].w[0] + 12u);
    c.budget -= 4;
L_0011F960:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[5].w[0] << 5);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_0011F97C; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F8D8u | kUnwind; return; } goto L_0011F8D8; } }
L_0011F97C:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F960u | kUnwind; return; } goto L_0011F960; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011F998:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011FA9C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FA90; } }
L_0011F9B0:
    set32(c.r[2], c.r[7].w[0] + 8u);
    set32(c.r[3], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FA80; } }
L_0011F9C0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F9CCu);  if (depth < kMaxDepth) unit_0083(c, 21u, depth + 1u); else { c.pc = 0x0030C210u; return; } if (c.pc != 0x0011F9CCu) [[unlikely]] return; }
L_0011F9CC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011F9DCu);  if (depth < kMaxDepth) unit_0083(c, 28u, depth + 1u); else { c.pc = 0x0030C2F8u; return; } if (c.pc != 0x0011F9DCu) [[unlikely]] return; }
L_0011F9DC:
    set32(c.r[3], 0u + 648u);
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[2], c.r[2].w[0] - 23552u);
    set32(c.r[9], 0u + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[8], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[6].w[0] + 12u);
    c.budget -= 11;
L_0011FA08:
    set32(c.r[4], ld32((c.r[3].w[0] - 4u)));
    set32(c.r[7], c.r[5].w[0] << 5);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[9].d[0];  if (t) { goto L_0011FA24; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F9B0u | kUnwind; return; } goto L_0011F9B0; } }
L_0011FA24:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FA08u | kUnwind; return; } goto L_0011FA08; } }
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1u);
    set32(c.r[3], c.r[6].w[0] + 12u);
    c.budget -= 4;
L_0011FA48:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[5].w[0] << 5);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[8].d[0];  if (t) { goto L_0011FA64; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011F9B0u | kUnwind; return; } goto L_0011F9B0; } }
L_0011FA64:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FA48u | kUnwind; return; } goto L_0011FA48; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0011FA80:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0011FA9C; } }
    set32(c.r[2], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_0011FA90:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0011FA94:
    st32((c.r[18].w[0]), c.r[10].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_0011FA9C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011FAB8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011FB0C; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FB0C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011FAFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FAF8u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x0011FAF8u) [[unlikely]] return; }
L_0011FAF8:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0011FAFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FB0C; } }
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_0011FB0C:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 27456u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FB2Cu);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x0011FB2Cu) [[unlikely]] return; }
L_0011FB2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FB48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14888u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0011FB64; } }
L_0011FB48:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 40u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[3].w[0] + 152u), c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FB74; } }
L_0011FB64:
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[2].w[0] + 40u), 0u);
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[3].w[0] + 152u), 0u);
    c.budget -= 4;
L_0011FB74:
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FB80u);  if (depth < kMaxDepth) unit_0072(c, 270u, depth + 1u); else { c.pc = 0x002CBA88u; return; } if (c.pc != 0x0011FB80u) [[unlikely]] return; }
L_0011FB80:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FB90u);  if (depth < kMaxDepth) unit_0077(c, 93u, depth + 1u); else { c.pc = 0x002DD600u; return; } if (c.pc != 0x0011FB90u) [[unlikely]] return; }
L_0011FB90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011FBA8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0011FF6C; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FC04u);  if (depth < kMaxDepth) unit_0007(c, 427u, depth + 1u); else { c.pc = 0x0011F7C0u; return; } if (c.pc != 0x0011FC04u) [[unlikely]] return; }
L_0011FC04:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_0011FD70; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[2], 0u + 648u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    st32((c.r[18].w[0] + 4u), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 24848u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], 0u + 96u);
    c.r[5].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[19], c.r[17].w[0] + 4u);
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FC8Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0011FC8Cu) [[unlikely]] return; }
L_0011FC8C:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011FCB4; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 336u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FCB0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0011FCB0u) [[unlikely]] return; }
L_0011FCB0:
    set32(c.r[19], c.r[19].w[0] + 336u);
    c.budget -= 1;
L_0011FCB4:
    set32(c.r[2], 0u + 176u);
    set32(c.r[3], ld32((c.r[18].w[0] + 24u)));
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FCDCu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0011FCDCu) [[unlikely]] return; }
L_0011FCDC:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011FD04; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD00u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0011FD00u) [[unlikely]] return; }
L_0011FD00:
    set32(c.r[19], c.r[19].w[0] + 176u);
    c.budget -= 1;
L_0011FD04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[4], c.r[4].w[0] - 1352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD14u);  if (depth < kMaxDepth) unit_007E(c, 98u, depth + 1u); else { c.pc = 0x002F8B40u; return; } if (c.pc != 0x0011FD14u) [[unlikely]] return; }
L_0011FD14:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], c.r[2].w[0] + 3u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011FD40; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD40u);  if (depth < kMaxDepth) unit_0077(c, 160u, depth + 1u); else { c.pc = 0x002DE530u; return; } if (c.pc != 0x0011FD40u) [[unlikely]] return; }
L_0011FD40:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011FD5C; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD5Cu);  if (depth < kMaxDepth) unit_0077(c, 112u, depth + 1u); else { c.pc = 0x002DDBC8u; return; } if (c.pc != 0x0011FD5Cu) [[unlikely]] return; }
L_0011FD5C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FD68u);  if (depth < kMaxDepth) unit_0073(c, 113u, depth + 1u); else { c.pc = 0x002CDD48u; return; } if (c.pc != 0x0011FD68u) [[unlikely]] return; }
L_0011FD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0011FF6C; } }
L_0011FD70:
    st32((c.r[18].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[11], 0u + 648u);
    st32((c.r[18].w[0]), 0u);
    set32(c.r[2], 0u + 96u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 24848u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[11].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[23], c.r[2].w[0] - 8512u);
    set32(c.r[30], c.r[4].w[0] - 8560u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[12], c.r[3].w[0] + 4u);
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[10], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[9], 0u + 393u);
    set32(c.r[2], ld32((c.r[10].w[0])));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[19], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[10].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 12u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    st32((c.r[16].w[0]), c.r[18].w[0]);
    st32((c.r[16].w[0] + 8u), 0u);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FE14u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0011FE14u) [[unlikely]] return; }
L_0011FE14:
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FE30u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0011FE30u) [[unlikely]] return; }
L_0011FE30:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], 0u + 336u);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[9], 0u + 403u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FE50u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0011FE50u) [[unlikely]] return; }
L_0011FE50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011FE78; } }
    st32((c.r[18].w[0] + 20u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 336u);
    set32(c.r[19], c.r[19].w[0] + 336u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FE78u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0011FE78u) [[unlikely]] return; }
L_0011FE78:
    set32(c.r[2], 0u + 176u);
    set32(c.r[4], ld32((c.r[29].w[0])));
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[9], 0u + 414u);
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[17].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FEA4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0011FEA4u) [[unlikely]] return; }
L_0011FEA4:
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[18].w[0] + 24u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FEC0u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0011FEC0u) [[unlikely]] return; }
L_0011FEC0:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.r[8].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 176u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 424u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FEE0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0011FEE0u) [[unlikely]] return; }
L_0011FEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0011FF08; } }
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 176u);
    set32(c.r[19], c.r[19].w[0] + 176u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF08u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x0011FF08u) [[unlikely]] return; }
L_0011FF08:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00120000u);
    set32(c.r[4], c.r[4].w[0] - 1352u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF18u);  if (depth < kMaxDepth) unit_007E(c, 98u, depth + 1u); else { c.pc = 0x002F8B40u; return; } if (c.pc != 0x0011FF18u) [[unlikely]] return; }
L_0011FF18:
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[7], c.r[2].w[0] + 3u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011FF44; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF44u);  if (depth < kMaxDepth) unit_0077(c, 160u, depth + 1u); else { c.pc = 0x002DE530u; return; } if (c.pc != 0x0011FF44u) [[unlikely]] return; }
L_0011FF44:
    set32(c.r[4], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0011FF60; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF60u);  if (depth < kMaxDepth) unit_0077(c, 112u, depth + 1u); else { c.pc = 0x002DDBC8u; return; } if (c.pc != 0x0011FF60u) [[unlikely]] return; }
L_0011FF60:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FF6Cu);  if (depth < kMaxDepth) unit_0073(c, 113u, depth + 1u); else { c.pc = 0x002CDD48u; return; } if (c.pc != 0x0011FF6Cu) [[unlikely]] return; }
L_0011FF6C:
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
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0011FFA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0008(c, 3u, depth); } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0008(c, 3u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    set32(c.r[17], 0u + 5u);
    set32(c.r[16], c.r[2].w[0] - 24848u);
    set32(c.r[18], 0u - 1u);
    c.budget -= 4;
L_0011FFD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0011FFE8u);  if (depth < kMaxDepth) unit_0008(c, 4u, depth + 1u); else { c.pc = 0x00120048u; return; } if (c.pc != 0x0011FFE8u) [[unlikely]] return; }
L_0011FFE8:
    set32(c.r[16], c.r[16].w[0] + 648u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0011FFD8u | kUnwind; return; } goto L_0011FFD8; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[16], c.r[16].w[0] - 20960u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0008(c, 1u, depth);
}

}
