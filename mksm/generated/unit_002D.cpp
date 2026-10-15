#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_002D[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72,
    73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0,
    0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161,
    0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0,
    0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0,
    0, 296, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0,
    0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364,
    0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383,
    0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406,
    0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0,
    0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0,
};

void unit_002D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001B4000;
    case 2u: goto L_001B4010;
    case 3u: goto L_001B4024;
    case 4u: goto L_001B4034;
    case 5u: goto L_001B4058;
    case 6u: goto L_001B4070;
    case 7u: goto L_001B4094;
    case 8u: goto L_001B40A8;
    case 9u: goto L_001B40C8;
    case 10u: goto L_001B40D0;
    case 11u: goto L_001B4100;
    case 12u: goto L_001B4128;
    case 13u: goto L_001B418C;
    case 14u: goto L_001B41A8;
    case 15u: goto L_001B41B8;
    case 16u: goto L_001B41D4;
    case 17u: goto L_001B41F8;
    case 18u: goto L_001B4200;
    case 19u: goto L_001B4218;
    case 20u: goto L_001B4238;
    case 21u: goto L_001B4248;
    case 22u: goto L_001B4260;
    case 23u: goto L_001B4280;
    case 24u: goto L_001B42C0;
    case 25u: goto L_001B42D0;
    case 26u: goto L_001B42FC;
    case 27u: goto L_001B4310;
    case 28u: goto L_001B4328;
    case 29u: goto L_001B4350;
    case 30u: goto L_001B43B4;
    case 31u: goto L_001B43C4;
    case 32u: goto L_001B43D4;
    case 33u: goto L_001B43FC;
    case 34u: goto L_001B4418;
    case 35u: goto L_001B4440;
    case 36u: goto L_001B44A4;
    case 37u: goto L_001B44B4;
    case 38u: goto L_001B44C4;
    case 39u: goto L_001B44EC;
    case 40u: goto L_001B4500;
    case 41u: goto L_001B4518;
    case 42u: goto L_001B4550;
    case 43u: goto L_001B45B4;
    case 44u: goto L_001B45C4;
    case 45u: goto L_001B45D4;
    case 46u: goto L_001B45FC;
    case 47u: goto L_001B4610;
    case 48u: goto L_001B4630;
    case 49u: goto L_001B4650;
    case 50u: goto L_001B4670;
    case 51u: goto L_001B4680;
    case 52u: goto L_001B46A4;
    case 53u: goto L_001B470C;
    case 54u: goto L_001B4720;
    case 55u: goto L_001B4730;
    case 56u: goto L_001B4744;
    case 57u: goto L_001B4764;
    case 58u: goto L_001B4780;
    case 59u: goto L_001B47A0;
    case 60u: goto L_001B47D4;
    case 61u: goto L_001B47F4;
    case 62u: goto L_001B4810;
    case 63u: goto L_001B484C;
    case 64u: goto L_001B48A8;
    case 65u: goto L_001B48EC;
    case 66u: goto L_001B48F4;
    case 67u: goto L_001B490C;
    case 68u: goto L_001B491C;
    case 69u: goto L_001B4950;
    case 70u: goto L_001B4958;
    case 71u: goto L_001B4960;
    case 72u: goto L_001B497C;
    case 73u: goto L_001B4980;
    case 74u: goto L_001B4988;
    case 75u: goto L_001B49A0;
    case 76u: goto L_001B49B0;
    case 77u: goto L_001B49E4;
    case 78u: goto L_001B49EC;
    case 79u: goto L_001B49F4;
    case 80u: goto L_001B4A10;
    case 81u: goto L_001B4A18;
    case 82u: goto L_001B4A40;
    case 83u: goto L_001B4A58;
    case 84u: goto L_001B4A80;
    case 85u: goto L_001B4A98;
    case 86u: goto L_001B4ABC;
    case 87u: goto L_001B4AC8;
    case 88u: goto L_001B4AD0;
    case 89u: goto L_001B4B00;
    case 90u: goto L_001B4B5C;
    case 91u: goto L_001B4B88;
    case 92u: goto L_001B4BC0;
    case 93u: goto L_001B4BEC;
    case 94u: goto L_001B4C24;
    case 95u: goto L_001B4C2C;
    case 96u: goto L_001B4C40;
    case 97u: goto L_001B4C7C;
    case 98u: goto L_001B4CA0;
    case 99u: goto L_001B4CE4;
    case 100u: goto L_001B4CF8;
    case 101u: goto L_001B4D18;
    case 102u: goto L_001B4DD8;
    case 103u: goto L_001B4DF0;
    case 104u: goto L_001B4E48;
    case 105u: goto L_001B4E80;
    case 106u: goto L_001B4E90;
    case 107u: goto L_001B4EA0;
    case 108u: goto L_001B4F04;
    case 109u: goto L_001B4F2C;
    case 110u: goto L_001B4F98;
    case 111u: goto L_001B4FB0;
    case 112u: goto L_001B4FD0;
    case 113u: goto L_001B4FFC;
    case 114u: goto L_001B5028;
    case 115u: goto L_001B5030;
    case 116u: goto L_001B5038;
    case 117u: goto L_001B5044;
    case 118u: goto L_001B5054;
    case 119u: goto L_001B505C;
    case 120u: goto L_001B5064;
    case 121u: goto L_001B50A0;
    case 122u: goto L_001B50D0;
    case 123u: goto L_001B5108;
    case 124u: goto L_001B5120;
    case 125u: goto L_001B5154;
    case 126u: goto L_001B51B4;
    case 127u: goto L_001B51DC;
    case 128u: goto L_001B5204;
    case 129u: goto L_001B522C;
    case 130u: goto L_001B5254;
    case 131u: goto L_001B526C;
    case 132u: goto L_001B527C;
    case 133u: goto L_001B5298;
    case 134u: goto L_001B52B0;
    case 135u: goto L_001B52C0;
    case 136u: goto L_001B52F8;
    case 137u: goto L_001B531C;
    case 138u: goto L_001B5340;
    case 139u: goto L_001B5364;
    case 140u: goto L_001B5378;
    case 141u: goto L_001B539C;
    case 142u: goto L_001B53B0;
    case 143u: goto L_001B53D4;
    case 144u: goto L_001B53E8;
    case 145u: goto L_001B540C;
    case 146u: goto L_001B5420;
    case 147u: goto L_001B5444;
    case 148u: goto L_001B5478;
    case 149u: goto L_001B54A8;
    case 150u: goto L_001B5548;
    case 151u: goto L_001B555C;
    case 152u: goto L_001B5570;
    case 153u: goto L_001B55B0;
    case 154u: goto L_001B55C8;
    case 155u: goto L_001B55E8;
    case 156u: goto L_001B560C;
    case 157u: goto L_001B5630;
    case 158u: goto L_001B5694;
    case 159u: goto L_001B58B8;
    case 160u: goto L_001B58E8;
    case 161u: goto L_001B58FC;
    case 162u: goto L_001B5908;
    case 163u: goto L_001B5914;
    case 164u: goto L_001B5924;
    case 165u: goto L_001B5940;
    case 166u: goto L_001B59A0;
    case 167u: goto L_001B59B0;
    case 168u: goto L_001B59C8;
    case 169u: goto L_001B59D8;
    case 170u: goto L_001B5A2C;
    case 171u: goto L_001B5A54;
    case 172u: goto L_001B5A78;
    case 173u: goto L_001B5A8C;
    case 174u: goto L_001B5A94;
    case 175u: goto L_001B5AA0;
    case 176u: goto L_001B5AB0;
    case 177u: goto L_001B5AB8;
    case 178u: goto L_001B5AC0;
    case 179u: goto L_001B5AF0;
    case 180u: goto L_001B5B1C;
    case 181u: goto L_001B5B2C;
    case 182u: goto L_001B5B40;
    case 183u: goto L_001B5B68;
    case 184u: goto L_001B5B7C;
    case 185u: goto L_001B5BA0;
    case 186u: goto L_001B5BB4;
    case 187u: goto L_001B5BE0;
    case 188u: goto L_001B5C00;
    case 189u: goto L_001B5C48;
    case 190u: goto L_001B5C58;
    case 191u: goto L_001B5C70;
    case 192u: goto L_001B5CA8;
    case 193u: goto L_001B5CB8;
    case 194u: goto L_001B5CF0;
    case 195u: goto L_001B5D14;
    case 196u: goto L_001B5D28;
    case 197u: goto L_001B5D58;
    case 198u: goto L_001B5D90;
    case 199u: goto L_001B5DC0;
    case 200u: goto L_001B5DD0;
    case 201u: goto L_001B5DE8;
    case 202u: goto L_001B5E00;
    case 203u: goto L_001B5E10;
    case 204u: goto L_001B5E48;
    case 205u: goto L_001B5E58;
    case 206u: goto L_001B5E90;
    case 207u: goto L_001B5EB4;
    case 208u: goto L_001B5EC8;
    case 209u: goto L_001B5EF8;
    case 210u: goto L_001B5F30;
    case 211u: goto L_001B5F60;
    case 212u: goto L_001B5F70;
    case 213u: goto L_001B5F88;
    case 214u: goto L_001B5FA0;
    case 215u: goto L_001B5FB0;
    case 216u: goto L_001B5FE8;
    case 217u: goto L_001B5FF8;
    case 218u: goto L_001B6030;
    case 219u: goto L_001B6054;
    case 220u: goto L_001B6068;
    case 221u: goto L_001B6098;
    case 222u: goto L_001B60D0;
    case 223u: goto L_001B6100;
    case 224u: goto L_001B6110;
    case 225u: goto L_001B6128;
    case 226u: goto L_001B6140;
    case 227u: goto L_001B6150;
    case 228u: goto L_001B6188;
    case 229u: goto L_001B6198;
    case 230u: goto L_001B61D0;
    case 231u: goto L_001B61F4;
    case 232u: goto L_001B6208;
    case 233u: goto L_001B6238;
    case 234u: goto L_001B6270;
    case 235u: goto L_001B62A0;
    case 236u: goto L_001B62B0;
    case 237u: goto L_001B62C8;
    case 238u: goto L_001B62E0;
    case 239u: goto L_001B62F0;
    case 240u: goto L_001B6328;
    case 241u: goto L_001B6338;
    case 242u: goto L_001B6370;
    case 243u: goto L_001B6394;
    case 244u: goto L_001B63A8;
    case 245u: goto L_001B63D8;
    case 246u: goto L_001B6410;
    case 247u: goto L_001B6440;
    case 248u: goto L_001B6450;
    case 249u: goto L_001B6468;
    case 250u: goto L_001B6480;
    case 251u: goto L_001B6490;
    case 252u: goto L_001B64C8;
    case 253u: goto L_001B64D8;
    case 254u: goto L_001B6510;
    case 255u: goto L_001B6534;
    case 256u: goto L_001B6548;
    case 257u: goto L_001B6578;
    case 258u: goto L_001B65B0;
    case 259u: goto L_001B65E0;
    case 260u: goto L_001B65F0;
    case 261u: goto L_001B6608;
    case 262u: goto L_001B6620;
    case 263u: goto L_001B6630;
    case 264u: goto L_001B6668;
    case 265u: goto L_001B6678;
    case 266u: goto L_001B66B0;
    case 267u: goto L_001B66D4;
    case 268u: goto L_001B66E8;
    case 269u: goto L_001B6718;
    case 270u: goto L_001B6750;
    case 271u: goto L_001B6780;
    case 272u: goto L_001B6790;
    case 273u: goto L_001B67A8;
    case 274u: goto L_001B67C0;
    case 275u: goto L_001B67D0;
    case 276u: goto L_001B6808;
    case 277u: goto L_001B6818;
    case 278u: goto L_001B6850;
    case 279u: goto L_001B6874;
    case 280u: goto L_001B6888;
    case 281u: goto L_001B68B8;
    case 282u: goto L_001B68F0;
    case 283u: goto L_001B6920;
    case 284u: goto L_001B6930;
    case 285u: goto L_001B6948;
    case 286u: goto L_001B6960;
    case 287u: goto L_001B6970;
    case 288u: goto L_001B699C;
    case 289u: goto L_001B69AC;
    case 290u: goto L_001B69C0;
    case 291u: goto L_001B6A18;
    case 292u: goto L_001B6A24;
    case 293u: goto L_001B6A5C;
    case 294u: goto L_001B6A70;
    case 295u: goto L_001B6A78;
    case 296u: goto L_001B6A84;
    case 297u: goto L_001B6A94;
    case 298u: goto L_001B6A9C;
    case 299u: goto L_001B6AA4;
    case 300u: goto L_001B6AD0;
    case 301u: goto L_001B6AF4;
    case 302u: goto L_001B6B08;
    case 303u: goto L_001B6B30;
    case 304u: goto L_001B6B40;
    case 305u: goto L_001B6B68;
    case 306u: goto L_001B6B88;
    case 307u: goto L_001B6B98;
    case 308u: goto L_001B6BB0;
    case 309u: goto L_001B6BDC;
    case 310u: goto L_001B6BEC;
    case 311u: goto L_001B6C00;
    case 312u: goto L_001B6C34;
    case 313u: goto L_001B6C58;
    case 314u: goto L_001B6C88;
    case 315u: goto L_001B6CA8;
    case 316u: goto L_001B6CF0;
    case 317u: goto L_001B6D08;
    case 318u: goto L_001B6D38;
    case 319u: goto L_001B6D98;
    case 320u: goto L_001B6DCC;
    case 321u: goto L_001B6DF0;
    case 322u: goto L_001B6E14;
    case 323u: goto L_001B6E48;
    case 324u: goto L_001B6E74;
    case 325u: goto L_001B6E84;
    case 326u: goto L_001B6E98;
    case 327u: goto L_001B6EA8;
    case 328u: goto L_001B6EC0;
    case 329u: goto L_001B6ED0;
    case 330u: goto L_001B6F00;
    case 331u: goto L_001B6F60;
    case 332u: goto L_001B6F94;
    case 333u: goto L_001B6FB8;
    case 334u: goto L_001B6FDC;
    case 335u: goto L_001B7010;
    case 336u: goto L_001B703C;
    case 337u: goto L_001B704C;
    case 338u: goto L_001B7060;
    case 339u: goto L_001B7070;
    case 340u: goto L_001B7088;
    case 341u: goto L_001B7098;
    case 342u: goto L_001B70C8;
    case 343u: goto L_001B71A8;
    case 344u: goto L_001B71D4;
    case 345u: goto L_001B71E4;
    case 346u: goto L_001B71F8;
    case 347u: goto L_001B7234;
    case 348u: goto L_001B7248;
    case 349u: goto L_001B7288;
    case 350u: goto L_001B72C8;
    case 351u: goto L_001B72F4;
    case 352u: goto L_001B7304;
    case 353u: goto L_001B732C;
    case 354u: goto L_001B7340;
    case 355u: goto L_001B7364;
    case 356u: goto L_001B7374;
    case 357u: goto L_001B7390;
    case 358u: goto L_001B73B4;
    case 359u: goto L_001B73C8;
    case 360u: goto L_001B7410;
    case 361u: goto L_001B7428;
    case 362u: goto L_001B7440;
    case 363u: goto L_001B7450;
    case 364u: goto L_001B747C;
    case 365u: goto L_001B748C;
    case 366u: goto L_001B74A0;
    case 367u: goto L_001B74D4;
    case 368u: goto L_001B74F8;
    case 369u: goto L_001B7524;
    case 370u: goto L_001B7540;
    case 371u: goto L_001B757C;
    case 372u: goto L_001B7584;
    case 373u: goto L_001B7598;
    case 374u: goto L_001B75E0;
    case 375u: goto L_001B7600;
    case 376u: goto L_001B7630;
    case 377u: goto L_001B7710;
    case 378u: goto L_001B7744;
    case 379u: goto L_001B7768;
    case 380u: goto L_001B778C;
    case 381u: goto L_001B77C0;
    case 382u: goto L_001B77EC;
    case 383u: goto L_001B77FC;
    case 384u: goto L_001B7810;
    case 385u: goto L_001B7820;
    case 386u: goto L_001B7838;
    case 387u: goto L_001B7848;
    case 388u: goto L_001B7878;
    case 389u: goto L_001B7958;
    case 390u: goto L_001B798C;
    case 391u: goto L_001B79B0;
    case 392u: goto L_001B79D4;
    case 393u: goto L_001B7A08;
    case 394u: goto L_001B7A34;
    case 395u: goto L_001B7A44;
    case 396u: goto L_001B7A58;
    case 397u: goto L_001B7A68;
    case 398u: goto L_001B7A80;
    case 399u: goto L_001B7A90;
    case 400u: goto L_001B7AC0;
    case 401u: goto L_001B7BA0;
    case 402u: goto L_001B7BD4;
    case 403u: goto L_001B7BF8;
    case 404u: goto L_001B7C1C;
    case 405u: goto L_001B7C50;
    case 406u: goto L_001B7C7C;
    case 407u: goto L_001B7C8C;
    case 408u: goto L_001B7CA0;
    case 409u: goto L_001B7CB0;
    case 410u: goto L_001B7CC8;
    case 411u: goto L_001B7CD8;
    case 412u: goto L_001B7D04;
    case 413u: goto L_001B7D14;
    case 414u: goto L_001B7D28;
    case 415u: goto L_001B7D84;
    case 416u: goto L_001B7DA4;
    case 417u: goto L_001B7DB8;
    case 418u: goto L_001B7DC0;
    case 419u: goto L_001B7DCC;
    case 420u: goto L_001B7DDC;
    case 421u: goto L_001B7DE4;
    case 422u: goto L_001B7DEC;
    case 423u: goto L_001B7E18;
    case 424u: goto L_001B7E3C;
    case 425u: goto L_001B7E50;
    case 426u: goto L_001B7E78;
    case 427u: goto L_001B7E88;
    case 428u: goto L_001B7EE0;
    case 429u: goto L_001B7EF0;
    case 430u: goto L_001B7F08;
    case 431u: goto L_001B7F50;
    case 432u: goto L_001B7F60;
    case 433u: goto L_001B7F94;
    case 434u: goto L_001B7FB8;
    case 435u: goto L_001B7FE4;
    default: bad_entry(c, 0x001B4000u); return;
    }
