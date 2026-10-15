#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0032[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0,
    313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342,
    0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367,
    0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0,
    0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0032(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001C8000;
    case 2u: goto L_001C8028;
    case 3u: goto L_001C807C;
    case 4u: goto L_001C808C;
    case 5u: goto L_001C80C8;
    case 6u: goto L_001C80D8;
    case 7u: goto L_001C8104;
    case 8u: goto L_001C8138;
    case 9u: goto L_001C8164;
    case 10u: goto L_001C819C;
    case 11u: goto L_001C81AC;
    case 12u: goto L_001C81BC;
    case 13u: goto L_001C81F8;
    case 14u: goto L_001C8208;
    case 15u: goto L_001C8234;
    case 16u: goto L_001C826C;
    case 17u: goto L_001C8294;
    case 18u: goto L_001C82E8;
    case 19u: goto L_001C82F8;
    case 20u: goto L_001C8334;
    case 21u: goto L_001C8344;
    case 22u: goto L_001C8370;
    case 23u: goto L_001C83B0;
    case 24u: goto L_001C83D8;
    case 25u: goto L_001C8438;
    case 26u: goto L_001C8448;
    case 27u: goto L_001C8484;
    case 28u: goto L_001C8494;
    case 29u: goto L_001C84C0;
    case 30u: goto L_001C84F8;
    case 31u: goto L_001C8520;
    case 32u: goto L_001C8570;
    case 33u: goto L_001C8580;
    case 34u: goto L_001C85BC;
    case 35u: goto L_001C85CC;
    case 36u: goto L_001C85F8;
    case 37u: goto L_001C8630;
    case 38u: goto L_001C865C;
    case 39u: goto L_001C86B0;
    case 40u: goto L_001C86C0;
    case 41u: goto L_001C86FC;
    case 42u: goto L_001C870C;
    case 43u: goto L_001C8734;
    case 44u: goto L_001C8768;
    case 45u: goto L_001C8794;
    case 46u: goto L_001C87F4;
    case 47u: goto L_001C8830;
    case 48u: goto L_001C8870;
    case 49u: goto L_001C889C;
    case 50u: goto L_001C88B4;
    case 51u: goto L_001C88C4;
    case 52u: goto L_001C88D4;
    case 53u: goto L_001C88E0;
    case 54u: goto L_001C88F0;
    case 55u: goto L_001C8900;
    case 56u: goto L_001C8968;
    case 57u: goto L_001C89B0;
    case 58u: goto L_001C89C0;
    case 59u: goto L_001C8A18;
    case 60u: goto L_001C8A5C;
    case 61u: goto L_001C8AF0;
    case 62u: goto L_001C8B38;
    case 63u: goto L_001C8B74;
    case 64u: goto L_001C8BB0;
    case 65u: goto L_001C8BCC;
    case 66u: goto L_001C8BE4;
    case 67u: goto L_001C8BF0;
    case 68u: goto L_001C8C08;
    case 69u: goto L_001C8C20;
    case 70u: goto L_001C8C44;
    case 71u: goto L_001C8C70;
    case 72u: goto L_001C8CB0;
    case 73u: goto L_001C8CC8;
    case 74u: goto L_001C8CE4;
    case 75u: goto L_001C8CFC;
    case 76u: goto L_001C8D1C;
    case 77u: goto L_001C8D34;
    case 78u: goto L_001C8D48;
    case 79u: goto L_001C8D68;
    case 80u: goto L_001C8D88;
    case 81u: goto L_001C8D98;
    case 82u: goto L_001C8DE0;
    case 83u: goto L_001C8E18;
    case 84u: goto L_001C8E98;
    case 85u: goto L_001C8EA8;
    case 86u: goto L_001C8EC0;
    case 87u: goto L_001C8ED0;
    case 88u: goto L_001C8EE0;
    case 89u: goto L_001C8EF0;
    case 90u: goto L_001C8F04;
    case 91u: goto L_001C8F18;
    case 92u: goto L_001C8F28;
    case 93u: goto L_001C8F38;
    case 94u: goto L_001C8F58;
    case 95u: goto L_001C8F94;
    case 96u: goto L_001C8FA0;
    case 97u: goto L_001C8FD0;
    case 98u: goto L_001C9018;
    case 99u: goto L_001C9040;
    case 100u: goto L_001C9068;
    case 101u: goto L_001C9078;
    case 102u: goto L_001C90B0;
    case 103u: goto L_001C90E0;
    case 104u: goto L_001C90F8;
    case 105u: goto L_001C9108;
    case 106u: goto L_001C9128;
    case 107u: goto L_001C9140;
    case 108u: goto L_001C9170;
    case 109u: goto L_001C91A0;
    case 110u: goto L_001C91B4;
    case 111u: goto L_001C91C8;
    case 112u: goto L_001C9218;
    case 113u: goto L_001C9234;
    case 114u: goto L_001C9270;
    case 115u: goto L_001C92B8;
    case 116u: goto L_001C92C4;
    case 117u: goto L_001C92F8;
    case 118u: goto L_001C9310;
    case 119u: goto L_001C9354;
    case 120u: goto L_001C9364;
    case 121u: goto L_001C9370;
    case 122u: goto L_001C9388;
    case 123u: goto L_001C9398;
    case 124u: goto L_001C93B8;
    case 125u: goto L_001C9408;
    case 126u: goto L_001C9444;
    case 127u: goto L_001C9450;
    case 128u: goto L_001C9474;
    case 129u: goto L_001C9498;
    case 130u: goto L_001C94E0;
    case 131u: goto L_001C9500;
    case 132u: goto L_001C950C;
    case 133u: goto L_001C9524;
    case 134u: goto L_001C953C;
    case 135u: goto L_001C9558;
    case 136u: goto L_001C957C;
    case 137u: goto L_001C9598;
    case 138u: goto L_001C962C;
    case 139u: goto L_001C963C;
    case 140u: goto L_001C9650;
    case 141u: goto L_001C966C;
    case 142u: goto L_001C9680;
    case 143u: goto L_001C968C;
    case 144u: goto L_001C96C0;
    case 145u: goto L_001C96CC;
    case 146u: goto L_001C96FC;
    case 147u: goto L_001C971C;
    case 148u: goto L_001C9728;
    case 149u: goto L_001C9748;
    case 150u: goto L_001C9754;
    case 151u: goto L_001C9768;
    case 152u: goto L_001C9790;
    case 153u: goto L_001C97AC;
    case 154u: goto L_001C97E0;
    case 155u: goto L_001C9810;
    case 156u: goto L_001C9830;
    case 157u: goto L_001C9860;
    case 158u: goto L_001C9874;
    case 159u: goto L_001C98A0;
    case 160u: goto L_001C98B0;
    case 161u: goto L_001C98C4;
    case 162u: goto L_001C98E4;
    case 163u: goto L_001C98F4;
    case 164u: goto L_001C9910;
    case 165u: goto L_001C9930;
    case 166u: goto L_001C9970;
    case 167u: goto L_001C997C;
    case 168u: goto L_001C99AC;
    case 169u: goto L_001C99D0;
    case 170u: goto L_001C99F8;
    case 171u: goto L_001C9A10;
    case 172u: goto L_001C9A2C;
    case 173u: goto L_001C9A40;
    case 174u: goto L_001C9A80;
    case 175u: goto L_001C9AA4;
    case 176u: goto L_001C9AB8;
    case 177u: goto L_001C9AC8;
    case 178u: goto L_001C9AD8;
    case 179u: goto L_001C9AF0;
    case 180u: goto L_001C9B00;
    case 181u: goto L_001C9B10;
    case 182u: goto L_001C9B58;
    case 183u: goto L_001C9BA0;
    case 184u: goto L_001C9BB8;
    case 185u: goto L_001C9BC8;
    case 186u: goto L_001C9BD8;
    case 187u: goto L_001C9BF0;
    case 188u: goto L_001C9C00;
    case 189u: goto L_001C9C10;
    case 190u: goto L_001C9C68;
    case 191u: goto L_001C9CB0;
    case 192u: goto L_001C9CF4;
    case 193u: goto L_001C9D18;
    case 194u: goto L_001C9D60;
    case 195u: goto L_001C9DB8;
    case 196u: goto L_001C9DE0;
    case 197u: goto L_001C9E20;
    case 198u: goto L_001C9E58;
    case 199u: goto L_001C9E90;
    case 200u: goto L_001C9EC0;
    case 201u: goto L_001C9F08;
    case 202u: goto L_001C9F18;
    case 203u: goto L_001C9F40;
    case 204u: goto L_001C9F88;
    case 205u: goto L_001C9FB0;
    case 206u: goto L_001C9FC4;
    case 207u: goto L_001C9FE4;
    case 208u: goto L_001CA030;
    case 209u: goto L_001CA070;
    case 210u: goto L_001CA080;
    case 211u: goto L_001CA0D0;
    case 212u: goto L_001CA120;
    case 213u: goto L_001CA130;
    case 214u: goto L_001CA15C;
    case 215u: goto L_001CA174;
    case 216u: goto L_001CA1B8;
    case 217u: goto L_001CA200;
    case 218u: goto L_001CA210;
    case 219u: goto L_001CA258;
    case 220u: goto L_001CA298;
    case 221u: goto L_001CA2E8;
    case 222u: goto L_001CA338;
    case 223u: goto L_001CA374;
    case 224u: goto L_001CA3A8;
    case 225u: goto L_001CA3CC;
    case 226u: goto L_001CA3EC;
    case 227u: goto L_001CA410;
    case 228u: goto L_001CA43C;
    case 229u: goto L_001CA450;
    case 230u: goto L_001CA45C;
    case 231u: goto L_001CA498;
    case 232u: goto L_001CA4D8;
    case 233u: goto L_001CA520;
    case 234u: goto L_001CA538;
    case 235u: goto L_001CA550;
    case 236u: goto L_001CA580;
    case 237u: goto L_001CA5C8;
    case 238u: goto L_001CA5F0;
    case 239u: goto L_001CA630;
    case 240u: goto L_001CA660;
    case 241u: goto L_001CA678;
    case 242u: goto L_001CA6A4;
    case 243u: goto L_001CA6C0;
    case 244u: goto L_001CA6D8;
    case 245u: goto L_001CA6E4;
    case 246u: goto L_001CA6FC;
    case 247u: goto L_001CA714;
    case 248u: goto L_001CA738;
    case 249u: goto L_001CA760;
    case 250u: goto L_001CA7CC;
    case 251u: goto L_001CA7E0;
    case 252u: goto L_001CA820;
    case 253u: goto L_001CA854;
    case 254u: goto L_001CA8A8;
    case 255u: goto L_001CA8B8;
    case 256u: goto L_001CA8D0;
    case 257u: goto L_001CA8E8;
    case 258u: goto L_001CA8F8;
    case 259u: goto L_001CA910;
    case 260u: goto L_001CA928;
    case 261u: goto L_001CA974;
    case 262u: goto L_001CA9B0;
    case 263u: goto L_001CAAA0;
    case 264u: goto L_001CAAD0;
    case 265u: goto L_001CAB00;
    case 266u: goto L_001CAB30;
    case 267u: goto L_001CAB40;
    case 268u: goto L_001CAB90;
    case 269u: goto L_001CABA0;
    case 270u: goto L_001CABA8;
    case 271u: goto L_001CABB0;
    case 272u: goto L_001CABC0;
    case 273u: goto L_001CABEC;
    case 274u: goto L_001CAC0C;
    case 275u: goto L_001CAC20;
    case 276u: goto L_001CAC50;
    case 277u: goto L_001CAC9C;
    case 278u: goto L_001CACDC;
    case 279u: goto L_001CAD00;
    case 280u: goto L_001CAD50;
    case 281u: goto L_001CAD94;
    case 282u: goto L_001CADCC;
    case 283u: goto L_001CADF0;
    case 284u: goto L_001CAE00;
    case 285u: goto L_001CAE18;
    case 286u: goto L_001CAE30;
    case 287u: goto L_001CAE48;
    case 288u: goto L_001CAE58;
    case 289u: goto L_001CAE74;
    case 290u: goto L_001CAE80;
    case 291u: goto L_001CAEA4;
    case 292u: goto L_001CAEBC;
    case 293u: goto L_001CAED4;
    case 294u: goto L_001CAF10;
    case 295u: goto L_001CAF3C;
    case 296u: goto L_001CAF58;
    case 297u: goto L_001CAF64;
    case 298u: goto L_001CAF80;
    case 299u: goto L_001CAFB0;
    case 300u: goto L_001CB000;
    case 301u: goto L_001CB018;
    case 302u: goto L_001CB028;
    case 303u: goto L_001CB03C;
    case 304u: goto L_001CB05C;
    case 305u: goto L_001CB084;
    case 306u: goto L_001CB09C;
    case 307u: goto L_001CB0B4;
    case 308u: goto L_001CB0E4;
    case 309u: goto L_001CB108;
    case 310u: goto L_001CB144;
    case 311u: goto L_001CB158;
    case 312u: goto L_001CB16C;
    case 313u: goto L_001CB180;
    case 314u: goto L_001CB194;
    case 315u: goto L_001CB1A0;
    case 316u: goto L_001CB1CC;
    case 317u: goto L_001CB1E4;
    case 318u: goto L_001CB1FC;
    case 319u: goto L_001CB224;
    case 320u: goto L_001CB238;
    case 321u: goto L_001CB240;
    case 322u: goto L_001CB268;
    case 323u: goto L_001CB27C;
    case 324u: goto L_001CB298;
    case 325u: goto L_001CB2D8;
    case 326u: goto L_001CB2F0;
    case 327u: goto L_001CB310;
    case 328u: goto L_001CB328;
    case 329u: goto L_001CB340;
    case 330u: goto L_001CB350;
    case 331u: goto L_001CB358;
    case 332u: goto L_001CB360;
    case 333u: goto L_001CB388;
    case 334u: goto L_001CB3A0;
    case 335u: goto L_001CB3B8;
    case 336u: goto L_001CB3D0;
    case 337u: goto L_001CB3E0;
    case 338u: goto L_001CB40C;
    case 339u: goto L_001CB41C;
    case 340u: goto L_001CB438;
    case 341u: goto L_001CB450;
    case 342u: goto L_001CB47C;
    case 343u: goto L_001CB490;
    case 344u: goto L_001CB4A8;
    case 345u: goto L_001CB4D8;
    case 346u: goto L_001CB500;
    case 347u: goto L_001CB518;
    case 348u: goto L_001CB530;
    case 349u: goto L_001CB558;
    case 350u: goto L_001CB570;
    case 351u: goto L_001CB588;
    case 352u: goto L_001CB5C4;
    case 353u: goto L_001CB5D8;
    case 354u: goto L_001CB5F4;
    case 355u: goto L_001CB608;
    case 356u: goto L_001CB61C;
    case 357u: goto L_001CB638;
    case 358u: goto L_001CB650;
    case 359u: goto L_001CB660;
    case 360u: goto L_001CB6F0;
    case 361u: goto L_001CB770;
    case 362u: goto L_001CB7B4;
    case 363u: goto L_001CB7CC;
    case 364u: goto L_001CB804;
    case 365u: goto L_001CB8B0;
    case 366u: goto L_001CB8C8;
    case 367u: goto L_001CB8FC;
    case 368u: goto L_001CB910;
    case 369u: goto L_001CB918;
    case 370u: goto L_001CB92C;
    case 371u: goto L_001CB968;
    case 372u: goto L_001CB978;
    case 373u: goto L_001CB990;
    case 374u: goto L_001CB9B0;
    case 375u: goto L_001CB9E0;
    case 376u: goto L_001CBA68;
    case 377u: goto L_001CBA9C;
    case 378u: goto L_001CBAD0;
    case 379u: goto L_001CBAE8;
    case 380u: goto L_001CBB08;
    case 381u: goto L_001CBB24;
    case 382u: goto L_001CBB44;
    case 383u: goto L_001CBB70;
    case 384u: goto L_001CBBD8;
    case 385u: goto L_001CBC28;
    case 386u: goto L_001CBC48;
    case 387u: goto L_001CBC70;
    case 388u: goto L_001CBC80;
    case 389u: goto L_001CBC9C;
    case 390u: goto L_001CBCB0;
    case 391u: goto L_001CBCD4;
    case 392u: goto L_001CBCE4;
    case 393u: goto L_001CBCF8;
    case 394u: goto L_001CBD38;
    case 395u: goto L_001CBD40;
    case 396u: goto L_001CBD48;
    case 397u: goto L_001CBDC8;
    case 398u: goto L_001CBDF0;
    case 399u: goto L_001CBE30;
    case 400u: goto L_001CBE64;
    case 401u: goto L_001CBE74;
    case 402u: goto L_001CBE88;
    case 403u: goto L_001CBE9C;
    case 404u: goto L_001CBEC8;
    case 405u: goto L_001CBEF0;
    case 406u: goto L_001CBF0C;
    case 407u: goto L_001CBF1C;
    case 408u: goto L_001CBF30;
    case 409u: goto L_001CBF48;
    case 410u: goto L_001CBF88;
    case 411u: goto L_001CBF9C;
    case 412u: goto L_001CBFA8;
    default: bad_entry(c, 0x001C8000u); return;
    }
