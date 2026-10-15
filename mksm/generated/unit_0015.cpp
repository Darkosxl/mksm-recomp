#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0015[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0,
    0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0,
    136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0,
    0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285,
    0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0,
    0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0,
    0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384,
    0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0,
    0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0,
};

void unit_0015(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00154000;
    case 2u: goto L_00154010;
    case 3u: goto L_00154040;
    case 4u: goto L_00154054;
    case 5u: goto L_00154068;
    case 6u: goto L_00154080;
    case 7u: goto L_001540A4;
    case 8u: goto L_001540AC;
    case 9u: goto L_001540D0;
    case 10u: goto L_001540E0;
    case 11u: goto L_001540FC;
    case 12u: goto L_00154118;
    case 13u: goto L_0015412C;
    case 14u: goto L_00154140;
    case 15u: goto L_00154158;
    case 16u: goto L_00154174;
    case 17u: goto L_00154190;
    case 18u: goto L_0015419C;
    case 19u: goto L_001541B4;
    case 20u: goto L_001541C4;
    case 21u: goto L_00154208;
    case 22u: goto L_0015421C;
    case 23u: goto L_00154230;
    case 24u: goto L_00154244;
    case 25u: goto L_00154258;
    case 26u: goto L_0015426C;
    case 27u: goto L_00154290;
    case 28u: goto L_001542A4;
    case 29u: goto L_001542B8;
    case 30u: goto L_001542D8;
    case 31u: goto L_001542EC;
    case 32u: goto L_00154304;
    case 33u: goto L_00154318;
    case 34u: goto L_00154324;
    case 35u: goto L_00154358;
    case 36u: goto L_00154368;
    case 37u: goto L_001543A8;
    case 38u: goto L_001543B4;
    case 39u: goto L_00154464;
    case 40u: goto L_00154480;
    case 41u: goto L_00154498;
    case 42u: goto L_001544C0;
    case 43u: goto L_001544E0;
    case 44u: goto L_001544F8;
    case 45u: goto L_00154510;
    case 46u: goto L_0015452C;
    case 47u: goto L_00154544;
    case 48u: goto L_00154558;
    case 49u: goto L_0015456C;
    case 50u: goto L_001545E0;
    case 51u: goto L_00154634;
    case 52u: goto L_00154644;
    case 53u: goto L_00154654;
    case 54u: goto L_00154664;
    case 55u: goto L_00154674;
    case 56u: goto L_00154688;
    case 57u: goto L_00154698;
    case 58u: goto L_001546A8;
    case 59u: goto L_001546B8;
    case 60u: goto L_001546CC;
    case 61u: goto L_001546D4;
    case 62u: goto L_001546E8;
    case 63u: goto L_001546F0;
    case 64u: goto L_00154708;
    case 65u: goto L_00154720;
    case 66u: goto L_00154734;
    case 67u: goto L_0015474C;
    case 68u: goto L_00154760;
    case 69u: goto L_00154774;
    case 70u: goto L_00154788;
    case 71u: goto L_001547B4;
    case 72u: goto L_001547D0;
    case 73u: goto L_001547E8;
    case 74u: goto L_00154800;
    case 75u: goto L_0015481C;
    case 76u: goto L_00154834;
    case 77u: goto L_00154858;
    case 78u: goto L_00154870;
    case 79u: goto L_00154880;
    case 80u: goto L_00154890;
    case 81u: goto L_001548B0;
    case 82u: goto L_0015493C;
    case 83u: goto L_00154950;
    case 84u: goto L_00154964;
    case 85u: goto L_00154988;
    case 86u: goto L_0015499C;
    case 87u: goto L_001549B0;
    case 88u: goto L_001549DC;
    case 89u: goto L_001549F8;
    case 90u: goto L_00154A10;
    case 91u: goto L_00154A78;
    case 92u: goto L_00154A80;
    case 93u: goto L_00154A94;
    case 94u: goto L_00154AC8;
    case 95u: goto L_00154AD0;
    case 96u: goto L_00154AE4;
    case 97u: goto L_00154AF8;
    case 98u: goto L_00154B04;
    case 99u: goto L_00154B38;
    case 100u: goto L_00154B48;
    case 101u: goto L_00154B8C;
    case 102u: goto L_00154B98;
    case 103u: goto L_00154C48;
    case 104u: goto L_00154C7C;
    case 105u: goto L_00154CA4;
    case 106u: goto L_00154CC4;
    case 107u: goto L_00154CDC;
    case 108u: goto L_00154CF4;
    case 109u: goto L_00154D10;
    case 110u: goto L_00154D28;
    case 111u: goto L_00154D3C;
    case 112u: goto L_00154D50;
    case 113u: goto L_00154DC0;
    case 114u: goto L_00154E28;
    case 115u: goto L_00154E44;
    case 116u: goto L_00154E50;
    case 117u: goto L_00154E68;
    case 118u: goto L_00154E70;
    case 119u: goto L_00154E8C;
    case 120u: goto L_00154EA4;
    case 121u: goto L_00154EBC;
    case 122u: goto L_00154EC8;
    case 123u: goto L_00154ED8;
    case 124u: goto L_00154EF4;
    case 125u: goto L_00154F00;
    case 126u: goto L_00154F10;
    case 127u: goto L_00154F20;
    case 128u: goto L_00154F34;
    case 129u: goto L_00154F48;
    case 130u: goto L_00154F60;
    case 131u: goto L_00154F6C;
    case 132u: goto L_00155018;
    case 133u: goto L_001550CC;
    case 134u: goto L_001550E0;
    case 135u: goto L_001550F4;
    case 136u: goto L_00155100;
    case 137u: goto L_00155134;
    case 138u: goto L_00155180;
    case 139u: goto L_00155194;
    case 140u: goto L_001551A8;
    case 141u: goto L_001551B0;
    case 142u: goto L_001551C8;
    case 143u: goto L_001551DC;
    case 144u: goto L_001551EC;
    case 145u: goto L_001551FC;
    case 146u: goto L_0015521C;
    case 147u: goto L_00155238;
    case 148u: goto L_00155244;
    case 149u: goto L_0015525C;
    case 150u: goto L_00155274;
    case 151u: goto L_0015528C;
    case 152u: goto L_0015529C;
    case 153u: goto L_001552AC;
    case 154u: goto L_001552BC;
    case 155u: goto L_001554E0;
    case 156u: goto L_00155530;
    case 157u: goto L_00155548;
    case 158u: goto L_00155560;
    case 159u: goto L_00155578;
    case 160u: goto L_0015558C;
    case 161u: goto L_0015559C;
    case 162u: goto L_001555AC;
    case 163u: goto L_001555B8;
    case 164u: goto L_00155684;
    case 165u: goto L_001556E8;
    case 166u: goto L_00155728;
    case 167u: goto L_00155734;
    case 168u: goto L_00155940;
    case 169u: goto L_00155950;
    case 170u: goto L_00155980;
    case 171u: goto L_001559A0;
    case 172u: goto L_001559B8;
    case 173u: goto L_001559C0;
    case 174u: goto L_001559F8;
    case 175u: goto L_00155A0C;
    case 176u: goto L_00155A1C;
    case 177u: goto L_00155A30;
    case 178u: goto L_00155A48;
    case 179u: goto L_00155A58;
    case 180u: goto L_00155A64;
    case 181u: goto L_00155A74;
    case 182u: goto L_00155A88;
    case 183u: goto L_00155A98;
    case 184u: goto L_00155AA8;
    case 185u: goto L_00155AB8;
    case 186u: goto L_00155AC8;
    case 187u: goto L_00155ADC;
    case 188u: goto L_00155AF4;
    case 189u: goto L_00155B18;
    case 190u: goto L_00155B60;
    case 191u: goto L_00155B70;
    case 192u: goto L_00155B90;
    case 193u: goto L_00155D20;
    case 194u: goto L_00155D7C;
    case 195u: goto L_00155D8C;
    case 196u: goto L_00155DAC;
    case 197u: goto L_00155DD0;
    case 198u: goto L_00155DE8;
    case 199u: goto L_00155DF8;
    case 200u: goto L_00155E0C;
    case 201u: goto L_00155E2C;
    case 202u: goto L_00155E50;
    case 203u: goto L_00155E68;
    case 204u: goto L_00155E80;
    case 205u: goto L_00155E90;
    case 206u: goto L_00155EA0;
    case 207u: goto L_00155EB4;
    case 208u: goto L_00155EBC;
    case 209u: goto L_00155ED4;
    case 210u: goto L_00155EF4;
    case 211u: goto L_00155F04;
    case 212u: goto L_00155F14;
    case 213u: goto L_00155F2C;
    case 214u: goto L_00155F38;
    case 215u: goto L_00155F5C;
    case 216u: goto L_00155F6C;
    case 217u: goto L_00155F98;
    case 218u: goto L_00155FAC;
    case 219u: goto L_00155FC0;
    case 220u: goto L_00155FD0;
    case 221u: goto L_0015600C;
    case 222u: goto L_001560F8;
    case 223u: goto L_00156108;
    case 224u: goto L_00156118;
    case 225u: goto L_00156180;
    case 226u: goto L_00156188;
    case 227u: goto L_00156190;
    case 228u: goto L_001561A0;
    case 229u: goto L_001561A8;
    case 230u: goto L_001561B8;
    case 231u: goto L_001561C0;
    case 232u: goto L_001561C8;
    case 233u: goto L_001561F8;
    case 234u: goto L_00156244;
    case 235u: goto L_00156258;
    case 236u: goto L_00156268;
    case 237u: goto L_00156270;
    case 238u: goto L_0015628C;
    case 239u: goto L_001562A0;
    case 240u: goto L_001562B0;
    case 241u: goto L_00156308;
    case 242u: goto L_00156310;
    case 243u: goto L_00156320;
    case 244u: goto L_00156384;
    case 245u: goto L_001563A0;
    case 246u: goto L_001563D0;
    case 247u: goto L_00156414;
    case 248u: goto L_00156440;
    case 249u: goto L_00156460;
    case 250u: goto L_00156488;
    case 251u: goto L_001564F8;
    case 252u: goto L_0015650C;
    case 253u: goto L_00156518;
    case 254u: goto L_001565A8;
    case 255u: goto L_0015660C;
    case 256u: goto L_00156644;
    case 257u: goto L_00156660;
    case 258u: goto L_00156670;
    case 259u: goto L_001566BC;
    case 260u: goto L_001566D8;
    case 261u: goto L_001566F8;
    case 262u: goto L_00156740;
    case 263u: goto L_00156754;
    case 264u: goto L_00156760;
    case 265u: goto L_00156864;
    case 266u: goto L_00156894;
    case 267u: goto L_001568BC;
    case 268u: goto L_001568DC;
    case 269u: goto L_001568F4;
    case 270u: goto L_00156908;
    case 271u: goto L_00156924;
    case 272u: goto L_0015693C;
    case 273u: goto L_00156950;
    case 274u: goto L_00156964;
    case 275u: goto L_001569D0;
    case 276u: goto L_00156A2C;
    case 277u: goto L_00156A48;
    case 278u: goto L_00156A68;
    case 279u: goto L_00156A88;
    case 280u: goto L_00156AA0;
    case 281u: goto L_00156AB8;
    case 282u: goto L_00156AC4;
    case 283u: goto L_00156AD4;
    case 284u: goto L_00156AF0;
    case 285u: goto L_00156AFC;
    case 286u: goto L_00156B0C;
    case 287u: goto L_00156B1C;
    case 288u: goto L_00156B30;
    case 289u: goto L_00156B44;
    case 290u: goto L_00156B5C;
    case 291u: goto L_00156B68;
    case 292u: goto L_00156C14;
    case 293u: goto L_00156CA4;
    case 294u: goto L_00156CB8;
    case 295u: goto L_00156CCC;
    case 296u: goto L_00156D80;
    case 297u: goto L_00156DC4;
    case 298u: goto L_00156DDC;
    case 299u: goto L_00156DF4;
    case 300u: goto L_00156E0C;
    case 301u: goto L_00156E20;
    case 302u: goto L_00156E30;
    case 303u: goto L_00156E40;
    case 304u: goto L_00156E4C;
    case 305u: goto L_00156F18;
    case 306u: goto L_00156F84;
    case 307u: goto L_00156FC4;
    case 308u: goto L_00156FD0;
    case 309u: goto L_001571E0;
    case 310u: goto L_00157218;
    case 311u: goto L_0015722C;
    case 312u: goto L_00157234;
    case 313u: goto L_0015724C;
    case 314u: goto L_00157260;
    case 315u: goto L_00157274;
    case 316u: goto L_00157284;
    case 317u: goto L_00157298;
    case 318u: goto L_001572B8;
    case 319u: goto L_001572C8;
    case 320u: goto L_001572E4;
    case 321u: goto L_001572FC;
    case 322u: goto L_00157330;
    case 323u: goto L_00157340;
    case 324u: goto L_00157350;
    case 325u: goto L_00157380;
    case 326u: goto L_00157390;
    case 327u: goto L_001573C0;
    case 328u: goto L_001573E0;
    case 329u: goto L_001573F8;
    case 330u: goto L_00157400;
    case 331u: goto L_00157438;
    case 332u: goto L_0015744C;
    case 333u: goto L_0015745C;
    case 334u: goto L_00157470;
    case 335u: goto L_00157488;
    case 336u: goto L_00157498;
    case 337u: goto L_001574A4;
    case 338u: goto L_001574B4;
    case 339u: goto L_001574C8;
    case 340u: goto L_001574D8;
    case 341u: goto L_001574E8;
    case 342u: goto L_001574F8;
    case 343u: goto L_00157508;
    case 344u: goto L_0015751C;
    case 345u: goto L_00157534;
    case 346u: goto L_00157558;
    case 347u: goto L_001575A0;
    case 348u: goto L_001575B0;
    case 349u: goto L_001575EC;
    case 350u: goto L_00157610;
    case 351u: goto L_00157628;
    case 352u: goto L_00157630;
    case 353u: goto L_0015763C;
    case 354u: goto L_0015764C;
    case 355u: goto L_00157654;
    case 356u: goto L_0015765C;
    case 357u: goto L_00157688;
    case 358u: goto L_0015769C;
    case 359u: goto L_001576B0;
    case 360u: goto L_001576B8;
    case 361u: goto L_001576CC;
    case 362u: goto L_001576D4;
    case 363u: goto L_001576DC;
    case 364u: goto L_001576F0;
    case 365u: goto L_00157704;
    case 366u: goto L_00157720;
    case 367u: goto L_00157738;
    case 368u: goto L_0015775C;
    case 369u: goto L_00157778;
    case 370u: goto L_0015778C;
    case 371u: goto L_00157798;
    case 372u: goto L_001577B8;
    case 373u: goto L_001577CC;
    case 374u: goto L_001577E0;
    case 375u: goto L_0015780C;
    case 376u: goto L_00157820;
    case 377u: goto L_0015783C;
    case 378u: goto L_00157850;
    case 379u: goto L_0015785C;
    case 380u: goto L_00157878;
    case 381u: goto L_0015789C;
    case 382u: goto L_001578B0;
    case 383u: goto L_001578E8;
    case 384u: goto L_001578FC;
    case 385u: goto L_00157908;
    case 386u: goto L_00157920;
    case 387u: goto L_00157940;
    case 388u: goto L_00157960;
    case 389u: goto L_00157978;
    case 390u: goto L_0015798C;
    case 391u: goto L_001579A0;
    case 392u: goto L_001579B0;
    case 393u: goto L_001579FC;
    case 394u: goto L_00157A10;
    case 395u: goto L_00157A24;
    case 396u: goto L_00157A34;
    case 397u: goto L_00157A70;
    case 398u: goto L_00157AB0;
    case 399u: goto L_00157AB8;
    case 400u: goto L_00157AC0;
    case 401u: goto L_00157AC8;
    case 402u: goto L_00157AD4;
    case 403u: goto L_00157B08;
    case 404u: goto L_00157B20;
    case 405u: goto L_00157B34;
    case 406u: goto L_00157B50;
    case 407u: goto L_00157B68;
    case 408u: goto L_00157B80;
    case 409u: goto L_00157B94;
    case 410u: goto L_00157BAC;
    case 411u: goto L_00157BBC;
    case 412u: goto L_00157BC4;
    case 413u: goto L_00157BCC;
    case 414u: goto L_00157C00;
    case 415u: goto L_00157C34;
    case 416u: goto L_00157C50;
    case 417u: goto L_00157C70;
    case 418u: goto L_00157C80;
    case 419u: goto L_00157CA4;
    case 420u: goto L_00157CB8;
    case 421u: goto L_00157CD0;
    case 422u: goto L_00157CE4;
    case 423u: goto L_00157CF4;
    case 424u: goto L_00157D04;
    case 425u: goto L_00157D24;
    case 426u: goto L_00157D48;
    case 427u: goto L_00157D5C;
    case 428u: goto L_00157D74;
    case 429u: goto L_00157D88;
    case 430u: goto L_00157D98;
    case 431u: goto L_00157DA8;
    case 432u: goto L_00157DC8;
    case 433u: goto L_00157DD8;
    case 434u: goto L_00157DE4;
    case 435u: goto L_00157E14;
    case 436u: goto L_00157E40;
    case 437u: goto L_00157E88;
    case 438u: goto L_00157EA0;
    case 439u: goto L_00157EB8;
    case 440u: goto L_00157F40;
    case 441u: goto L_00157F94;
    case 442u: goto L_00157FC0;
    case 443u: goto L_00157FD0;
    case 444u: goto L_00157FD8;
    case 445u: goto L_00157FE0;
    case 446u: goto L_00157FF0;
    default: bad_entry(c, 0x00154000u); return;
    }