L_001B4000:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4010u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001B4010u) [[unlikely]] return; }
L_001B4010:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4024u);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x001B4024u) [[unlikely]] return; }
L_001B4024:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4034u);  if (depth < kMaxDepth) unit_002B(c, 386u, depth + 1u); else { c.pc = 0x001AFAD0u; return; } if (c.pc != 0x001B4034u) [[unlikely]] return; }
L_001B4034:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4058:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4070u);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001B4070u) [[unlikely]] return; }
L_001B4070:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[16].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 160u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 164u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4094u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4094u) [[unlikely]] return; }
L_001B4094:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B40A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), c.r[6].w[0]);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B40C8u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B40C8u) [[unlikely]] return; }
L_001B40C8:
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[16].w[0] + 56u);
    c.budget -= 2;
L_001B40D0:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B40D0u | kUnwind; return; } goto L_001B40D0; } }
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4100:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[4].w[0] + 8u);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4128u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B4128u) [[unlikely]] return; }
L_001B4128:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4170; } }
    set32(c.r[2], 0u + 10u);
    set32(c.r[5], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001B4148u);  goto L_001B414C; }
L_001B414C:
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] + 48u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B417C; } }
L_001B4170:
    set32(c.r[2], c.r[16].w[0] + 49u);
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B417C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B418Cu);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001B418Cu) [[unlikely]] return; }
L_001B418C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B41A8:
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_001B41B8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B41D4; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B41D4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B41B8u | kUnwind; return; } goto L_001B41B8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B41F8:
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_001B4200:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4218; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4218:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4200u | kUnwind; return; } goto L_001B4200; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4238:
    set32(c.r[4], c.r[4].w[0] + 40u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_001B4248:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4260; } }
    st32((c.r[4].w[0]), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4260:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4248u | kUnwind; return; } goto L_001B4248; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4280:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] << 2);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 40u), 0u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 14320u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B4310; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B42C0u);  if (depth < kMaxDepth) unit_002D(c, 34u, depth + 1u); else { c.pc = 0x001B4418u; return; } if (c.pc != 0x001B42C0u) [[unlikely]] return; }
L_001B42C0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B42D0u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001B42D0u) [[unlikely]] return; }
L_001B42D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B42FCu);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x001B42FCu) [[unlikely]] return; }
L_001B42FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4310u);  if (depth < kMaxDepth) unit_002D(c, 41u, depth + 1u); else { c.pc = 0x001B4518u; return; } if (c.pc != 0x001B4310u) [[unlikely]] return; }
L_001B4310:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4328:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[4].w[0] + 8u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4350u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B4350u) [[unlikely]] return; }
L_001B4350:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4398; } }
    set32(c.r[2], 0u + 10u);
    set32(c.r[5], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001B4370u);  goto L_001B4374; }
L_001B4374:
    st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] + 48u);
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B43A4; } }
L_001B4398:
    set32(c.r[2], c.r[16].w[0] + 49u);
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B43A4:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B43B4u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001B43B4u) [[unlikely]] return; }
L_001B43B4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B43C4u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001B43C4u) [[unlikely]] return; }
L_001B43C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 9488u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B43D4u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001B43D4u) [[unlikely]] return; }
L_001B43D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001B43FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 30080u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B43FCu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001B43FCu) [[unlikely]] return; }
L_001B43FC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4418:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[4].w[0] + 8u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4440u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B4440u) [[unlikely]] return; }
L_001B4440:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4488; } }
    set32(c.r[2], 0u + 10u);
    set32(c.r[5], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001B4460u);  goto L_001B4464; }