L_001C8000:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 676u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8028u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C8028u) [[unlikely]] return; }
L_001C8028:
    set32(c.r[3], ld32((c.r[22].w[0] + 24080u)));
    c.f[12] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[13] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3AF0000u);
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[15] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40480000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFC00000u);
    c.f[17] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] - 688u);
    st32((c.r[22].w[0] + 24080u), c.r[3].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C807Cu);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C807Cu) [[unlikely]] return; }
L_001C807C:
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C808Cu);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C808Cu) [[unlikely]] return; }
L_001C808C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] - 19056u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C80B8; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C80C8; } }
L_001C80B8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C80C8u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C80C8u) [[unlikely]] return; }
L_001C80C8:
    c.r[4].d[0] = c.r[19].d[0] | 8ull;
    set32(c.r[16], 0u + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C80D8u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C80D8u) [[unlikely]] return; }
L_001C80D8:
    set32(c.r[18], 0u + 88u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[19].w[0] + 592u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], 0u + 12702u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[19].w[0] + 608u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8104u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C8104u) [[unlikely]] return; }
L_001C8104:
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[19].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[20], c.r[3].w[0] - 19352u);
    st32((c.r[19].w[0] + 664u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 656u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8138u);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C8138u) [[unlikely]] return; }
L_001C8138:
    set32(c.r[4], ld32((c.r[22].w[0] + 24080u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 676u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8164u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C8164u) [[unlikely]] return; }
L_001C8164:
    set32(c.r[3], ld32((c.r[22].w[0] + 24080u)));
    c.f[12] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[22].w[0] + 24080u), c.r[3].w[0]);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.f[16] = c.f[12];
    c.f[17] = c.f[12];
    set32(c.r[16], c.r[16].w[0] - 688u);
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C819Cu);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C819Cu) [[unlikely]] return; }
L_001C819C:
    set32(c.r[4], ld32((c.r[29].w[0] + 688u)));
    set32(c.r[5], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81ACu);  if (depth < kMaxDepth) unit_0031(c, 370u, depth + 1u); else { c.pc = 0x001C78C0u; return; } if (c.pc != 0x001C81ACu) [[unlikely]] return; }
L_001C81AC:
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81BCu);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C81BCu) [[unlikely]] return; }
L_001C81BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] - 19056u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C81E8; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C81F8; } }
L_001C81E8:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C81F8u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C81F8u) [[unlikely]] return; }
L_001C81F8:
    c.r[4].d[0] = c.r[19].d[0] | 8ull;
    set32(c.r[16], 0u + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8208u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C8208u) [[unlikely]] return; }
L_001C8208:
    set32(c.r[18], 0u + 88u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[19].w[0] + 592u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], 0u + 12703u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[19].w[0] + 608u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8234u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C8234u) [[unlikely]] return; }
L_001C8234:
    set32(c.r[2], 0u + 148u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 147u);
    st32((c.r[19].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 1000u);
    set32(c.r[20], c.r[3].w[0] - 19344u);
    st32((c.r[19].w[0] + 664u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 656u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C826Cu);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C826Cu) [[unlikely]] return; }
L_001C826C:
    set32(c.r[4], ld32((c.r[22].w[0] + 24080u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 288u), 0u);
    st32((c.r[19].w[0] + 676u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8294u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C8294u) [[unlikely]] return; }
L_001C8294:
    set32(c.r[3], ld32((c.r[22].w[0] + 24080u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[13] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[14] = c.r[1].w[0];
    c.f[15] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40480000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFB30000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[17] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] - 688u);
    st32((c.r[22].w[0] + 24080u), c.r[3].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C82E8u);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C82E8u) [[unlikely]] return; }
L_001C82E8:
    c.r[21].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C82F8u);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C82F8u) [[unlikely]] return; }
L_001C82F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] - 19056u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C8324; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8334; } }
L_001C8324:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8334u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C8334u) [[unlikely]] return; }
L_001C8334:
    c.r[4].d[0] = c.r[21].d[0] | 8ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8344u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C8344u) [[unlikely]] return; }
L_001C8344:
    set32(c.r[16], 0u + 688u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[21].w[0] + 592u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[20], 0u + 84u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[21].w[0] + 608u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8370u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C8370u) [[unlikely]] return; }
L_001C8370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[2], 0u + 150u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[21].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[19], 0u + 12706u);
    set32(c.r[2], 0u + 149u);
    st32((c.r[21].w[0] + 656u), 0u);
    st32((c.r[21].w[0] + 304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1000u);
    st32((c.r[21].w[0] + 644u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 664u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[30], c.r[2].w[0] - 19336u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C83B0u);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C83B0u) [[unlikely]] return; }
L_001C83B0:
    set32(c.r[4], ld32((c.r[22].w[0] + 24080u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[21].w[0] + 288u), 0u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[21].w[0] + 676u), c.f[20]);
    set32(c.r[17], c.r[4].w[0] - 688u);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    set32(c.r[17], c.r[22].w[0] + c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C83D8u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C83D8u) [[unlikely]] return; }
L_001C83D8:
    set32(c.r[3], ld32((c.r[22].w[0] + 24080u)));
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[13] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[22].w[0] + 24080u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3610000u);
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40480000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[17] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] - 688u);
    set32(c.r[16], c.r[22].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 380u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 376u), c.r[18].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8438u);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C8438u) [[unlikely]] return; }
L_001C8438:
    c.r[21].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8448u);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C8448u) [[unlikely]] return; }
L_001C8448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[19].w[0]);
    set32(c.r[3], c.r[2].w[0] - 19056u);
    st32((c.r[29].w[0]), c.r[20].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 8;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { goto L_001C8474; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8484; } }
L_001C8474:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8484u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C8484u) [[unlikely]] return; }
L_001C8484:
    c.r[4].d[0] = c.r[21].d[0] | 8ull;
    set32(c.r[16], 0u + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8494u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C8494u) [[unlikely]] return; }
L_001C8494:
    set32(c.r[18], 0u + 88u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[21].w[0] + 592u);
    st32((c.r[21].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], 0u + 12707u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[21].w[0] + 608u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C84C0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C84C0u) [[unlikely]] return; }
L_001C84C0:
    set32(c.r[2], 0u + 142u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[21].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[2], 0u + 141u);
    st32((c.r[21].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[21].w[0] + 304u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 2000u);
    set32(c.r[20], c.r[3].w[0] - 19328u);
    st32((c.r[21].w[0] + 664u), c.r[2].w[0]);
    st32((c.r[21].w[0] + 656u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C84F8u);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C84F8u) [[unlikely]] return; }
L_001C84F8:
    set32(c.r[4], ld32((c.r[22].w[0] + 24080u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[21].w[0] + 288u), 0u);
    st32((c.r[21].w[0] + 676u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8520u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C8520u) [[unlikely]] return; }
L_001C8520:
    set32(c.r[3], ld32((c.r[22].w[0] + 24080u)));
    c.f[12] = 0u;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3890000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[14] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40480000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[17] = c.r[1].w[0];
    c.f[13] = c.f[12];
    st32((c.r[22].w[0] + 24080u), c.r[3].w[0]);
    c.f[15] = c.f[12];
    set32(c.r[16], c.r[16].w[0] - 688u);
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8570u);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C8570u) [[unlikely]] return; }
L_001C8570:
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8580u);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C8580u) [[unlikely]] return; }
L_001C8580:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] - 19056u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C85AC; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C85BC; } }
L_001C85AC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C85BCu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C85BCu) [[unlikely]] return; }
L_001C85BC:
    c.r[4].d[0] = c.r[19].d[0] | 8ull;
    set32(c.r[16], 0u + 688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C85CCu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C85CCu) [[unlikely]] return; }
L_001C85CC:
    set32(c.r[18], 0u + 88u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[19].w[0] + 592u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], 0u + 12708u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[19].w[0] + 608u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C85F8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C85F8u) [[unlikely]] return; }
L_001C85F8:
    set32(c.r[2], 0u + 470u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 469u);
    st32((c.r[19].w[0] + 644u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 1000u);
    set32(c.r[20], c.r[3].w[0] - 19312u);
    st32((c.r[19].w[0] + 664u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 656u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8630u);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C8630u) [[unlikely]] return; }