L_00154000:
    set32(c.r[2], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[4].w[0] - 13168u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
L_00154010:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[22], c.r[29].w[0] + 48u);
    st16((c.r[5].w[0] - 13166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[29].w[0] + 96u);
    set32(c.r[3], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 188u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[30], c.r[29].w[0] + 176u);
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154394; } }
L_00154040:
    set32(c.r[16], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154054u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00154054u) [[unlikely]] return; }
L_00154054:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154068u);  if (depth < kMaxDepth) unit_008A(c, 267u, depth + 1u); else { c.pc = 0x0032B7E8u; return; } if (c.pc != 0x00154068u) [[unlikely]] return; }
L_00154068:
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st16((c.r[3].w[0] - 13166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st16((c.r[2].w[0] - 13168u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00154080:
    st32((c.r[29].w[0] + 192u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 184u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[22], c.r[29].w[0] + 48u);
    set32(c.r[30], c.r[29].w[0] + 176u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154394; } }
L_001540A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001540ACu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001540ACu) [[unlikely]] return; }
L_001540AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[24] = c.r[1].w[0];
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001540D0u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001540D0u) [[unlikely]] return; }
L_001540D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[23] = c.r[1].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001540E0u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001540E0u) [[unlikely]] return; }
L_001540E0:
    c.f[25] = 0u;
    set32(c.r[18], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001540FCu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001540FCu) [[unlikely]] return; }
L_001540FC:
    set32(c.r[21], 0u + 1u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 192u), c.r[18].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154118u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154118u) [[unlikely]] return; }
L_00154118:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015412Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015412Cu) [[unlikely]] return; }
L_0015412C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[24];
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154140u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00154140u) [[unlikely]] return; }
L_00154140:
    set32(c.r[17], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154158u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154158u) [[unlikely]] return; }
L_00154158:
    set32(c.r[16], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 184u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154174u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154174u) [[unlikely]] return; }
L_00154174:
    set32(c.r[20], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 188u), c.r[16].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154190u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154190u) [[unlikely]] return; }
L_00154190:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015419Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015419Cu) [[unlikely]] return; }
L_0015419C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = fp::add(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001541B4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001541B4u) [[unlikely]] return; }
L_001541B4:
    c.f[21] = c.f[0];
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001541C4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001541C4u) [[unlikely]] return; }
L_001541C4:
    c.f[1] = fp::add(c.f[20], c.f[21]);
    c.f[22] = c.f[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.f[1] = fp::add(c.f[1], c.f[22]);
    fpu_div(c, 20u, c.f[20], c.f[1]);
    fpu_div(c, 21u, c.f[21], c.f[1]);
    fpu_div(c, 22u, c.f[22], c.f[1]);
    c.f[12] = fp::mul(c.f[20], c.f[23]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154208u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00154208u) [[unlikely]] return; }
L_00154208:
    c.f[12] = fp::mul(c.f[21], c.f[23]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015421Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015421Cu) [[unlikely]] return; }
L_0015421C:
    c.f[12] = fp::mul(c.f[22], c.f[23]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154230u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00154230u) [[unlikely]] return; }
L_00154230:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154244u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154244u) [[unlikely]] return; }
L_00154244:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154258u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154258u) [[unlikely]] return; }
L_00154258:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[24];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015426Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015426Cu) [[unlikely]] return; }
L_0015426C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 3u);
    st16((c.r[4].w[0] - 13168u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[29].w[0] + 128u);
    st16((c.r[5].w[0] - 13166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[22], c.r[29].w[0] + 48u);
    set32(c.r[30], c.r[29].w[0] + 176u);
    c.budget -= 9;
L_00154290:
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[21].d[0] ^ 2ull;
    if (c.r[2].d[0] == 0) c.r[21].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001542A4u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001542A4u) [[unlikely]] return; }
L_001542A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001542B8u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001542B8u) [[unlikely]] return; }
L_001542B8:
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00154380; } }
    set32(c.r[19], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_001542D8:
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[17].d[0] ^ 2ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[3].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001542ECu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001542ECu) [[unlikely]] return; }
L_001542EC:
    set32(c.r[18], c.r[29].w[0] + 144u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154304u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00154304u) [[unlikely]] return; }
L_00154304:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154318u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154318u) [[unlikely]] return; }
L_00154318:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154324u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154324u) [[unlikely]] return; }
L_00154324:
    fpu_compare(c, fp::key(c.f[25]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00154368; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[25] = c.f[0];
    st16((c.r[2].w[0] - 13168u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[3].w[0] - 13166u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154358u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00154358u) [[unlikely]] return; }
L_00154358:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154368u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00154368u) [[unlikely]] return; }
L_00154368:
    set32(c.r[2], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001542D8u | kUnwind; return; } goto L_001542D8; } }
L_00154380:
    set32(c.r[2], c.r[20].w[0] << 16);
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[21].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154290u | kUnwind; return; } goto L_00154290; } }
L_00154394:
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001543A8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001543A8u) [[unlikely]] return; }
L_001543A8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001543B4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001543B4u) [[unlikely]] return; }
L_001543B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 2636u));
    c.f[3] = ld32((c.r[2].w[0] + 2644u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001543EC; } }
    c.f[20] = c.f[3];
    c.budget -= 1;
L_001543EC:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.r[9].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 2624u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 188u)));
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[29].w[0] + 64u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 76u), 0u);
    st32((c.r[29].w[0] + 72u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154464u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x00154464u) [[unlikely]] return; }
L_00154464:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00154574; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[29].w[0] + 112u);
    c.budget -= 3;
L_00154480:
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[3].w[0] + 2648u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 188u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154498u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154498u) [[unlikely]] return; }
L_00154498:
    set32(c.r[3], ld32((c.r[29].w[0] + 176u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001544C8; } }
    set32(c.r[16], c.r[29].w[0] + 128u);
    set32(c.r[6], ld32((c.r[29].w[0] + 192u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001544C0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001544C0u) [[unlikely]] return; }
L_001544C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001544E0; } }
L_001544C8:
    set32(c.r[16], c.r[29].w[0] + 128u);
    set32(c.r[6], ld32((c.r[29].w[0] + 184u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001544E0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001544E0u) [[unlikely]] return; }
L_001544E0:
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001544F8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001544F8u) [[unlikely]] return; }
L_001544F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 180u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 2640u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154510u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154510u) [[unlikely]] return; }
L_00154510:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00154530; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015452Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015452Cu) [[unlikely]] return; }
L_0015452C:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00154530:
    set32(c.r[16], c.r[29].w[0] + 160u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154544u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00154544u) [[unlikely]] return; }
L_00154544:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154558u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00154558u) [[unlikely]] return; }
L_00154558:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015456Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015456Cu) [[unlikely]] return; }
L_0015456C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015457C; } }
L_00154574:
    set32(c.r[3], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[3].w[0] + 2648u), 0u);
    c.budget -= 2;
L_0015457C:
    c.f[0] = ld32((c.r[23].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    st32((c.r[23].w[0] + 4u), c.f[0]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.f[25] = ld32((c.r[29].w[0] + 408u));
    c.f[24] = ld32((c.r[29].w[0] + 400u));
    c.f[23] = ld32((c.r[29].w[0] + 392u));
    c.f[22] = ld32((c.r[29].w[0] + 384u));
    c.f[21] = ld32((c.r[29].w[0] + 376u));
    c.f[20] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 416u);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001545E0:
    set32(c.r[29], c.r[29].w[0] - 560u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[17]);
    c.r[30].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 324u), c.r[4].w[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 496u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 352u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 544u), c.f[24]);
    st32((c.r[29].w[0] + 536u), c.f[23]);
    st32((c.r[29].w[0] + 528u), c.f[22]);
    st32((c.r[29].w[0] + 520u), c.f[21]);
    st32((c.r[29].w[0] + 512u), c.f[20]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154634u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00154634u) [[unlikely]] return; }
L_00154634:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154644u);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x00154644u) [[unlikely]] return; }
L_00154644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015466C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154654u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00154654u) [[unlikely]] return; }
L_00154654:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154664u);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x00154664u) [[unlikely]] return; }
L_00154664:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0015466C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154674u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00154674u) [[unlikely]] return; }
L_00154674:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154688u);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x00154688u) [[unlikely]] return; }
L_00154688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001546B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154698u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00154698u) [[unlikely]] return; }
L_00154698:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001546A8u);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x001546A8u) [[unlikely]] return; }
L_001546A8:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.r[16].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_001546B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001546B8u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001546B8u) [[unlikely]] return; }
L_001546B8:
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001546CCu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001546CCu) [[unlikely]] return; }
L_001546CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001546D4u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001546D4u) [[unlikely]] return; }
L_001546D4:
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001546E8u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001546E8u) [[unlikely]] return; }
L_001546E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001546F0u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001546F0u) [[unlikely]] return; }
L_001546F0:
    set32(c.r[6], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154708u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00154708u) [[unlikely]] return; }