L_001B4464:
    st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] + 48u);
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4494; } }
L_001B4488:
    set32(c.r[2], c.r[16].w[0] + 49u);
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B4494:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B44A4u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001B44A4u) [[unlikely]] return; }
L_001B44A4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B44B4u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001B44B4u) [[unlikely]] return; }
L_001B44B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 9488u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B44C4u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001B44C4u) [[unlikely]] return; }
L_001B44C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001B44EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 30080u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B44ECu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001B44ECu) [[unlikely]] return; }
L_001B44EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4500u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001B4500u) [[unlikely]] return; }
L_001B4500:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4518:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] + 8u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4550u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B4550u) [[unlikely]] return; }
L_001B4550:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B4598; } }
    set32(c.r[2], 0u + 10u);
    set32(c.r[5], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x001B4570u);  goto L_001B4574; }
L_001B4574:
    st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + 48u);
    set32(c.r[4], c.r[4].w[0] + 48u);
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B45A4; } }
L_001B4598:
    set32(c.r[2], c.r[16].w[0] + 49u);
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001B45A4:
    set32(c.r[5], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45B4u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001B45B4u) [[unlikely]] return; }
L_001B45B4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45C4u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001B45C4u) [[unlikely]] return; }
L_001B45C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 9488u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45D4u);  if (depth < kMaxDepth) unit_0094(c, 154u, depth + 1u); else { c.pc = 0x00351C18u; return; } if (c.pc != 0x001B45D4u) [[unlikely]] return; }
L_001B45D4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001B45FC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] - 30080u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B45FCu);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001B45FCu) [[unlikely]] return; }
L_001B45FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4638; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4610u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x00119CD8u; return; } if (c.pc != 0x001B4610u) [[unlikely]] return; }
L_001B4610:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4630u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B4630u) [[unlikely]] return; }
L_001B4630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4650; } }
L_001B4638:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4650u);  if (depth < kMaxDepth) unit_0049(c, 109u, depth + 1u); else { c.pc = 0x00225818u; return; } if (c.pc != 0x001B4650u) [[unlikely]] return; }
L_001B4650:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4670:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4680:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B46A4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B46A4u) [[unlikely]] return; }
L_001B46A4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B46F0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B46D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B46E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B476C; } }
L_001B46D0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001B474C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B476C; } }
L_001B46E4:
    c.f[12] = 0u;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4754; } }
L_001B46F0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] - 14960u);
    c.f[20] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B470Cu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B470Cu) [[unlikely]] return; }
L_001B470C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4720u);  if (depth < kMaxDepth) unit_002D(c, 59u, depth + 1u); else { c.pc = 0x001B47A0u; return; } if (c.pc != 0x001B4720u) [[unlikely]] return; }
L_001B4720:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4730u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001B4730u) [[unlikely]] return; }
L_001B4730:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4744u);  if (depth < kMaxDepth) unit_002D(c, 59u, depth + 1u); else { c.pc = 0x001B47A0u; return; } if (c.pc != 0x001B4744u) [[unlikely]] return; }
L_001B4744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4780; } }
L_001B474C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[1].w[0];
    c.budget -= 2;
L_001B4754:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4764u);  if (depth < kMaxDepth) unit_002D(c, 59u, depth + 1u); else { c.pc = 0x001B47A0u; return; } if (c.pc != 0x001B4764u) [[unlikely]] return; }
L_001B4764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4780; } }
L_001B476C:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4780u);  if (depth < kMaxDepth) unit_002D(c, 59u, depth + 1u); else { c.pc = 0x001B47A0u; return; } if (c.pc != 0x001B4780u) [[unlikely]] return; }
L_001B4780:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B47A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47D4u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x001B47D4u) [[unlikely]] return; }
L_001B47D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B47F4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    c.f[12] = c.f[20];
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B47F4u);  if (depth < kMaxDepth) unit_002E(c, 456u, depth + 1u); else { c.pc = 0x001BB328u; return; } if (c.pc != 0x001B47F4u) [[unlikely]] return; }
L_001B47F4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4810:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[6].d[0] | c.r[16].d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B48A4; } }
    set32(c.r[2], c.r[6].w[0] + 256u);
    c.budget -= 1;
L_001B484C:
    ldl(c.r[4], (c.r[6].w[0] + 7u));
    ldr(c.r[4], (c.r[6].w[0]));
    ldl(c.r[5], (c.r[6].w[0] + 15u));
    ldr(c.r[5], (c.r[6].w[0] + 8u));
    ldl(c.r[9], (c.r[6].w[0] + 23u));
    ldr(c.r[9], (c.r[6].w[0] + 16u));
    ldl(c.r[10], (c.r[6].w[0] + 31u));
    ldr(c.r[10], (c.r[6].w[0] + 24u));
    sdl(c.r[4], (c.r[3].w[0] + 7u));
    sdr(c.r[4], (c.r[3].w[0]));
    sdl(c.r[5], (c.r[3].w[0] + 15u));
    sdr(c.r[5], (c.r[3].w[0] + 8u));
    sdl(c.r[9], (c.r[3].w[0] + 23u));
    sdr(c.r[9], (c.r[3].w[0] + 16u));
    sdl(c.r[10], (c.r[3].w[0] + 31u));
    sdr(c.r[10], (c.r[3].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B484Cu | kUnwind; return; } goto L_001B484C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B48D8; } }
L_001B48A4:
    set32(c.r[2], c.r[6].w[0] + 256u);
    c.budget -= 1;
L_001B48A8:
    c.r[4].d[0] = ld64((c.r[6].w[0]));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[9].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[10].d[0] = ld64((c.r[6].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[4].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[9].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[10].d[0]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B48A8u | kUnwind; return; } goto L_001B48A8; } }
L_001B48D8:
    st32((c.r[16].w[0] + 256u), c.r[7].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 260u), c.f[12]);
    st32((c.r[16].w[0] + 264u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 268u), c.f[13]);
    c.budget -= 5;
L_001B48EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B48F4u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B48F4u) [[unlikely]] return; }
L_001B48F4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4948; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B490Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B490Cu) [[unlikely]] return; }
L_001B490C:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B491Cu);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B491Cu) [[unlikely]] return; }
L_001B491C:
    set32(c.r[17], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[2].w[0] + 12u), c.r[17].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B494C; } }
L_001B4948:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B494C:
    st32((c.r[16].w[0] + 272u), c.r[3].w[0]);
    c.budget -= 1;
L_001B4950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4960; } }
L_001B4958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4960u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B4960u) [[unlikely]] return; }
L_001B4960:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001B497C; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B497C; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B497Cu);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B497Cu) [[unlikely]] return; }
L_001B497C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4988u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B4988u) [[unlikely]] return; }
L_001B4988:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B49DC; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49A0u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B49A0u) [[unlikely]] return; }
L_001B49A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49B0u);  if (depth < kMaxDepth) unit_0044(c, 45u, depth + 1u); else { c.pc = 0x00211100u; return; } if (c.pc != 0x001B49B0u) [[unlikely]] return; }
L_001B49B0:
    set32(c.r[20], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[2].w[0] + 12u), c.r[20].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B49E0; } }
L_001B49DC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B49E0:
    st32((c.r[16].w[0] + 276u), c.r[3].w[0]);
    c.budget -= 1;
L_001B49E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B49F4; } }
L_001B49EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B49F4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B49F4u) [[unlikely]] return; }
L_001B49F4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001B4A10; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001B4A10; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A10u);  if (depth < kMaxDepth) unit_0039(c, 324u, depth + 1u); else { c.pc = 0x001E6BF8u; return; } if (c.pc != 0x001B4A10u) [[unlikely]] return; }
L_001B4A10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A18u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B4A18u) [[unlikely]] return; }
L_001B4A18:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4A48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x515F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 33910ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], 0u + 109u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A40u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B4A40u) [[unlikely]] return; }
L_001B4A40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4A4C; } }
L_001B4A48:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4A4C:
    st32((c.r[16].w[0] + 280u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A58u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B4A58u) [[unlikely]] return; }
L_001B4A58:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4A88; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x515F0000u);
    c.r[1].d[0] = c.r[1].d[0] | 33910ull;
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], 0u + 111u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A80u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B4A80u) [[unlikely]] return; }
L_001B4A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4A8C; } }
L_001B4A88:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4A8C:
    st32((c.r[16].w[0] + 284u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4A98u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B4A98u) [[unlikely]] return; }
L_001B4A98:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4ABC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 110u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4ABCu);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B4ABCu) [[unlikely]] return; }
L_001B4ABC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4AD8; } }
L_001B4AC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B4958u | kUnwind; return; } goto L_001B4958; } }
L_001B4AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B49ECu | kUnwind; return; } goto L_001B49EC; } }
L_001B4AD8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4B00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3E10000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.vu0.vf[2] = c.r[6];
    c.f[20] = 0u;
    set32(c.r[3], c.f[0]);
    set32(c.r[2], c.f[20]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[2], c.r[2]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    vu::add(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B5Cu);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B4B5Cu) [[unlikely]] return; }
L_001B4B5C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4BC8; } }
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4B88u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001B4B88u) [[unlikely]] return; }
L_001B4B88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[17].w[0] + 260u));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 256u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4BC0u);  if (depth < kMaxDepth) unit_0073(c, 211u, depth + 1u); else { c.pc = 0x002CEFE8u; return; } if (c.pc != 0x001B4BC0u) [[unlikely]] return; }
L_001B4BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B4C24; } }
L_001B4BC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4BECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001B4BECu) [[unlikely]] return; }
L_001B4BEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.f[0] = ld32((c.r[17].w[0] + 268u));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 264u)));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C24u);  if (depth < kMaxDepth) unit_0073(c, 211u, depth + 1u); else { c.pc = 0x002CEFE8u; return; } if (c.pc != 0x001B4C24u) [[unlikely]] return; }
L_001B4C24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C2Cu);  if (depth < kMaxDepth) unit_0036(c, 344u, depth + 1u); else { c.pc = 0x001DAB40u; return; } if (c.pc != 0x001B4C2Cu) [[unlikely]] return; }
L_001B4C2C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C40u);  if (depth < kMaxDepth) unit_002C(c, 474u, depth + 1u); else { c.pc = 0x001B3538u; return; } if (c.pc != 0x001B4C40u) [[unlikely]] return; }
L_001B4C40:
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x36D80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].d[0] = c.r[5].d[0] | 39047ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4C7Cu);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x001B4C7Cu) [[unlikely]] return; }
L_001B4C7C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 280u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4CBC; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 2;
L_001B4CBC:
    set32(c.r[3], ld32((c.r[4].w[0] + 284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4CD0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 2;
L_001B4CD0:
    c.r[2].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4CE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4CE4u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x001B4CE4u) [[unlikely]] return; }
L_001B4CE4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4CF8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[20] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4D18u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B4D18u) [[unlikely]] return; }
L_001B4D18:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4DB8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4D40; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001B4D40:
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B4D64; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4D64:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4DB8; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B4D88; } }
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_001B4D88:
    set32(c.r[2], ld32((c.r[16].w[0] + 276u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B4DAC; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4DAC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001B4DBC; } }
L_001B4DB8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4DBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4DD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4DF0u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B4DF0u) [[unlikely]] return; }
L_001B4DF0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B4E2C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 272u)));
    set32(c.r[3], 0u + 1u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001B4E20; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B4E20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B4E30; } }