L_001C8630:
    set32(c.r[4], ld32((c.r[22].w[0] + 24080u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 676u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 288u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C865Cu);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C865Cu) [[unlikely]] return; }
L_001C865C:
    set32(c.r[3], ld32((c.r[22].w[0] + 24080u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC2C80000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3480000u);
    c.f[13] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[14] = c.r[1].w[0];
    c.f[15] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40480000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFB30000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[17] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] - 688u);
    st32((c.r[22].w[0] + 24080u), c.r[3].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[16].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C86B0u);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C86B0u) [[unlikely]] return; }
L_001C86B0:
    c.r[19].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C86C0u);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C86C0u) [[unlikely]] return; }
L_001C86C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 660u), c.r[17].w[0]);
    set32(c.r[3], c.r[2].w[0] - 19056u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 496u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 680u), 0u);
    c.budget -= 8;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C86EC; } }
    st8((c.r[29].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C86FC; } }
L_001C86EC:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C86FCu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C86FCu) [[unlikely]] return; }
L_001C86FC:
    c.r[4].d[0] = c.r[19].d[0] | 8ull;
    set32(c.r[18], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C870Cu);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C870Cu) [[unlikely]] return; }
L_001C870C:
    set32(c.r[16], 0u + 688u);
    c.f[12] = 0u;
    set32(c.r[4], c.r[19].w[0] + 592u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    st32((c.r[19].w[0] + 608u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8734u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C8734u) [[unlikely]] return; }
L_001C8734:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[2], 0u + 472u);
    set32(c.r[3], 0u + 1000u);
    st32((c.r[19].w[0] + 300u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], 0u + 471u);
    st32((c.r[19].w[0] + 664u), c.r[3].w[0]);
    st32((c.r[19].w[0] + 304u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 644u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 656u), 0u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8768u);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C8768u) [[unlikely]] return; }
L_001C8768:
    set32(c.r[4], ld32((c.r[22].w[0] + 24080u)));
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[19].w[0] + 676u), c.f[20]);
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[19].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[17], c.r[4].w[0] - 688u);
    set32(c.r[17], c.r[22].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[22].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8794u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001C8794u) [[unlikely]] return; }
L_001C8794:
    set32(c.r[3], ld32((c.r[22].w[0] + 24080u)));
    c.f[15] = c.f[20];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[13] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[22].w[0] + 24080u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3610000u);
    c.f[14] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40480000u);
    c.r[1].d[0] = c.r[1].d[0] | 62915ull;
    c.f[16] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[17] = c.r[1].w[0];
    set32(c.r[16], c.r[16].w[0] - 688u);
    set32(c.r[16], c.r[22].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 380u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 376u), c.r[18].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C87F4u);  if (depth < kMaxDepth) unit_0031(c, 244u, depth + 1u); else { c.pc = 0x001C6368u; return; } if (c.pc != 0x001C87F4u) [[unlikely]] return; }
L_001C87F4:
    set32(c.r[2], ld32((c.r[29].w[0] + 688u)));
    ld128((c.r[29].w[0] + 848u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 832u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 704u));
    c.f[20] = ld32((c.r[29].w[0] + 864u));
    set32(c.r[29], c.r[29].w[0] + 880u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8830:
    set32(c.r[29], c.r[29].w[0] - 304u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 288u), c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8870u);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x001C8870u) [[unlikely]] return; }
L_001C8870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C88A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 4600u);
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_001C8AFC; } }
    set32(c.r[4], c.r[2].w[0] - 1752u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C889Cu);  if (depth < kMaxDepth) unit_0020(c, 24u, depth + 1u); else { c.pc = 0x00180368u; return; } if (c.pc != 0x001C889Cu) [[unlikely]] return; }
L_001C889C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8AFC; } }
L_001C88A4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88B4u);  if (depth < kMaxDepth) unit_001C(c, 6u, depth + 1u); else { c.pc = 0x001700A8u; return; } if (c.pc != 0x001C88B4u) [[unlikely]] return; }
L_001C88B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88C4u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001C88C4u) [[unlikely]] return; }
L_001C88C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C88E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88D4u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001C88D4u) [[unlikely]] return; }
L_001C88D4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88E0u);  if (depth < kMaxDepth) unit_009B(c, 432u, depth + 1u); else { c.pc = 0x0036F778u; return; } if (c.pc != 0x001C88E0u) [[unlikely]] return; }
L_001C88E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8AFC; } }
L_001C88E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C88F0u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001C88F0u) [[unlikely]] return; }
L_001C88F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8910; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8900u);  if (depth < kMaxDepth) unit_0036(c, 384u, depth + 1u); else { c.pc = 0x001DADB0u; return; } if (c.pc != 0x001C8900u) [[unlikely]] return; }
L_001C8900:
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C8AFC; } }
L_001C8910:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], c.r[3].w[0] + 2848u);
    set32(c.r[2], ld32((c.r[3].w[0] + 1752u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8934; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 1776u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001C8AFC; } }
L_001C8934:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 4316u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8978; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 6992u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8970; } }
    set32(c.r[4], c.r[16].w[0] - 31104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8968u);  if (depth < kMaxDepth) unit_0031(c, 381u, depth + 1u); else { c.pc = 0x001C7AF0u; return; } if (c.pc != 0x001C8968u) [[unlikely]] return; }
L_001C8968:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 6992u), c.r[2].w[0]);
    c.budget -= 2;
L_001C8970:
    set32(c.r[2], c.r[16].w[0] - 31104u);
    st32((c.r[18].w[0] - 4316u), c.r[2].w[0]);
    c.budget -= 2;
L_001C8978:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[22], ld32((c.r[18].w[0] - 4316u)));
    set32(c.r[17], c.r[2].w[0] - 14152u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[18], c.r[2].w[0] - 6080u);
    set32(c.r[30], c.r[17].w[0] + 3752u);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    c.r[20].d[0] = 0ull + 0ull;
    c.r[19].d[0] = 0ull + 0ull;
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[21], 0u + 1u);
    c.budget -= 14;
L_001C89B0:
    set32(c.r[4], c.r[23].w[0] + 9872u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C89C0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001C89C0u) [[unlikely]] return; }
L_001C89C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8A78; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8A78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8A78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 10196u)));
    set32(c.r[2], c.r[2].w[0] - 84u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8A78; } }
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A18u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001C8A18u) [[unlikely]] return; }
L_001C8A18:
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[1] = ld32((c.r[18].w[0] + 132u));
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[7], c.r[29].w[0] + 116u);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    set32(c.r[8], 0u - 1u);
    st32((c.r[29].w[0] + 24u), c.f[2]);
    st32((c.r[29].w[0] + 28u), c.f[20]);
    st32((c.r[29].w[0] + 116u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8A5Cu);  if (depth < kMaxDepth) unit_0031(c, 312u, depth + 1u); else { c.pc = 0x001C6DB0u; return; } if (c.pc != 0x001C8A5Cu) [[unlikely]] return; }
L_001C8A5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8A78; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[3].d[0] = c.r[2].d[0] ^ 2ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    if (c.r[3].d[0] == 0) c.r[19].d[0] = c.r[21].d[0];
    if (c.r[2].d[0] == 0) c.r[20].d[0] = c.r[21].d[0];
    c.budget -= 5;
L_001C8A78:
    set32(c.r[17], c.r[17].w[0] + 268u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C89B0u | kUnwind; return; } goto L_001C89B0; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_001C8AA4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001C8AFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8AB0; } }
L_001C8AA4:
    set32(c.r[3], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001C8AC4; } }
L_001C8AB0:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_001C8AC4; } }
    set32(c.r[2], 0u + 10u);
    if (c.r[20].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_001C8AC4:
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    st32((c.r[29].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 2848u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 92u), 0u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8AF0u);  if (depth < kMaxDepth) unit_001F(c, 206u, depth + 1u); else { c.pc = 0x0017E3B8u; return; } if (c.pc != 0x001C8AF0u) [[unlikely]] return; }
L_001C8AF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8B00; } }
L_001C8AFC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8B00:
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8B38:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 688u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8B74u);  if (depth < kMaxDepth) unit_0032(c, 257u, depth + 1u); else { c.pc = 0x001CA8E8u; return; } if (c.pc != 0x001C8B74u) [[unlikely]] return; }
L_001C8B74:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_001C8B98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8C54; } }
L_001C8B98:
    set32(c.r[2], ld32((c.r[18].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10090u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001C8BD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BB0u);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x001C8BB0u) [[unlikely]] return; }
L_001C8BB0:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0] + 264u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BCCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8BCCu) [[unlikely]] return; }
L_001C8BCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C8C50; } }
L_001C8BD4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], 0u + 90u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BE4u);  if (depth < kMaxDepth) unit_0031(c, 215u, depth + 1u); else { c.pc = 0x001C5E08u; return; } if (c.pc != 0x001C8BE4u) [[unlikely]] return; }
L_001C8BE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8BF0u);  if (depth < kMaxDepth) unit_0031(c, 255u, depth + 1u); else { c.pc = 0x001C6598u; return; } if (c.pc != 0x001C8BF0u) [[unlikely]] return; }
L_001C8BF0:
    set32(c.r[2], ld32((c.r[18].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C8C08u) [[unlikely]] return; }
L_001C8C08:
    st32((c.r[18].w[0] + 576u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[18].w[0] + 656u), 0u);
    set32(c.r[5], c.r[18].w[0] + 512u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C20u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001C8C20u) [[unlikely]] return; }
L_001C8C20:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x477A0000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8C44u);  if (depth < kMaxDepth) unit_0031(c, 237u, depth + 1u); else { c.pc = 0x001C6218u; return; } if (c.pc != 0x001C8C44u) [[unlikely]] return; }
L_001C8C44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C8C54; } }
L_001C8C50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C8C54:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C8D34; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C8D34; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 6984u);
    set32(c.r[2], c.r[2].w[0] - 18952u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CB0u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C8CB0u) [[unlikely]] return; }
L_001C8CB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19432u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CC8u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001C8CC8u) [[unlikely]] return; }
L_001C8CC8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 6968u);
    set32(c.r[2], c.r[2].w[0] - 18976u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CE4u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C8CE4u) [[unlikely]] return; }
L_001C8CE4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19296u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8CFCu);  if (depth < kMaxDepth) unit_0098(c, 237u, depth + 1u); else { c.pc = 0x00362CB0u; return; } if (c.pc != 0x001C8CFCu) [[unlikely]] return; }
L_001C8CFC:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 6952u);
    set32(c.r[2], c.r[2].w[0] - 19024u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D1Cu);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001C8D1Cu) [[unlikely]] return; }
L_001C8D1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19272u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D34u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001C8D34u) [[unlikely]] return; }
L_001C8D34:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8D48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8D68u);  if (depth < kMaxDepth) unit_0032(c, 260u, depth + 1u); else { c.pc = 0x001CA928u; return; } if (c.pc != 0x001C8D68u) [[unlikely]] return; }
L_001C8D68:
    set32(c.r[9], c.r[16].w[0] + 592u);
    set32(c.r[10], c.r[17].w[0] + 592u);
    set32(c.r[11], c.r[16].w[0] + 624u);
    set32(c.r[12], c.r[17].w[0] + 624u);
    set32(c.r[8], 0u - 1u);
    set32(c.r[3], c.r[16].w[0] + 512u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], c.r[17].w[0] + 512u);
    c.budget -= 8;
L_001C8D88:
    set32(c.r[6], c.r[4].w[0] - 1u);
    set32(c.r[7], c.r[3].w[0] + 16u);
    set32(c.r[5], c.r[2].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_001C8D98:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8D98u | kUnwind; return; } goto L_001C8D98; } }
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8D88u | kUnwind; return; } goto L_001C8D88; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 576u)));
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.r[3].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 576u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
L_001C8DE0:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8DE0u | kUnwind; return; } goto L_001C8DE0; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 608u)));
    c.r[4].d[0] = c.r[11].d[0] + 0ull;
    c.r[3].d[0] = c.r[12].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    st32((c.r[16].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 7;
L_001C8E18:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C8E18u | kUnwind; return; } goto L_001C8E18; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 640u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[16].w[0] + 640u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 644u)));
    st32((c.r[16].w[0] + 644u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 656u)));
    st32((c.r[16].w[0] + 656u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 660u)));
    st32((c.r[16].w[0] + 660u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 664u)));
    st32((c.r[16].w[0] + 664u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 668u)));
    st32((c.r[16].w[0] + 668u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 672u)));
    st32((c.r[16].w[0] + 672u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 676u));
    st32((c.r[16].w[0] + 676u), c.f[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 680u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st32((c.r[16].w[0] + 680u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8E98:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 672u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8EA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 672u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8EC0:
    set32(c.r[2], ld32((c.r[4].w[0] + 664u)));
    st32((c.r[4].w[0] + 668u), c.r[2].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8ED0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8EE0u);  if (depth < kMaxDepth) unit_0031(c, 348u, depth + 1u); else { c.pc = 0x001C75D8u; return; } if (c.pc != 0x001C8EE0u) [[unlikely]] return; }
L_001C8EE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[7], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F04u);  if (depth < kMaxDepth) unit_0031(c, 348u, depth + 1u); else { c.pc = 0x001C75D8u; return; } if (c.pc != 0x001C8F04u) [[unlikely]] return; }
L_001C8F04:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8F18:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8F28u);  if (depth < kMaxDepth) unit_0032(c, 94u, depth + 1u); else { c.pc = 0x001C8F58u; return; } if (c.pc != 0x001C8F28u) [[unlikely]] return; }
L_001C8F28:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8F38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] - 18904u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0] - 4320u), c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8F58:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], ld32((c.r[3].w[0] - 4316u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8FB0; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 6992u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C8FA8; } }
L_001C8F94:
    set32(c.r[4], c.r[16].w[0] - 31104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C8FA0u);  if (depth < kMaxDepth) unit_0031(c, 381u, depth + 1u); else { c.pc = 0x001C7AF0u; return; } if (c.pc != 0x001C8FA0u) [[unlikely]] return; }