L_00154708:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0015473C; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00154760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154720u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00154720u) [[unlikely]] return; }
L_00154720:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154734u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00154734u) [[unlikely]] return; }
L_00154734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154760; } }
L_0015473C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00154760; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015474Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015474Cu) [[unlikely]] return; }
L_0015474C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154760u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00154760u) [[unlikely]] return; }
L_00154760:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154774u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154774u) [[unlikely]] return; }
L_00154774:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154788u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154788u) [[unlikely]] return; }
L_00154788:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00154798; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001547BC; } }
L_00154798:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001547B4u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001547B4u) [[unlikely]] return; }
L_001547B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001547E8; } }
L_001547BC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001547D0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001547D0u) [[unlikely]] return; }
L_001547D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001547E8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001547E8u) [[unlikely]] return; }
L_001547E8:
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154800u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154800u) [[unlikely]] return; }
L_00154800:
    c.f[23] = 0u;
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015481Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015481Cu) [[unlikely]] return; }
L_0015481C:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154834u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154834u) [[unlikely]] return; }
L_00154834:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00154858; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00154858; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154858u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154858u) [[unlikely]] return; }
L_00154858:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x466A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    c.f[20] = c.r[1].w[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154870u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154870u) [[unlikely]] return; }
L_00154870:
    c.f[22] = fp::add(c.f[0], c.f[20]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154880u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154880u) [[unlikely]] return; }
L_00154880:
    c.f[21] = fp::add(c.f[0], c.f[20]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154890u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154890u) [[unlikely]] return; }
L_00154890:
    c.f[20] = c.f[0];
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001548B4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001548B4; } }
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001548B0u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x001548B0u) [[unlikely]] return; }
L_001548B0:
    c.f[23] = c.f[0];
    c.budget -= 1;
L_001548B4:
    c.f[0] = fp::add(c.f[22], c.f[21]);
    c.f[24] = 0u;
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[0] = fp::add(c.f[0], c.f[23]);
    fpu_div(c, 12u, c.f[22], c.f[0]);
    fpu_div(c, 21u, c.f[21], c.f[0]);
    fpu_div(c, 22u, c.f[20], c.f[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00154904; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00154904; } }
    fpu_div(c, 24u, c.f[23], c.f[0]);
    c.budget -= 3;
L_00154904:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00154924; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00154924; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_00154924:
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015493Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015493Cu) [[unlikely]] return; }
L_0015493C:
    c.f[12] = fp::mul(c.f[21], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154950u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00154950u) [[unlikely]] return; }
L_00154950:
    c.f[12] = fp::mul(c.f[22], c.f[20]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154964u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00154964u) [[unlikely]] return; }
L_00154964:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00154988; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00154988; } }
    c.f[12] = fp::mul(c.f[24], c.f[20]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154988u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00154988u) [[unlikely]] return; }
L_00154988:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015499Cu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x0015499Cu) [[unlikely]] return; }
L_0015499C:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001549B0u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001549B0u) [[unlikely]] return; }
L_001549B0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001549C0; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001549E4; } }
L_001549C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EA80000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001549DCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001549DCu) [[unlikely]] return; }
L_001549DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154A10; } }
L_001549E4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001549F8u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001549F8u) [[unlikely]] return; }
L_001549F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A10u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00154A10u) [[unlikely]] return; }
L_00154A10:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st16((c.r[4].w[0] - 13168u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[22], 0u + 3u);
    st16((c.r[5].w[0] - 13166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[20] = 0u;
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00154A40; } }
    set32(c.r[2], 0u + 4u);
    if (c.r[16].d[0] != 0) c.r[22].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_00154A40:
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[3], c.r[29].w[0] + 208u);
    st32((c.r[29].w[0] + 340u), c.r[2].w[0]);
    set32(c.r[20], 0u + 1u);
    set32(c.r[2], c.r[29].w[0] + 224u);
    st32((c.r[29].w[0] + 328u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 332u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 240u);
    set32(c.r[2], c.r[29].w[0] + 320u);
    st32((c.r[29].w[0] + 336u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    c.budget -= 13;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_00154B78; } }
    set32(c.r[21], c.r[29].w[0] + 160u);
    c.budget -= 1;
L_00154A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A80u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00154A80u) [[unlikely]] return; }
L_00154A80:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154A94u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00154A94u) [[unlikely]] return; }
L_00154A94:
    set32(c.r[2], c.r[20].w[0] + 1u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[22].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00154B64; } }
    set32(c.r[2], c.r[16].w[0] << 16);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[18], c.r[29].w[0] + 176u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[29].w[0] + 192u);
    c.budget -= 6;
L_00154AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154AD0u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00154AD0u) [[unlikely]] return; }
L_00154AD0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154AE4u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00154AE4u) [[unlikely]] return; }
L_00154AE4:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154AF8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154AF8u) [[unlikely]] return; }
L_00154AF8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154B04u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154B04u) [[unlikely]] return; }
L_00154B04:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00154B48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[20] = c.f[0];
    st16((c.r[2].w[0] - 13166u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[3].w[0] - 13168u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154B38u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00154B38u) [[unlikely]] return; }
L_00154B38:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154B48u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00154B48u) [[unlikely]] return; }
L_00154B48:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[22].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154AC8u | kUnwind; return; } goto L_00154AC8; } }
L_00154B64:
    set32(c.r[2], c.r[23].w[0] << 16);
    set32(c.r[20], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[22].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00154A78u | kUnwind; return; } goto L_00154A78; } }
L_00154B78:
    set32(c.r[4], ld32((c.r[29].w[0] + 340u)));
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[6], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154B8Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154B8Cu) [[unlikely]] return; }
L_00154B8C:
    set32(c.r[4], ld32((c.r[29].w[0] + 340u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154B98u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154B98u) [[unlikely]] return; }
L_00154B98:
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[3].w[0] + 2636u));
    c.f[3] = ld32((c.r[3].w[0] + 2644u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[20] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00154BD0; } }
    c.f[20] = c.f[3];
    c.budget -= 1;
L_00154BD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 344u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 2624u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 328u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 332u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[29].w[0] + 208u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 212u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 220u), 0u);
    st32((c.r[29].w[0] + 216u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 224u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 228u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 236u), 0u);
    st32((c.r[29].w[0] + 232u), c.f[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154C48u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x00154C48u) [[unlikely]] return; }
L_00154C48:
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[29].w[0] + 252u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00154D58; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[29].w[0] + 256u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[3].w[0] + 2648u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 336u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154C7Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154C7Cu) [[unlikely]] return; }
L_00154C7C:
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00154CAC; } }
    set32(c.r[16], c.r[29].w[0] + 272u);
    set32(c.r[6], ld32((c.r[29].w[0] + 328u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154CA4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154CA4u) [[unlikely]] return; }
L_00154CA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154CC4; } }
L_00154CAC:
    set32(c.r[16], c.r[29].w[0] + 272u);
    set32(c.r[6], ld32((c.r[29].w[0] + 332u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154CC4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154CC4u) [[unlikely]] return; }
L_00154CC4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[29].w[0] + 288u);
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154CDCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154CDCu) [[unlikely]] return; }
L_00154CDC:
    set32(c.r[2], ld32((c.r[29].w[0] + 324u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[2].w[0] + 2640u));
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154CF4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154CF4u) [[unlikely]] return; }
L_00154CF4:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00154D14; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154D10u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154D10u) [[unlikely]] return; }
L_00154D10:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00154D14:
    set32(c.r[16], c.r[29].w[0] + 304u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154D28u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00154D28u) [[unlikely]] return; }
L_00154D28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154D3Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00154D3Cu) [[unlikely]] return; }
L_00154D3C:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154D50u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154D50u) [[unlikely]] return; }
L_00154D50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00154D60; } }
L_00154D58:
    set32(c.r[3], ld32((c.r[29].w[0] + 324u)));
    st32((c.r[3].w[0] + 2648u), 0u);
    c.budget -= 2;
L_00154D60:
    c.f[0] = ld32((c.r[30].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    ld128((c.r[29].w[0] + 496u) & ~15u, c.r[16]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[19]);
    st32((c.r[30].w[0] + 4u), c.f[0]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 352u));
    c.f[24] = ld32((c.r[29].w[0] + 544u));
    c.f[23] = ld32((c.r[29].w[0] + 536u));
    c.f[22] = ld32((c.r[29].w[0] + 528u));
    c.f[21] = ld32((c.r[29].w[0] + 520u));
    c.f[20] = ld32((c.r[29].w[0] + 512u));
    set32(c.r[29], c.r[29].w[0] + 560u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00154DC0:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 360u), c.f[25]);
    set32(c.r[19], c.r[20].w[0] + 304u);
    st32((c.r[29].w[0] + 328u), c.f[21]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 320u), c.f[20]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 352u), c.f[24]);
    st32((c.r[29].w[0] + 344u), c.f[23]);
    st32((c.r[29].w[0] + 336u), c.f[22]);
    c.f[22] = ld32((c.r[20].w[0] + 2660u));
    set32(c.r[4], ld32((c.r[20].w[0] + 2624u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 2628u)));
    c.f[24] = ld32((c.r[20].w[0] + 2676u));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E28u);  if (depth < kMaxDepth) unit_008B(c, 237u, depth + 1u); else { c.pc = 0x0032E6F0u; return; } if (c.pc != 0x00154E28u) [[unlikely]] return; }
L_00154E28:
    c.f[25] = 0u;
    set32(c.r[4], ld32((c.r[20].w[0] + 2624u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[20].w[0] + 2628u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E44u);  if (depth < kMaxDepth) unit_008B(c, 242u, depth + 1u); else { c.pc = 0x0032E838u; return; } if (c.pc != 0x00154E44u) [[unlikely]] return; }
L_00154E44:
    st32((c.r[21].w[0] + 4u), c.f[25]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E50u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00154E50u) [[unlikely]] return; }
L_00154E50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 13168u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E68u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00154E68u) [[unlikely]] return; }
L_00154E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E70u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00154E70u) [[unlikely]] return; }
L_00154E70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] - 13166u)));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154E8Cu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00154E8Cu) [[unlikely]] return; }
L_00154E8C:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154EA4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154EA4u) [[unlikely]] return; }
L_00154EA4:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154EBCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154EBCu) [[unlikely]] return; }
L_00154EBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154EC8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154EC8u) [[unlikely]] return; }
L_00154EC8:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154ED8u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154ED8u) [[unlikely]] return; }
L_00154ED8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[21] = fp::add(c.f[0], c.f[1]);
    c.f[20] = fp::add(c.f[20], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154EF4u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x00154EF4u) [[unlikely]] return; }
L_00154EF4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F00u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x00154F00u) [[unlikely]] return; }
L_00154F00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F10u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x00154F10u) [[unlikely]] return; }
L_00154F10:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F20u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x00154F20u) [[unlikely]] return; }
L_00154F20:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F34u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154F34u) [[unlikely]] return; }
L_00154F34:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F48u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00154F48u) [[unlikely]] return; }
L_00154F48:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F60u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00154F60u) [[unlikely]] return; }
L_00154F60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00154F6Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00154F6Cu) [[unlikely]] return; }
L_00154F6C:
    c.f[2] = ld32((c.r[20].w[0] + 2656u));
    c.f[21] = c.f[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00154FA8; } }
    c.f[0] = ld32((c.r[20].w[0] + 2652u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 2660u));
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[22] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 9;
L_00154FA8:
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[3] = ld32((c.r[20].w[0] + 2668u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = ld32((c.r[20].w[0] + 2672u));
    c.f[12] = ld32((c.r[20].w[0] + 624u));
    c.f[2] = fp::sub(c.f[2], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[4] = c.r[1].w[0];
    c.f[23] = c.f[0] & fp::kAbs;
    c.f[1] = ld32((c.r[20].w[0] + 2664u));
    c.f[12] = fp::mul(c.f[12], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.f[3] = fp::sub(c.f[23], c.f[3]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[22] = fp::add(c.f[22], c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155018u);  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00207700u; return; } if (c.pc != 0x00155018u) [[unlikely]] return; }
L_00155018:
    set32(c.r[3], ld32((c.r[20].w[0] + 2632u)));
    set32(c.r[2], 0u + 3u);
    c.f[1] = fp::add(c.f[21], c.f[22]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00155040; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00155064; } }
L_00155040:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x456A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 24576ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155064; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00155064:
    c.f[0] = ld32((c.r[20].w[0] + 584u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0015508C; } }
    c.f[0] = ld32((c.r[20].w[0] + 588u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155090; } }
L_0015508C:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00155090:
    c.f[2] = ld32((c.r[20].w[0] + 312u));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[3] = ld32((c.r[20].w[0] + 304u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[21].w[0]));
    set32(c.r[17], c.r[20].w[0] + 304u);
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001550CCu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x001550CCu) [[unlikely]] return; }
L_001550CC:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001550E0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001550E0u) [[unlikely]] return; }
L_001550E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001550F4u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001550F4u) [[unlikely]] return; }
L_001550F4:
    c.f[2] = ld32((c.r[20].w[0] + 2656u));
    set32(c.r[3], ld32((c.r[20].w[0] + 2624u)));
    c.budget -= 3;
L_00155100:
    fpu_div(c, 2u, c.f[21], c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 2680u));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[24]);
    c.f[0] = fp::mul(c.f[25], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 4u), c.f[1]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155134u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00155134u) [[unlikely]] return; }
L_00155134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155474; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 2648u)));
    c.f[20] = 0u;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155214; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155214; } }
    set32(c.r[16], c.r[29].w[0] + 96u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155180u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00155180u) [[unlikely]] return; }