L_001B4E2C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001B4E30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4E48:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B4E80; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B4E80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28592u);
    set32(c.r[5], c.r[5].w[0] - 29912u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4E80u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x001B4E80u) [[unlikely]] return; }
L_001B4E80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4E90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B4EA0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] + 28592u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[8].d[0] + 0ull;
    c.r[23].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F04u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x001B4F04u) [[unlikely]] return; }
L_001B4F04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F2Cu);  if (depth < kMaxDepth) unit_002C(c, 486u, depth + 1u); else { c.pc = 0x001B36C0u; return; } if (c.pc != 0x001B4F2Cu) [[unlikely]] return; }
L_001B4F2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 29984u);
    st32((c.r[30].w[0] + 64u), c.r[22].w[0]);
    st32((c.r[30].w[0] + 68u), c.r[23].w[0]);
    set32(c.r[4], 0u + 37u);
    st32((c.r[30].w[0] + 72u), c.r[21].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[30].w[0] + 76u), c.r[20].w[0]);
    st32((c.r[30].w[0] + 44u), c.r[3].w[0]);
    c.f[3] = ld32((c.r[30].w[0] + 16u));
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.f[2] = ld32((c.r[30].w[0] + 20u));
    st32((c.r[30].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 200u)));
    c.f[1] = ld32((c.r[30].w[0] + 24u));
    c.f[0] = ld32((c.r[30].w[0] + 28u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4E6E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 27432ull;
    c.f[20] = c.r[1].w[0];
    st32((c.r[30].w[0] + 84u), c.r[2].w[0]);
    c.f[12] = c.f[20];
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    st32((c.r[29].w[0] + 12u), c.f[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4F98u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B4F98u) [[unlikely]] return; }
L_001B4F98:
    st32((c.r[30].w[0] + 88u), c.r[2].w[0]);
    c.f[12] = c.f[20];
    set32(c.r[4], 0u + 7u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FB0u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B4FB0u) [[unlikely]] return; }
L_001B4FB0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[4], 0u + 5u);
    st32((c.r[30].w[0] + 92u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FD0u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B4FD0u) [[unlikely]] return; }
L_001B4FD0:
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4D40000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[4], 0u + 36u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B4FFCu);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B4FFCu) [[unlikely]] return; }
L_001B4FFC:
    c.f[0] = ld32((c.r[30].w[0] + 20u));
    set32(c.r[4], 0u + 81u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5028u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B5028u) [[unlikely]] return; }
L_001B5028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5038; } }
L_001B5030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5038u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B5038u) [[unlikely]] return; }
L_001B5038:
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5064; } }
L_001B5044:
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5054u);  if (depth < kMaxDepth) unit_002C(c, 494u, depth + 1u); else { c.pc = 0x001B3780u; return; } if (c.pc != 0x001B5054u) [[unlikely]] return; }
L_001B5054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5030u | kUnwind; return; } goto L_001B5030; } }
L_001B505C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5064u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B5064u) [[unlikely]] return; }
L_001B5064:
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
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B50A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29984u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[4], c.r[4].w[0] + 28592u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B50D0u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B50D0u) [[unlikely]] return; }
L_001B50D0:
    set32(c.r[3], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B50E4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 2;
L_001B50E4:
    set32(c.r[3], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001B50F8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 356u), c.r[2].w[0]);
    c.budget -= 2;
L_001B50F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5108u);  if (depth < kMaxDepth) unit_002C(c, 494u, depth + 1u); else { c.pc = 0x001B3780u; return; } if (c.pc != 0x001B5108u) [[unlikely]] return; }
L_001B5108:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5120:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[16].w[0] + 16u);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005C0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 20768u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5154u);  if (depth < kMaxDepth) unit_0008(c, 104u, depth + 1u); else { c.pc = 0x001210E0u; return; } if (c.pc != 0x001B5154u) [[unlikely]] return; }
L_001B5154:
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    c.budget -= 17;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001B51B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51B4u);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x001B51B4u) [[unlikely]] return; }
L_001B51B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001B51DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B51DCu);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x001B51DCu) [[unlikely]] return; }
L_001B51DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001B5204; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5204u);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x001B5204u) [[unlikely]] return; }
L_001B5204:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001B522C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B522Cu);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x001B522Cu) [[unlikely]] return; }
L_001B522C:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001B5254; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2848u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5254u);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x001B5254u) [[unlikely]] return; }
L_001B5254:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B526Cu);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B526Cu) [[unlikely]] return; }
L_001B526C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B527Cu);  if (depth < kMaxDepth) unit_002C(c, 505u, depth + 1u); else { c.pc = 0x001B38A8u; return; } if (c.pc != 0x001B527Cu) [[unlikely]] return; }
L_001B527C:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5298:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B52B0u);  if (depth < kMaxDepth) unit_002D(c, 104u, depth + 1u); else { c.pc = 0x001B4E48u; return; } if (c.pc != 0x001B52B0u) [[unlikely]] return; }
L_001B52B0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B52C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[17].w[0] + 116u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 8u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
L_001B52F8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[19], c.r[19].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B531C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B531Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B531Cu) [[unlikely]] return; }
L_001B531C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B52F8u | kUnwind; return; } goto L_001B52F8; } }
    set32(c.r[18], c.r[17].w[0] + 156u);
    set32(c.r[22], c.r[17].w[0] + 316u);
    set32(c.r[19], c.r[17].w[0] + 196u);
    set32(c.r[20], c.r[17].w[0] + 236u);
    set32(c.r[21], c.r[17].w[0] + 276u);
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], 0u + 8u);
    c.budget -= 7;
L_001B5340:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B5364; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5364u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B5364u) [[unlikely]] return; }
L_001B5364:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5340u | kUnwind; return; } goto L_001B5340; } }
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], 0u + 8u);
    c.budget -= 3;
L_001B5378:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B539C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B539Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B539Cu) [[unlikely]] return; }
L_001B539C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5378u | kUnwind; return; } goto L_001B5378; } }
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[17], 0u + 8u);
    c.budget -= 3;
L_001B53B0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B53D4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B53D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B53D4u) [[unlikely]] return; }
L_001B53D4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B53B0u | kUnwind; return; } goto L_001B53B0; } }
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[17], 0u + 8u);
    c.budget -= 3;
L_001B53E8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B540C; } }
    set32(c.r[2], ld32((c.r[21].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B540Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B540Cu) [[unlikely]] return; }
L_001B540C:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B53E8u | kUnwind; return; } goto L_001B53E8; } }
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[17], 0u + 8u);
    c.budget -= 3;
L_001B5420:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B5444; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5444u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B5444u) [[unlikely]] return; }
L_001B5444:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5420u | kUnwind; return; } goto L_001B5420; } }
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
L_001B5478:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B553C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B553C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[5], c.r[2].w[0] + 28656u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
L_001B54A8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B54A8u | kUnwind; return; } goto L_001B54A8; } }
    set32(c.r[2], 0u + 73u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 16454u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[3], 0u + 12u);
    st32((c.r[5].w[0] + 60u), 0u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[2], (c.r[5].w[0] + 7u));
    sdr(c.r[2], (c.r[5].w[0]));
    st32((c.r[5].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    ldl(c.r[6], (c.r[29].w[0] + 7u));
    ldr(c.r[6], (c.r[29].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[6], (c.r[3].w[0] + 7u));
    sdr(c.r[6], (c.r[3].w[0]));
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 30;
L_001B553C:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5548:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B555Cu);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B555Cu) [[unlikely]] return; }
L_001B555C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5570:
    set32(c.r[13], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[12], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[4].w[0]), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[13].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[12].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B55B0:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B55C8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 8u);
    c.budget -= 8;