L_001C8FA0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 6992u), c.r[2].w[0]);
    c.budget -= 2;
L_001C8FA8:
    set32(c.r[2], c.r[16].w[0] - 31104u);
    st32((c.r[18].w[0] - 4316u), c.r[2].w[0]);
    c.budget -= 2;
L_001C8FB0:
    set32(c.r[2], ld32((c.r[18].w[0] - 4316u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C8FD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 64u), c.f[20]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9090; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[17], c.r[2].w[0] + 14664u);
    set32(c.r[3], ld32((c.r[17].w[0] + 164u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C9044; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9018u);  if (depth < kMaxDepth) unit_0032(c, 224u, depth + 1u); else { c.pc = 0x001CA3A8u; return; } if (c.pc != 0x001C9018u) [[unlikely]] return; }
L_001C9018:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001C9090; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 84u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9040u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C9040u) [[unlikely]] return; }
L_001C9040:
    st32((c.r[17].w[0] + 164u), 0u);
    c.budget -= 1;
L_001C9044:
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[3], 0u + 688u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C9090; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 688u);
    c.budget -= 2;
L_001C9068:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9078u);  if (depth < kMaxDepth) unit_0031(c, 321u, depth + 1u); else { c.pc = 0x001C70E0u; return; } if (c.pc != 0x001C9078u) [[unlikely]] return; }
L_001C9078:
    set32(c.r[16], c.r[16].w[0] + 688u);
    set32(c.r[2], ld32((c.r[17].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9068u | kUnwind; return; } goto L_001C9068; } }
L_001C9090:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C90B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90E0u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C90E0u) [[unlikely]] return; }
L_001C90E0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C90F8; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C90F8u);  if (depth < kMaxDepth) unit_0031(c, 256u, depth + 1u); else { c.pc = 0x001C65A8u; return; } if (c.pc != 0x001C90F8u) [[unlikely]] return; }
L_001C90F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9108u);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001C94E0u; return; } if (c.pc != 0x001C9108u) [[unlikely]] return; }
L_001C9108:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9128:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9140u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001C9140u) [[unlikely]] return; }
L_001C9140:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001C91B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C91B4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9170u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C9170u) [[unlikely]] return; }
L_001C9170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C91B4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C91B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001C91A8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C91A0u);  if (depth < kMaxDepth) unit_0061(c, 40u, depth + 1u); else { c.pc = 0x00284770u; return; } if (c.pc != 0x001C91A0u) [[unlikely]] return; }
L_001C91A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C91B4; } }
L_001C91A8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C91B4u);  if (depth < kMaxDepth) unit_0061(c, 40u, depth + 1u); else { c.pc = 0x00284770u; return; } if (c.pc != 0x001C91B4u) [[unlikely]] return; }
L_001C91B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C91C8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 688u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 29576u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 24080u)));
    st32((c.r[4].w[0] + 31488u), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[7].w[0] + c.r[16].w[0]);
    c.budget -= 18;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_001C924C; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 688u);
    c.budget -= 2;
L_001C9218:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9234; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9234u);  if (depth < kMaxDepth) unit_0032(c, 137u, depth + 1u); else { c.pc = 0x001C9598u; return; } if (c.pc != 0x001C9234u) [[unlikely]] return; }
L_001C9234:
    set32(c.r[2], ld32((c.r[17].w[0] + 24080u)));
    set32(c.r[16], c.r[16].w[0] + 688u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9218u | kUnwind; return; } goto L_001C9218; } }
L_001C924C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9270:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[5], 0u + 688u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 29576u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24080u)));
    st32((c.r[4].w[0] + 31488u), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[16].w[0]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_001C92DC; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], 0u + 688u);
    c.budget -= 2;
L_001C92B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C92C4u);  if (depth < kMaxDepth) unit_0032(c, 140u, depth + 1u); else { c.pc = 0x001C9650u; return; } if (c.pc != 0x001C92C4u) [[unlikely]] return; }
L_001C92C4:
    set32(c.r[16], c.r[16].w[0] + 688u);
    set32(c.r[2], ld32((c.r[17].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C92B8u | kUnwind; return; } goto L_001C92B8; } }
L_001C92DC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C92F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 668u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 668u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 1ll ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9310:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 87u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C9354; } }
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9354u);  if (depth < kMaxDepth) unit_0031(c, 208u, depth + 1u); else { c.pc = 0x001C5CC0u; return; } if (c.pc != 0x001C9354u) [[unlikely]] return; }
L_001C9354:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9364u);  if (depth < kMaxDepth) unit_0031(c, 211u, depth + 1u); else { c.pc = 0x001C5D38u; return; } if (c.pc != 0x001C9364u) [[unlikely]] return; }
L_001C9364:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9370u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C9370u) [[unlikely]] return; }
L_001C9370:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001C9388; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9388u);  if (depth < kMaxDepth) unit_0031(c, 256u, depth + 1u); else { c.pc = 0x001C65A8u; return; } if (c.pc != 0x001C9388u) [[unlikely]] return; }
L_001C9388:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9398u);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001C94E0u; return; } if (c.pc != 0x001C9398u) [[unlikely]] return; }
L_001C9398:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C93B8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9408u);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001C9408u) [[unlikely]] return; }
L_001C9408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[18].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 19056u);
    st32((c.r[18].w[0] + 660u), c.r[16].w[0]);
    st32((c.r[18].w[0] + 496u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 680u), 0u);
    c.budget -= 9;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001C9438; } }
    st8((c.r[18].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9444; } }
L_001C9438:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9444u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001C9444u) [[unlikely]] return; }
L_001C9444:
    set32(c.r[4], c.r[18].w[0] + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9450u);  if (depth < kMaxDepth) unit_0043(c, 42u, depth + 1u); else { c.pc = 0x0020C920u; return; } if (c.pc != 0x001C9450u) [[unlikely]] return; }
L_001C9450:
    c.f[12] = 0u;
    set32(c.r[4], c.r[18].w[0] + 592u);
    st32((c.r[18].w[0] + 608u), 0u);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9474u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C9474u) [[unlikely]] return; }
L_001C9474:
    st32((c.r[18].w[0] + 300u), c.r[20].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 304u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 664u), c.r[22].w[0]);
    st32((c.r[18].w[0] + 656u), 0u);
    st32((c.r[18].w[0] + 644u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9498u);  if (depth < kMaxDepth) unit_0032(c, 86u, depth + 1u); else { c.pc = 0x001C8EC0u; return; } if (c.pc != 0x001C9498u) [[unlikely]] return; }
L_001C9498:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[18].w[0] + 288u), c.r[23].w[0]);
    st32((c.r[18].w[0] + 676u), c.f[0]);
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
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C94E0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9500u);  if (depth < kMaxDepth) unit_0031(c, 215u, depth + 1u); else { c.pc = 0x001C5E08u; return; } if (c.pc != 0x001C9500u) [[unlikely]] return; }
L_001C9500:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C950Cu);  if (depth < kMaxDepth) unit_0031(c, 255u, depth + 1u); else { c.pc = 0x001C6598u; return; } if (c.pc != 0x001C950Cu) [[unlikely]] return; }
L_001C950C:
    set32(c.r[2], ld32((c.r[16].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9524u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C9524u) [[unlikely]] return; }
L_001C9524:
    st32((c.r[16].w[0] + 656u), 0u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] > 0;  if (t) { goto L_001C9544; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C953Cu);  if (depth < kMaxDepth) unit_0032(c, 344u, depth + 1u); else { c.pc = 0x001CB4A8u; return; } if (c.pc != 0x001C953Cu) [[unlikely]] return; }
L_001C953C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C957C; } }
L_001C9544:
    st32((c.r[16].w[0] + 576u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9558u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001C9558u) [[unlikely]] return; }
L_001C9558:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x477A0000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C957Cu);  if (depth < kMaxDepth) unit_0031(c, 237u, depth + 1u); else { c.pc = 0x001C6218u; return; } if (c.pc != 0x001C957Cu) [[unlikely]] return; }
L_001C957C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9598:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 15u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C9620; } }
    set32(c.r[2], 0u + 44u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C9620; } }
    set32(c.r[2], 0u + 47u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C9620; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C9620; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C9620; } }
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C9620; } }
    set32(c.r[2], 0u + 132u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C9620; } }
    set32(c.r[2], 0u + 144u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C9620; } }
    set32(c.r[2], 0u + 160u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_001C9620; } }
    set32(c.r[2], 0u + 195u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001C963C; } }
L_001C9620:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C962Cu);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C962Cu) [[unlikely]] return; }
L_001C962C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C963Cu);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001C94E0u; return; } if (c.pc != 0x001C963Cu) [[unlikely]] return; }
L_001C963C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9650:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C966Cu);  if (depth < kMaxDepth) unit_0031(c, 234u, depth + 1u); else { c.pc = 0x001C6198u; return; } if (c.pc != 0x001C966Cu) [[unlikely]] return; }
L_001C966C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9694; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9680u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C9680u) [[unlikely]] return; }
L_001C9680:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C968Cu);  if (depth < kMaxDepth) unit_0031(c, 255u, depth + 1u); else { c.pc = 0x001C6598u; return; } if (c.pc != 0x001C968Cu) [[unlikely]] return; }
L_001C968C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9754; } }
L_001C9694:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9704; } }
    c.f[12] = 0u;
    set32(c.r[4], c.r[16].w[0] + 592u);
    st32((c.r[16].w[0] + 608u), 0u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96C0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C96C0u) [[unlikely]] return; }
L_001C96C0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96CCu);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001C96CCu) [[unlikely]] return; }
L_001C96CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x49740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[0] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0] + 72u), 0u);
    set32(c.r[5], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 64u), c.f[0]);
    st32((c.r[29].w[0] + 76u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C96FCu);  if (depth < kMaxDepth) unit_0032(c, 337u, depth + 1u); else { c.pc = 0x001CB3E0u; return; } if (c.pc != 0x001C96FCu) [[unlikely]] return; }
L_001C96FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9754; } }
L_001C9704:
    set32(c.r[4], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C971C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C971Cu);  if (depth < kMaxDepth) unit_0061(c, 40u, depth + 1u); else { c.pc = 0x00284770u; return; } if (c.pc != 0x001C971Cu) [[unlikely]] return; }
L_001C971C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9728u);  if (depth < kMaxDepth) unit_0032(c, 340u, depth + 1u); else { c.pc = 0x001CB438u; return; } if (c.pc != 0x001C9728u) [[unlikely]] return; }
L_001C9728:
    c.f[12] = 0u;
    set32(c.r[4], c.r[16].w[0] + 592u);
    st32((c.r[16].w[0] + 608u), 0u);
    c.f[13] = c.f[12];
    c.f[14] = c.f[12];
    c.f[15] = c.f[12];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9748u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C9748u) [[unlikely]] return; }
L_001C9748:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9754u);  if (depth < kMaxDepth) unit_0031(c, 255u, depth + 1u); else { c.pc = 0x001C6598u; return; } if (c.pc != 0x001C9754u) [[unlikely]] return; }
L_001C9754:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9768:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9790u);  if (depth < kMaxDepth) unit_0031(c, 223u, depth + 1u); else { c.pc = 0x001C5FA8u; return; } if (c.pc != 0x001C9790u) [[unlikely]] return; }
L_001C9790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9810; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 22480u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C97ACu);  if (depth < kMaxDepth) unit_0087(c, 290u, depth + 1u); else { c.pc = 0x0031FFE8u; return; } if (c.pc != 0x001C97ACu) [[unlikely]] return; }
L_001C97AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C97C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[16].w[0] + 676u), c.f[0]);
    c.budget -= 4;