L_00155180:
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155194u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00155194u) [[unlikely]] return; }
L_00155194:
    set32(c.r[17], 0u + 1u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[18], c.r[29].w[0] + 112u);
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.budget -= 5;
L_001551A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001551B0u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x001551B0u) [[unlikely]] return; }
L_001551B0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001551C8u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001551C8u) [[unlikely]] return; }
L_001551C8:
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001551DCu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001551DCu) [[unlikely]] return; }
L_001551DC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001551ECu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001551ECu) [[unlikely]] return; }
L_001551EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001551FCu);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x001551FCu) [[unlikely]] return; }
L_001551FC:
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001551A8u | kUnwind; return; } goto L_001551A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001552C0; } }
L_00155214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015521Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015521Cu) [[unlikely]] return; }
L_0015521C:
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155238u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00155238u) [[unlikely]] return; }
L_00155238:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155244u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00155244u) [[unlikely]] return; }
L_00155244:
    set32(c.r[18], c.r[29].w[0] + 128u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015525Cu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015525Cu) [[unlikely]] return; }
L_0015525C:
    set32(c.r[17], c.r[29].w[0] + 144u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155274u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00155274u) [[unlikely]] return; }
L_00155274:
    set32(c.r[16], c.r[29].w[0] + 160u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015528Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015528Cu) [[unlikely]] return; }
L_0015528C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015529Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015529Cu) [[unlikely]] return; }
L_0015529C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001552ACu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001552ACu) [[unlikely]] return; }
L_001552AC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001552BCu);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x001552BCu) [[unlikely]] return; }
L_001552BC:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_001552C0:
    c.f[0] = ld32((c.r[20].w[0] + 2688u));
    c.f[2] = ld32((c.r[20].w[0] + 2684u));
    c.f[1] = fp::sub(c.f[0], c.f[20]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[3] = fp::mul(c.f[1], c.f[2]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001553C0; } }
    set32(c.r[4], ld32((c.r[23].w[0] + 16836u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 2692u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155310; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[23].w[0] + 16836u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00155420; } }
L_00155310:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 14208u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20948u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155338; } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 1428u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00155420; } }
L_00155338:
    c.f[2] = ld32((c.r[20].w[0] + 2704u));
    fpu_compare(c, fp::key(c.f[21]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155370; } }
    c.f[1] = fp::sub(c.f[2], c.f[21]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    c.f[3] = fp::sub(c.f[3], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155374; } }
L_00155370:
    c.f[3] = 0u;
    c.budget -= 1;
L_00155374:
    c.f[1] = ld32((c.r[19].w[0] + 16832u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015539C; } }
    c.f[0] = ld32((c.r[20].w[0] + 2696u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001553A8; } }
L_0015539C:
    c.f[0] = ld32((c.r[20].w[0] + 2700u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 3;
L_001553A8:
    st32((c.r[19].w[0] + 16832u), c.f[0]);
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155420; } }
    st32((c.r[19].w[0] + 16832u), c.f[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155420; } }
L_001553C0:
    set32(c.r[2], ld32((c.r[23].w[0] + 16836u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001553D0; } }
    st32((c.r[23].w[0] + 16836u), 0u);
    c.budget -= 1;
L_001553D0:
    c.f[1] = ld32((c.r[19].w[0] + 16832u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155438; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 14208u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20948u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155414; } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 1428u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00155420; } }
L_00155414:
    c.f[0] = ld32((c.r[20].w[0] + 2700u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 16832u), c.f[0]);
    c.budget -= 3;
L_00155420:
    c.f[1] = ld32((c.r[19].w[0] + 16832u));
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[21].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155474; } }
L_00155438:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 14208u);
    set32(c.r[3], ld32((c.r[4].w[0] + 20948u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00155470; } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 1428u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00155474; } }
L_00155470:
    st32((c.r[19].w[0] + 16832u), c.f[0]);
    c.budget -= 1;
L_00155474:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3FA0000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[21].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155494; } }
    st32((c.r[21].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_00155494:
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[25] = ld32((c.r[29].w[0] + 360u));
    c.f[24] = ld32((c.r[29].w[0] + 352u));
    c.f[23] = ld32((c.r[29].w[0] + 344u));
    c.f[22] = ld32((c.r[29].w[0] + 336u));
    c.f[21] = ld32((c.r[29].w[0] + 328u));
    c.f[20] = ld32((c.r[29].w[0] + 320u));
    set32(c.r[29], c.r[29].w[0] + 368u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001554E0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[22]);
    set32(c.r[18], c.r[19].w[0] + 368u);
    st32((c.r[29].w[0] + 200u), c.f[21]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[19].w[0] + 2624u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 2628u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155530u);  if (depth < kMaxDepth) unit_008B(c, 237u, depth + 1u); else { c.pc = 0x0032E6F0u; return; } if (c.pc != 0x00155530u) [[unlikely]] return; }
L_00155530:
    set32(c.r[4], ld32((c.r[19].w[0] + 2624u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0] + 2628u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155548u);  if (depth < kMaxDepth) unit_008B(c, 242u, depth + 1u); else { c.pc = 0x0032E838u; return; } if (c.pc != 0x00155548u) [[unlikely]] return; }
L_00155548:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155560u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00155560u) [[unlikely]] return; }
L_00155560:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155578u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00155578u) [[unlikely]] return; }
L_00155578:
    st32((c.r[29].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015558Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015558Cu) [[unlikely]] return; }
L_0015558C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[21] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015559Cu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x0015559Cu) [[unlikely]] return; }
L_0015559C:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001555ACu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x001555ACu) [[unlikely]] return; }
L_001555AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001555B8u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x001555B8u) [[unlikely]] return; }
L_001555B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[5] = fp::cvt_w_s(c.f[4]);
    set32(c.r[2], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[4] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[4]);
    c.f[2] = fp::cvt_w_s(c.f[3]);
    set32(c.r[6], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[4] = c.r[6].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    fpu_div(c, 3u, c.f[3], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    fpu_div(c, 4u, c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155684u);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x00155684u) [[unlikely]] return; }
L_00155684:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[22]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001556B4; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_001556B4:
    set32(c.r[3], ld32((c.r[19].w[0] + 2624u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = ld32((c.r[19].w[0] + 368u));
    set32(c.r[5], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.f[13] = ld32((c.r[19].w[0] + 376u));
    c.f[17] = ld32((c.r[2].w[0] + 24u));
    c.f[14] = ld32((c.r[2].w[0]));
    c.f[15] = ld32((c.r[2].w[0] + 8u));
    c.f[16] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001556E8u);  if (depth < kMaxDepth) unit_008A(c, 6u, depth + 1u); else { c.pc = 0x00328278u; return; } if (c.pc != 0x001556E8u) [[unlikely]] return; }
L_001556E8:
    c.f[1] = ld32((c.r[19].w[0] + 368u));
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[19].w[0] + 376u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[3]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155728u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00155728u) [[unlikely]] return; }
L_00155728:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155734u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00155734u) [[unlikely]] return; }
L_00155734:
    c.f[4] = c.f[0];
    c.f[5] = c.f[22];
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_0015575C; } }
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155830; } }
L_0015575C:
    c.f[1] = c.f[4] ^ fp::kSign;
    c.f[0] = ld32((c.r[19].w[0] + 2708u));
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.f[3] = c.f[1];
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00155910; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00155910; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001557E4; } }
    c.f[1] = ld32((c.r[19].w[0] + 2712u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001557E4; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155890; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155890; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155880; } }
L_001557E4:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155890; } }
    c.f[1] = ld32((c.r[19].w[0] + 2712u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155890; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155890; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155880; } }
L_00155830:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155890; } }
    c.f[0] = ld32((c.r[19].w[0] + 2708u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.f[2] = c.f[0];
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155890; } }
    c.f[1] = ld32((c.r[19].w[0] + 2712u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155890; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00155890; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[4], c.f[2]);
    c.budget -= 2;
L_00155880:
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[5] = c.f[0] & fp::kAbs;
    c.budget -= 4;
L_00155890:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_001558B0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00155910; } }
L_001558B0:
    c.f[1] = ld32((c.r[19].w[0] + 2720u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001558D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001558F8; } }
L_001558D8:
    c.f[0] = ld32((c.r[19].w[0] + 2716u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001558F8; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_div(c, 2u, c.f[0], c.f[1]);
    c.budget -= 3;
L_001558F8:
    c.f[0] = ld32((c.r[19].w[0] + 2724u));
    c.f[1] = ld32((c.r[19].w[0] + 308u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 308u), c.f[1]);
    c.budget -= 6;
L_00155910:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00155940:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00155950:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 18864u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155980u);  if (depth < kMaxDepth) unit_0013(c, 144u, depth + 1u); else { c.pc = 0x0014D408u; return; } if (c.pc != 0x00155980u) [[unlikely]] return; }
L_00155980:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001559A0; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559A0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x001559A0u) [[unlikely]] return; }
L_001559A0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001559B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001559C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[6], c.r[17].w[0] + 320u);
    set32(c.r[5], c.r[17].w[0] + 304u);
    set32(c.r[19], c.r[17].w[0] + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001559F8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001559F8u) [[unlikely]] return; }
L_001559F8:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A0Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00155A0Cu) [[unlikely]] return; }
L_00155A0C:
    c.f[12] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A1Cu);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x00155A1Cu) [[unlikely]] return; }
L_00155A1C:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A30u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x00155A30u) [[unlikely]] return; }
L_00155A30:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A48u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00155A48u) [[unlikely]] return; }
L_00155A48:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A58u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00155A58u) [[unlikely]] return; }
L_00155A58:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A64u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00155A64u) [[unlikely]] return; }
L_00155A64:
    c.f[12] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A74u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00155A74u) [[unlikely]] return; }
L_00155A74:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[12] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A88u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00155A88u) [[unlikely]] return; }
L_00155A88:
    c.f[12] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155A98u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00155A98u) [[unlikely]] return; }
L_00155A98:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AA8u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00155AA8u) [[unlikely]] return; }
L_00155AA8:
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AB8u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00155AB8u) [[unlikely]] return; }
L_00155AB8:
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AC8u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00155AC8u) [[unlikely]] return; }
L_00155AC8:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155ADCu);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x00155ADCu) [[unlikely]] return; }
L_00155ADC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155AF4u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00155AF4u) [[unlikely]] return; }
L_00155AF4:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00155B18:
    set32(c.r[2], ld32((c.r[4].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00155B60; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 648u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 548u));
    c.f[1] = ld32((c.r[4].w[0] + 644u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00155B60:
    c.f[0] = ld32((c.r[4].w[0] + 548u));
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00155B70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155B90u);  if (depth < kMaxDepth) unit_0012(c, 198u, depth + 1u); else { c.pc = 0x00149660u; return; } if (c.pc != 0x00155B90u) [[unlikely]] return; }
L_00155B90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + 19232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[14] = c.r[1].w[0];
    set32(c.r[4], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[15] = c.r[1].w[0];
    set32(c.r[5], 0u + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x464E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[7] = c.r[1].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[6] = c.r[1].w[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x465A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x451C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44960000u);
    c.f[5] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[9] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC57A0000u);
    c.f[10] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC53B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[11] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x454E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[12] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44480000u);
    c.f[13] = c.r[1].w[0];
    st32((c.r[16].w[0] + 724u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 2624u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 2728u), c.f[7]);
    st32((c.r[16].w[0] + 2732u), c.f[6]);
    st32((c.r[16].w[0] + 2748u), c.f[2]);
    st32((c.r[16].w[0] + 2764u), c.f[3]);
    st32((c.r[16].w[0] + 2768u), c.f[4]);
    st32((c.r[16].w[0] + 2776u), c.f[5]);
    st32((c.r[16].w[0] + 2780u), c.f[14]);
    st32((c.r[16].w[0] + 2784u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 2788u), c.f[8]);
    st32((c.r[16].w[0] + 2792u), c.f[9]);
    st32((c.r[16].w[0] + 2800u), c.f[10]);
    st32((c.r[16].w[0] + 2804u), c.f[11]);
    st32((c.r[16].w[0] + 2808u), c.f[1]);
    st32((c.r[16].w[0] + 2812u), c.f[12]);
    st32((c.r[16].w[0] + 2816u), c.f[13]);
    st32((c.r[16].w[0] + 556u), c.f[0]);
    st32((c.r[16].w[0] + 2736u), c.f[14]);
    st32((c.r[16].w[0] + 2756u), c.f[1]);
    st32((c.r[16].w[0] + 2772u), c.f[1]);
    st32((c.r[16].w[0] + 2796u), c.f[15]);
    st32((c.r[16].w[0] + 540u), c.f[0]);
    st32((c.r[16].w[0] + 544u), c.f[0]);
    st32((c.r[16].w[0] + 548u), c.f[0]);
    st32((c.r[16].w[0] + 552u), c.f[0]);
    st16((c.r[16].w[0] + 2720u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 2722u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 2724u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 2740u), 0u);
    st32((c.r[16].w[0] + 2744u), 0u);
    st32((c.r[16].w[0] + 2752u), 0u);
    st32((c.r[16].w[0] + 2760u), 0u);
    st32((c.r[16].w[0] + 584u), c.f[15]);
    set32(c.r[3], ld32((c.r[16].w[0] + 2420u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46620000u);
    c.r[1].d[0] = c.r[1].d[0] | 36864ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x458C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 40960ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[16].w[0] + 588u), c.f[0]);
    st32((c.r[16].w[0] + 592u), c.f[1]);
    st32((c.r[16].w[0] + 648u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 2416u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 740u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 652u), 0u);
    st32((c.r[16].w[0] + 2604u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 100;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00155D20:
    set32(c.r[29], c.r[29].w[0] - 272u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 256u), c.f[20]);
    set32(c.r[2], ld32((c.r[17].w[0] + 656u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155D70; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155D70; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00155D7C; } }
L_00155D70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D7Cu);  if (depth < kMaxDepth) unit_009B(c, 306u, depth + 1u); else { c.pc = 0x0036DE78u; return; } if (c.pc != 0x00155D7Cu) [[unlikely]] return; }
L_00155D7C:
    c.f[12] = ld32((c.r[17].w[0] + 624u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155D8Cu);  if (depth < kMaxDepth) unit_009B(c, 20u, depth + 1u); else { c.pc = 0x0036C1D8u; return; } if (c.pc != 0x00155D8Cu) [[unlikely]] return; }
L_00155D8C:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00155DACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00155DACu) [[unlikely]] return; }
L_00155DAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155DD8; } }
    c.f[12] = ld32((c.r[17].w[0] + 544u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155DD0u);  if (depth < kMaxDepth) unit_009B(c, 287u, depth + 1u); else { c.pc = 0x0036DCE0u; return; } if (c.pc != 0x00155DD0u) [[unlikely]] return; }