L_001B55E8:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[18], c.r[18].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_001B560C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B560Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B560Cu) [[unlikely]] return; }
L_001B560C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B55E8u | kUnwind; return; } goto L_001B55E8; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5630:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[8], c.r[8].w[0] + 28656u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    c.f[13] = 0u;
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[18], ld32((c.r[29].w[0] + 144u)));
    set32(c.r[19], ld32((c.r[29].w[0] + 152u)));
    set32(c.r[17], ld32((c.r[29].w[0] + 160u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5694u);  if (depth < kMaxDepth) unit_002C(c, 509u, depth + 1u); else { c.pc = 0x001B38F0u; return; } if (c.pc != 0x001B5694u) [[unlikely]] return; }
L_001B5694:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 112u), c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] - 29896u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 44u), c.r[3].w[0]);
    ldl(c.r[3], (c.r[21].w[0] + 7u));
    ldr(c.r[3], (c.r[21].w[0]));
    ldl(c.r[4], (c.r[21].w[0] + 15u));
    ldr(c.r[4], (c.r[21].w[0] + 8u));
    ldl(c.r[5], (c.r[21].w[0] + 23u));
    ldr(c.r[5], (c.r[21].w[0] + 16u));
    ldl(c.r[6], (c.r[21].w[0] + 31u));
    ldr(c.r[6], (c.r[21].w[0] + 24u));
    sdl(c.r[3], (c.r[16].w[0] + 123u));
    sdr(c.r[3], (c.r[16].w[0] + 116u));
    sdl(c.r[4], (c.r[16].w[0] + 131u));
    sdr(c.r[4], (c.r[16].w[0] + 124u));
    sdl(c.r[5], (c.r[16].w[0] + 139u));
    sdr(c.r[5], (c.r[16].w[0] + 132u));
    sdl(c.r[6], (c.r[16].w[0] + 147u));
    sdr(c.r[6], (c.r[16].w[0] + 140u));
    ldl(c.r[3], (c.r[21].w[0] + 39u));
    ldr(c.r[3], (c.r[21].w[0] + 32u));
    sdl(c.r[3], (c.r[16].w[0] + 155u));
    sdr(c.r[3], (c.r[16].w[0] + 148u));
    ldl(c.r[3], (c.r[22].w[0] + 7u));
    ldr(c.r[3], (c.r[22].w[0]));
    ldl(c.r[4], (c.r[22].w[0] + 15u));
    ldr(c.r[4], (c.r[22].w[0] + 8u));
    ldl(c.r[5], (c.r[22].w[0] + 23u));
    ldr(c.r[5], (c.r[22].w[0] + 16u));
    ldl(c.r[6], (c.r[22].w[0] + 31u));
    ldr(c.r[6], (c.r[22].w[0] + 24u));
    sdl(c.r[3], (c.r[16].w[0] + 163u));
    sdr(c.r[3], (c.r[16].w[0] + 156u));
    sdl(c.r[4], (c.r[16].w[0] + 171u));
    sdr(c.r[4], (c.r[16].w[0] + 164u));
    sdl(c.r[5], (c.r[16].w[0] + 179u));
    sdr(c.r[5], (c.r[16].w[0] + 172u));
    sdl(c.r[6], (c.r[16].w[0] + 187u));
    sdr(c.r[6], (c.r[16].w[0] + 180u));
    ldl(c.r[3], (c.r[22].w[0] + 39u));
    ldr(c.r[3], (c.r[22].w[0] + 32u));
    sdl(c.r[3], (c.r[16].w[0] + 195u));
    sdr(c.r[3], (c.r[16].w[0] + 188u));
    ldl(c.r[3], (c.r[23].w[0] + 7u));
    ldr(c.r[3], (c.r[23].w[0]));
    ldl(c.r[4], (c.r[23].w[0] + 15u));
    ldr(c.r[4], (c.r[23].w[0] + 8u));
    ldl(c.r[5], (c.r[23].w[0] + 23u));
    ldr(c.r[5], (c.r[23].w[0] + 16u));
    ldl(c.r[6], (c.r[23].w[0] + 31u));
    ldr(c.r[6], (c.r[23].w[0] + 24u));
    sdl(c.r[3], (c.r[16].w[0] + 203u));
    sdr(c.r[3], (c.r[16].w[0] + 196u));
    sdl(c.r[4], (c.r[16].w[0] + 211u));
    sdr(c.r[4], (c.r[16].w[0] + 204u));
    sdl(c.r[5], (c.r[16].w[0] + 219u));
    sdr(c.r[5], (c.r[16].w[0] + 212u));
    sdl(c.r[6], (c.r[16].w[0] + 227u));
    sdr(c.r[6], (c.r[16].w[0] + 220u));
    ldl(c.r[3], (c.r[23].w[0] + 39u));
    ldr(c.r[3], (c.r[23].w[0] + 32u));
    sdl(c.r[3], (c.r[16].w[0] + 235u));
    sdr(c.r[3], (c.r[16].w[0] + 228u));
    ldl(c.r[3], (c.r[18].w[0] + 7u));
    ldr(c.r[3], (c.r[18].w[0]));
    ldl(c.r[4], (c.r[18].w[0] + 15u));
    ldr(c.r[4], (c.r[18].w[0] + 8u));
    ldl(c.r[5], (c.r[18].w[0] + 23u));
    ldr(c.r[5], (c.r[18].w[0] + 16u));
    ldl(c.r[6], (c.r[18].w[0] + 31u));
    ldr(c.r[6], (c.r[18].w[0] + 24u));
    sdl(c.r[3], (c.r[16].w[0] + 243u));
    sdr(c.r[3], (c.r[16].w[0] + 236u));
    sdl(c.r[4], (c.r[16].w[0] + 251u));
    sdr(c.r[4], (c.r[16].w[0] + 244u));
    sdl(c.r[5], (c.r[16].w[0] + 259u));
    sdr(c.r[5], (c.r[16].w[0] + 252u));
    sdl(c.r[6], (c.r[16].w[0] + 267u));
    sdr(c.r[6], (c.r[16].w[0] + 260u));
    ldl(c.r[3], (c.r[18].w[0] + 39u));
    ldr(c.r[3], (c.r[18].w[0] + 32u));
    sdl(c.r[3], (c.r[16].w[0] + 275u));
    sdr(c.r[3], (c.r[16].w[0] + 268u));
    ldl(c.r[3], (c.r[19].w[0] + 7u));
    ldr(c.r[3], (c.r[19].w[0]));
    ldl(c.r[4], (c.r[19].w[0] + 15u));
    ldr(c.r[4], (c.r[19].w[0] + 8u));
    ldl(c.r[5], (c.r[19].w[0] + 23u));
    ldr(c.r[5], (c.r[19].w[0] + 16u));
    ldl(c.r[6], (c.r[19].w[0] + 31u));
    ldr(c.r[6], (c.r[19].w[0] + 24u));
    sdl(c.r[3], (c.r[16].w[0] + 283u));
    sdr(c.r[3], (c.r[16].w[0] + 276u));
    sdl(c.r[4], (c.r[16].w[0] + 291u));
    sdr(c.r[4], (c.r[16].w[0] + 284u));
    sdl(c.r[5], (c.r[16].w[0] + 299u));
    sdr(c.r[5], (c.r[16].w[0] + 292u));
    sdl(c.r[6], (c.r[16].w[0] + 307u));
    sdr(c.r[6], (c.r[16].w[0] + 300u));
    ldl(c.r[3], (c.r[19].w[0] + 39u));
    ldr(c.r[3], (c.r[19].w[0] + 32u));
    sdl(c.r[3], (c.r[16].w[0] + 315u));
    sdr(c.r[3], (c.r[16].w[0] + 308u));
    ldl(c.r[3], (c.r[17].w[0] + 7u));
    ldr(c.r[3], (c.r[17].w[0]));
    ldl(c.r[4], (c.r[17].w[0] + 15u));
    ldr(c.r[4], (c.r[17].w[0] + 8u));
    ldl(c.r[5], (c.r[17].w[0] + 23u));
    ldr(c.r[5], (c.r[17].w[0] + 16u));
    ldl(c.r[6], (c.r[17].w[0] + 31u));
    ldr(c.r[6], (c.r[17].w[0] + 24u));
    sdl(c.r[3], (c.r[16].w[0] + 323u));
    sdr(c.r[3], (c.r[16].w[0] + 316u));
    sdl(c.r[4], (c.r[16].w[0] + 331u));
    sdr(c.r[4], (c.r[16].w[0] + 324u));
    sdl(c.r[5], (c.r[16].w[0] + 339u));
    sdr(c.r[5], (c.r[16].w[0] + 332u));
    sdl(c.r[6], (c.r[16].w[0] + 347u));
    sdr(c.r[6], (c.r[16].w[0] + 340u));
    ldl(c.r[3], (c.r[17].w[0] + 39u));
    ldr(c.r[3], (c.r[17].w[0] + 32u));
    sdl(c.r[3], (c.r[16].w[0] + 355u));
    sdr(c.r[3], (c.r[16].w[0] + 348u));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 137;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B58B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[1].w[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 75u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B58E8u);  if (depth < kMaxDepth) unit_0073(c, 217u, depth + 1u); else { c.pc = 0x002CF120u; return; } if (c.pc != 0x001B58E8u) [[unlikely]] return; }
L_001B58E8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22944u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B58FCu);  if (depth < kMaxDepth) unit_0085(c, 318u, depth + 1u); else { c.pc = 0x00317590u; return; } if (c.pc != 0x001B58FCu) [[unlikely]] return; }
L_001B58FC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5908u);  if (depth < kMaxDepth) unit_002D(c, 165u, depth + 1u); else { c.pc = 0x001B5940u; return; } if (c.pc != 0x001B5908u) [[unlikely]] return; }
L_001B5908:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5914u);  if (depth < kMaxDepth) unit_002D(c, 135u, depth + 1u); else { c.pc = 0x001B52C0u; return; } if (c.pc != 0x001B5914u) [[unlikely]] return; }
L_001B5914:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5924u);  if (depth < kMaxDepth) unit_002C(c, 521u, depth + 1u); else { c.pc = 0x001B3B10u; return; } if (c.pc != 0x001B5924u) [[unlikely]] return; }
L_001B5924:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5940:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 13u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 16u), 0u);
    st8((c.r[29].w[0] + 36u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 38u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 39u), static_cast<std::uint8_t>(0u));
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 48u), 0u);
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    set32(c.r[4], c.r[7].w[0] + 2848u);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B59A0u);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x001B59A0u) [[unlikely]] return; }
L_001B59A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B59B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B59C8u);  if (depth < kMaxDepth) unit_002D(c, 148u, depth + 1u); else { c.pc = 0x001B5478u; return; } if (c.pc != 0x001B59C8u) [[unlikely]] return; }
L_001B59C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B59D8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    c.f[20] = c.f[12];
    c.r[5].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A2Cu);  if (depth < kMaxDepth) unit_002D(c, 50u, depth + 1u); else { c.pc = 0x001B4670u; return; } if (c.pc != 0x001B5A2Cu) [[unlikely]] return; }
L_001B5A2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[22].w[0] + 4u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 116u);
    c.f[13] = c.f[12];
    set32(c.r[8], 0u + 26u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A54u);  if (depth < kMaxDepth) unit_002D(c, 62u, depth + 1u); else { c.pc = 0x001B4810u; return; } if (c.pc != 0x001B5A54u) [[unlikely]] return; }
L_001B5A54:
    set32(c.r[4], c.r[22].w[0] + 304u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A78u);  if (depth < kMaxDepth) unit_002C(c, 486u, depth + 1u); else { c.pc = 0x001B36C0u; return; } if (c.pc != 0x001B5A78u) [[unlikely]] return; }
L_001B5A78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 29824u);
    st32((c.r[22].w[0] + 348u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5A94; } }
L_001B5A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5A94u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B5A94u) [[unlikely]] return; }
L_001B5A94:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5AC0; } }
L_001B5AA0:
    set32(c.r[4], c.r[22].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AB0u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B5AB0u) [[unlikely]] return; }
L_001B5AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B5A8Cu | kUnwind; return; } goto L_001B5A8C; } }
L_001B5AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5AC0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B5AC0u) [[unlikely]] return; }
L_001B5AC0:
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
L_001B5AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29824u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 304u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B1Cu);  if (depth < kMaxDepth) unit_002C(c, 494u, depth + 1u); else { c.pc = 0x001B3780u; return; } if (c.pc != 0x001B5B1Cu) [[unlikely]] return; }
L_001B5B1C:
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B2Cu);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B5B2Cu) [[unlikely]] return; }
L_001B5B2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5B40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B68u);  if (depth < kMaxDepth) unit_002D(c, 100u, depth + 1u); else { c.pc = 0x001B4CF8u; return; } if (c.pc != 0x001B5B68u) [[unlikely]] return; }
L_001B5B68:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5B7Cu);  if (depth < kMaxDepth) unit_002C(c, 496u, depth + 1u); else { c.pc = 0x001B37D0u; return; } if (c.pc != 0x001B5B7Cu) [[unlikely]] return; }
L_001B5B7C:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5BA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5BB4u);  if (depth < kMaxDepth) unit_002D(c, 102u, depth + 1u); else { c.pc = 0x001B4DD8u; return; } if (c.pc != 0x001B5BB4u) [[unlikely]] return; }
L_001B5BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B5BC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5BCC; } }
L_001B5BC8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B5BCC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5BE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5C00u);  if (depth < kMaxDepth) unit_002D(c, 51u, depth + 1u); else { c.pc = 0x001B4680u; return; } if (c.pc != 0x001B5C00u) [[unlikely]] return; }
L_001B5C00:
    set32(c.r[2], c.r[16].w[0] + 320u);
    c.f[3] = ld32((c.r[16].w[0] + 320u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], c.r[16].w[0] + 4u);
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[2], c.f[3]);
    set32(c.r[6], c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[7], c.f[2]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[7], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[6] = c.vu0.vf[1];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5C48u);  if (depth < kMaxDepth) unit_002D(c, 89u, depth + 1u); else { c.pc = 0x001B4B00u; return; } if (c.pc != 0x001B5C48u) [[unlikely]] return; }