L_001C97C8:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C97E0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C97E0u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C97E0u) [[unlikely]] return; }
L_001C97E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 664u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 380u)));
    st32((c.r[16].w[0] + 668u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 264u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 672u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 656u), 0u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001C9810; } }
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9810u);  if (depth < kMaxDepth) unit_0032(c, 151u, depth + 1u); else { c.pc = 0x001C9768u; return; } if (c.pc != 0x001C9810u) [[unlikely]] return; }
L_001C9810:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9830:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 264u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9868; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9860u);  if (depth < kMaxDepth) unit_0031(c, 240u, depth + 1u); else { c.pc = 0x001C6298u; return; } if (c.pc != 0x001C9860u) [[unlikely]] return; }
L_001C9860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9910; } }
L_001C9868:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9874u);  if (depth < kMaxDepth) unit_0031(c, 318u, depth + 1u); else { c.pc = 0x001C6FD8u; return; } if (c.pc != 0x001C9874u) [[unlikely]] return; }
L_001C9874:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[17].w[0] + 264u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[10], 0u + 1u);
    set32(c.r[7], 0u + 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 6080u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98A0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001C98A0u) [[unlikely]] return; }
L_001C98A0:
    set32(c.r[4], ld32((c.r[17].w[0] + 264u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98B0u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001C98B0u) [[unlikely]] return; }
L_001C98B0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98C4u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001C98C4u) [[unlikely]] return; }
L_001C98C4:
    set32(c.r[6], ld32((c.r[17].w[0] + 672u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[17].w[0] + 264u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = ~(0ull | c.r[6].d[0]);
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98E4u);  if (depth < kMaxDepth) unit_0031(c, 200u, depth + 1u); else { c.pc = 0x001C5BD8u; return; } if (c.pc != 0x001C98E4u) [[unlikely]] return; }
L_001C98E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C98F4u);  if (depth < kMaxDepth) unit_0031(c, 237u, depth + 1u); else { c.pc = 0x001C6218u; return; } if (c.pc != 0x001C98F4u) [[unlikely]] return; }
L_001C98F4:
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 52u));
    c.f[14] = ld32((c.r[29].w[0] + 56u));
    c.f[15] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9910u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001C9910u) [[unlikely]] return; }
L_001C9910:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 688u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C9994; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 688u);
    c.budget -= 2;
L_001C9970:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C997Cu);  if (depth < kMaxDepth) unit_0031(c, 255u, depth + 1u); else { c.pc = 0x001C6598u; return; } if (c.pc != 0x001C997Cu) [[unlikely]] return; }
L_001C997C:
    set32(c.r[16], c.r[16].w[0] + 688u);
    set32(c.r[2], ld32((c.r[17].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9970u | kUnwind; return; } goto L_001C9970; } }
L_001C9994:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 92u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C99ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C99ACu) [[unlikely]] return; }
L_001C99AC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C99D0:
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), 0u);
    c.r[7].d[0] = c.r[29].d[0] | 4ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C99F8u);  if (depth < kMaxDepth) unit_0031(c, 312u, depth + 1u); else { c.pc = 0x001C6DB0u; return; } if (c.pc != 0x001C99F8u) [[unlikely]] return; }
L_001C99F8:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[8], 0u - 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9A2Cu);  if (depth < kMaxDepth) unit_0031(c, 312u, depth + 1u); else { c.pc = 0x001C6DB0u; return; } if (c.pc != 0x001C9A2Cu) [[unlikely]] return; }
L_001C9A2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9A40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24080u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C9B30; } }
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_001C9A80:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_001C9B18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9AA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C9AA4u) [[unlikely]] return; }
L_001C9AA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9B18; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9AB8u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C9AB8u) [[unlikely]] return; }
L_001C9AB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9AC8u);  if (depth < kMaxDepth) unit_0031(c, 256u, depth + 1u); else { c.pc = 0x001C65A8u; return; } if (c.pc != 0x001C9AC8u) [[unlikely]] return; }
L_001C9AC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9AD8u);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001C94E0u; return; } if (c.pc != 0x001C9AD8u) [[unlikely]] return; }
L_001C9AD8:
    set32(c.r[16], ld32((c.r[16].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C9B30; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9AF0u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C9AF0u) [[unlikely]] return; }
L_001C9AF0:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B00u);  if (depth < kMaxDepth) unit_0031(c, 256u, depth + 1u); else { c.pc = 0x001C65A8u; return; } if (c.pc != 0x001C9B00u) [[unlikely]] return; }
L_001C9B00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9B10u);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001C94E0u; return; } if (c.pc != 0x001C9B10u) [[unlikely]] return; }
L_001C9B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9B30; } }
L_001C9B18:
    set32(c.r[2], ld32((c.r[18].w[0] + 24080u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 688u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9A80u | kUnwind; return; } goto L_001C9A80; } }
L_001C9B30:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9B58:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[3].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24080u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001C9C40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[19], 0u + 1536u);
    set32(c.r[20], c.r[2].w[0] - 6944u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_001C9BA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_001C9C28; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9BB8u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C9BB8u) [[unlikely]] return; }
L_001C9BB8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9BC8u);  if (depth < kMaxDepth) unit_0031(c, 256u, depth + 1u); else { c.pc = 0x001C65A8u; return; } if (c.pc != 0x001C9BC8u) [[unlikely]] return; }
L_001C9BC8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9BD8u);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001C94E0u; return; } if (c.pc != 0x001C9BD8u) [[unlikely]] return; }
L_001C9BD8:
    set32(c.r[16], ld32((c.r[16].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001C9C10; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9BF0u);  if (depth < kMaxDepth) unit_0032(c, 227u, depth + 1u); else { c.pc = 0x001CA410u; return; } if (c.pc != 0x001C9BF0u) [[unlikely]] return; }
L_001C9BF0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C00u);  if (depth < kMaxDepth) unit_0031(c, 256u, depth + 1u); else { c.pc = 0x001C65A8u; return; } if (c.pc != 0x001C9C00u) [[unlikely]] return; }
L_001C9C00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9C10u);  if (depth < kMaxDepth) unit_0032(c, 130u, depth + 1u); else { c.pc = 0x001C94E0u; return; } if (c.pc != 0x001C9C10u) [[unlikely]] return; }
L_001C9C10:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] - 968u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9C40; } }
L_001C9C28:
    set32(c.r[2], ld32((c.r[4].w[0] + 24080u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 688u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9BA0u | kUnwind; return; } goto L_001C9BA0; } }
L_001C9C40:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9C68:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 16u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[17], 0u + 688u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24080u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CB0u);  if (depth < kMaxDepth) unit_0032(c, 257u, depth + 1u); else { c.pc = 0x001CA8E8u; return; } if (c.pc != 0x001C9CB0u) [[unlikely]] return; }
L_001C9CB0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C9CF4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9CF4; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9CF4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C9CF4u) [[unlikely]] return; }
L_001C9CF4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9D18:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[18].w[0] + 16u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    set32(c.r[17], 0u + 688u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.f[20] = c.f[12];
    set32(c.r[5], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9D60u);  if (depth < kMaxDepth) unit_0032(c, 257u, depth + 1u); else { c.pc = 0x001CA8E8u; return; } if (c.pc != 0x001C9D60u) [[unlikely]] return; }
L_001C9D60:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C9DBC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9DBC; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[8], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    st32((c.r[7].w[0] - 4900u), c.f[20]);
    st32((c.r[16].w[0] - 4904u), c.r[8].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9DB8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C9DB8u) [[unlikely]] return; }
L_001C9DB8:
    st32((c.r[16].w[0] - 4904u), 0u);
    c.budget -= 1;
L_001C9DBC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9DE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 688u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24080u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E20u);  if (depth < kMaxDepth) unit_0032(c, 257u, depth + 1u); else { c.pc = 0x001CA8E8u; return; } if (c.pc != 0x001C9E20u) [[unlikely]] return; }
L_001C9E20:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001C9E3C; } }
    st32((c.r[3].w[0] + 656u), c.r[18].w[0]);
    c.budget -= 1;
L_001C9E3C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9E58:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[17], 0u + 688u);
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9E90u);  if (depth < kMaxDepth) unit_0032(c, 257u, depth + 1u); else { c.pc = 0x001CA8E8u; return; } if (c.pc != 0x001C9E90u) [[unlikely]] return; }
L_001C9E90:
    set32(c.r[3], ld32((c.r[16].w[0] + 24080u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9EC0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 688u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24080u)));
    st32((c.r[29].w[0]), c.r[5].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] == c.r[17].d[0];  if (t) { goto L_001C9F60; } }
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[20], 0u + 688u);
    c.budget -= 2;
L_001C9F08:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F18u);  if (depth < kMaxDepth) unit_0032(c, 257u, depth + 1u); else { c.pc = 0x001CA8E8u; return; } if (c.pc != 0x001C9F18u) [[unlikely]] return; }
L_001C9F18:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001C9F60; } }
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9F40u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001C9F40u) [[unlikely]] return; }
L_001C9F40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001C9F54; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001C9F64; } }
L_001C9F54:
    set32(c.r[4], c.r[16].w[0] + 688u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9F08u | kUnwind; return; } goto L_001C9F08; } }
L_001C9F60:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001C9F64:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001C9F88:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.budget -= 10;
L_001C9FB0:
    set32(c.r[16], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[19].w[0] - 14960u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9FC4u);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001C9FC4u) [[unlikely]] return; }
L_001C9FC4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001C9FE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001C9FE4u) [[unlikely]] return; }
L_001C9FE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001C9FF8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA00C; } }
L_001C9FF8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001C9FB0u | kUnwind; return; } goto L_001C9FB0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CA00C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[3], 0u + 688u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 14;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CA0AC; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 688u);
    c.budget -= 2;
L_001CA070:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA080u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001CA080u) [[unlikely]] return; }
L_001CA080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA094; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 656u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA0B0; } }
L_001CA094:
    set32(c.r[2], ld32((c.r[17].w[0] + 24080u)));
    set32(c.r[16], c.r[16].w[0] + 688u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA070u | kUnwind; return; } goto L_001CA070; } }
L_001CA0AC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CA0B0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA0D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 688u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_001CA190; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[20], 0u + 688u);
    c.budget -= 4;
L_001CA120:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA130u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001CA130u) [[unlikely]] return; }
L_001CA130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA178; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CA178; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001CA178; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA15Cu);  if (depth < kMaxDepth) unit_008B(c, 341u, depth + 1u); else { c.pc = 0x0032FAE0u; return; } if (c.pc != 0x001CA15Cu) [[unlikely]] return; }
L_001CA15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA174; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[21].w[0] - 11856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA174u);  if (depth < kMaxDepth) unit_008B(c, 350u, depth + 1u); else { c.pc = 0x0032FD08u; return; } if (c.pc != 0x001CA174u) [[unlikely]] return; }
L_001CA174:
    st32((c.r[17].w[0] + 640u), 0u);
    c.budget -= 1;
L_001CA178:
    set32(c.r[2], ld32((c.r[18].w[0] + 24080u)));
    set32(c.r[17], c.r[17].w[0] + 688u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA120u | kUnwind; return; } goto L_001CA120; } }
L_001CA190:
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
L_001CA1B8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 688u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 16;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CA234; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 688u);
    c.budget -= 2;
L_001CA200:
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA210u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001CA210u) [[unlikely]] return; }
L_001CA210:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA21C; } }
    st32((c.r[16].w[0] + 676u), c.f[20]);
    c.budget -= 1;
L_001CA21C:
    set32(c.r[2], ld32((c.r[17].w[0] + 24080u)));
    set32(c.r[16], c.r[16].w[0] + 688u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA200u | kUnwind; return; } goto L_001CA200; } }
L_001CA234:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA258:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 688u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] - 688u);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[19], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA298u);  if (depth < kMaxDepth) unit_0032(c, 78u, depth + 1u); else { c.pc = 0x001C8D48u; return; } if (c.pc != 0x001CA298u) [[unlikely]] return; }
L_001CA298:
    set32(c.r[3], ld32((c.r[17].w[0] + 24080u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[17].w[0] + 24080u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] - 688u);
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_001CA2C4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 380u), c.r[17].w[0]);
    st32((c.r[17].w[0] + 376u), c.r[2].w[0]);
    c.budget -= 3;
L_001CA2C4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA2E8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 4316u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA348; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 6992u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA340; } }
    set32(c.r[4], c.r[16].w[0] - 31104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA338u);  if (depth < kMaxDepth) unit_0031(c, 381u, depth + 1u); else { c.pc = 0x001C7AF0u; return; } if (c.pc != 0x001CA338u) [[unlikely]] return; }