L_00155DD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155DE8; } }
L_00155DD8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155DE8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00155DE8u) [[unlikely]] return; }
L_00155DE8:
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[17].w[0] + 368u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155DF8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00155DF8u) [[unlikely]] return; }
L_00155DF8:
    set32(c.r[4], c.r[17].w[0] + 304u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E0Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00155E0Cu) [[unlikely]] return; }
L_00155E0C:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E2Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00155E2Cu) [[unlikely]] return; }
L_00155E2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00155E70; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 160u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 164u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E50u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00155E50u) [[unlikely]] return; }
L_00155E50:
    c.f[12] = ld32((c.r[17].w[0] + 552u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E68u);  if (depth < kMaxDepth) unit_009B(c, 289u, depth + 1u); else { c.pc = 0x0036DD18u; return; } if (c.pc != 0x00155E68u) [[unlikely]] return; }
L_00155E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00155E80; } }
L_00155E70:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E80u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00155E80u) [[unlikely]] return; }
L_00155E80:
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[17].w[0] + 384u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155E90u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00155E90u) [[unlikely]] return; }
L_00155E90:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155EA0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00155EA0u) [[unlikely]] return; }
L_00155EA0:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155EB4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00155EB4u) [[unlikely]] return; }
L_00155EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155EBCu);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00155EBCu) [[unlikely]] return; }
L_00155EBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00155ED4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155ED4u);  if (depth < kMaxDepth) unit_0015(c, 309u, depth + 1u); else { c.pc = 0x001571E0u; return; } if (c.pc != 0x00155ED4u) [[unlikely]] return; }
L_00155ED4:
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00155EF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00155EF4u) [[unlikely]] return; }
L_00155EF4:
    set32(c.r[4], c.r[17].w[0] + 400u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F04u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00155F04u) [[unlikely]] return; }
L_00155F04:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F14u);  if (depth < kMaxDepth) unit_008B(c, 182u, depth + 1u); else { c.pc = 0x0032DBF0u; return; } if (c.pc != 0x00155F14u) [[unlikely]] return; }
L_00155F14:
    set32(c.r[18], c.r[17].w[0] + 32u);
    c.r[20].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F2Cu);  if (depth < kMaxDepth) unit_008B(c, 179u, depth + 1u); else { c.pc = 0x0032D938u; return; } if (c.pc != 0x00155F2Cu) [[unlikely]] return; }
L_00155F2C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F38u);  if (depth < kMaxDepth) unit_008B(c, 213u, depth + 1u); else { c.pc = 0x0032DEF0u; return; } if (c.pc != 0x00155F38u) [[unlikely]] return; }
L_00155F38:
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00156084; } }
    c.f[12] = ld32((c.r[17].w[0] + 556u));
    set32(c.r[4], c.r[17].w[0] + 352u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F5Cu);  if (depth < kMaxDepth) unit_008B(c, 230u, depth + 1u); else { c.pc = 0x0032E4B8u; return; } if (c.pc != 0x00155F5Cu) [[unlikely]] return; }
L_00155F5C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F6Cu);  if (depth < kMaxDepth) unit_008B(c, 229u, depth + 1u); else { c.pc = 0x0032E3F8u; return; } if (c.pc != 0x00155F6Cu) [[unlikely]] return; }
L_00155F6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[0]);
    set32(c.r[6], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 100u), 0u);
    st32((c.r[29].w[0] + 108u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155F98u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x00155F98u) [[unlikely]] return; }
L_00155F98:
    set32(c.r[16], c.r[29].w[0] + 112u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155FACu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00155FACu) [[unlikely]] return; }
L_00155FAC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 124u), 0u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155FC0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x00155FC0u) [[unlikely]] return; }
L_00155FC0:
    c.f[12] = ld32((c.r[29].w[0] + 116u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00155FD0u);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x00155FD0u) [[unlikely]] return; }
L_00155FD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[20] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.f[13] = ld32((c.r[29].w[0] + 120u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015600Cu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x0015600Cu) [[unlikely]] return; }
L_0015600C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00156044; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156070; } }
L_00156044:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00156074; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 4;
L_00156070:
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 1;
L_00156074:
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 60u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001560A8; } }
L_00156084:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44220000u);
    c.r[1].d[0] = c.r[1].d[0] | 63875ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[29].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    c.budget -= 9;
L_001560A8:
    ldl(c.r[2], (c.r[29].w[0] + 87u));
    ldr(c.r[2], (c.r[29].w[0] + 80u));
    ldl(c.r[3], (c.r[29].w[0] + 95u));
    ldr(c.r[3], (c.r[29].w[0] + 88u));
    sdl(c.r[2], (c.r[29].w[0] + 103u));
    sdr(c.r[2], (c.r[29].w[0] + 96u));
    sdl(c.r[3], (c.r[29].w[0] + 111u));
    sdr(c.r[3], (c.r[29].w[0] + 104u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], 0u + 2u);
    c.f[0] = ld32((c.r[29].w[0] + 96u));
    c.f[1] = ld32((c.r[29].w[0] + 100u));
    c.f[2] = ld32((c.r[29].w[0] + 104u));
    c.f[3] = ld32((c.r[29].w[0] + 108u));
    st32((c.r[17].w[0] + 352u), c.f[0]);
    st32((c.r[17].w[0] + 356u), c.f[1]);
    st32((c.r[17].w[0] + 360u), c.f[2]);
    st32((c.r[17].w[0] + 364u), c.f[3]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001560F8u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x001560F8u) [[unlikely]] return; }
L_001560F8:
    set32(c.r[4], c.r[17].w[0] + 336u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156108u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00156108u) [[unlikely]] return; }
L_00156108:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156118u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00156118u) [[unlikely]] return; }
L_00156118:
    set32(c.r[2], ld32((c.r[17].w[0] + 632u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015613C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015613C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00156170; } }
L_0015613C:
    set32(c.r[3], ld32((c.r[17].w[0] + 644u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 648u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00156168; } }
    st32((c.r[17].w[0] + 644u), 0u);
    st32((c.r[17].w[0] + 640u), 0u);
    st32((c.r[17].w[0] + 636u), 0u);
    st32((c.r[17].w[0] + 632u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156170; } }
L_00156168:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[17].w[0] + 644u), c.r[2].w[0]);
    c.budget -= 2;
L_00156170:
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00156190; } }
    st32((c.r[17].w[0] + 500u), 0u);
    c.budget -= 1;
L_00156180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156190; } }
L_00156188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156190u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00156190u) [[unlikely]] return; }
L_00156190:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001561A0u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x001561A0u) [[unlikely]] return; }
L_001561A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001561C8; } }
L_001561A8:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001561B8u);  if (depth < kMaxDepth) unit_008B(c, 183u, depth + 1u); else { c.pc = 0x0032DC00u; return; } if (c.pc != 0x001561B8u) [[unlikely]] return; }
L_001561B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156188u | kUnwind; return; } goto L_00156188; } }
L_001561C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001561C8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001561C8u) [[unlikely]] return; }
L_001561C8:
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[29], c.r[29].w[0] + 272u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001561F8:
    set32(c.r[29], c.r[29].w[0] - 464u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    st32((c.r[29].w[0] + 244u), c.r[5].w[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 456u), c.f[23]);
    st32((c.r[29].w[0] + 448u), c.f[22]);
    st32((c.r[29].w[0] + 440u), c.f[21]);
    st32((c.r[29].w[0] + 432u), c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156244u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00156244u) [[unlikely]] return; }
L_00156244:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156258u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x00156258u) [[unlikely]] return; }
L_00156258:
    set32(c.r[4], c.r[20].w[0] + 2640u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156268u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00156268u) [[unlikely]] return; }
L_00156268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156270u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x00156270u) [[unlikely]] return; }
L_00156270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00156284; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001562B4; } }
L_00156284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015628Cu);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x0015628Cu) [[unlikely]] return; }
L_0015628C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001562A0u);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x001562A0u) [[unlikely]] return; }
L_001562A0:
    set32(c.r[4], c.r[20].w[0] + 2656u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001562B0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001562B0u) [[unlikely]] return; }
L_001562B0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001562B4:
    st16((c.r[20].w[0] + 2720u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = 0ull | 39780ull;
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[18], 0u + 3u);
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[30], 0u + 1811u);
    set32(c.r[2], c.r[29].w[0] + 32u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 268u), c.r[2].w[0]);
    set32(c.r[23], 0u + 1724u);
    st32((c.r[29].w[0] + 248u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    set32(c.r[3], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 264u), c.r[3].w[0]);
    set32(c.r[22], 0u + 133u);
    set32(c.r[21], 0u + 1814u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 21;
L_00156308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156310u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00156310u) [[unlikely]] return; }
L_00156310:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156320u);  if (depth < kMaxDepth) unit_009C(c, 36u, depth + 1u); else { c.pc = 0x00370458u; return; } if (c.pc != 0x00156320u) [[unlikely]] return; }
L_00156320:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001563AC; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001563AC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u + 1774u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001563AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { goto L_001563AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_001563AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_001563AC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_001563AC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[4], c.r[4].w[0] + c.r[20].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2640u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156384u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00156384u) [[unlikely]] return; }
L_00156384:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 2640u);
    set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001563A0u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x001563A0u) [[unlikely]] return; }
L_001563A0:
    c.r[2].d[0] = ld16((c.r[20].w[0] + 2720u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[20].w[0] + 2720u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_001563AC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 13248u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[16], c.r[16].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156308u | kUnwind; return; } goto L_00156308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001563D0u);  if (depth < kMaxDepth) unit_0019(c, 240u, depth + 1u); else { c.pc = 0x001667D0u; return; } if (c.pc != 0x001563D0u) [[unlikely]] return; }
L_001563D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001566C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.f[20] = 0u;
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156414u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00156414u) [[unlikely]] return; }
L_00156414:
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[30], c.r[29].w[0] + 16u);
    set32(c.r[16], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 260u), c.r[3].w[0]);
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[17].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 11;
L_00156440:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156460u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00156460u) [[unlikely]] return; }
L_00156460:
    st32((c.r[19].w[0]), c.f[20]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[21].w[0]), c.f[20]);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    set32(c.r[22], c.r[22].w[0] + 16u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156488u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00156488u) [[unlikely]] return; }
L_00156488:
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[23], c.r[23].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156440u | kUnwind; return; } goto L_00156440; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    c.f[21] = c.f[20];
    c.r[18].d[0] = 0ull + 0ull;
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2720u));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00156574; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[23] = c.r[1].w[0];
    c.r[19].d[0] = c.r[30].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x460C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 40960ull;
    c.f[20] = c.r[1].w[0];
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[21], c.r[20].w[0] + 2640u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 13;
L_001564F8:
    set32(c.r[5], ld32((c.r[29].w[0] + 244u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015650Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x0015650Cu) [[unlikely]] return; }
L_0015650C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156518u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156518u) [[unlikely]] return; }
L_00156518:
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_00156540; } }
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = fp::sub(c.f[20], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[20]);
    c.f[0] = fp::sub(c.f[22], c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    c.budget -= 7;
L_00156540:
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.f[21] = fp::add(c.f[21], c.f[0]);
    set32(c.r[22], c.r[22].w[0] + c.r[23].w[0]);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    c.r[4].d[0] = ld16((c.r[20].w[0] + 2720u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001564F8u | kUnwind; return; } goto L_001564F8; } }
L_00156574:
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 16);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00156628; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[30], 0u + 1u);
    set32(c.r[17], ld32((c.r[29].w[0] + 256u)));
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[19], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[21], c.r[20].w[0] + 2640u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 9;
L_001565A8:
    set32(c.r[2], c.r[3].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_001565C4; } }
    st32((c.r[17].w[0]), c.f[20]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001565D4; } }
L_001565C4:
    c.f[0] = ld32((c.r[16].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[21]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 4;
L_001565D4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[0] = ld32((c.r[17].w[0]));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[21], c.r[21].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 16u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.f[12] = fp::mul(c.f[0], c.f[12]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015660Cu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x0015660Cu) [[unlikely]] return; }
L_0015660C:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[22], c.r[22].w[0] + c.r[23].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001565A8u | kUnwind; return; } goto L_001565A8; } }
L_00156628:
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156644u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x00156644u) [[unlikely]] return; }
L_00156644:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00156690; } }
    set32(c.r[16], ld32((c.r[29].w[0] + 260u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 4;
L_00156660:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156670u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x00156670u) [[unlikely]] return; }
L_00156670:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[17], c.r[17].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156660u | kUnwind; return; } goto L_00156660; } }
L_00156690:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    fpu_div(c, 12u, c.f[0], c.f[12]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001566BCu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x001566BCu) [[unlikely]] return; }
L_001566BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001566D8; } }
L_001566C4:
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    set32(c.r[5], c.r[20].w[0] + 2640u);
    set32(c.r[6], c.r[20].w[0] + 2656u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001566D8u);  if (depth < kMaxDepth) unit_008A(c, 267u, depth + 1u); else { c.pc = 0x0032B7E8u; return; } if (c.pc != 0x001566D8u) [[unlikely]] return; }