L_001B5C48:
    set32(c.r[4], c.r[16].w[0] + 304u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5C58u);  if (depth < kMaxDepth) unit_002C(c, 505u, depth + 1u); else { c.pc = 0x001B38A8u; return; } if (c.pc != 0x001B5C58u) [[unlikely]] return; }
L_001B5C58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B5CA8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B5CA8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28720u);
    set32(c.r[5], c.r[5].w[0] - 29680u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5CA8u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x001B5CA8u) [[unlikely]] return; }
L_001B5CA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5CB8:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1613u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5CF0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B5CF0u) [[unlikely]] return; }
L_001B5CF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B5D04; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5D14; } }
L_001B5D04:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D14u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B5D14u) [[unlikely]] return; }
L_001B5D14:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 28720u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D28u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x001B5D28u) [[unlikely]] return; }
L_001B5D28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 11u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5D58u);  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B59D8u; return; } if (c.pc != 0x001B5D58u) [[unlikely]] return; }
L_001B5D58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29752u);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 348u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29752u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[4].w[0] + 28720u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5DC0u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B5DC0u) [[unlikely]] return; }
L_001B5DC0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5DD0u);  if (depth < kMaxDepth) unit_002D(c, 179u, depth + 1u); else { c.pc = 0x001B5AF0u; return; } if (c.pc != 0x001B5DD0u) [[unlikely]] return; }
L_001B5DD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5DE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5E00u);  if (depth < kMaxDepth) unit_002D(c, 191u, depth + 1u); else { c.pc = 0x001B5C70u; return; } if (c.pc != 0x001B5E00u) [[unlikely]] return; }
L_001B5E00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5E10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B5E48; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B5E48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28784u);
    set32(c.r[5], c.r[5].w[0] - 29584u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5E48u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x001B5E48u) [[unlikely]] return; }
L_001B5E48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5E58:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1614u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5E90u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B5E90u) [[unlikely]] return; }
L_001B5E90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B5EA4; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B5EB4; } }
L_001B5EA4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EB4u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B5EB4u) [[unlikely]] return; }
L_001B5EB4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 28784u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EC8u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x001B5EC8u) [[unlikely]] return; }
L_001B5EC8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 7u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5EF8u);  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B59D8u; return; } if (c.pc != 0x001B5EF8u) [[unlikely]] return; }
L_001B5EF8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29656u);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 348u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29656u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[4].w[0] + 28784u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F60u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B5F60u) [[unlikely]] return; }
L_001B5F60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5F70u);  if (depth < kMaxDepth) unit_002D(c, 179u, depth + 1u); else { c.pc = 0x001B5AF0u; return; } if (c.pc != 0x001B5F70u) [[unlikely]] return; }
L_001B5F70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5F88:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5FA0u);  if (depth < kMaxDepth) unit_002D(c, 203u, depth + 1u); else { c.pc = 0x001B5E10u; return; } if (c.pc != 0x001B5FA0u) [[unlikely]] return; }
L_001B5FA0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B5FE8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B5FE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28848u);
    set32(c.r[5], c.r[5].w[0] - 29488u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B5FE8u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x001B5FE8u) [[unlikely]] return; }
L_001B5FE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B5FF8:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1615u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6030u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B6030u) [[unlikely]] return; }
L_001B6030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6044; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6054; } }
L_001B6044:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6054u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B6054u) [[unlikely]] return; }
L_001B6054:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 28848u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6068u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x001B6068u) [[unlikely]] return; }
L_001B6068:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 10u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6098u);  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B59D8u; return; } if (c.pc != 0x001B6098u) [[unlikely]] return; }
L_001B6098:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29560u);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 348u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B60D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29560u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[4].w[0] + 28848u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6100u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B6100u) [[unlikely]] return; }
L_001B6100:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6110u);  if (depth < kMaxDepth) unit_002D(c, 179u, depth + 1u); else { c.pc = 0x001B5AF0u; return; } if (c.pc != 0x001B6110u) [[unlikely]] return; }
L_001B6110:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6128:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6140u);  if (depth < kMaxDepth) unit_002D(c, 215u, depth + 1u); else { c.pc = 0x001B5FB0u; return; } if (c.pc != 0x001B6140u) [[unlikely]] return; }
L_001B6140:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B6188; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B6188; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28912u);
    set32(c.r[5], c.r[5].w[0] - 29400u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6188u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x001B6188u) [[unlikely]] return; }
L_001B6188:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6198:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1616u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61D0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B61D0u) [[unlikely]] return; }
L_001B61D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B61E4; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B61F4; } }
L_001B61E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B61F4u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B61F4u) [[unlikely]] return; }
L_001B61F4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 28912u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6208u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x001B6208u) [[unlikely]] return; }
L_001B6208:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 8u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6238u);  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B59D8u; return; } if (c.pc != 0x001B6238u) [[unlikely]] return; }
L_001B6238:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29472u);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 348u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29472u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[4].w[0] + 28912u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B62A0u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B62A0u) [[unlikely]] return; }
L_001B62A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B62B0u);  if (depth < kMaxDepth) unit_002D(c, 179u, depth + 1u); else { c.pc = 0x001B5AF0u; return; } if (c.pc != 0x001B62B0u) [[unlikely]] return; }
L_001B62B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B62C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B62E0u);  if (depth < kMaxDepth) unit_002D(c, 227u, depth + 1u); else { c.pc = 0x001B6150u; return; } if (c.pc != 0x001B62E0u) [[unlikely]] return; }
L_001B62E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B62F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B6328; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B6328; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 28976u);
    set32(c.r[5], c.r[5].w[0] - 29312u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6328u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x001B6328u) [[unlikely]] return; }
L_001B6328:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6338:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1617u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6370u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B6370u) [[unlikely]] return; }
L_001B6370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6384; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6394; } }
L_001B6384:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6394u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B6394u) [[unlikely]] return; }
L_001B6394:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 28976u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63A8u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x001B63A8u) [[unlikely]] return; }
L_001B63A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 9u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B63D8u);  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B59D8u; return; } if (c.pc != 0x001B63D8u) [[unlikely]] return; }
L_001B63D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29384u);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 348u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29384u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[4].w[0] + 28976u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6440u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B6440u) [[unlikely]] return; }
L_001B6440:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6450u);  if (depth < kMaxDepth) unit_002D(c, 179u, depth + 1u); else { c.pc = 0x001B5AF0u; return; } if (c.pc != 0x001B6450u) [[unlikely]] return; }
L_001B6450:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6468:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6480u);  if (depth < kMaxDepth) unit_002D(c, 239u, depth + 1u); else { c.pc = 0x001B62F0u; return; } if (c.pc != 0x001B6480u) [[unlikely]] return; }
L_001B6480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B64C8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B64C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 29040u);
    set32(c.r[5], c.r[5].w[0] - 29216u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B64C8u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x001B64C8u) [[unlikely]] return; }
L_001B64C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B64D8:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1618u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6510u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B6510u) [[unlikely]] return; }
L_001B6510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6524; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6534; } }
L_001B6524:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6534u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B6534u) [[unlikely]] return; }
L_001B6534:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 29040u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6548u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x001B6548u) [[unlikely]] return; }
L_001B6548:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 12u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6578u);  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B59D8u; return; } if (c.pc != 0x001B6578u) [[unlikely]] return; }
L_001B6578:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29288u);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 348u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B65B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29288u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[4].w[0] + 29040u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B65E0u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B65E0u) [[unlikely]] return; }
L_001B65E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B65F0u);  if (depth < kMaxDepth) unit_002D(c, 179u, depth + 1u); else { c.pc = 0x001B5AF0u; return; } if (c.pc != 0x001B65F0u) [[unlikely]] return; }
L_001B65F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6608:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6620u);  if (depth < kMaxDepth) unit_002D(c, 251u, depth + 1u); else { c.pc = 0x001B6490u; return; } if (c.pc != 0x001B6620u) [[unlikely]] return; }
L_001B6620:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6630:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B6668; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B6668; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 29104u);
    set32(c.r[5], c.r[5].w[0] - 29128u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6668u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x001B6668u) [[unlikely]] return; }
L_001B6668:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6678:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1619u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B66B0u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B66B0u) [[unlikely]] return; }
L_001B66B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B66C4; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B66D4; } }
L_001B66C4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B66D4u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B66D4u) [[unlikely]] return; }
L_001B66D4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 29104u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B66E8u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x001B66E8u) [[unlikely]] return; }
L_001B66E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6718u);  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B59D8u; return; } if (c.pc != 0x001B6718u) [[unlikely]] return; }
L_001B6718:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29200u);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 348u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29200u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[4].w[0] + 29104u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6780u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B6780u) [[unlikely]] return; }
L_001B6780:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6790u);  if (depth < kMaxDepth) unit_002D(c, 179u, depth + 1u); else { c.pc = 0x001B5AF0u; return; } if (c.pc != 0x001B6790u) [[unlikely]] return; }
L_001B6790:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B67A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B67C0u);  if (depth < kMaxDepth) unit_002D(c, 263u, depth + 1u); else { c.pc = 0x001B6630u; return; } if (c.pc != 0x001B67C0u) [[unlikely]] return; }
L_001B67C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B67D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B6808; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B6808; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 29168u);
    set32(c.r[5], c.r[5].w[0] - 29040u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6808u);  if (depth < kMaxDepth) unit_002D(c, 8u, depth + 1u); else { c.pc = 0x001B40A8u; return; } if (c.pc != 0x001B6808u) [[unlikely]] return; }
L_001B6808:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6818:
    set32(c.r[29], c.r[29].w[0] - 352u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1620u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6850u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B6850u) [[unlikely]] return; }
L_001B6850:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6864; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6874; } }
L_001B6864:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6874u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B6874u) [[unlikely]] return; }
L_001B6874:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[16], c.r[16].w[0] + 29168u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6888u);  if (depth < kMaxDepth) unit_002D(c, 14u, depth + 1u); else { c.pc = 0x001B41A8u; return; } if (c.pc != 0x001B6888u) [[unlikely]] return; }
L_001B6888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[11].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 5u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B68B8u);  if (depth < kMaxDepth) unit_002D(c, 169u, depth + 1u); else { c.pc = 0x001B59D8u; return; } if (c.pc != 0x001B68B8u) [[unlikely]] return; }
L_001B68B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 29112u);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 348u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 352u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B68F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29112u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[16].w[0] + 348u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 352u)));
    set32(c.r[4], c.r[4].w[0] + 29168u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6920u);  if (depth < kMaxDepth) unit_002D(c, 23u, depth + 1u); else { c.pc = 0x001B4280u; return; } if (c.pc != 0x001B6920u) [[unlikely]] return; }