L_001CA338:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 6992u), c.r[2].w[0]);
    c.budget -= 2;
L_001CA340:
    set32(c.r[2], c.r[16].w[0] - 31104u);
    st32((c.r[19].w[0] - 4316u), c.r[2].w[0]);
    c.budget -= 2;
L_001CA348:
    set32(c.r[16], ld32((c.r[19].w[0] - 4316u)));
    set32(c.r[17], 0u + 688u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24080u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA374u);  if (depth < kMaxDepth) unit_0032(c, 283u, depth + 1u); else { c.pc = 0x001CADF0u; return; } if (c.pc != 0x001CA374u) [[unlikely]] return; }
L_001CA374:
    set32(c.r[3], ld32((c.r[16].w[0] + 24080u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA3A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA3CCu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001CA3CCu) [[unlikely]] return; }
L_001CA3CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA3F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA3ECu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001CA3ECu) [[unlikely]] return; }
L_001CA3EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001CA3F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 112u)));
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CA480; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    set32(c.r[4], c.r[4].w[0] - 4576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA43Cu);  if (depth < kMaxDepth) unit_0078(c, 54u, depth + 1u); else { c.pc = 0x002E07B0u; return; } if (c.pc != 0x001CA43Cu) [[unlikely]] return; }
L_001CA43C:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA450u);  if (depth < kMaxDepth) unit_001A(c, 151u, depth + 1u); else { c.pc = 0x00169CB8u; return; } if (c.pc != 0x001CA450u) [[unlikely]] return; }
L_001CA450:
    set32(c.r[4], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA45Cu);  if (depth < kMaxDepth) unit_001B(c, 255u, depth + 1u); else { c.pc = 0x0016F498u; return; } if (c.pc != 0x001CA45Cu) [[unlikely]] return; }
L_001CA45C:
    set32(c.r[4], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[5], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 6944u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] - 968u), c.r[6].w[0]);
    c.budget -= 9;
L_001CA480:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA498:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 688u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 24080u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA4D8u);  if (depth < kMaxDepth) unit_0032(c, 257u, depth + 1u); else { c.pc = 0x001CA8E8u; return; } if (c.pc != 0x001CA4D8u) [[unlikely]] return; }
L_001CA4D8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CA500; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 660u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[18].d[0];  if (t) { goto L_001CA504; } }
L_001CA500:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CA504:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA538u);  if (depth < kMaxDepth) unit_0031(c, 275u, depth + 1u); else { c.pc = 0x001C6878u; return; } if (c.pc != 0x001CA538u) [[unlikely]] return; }
L_001CA538:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] - 19056u);
    st32((c.r[16].w[0] + 496u), c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA550u);  if (depth < kMaxDepth) unit_0031(c, 255u, depth + 1u); else { c.pc = 0x001C6598u; return; } if (c.pc != 0x001CA550u) [[unlikely]] return; }
L_001CA550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 664u), 0u);
    st32((c.r[16].w[0] + 676u), c.f[0]);
    st32((c.r[16].w[0] + 668u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA580:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], 0u + 688u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[4].w[0] + 16u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 15;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_001CA608; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 688u);
    c.budget -= 3;
L_001CA5C8:
    set32(c.r[2], ld32((c.r[20].w[0] - 4312u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA5E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA5F0; } }
L_001CA5E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA5F0u);  if (depth < kMaxDepth) unit_0031(c, 251u, depth + 1u); else { c.pc = 0x001C64B8u; return; } if (c.pc != 0x001CA5F0u) [[unlikely]] return; }
L_001CA5F0:
    set32(c.r[2], ld32((c.r[17].w[0] + 24080u)));
    set32(c.r[16], c.r[16].w[0] + 688u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA5C8u | kUnwind; return; } goto L_001CA5C8; } }
L_001CA608:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] - 4312u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 168u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 172u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA660u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA660u) [[unlikely]] return; }
L_001CA660:
    st32((c.r[16].w[0] - 4312u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA678:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 264u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10090u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001CA6C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6A4u);  if (depth < kMaxDepth) unit_0007(c, 337u, depth + 1u); else { c.pc = 0x0011EC50u; return; } if (c.pc != 0x001CA6A4u) [[unlikely]] return; }
L_001CA6A4:
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 264u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA6C0u) [[unlikely]] return; }
L_001CA6C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA744; } }
L_001CA6C8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], 0u + 90u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6D8u);  if (depth < kMaxDepth) unit_0031(c, 215u, depth + 1u); else { c.pc = 0x001C5E08u; return; } if (c.pc != 0x001CA6D8u) [[unlikely]] return; }
L_001CA6D8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6E4u);  if (depth < kMaxDepth) unit_0031(c, 255u, depth + 1u); else { c.pc = 0x001C6598u; return; } if (c.pc != 0x001CA6E4u) [[unlikely]] return; }
L_001CA6E4:
    set32(c.r[2], ld32((c.r[17].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA6FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA6FCu) [[unlikely]] return; }
L_001CA6FC:
    st32((c.r[17].w[0] + 576u), c.r[16].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0] + 656u), 0u);
    set32(c.r[5], c.r[17].w[0] + 512u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA714u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001CA714u) [[unlikely]] return; }
L_001CA714:
    c.f[0] = ld32((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x477A0000u);
    c.f[1] = c.r[1].w[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA738u);  if (depth < kMaxDepth) unit_0031(c, 237u, depth + 1u); else { c.pc = 0x001C6218u; return; } if (c.pc != 0x001CA738u) [[unlikely]] return; }
L_001CA738:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA748; } }
L_001CA744:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CA748:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA7CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 680u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[5], ld32((c.r[3].w[0] - 4308u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st32((c.r[4].w[0] + 680u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CA7CC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 292u)));
    st32((c.r[4].w[0] + 680u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA7BC; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA7CC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CA7CC; } }
L_001CA7BC:
    set32(c.r[6], c.r[4].w[0] + 272u);
    set32(c.r[4], 0u + 87u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA7CCu);  if (depth < kMaxDepth) unit_0031(c, 208u, depth + 1u); else { c.pc = 0x001C5CC0u; return; } if (c.pc != 0x001CA7CCu) [[unlikely]] return; }
L_001CA7CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA7E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[2].w[0] - 31776u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001CA880; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
L_001CA820:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CA868; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001CA868; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 496u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA854u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CA854u) [[unlikely]] return; }
L_001CA854:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CA868; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA884; } }
L_001CA868:
    set32(c.r[2], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA820u | kUnwind; return; } goto L_001CA820; } }
L_001CA880:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001CA884:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA8A8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001CA8DC; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_001CA8B8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001CA8D0; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA8D0:
    set32(c.r[4], c.r[4].w[0] + 688u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA8B8u | kUnwind; return; } goto L_001CA8B8; } }
L_001CA8DC:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA8E8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001CA91C; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_001CA8F8:
    set32(c.r[2], ld32((c.r[4].w[0] + 264u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001CA910; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA910:
    set32(c.r[4], c.r[4].w[0] + 688u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA8F8u | kUnwind; return; } goto L_001CA8F8; } }
L_001CA91C:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CA928:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 8u);
    set32(c.r[4], c.r[17].w[0] + 8u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CA96C; } }
    st8((c.r[17].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CA974; } }
L_001CA96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CA974u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001CA974u) [[unlikely]] return; }
L_001CA974:
    set32(c.r[2], ld32((c.r[16].w[0] + 264u)));
    set32(c.r[4], c.r[17].w[0] + 272u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[16].w[0] + 272u);
    st32((c.r[17].w[0] + 264u), c.r[2].w[0]);
    set32(c.r[6], c.r[17].w[0] + 384u);
    set32(c.r[7], c.r[16].w[0] + 384u);
    set32(c.r[8], c.r[17].w[0] + 400u);
    set32(c.r[9], c.r[16].w[0] + 400u);
    set32(c.r[10], c.r[17].w[0] + 416u);
    set32(c.r[11], c.r[16].w[0] + 416u);
    set32(c.r[12], c.r[17].w[0] + 432u);
    set32(c.r[13], c.r[16].w[0] + 432u);
    set32(c.r[2], 0u - 1u);
    c.budget -= 15;
L_001CA9B0:
    c.f[0] = ld32((c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CA9B0u | kUnwind; return; } goto L_001CA9B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 288u)));
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    st32((c.r[17].w[0] + 288u), c.r[2].w[0]);
    set32(c.r[7], 0u - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    st32((c.r[17].w[0] + 292u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 296u)));
    st32((c.r[17].w[0] + 296u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 300u)));
    st32((c.r[17].w[0] + 300u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 304u)));
    st32((c.r[17].w[0] + 304u), c.r[3].w[0]);
    ldl(c.r[2], (c.r[16].w[0] + 315u));
    ldr(c.r[2], (c.r[16].w[0] + 308u));
    ldl(c.r[3], (c.r[16].w[0] + 323u));
    ldr(c.r[3], (c.r[16].w[0] + 316u));
    ldl(c.r[14], (c.r[16].w[0] + 331u));
    ldr(c.r[14], (c.r[16].w[0] + 324u));
    ldl(c.r[15], (c.r[16].w[0] + 339u));
    ldr(c.r[15], (c.r[16].w[0] + 332u));
    sdl(c.r[2], (c.r[17].w[0] + 315u));
    sdr(c.r[2], (c.r[17].w[0] + 308u));
    sdl(c.r[3], (c.r[17].w[0] + 323u));
    sdr(c.r[3], (c.r[17].w[0] + 316u));
    sdl(c.r[14], (c.r[17].w[0] + 331u));
    sdr(c.r[14], (c.r[17].w[0] + 324u));
    sdl(c.r[15], (c.r[17].w[0] + 339u));
    sdr(c.r[15], (c.r[17].w[0] + 332u));
    ldl(c.r[2], (c.r[16].w[0] + 347u));
    ldr(c.r[2], (c.r[16].w[0] + 340u));
    ldl(c.r[3], (c.r[16].w[0] + 355u));
    ldr(c.r[3], (c.r[16].w[0] + 348u));
    ldl(c.r[14], (c.r[16].w[0] + 363u));
    ldr(c.r[14], (c.r[16].w[0] + 356u));
    ldl(c.r[15], (c.r[16].w[0] + 371u));
    ldr(c.r[15], (c.r[16].w[0] + 364u));
    sdl(c.r[2], (c.r[17].w[0] + 347u));
    sdr(c.r[2], (c.r[17].w[0] + 340u));
    sdl(c.r[3], (c.r[17].w[0] + 355u));
    sdr(c.r[3], (c.r[17].w[0] + 348u));
    sdl(c.r[14], (c.r[17].w[0] + 363u));
    sdr(c.r[14], (c.r[17].w[0] + 356u));
    sdl(c.r[15], (c.r[17].w[0] + 371u));
    sdr(c.r[15], (c.r[17].w[0] + 364u));
    set32(c.r[2], ld32((c.r[16].w[0] + 372u)));
    st32((c.r[17].w[0] + 372u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 376u)));
    st32((c.r[17].w[0] + 376u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 380u)));
    st32((c.r[17].w[0] + 380u), c.r[2].w[0]);
    c.budget -= 53;
L_001CAAA0:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAAA0u | kUnwind; return; } goto L_001CAAA0; } }
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
L_001CAAD0:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAAD0u | kUnwind; return; } goto L_001CAAD0; } }
    c.r[3].d[0] = c.r[10].d[0] + 0ull;
    c.r[2].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u - 1u);
    c.budget -= 5;
L_001CAB00:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAB00u | kUnwind; return; } goto L_001CAB00; } }
    c.r[3].d[0] = c.r[12].d[0] + 0ull;
    c.r[2].d[0] = c.r[13].d[0] + 0ull;
    set32(c.r[4], 0u + 3u);
    set32(c.r[8], 0u - 1u);
    c.budget -= 5;
L_001CAB30:
    set32(c.r[7], c.r[4].w[0] - 1u);
    set32(c.r[5], c.r[3].w[0] + 16u);
    set32(c.r[6], c.r[2].w[0] + 16u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
L_001CAB40:
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAB40u | kUnwind; return; } goto L_001CAB40; } }
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAB30u | kUnwind; return; } goto L_001CAB30; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAB90:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CABA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CABA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CABB0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CABC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], 0u + 13248u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], ld32((c.r[6].w[0] + 16u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CABECu);  if (depth < kMaxDepth) unit_0032(c, 91u, depth + 1u); else { c.pc = 0x001C8F18u; return; } if (c.pc != 0x001CABECu) [[unlikely]] return; }
L_001CABEC:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CAC0Cu) [[unlikely]] return; }
L_001CAC0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAC20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[5].w[0] - 19280u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC50u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001CAC50u) [[unlikely]] return; }
L_001CAC50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAC64; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CACDC; } }
L_001CAC64:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[18], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] - 4316u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CACAC; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 6992u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CACA4; } }
    set32(c.r[4], c.r[16].w[0] - 31104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAC9Cu);  if (depth < kMaxDepth) unit_0031(c, 381u, depth + 1u); else { c.pc = 0x001C7AF0u; return; } if (c.pc != 0x001CAC9Cu) [[unlikely]] return; }