L_001566D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    c.r[21].d[0] = 0ull + 0ull;
    c.f[20] = 0u;
    st16((c.r[20].w[0] + 2722u), static_cast<std::uint16_t>(0u));
    st16((c.r[20].w[0] + 2724u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2720u));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001567B8; } }
L_001566F8:
    set32(c.r[2], c.r[21].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 16);
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[3].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015679C; } }
    set32(c.r[3], c.r[21].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] << 4);
    set32(c.r[22], c.r[3].w[0] + 2640u);
    set32(c.r[2], c.r[2].w[0] + 2640u);
    set32(c.r[4], c.r[16].w[0] << 16);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[18], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[29].w[0] + 16u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 10;
L_00156740:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] + c.r[22].w[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156754u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00156754u) [[unlikely]] return; }
L_00156754:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156760u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156760u) [[unlikely]] return; }
L_00156760:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015677C; } }
    st16((c.r[20].w[0] + 2724u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.f[20] = c.f[0];
    st16((c.r[20].w[0] + 2722u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 3;
L_0015677C:
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[17], c.r[17].w[0] + c.r[23].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00156740u | kUnwind; return; } goto L_00156740; } }
L_0015679C:
    set32(c.r[3], c.r[30].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[3].d[0] = ld16((c.r[20].w[0] + 2720u));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001566F8u | kUnwind; return; } goto L_001566F8; } }
L_001567B8:
    c.f[0] = ld32((c.r[20].w[0] + 2728u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[0], c.f[20]);
    c.f[3] = ld32((c.r[20].w[0] + 2736u));
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[20] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001567F0; } }
    c.f[20] = c.f[3];
    c.budget -= 1;
L_001567F0:
    set32(c.r[3], ld32((c.r[20].w[0] + 2624u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[29].w[0] + 32u), c.f[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 252u)));
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 32u));
    st32((c.r[29].w[0] + 48u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[0] = ld32((c.r[2].w[0] + 40u));
    st32((c.r[29].w[0] + 60u), 0u);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156864u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x00156864u) [[unlikely]] return; }
L_00156864:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015696C; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[17], c.r[29].w[0] + 80u);
    st32((c.r[20].w[0] + 2740u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 252u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 244u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156894u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00156894u) [[unlikely]] return; }
L_00156894:
    set32(c.r[3], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001568C4; } }
    set32(c.r[16], c.r[29].w[0] + 96u);
    set32(c.r[6], ld32((c.r[29].w[0] + 268u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001568BCu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001568BCu) [[unlikely]] return; }
L_001568BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001568DC; } }
L_001568C4:
    set32(c.r[16], c.r[29].w[0] + 96u);
    set32(c.r[6], ld32((c.r[29].w[0] + 248u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001568DCu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x001568DCu) [[unlikely]] return; }
L_001568DC:
    set32(c.r[17], c.r[29].w[0] + 112u);
    set32(c.r[6], ld32((c.r[29].w[0] + 244u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001568F4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001568F4u) [[unlikely]] return; }
L_001568F4:
    c.f[0] = ld32((c.r[20].w[0] + 2732u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156908u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156908u) [[unlikely]] return; }
L_00156908:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00156928; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156924u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156924u) [[unlikely]] return; }
L_00156924:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00156928:
    set32(c.r[16], c.r[29].w[0] + 128u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015693Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015693Cu) [[unlikely]] return; }
L_0015693C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156950u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00156950u) [[unlikely]] return; }
L_00156950:
    set32(c.r[4], ld32((c.r[29].w[0] + 244u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156964u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00156964u) [[unlikely]] return; }
L_00156964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00156970; } }
L_0015696C:
    st32((c.r[20].w[0] + 2740u), 0u);
    c.budget -= 1;
L_00156970:
    set32(c.r[2], ld32((c.r[29].w[0] + 244u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[16]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.f[23] = ld32((c.r[29].w[0] + 456u));
    c.f[22] = ld32((c.r[29].w[0] + 448u));
    c.f[21] = ld32((c.r[29].w[0] + 440u));
    c.f[20] = ld32((c.r[29].w[0] + 432u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    set32(c.r[29], c.r[29].w[0] + 464u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001569D0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), c.f[24]);
    set32(c.r[19], c.r[20].w[0] + 304u);
    st32((c.r[29].w[0] + 216u), c.f[21]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[20]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 232u), c.f[23]);
    st32((c.r[29].w[0] + 224u), c.f[22]);
    c.f[22] = ld32((c.r[20].w[0] + 2752u));
    set32(c.r[4], ld32((c.r[20].w[0] + 2624u)));
    set32(c.r[6], ld32((c.r[20].w[0] + 2628u)));
    c.f[23] = ld32((c.r[20].w[0] + 2768u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A2Cu);  if (depth < kMaxDepth) unit_008B(c, 237u, depth + 1u); else { c.pc = 0x0032E6F0u; return; } if (c.pc != 0x00156A2Cu) [[unlikely]] return; }
L_00156A2C:
    c.f[24] = 0u;
    set32(c.r[4], ld32((c.r[20].w[0] + 2624u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[20].w[0] + 2628u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A48u);  if (depth < kMaxDepth) unit_008B(c, 242u, depth + 1u); else { c.pc = 0x0032E838u; return; } if (c.pc != 0x00156A48u) [[unlikely]] return; }
L_00156A48:
    st32((c.r[21].w[0] + 4u), c.f[24]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2722u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 2640u);
    set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A68u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00156A68u) [[unlikely]] return; }
L_00156A68:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2724u)));
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + 2640u);
    set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156A88u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00156A88u) [[unlikely]] return; }
L_00156A88:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AA0u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00156AA0u) [[unlikely]] return; }
L_00156AA0:
    set32(c.r[17], c.r[29].w[0] + 64u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AB8u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00156AB8u) [[unlikely]] return; }
L_00156AB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AC4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156AC4u) [[unlikely]] return; }
L_00156AC4:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AD4u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156AD4u) [[unlikely]] return; }
L_00156AD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43FA0000u);
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[21] = fp::add(c.f[0], c.f[1]);
    c.f[20] = fp::add(c.f[20], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AF0u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x00156AF0u) [[unlikely]] return; }
L_00156AF0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156AFCu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x00156AFCu) [[unlikely]] return; }
L_00156AFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156B0Cu);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x00156B0Cu) [[unlikely]] return; }
L_00156B0C:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156B1Cu);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x00156B1Cu) [[unlikely]] return; }
L_00156B1C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156B30u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00156B30u) [[unlikely]] return; }
L_00156B30:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156B44u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00156B44u) [[unlikely]] return; }
L_00156B44:
    set32(c.r[16], c.r[29].w[0] + 80u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156B5Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00156B5Cu) [[unlikely]] return; }
L_00156B5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156B68u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156B68u) [[unlikely]] return; }
L_00156B68:
    c.f[2] = ld32((c.r[20].w[0] + 2748u));
    c.f[21] = c.f[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00156BA4; } }
    c.f[0] = ld32((c.r[20].w[0] + 2744u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[3] = ld32((c.r[20].w[0] + 2752u));
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[22] = fp::mul(c.f[3], c.f[1]);
    c.budget -= 9;
L_00156BA4:
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[5] = ld32((c.r[20].w[0] + 2760u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[12] = ld32((c.r[20].w[0] + 624u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 2756u));
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[2] = ld32((c.r[20].w[0] + 2764u));
    c.f[12] = fp::mul(c.f[12], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[4] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[2], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[20] = c.r[1].w[0];
    c.f[0] = fp::sub(c.f[0], c.f[5]);
    fpu_div(c, 12u, c.f[12], c.f[4]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[22] = fp::add(c.f[22], c.f[1]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156C14u);  if (depth < kMaxDepth) unit_0041(c, 374u, depth + 1u); else { c.pc = 0x00207700u; return; } if (c.pc != 0x00156C14u) [[unlikely]] return; }
L_00156C14:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    set32(c.r[2], 0u + 1u);
    c.f[1] = fp::add(c.f[21], c.f[22]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00156C40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 4;
L_00156C40:
    c.f[0] = ld32((c.r[20].w[0] + 584u));
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00156C68; } }
    c.f[0] = ld32((c.r[20].w[0] + 588u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00156C6C; } }
L_00156C68:
    c.f[20] = c.f[0];
    c.budget -= 1;
L_00156C6C:
    c.f[3] = ld32((c.r[20].w[0] + 304u));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[20].w[0] + 312u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[0] = ld32((c.r[21].w[0] + 8u));
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    st32((c.r[29].w[0] + 36u), 0u);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    st32((c.r[29].w[0] + 44u), 0u);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CA4u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x00156CA4u) [[unlikely]] return; }
L_00156CA4:
    c.f[12] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CB8u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x00156CB8u) [[unlikely]] return; }
L_00156CB8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[20].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156CCCu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x00156CCCu) [[unlikely]] return; }
L_00156CCC:
    c.f[2] = ld32((c.r[20].w[0] + 2748u));
    set32(c.r[3], ld32((c.r[20].w[0] + 2624u)));
    fpu_div(c, 2u, c.f[21], c.f[2]);
    c.f[0] = ld32((c.r[20].w[0] + 2772u));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC57A0000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[23]);
    c.f[0] = fp::mul(c.f[24], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    st32((c.r[21].w[0] + 4u), c.f[1]);
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00156D1C; } }
    st32((c.r[21].w[0] + 4u), c.f[3]);
    c.budget -= 1;
L_00156D1C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2720u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00156D40; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC56D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[21].w[0] + 4u), c.f[0]);
    c.budget -= 5;
L_00156D40:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[24] = ld32((c.r[29].w[0] + 240u));
    c.f[23] = ld32((c.r[29].w[0] + 232u));
    c.f[22] = ld32((c.r[29].w[0] + 224u));
    c.f[21] = ld32((c.r[29].w[0] + 216u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 256u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00156D80:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[21]);
    set32(c.r[18], c.r[19].w[0] + 368u);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[19].w[0] + 2624u)));
    set32(c.r[6], ld32((c.r[19].w[0] + 2628u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156DC4u);  if (depth < kMaxDepth) unit_008B(c, 237u, depth + 1u); else { c.pc = 0x0032E6F0u; return; } if (c.pc != 0x00156DC4u) [[unlikely]] return; }
L_00156DC4:
    set32(c.r[4], ld32((c.r[19].w[0] + 2624u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0] + 2628u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156DDCu);  if (depth < kMaxDepth) unit_008B(c, 242u, depth + 1u); else { c.pc = 0x0032E838u; return; } if (c.pc != 0x00156DDCu) [[unlikely]] return; }
L_00156DDC:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 384u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156DF4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00156DF4u) [[unlikely]] return; }
L_00156DF4:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156E0Cu);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00156E0Cu) [[unlikely]] return; }
L_00156E0C:
    st32((c.r[29].w[0] + 20u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156E20u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156E20u) [[unlikely]] return; }
L_00156E20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[21] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156E30u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156E30u) [[unlikely]] return; }
L_00156E30:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156E40u);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x00156E40u) [[unlikely]] return; }
L_00156E40:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156E4Cu);  if (depth < kMaxDepth) unit_0045(c, 18u, depth + 1u); else { c.pc = 0x00214238u; return; } if (c.pc != 0x00156E4Cu) [[unlikely]] return; }
L_00156E4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x47C30000u);
    c.r[1].d[0] = c.r[1].d[0] | 20480ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[4] = ld32((c.r[29].w[0] + 16u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 24u));
    c.f[4] = fp::mul(c.f[4], c.f[0]);
    c.f[3] = ld32((c.r[29].w[0] + 32u));
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 40u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[5] = fp::cvt_w_s(c.f[4]);
    set32(c.r[2], c.f[5]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[4] = fp::cvt_w_s(c.f[2]);
    set32(c.r[3], c.f[4]);
    c.f[2] = fp::cvt_w_s(c.f[3]);
    set32(c.r[6], c.f[2]);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[7], c.f[2]);
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[4] = c.r[6].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[1] = c.r[7].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 2u, c.f[2], c.f[0]);
    fpu_div(c, 3u, c.f[3], c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    fpu_div(c, 4u, c.f[4], c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 40u), c.f[1]);
    st32((c.r[29].w[0] + 32u), c.f[4]);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F18u);  if (depth < kMaxDepth) unit_008A(c, 170u, depth + 1u); else { c.pc = 0x0032A670u; return; } if (c.pc != 0x00156F18u) [[unlikely]] return; }