L_001B6920:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6930u);  if (depth < kMaxDepth) unit_002D(c, 179u, depth + 1u); else { c.pc = 0x001B5AF0u; return; } if (c.pc != 0x001B6930u) [[unlikely]] return; }
L_001B6930:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6948:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6960u);  if (depth < kMaxDepth) unit_002D(c, 275u, depth + 1u); else { c.pc = 0x001B67D0u; return; } if (c.pc != 0x001B6960u) [[unlikely]] return; }
L_001B6960:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B699Cu);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B699Cu) [[unlikely]] return; }
L_001B699C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B69ACu);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B69ACu) [[unlikely]] return; }
L_001B69AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B69C0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st32((c.r[29].w[0] + 112u), c.f[20]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.f[12] = c.f[13];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[8].d[0] = c.r[11].d[0] + 0ull;
    c.f[13] = c.f[14];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A18u);  if (depth < kMaxDepth) unit_002D(c, 62u, depth + 1u); else { c.pc = 0x001B4810u; return; } if (c.pc != 0x001B6A18u) [[unlikely]] return; }
L_001B6A18:
    set32(c.r[17], c.r[16].w[0] + 288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A24u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B6A24u) [[unlikely]] return; }
L_001B6A24:
    set32(c.r[3], 0u + 2u);
    c.f[13] = 0u;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B6A3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3FA0000u);
    c.f[13] = c.r[1].w[0];
    c.budget -= 2;
L_001B6A3C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A5Cu);  if (depth < kMaxDepth) unit_002C(c, 509u, depth + 1u); else { c.pc = 0x001B38F0u; return; } if (c.pc != 0x001B6A5Cu) [[unlikely]] return; }
L_001B6A5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6A78; } }
L_001B6A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A78u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B6A78u) [[unlikely]] return; }
L_001B6A78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6AA4; } }
L_001B6A84:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6A94u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B6A94u) [[unlikely]] return; }
L_001B6A94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6A70u | kUnwind; return; } goto L_001B6A70; } }
L_001B6A9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6AA4u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B6AA4u) [[unlikely]] return; }
L_001B6AA4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 112u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6AD0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6AF4u);  if (depth < kMaxDepth) unit_002D(c, 100u, depth + 1u); else { c.pc = 0x001B4CF8u; return; } if (c.pc != 0x001B6AF4u) [[unlikely]] return; }
L_001B6AF4:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B08u);  if (depth < kMaxDepth) unit_002B(c, 386u, depth + 1u); else { c.pc = 0x001AFAD0u; return; } if (c.pc != 0x001B6B08u) [[unlikely]] return; }
L_001B6B08:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B40u);  if (depth < kMaxDepth) unit_002D(c, 102u, depth + 1u); else { c.pc = 0x001B4DD8u; return; } if (c.pc != 0x001B6B40u) [[unlikely]] return; }
L_001B6B40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001B6B54; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6B58; } }
L_001B6B54:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001B6B58:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6B68:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B88u);  if (depth < kMaxDepth) unit_002D(c, 89u, depth + 1u); else { c.pc = 0x001B4B00u; return; } if (c.pc != 0x001B6B88u) [[unlikely]] return; }
L_001B6B88:
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6B98u);  if (depth < kMaxDepth) unit_002C(c, 521u, depth + 1u); else { c.pc = 0x001B3B10u; return; } if (c.pc != 0x001B6B98u) [[unlikely]] return; }
L_001B6B98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6BB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BDCu);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B6BDCu) [[unlikely]] return; }
L_001B6BDC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6BECu);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B6BECu) [[unlikely]] return; }
L_001B6BEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[10], 0u + 116u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[11], 0u + 26u);
    c.f[14] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C34u);  if (depth < kMaxDepth) unit_002D(c, 290u, depth + 1u); else { c.pc = 0x001B69C0u; return; } if (c.pc != 0x001B6C34u) [[unlikely]] return; }
L_001B6C34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28952u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6C58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 332u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 68u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6C88u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B6C88u) [[unlikely]] return; }
L_001B6C88:
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[6], c.f[1]);
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12688u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CA8u);  if (depth < kMaxDepth) unit_001A(c, 97u, depth + 1u); else { c.pc = 0x001692A0u; return; } if (c.pc != 0x001B6CA8u) [[unlikely]] return; }
L_001B6CA8:
    set32(c.r[2], c.r[16].w[0] + 304u);
    c.f[3] = ld32((c.r[16].w[0] + 304u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[2], c.f[3]);
    set32(c.r[6], c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[7], c.f[2]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[7], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[6] = c.vu0.vf[1];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6CF0u);  if (depth < kMaxDepth) unit_002D(c, 305u, depth + 1u); else { c.pc = 0x001B6B68u; return; } if (c.pc != 0x001B6CF0u) [[unlikely]] return; }
L_001B6CF0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6D08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B6D8C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B6D8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[2].w[0] + 29232u);
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_001B6D38:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6D38u | kUnwind; return; } goto L_001B6D38; } }
    set32(c.r[2], 0u + 124u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 14;
L_001B6D8C:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6D98:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1622u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6DCCu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B6DCCu) [[unlikely]] return; }
L_001B6DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6DE0; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6DF0; } }
L_001B6DE0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6DF0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B6DF0u) [[unlikely]] return; }
L_001B6DF0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 29232u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6E14u);  if (depth < kMaxDepth) unit_002D(c, 311u, depth + 1u); else { c.pc = 0x001B6C00u; return; } if (c.pc != 0x001B6E14u) [[unlikely]] return; }
L_001B6E14:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28872u);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6E48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6E74u);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B6E74u) [[unlikely]] return; }
L_001B6E74:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6E84u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B6E84u) [[unlikely]] return; }
L_001B6E84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6E98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6EA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6EC0u);  if (depth < kMaxDepth) unit_002D(c, 317u, depth + 1u); else { c.pc = 0x001B6D08u; return; } if (c.pc != 0x001B6EC0u) [[unlikely]] return; }
L_001B6EC0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B6F54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B6F54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[4], c.r[2].w[0] + 29296u);
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
L_001B6F00:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B6F00u | kUnwind; return; } goto L_001B6F00; } }
    set32(c.r[2], 0u + 123u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 60u), 0u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[2], (c.r[4].w[0] + 7u));
    sdr(c.r[2], (c.r[4].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 14;
L_001B6F54:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B6F60:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1621u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6F94u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B6F94u) [[unlikely]] return; }
L_001B6F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B6FA8; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B6FB8; } }
L_001B6FA8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FB8u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B6FB8u) [[unlikely]] return; }
L_001B6FB8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 29296u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B6FDCu);  if (depth < kMaxDepth) unit_002D(c, 311u, depth + 1u); else { c.pc = 0x001B6C00u; return; } if (c.pc != 0x001B6FDCu) [[unlikely]] return; }
L_001B6FDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28792u);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B703Cu);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B703Cu) [[unlikely]] return; }
L_001B703C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B704Cu);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B704Cu) [[unlikely]] return; }
L_001B704C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7060:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7088u);  if (depth < kMaxDepth) unit_002D(c, 329u, depth + 1u); else { c.pc = 0x001B6ED0u; return; } if (c.pc != 0x001B7088u) [[unlikely]] return; }
L_001B7088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7098:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B7198; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B7198; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[2].w[0] + 29360u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
L_001B70C8:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B70C8u | kUnwind; return; } goto L_001B70C8; } }
    set32(c.r[2], 0u + 16405u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 16429u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[4], 0u + 12u);
    st32((c.r[6].w[0] + 60u), 0u);
    set32(c.r[5], 0u + 16465u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    set32(c.r[9], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[8], (c.r[3].w[0] + 7u));
    sdr(c.r[8], (c.r[3].w[0]));
    st32((c.r[3].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    ldl(c.r[5], (c.r[29].w[0] + 7u));
    ldr(c.r[5], (c.r[29].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 45;
L_001B7198:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B71A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B71D4u);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B71D4u) [[unlikely]] return; }
L_001B71D4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B71E4u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B71E4u) [[unlikely]] return; }
L_001B71E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B71F8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u + 1630u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7234u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B7234u) [[unlikely]] return; }
L_001B7234:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7248u);  if (depth < kMaxDepth) unit_002D(c, 350u, depth + 1u); else { c.pc = 0x001B72C8u; return; } if (c.pc != 0x001B7248u) [[unlikely]] return; }
L_001B7248:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 29360u);
    set32(c.r[10], 0u + 16404u);
    set32(c.r[11], 0u + 16404u);
    c.f[14] = c.f[13];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7288u);  if (depth < kMaxDepth) unit_002D(c, 290u, depth + 1u); else { c.pc = 0x001B69C0u; return; } if (c.pc != 0x001B7288u) [[unlikely]] return; }
L_001B7288:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[16].w[0] + 400u), c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] - 28696u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 404u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B72C8:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 28712u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B72F4u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001B72F4u) [[unlikely]] return; }
L_001B72F4:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 404u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7304u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B7304u) [[unlikely]] return; }
L_001B7304:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[3].w[0] - 28704u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B7320; } }
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B732C; } }
L_001B7320:
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B732Cu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B732Cu) [[unlikely]] return; }
L_001B732C:
    set32(c.r[4], c.r[16].w[0] + 404u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7340u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001B7340u) [[unlikely]] return; }
L_001B7340:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_001B7354; } }
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7364; } }
L_001B7354:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7364u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B7364u) [[unlikely]] return; }
L_001B7364:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7374u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001B7374u) [[unlikely]] return; }
L_001B7374:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73B4u);  if (depth < kMaxDepth) unit_001D(c, 56u, depth + 1u); else { c.pc = 0x00174BF0u; return; } if (c.pc != 0x001B73B4u) [[unlikely]] return; }
L_001B73B4:
    set32(c.r[5], ld32((c.r[16].w[0] + 400u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B73C8u);  if (depth < kMaxDepth) unit_001D(c, 58u, depth + 1u); else { c.pc = 0x00174C30u; return; } if (c.pc != 0x001B73C8u) [[unlikely]] return; }
L_001B73C8:
    set32(c.r[2], c.r[16].w[0] + 304u);
    c.f[3] = ld32((c.r[16].w[0] + 304u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[2], c.f[3]);
    set32(c.r[6], c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[7], c.f[2]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[7], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[6] = c.vu0.vf[1];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7410u);  if (depth < kMaxDepth) unit_002D(c, 305u, depth + 1u); else { c.pc = 0x001B6B68u; return; } if (c.pc != 0x001B7410u) [[unlikely]] return; }
L_001B7410:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7428:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7440u);  if (depth < kMaxDepth) unit_002D(c, 341u, depth + 1u); else { c.pc = 0x001B7098u; return; } if (c.pc != 0x001B7440u) [[unlikely]] return; }
L_001B7440:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B747Cu);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B747Cu) [[unlikely]] return; }
L_001B747C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B748Cu);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B748Cu) [[unlikely]] return; }
L_001B748C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B74A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[1].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[10], 0u + 116u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[11], 0u + 26u);
    c.f[14] = c.f[13];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B74D4u);  if (depth < kMaxDepth) unit_002D(c, 290u, depth + 1u); else { c.pc = 0x001B69C0u; return; } if (c.pc != 0x001B74D4u) [[unlikely]] return; }