L_001CAC9C:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 6992u), c.r[2].w[0]);
    c.budget -= 2;
L_001CACA4:
    set32(c.r[2], c.r[16].w[0] - 31104u);
    st32((c.r[19].w[0] - 4316u), c.r[2].w[0]);
    c.budget -= 2;
L_001CACAC:
    set32(c.r[7], ld32((c.r[19].w[0] - 4316u)));
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[7].w[0])));
    set32(c.r[5], c.r[5].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 108u)));
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CACDCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CACDCu) [[unlikely]] return; }
L_001CACDC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAD00:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 4316u)));
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAD60; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[17].w[0] - 6992u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAD58; } }
    set32(c.r[4], c.r[16].w[0] - 31104u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAD50u);  if (depth < kMaxDepth) unit_0031(c, 381u, depth + 1u); else { c.pc = 0x001C7AF0u; return; } if (c.pc != 0x001CAD50u) [[unlikely]] return; }
L_001CAD50:
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] - 6992u), c.r[2].w[0]);
    c.budget -= 2;
L_001CAD58:
    set32(c.r[2], c.r[16].w[0] - 31104u);
    st32((c.r[18].w[0] - 4316u), c.r[2].w[0]);
    c.budget -= 2;
L_001CAD60:
    set32(c.r[16], ld32((c.r[18].w[0] - 4316u)));
    set32(c.r[17], 0u + 688u);
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[5], ld32((c.r[16].w[0] + 24080u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAD94u);  if (depth < kMaxDepth) unit_0032(c, 283u, depth + 1u); else { c.pc = 0x001CADF0u; return; } if (c.pc != 0x001CAD94u) [[unlikely]] return; }
L_001CAD94:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 24080u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_001CADCC; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CADCC; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CADCCu);  if (depth < kMaxDepth) unit_0061(c, 40u, depth + 1u); else { c.pc = 0x00284770u; return; } if (c.pc != 0x001CADCCu) [[unlikely]] return; }
L_001CADCC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CADF0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_001CAE24; } }
    set32(c.r[6], ld32((c.r[6].w[0])));
    c.budget -= 2;
L_001CAE00:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_001CAE18; } }
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAE18:
    set32(c.r[4], c.r[4].w[0] + 688u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CAE00u | kUnwind; return; } goto L_001CAE00; } }
L_001CAE24:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAE30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAE48u);  if (depth < kMaxDepth) unit_0032(c, 71u, depth + 1u); else { c.pc = 0x001C8C70u; return; } if (c.pc != 0x001CAE48u) [[unlikely]] return; }
L_001CAE48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAE58:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAE74u);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001CAE74u) [[unlikely]] return; }
L_001CAE74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAE80u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001CAE80u) [[unlikely]] return; }
L_001CAE80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CAEAC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAEA4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CAEA4u) [[unlikely]] return; }
L_001CAEA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAF64; } }
L_001CAEAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[4], c.r[4].w[0] - 12584u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAEBCu);  if (depth < kMaxDepth) unit_001C(c, 6u, depth + 1u); else { c.pc = 0x001700A8u; return; } if (c.pc != 0x001CAEBCu) [[unlikely]] return; }
L_001CAEBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAF64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[4].w[0] - 19344u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAED4u);  if (depth < kMaxDepth) unit_0088(c, 288u, depth + 1u); else { c.pc = 0x00323520u; return; } if (c.pc != 0x001CAED4u) [[unlikely]] return; }
L_001CAED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CAF64; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001CAF64; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[17].w[0] + 576u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001CAF64; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    set32(c.r[16], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CAF14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF10u);  if (depth < kMaxDepth) unit_0061(c, 38u, depth + 1u); else { c.pc = 0x00284748u; return; } if (c.pc != 0x001CAF10u) [[unlikely]] return; }
L_001CAF10:
    if (c.r[2].d[0] == 0) c.r[16].d[0] = 0ull;
    c.budget -= 1;
L_001CAF14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001CAF58; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 608u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CAF44; } }
    set32(c.r[4], 0u + 50u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], c.r[17].w[0] + 592u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF3Cu);  if (depth < kMaxDepth) unit_0031(c, 208u, depth + 1u); else { c.pc = 0x001C5CC0u; return; } if (c.pc != 0x001CAF3Cu) [[unlikely]] return; }
L_001CAF3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CAF58; } }
L_001CAF44:
    set32(c.r[4], 0u + 50u);
    set32(c.r[5], 0u + 10u);
    set32(c.r[6], c.r[17].w[0] + 560u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF58u);  if (depth < kMaxDepth) unit_0031(c, 208u, depth + 1u); else { c.pc = 0x001C5CC0u; return; } if (c.pc != 0x001CAF58u) [[unlikely]] return; }
L_001CAF58:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAF64u);  if (depth < kMaxDepth) unit_0032(c, 344u, depth + 1u); else { c.pc = 0x001CB4A8u; return; } if (c.pc != 0x001CAF64u) [[unlikely]] return; }
L_001CAF64:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CAF80:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CAFB0u);  if (depth < kMaxDepth) unit_0032(c, 221u, depth + 1u); else { c.pc = 0x001CA2E8u; return; } if (c.pc != 0x001CAFB0u) [[unlikely]] return; }
L_001CAFB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_001CB0E4; } }
    c.f[3] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[18], c.r[17].w[0] + 512u);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[3]);
    st32((c.r[29].w[0] + 28u), c.f[1]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[4], ld32((c.r[19].w[0])));
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB000u);  if (depth < kMaxDepth) unit_0098(c, 257u, depth + 1u); else { c.pc = 0x00362F98u; return; } if (c.pc != 0x001CB000u) [[unlikely]] return; }
L_001CB000:
    set32(c.r[2], 0u + 1u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[17].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 592u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB018u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001CB018u) [[unlikely]] return; }
L_001CB018:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB028u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001CB028u) [[unlikely]] return; }
L_001CB028:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 31776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB03Cu);  if (depth < kMaxDepth) unit_0031(c, 152u, depth + 1u); else { c.pc = 0x001C5490u; return; } if (c.pc != 0x001CB03Cu) [[unlikely]] return; }
L_001CB03C:
    set32(c.r[2], ld32((c.r[17].w[0] + 608u)));
    st32((c.r[17].w[0] + 576u), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB08C; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB05Cu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001CB05Cu) [[unlikely]] return; }
L_001CB05C:
    c.f[0] = ld32((c.r[17].w[0] + 592u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 144u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 596u));
    st32((c.r[29].w[0] + 148u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 600u));
    st32((c.r[29].w[0] + 152u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB084u);  if (depth < kMaxDepth) unit_0031(c, 237u, depth + 1u); else { c.pc = 0x001C6218u; return; } if (c.pc != 0x001CB084u) [[unlikely]] return; }
L_001CB084:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB09C; } }
L_001CB08C:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB09Cu);  if (depth < kMaxDepth) unit_0031(c, 237u, depth + 1u); else { c.pc = 0x001C6218u; return; } if (c.pc != 0x001CB09Cu) [[unlikely]] return; }
L_001CB09C:
    set32(c.r[4], ld32((c.r[17].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CB0E4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB0B4u);  if (depth < kMaxDepth) unit_0061(c, 40u, depth + 1u); else { c.pc = 0x00284770u; return; } if (c.pc != 0x001CB0B4u) [[unlikely]] return; }
L_001CB0B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[7], ld32((c.r[2].w[0] - 4320u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_001CB0E4; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[17].w[0] + 8u);
    set32(c.r[5], ld32((c.r[17].w[0] + 292u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB0E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CB0E4u) [[unlikely]] return; }
L_001CB0E4:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB108:
    set32(c.r[29], c.r[29].w[0] - 416u);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 352u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[2].w[0] + 80u), 0u);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB144u);  if (depth < kMaxDepth) unit_0097(c, 297u, depth + 1u); else { c.pc = 0x0035F330u; return; } if (c.pc != 0x001CB144u) [[unlikely]] return; }
L_001CB144:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB158u);  if (depth < kMaxDepth) unit_0097(c, 297u, depth + 1u); else { c.pc = 0x0035F330u; return; } if (c.pc != 0x001CB158u) [[unlikely]] return; }
L_001CB158:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB16Cu);  if (depth < kMaxDepth) unit_0097(c, 297u, depth + 1u); else { c.pc = 0x0035F330u; return; } if (c.pc != 0x001CB16Cu) [[unlikely]] return; }
L_001CB16C:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB180u);  if (depth < kMaxDepth) unit_0097(c, 297u, depth + 1u); else { c.pc = 0x0035F330u; return; } if (c.pc != 0x001CB180u) [[unlikely]] return; }
L_001CB180:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB194u);  if (depth < kMaxDepth) unit_0097(c, 297u, depth + 1u); else { c.pc = 0x0035F330u; return; } if (c.pc != 0x001CB194u) [[unlikely]] return; }
L_001CB194:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB1A0u);  if (depth < kMaxDepth) unit_0097(c, 298u, depth + 1u); else { c.pc = 0x0035F358u; return; } if (c.pc != 0x001CB1A0u) [[unlikely]] return; }
L_001CB1A0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB27C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18752u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CB1CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 18800u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CB20C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB218; } }
L_001CB1E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 18784u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001CB20C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB218; } }
L_001CB1FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 18776u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CB218; } }
L_001CB20C:
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB224; } }
L_001CB218:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB224u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001CB224u) [[unlikely]] return; }
L_001CB224:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB238u);  if (depth < kMaxDepth) unit_0032(c, 351u, depth + 1u); else { c.pc = 0x001CB588u; return; } if (c.pc != 0x001CB238u) [[unlikely]] return; }
L_001CB238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB27C; } }
L_001CB240:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 18768u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001CB25C; } }
    st8((c.r[29].w[0] + 96u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB268; } }
L_001CB25C:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB268u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001CB268u) [[unlikely]] return; }
L_001CB268:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB27Cu);  if (depth < kMaxDepth) unit_0032(c, 351u, depth + 1u); else { c.pc = 0x001CB588u; return; } if (c.pc != 0x001CB27Cu) [[unlikely]] return; }
L_001CB27C:
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 352u));
    set32(c.r[29], c.r[29].w[0] + 416u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB298:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001CB328; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001CB328; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 6928u);
    set32(c.r[2], c.r[2].w[0] - 18680u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB2D8u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001CB2D8u) [[unlikely]] return; }
L_001CB2D8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18832u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB2F0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001CB2F0u) [[unlikely]] return; }
L_001CB2F0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] - 6912u);
    set32(c.r[2], c.r[2].w[0] - 18728u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB310u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001CB310u) [[unlikely]] return; }
L_001CB310:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18816u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB328u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001CB328u) [[unlikely]] return; }
L_001CB328:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB340:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB350:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB358:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 18680u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB388u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001CB388u) [[unlikely]] return; }
L_001CB388:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18832u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3A0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001CB3A0u) [[unlikely]] return; }
L_001CB3A0:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB3B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 31776u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB3D0u);  if (depth < kMaxDepth) unit_0031(c, 152u, depth + 1u); else { c.pc = 0x001C5490u; return; } if (c.pc != 0x001CB3D0u) [[unlikely]] return; }
L_001CB3D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB3E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[16].w[0] + 608u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 592u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB40Cu);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001CB40Cu) [[unlikely]] return; }
L_001CB40C:
    set32(c.r[4], c.r[16].w[0] + 512u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB41Cu);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001CB41Cu) [[unlikely]] return; }
L_001CB41C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB438:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB450u);  if (depth < kMaxDepth) unit_0031(c, 223u, depth + 1u); else { c.pc = 0x001C5FA8u; return; } if (c.pc != 0x001CB450u) [[unlikely]] return; }
L_001CB450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB490; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 292u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB470; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 576u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001CB490; } }
L_001CB470:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB47Cu);  if (depth < kMaxDepth) unit_0031(c, 226u, depth + 1u); else { c.pc = 0x001C6018u; return; } if (c.pc != 0x001CB47Cu) [[unlikely]] return; }
L_001CB47C:
    set32(c.r[4], c.r[16].w[0] + 512u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB490u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x001CB490u) [[unlikely]] return; }