L_00156F18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[2] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00156F50; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 1;
L_00156F50:
    set32(c.r[3], ld32((c.r[19].w[0] + 2624u)));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = ld32((c.r[19].w[0] + 368u));
    set32(c.r[5], c.r[29].w[0] + 84u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.f[20] = fp::sub(c.f[20], c.f[21]);
    c.f[13] = ld32((c.r[19].w[0] + 376u));
    c.f[17] = ld32((c.r[2].w[0] + 24u));
    c.f[14] = ld32((c.r[2].w[0]));
    c.f[15] = ld32((c.r[2].w[0] + 8u));
    c.f[16] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156F84u);  if (depth < kMaxDepth) unit_008A(c, 6u, depth + 1u); else { c.pc = 0x00328278u; return; } if (c.pc != 0x00156F84u) [[unlikely]] return; }
L_00156F84:
    c.f[1] = ld32((c.r[19].w[0] + 368u));
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.f[0] = ld32((c.r[19].w[0] + 376u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[3] = ld32((c.r[29].w[0] + 80u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[2] = ld32((c.r[29].w[0] + 84u));
    set32(c.r[6], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 64u), c.f[3]);
    st32((c.r[29].w[0] + 72u), c.f[2]);
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 68u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156FC4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00156FC4u) [[unlikely]] return; }
L_00156FC4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00156FD0u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x00156FD0u) [[unlikely]] return; }
L_00156FD0:
    c.f[4] = c.f[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00156FFC; } }
    c.f[3] = 0u;
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001570D0; } }
L_00156FFC:
    c.f[1] = c.f[4] ^ fp::kSign;
    c.f[0] = ld32((c.r[19].w[0] + 2800u));
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.f[3] = c.f[1];
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001571B0; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001571B0; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157084; } }
    c.f[1] = ld32((c.r[19].w[0] + 2804u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157084; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157130; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157130; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157120; } }
L_00157084:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157130; } }
    c.f[1] = ld32((c.r[19].w[0] + 2804u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157130; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157130; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157120; } }
L_001570D0:
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157130; } }
    c.f[0] = ld32((c.r[19].w[0] + 2800u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.f[2] = c.f[0];
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157130; } }
    c.f[1] = ld32((c.r[19].w[0] + 2804u));
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157130; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157130; } }
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[4], c.f[2]);
    c.budget -= 2;
L_00157120:
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[5] = c.f[0] & fp::kAbs;
    c.budget -= 4;
L_00157130:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_00157150; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001571B0; } }
L_00157150:
    c.f[1] = ld32((c.r[19].w[0] + 2812u));
    c.f[2] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[21]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157178; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157198; } }
L_00157178:
    c.f[0] = ld32((c.r[19].w[0] + 2808u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[21]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00157198; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[21], c.f[0]);
    fpu_div(c, 2u, c.f[0], c.f[1]);
    c.budget -= 3;
L_00157198:
    c.f[0] = ld32((c.r[19].w[0] + 2816u));
    c.f[1] = ld32((c.r[19].w[0] + 308u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[19].w[0] + 308u), c.f[1]);
    c.budget -= 6;
L_001571B0:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001571E0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    set32(c.r[19], c.r[21].w[0] + 320u);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157218u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00157218u) [[unlikely]] return; }
L_00157218:
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015722Cu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015722Cu) [[unlikely]] return; }
L_0015722C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157234u);  if (depth < kMaxDepth) unit_0012(c, 102u, depth + 1u); else { c.pc = 0x00148F48u; return; } if (c.pc != 0x00157234u) [[unlikely]] return; }
L_00157234:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015724Cu);  if (depth < kMaxDepth) unit_009C(c, 47u, depth + 1u); else { c.pc = 0x003705B0u; return; } if (c.pc != 0x0015724Cu) [[unlikely]] return; }
L_0015724C:
    set32(c.r[17], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157260u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157260u) [[unlikely]] return; }
L_00157260:
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157274u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157274u) [[unlikely]] return; }
L_00157274:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157284u);  if (depth < kMaxDepth) unit_008A(c, 264u, depth + 1u); else { c.pc = 0x0032B7B0u; return; } if (c.pc != 0x00157284u) [[unlikely]] return; }
L_00157284:
    c.f[20] = c.f[0];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157298u);  if (depth < kMaxDepth) unit_008A(c, 264u, depth + 1u); else { c.pc = 0x0032B7B0u; return; } if (c.pc != 0x00157298u) [[unlikely]] return; }
L_00157298:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001572C8; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001572B8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001572B8u) [[unlikely]] return; }
L_001572B8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001572C8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001572C8u) [[unlikely]] return; }
L_001572C8:
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[7], c.r[21].w[0] + 304u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001572E4u);  if (depth < kMaxDepth) unit_008B(c, 132u, depth + 1u); else { c.pc = 0x0032D028u; return; } if (c.pc != 0x001572E4u) [[unlikely]] return; }
L_001572E4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001572FCu);  if (depth < kMaxDepth) unit_008A(c, 101u, depth + 1u); else { c.pc = 0x00329970u; return; } if (c.pc != 0x001572FCu) [[unlikely]] return; }
L_001572FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0015731C; } }
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.budget -= 1;
L_0015731C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157330u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00157330u) [[unlikely]] return; }
L_00157330:
    c.f[12] = ld32((c.r[29].w[0] + 80u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157340u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x00157340u) [[unlikely]] return; }
L_00157340:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157350u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x00157350u) [[unlikely]] return; }
L_00157350:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00157380:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00157390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 19232u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[17].w[0] + 724u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001573C0u);  if (depth < kMaxDepth) unit_0013(c, 144u, depth + 1u); else { c.pc = 0x0014D408u; return; } if (c.pc != 0x001573C0u) [[unlikely]] return; }
L_001573C0:
    c.r[16].d[0] = c.r[16].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001573E0; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001573E0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x001573E0u) [[unlikely]] return; }
L_001573E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001573F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00157400:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[6], c.r[17].w[0] + 320u);
    set32(c.r[5], c.r[17].w[0] + 304u);
    set32(c.r[19], c.r[17].w[0] + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157438u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x00157438u) [[unlikely]] return; }
L_00157438:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015744Cu);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x0015744Cu) [[unlikely]] return; }
L_0015744C:
    c.f[12] = ld32((c.r[29].w[0] + 4u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015745Cu);  if (depth < kMaxDepth) unit_0041(c, 385u, depth + 1u); else { c.pc = 0x002078A8u; return; } if (c.pc != 0x0015745Cu) [[unlikely]] return; }
L_0015745C:
    c.f[12] = ld32((c.r[29].w[0]));
    c.f[13] = ld32((c.r[29].w[0] + 8u));
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157470u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x00157470u) [[unlikely]] return; }
L_00157470:
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157488u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00157488u) [[unlikely]] return; }
L_00157488:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157498u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x00157498u) [[unlikely]] return; }
L_00157498:
    c.f[12] = ld32((c.r[16].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574A4u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x001574A4u) [[unlikely]] return; }
L_001574A4:
    c.f[12] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574B4u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x001574B4u) [[unlikely]] return; }
L_001574B4:
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[12] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574C8u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x001574C8u) [[unlikely]] return; }
L_001574C8:
    c.f[12] = ld32((c.r[16].w[0]));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574D8u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x001574D8u) [[unlikely]] return; }
L_001574D8:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574E8u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x001574E8u) [[unlikely]] return; }
L_001574E8:
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001574F8u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x001574F8u) [[unlikely]] return; }
L_001574F8:
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157508u);  if (depth < kMaxDepth) unit_0041(c, 367u, depth + 1u); else { c.pc = 0x00207610u; return; } if (c.pc != 0x00157508u) [[unlikely]] return; }
L_00157508:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 64u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015751Cu);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x0015751Cu) [[unlikely]] return; }
L_0015751C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157534u);  if (depth < kMaxDepth) unit_0044(c, 277u, depth + 1u); else { c.pc = 0x00213CE8u; return; } if (c.pc != 0x00157534u) [[unlikely]] return; }
L_00157534:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00157558:
    set32(c.r[2], ld32((c.r[4].w[0] + 636u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001575A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[3] = c.r[1].w[0];
    c.f[2] = ld32((c.r[4].w[0] + 648u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = ld32((c.r[4].w[0] + 548u));
    c.f[1] = ld32((c.r[4].w[0] + 644u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001575A0:
    c.f[0] = ld32((c.r[4].w[0] + 548u));
    st32((c.r[4].w[0] + 552u), c.f[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001575B0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001575ECu);  if (depth < kMaxDepth) unit_0012(c, 198u, depth + 1u); else { c.pc = 0x00149660u; return; } if (c.pc != 0x001575ECu) [[unlikely]] return; }
L_001575EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[23].w[0] + 2628u);
    set32(c.r[3], c.r[3].w[0] + 19576u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[30], 0u + 24u);
    st32((c.r[23].w[0] + 724u), c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[29].w[0])));
    st32((c.r[23].w[0] + 2624u), 0u);
    c.budget -= 9;
L_00157610:
    set32(c.r[3], c.r[23].w[0] + 736u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[18], 0u + 4u);
    set32(c.r[22], c.r[17].w[0] + 72u);
    set32(c.r[21], c.r[30].w[0] - 1u);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 6;
L_00157628:
    set32(c.r[19], 0u - 1u);
    c.budget -= 2;
L_00157630:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015763Cu);  if (depth < kMaxDepth) unit_009B(c, 361u, depth + 1u); else { c.pc = 0x0036EDD8u; return; } if (c.pc != 0x0015763Cu) [[unlikely]] return; }
L_0015763C:
    set32(c.r[16], c.r[16].w[0] + 12u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != c.r[19].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157630u | kUnwind; return; } goto L_00157630; } }
L_0015764C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001576B8; } }
L_00157654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015765Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0015765Cu) [[unlikely]] return; }
L_0015765C:
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157654u | kUnwind; return; } goto L_00157654; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157654u | kUnwind; return; } goto L_00157654; } }
L_00157688:
    set32(c.r[16], c.r[16].w[0] - 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015769Cu);  if (depth < kMaxDepth) unit_009B(c, 362u, depth + 1u); else { c.pc = 0x0036EDF8u; return; } if (c.pc != 0x0015769Cu) [[unlikely]] return; }
L_0015769C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157688u | kUnwind; return; } goto L_00157688; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157654u | kUnwind; return; } goto L_00157654; } }
    c.budget -= 1;
L_001576B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001576B8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x001576B8u) [[unlikely]] return; }
L_001576B8:
    c.r[17].d[0] = c.r[22].d[0] + 0ull;
    c.r[30].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], 0u - 1u);
    c.budget -= 5;
    { const bool t = c.r[30].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157610u | kUnwind; return; } goto L_00157610; } }
L_001576CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001576DC; } }
L_001576D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001576DCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001576DCu) [[unlikely]] return; }
L_001576DC:
    st32((c.r[23].w[0] + 4428u), 0u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st32((c.r[23].w[0] + 4432u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001576F0u);  if (depth < kMaxDepth) unit_0016(c, 18u, depth + 1u); else { c.pc = 0x00158210u; return; } if (c.pc != 0x001576F0u) [[unlikely]] return; }
L_001576F0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157704u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x00157704u) [[unlikely]] return; }
L_00157704:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0015792C; } }
    set32(c.r[19], 0u + 72u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.budget -= 4;
L_00157720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 19472u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157738u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00157738u) [[unlikely]] return; }
L_00157738:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00157914; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00157914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015775Cu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x0015775Cu) [[unlikely]] return; }
L_0015775C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[18], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 19488u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157778u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00157778u) [[unlikely]] return; }
L_00157778:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001577A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015778Cu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x0015778Cu) [[unlikely]] return; }
L_0015778C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157798u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00157798u) [[unlikely]] return; }
L_00157798:
    mmi::mult(c, 0, c.r[18].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    st32((c.r[2].w[0] + 2688u), c.f[0]);
    c.budget -= 3;
L_001577A4:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[30].w[0] + 19496u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001577B8u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001577B8u) [[unlikely]] return; }
L_001577B8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00157868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001577CCu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001577CCu) [[unlikely]] return; }
L_001577CC:
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001577E0u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x001577E0u) [[unlikely]] return; }
L_001577E0:
    set32(c.r[3], 0u + 12u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[22].w[0] + 19512u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[4].w[0] + c.r[23].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st16((c.r[3].w[0] + 2628u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015780Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0015780Cu) [[unlikely]] return; }
L_0015780C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00157828; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157820u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00157820u) [[unlikely]] return; }
L_00157820:
    set32(c.r[3], c.r[17].w[0] + c.r[18].w[0]);
    st32((c.r[3].w[0] + 2632u), c.r[2].w[0]);
    c.budget -= 2;
L_00157828:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 19528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015783Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0015783Cu) [[unlikely]] return; }
L_0015783C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00157914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157850u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x00157850u) [[unlikely]] return; }
L_00157850:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015785Cu);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x0015785Cu) [[unlikely]] return; }
L_0015785C:
    set32(c.r[2], c.r[17].w[0] + c.r[18].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157910; } }
L_00157868:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157878u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x00157878u) [[unlikely]] return; }
L_00157878:
    set32(c.r[17], 0u + 72u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] + c.r[23].w[0]);
    set32(c.r[5], c.r[22].w[0] + 19512u);
    st16((c.r[3].w[0] + 2628u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015789Cu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x0015789Cu) [[unlikely]] return; }
L_0015789C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001578C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001578B0u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x001578B0u) [[unlikely]] return; }
L_001578B0:
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + c.r[23].w[0]);
    st32((c.r[3].w[0] + 2632u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001578D4; } }
L_001578C4:
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    st32((c.r[2].w[0] + 2632u), c.r[4].w[0]);
    c.budget -= 4;