L_001B74D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28528u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B74F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7524u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001B7524u) [[unlikely]] return; }
L_001B7524:
    set32(c.r[3], ld32((c.r[17].w[0] + 332u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7540u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001B7540u) [[unlikely]] return; }
L_001B7540:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = ld32((c.r[16].w[0] + 928u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[5], c.f[1]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B757Cu);  if (depth < kMaxDepth) unit_0061(c, 297u, depth + 1u); else { c.pc = 0x00286DB8u; return; } if (c.pc != 0x001B757Cu) [[unlikely]] return; }
L_001B757C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7584u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001B7584u) [[unlikely]] return; }
L_001B7584:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001B7598; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7598u);  if (depth < kMaxDepth) unit_003B(c, 209u, depth + 1u); else { c.pc = 0x001EEB88u; return; } if (c.pc != 0x001B7598u) [[unlikely]] return; }
L_001B7598:
    set32(c.r[2], c.r[17].w[0] + 304u);
    c.f[3] = ld32((c.r[17].w[0] + 304u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[2], c.f[3]);
    set32(c.r[6], c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[7], c.f[2]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[7], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[6] = c.vu0.vf[1];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B75E0u);  if (depth < kMaxDepth) unit_002D(c, 305u, depth + 1u); else { c.pc = 0x001B6B68u; return; } if (c.pc != 0x001B75E0u) [[unlikely]] return; }
L_001B75E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B7700; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B7700; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[2].w[0] + 29424u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
L_001B7630:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7630u | kUnwind; return; } goto L_001B7630; } }
    set32(c.r[2], 0u + 122u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 121u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[4], 0u + 12u);
    st32((c.r[6].w[0] + 60u), 0u);
    set32(c.r[5], 0u + 16465u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    set32(c.r[9], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[8], (c.r[3].w[0] + 7u));
    sdr(c.r[8], (c.r[3].w[0]));
    st32((c.r[3].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    ldl(c.r[5], (c.r[29].w[0] + 7u));
    ldr(c.r[5], (c.r[29].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 45;
L_001B7700:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7710:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1625u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7744u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B7744u) [[unlikely]] return; }
L_001B7744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B7758; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7768; } }
L_001B7758:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7768u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B7768u) [[unlikely]] return; }
L_001B7768:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 29424u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B778Cu);  if (depth < kMaxDepth) unit_002D(c, 366u, depth + 1u); else { c.pc = 0x001B74A0u; return; } if (c.pc != 0x001B778Cu) [[unlikely]] return; }
L_001B778C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28448u);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B77C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B77ECu);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B77ECu) [[unlikely]] return; }
L_001B77EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B77FCu);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B77FCu) [[unlikely]] return; }
L_001B77FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7810:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7820:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7838u);  if (depth < kMaxDepth) unit_002D(c, 375u, depth + 1u); else { c.pc = 0x001B7600u; return; } if (c.pc != 0x001B7838u) [[unlikely]] return; }
L_001B7838:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7848:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B7948; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B7948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[2].w[0] + 29488u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
L_001B7878:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7878u | kUnwind; return; } goto L_001B7878; } }
    set32(c.r[2], 0u + 122u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 121u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[4], 0u + 12u);
    st32((c.r[6].w[0] + 60u), 0u);
    set32(c.r[5], 0u + 16465u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    set32(c.r[9], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[8], (c.r[3].w[0] + 7u));
    sdr(c.r[8], (c.r[3].w[0]));
    st32((c.r[3].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    ldl(c.r[5], (c.r[29].w[0] + 7u));
    ldr(c.r[5], (c.r[29].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 45;
L_001B7948:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7958:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1624u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B798Cu);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B798Cu) [[unlikely]] return; }
L_001B798C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B79A0; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B79B0; } }
L_001B79A0:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B79B0u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B79B0u) [[unlikely]] return; }
L_001B79B0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 29488u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B79D4u);  if (depth < kMaxDepth) unit_002D(c, 366u, depth + 1u); else { c.pc = 0x001B74A0u; return; } if (c.pc != 0x001B79D4u) [[unlikely]] return; }
L_001B79D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28368u);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7A08:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7A34u);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B7A34u) [[unlikely]] return; }
L_001B7A34:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7A44u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B7A44u) [[unlikely]] return; }
L_001B7A44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7A58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7A68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7A80u);  if (depth < kMaxDepth) unit_002D(c, 387u, depth + 1u); else { c.pc = 0x001B7848u; return; } if (c.pc != 0x001B7A80u) [[unlikely]] return; }
L_001B7A80:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7A90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B7B90; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B7B90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[2].w[0] + 29552u);
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
L_001B7AC0:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7AC0u | kUnwind; return; } goto L_001B7AC0; } }
    set32(c.r[2], 0u + 120u);
    st32((c.r[29].w[0] + 4u), 0u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 71u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[4], 0u + 12u);
    st32((c.r[6].w[0] + 60u), 0u);
    set32(c.r[5], 0u + 16465u);
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    st32((c.r[6].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    ldl(c.r[8], (c.r[29].w[0] + 7u));
    ldr(c.r[8], (c.r[29].w[0]));
    set32(c.r[9], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[8], (c.r[3].w[0] + 7u));
    sdr(c.r[8], (c.r[3].w[0]));
    st32((c.r[3].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    st32((c.r[29].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[6].w[0]);
    ldl(c.r[5], (c.r[29].w[0] + 7u));
    ldr(c.r[5], (c.r[29].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    sdl(c.r[5], (c.r[4].w[0] + 7u));
    sdr(c.r[5], (c.r[4].w[0]));
    st32((c.r[4].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[6].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 45;
L_001B7B90:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7BA0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1623u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BD4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B7BD4u) [[unlikely]] return; }
L_001B7BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B7BE8; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7BF8; } }
L_001B7BE8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7BF8u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B7BF8u) [[unlikely]] return; }
L_001B7BF8:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 29552u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C1Cu);  if (depth < kMaxDepth) unit_002D(c, 366u, depth + 1u); else { c.pc = 0x001B74A0u; return; } if (c.pc != 0x001B7C1Cu) [[unlikely]] return; }
L_001B7C1C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28288u);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 336u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C7Cu);  if (depth < kMaxDepth) unit_002C(c, 519u, depth + 1u); else { c.pc = 0x001B3AA0u; return; } if (c.pc != 0x001B7C7Cu) [[unlikely]] return; }
L_001B7C7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7C8Cu);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B7C8Cu) [[unlikely]] return; }
L_001B7C8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7CA0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7CC8u);  if (depth < kMaxDepth) unit_002D(c, 399u, depth + 1u); else { c.pc = 0x001B7A90u; return; } if (c.pc != 0x001B7CC8u) [[unlikely]] return; }
L_001B7CC8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7CD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 28208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    st32((c.r[16].w[0] + 332u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7D04u);  if (depth < kMaxDepth) unit_002C(c, 525u, depth + 1u); else { c.pc = 0x001B3BB0u; return; } if (c.pc != 0x001B7D04u) [[unlikely]] return; }
L_001B7D04:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7D14u);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B7D14u) [[unlikely]] return; }
L_001B7D14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7D28:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.f[12] = c.f[0];
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.f[13] = c.f[12];
    set32(c.r[7], 0u + 116u);
    set32(c.r[8], 0u + 26u);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7D84u);  if (depth < kMaxDepth) unit_002D(c, 62u, depth + 1u); else { c.pc = 0x001B4810u; return; } if (c.pc != 0x001B7D84u) [[unlikely]] return; }
L_001B7D84:
    set32(c.r[4], c.r[20].w[0] + 288u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DA4u);  if (depth < kMaxDepth) unit_002C(c, 540u, depth + 1u); else { c.pc = 0x001B3D50u; return; } if (c.pc != 0x001B7DA4u) [[unlikely]] return; }
L_001B7DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 28208u);
    st32((c.r[20].w[0] + 332u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7DC0; } }
L_001B7DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DC0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001B7DC0u) [[unlikely]] return; }
L_001B7DC0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7DEC; } }
L_001B7DCC:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DDCu);  if (depth < kMaxDepth) unit_002D(c, 98u, depth + 1u); else { c.pc = 0x001B4CA0u; return; } if (c.pc != 0x001B7DDCu) [[unlikely]] return; }
L_001B7DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001B7DB8u | kUnwind; return; } goto L_001B7DB8; } }
L_001B7DE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7DECu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001B7DECu) [[unlikely]] return; }
L_001B7DEC:
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
L_001B7E18:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 48u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7E3Cu);  if (depth < kMaxDepth) unit_002D(c, 100u, depth + 1u); else { c.pc = 0x001B4CF8u; return; } if (c.pc != 0x001B7E3Cu) [[unlikely]] return; }
L_001B7E3C:
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7E50u);  if (depth < kMaxDepth) unit_002C(c, 555u, depth + 1u); else { c.pc = 0x001B3F60u; return; } if (c.pc != 0x001B7E50u) [[unlikely]] return; }
L_001B7E50:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[20] = ld32((c.r[29].w[0] + 48u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7E78:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7E88:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[16].w[0] + 304u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.f[3] = ld32((c.r[16].w[0] + 304u));
    c.f[2] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    set32(c.r[2], c.f[3]);
    set32(c.r[6], c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[7], c.f[2]);
    mmi::pextlw(c.r[8], c.r[3], c.r[2]);
    mmi::pextlw(c.r[9], c.r[7], c.r[6]);
    mmi::pcpyld(c.r[8], c.r[9], c.r[8]);
    c.vu0.vf[1] = c.r[8];
    c.r[6] = c.vu0.vf[1];
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7EE0u);  if (depth < kMaxDepth) unit_002D(c, 89u, depth + 1u); else { c.pc = 0x001B4B00u; return; } if (c.pc != 0x001B7EE0u) [[unlikely]] return; }
L_001B7EE0:
    set32(c.r[4], c.r[16].w[0] + 288u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7EF0u);  if (depth < kMaxDepth) unit_002D(c, 5u, depth + 1u); else { c.pc = 0x001B4058u; return; } if (c.pc != 0x001B7EF0u) [[unlikely]] return; }
L_001B7EF0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7F08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001B7F50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001B7F50; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 28064u);
    set32(c.r[4], c.r[3].w[0] + 29616u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001B7F48; } }
    st8((c.r[3].w[0] + 29616u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7F50; } }
L_001B7F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7F50u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B7F50u) [[unlikely]] return; }
L_001B7F50:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001B7F60:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], 0u + 1626u);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7F94u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x001B7F94u) [[unlikely]] return; }
L_001B7F94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001B7FA8; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001B7FB8; } }
L_001B7FA8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7FB8u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001B7FB8u) [[unlikely]] return; }
L_001B7FB8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[12] = c.r[1].w[0];
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] + 29616u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001B7FE4u);  if (depth < kMaxDepth) unit_002D(c, 414u, depth + 1u); else { c.pc = 0x001B7D28u; return; } if (c.pc != 0x001B7FE4u) [[unlikely]] return; }
L_001B7FE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 28136u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st32((c.r[16].w[0] + 332u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[16]);
    c.budget -= 7;
    [[clang::musttail]] return unit_002E(c, 1u, depth);
}

}