L_001CB490:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB4A8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[16].w[0] + 576u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 608u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB508; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB4D8u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001CB4D8u) [[unlikely]] return; }
L_001CB4D8:
    c.f[2] = ld32((c.r[16].w[0] + 592u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = ld32((c.r[16].w[0] + 596u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 600u));
    st32((c.r[29].w[0] + 48u), c.f[2]);
    st32((c.r[29].w[0] + 52u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB500u);  if (depth < kMaxDepth) unit_0031(c, 237u, depth + 1u); else { c.pc = 0x001C6218u; return; } if (c.pc != 0x001CB500u) [[unlikely]] return; }
L_001CB500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB518; } }
L_001CB508:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB518u);  if (depth < kMaxDepth) unit_0031(c, 237u, depth + 1u); else { c.pc = 0x001C6218u; return; } if (c.pc != 0x001CB518u) [[unlikely]] return; }
L_001CB518:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 18728u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB558u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x001CB558u) [[unlikely]] return; }
L_001CB558:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 18816u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB570u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x001CB570u) [[unlikely]] return; }
L_001CB570:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB588:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 31928u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.f[2] = ld32((c.r[6].w[0] + 12u));
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    st32((c.r[29].w[0]), c.f[1]);
    st32((c.r[29].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[2]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB5C4u);  if (depth < kMaxDepth) unit_0031(c, 146u, depth + 1u); else { c.pc = 0x001C5398u; return; } if (c.pc != 0x001CB5C4u) [[unlikely]] return; }
L_001CB5C4:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB5D8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x001CB5D8u) [[unlikely]] return; }
L_001CB5D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBFC90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB5F4u);  if (depth < kMaxDepth) unit_0045(c, 20u, depth + 1u); else { c.pc = 0x00214280u; return; } if (c.pc != 0x001CB5F4u) [[unlikely]] return; }
L_001CB5F4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB608u);  if (depth < kMaxDepth) unit_0045(c, 30u, depth + 1u); else { c.pc = 0x00214658u; return; } if (c.pc != 0x001CB608u) [[unlikely]] return; }
L_001CB608:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB61Cu);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x001CB61Cu) [[unlikely]] return; }
L_001CB61C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB638:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB650u);  if (depth < kMaxDepth) unit_0032(c, 324u, depth + 1u); else { c.pc = 0x001CB298u; return; } if (c.pc != 0x001CB650u) [[unlikely]] return; }
L_001CB650:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB660:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 53u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB758; } }
    set32(c.r[2], 0u + 186u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001CB75C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB6BC; } }
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB6D4; } }
L_001CB6BC:
    set32(c.r[6], c.r[5].w[0] + 1u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.f[0] = 0u;
    c.budget -= 6;
L_001CB6D4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[6].w[0] + 148u));
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB6F0u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x001CB6F0u) [[unlikely]] return; }
L_001CB6F0:
    c.f[0] = ld32((c.r[29].w[0]));
    set32(c.r[4], 0u + 60u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[3] = ld32((c.r[16].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 136u));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    st32((c.r[16].w[0] + 128u), c.f[3]);
    st32((c.r[16].w[0] + 136u), c.f[2]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB75C; } }
L_001CB758:
    st16((c.r[16].w[0] + 10052u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_001CB75C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB770:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00730000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[4], c.r[4].w[0] + 24688u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[17], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[17].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB7B4u);  if (depth < kMaxDepth) unit_0097(c, 153u, depth + 1u); else { c.pc = 0x0035D6A8u; return; } if (c.pc != 0x001CB7B4u) [[unlikely]] return; }
L_001CB7B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_001CB990; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB7CCu);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001CB7CCu) [[unlikely]] return; }
L_001CB7CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB80C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12828u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[19].d[0];  if (t) { goto L_001CB80C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 19740u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 296u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 300u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB804u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001CB804u) [[unlikely]] return; }
L_001CB804:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB990; } }
L_001CB80C:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB84C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 55ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB8D0; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB88C; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB980; } }
L_001CB84C:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB954; } }
    c.r[2].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB878; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB8D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB980; } }
L_001CB878:
    set32(c.r[2], 0u + 186u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001CB898; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB980; } }
L_001CB88C:
    st32((c.r[16].w[0] + 28u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB990; } }
L_001CB898:
    st16((c.r[16].w[0] + 654u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 10091u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 185u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB8B0u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x001CB8B0u) [[unlikely]] return; }
L_001CB8B0:
    set32(c.r[2], 0u + 11u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[16].w[0] + 7700u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << (c.r[18].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB8C8u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x001CB8C8u) [[unlikely]] return; }
L_001CB8C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB990; } }
L_001CB8D0:
    set32(c.r[3], c.r[3].w[0] - 53u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CB92C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18448u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001C8000u < 16384u) { entry = entries_0032[(t - 0x001C8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001CB8FC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 60u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB910u);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x001CB910u) [[unlikely]] return; }
L_001CB910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB92C; } }
L_001CB918:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 61u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB92Cu);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x001CB92Cu) [[unlikely]] return; }
L_001CB92C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 10088u));
    set32(c.r[4], 0u + 7u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 10089u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 7700u), c.r[4].w[0]);
    st64((c.r[16].w[0] + 560u), c.r[5].d[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB990; } }
L_001CB954:
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[16].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB968u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x001CB968u) [[unlikely]] return; }
L_001CB968:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB978u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001CB978u) [[unlikely]] return; }
L_001CB978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CB990; } }
L_001CB980:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CB990u);  if (depth < kMaxDepth) unit_0078(c, 113u, depth + 1u); else { c.pc = 0x002E1790u; return; } if (c.pc != 0x001CB990u) [[unlikely]] return; }
L_001CB990:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CB9B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 6896u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001CBA60; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[10], 0u - 10u);
    set32(c.r[9], 0u + 1u);
    set32(c.r[8], 0u - 28u);
    c.budget -= 7;
L_001CB9E0:
    set32(c.r[2], ld32((c.r[6].w[0] - 16088u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CB9F8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBA04; } }
L_001CB9F8:
    set32(c.r[2], ld32((c.r[5].w[0] - 21472u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
L_001CBA04:
    c.r[2].d[0] = c.r[2].d[0] & c.r[10].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CBA4C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001CBA2C; } }
    set32(c.r[2], ld32((c.r[7].w[0] - 6896u)));
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[3].d[0] = 0ull;
    c.budget -= 4;
L_001CBA2C:
    st32((c.r[6].w[0] - 16088u), c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CBA4C; } }
    set32(c.r[3], ld32((c.r[5].w[0] - 21472u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[8].d[0];
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001CBA4C:
    set32(c.r[2], ld32((c.r[7].w[0] - 6896u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CB9E0u | kUnwind; return; } goto L_001CB9E0; } }
L_001CBA60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBA68:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBA9Cu);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x001CBA9Cu) [[unlikely]] return; }
L_001CBA9C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 18136u);
    set32(c.r[17], c.r[17].w[0] - 18088u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 736u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBAD0u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001CBAD0u) [[unlikely]] return; }
L_001CBAD0:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] - 21472u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBAE8u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001CBAE8u) [[unlikely]] return; }
L_001CBAE8:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], 0u + 742u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB08u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001CBB08u) [[unlikely]] return; }
L_001CBB08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] - 21468u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB24u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001CBB24u) [[unlikely]] return; }
L_001CBB24:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] << 4);
    set32(c.r[9], 0u + 748u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBB44u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x001CBB44u) [[unlikely]] return; }
L_001CBB44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[3].w[0] - 21464u);
    st32((c.r[3].w[0] - 21464u), c.r[20].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_001CBBB4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_001CBB70:
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[6].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    st32((c.r[3].w[0]), c.f[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[3].w[0] + 8u), c.f[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBB70u | kUnwind; return; } goto L_001CBB70; } }
L_001CBBB4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBBD8:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001CBBF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 6896u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001CBBF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] - 16088u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001CBC40; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_001CBC28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21472u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBC28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21472u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_001CBC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBC48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16088u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CBC70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 21472u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBC70:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBC80:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBC9Cu);  if (depth < kMaxDepth) unit_0049(c, 102u, depth + 1u); else { c.pc = 0x00225700u; return; } if (c.pc != 0x001CBC9Cu) [[unlikely]] return; }
L_001CBC9C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBCB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 14208u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCD4u);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x002251A0u; return; } if (c.pc != 0x001CBCD4u) [[unlikely]] return; }
L_001CBCD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBCE4u);  if (depth < kMaxDepth) unit_008B(c, 97u, depth + 1u); else { c.pc = 0x0032CC08u; return; } if (c.pc != 0x001CBCE4u) [[unlikely]] return; }
L_001CBCE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 17248u)));
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[2], 0u + 5u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st8((c.r[3].w[0] + 9289u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[6].w[0] - 6896u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 184u), c.f[0]);
    st32((c.r[3].w[0] + 176u), c.f[0]);
    st32((c.r[3].w[0] + 180u), c.f[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBD38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBD40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBD48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], ld32((c.r[3].w[0] + 29820u)));
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CBD98; } }
    set32(c.r[3], 0u + 12u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 13400u);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001CBDA0; } }
L_001CBD98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[18], c.r[2].w[0] + 13384u);
    c.budget -= 2;
L_001CBDA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[19].d[0] = 0ull + 0ull;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001CBE08; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[20], 0u + 1u);
    set32(c.r[16], c.r[22].w[0] - 6888u);
    c.budget -= 4;
L_001CBDC8:
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[5], c.r[21].w[0] - 9648u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBDF0u);  if (depth < kMaxDepth) unit_00DE(c, 81u, depth + 1u); else { c.pc = 0x00478A70u; return; } if (c.pc != 0x001CBDF0u) [[unlikely]] return; }
L_001CBDF0:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    if (c.r[2].d[0] != 0) c.r[19].d[0] = c.r[20].d[0];
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBDC8u | kUnwind; return; } goto L_001CBDC8; } }
L_001CBE08:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { goto L_001CBE50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[2], c.r[2].w[0] - 6888u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1472u);
    set32(c.r[5], 0u + 4u);
    c.budget -= 8;
L_001CBE30:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001CBE30u | kUnwind; return; } goto L_001CBE30; } }
L_001CBE50:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[22].w[0] - 6888u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE64u);  if (depth < kMaxDepth) unit_006B(c, 145u, depth + 1u); else { c.pc = 0x002AECE8u; return; } if (c.pc != 0x001CBE64u) [[unlikely]] return; }
L_001CBE64:
    set32(c.r[5], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE74u);  if (depth < kMaxDepth) unit_006B(c, 145u, depth + 1u); else { c.pc = 0x002AECE8u; return; } if (c.pc != 0x001CBE74u) [[unlikely]] return; }
L_001CBE74:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE88u);  if (depth < kMaxDepth) unit_006B(c, 146u, depth + 1u); else { c.pc = 0x002AED08u; return; } if (c.pc != 0x001CBE88u) [[unlikely]] return; }
L_001CBE88:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBE9Cu);  if (depth < kMaxDepth) unit_006B(c, 146u, depth + 1u); else { c.pc = 0x002AED08u; return; } if (c.pc != 0x001CBE9Cu) [[unlikely]] return; }
L_001CBE9C:
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
L_001CBEC8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[17], c.r[17].w[0] + 176u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBEF0u);  if (depth < kMaxDepth) unit_006B(c, 145u, depth + 1u); else { c.pc = 0x002AECE8u; return; } if (c.pc != 0x001CBEF0u) [[unlikely]] return; }
L_001CBEF0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[16], c.r[16].w[0] + 1376u);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF0Cu);  if (depth < kMaxDepth) unit_006B(c, 146u, depth + 1u); else { c.pc = 0x002AED08u; return; } if (c.pc != 0x001CBF0Cu) [[unlikely]] return; }
L_001CBF0C:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF1Cu);  if (depth < kMaxDepth) unit_006B(c, 145u, depth + 1u); else { c.pc = 0x002AECE8u; return; } if (c.pc != 0x001CBF1Cu) [[unlikely]] return; }
L_001CBF1C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], 0u + 23u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF30u);  if (depth < kMaxDepth) unit_006B(c, 146u, depth + 1u); else { c.pc = 0x002AED08u; return; } if (c.pc != 0x001CBF30u) [[unlikely]] return; }
L_001CBF30:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001CBF48:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF88u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001CBF88u) [[unlikely]] return; }
L_001CBF88:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBF9Cu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001CBF9Cu) [[unlikely]] return; }
L_001CBF9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001CBFA8u);  if (depth < kMaxDepth) unit_0019(c, 238u, depth + 1u); else { c.pc = 0x001667A8u; return; } if (c.pc != 0x001CBFA8u) [[unlikely]] return; }
L_001CBFA8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001CBFF4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001CBFF4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001CBFF4; } }
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3FA60000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    c.budget -= 10;
L_001CBFF4:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_0033(c, 2u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 1;
    [[clang::musttail]] return unit_0033(c, 1u, depth);
}

}