L_001578D4:
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] + 19528u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001578E8u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001578E8u) [[unlikely]] return; }
L_001578E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00157914; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001578FCu);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x001578FCu) [[unlikely]] return; }
L_001578FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157908u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x00157908u) [[unlikely]] return; }
L_00157908:
    mmi::mult(c, 0, c.r[18].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[23].w[0]);
    c.budget -= 2;
L_00157910:
    st32((c.r[2].w[0] + 2636u), c.f[0]);
    c.budget -= 1;
L_00157914:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157920u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x00157920u) [[unlikely]] return; }
L_00157920:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157720u | kUnwind; return; } goto L_00157720; } }
L_0015792C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157940u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x00157940u) [[unlikely]] return; }
L_00157940:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00157A7C; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[19], 0u + 17u);
    set32(c.r[18], 0u + 72u);
    set32(c.r[30], c.r[23].w[0] + 2692u);
    set32(c.r[22], c.r[23].w[0] + 2696u);
    c.budget -= 5;
L_00157960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 19544u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157978u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x00157978u) [[unlikely]] return; }
L_00157978:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001579E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015798Cu);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x0015798Cu) [[unlikely]] return; }
L_0015798C:
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001579A0u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x001579A0u) [[unlikely]] return; }
L_001579A0:
    set32(c.r[4], ld32((c.r[21].w[0] - 17248u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001579B0u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x001579B0u) [[unlikely]] return; }
L_001579B0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157A64; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00157A64; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157A64; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[30].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157A60; } }
L_001579E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 19560u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001579FCu);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x001579FCu) [[unlikely]] return; }
L_001579FC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00157A64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A10u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x00157A10u) [[unlikely]] return; }
L_00157A10:
    set32(c.r[17], c.r[2].w[0] - 1u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A24u);  if (depth < kMaxDepth) unit_0090(c, 172u, depth + 1u); else { c.pc = 0x003418C8u; return; } if (c.pc != 0x00157A24u) [[unlikely]] return; }
L_00157A24:
    set32(c.r[4], ld32((c.r[21].w[0] - 17248u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A34u);  if (depth < kMaxDepth) unit_007B(c, 65u, depth + 1u); else { c.pc = 0x002ECA00u; return; } if (c.pc != 0x00157A34u) [[unlikely]] return; }
L_00157A34:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157A64; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_00157A64; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00157A64; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[22].w[0]);
    c.budget -= 2;
L_00157A60:
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 1;
L_00157A64:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157A70u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x00157A70u) [[unlikely]] return; }
L_00157A70:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157960u | kUnwind; return; } goto L_00157960; } }
L_00157A7C:
    set32(c.r[2], ld32((c.r[23].w[0] + 2420u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    st32((c.r[23].w[0] + 2416u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[23].w[0] + 544u), c.f[1]);
    st32((c.r[23].w[0] + 552u), c.f[0]);
    c.budget -= 13;
L_00157AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157AC8; } }
L_00157AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157AC0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00157AC0u) [[unlikely]] return; }
L_00157AC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157AC8u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00157AC8u) [[unlikely]] return; }
L_00157AC8:
    c.r[2].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157BCC; } }
L_00157AD4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001576D4u | kUnwind; return; } goto L_001576D4; } }
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u + 24u);
    set32(c.r[3], 0u + 72u);
    set32(c.r[2], c.r[2].w[0] - c.r[30].w[0]);
    c.lo.d[0] = c.r[4].d[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    mmi::madd(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001576D4u | kUnwind; return; } goto L_001576D4; } }
    c.budget -= 1;
L_00157B08:
    set32(c.r[17], c.r[17].w[0] - 72u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00157B3C; } }
    set32(c.r[16], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_00157B3C; } }
L_00157B20:
    set32(c.r[16], c.r[16].w[0] - 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B34u);  if (depth < kMaxDepth) unit_009B(c, 362u, depth + 1u); else { c.pc = 0x0036EDF8u; return; } if (c.pc != 0x00157B34u) [[unlikely]] return; }
L_00157B34:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157B20u | kUnwind; return; } goto L_00157B20; } }
L_00157B3C:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157B08u | kUnwind; return; } goto L_00157B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001576D4u | kUnwind; return; } goto L_001576D4; } }
L_00157B50:
    set32(c.r[18], c.r[23].w[0] + 2628u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157AB8u | kUnwind; return; } goto L_00157AB8; } }
    set32(c.r[17], c.r[23].w[0] + 4428u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157AB8u | kUnwind; return; } goto L_00157AB8; } }
L_00157B68:
    set32(c.r[17], c.r[17].w[0] - 72u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_00157B9C; } }
    set32(c.r[16], c.r[17].w[0] + 60u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_00157B9C; } }
L_00157B80:
    set32(c.r[16], c.r[16].w[0] - 12u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157B94u);  if (depth < kMaxDepth) unit_009B(c, 362u, depth + 1u); else { c.pc = 0x0036EDF8u; return; } if (c.pc != 0x00157B94u) [[unlikely]] return; }
L_00157B94:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[16].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157B80u | kUnwind; return; } goto L_00157B80; } }
L_00157B9C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157B68u | kUnwind; return; } goto L_00157B68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157AB8u | kUnwind; return; } goto L_00157AB8; } }
L_00157BAC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157BBCu);  if (depth < kMaxDepth) unit_0013(c, 144u, depth + 1u); else { c.pc = 0x0014D408u; return; } if (c.pc != 0x00157BBCu) [[unlikely]] return; }
L_00157BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157AC0u | kUnwind; return; } goto L_00157AC0; } }
L_00157BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157BCCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x00157BCCu) [[unlikely]] return; }
L_00157BCC:
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
L_00157C00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 2624u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157C28; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 500u), c.r[2].w[0]);
    c.budget -= 2;
L_00157C28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C34u);  if (depth < kMaxDepth) unit_0015(c, 436u, depth + 1u); else { c.pc = 0x00157E40u; return; } if (c.pc != 0x00157C34u) [[unlikely]] return; }
L_00157C34:
    set32(c.r[2], ld32((c.r[17].w[0] + 4428u)));
    set32(c.r[3], 0u + 72u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 2688u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C50u);  if (depth < kMaxDepth) unit_0049(c, 181u, depth + 1u); else { c.pc = 0x00226588u; return; } if (c.pc != 0x00157C50u) [[unlikely]] return; }
L_00157C50:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 100u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C70u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00157C70u) [[unlikely]] return; }
L_00157C70:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157C80u);  if (depth < kMaxDepth) unit_0013(c, 48u, depth + 1u); else { c.pc = 0x0014C910u; return; } if (c.pc != 0x00157C80u) [[unlikely]] return; }
L_00157C80:
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157CC0; } }
    c.f[12] = ld32((c.r[17].w[0] + 544u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CA4u);  if (depth < kMaxDepth) unit_009B(c, 287u, depth + 1u); else { c.pc = 0x0036DCE0u; return; } if (c.pc != 0x00157CA4u) [[unlikely]] return; }
L_00157CA4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CB8u);  if (depth < kMaxDepth) unit_0013(c, 193u, depth + 1u); else { c.pc = 0x0014DC20u; return; } if (c.pc != 0x00157CB8u) [[unlikely]] return; }
L_00157CB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157CD0; } }
L_00157CC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CD0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157CD0u) [[unlikely]] return; }
L_00157CD0:
    set32(c.r[16], c.r[17].w[0] + 304u);
    set32(c.r[4], c.r[17].w[0] + 240u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CE4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157CE4u) [[unlikely]] return; }
L_00157CE4:
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[17].w[0] + 432u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157CF4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157CF4u) [[unlikely]] return; }
L_00157CF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D04u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157D04u) [[unlikely]] return; }
L_00157D04:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00157D24u) [[unlikely]] return; }
L_00157D24:
    set32(c.r[2], ld32((c.r[17].w[0] + 500u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157D64; } }
    c.f[12] = ld32((c.r[17].w[0] + 552u));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D48u);  if (depth < kMaxDepth) unit_009B(c, 289u, depth + 1u); else { c.pc = 0x0036DD18u; return; } if (c.pc != 0x00157D48u) [[unlikely]] return; }
L_00157D48:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D5Cu);  if (depth < kMaxDepth) unit_0013(c, 203u, depth + 1u); else { c.pc = 0x0014DE10u; return; } if (c.pc != 0x00157D5Cu) [[unlikely]] return; }
L_00157D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157D74; } }
L_00157D64:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D74u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157D74u) [[unlikely]] return; }
L_00157D74:
    set32(c.r[16], c.r[17].w[0] + 320u);
    set32(c.r[4], c.r[17].w[0] + 256u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D88u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157D88u) [[unlikely]] return; }
L_00157D88:
    set32(c.r[5], c.r[29].w[0] + 32u);
    set32(c.r[4], c.r[17].w[0] + 448u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157D98u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157D98u) [[unlikely]] return; }
L_00157D98:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157DA8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157DA8u) [[unlikely]] return; }
L_00157DA8:
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00157DC8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00157DC8u) [[unlikely]] return; }
L_00157DC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157DD8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x00157DD8u) [[unlikely]] return; }
L_00157DD8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157DE4u);  if (depth < kMaxDepth) unit_009B(c, 10u, depth + 1u); else { c.pc = 0x0036C070u; return; } if (c.pc != 0x00157DE4u) [[unlikely]] return; }
L_00157DE4:
    set32(c.r[2], ld32((c.r[17].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157E08; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 684u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157E08; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 704u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157E14; } }
L_00157E08:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157E14u);  if (depth < kMaxDepth) unit_009B(c, 306u, depth + 1u); else { c.pc = 0x0036DE78u; return; } if (c.pc != 0x00157E14u) [[unlikely]] return; }
L_00157E14:
    set32(c.r[2], ld32((c.r[17].w[0] + 2624u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00157E28; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 2624u), c.r[2].w[0]);
    c.budget -= 2;
L_00157E28:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00157E40:
    set32(c.r[29], c.r[29].w[0] - 720u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[21]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[22]);
    set32(c.r[21], 0u - 1u);
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[23]);
    c.r[22].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[30]);
    set32(c.r[23], c.r[19].w[0] + 2628u);
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[16]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 560u), c.r[31].d[0]);
    c.budget -= 18;
L_00157E88:
    set32(c.r[2], 0u + 72u);
    c.r[17].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[18].w[0] + 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[23].w[0]);
    c.budget -= 6;
L_00157EA0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[21].d[0];  if (t) { goto L_00157EC8; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157EB8u);  if (depth < kMaxDepth) unit_0087(c, 118u, depth + 1u); else { c.pc = 0x0031DBE0u; return; } if (c.pc != 0x00157EB8u) [[unlikely]] return; }
L_00157EB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157EC8; } }
    c.r[22].d[0] = c.r[18].d[0] + 0ull;
    c.r[30].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00157EC8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[17].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157EA0u | kUnwind; return; } goto L_00157EA0; } }
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < 25ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00157E88u | kUnwind; return; } goto L_00157E88; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4428u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157FF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], 0u + 268u);
    set32(c.r[4], c.r[4].w[0] + 27456u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157F40u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x00157F40u) [[unlikely]] return; }
L_00157F40:
    set32(c.r[4], ld32((c.r[19].w[0] + 4428u)));
    set32(c.r[2], 0u + 72u);
    set32(c.r[3], ld32((c.r[19].w[0] + 4432u)));
    set32(c.r[5], 0u + 12u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.f[1] = ld32((c.r[29].w[0] + 128u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 136u));
    st32((c.r[29].w[0] + 528u), c.f[1]);
    set32(c.r[4], c.r[6].w[0] + c.r[19].w[0]);
    st32((c.r[29].w[0] + 532u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[29].w[0] + 536u), c.f[2]);
    st32((c.r[29].w[0] + 540u), 0u);
    ldl(c.r[2], (c.r[3].w[0] + 2635u));
    ldr(c.r[2], (c.r[3].w[0] + 2628u));
    set32(c.r[4], ld32((c.r[3].w[0] + 2636u)));
    sdl(c.r[2], (c.r[29].w[0] + 551u));
    sdr(c.r[2], (c.r[29].w[0] + 544u));
    st32((c.r[29].w[0] + 552u), c.r[4].w[0]);
    c.budget -= 21;
L_00157F94:
    c.f[12] = ld32((c.r[29].w[0] + 552u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00157FE0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 544u)));
    set32(c.r[4], c.r[29].w[0] + 528u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157FC0u);  if (depth < kMaxDepth) unit_009B(c, 334u, depth + 1u); else { c.pc = 0x0036E498u; return; } if (c.pc != 0x00157FC0u) [[unlikely]] return; }
L_00157FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00157FE0; } }
    set32(c.r[22], ld32((c.r[19].w[0] + 4428u)));
    set32(c.r[30], ld32((c.r[19].w[0] + 4432u)));
    c.budget -= 2;
L_00157FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00157FE0; } }
L_00157FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157FE0u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x00157FE0u) [[unlikely]] return; }
L_00157FE0:
    set32(c.r[4], c.r[29].w[0] + 544u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00157FF0u);  if (depth < kMaxDepth) unit_009B(c, 362u, depth + 1u); else { c.pc = 0x0036EDF8u; return; } if (c.pc != 0x00157FF0u) [[unlikely]] return; }
L_00157FF0:
    set32(c.r[6], ld32((c.r[19].w[0] + 4428u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[22].d[0];  if (t) { [[clang::musttail]] return unit_0016(c, 3u, depth); } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4432u)));
    c.budget -= 1;
    [[clang::musttail]] return unit_0016(c, 1u, depth);
}

}
