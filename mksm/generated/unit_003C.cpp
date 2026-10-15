#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003C[4096] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0,
    66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105,
    0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0,
    121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126,
    0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0,
    0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0,
    0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0,
    0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0,
    0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0,
    0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0,
    0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0,
    0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0,
    0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0,
    0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0,
    0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0,
    0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0,
    0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0,
    0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F0000;
    case 2u: goto L_001F0008;
    case 3u: goto L_001F0088;
    case 4u: goto L_001F00BC;
    case 5u: goto L_001F00CC;
    case 6u: goto L_001F00D8;
    case 7u: goto L_001F00FC;
    case 8u: goto L_001F0140;
    case 9u: goto L_001F016C;
    case 10u: goto L_001F0178;
    case 11u: goto L_001F0190;
    case 12u: goto L_001F01FC;
    case 13u: goto L_001F02C4;
    case 14u: goto L_001F02D4;
    case 15u: goto L_001F030C;
    case 16u: goto L_001F0318;
    case 17u: goto L_001F0338;
    case 18u: goto L_001F0344;
    case 19u: goto L_001F0380;
    case 20u: goto L_001F03B0;
    case 21u: goto L_001F03E0;
    case 22u: goto L_001F0418;
    case 23u: goto L_001F0428;
    case 24u: goto L_001F0430;
    case 25u: goto L_001F0438;
    case 26u: goto L_001F0474;
    case 27u: goto L_001F04C0;
    case 28u: goto L_001F04DC;
    case 29u: goto L_001F0580;
    case 30u: goto L_001F05A8;
    case 31u: goto L_001F05CC;
    case 32u: goto L_001F05EC;
    case 33u: goto L_001F05F8;
    case 34u: goto L_001F0620;
    case 35u: goto L_001F0638;
    case 36u: goto L_001F0648;
    case 37u: goto L_001F0680;
    case 38u: goto L_001F06A8;
    case 39u: goto L_001F06B8;
    case 40u: goto L_001F06C4;
    case 41u: goto L_001F06E8;
    case 42u: goto L_001F0728;
    case 43u: goto L_001F0730;
    case 44u: goto L_001F073C;
    case 45u: goto L_001F0760;
    case 46u: goto L_001F079C;
    case 47u: goto L_001F07B8;
    case 48u: goto L_001F07D8;
    case 49u: goto L_001F0808;
    case 50u: goto L_001F0820;
    case 51u: goto L_001F0830;
    case 52u: goto L_001F0840;
    case 53u: goto L_001F0850;
    case 54u: goto L_001F0860;
    case 55u: goto L_001F0898;
    case 56u: goto L_001F08A0;
    case 57u: goto L_001F08BC;
    case 58u: goto L_001F08CC;
    case 59u: goto L_001F08E8;
    case 60u: goto L_001F0904;
    case 61u: goto L_001F0930;
    case 62u: goto L_001F0940;
    case 63u: goto L_001F0950;
    case 64u: goto L_001F0960;
    case 65u: goto L_001F0970;
    case 66u: goto L_001F0980;
    case 67u: goto L_001F0990;
    case 68u: goto L_001F09B0;
    case 69u: goto L_001F0A04;
    case 70u: goto L_001F0A34;
    case 71u: goto L_001F0A4C;
    case 72u: goto L_001F0A54;
    case 73u: goto L_001F0A6C;
    case 74u: goto L_001F0A88;
    case 75u: goto L_001F0AB8;
    case 76u: goto L_001F0AD0;
    case 77u: goto L_001F0B00;
    case 78u: goto L_001F0B18;
    case 79u: goto L_001F0B48;
    case 80u: goto L_001F0B60;
    case 81u: goto L_001F0B88;
    case 82u: goto L_001F0BA0;
    case 83u: goto L_001F0BC8;
    case 84u: goto L_001F0BE0;
    case 85u: goto L_001F0C08;
    case 86u: goto L_001F0C20;
    case 87u: goto L_001F0C40;
    case 88u: goto L_001F0C60;
    case 89u: goto L_001F0C90;
    case 90u: goto L_001F0CA8;
    case 91u: goto L_001F0CD0;
    case 92u: goto L_001F0CE8;
    case 93u: goto L_001F0D10;
    case 94u: goto L_001F0D28;
    case 95u: goto L_001F0D4C;
    case 96u: goto L_001F0D64;
    case 97u: goto L_001F0D88;
    case 98u: goto L_001F0DA0;
    case 99u: goto L_001F0DB8;
    case 100u: goto L_001F0DD8;
    case 101u: goto L_001F0DFC;
    case 102u: goto L_001F0E14;
    case 103u: goto L_001F0E3C;
    case 104u: goto L_001F0E54;
    case 105u: goto L_001F0E7C;
    case 106u: goto L_001F0E94;
    case 107u: goto L_001F0EBC;
    case 108u: goto L_001F0ED4;
    case 109u: goto L_001F0EFC;
    case 110u: goto L_001F0F14;
    case 111u: goto L_001F0F2C;
    case 112u: goto L_001F0F44;
    case 113u: goto L_001F0F5C;
    case 114u: goto L_001F0F74;
    case 115u: goto L_001F0F94;
    case 116u: goto L_001F0FAC;
    case 117u: goto L_001F0FB4;
    case 118u: goto L_001F0FC8;
    case 119u: goto L_001F0FE0;
    case 120u: goto L_001F0FE8;
    case 121u: goto L_001F1000;
    case 122u: goto L_001F1008;
    case 123u: goto L_001F102C;
    case 124u: goto L_001F1044;
    case 125u: goto L_001F1064;
    case 126u: goto L_001F107C;
    case 127u: goto L_001F1084;
    case 128u: goto L_001F109C;
    case 129u: goto L_001F10A4;
    case 130u: goto L_001F10BC;
    case 131u: goto L_001F10C4;
    case 132u: goto L_001F10F4;
    case 133u: goto L_001F110C;
    case 134u: goto L_001F113C;
    case 135u: goto L_001F1154;
    case 136u: goto L_001F117C;
    case 137u: goto L_001F1194;
    case 138u: goto L_001F11B8;
    case 139u: goto L_001F11C0;
    case 140u: goto L_001F11EC;
    case 141u: goto L_001F1204;
    case 142u: goto L_001F1234;
    case 143u: goto L_001F124C;
    case 144u: goto L_001F1274;
    case 145u: goto L_001F128C;
    case 146u: goto L_001F12A4;
    case 147u: goto L_001F12B8;
    case 148u: goto L_001F12D0;
    case 149u: goto L_001F12E8;
    case 150u: goto L_001F1318;
    case 151u: goto L_001F1330;
    case 152u: goto L_001F1348;
    case 153u: goto L_001F1350;
    case 154u: goto L_001F1370;
    case 155u: goto L_001F1378;
    case 156u: goto L_001F1390;
    case 157u: goto L_001F1398;
    case 158u: goto L_001F13B0;
    case 159u: goto L_001F13E0;
    case 160u: goto L_001F13E8;
    case 161u: goto L_001F1408;
    case 162u: goto L_001F1420;
    case 163u: goto L_001F1440;
    case 164u: goto L_001F1760;
    case 165u: goto L_001F1780;
    case 166u: goto L_001F18C0;
    case 167u: goto L_001F190C;
    case 168u: goto L_001F1914;
    case 169u: goto L_001F1924;
    case 170u: goto L_001F1934;
    case 171u: goto L_001F1944;
    case 172u: goto L_001F1954;
    case 173u: goto L_001F1964;
    case 174u: goto L_001F1974;
    case 175u: goto L_001F1984;
    case 176u: goto L_001F1994;
    case 177u: goto L_001F19A4;
    case 178u: goto L_001F19B4;
    case 179u: goto L_001F19C4;
    case 180u: goto L_001F19D4;
    case 181u: goto L_001F19E4;
    case 182u: goto L_001F19F4;
    case 183u: goto L_001F1A04;
    case 184u: goto L_001F1A14;
    case 185u: goto L_001F1A24;
    case 186u: goto L_001F1A34;
    case 187u: goto L_001F1A44;
    case 188u: goto L_001F1A54;
    case 189u: goto L_001F1A64;
    case 190u: goto L_001F1A74;
    case 191u: goto L_001F1A84;
    case 192u: goto L_001F1A94;
    case 193u: goto L_001F1AA4;
    case 194u: goto L_001F1AB4;
    case 195u: goto L_001F1AC4;
    case 196u: goto L_001F1AD4;
    case 197u: goto L_001F1AE4;
    case 198u: goto L_001F1AF4;
    case 199u: goto L_001F1B04;
    case 200u: goto L_001F1B14;
    case 201u: goto L_001F1B24;
    case 202u: goto L_001F1B34;
    case 203u: goto L_001F1B44;
    case 204u: goto L_001F1B54;
    case 205u: goto L_001F1B64;
    case 206u: goto L_001F1B74;
    case 207u: goto L_001F1B84;
    case 208u: goto L_001F1B94;
    case 209u: goto L_001F1BA4;
    case 210u: goto L_001F1BB4;
    case 211u: goto L_001F1BC4;
    case 212u: goto L_001F1BD4;
    case 213u: goto L_001F1BE4;
    case 214u: goto L_001F1BF4;
    case 215u: goto L_001F1C04;
    case 216u: goto L_001F1C14;
    case 217u: goto L_001F1C24;
    case 218u: goto L_001F1C34;
    case 219u: goto L_001F1C44;
    case 220u: goto L_001F1C54;
    case 221u: goto L_001F1C64;
    case 222u: goto L_001F1C74;
    case 223u: goto L_001F1C84;
    case 224u: goto L_001F1C94;
    case 225u: goto L_001F1CA4;
    case 226u: goto L_001F1CB4;
    case 227u: goto L_001F1CC4;
    case 228u: goto L_001F1CD4;
    case 229u: goto L_001F1CE4;
    case 230u: goto L_001F1CF4;
    case 231u: goto L_001F1D04;
    case 232u: goto L_001F1D14;
    case 233u: goto L_001F1D24;
    case 234u: goto L_001F1D34;
    case 235u: goto L_001F1D44;
    case 236u: goto L_001F1D54;
    case 237u: goto L_001F1D64;
    case 238u: goto L_001F1D74;
    case 239u: goto L_001F1D84;
    case 240u: goto L_001F1D94;
    case 241u: goto L_001F1DA4;
    case 242u: goto L_001F1DB4;
    case 243u: goto L_001F1DC4;
    case 244u: goto L_001F1DD4;
    case 245u: goto L_001F1DE4;
    case 246u: goto L_001F1DF4;
    case 247u: goto L_001F1E04;
    case 248u: goto L_001F1E14;
    case 249u: goto L_001F1E24;
    case 250u: goto L_001F1E34;
    case 251u: goto L_001F1E44;
    case 252u: goto L_001F1E54;
    case 253u: goto L_001F1E64;
    case 254u: goto L_001F1E74;
    case 255u: goto L_001F1E84;
    case 256u: goto L_001F1E94;
    case 257u: goto L_001F1EA4;
    case 258u: goto L_001F1EB4;
    case 259u: goto L_001F1EC4;
    case 260u: goto L_001F29D0;
    case 261u: goto L_001F2B60;
    case 262u: goto L_001F2B84;
    case 263u: goto L_001F2B98;
    case 264u: goto L_001F2C88;
    case 265u: goto L_001F2CB8;
    case 266u: goto L_001F2D28;
    case 267u: goto L_001F2D34;
    case 268u: goto L_001F2D40;
    case 269u: goto L_001F2D50;
    case 270u: goto L_001F2DB8;
    case 271u: goto L_001F2DC8;
    case 272u: goto L_001F2DE4;
    case 273u: goto L_001F2E14;
    case 274u: goto L_001F2E20;
    case 275u: goto L_001F2E40;
    case 276u: goto L_001F2E74;
    case 277u: goto L_001F2E88;
    case 278u: goto L_001F2F0C;
    case 279u: goto L_001F2F24;
    case 280u: goto L_001F2F48;
    case 281u: goto L_001F2FA8;
    case 282u: goto L_001F31D0;
    case 283u: goto L_001F3258;
    case 284u: goto L_001F32A4;
    case 285u: goto L_001F32D4;
    case 286u: goto L_001F32FC;
    case 287u: goto L_001F3318;
    case 288u: goto L_001F335C;
    case 289u: goto L_001F3388;
    case 290u: goto L_001F3420;
    case 291u: goto L_001F343C;
    case 292u: goto L_001F3460;
    case 293u: goto L_001F347C;
    case 294u: goto L_001F34BC;
    case 295u: goto L_001F34DC;
    case 296u: goto L_001F3574;
    case 297u: goto L_001F3590;
    case 298u: goto L_001F35B4;
    case 299u: goto L_001F35D0;
    case 300u: goto L_001F3610;
    case 301u: goto L_001F3630;
    case 302u: goto L_001F36C8;
    case 303u: goto L_001F36E4;
    case 304u: goto L_001F3708;
    case 305u: goto L_001F3724;
    case 306u: goto L_001F3764;
    case 307u: goto L_001F3784;
    case 308u: goto L_001F381C;
    case 309u: goto L_001F3838;
    case 310u: goto L_001F385C;
    case 311u: goto L_001F3878;
    case 312u: goto L_001F38B8;
    case 313u: goto L_001F38D8;
    case 314u: goto L_001F3924;
    case 315u: goto L_001F3970;
    case 316u: goto L_001F3990;
    case 317u: goto L_001F39B4;
    case 318u: goto L_001F39D0;
    case 319u: goto L_001F3A1C;
    case 320u: goto L_001F3A3C;
    case 321u: goto L_001F3A88;
    case 322u: goto L_001F3ABC;
    case 323u: goto L_001F3ADC;
    case 324u: goto L_001F3B00;
    case 325u: goto L_001F3B1C;
    case 326u: goto L_001F3B68;
    case 327u: goto L_001F3B88;
    case 328u: goto L_001F3BD4;
    case 329u: goto L_001F3C08;
    case 330u: goto L_001F3C28;
    case 331u: goto L_001F3C4C;
    case 332u: goto L_001F3C68;
    case 333u: goto L_001F3CB4;
    case 334u: goto L_001F3CD4;
    case 335u: goto L_001F3D20;
    case 336u: goto L_001F3D54;
    case 337u: goto L_001F3D74;
    case 338u: goto L_001F3D98;
    case 339u: goto L_001F3DB4;
    case 340u: goto L_001F3E00;
    case 341u: goto L_001F3E20;
    case 342u: goto L_001F3E6C;
    case 343u: goto L_001F3EA0;
    case 344u: goto L_001F3EC0;
    case 345u: goto L_001F3EE4;
    case 346u: goto L_001F3F00;
    case 347u: goto L_001F3F4C;
    case 348u: goto L_001F3F6C;
    case 349u: goto L_001F3FB8;
    default: bad_entry(c, 0x001F0000u); return;
    }
L_001F0000:
    c.budget -= 1;
    c.pc = 0x001F0004u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001F0008:
    set32(c.r[29], c.r[29].w[0] - 224u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[20]);
    c.r[30].d[0] = c.r[11].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[29].w[0] + 36u), c.r[10].w[0]);
    set32(c.r[21], ld32((c.r[29].w[0] + 288u)));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0088u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x001F0088u) [[unlikely]] return; }
L_001F0088:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001F00AC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F00AC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 920u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001F0344; } }
L_001F00AC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12320u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00BCu);  if (depth < kMaxDepth) unit_006C(c, 240u, depth + 1u); else { c.pc = 0x002B2980u; return; } if (c.pc != 0x001F00BCu) [[unlikely]] return; }
L_001F00BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00CCu);  if (depth < kMaxDepth) unit_0010(c, 309u, depth + 1u); else { c.pc = 0x00143B18u; return; } if (c.pc != 0x001F00CCu) [[unlikely]] return; }
L_001F00CC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00D8u);  if (depth < kMaxDepth) unit_009B(c, 416u, depth + 1u); else { c.pc = 0x0036F570u; return; } if (c.pc != 0x001F00D8u) [[unlikely]] return; }
L_001F00D8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F0110; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 724u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F00FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F00FCu) [[unlikely]] return; }
L_001F00FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0110; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0344; } }
L_001F0110:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001F0128; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10079u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F0344; } }
L_001F0128:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0140u);  if (depth < kMaxDepth) unit_0089(c, 23u, depth + 1u); else { c.pc = 0x003245E8u; return; } if (c.pc != 0x001F0140u) [[unlikely]] return; }
L_001F0140:
    c.r[20].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 7700u)));
    set32(c.r[2], 0u + 142u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F016C; } }
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F016Cu);  if (depth < kMaxDepth) unit_0080(c, 176u, depth + 1u); else { c.pc = 0x00302C48u; return; } if (c.pc != 0x001F016Cu) [[unlikely]] return; }
L_001F016C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0178u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x001F0178u) [[unlikely]] return; }
L_001F0178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F01EC; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0190u);  if (depth < kMaxDepth) unit_0093(c, 94u, depth + 1u); else { c.pc = 0x0034D360u; return; } if (c.pc != 0x001F0190u) [[unlikely]] return; }
L_001F0190:
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    set32(c.r[3], 0u + 1u);
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[2] = c.r[30].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.f[20] = ld32((c.r[29].w[0] + 224u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 212u), c.f[2]);
    set32(c.r[2], 0u + 9u);
    set32(c.r[21], ld32((c.r[29].w[0] + 232u)));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 7700u), c.r[2].w[0]);
    set32(c.r[20], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 23;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0268; } }
L_001F01EC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F01FCu);  if (depth < kMaxDepth) unit_0093(c, 94u, depth + 1u); else { c.pc = 0x0034D360u; return; } if (c.pc != 0x001F01FCu) [[unlikely]] return; }
L_001F01FC:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 13ll ? 1ull : 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0224; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 264u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
L_001F0224:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F0278; } }
    set32(c.r[2], 0u - c.r[3].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 132u));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], 0u + 1u);
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[2], 0u + 9u);
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[17].w[0] + 212u), c.f[2]);
    st32((c.r[17].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 15;
L_001F0268:
    st32((c.r[17].w[0] + 132u), c.f[0]);
    st64((c.r[17].w[0] + 560u), 0ull);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0280; } }
L_001F0278:
    set32(c.r[2], 0u + 12u);
    st32((c.r[17].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 2;
L_001F0280:
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[2] = ld32((c.r[17].w[0] + 128u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.f[3] = ld32((c.r[17].w[0] + 132u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[3]);
    set32(c.r[6], ld32((c.r[29].w[0] + 280u)));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02C4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x001F02C4u) [[unlikely]] return; }
L_001F02C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F02D4u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x001F02D4u) [[unlikely]] return; }
L_001F02D4:
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.f[13] = ld32((c.r[29].w[0] + 24u));
    c.f[1] = fp::mul(c.f[12], c.f[20]);
    set32(c.r[3], ld32((c.r[2].w[0] + 23800u)));
    c.f[0] = fp::mul(c.f[13], c.f[20]);
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(c.r[21].w[0]));
    st16((c.r[17].w[0] + 7676u), static_cast<std::uint16_t>(c.r[20].w[0]));
    st32((c.r[17].w[0] + 208u), c.f[1]);
    st32((c.r[17].w[0] + 216u), c.f[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F0328; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F030Cu);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x001F030Cu) [[unlikely]] return; }
L_001F030C:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0318u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x001F0318u) [[unlikely]] return; }
L_001F0318:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_001F0328:
    set32(c.r[4], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << (c.r[18].w[0] & 31u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0338u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x001F0338u) [[unlikely]] return; }
L_001F0338:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0344u);  if (depth < kMaxDepth) unit_0093(c, 104u, depth + 1u); else { c.pc = 0x0034D498u; return; } if (c.pc != 0x001F0344u) [[unlikely]] return; }
L_001F0344:
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
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0380:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24008u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 23864u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F03B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], 0u + 48u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 24008u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 23864u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[2].w[0] + 23816u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 11u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 12;
L_001F03E0:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F03F8; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.r[8].d[0] = c.r[8].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_001F03F8:
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F03E0u | kUnwind; return; } goto L_001F03E0; } }
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0418:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0438:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 6168u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0474u);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001F0474u) [[unlikely]] return; }
L_001F0474:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0584; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[4], 0u + 13248u);
    c.f[1] = ld32((c.r[16].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[2] = ld32((c.r[16].w[0] + 12u));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    set32(c.r[20], c.r[29].w[0] + 80u);
    st32((c.r[20].w[0] + 4u), c.f[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[20].w[0] + 8u), c.f[2]);
    st32((c.r[20].w[0] + 12u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F04C0u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x001F04C0u) [[unlikely]] return; }
L_001F04C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F04E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 16760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F04DCu);  if (depth < kMaxDepth) unit_006E(c, 26u, depth + 1u); else { c.pc = 0x002B84C8u; return; } if (c.pc != 0x001F04DCu) [[unlikely]] return; }
L_001F04DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0584; } }
L_001F04E4:
    set32(c.r[5], ld32((c.r[18].w[0] + 4u)));
    c.r[24].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0504; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 60u)));
    c.r[24].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
L_001F0504:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 23800u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 16u)));
    c.f[12] = ld32((c.r[2].w[0] + 12u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[18], ld32((c.r[2].w[0] + 56u)));
    set32(c.r[16], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[15], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[14], ld32((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[12], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[13], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 16u)));
    set32(c.r[9], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[10], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[11], ld32((c.r[2].w[0] + 28u)));
    st32((c.r[29].w[0]), c.r[16].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[15].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[14].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 48u), c.r[18].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[24].w[0]);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0580u);  if (depth < kMaxDepth) unit_003C(c, 2u, depth + 1u); else { c.pc = 0x001F0008u; return; } if (c.pc != 0x001F0580u) [[unlikely]] return; }
L_001F0580:
    st32((c.r[17].w[0] + 23800u), 0u);
    c.budget -= 1;
L_001F0584:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 192u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F05A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 6168u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F05CCu);  if (depth < kMaxDepth) unit_00DD(c, 65u, depth + 1u); else { c.pc = 0x00474C78u; return; } if (c.pc != 0x001F05CCu) [[unlikely]] return; }
L_001F05CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F0604; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F05ECu);  if (depth < kMaxDepth) unit_0060(c, 251u, depth + 1u); else { c.pc = 0x00283B50u; return; } if (c.pc != 0x001F05ECu) [[unlikely]] return; }
L_001F05EC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F05F8u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x001F05F8u) [[unlikely]] return; }
L_001F05F8:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0608; } }
L_001F0604:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F0608:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0638u);  if (depth < kMaxDepth) unit_003B(c, 164u, depth + 1u); else { c.pc = 0x001EE718u; return; } if (c.pc != 0x001F0638u) [[unlikely]] return; }
L_001F0638:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0648:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 2552u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[6], 0u + 2336u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0680u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x001F0680u) [[unlikely]] return; }
L_001F0680:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[6], 0u + 152u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 2456u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06A8u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x001F06A8u) [[unlikely]] return; }
L_001F06A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[18], c.r[2].w[0] - 2504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06B8u);  if (depth < kMaxDepth) unit_0012(c, 100u, depth + 1u); else { c.pc = 0x00148F28u; return; } if (c.pc != 0x001F06B8u) [[unlikely]] return; }
L_001F06B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F06C4u);  if (depth < kMaxDepth) unit_0012(c, 101u, depth + 1u); else { c.pc = 0x00148F38u; return; } if (c.pc != 0x001F06C4u) [[unlikely]] return; }
L_001F06C4:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001F0708; } }
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0708; } }
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001F06E8:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F06E8u | kUnwind; return; } goto L_001F06E8; } }
L_001F0708:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 64u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] - 2408u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0728u);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x001F0728u) [[unlikely]] return; }
L_001F0728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0730u);  if (depth < kMaxDepth) unit_0012(c, 196u, depth + 1u); else { c.pc = 0x00149640u; return; } if (c.pc != 0x001F0730u) [[unlikely]] return; }
L_001F0730:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F073Cu);  if (depth < kMaxDepth) unit_0012(c, 197u, depth + 1u); else { c.pc = 0x00149650u; return; } if (c.pc != 0x001F073Cu) [[unlikely]] return; }
L_001F073C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_001F0780; } }
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0780; } }
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 1;
L_001F0760:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[3].d[0] = c.r[7].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[6].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0760u | kUnwind; return; } goto L_001F0760; } }
L_001F0780:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 30u);
    c.r[7].d[0] = 0ull | 32768ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F079Cu);  if (depth < kMaxDepth) unit_0042(c, 249u, depth + 1u); else { c.pc = 0x0020BEB0u; return; } if (c.pc != 0x001F079Cu) [[unlikely]] return; }
L_001F079C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F07B8:
    set32(c.r[7], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F07F8; } }
    set32(c.r[8], 0u + 1u);
    c.r[2].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F07F8; } }
    set32(c.r[6], c.r[4].w[0] + 4u);
    c.budget -= 1;
L_001F07D8:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[3].d[0] = c.r[8].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[7].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[7].d[0] = c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F07D8u | kUnwind; return; } goto L_001F07D8; } }
L_001F07F8:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0808:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 2552u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0820u);  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C4D0u; return; } if (c.pc != 0x001F0820u) [[unlikely]] return; }
L_001F0820:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[4], c.r[4].w[0] - 2456u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0830u);  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C4D0u; return; } if (c.pc != 0x001F0830u) [[unlikely]] return; }
L_001F0830:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[4], c.r[4].w[0] - 2504u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0840u);  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C4D0u; return; } if (c.pc != 0x001F0840u) [[unlikely]] return; }
L_001F0840:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[4], c.r[4].w[0] - 2408u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0850u);  if (depth < kMaxDepth) unit_0043(c, 17u, depth + 1u); else { c.pc = 0x0020C4D0u; return; } if (c.pc != 0x001F0850u) [[unlikely]] return; }
L_001F0850:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 6u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F0918; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + 10368u);
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_001F0918; } }
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001F0898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08A0u);  if (depth < kMaxDepth) unit_0036(c, 198u, depth + 1u); else { c.pc = 0x001D98C8u; return; } if (c.pc != 0x001F08A0u) [[unlikely]] return; }
L_001F08A0:
    set32(c.r[3], ld32((c.r[2].w[0] + 2504u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F08BCu) [[unlikely]] return; }
L_001F08BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F0904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08CCu);  if (depth < kMaxDepth) unit_0036(c, 198u, depth + 1u); else { c.pc = 0x001D98C8u; return; } if (c.pc != 0x001F08CCu) [[unlikely]] return; }
L_001F08CC:
    set32(c.r[3], ld32((c.r[2].w[0] + 2504u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F08E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F08E8u) [[unlikely]] return; }
L_001F08E8:
    set32(c.r[3], ld32((c.r[2].w[0] + 128u)));
    set32(c.r[5], 0u + 14u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0904u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F0904u) [[unlikely]] return; }
L_001F0904:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F0898u | kUnwind; return; } goto L_001F0898; } }
L_001F0918:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0930:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0940:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0950:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0960:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0970:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0980:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F0990:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] + 10384u);
    set32(c.r[2], ld32((c.r[3].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    st32((c.r[3].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F09B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 24u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[16], 0u + 13248u);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 27456u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] - 2824u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 24u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 13228u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A04u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001F0A04u) [[unlikely]] return; }
L_001F0A04:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    st32((c.r[16].w[0] + 13232u), 0u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(91ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F1408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12128u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_003C[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F0A34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32384u);
    set32(c.r[6], 0u + 40u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A4Cu);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F0A4Cu) [[unlikely]] return; }
L_001F0A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F0A54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32544u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0A6Cu);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F0A6Cu) [[unlikely]] return; }
L_001F0A6C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9944u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0A88:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 10040u);
    set32(c.r[17], c.r[17].w[0] + 11856u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0AB8u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0AB8u) [[unlikely]] return; }
L_001F0AB8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0AD0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    set32(c.r[17], c.r[17].w[0] + 11864u);
    set32(c.r[16], c.r[16].w[0] + 11880u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B00u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0B00u) [[unlikely]] return; }
L_001F0B00:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0B18:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 11896u);
    set32(c.r[17], c.r[17].w[0] + 11904u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B48u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0B48u) [[unlikely]] return; }
L_001F0B48:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0B60:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 11912u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0B88u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0B88u) [[unlikely]] return; }
L_001F0B88:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0BA0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 11928u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0BC8u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0BC8u) [[unlikely]] return; }
L_001F0BC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0BE0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 11936u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C08u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0C08u) [[unlikely]] return; }
L_001F0C08:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0C20:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C40u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0C40u) [[unlikely]] return; }
L_001F0C40:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 11056u);
    set32(c.r[6], c.r[6].w[0] + 11064u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0C60:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    set32(c.r[17], c.r[17].w[0] + 11944u);
    set32(c.r[16], c.r[16].w[0] + 11960u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0C90u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0C90u) [[unlikely]] return; }
L_001F0C90:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0CA8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    set32(c.r[16], c.r[16].w[0] + 11976u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0CD0u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0CD0u) [[unlikely]] return; }
L_001F0CD0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0CE8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 10040u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D10u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0D10u) [[unlikely]] return; }
L_001F0D10:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0D28:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 11992u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D4Cu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0D4Cu) [[unlikely]] return; }
L_001F0D4C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0D64:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 12000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0D88u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0D88u) [[unlikely]] return; }
L_001F0D88:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0DA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] + 32576u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DB8u);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F0DB8u) [[unlikely]] return; }
L_001F0DB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 10032u);
    set32(c.r[6], c.r[6].w[0] + 10040u);
    set32(c.r[7], c.r[7].w[0] + 10048u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13C8; } }
L_001F0DD8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 12000u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0DFCu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0DFCu) [[unlikely]] return; }
L_001F0DFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0E14:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 12008u);
    set32(c.r[6], c.r[6].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0E3Cu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0E3Cu) [[unlikely]] return; }
L_001F0E3C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0E54:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 12008u);
    set32(c.r[6], c.r[6].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0E7Cu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0E7Cu) [[unlikely]] return; }
L_001F0E7C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0E94:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 10032u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EBCu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0EBCu) [[unlikely]] return; }
L_001F0EBC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0ED4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 10032u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0EFCu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F0EFCu) [[unlikely]] return; }
L_001F0EFC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0F14:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    set32(c.r[7], c.r[7].w[0] + 12016u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F11A4; } }
L_001F0F2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    set32(c.r[7], c.r[7].w[0] + 12032u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F11A4; } }
L_001F0F44:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    set32(c.r[7], c.r[7].w[0] + 11432u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F11A4; } }
L_001F0F5C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 32592u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0F74u);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F0F74u) [[unlikely]] return; }
L_001F0F74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 10064u);
    set32(c.r[6], c.r[6].w[0] + 10080u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F0F94:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32616u);
    set32(c.r[6], 0u + 35u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FACu);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F0FACu) [[unlikely]] return; }
L_001F0FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F0FB4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 32760u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F0FF4; } }
L_001F0FC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32608u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F0FE0u);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F0FE0u) [[unlikely]] return; }
L_001F0FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F0FE8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32592u);
    c.budget -= 3;
L_001F0FF4:
    set32(c.r[6], 0u + 41u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1000u);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F1000u) [[unlikely]] return; }
L_001F1000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F1008:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    set32(c.r[6], c.r[6].w[0] + 11056u);
    set32(c.r[7], c.r[7].w[0] + 11064u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F11AC; } }
L_001F102C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] - 32424u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1044u);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F1044u) [[unlikely]] return; }
L_001F1044:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 10064u);
    set32(c.r[6], c.r[6].w[0] + 10080u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F1064:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32400u);
    set32(c.r[6], 0u + 14u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F107Cu);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F107Cu) [[unlikely]] return; }
L_001F107C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F1084:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32344u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F109Cu);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F109Cu) [[unlikely]] return; }
L_001F109C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F10A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32336u);
    set32(c.r[6], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10BCu);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F10BCu) [[unlikely]] return; }
L_001F10BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F10C4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 11832u);
    set32(c.r[17], c.r[17].w[0] + 11840u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F10F4u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F10F4u) [[unlikely]] return; }
L_001F10F4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F110C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 12048u);
    set32(c.r[17], c.r[17].w[0] + 12056u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F113Cu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F113Cu) [[unlikely]] return; }
L_001F113C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F1154:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 12064u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F117Cu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F117Cu) [[unlikely]] return; }
L_001F117C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F1194:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    set32(c.r[7], c.r[7].w[0] + 12080u);
    c.budget -= 4;
L_001F11A4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_001F11AC:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11B8u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F11B8u) [[unlikely]] return; }
L_001F11B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F11C0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 11976u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[17].w[0] + 9344u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F11ECu);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F11ECu) [[unlikely]] return; }
L_001F11EC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F1204:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 12088u);
    set32(c.r[17], c.r[17].w[0] + 12104u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1234u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F1234u) [[unlikely]] return; }
L_001F1234:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F124C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 9944u);
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1274u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F1274u) [[unlikely]] return; }
L_001F1274:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F128C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 42u);
    set32(c.r[5], c.r[5].w[0] - 32272u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12A4u);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F12A4u) [[unlikely]] return; }
L_001F12A4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 10448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12B8u);  if (depth < kMaxDepth) unit_0034(c, 4u, depth + 1u); else { c.pc = 0x001D00C8u; return; } if (c.pc != 0x001F12B8u) [[unlikely]] return; }
L_001F12B8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 11296u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F12D0u);  if (depth < kMaxDepth) unit_0034(c, 4u, depth + 1u); else { c.pc = 0x001D00C8u; return; } if (c.pc != 0x001F12D0u) [[unlikely]] return; }
L_001F12D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F12E8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 11056u);
    set32(c.r[17], c.r[17].w[0] + 11064u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1318u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F1318u) [[unlikely]] return; }
L_001F1318:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F13CC; } }
L_001F1330:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 32104u);
    set32(c.r[6], 0u + 44u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1348u);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F1348u) [[unlikely]] return; }
L_001F1348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F1350:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1370u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F1370u) [[unlikely]] return; }
L_001F1370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F1378:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31928u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1390u);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F1390u) [[unlikely]] return; }
L_001F1390:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F1398:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[5], c.r[5].w[0] - 31880u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F13B0u);  if (depth < kMaxDepth) unit_0033(c, 144u, depth + 1u); else { c.pc = 0x001CDF88u; return; } if (c.pc != 0x001F13B0u) [[unlikely]] return; }
L_001F13B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 11832u);
    set32(c.r[6], c.r[6].w[0] + 11840u);
    set32(c.r[7], c.r[7].w[0] + 11848u);
    c.budget -= 6;
L_001F13C8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001F13CC:
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F13E0u);  if (depth < kMaxDepth) unit_0033(c, 124u, depth + 1u); else { c.pc = 0x001CDA08u; return; } if (c.pc != 0x001F13E0u) [[unlikely]] return; }
L_001F13E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F1408; } }
L_001F13E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 9328u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1408u);  if (depth < kMaxDepth) unit_0033(c, 131u, depth + 1u); else { c.pc = 0x001CDCD0u; return; } if (c.pc != 0x001F1408u) [[unlikely]] return; }
L_001F1408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 9344u);
    set32(c.r[6], 0u + 66u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1420u);  if (depth < kMaxDepth) unit_0033(c, 310u, depth + 1u); else { c.pc = 0x001CFEE0u; return; } if (c.pc != 0x001F1420u) [[unlikely]] return; }
L_001F1420:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1440:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[10], c.r[7].w[0] - 17232u);
    st32((c.r[7].w[0] - 17232u), c.r[4].w[0]);
    set32(c.r[2], c.r[10].w[0] + 4u);
    set32(c.r[6], 0u + 100u);
    set32(c.r[3], 0u + 50u);
    st32((c.r[2].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], 0u + 666u);
    set32(c.r[8], 0u + 500u);
    set32(c.r[9], 0u + 667u);
    set32(c.r[12], 0u + 250u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[11], 0u + 20u);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    set32(c.r[7], 0u + 70u);
    st32((c.r[2].w[0] + 16u), c.r[8].w[0]);
    set32(c.r[4], c.r[10].w[0] + 368u);
    st32((c.r[2].w[0] + 20u), c.r[8].w[0]);
    set32(c.r[6], 0u + 10u);
    st32((c.r[2].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 88u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[12].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 124u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 132u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 136u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 144u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 148u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 152u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 156u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 160u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 164u), 0u);
    st32((c.r[2].w[0] + 168u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 172u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 176u), 0u);
    st32((c.r[2].w[0] + 180u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 184u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 188u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 200u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 204u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 208u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 212u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 216u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 220u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 224u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 228u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 232u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 236u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 244u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 248u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 252u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 256u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 360u), c.r[3].w[0]);
    st32((c.r[10].w[0] + 368u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 24u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 268u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 280u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 284u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 296u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 300u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 320u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 324u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 328u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 332u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 336u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 340u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 344u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 348u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 356u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[12].w[0]);
    st32((c.r[4].w[0] + 140u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 44u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 68u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 72u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 88u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 124u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 132u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 136u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 144u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 156u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 160u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 164u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 168u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 172u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 176u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 184u), c.r[11].w[0]);
    st32((c.r[4].w[0] + 280u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 180u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 188u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 192u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 196u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 200u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 204u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 208u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 212u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 216u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 220u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 224u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 228u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 232u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 236u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 244u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 248u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 252u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 256u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 268u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 272u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 276u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 284u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 288u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 292u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 296u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 300u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 304u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 308u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 360u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 324u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 312u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 316u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 320u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 328u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 332u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 336u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 340u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 344u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 348u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 352u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 356u), c.r[3].w[0]);
    c.budget -= 199;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F1760:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], 0u + 880u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], c.r[7].w[0] - 4440u);
    set32(c.r[4], 0u + 219u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 876u);
    c.budget -= 8;
L_001F1780:
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F1780u | kUnwind; return; } goto L_001F1780; } }
    set32(c.r[4], 0u + 880u);
    set32(c.r[5], c.r[7].w[0] - 4440u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 4u);
    set32(c.r[8], 0u + 5u);
    set32(c.r[13], 0u + 6u);
    set32(c.r[9], 0u + 7u);
    set32(c.r[10], 0u + 11u);
    set32(c.r[11], 0u + 185u);
    set32(c.r[12], 0u + 60u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[3].w[0] + 328u), c.r[8].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[6].w[0] + 340u), c.r[13].w[0]);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0] + 40u), c.r[9].w[0]);
    set32(c.r[8], 0u + 12u);
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[9], 0u + 14u);
    st32((c.r[6].w[0] + 36u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 44u), c.r[11].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[12].w[0]);
    set32(c.r[2], 0u + 191u);
    st32((c.r[6].w[0] + 368u), c.r[2].w[0]);
    set32(c.r[3], 0u + 192u);
    st32((c.r[7].w[0] + 372u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], 0u + 28u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 380u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 384u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 388u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 392u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 424u), c.r[8].w[0]);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 428u), c.r[9].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[6].w[0] + 568u), c.r[3].w[0]);
    set32(c.r[2], 0u + 18u);
    st32((c.r[7].w[0] + 572u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], 0u + 8u);
    st32((c.r[3].w[0] + 576u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 592u), c.r[8].w[0]);
    set32(c.r[2], 0u + 13u);
    st32((c.r[7].w[0] + 596u), c.r[2].w[0]);
    set32(c.r[8], 0u + 9u);
    st32((c.r[3].w[0] + 600u), c.r[9].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0] + 612u), c.r[13].w[0]);
    st32((c.r[3].w[0] + 820u), c.r[8].w[0]);
    set32(c.r[2], 0u + 29u);
    st32((c.r[6].w[0] + 696u), c.r[2].w[0]);
    set32(c.r[3], 0u + 30u);
    st32((c.r[7].w[0] + 676u), c.r[3].w[0]);
    set32(c.r[2], 0u + 31u);
    st32((c.r[6].w[0] + 680u), c.r[2].w[0]);
    set32(c.r[3], 0u + 32u);
    st32((c.r[7].w[0] + 684u), c.r[3].w[0]);
    set32(c.r[2], 0u + 128u);
    st32((c.r[6].w[0] + 632u), c.r[2].w[0]);
    set32(c.r[3], 0u + 37u);
    st32((c.r[7].w[0] + 628u), c.r[3].w[0]);
    set32(c.r[2], 0u + 34u);
    st32((c.r[6].w[0] + 180u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], 0u + 36u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 852u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 800u), c.r[8].w[0]);
    c.budget -= 74;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F18C0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[6].d[0] = c.r[6].d[0] | 14544ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[16].w[0] - 4440u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    set32(c.r[5], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F190Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x001F190Cu) [[unlikely]] return; }
L_001F190C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1914u);  if (depth < kMaxDepth) unit_003C(c, 163u, depth + 1u); else { c.pc = 0x001F1440u; return; } if (c.pc != 0x001F1914u) [[unlikely]] return; }
L_001F1914:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 194u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1924u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1924u) [[unlikely]] return; }
L_001F1924:
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 375u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1934u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1934u) [[unlikely]] return; }
L_001F1934:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 539u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1944u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1944u) [[unlikely]] return; }
L_001F1944:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 566u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1954u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1954u) [[unlikely]] return; }
L_001F1954:
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 588u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1964u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1964u) [[unlikely]] return; }
L_001F1964:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1974u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1974u) [[unlikely]] return; }
L_001F1974:
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 625u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1984u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1984u) [[unlikely]] return; }
L_001F1984:
    set32(c.r[4], 0u + 7u);
    set32(c.r[5], 0u + 626u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1994u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1994u) [[unlikely]] return; }
L_001F1994:
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 636u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19A4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F19A4u) [[unlikely]] return; }
L_001F19A4:
    set32(c.r[4], 0u + 9u);
    set32(c.r[5], 0u + 652u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19B4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F19B4u) [[unlikely]] return; }
L_001F19B4:
    set32(c.r[4], 0u + 10u);
    set32(c.r[5], 0u + 681u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19C4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F19C4u) [[unlikely]] return; }
L_001F19C4:
    set32(c.r[4], 0u + 11u);
    set32(c.r[5], 0u + 698u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19D4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F19D4u) [[unlikely]] return; }
L_001F19D4:
    set32(c.r[4], 0u + 12u);
    set32(c.r[5], 0u + 718u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19E4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F19E4u) [[unlikely]] return; }
L_001F19E4:
    set32(c.r[4], 0u + 13u);
    set32(c.r[5], 0u + 738u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F19F4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F19F4u) [[unlikely]] return; }
L_001F19F4:
    set32(c.r[4], 0u + 14u);
    set32(c.r[5], 0u + 759u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A04u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A04u) [[unlikely]] return; }
L_001F1A04:
    set32(c.r[4], 0u + 15u);
    set32(c.r[5], 0u + 791u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A14u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A14u) [[unlikely]] return; }
L_001F1A14:
    set32(c.r[4], 0u + 16u);
    set32(c.r[5], 0u + 828u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A24u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A24u) [[unlikely]] return; }
L_001F1A24:
    set32(c.r[4], 0u + 17u);
    set32(c.r[5], 0u + 861u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A34u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A34u) [[unlikely]] return; }
L_001F1A34:
    set32(c.r[4], 0u + 18u);
    set32(c.r[5], 0u + 877u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A44u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A44u) [[unlikely]] return; }
L_001F1A44:
    set32(c.r[4], 0u + 19u);
    set32(c.r[5], 0u + 891u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A54u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A54u) [[unlikely]] return; }
L_001F1A54:
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], 0u + 915u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A64u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A64u) [[unlikely]] return; }
L_001F1A64:
    set32(c.r[4], 0u + 21u);
    set32(c.r[5], 0u + 942u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A74u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A74u) [[unlikely]] return; }
L_001F1A74:
    set32(c.r[4], 0u + 22u);
    set32(c.r[5], 0u + 943u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A84u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A84u) [[unlikely]] return; }
L_001F1A84:
    set32(c.r[4], 0u + 23u);
    set32(c.r[5], 0u + 947u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1A94u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1A94u) [[unlikely]] return; }
L_001F1A94:
    set32(c.r[4], 0u + 24u);
    set32(c.r[5], 0u + 969u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AA4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1AA4u) [[unlikely]] return; }
L_001F1AA4:
    set32(c.r[4], 0u + 25u);
    set32(c.r[5], 0u + 996u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AB4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1AB4u) [[unlikely]] return; }
L_001F1AB4:
    set32(c.r[4], 0u + 26u);
    set32(c.r[5], 0u + 1002u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AC4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1AC4u) [[unlikely]] return; }
L_001F1AC4:
    set32(c.r[4], 0u + 27u);
    set32(c.r[5], 0u + 1032u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AD4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1AD4u) [[unlikely]] return; }
L_001F1AD4:
    set32(c.r[4], 0u + 28u);
    set32(c.r[5], 0u + 1057u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AE4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1AE4u) [[unlikely]] return; }
L_001F1AE4:
    set32(c.r[4], 0u + 29u);
    set32(c.r[5], 0u + 1077u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1AF4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1AF4u) [[unlikely]] return; }
L_001F1AF4:
    set32(c.r[4], 0u + 30u);
    set32(c.r[5], 0u + 1092u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B04u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B04u) [[unlikely]] return; }
L_001F1B04:
    set32(c.r[4], 0u + 31u);
    set32(c.r[5], 0u + 1109u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B14u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B14u) [[unlikely]] return; }
L_001F1B14:
    set32(c.r[4], 0u + 32u);
    set32(c.r[5], 0u + 1132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B24u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B24u) [[unlikely]] return; }
L_001F1B24:
    set32(c.r[4], 0u + 33u);
    set32(c.r[5], 0u + 1146u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B34u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B34u) [[unlikely]] return; }
L_001F1B34:
    set32(c.r[4], 0u + 34u);
    set32(c.r[5], 0u + 1160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B44u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B44u) [[unlikely]] return; }
L_001F1B44:
    set32(c.r[4], 0u + 35u);
    set32(c.r[5], 0u + 1180u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B54u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B54u) [[unlikely]] return; }
L_001F1B54:
    set32(c.r[4], 0u + 36u);
    set32(c.r[5], 0u + 1200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B64u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B64u) [[unlikely]] return; }
L_001F1B64:
    set32(c.r[4], 0u + 37u);
    set32(c.r[5], 0u + 1212u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B74u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B74u) [[unlikely]] return; }
L_001F1B74:
    set32(c.r[4], 0u + 38u);
    set32(c.r[5], 0u + 1222u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B84u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B84u) [[unlikely]] return; }
L_001F1B84:
    set32(c.r[4], 0u + 39u);
    set32(c.r[5], 0u + 1223u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1B94u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1B94u) [[unlikely]] return; }
L_001F1B94:
    set32(c.r[4], 0u + 40u);
    set32(c.r[5], 0u + 1226u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BA4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1BA4u) [[unlikely]] return; }
L_001F1BA4:
    set32(c.r[4], 0u + 41u);
    set32(c.r[5], 0u + 1227u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BB4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1BB4u) [[unlikely]] return; }
L_001F1BB4:
    set32(c.r[4], 0u + 42u);
    set32(c.r[5], 0u + 1232u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BC4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1BC4u) [[unlikely]] return; }
L_001F1BC4:
    set32(c.r[4], 0u + 43u);
    set32(c.r[5], 0u + 1236u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BD4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1BD4u) [[unlikely]] return; }
L_001F1BD4:
    set32(c.r[4], 0u + 44u);
    set32(c.r[5], 0u + 1245u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BE4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1BE4u) [[unlikely]] return; }
L_001F1BE4:
    set32(c.r[4], 0u + 45u);
    set32(c.r[5], 0u + 1253u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1BF4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1BF4u) [[unlikely]] return; }
L_001F1BF4:
    set32(c.r[4], 0u + 46u);
    set32(c.r[5], 0u + 1262u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C04u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C04u) [[unlikely]] return; }
L_001F1C04:
    set32(c.r[4], 0u + 47u);
    set32(c.r[5], 0u + 1282u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C14u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C14u) [[unlikely]] return; }
L_001F1C14:
    set32(c.r[4], 0u + 48u);
    set32(c.r[5], 0u + 1314u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C24u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C24u) [[unlikely]] return; }
L_001F1C24:
    set32(c.r[4], 0u + 49u);
    set32(c.r[5], 0u + 1324u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C34u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C34u) [[unlikely]] return; }
L_001F1C34:
    set32(c.r[4], 0u + 50u);
    set32(c.r[5], 0u + 1338u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C44u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C44u) [[unlikely]] return; }
L_001F1C44:
    set32(c.r[4], 0u + 51u);
    set32(c.r[5], 0u + 1345u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C54u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C54u) [[unlikely]] return; }
L_001F1C54:
    set32(c.r[4], 0u + 52u);
    set32(c.r[5], 0u + 1355u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C64u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C64u) [[unlikely]] return; }
L_001F1C64:
    set32(c.r[4], 0u + 53u);
    set32(c.r[5], 0u + 1397u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C74u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C74u) [[unlikely]] return; }
L_001F1C74:
    set32(c.r[4], 0u + 54u);
    set32(c.r[5], 0u + 1399u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C84u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C84u) [[unlikely]] return; }
L_001F1C84:
    set32(c.r[4], 0u + 55u);
    set32(c.r[5], 0u + 1427u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1C94u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1C94u) [[unlikely]] return; }
L_001F1C94:
    set32(c.r[4], 0u + 56u);
    set32(c.r[5], 0u + 1465u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CA4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1CA4u) [[unlikely]] return; }
L_001F1CA4:
    set32(c.r[4], 0u + 57u);
    set32(c.r[5], 0u + 1512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CB4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1CB4u) [[unlikely]] return; }
L_001F1CB4:
    set32(c.r[4], 0u + 58u);
    set32(c.r[5], 0u + 1544u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CC4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1CC4u) [[unlikely]] return; }
L_001F1CC4:
    set32(c.r[4], 0u + 59u);
    set32(c.r[5], 0u + 1564u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CD4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1CD4u) [[unlikely]] return; }
L_001F1CD4:
    set32(c.r[4], 0u + 60u);
    set32(c.r[5], 0u + 1595u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CE4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1CE4u) [[unlikely]] return; }
L_001F1CE4:
    set32(c.r[4], 0u + 61u);
    set32(c.r[5], 0u + 1596u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1CF4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1CF4u) [[unlikely]] return; }
L_001F1CF4:
    set32(c.r[4], 0u + 62u);
    set32(c.r[5], 0u + 1608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D04u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D04u) [[unlikely]] return; }
L_001F1D04:
    set32(c.r[4], 0u + 63u);
    set32(c.r[5], 0u + 1647u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D14u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D14u) [[unlikely]] return; }
L_001F1D14:
    set32(c.r[4], 0u + 64u);
    set32(c.r[5], 0u + 1672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D24u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D24u) [[unlikely]] return; }
L_001F1D24:
    set32(c.r[4], 0u + 65u);
    set32(c.r[5], 0u + 1701u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D34u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D34u) [[unlikely]] return; }
L_001F1D34:
    set32(c.r[4], 0u + 66u);
    set32(c.r[5], 0u + 1747u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D44u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D44u) [[unlikely]] return; }
L_001F1D44:
    set32(c.r[4], 0u + 67u);
    set32(c.r[5], 0u + 1782u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D54u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D54u) [[unlikely]] return; }
L_001F1D54:
    set32(c.r[4], 0u + 68u);
    set32(c.r[5], 0u + 1815u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D64u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D64u) [[unlikely]] return; }
L_001F1D64:
    set32(c.r[4], 0u + 69u);
    set32(c.r[5], 0u + 1854u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D74u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D74u) [[unlikely]] return; }
L_001F1D74:
    set32(c.r[4], 0u + 70u);
    set32(c.r[5], 0u + 1893u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D84u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D84u) [[unlikely]] return; }
L_001F1D84:
    set32(c.r[4], 0u + 71u);
    set32(c.r[5], 0u + 1902u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1D94u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1D94u) [[unlikely]] return; }
L_001F1D94:
    set32(c.r[4], 0u + 72u);
    set32(c.r[5], 0u + 1936u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DA4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1DA4u) [[unlikely]] return; }
L_001F1DA4:
    set32(c.r[4], 0u + 73u);
    set32(c.r[5], 0u + 1938u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DB4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1DB4u) [[unlikely]] return; }
L_001F1DB4:
    set32(c.r[4], 0u + 74u);
    set32(c.r[5], 0u + 1940u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DC4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1DC4u) [[unlikely]] return; }
L_001F1DC4:
    set32(c.r[4], 0u + 75u);
    set32(c.r[5], 0u + 1948u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DD4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1DD4u) [[unlikely]] return; }
L_001F1DD4:
    set32(c.r[4], 0u + 76u);
    set32(c.r[5], 0u + 1950u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DE4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1DE4u) [[unlikely]] return; }
L_001F1DE4:
    set32(c.r[4], 0u + 77u);
    set32(c.r[5], 0u + 1960u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1DF4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1DF4u) [[unlikely]] return; }
L_001F1DF4:
    set32(c.r[4], 0u + 78u);
    set32(c.r[5], 0u + 1970u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E04u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E04u) [[unlikely]] return; }
L_001F1E04:
    set32(c.r[4], 0u + 79u);
    set32(c.r[5], 0u + 1971u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E14u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E14u) [[unlikely]] return; }
L_001F1E14:
    set32(c.r[4], 0u + 80u);
    set32(c.r[5], 0u + 1972u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E24u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E24u) [[unlikely]] return; }
L_001F1E24:
    set32(c.r[4], 0u + 81u);
    set32(c.r[5], 0u + 1973u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E34u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E34u) [[unlikely]] return; }
L_001F1E34:
    set32(c.r[4], 0u + 82u);
    set32(c.r[5], 0u + 1994u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E44u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E44u) [[unlikely]] return; }
L_001F1E44:
    set32(c.r[4], 0u + 83u);
    set32(c.r[5], 0u + 2161u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E54u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E54u) [[unlikely]] return; }
L_001F1E54:
    set32(c.r[4], 0u + 84u);
    set32(c.r[5], 0u + 2299u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E64u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E64u) [[unlikely]] return; }
L_001F1E64:
    set32(c.r[4], 0u + 85u);
    set32(c.r[5], 0u + 2443u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E74u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E74u) [[unlikely]] return; }
L_001F1E74:
    set32(c.r[4], 0u + 86u);
    set32(c.r[5], 0u + 2479u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E84u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E84u) [[unlikely]] return; }
L_001F1E84:
    set32(c.r[4], 0u + 87u);
    set32(c.r[5], 0u + 2513u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1E94u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1E94u) [[unlikely]] return; }
L_001F1E94:
    set32(c.r[4], 0u + 88u);
    set32(c.r[5], 0u + 2515u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EA4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1EA4u) [[unlikely]] return; }
L_001F1EA4:
    set32(c.r[4], 0u + 89u);
    set32(c.r[5], 0u + 2684u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EB4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1EB4u) [[unlikely]] return; }
L_001F1EB4:
    set32(c.r[4], 0u + 90u);
    set32(c.r[5], 0u + 2831u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F1EC4u);  if (depth < kMaxDepth) unit_003C(c, 164u, depth + 1u); else { c.pc = 0x001F1760u; return; } if (c.pc != 0x001F1EC4u) [[unlikely]] return; }
L_001F1EC4:
    set32(c.r[11], 0u + 540u);
    set32(c.r[13], 0u + 562u);
    st32((c.r[16].w[0] + 2180u), c.r[11].w[0]);
    set32(c.r[3], 0u + 384u);
    st32((c.r[16].w[0] + 2376u), c.r[13].w[0]);
    set32(c.r[11], 0u + 564u);
    set32(c.r[13], 0u + 565u);
    st32((c.r[16].w[0] + 2380u), c.r[11].w[0]);
    st32((c.r[16].w[0] + 2392u), c.r[13].w[0]);
    set32(c.r[11], 0u + 587u);
    set32(c.r[13], 0u + 585u);
    st32((c.r[16].w[0] + 3256u), c.r[11].w[0]);
    st32((c.r[16].w[0] + 3260u), c.r[13].w[0]);
    set32(c.r[7], 0u + 197u);
    set32(c.r[8], 0u + 199u);
    set32(c.r[9], 0u + 465u);
    set32(c.r[10], 0u + 378u);
    set32(c.r[11], 0u + 584u);
    set32(c.r[13], 0u + 592u);
    st32((c.r[16].w[0] + 792u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 796u), c.r[8].w[0]);
    set32(c.r[2], 0u + 204u);
    st32((c.r[16].w[0] + 1692u), c.r[9].w[0]);
    set32(c.r[4], 0u + 198u);
    st32((c.r[16].w[0] + 888u), c.r[10].w[0]);
    set32(c.r[5], 0u + 196u);
    st32((c.r[16].w[0] + 1272u), c.r[3].w[0]);
    set32(c.r[6], 0u + 222u);
    st32((c.r[16].w[0] + 3272u), c.r[11].w[0]);
    set32(c.r[30], 0u + 621u);
    st32((c.r[16].w[0] + 3940u), c.r[13].w[0]);
    set32(c.r[25], 0u + 614u);
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    set32(c.r[24], 0u + 634u);
    st32((c.r[16].w[0] + 1264u), c.r[3].w[0]);
    set32(c.r[23], 0u + 635u);
    set32(c.r[15], 0u + 637u);
    set32(c.r[7], 0u + 376u);
    set32(c.r[8], 0u + 402u);
    set32(c.r[9], 0u + 377u);
    set32(c.r[10], 0u + 379u);
    set32(c.r[11], 0u + 591u);
    set32(c.r[13], 0u + 616u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[16].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[14], 0u + 642u);
    st32((c.r[16].w[0] + 420u), c.r[5].w[0]);
    set32(c.r[4], 0u + 679u);
    st32((c.r[16].w[0] + 180u), c.r[6].w[0]);
    set32(c.r[5], 0u + 130u);
    st32((c.r[16].w[0] + 392u), c.r[2].w[0]);
    set32(c.r[6], 0u + 129u);
    st32((c.r[16].w[0] + 1300u), c.r[7].w[0]);
    set32(c.r[22], 0u + 716u);
    st32((c.r[16].w[0] + 1060u), c.r[8].w[0]);
    set32(c.r[7], 0u + 643u);
    st32((c.r[16].w[0] + 1672u), c.r[9].w[0]);
    set32(c.r[8], 0u + 648u);
    st32((c.r[16].w[0] + 1676u), c.r[10].w[0]);
    set32(c.r[9], 0u + 650u);
    st32((c.r[16].w[0] + 3700u), c.r[11].w[0]);
    set32(c.r[10], 0u + 649u);
    st32((c.r[16].w[0] + 4136u), c.r[13].w[0]);
    set32(c.r[21], 0u + 720u);
    st32((c.r[16].w[0] + 4140u), c.r[30].w[0]);
    set32(c.r[20], 0u + 736u);
    st32((c.r[16].w[0] + 4152u), c.r[25].w[0]);
    set32(c.r[30], 0u + 700u);
    st32((c.r[16].w[0] + 6776u), c.r[24].w[0]);
    set32(c.r[19], 0u + 741u);
    st32((c.r[16].w[0] + 6792u), c.r[23].w[0]);
    set32(c.r[18], 0u + 757u);
    st32((c.r[16].w[0] + 7460u), c.r[15].w[0]);
    set32(c.r[17], 0u + 761u);
    st32((c.r[16].w[0] + 380u), c.r[2].w[0]);
    set32(c.r[11], 0u + 644u);
    st32((c.r[16].w[0] + 384u), c.r[2].w[0]);
    set32(c.r[13], 0u + 785u);
    st32((c.r[16].w[0] + 6580u), c.r[3].w[0]);
    set32(c.r[2], 0u + 859u);
    st32((c.r[16].w[0] + 7656u), c.r[14].w[0]);
    set32(c.r[3], 0u + 654u);
    set32(c.r[14], 0u + 651u);
    st32((c.r[16].w[0] + 8340u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 7868u), c.r[14].w[0]);
    set32(c.r[3], 0u + 663u);
    set32(c.r[14], 0u + 680u);
    st32((c.r[16].w[0] + 8100u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8552u), c.r[14].w[0]);
    set32(c.r[3], 0u + 668u);
    set32(c.r[14], 0u + 664u);
    st32((c.r[16].w[0] + 8196u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8768u), c.r[14].w[0]);
    set32(c.r[3], 0u + 683u);
    set32(c.r[14], 0u + 653u);
    st32((c.r[16].w[0] + 8544u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 8204u), c.r[14].w[0]);
    set32(c.r[12], 0u + 795u);
    set32(c.r[14], 0u + 697u);
    st32((c.r[16].w[0] + 9220u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 9416u), c.r[14].w[0]);
    set32(c.r[3], 0u + 696u);
    set32(c.r[14], 0u + 770u);
    st32((c.r[16].w[0] + 8536u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 13168u), c.r[14].w[0]);
    set32(c.r[14], 0u + 1054u);
    st32((c.r[16].w[0] + 8540u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 9604u), c.r[14].w[0]);
    set32(c.r[4], 0u + 1052u);
    set32(c.r[14], 0u + 770u);
    st32((c.r[16].w[0] + 7660u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 12500u), c.r[14].w[0]);
    set32(c.r[7], 0u + 787u);
    st32((c.r[16].w[0] + 7664u), c.r[8].w[0]);
    set32(c.r[14], 0u + 771u);
    st32((c.r[16].w[0] + 7872u), c.r[9].w[0]);
    set32(c.r[8], 0u + 784u);
    st32((c.r[16].w[0] + 7876u), c.r[10].w[0]);
    set32(c.r[9], 0u + 788u);
    st32((c.r[16].w[0] + 7672u), c.r[11].w[0]);
    set32(c.r[10], 0u + 759u);
    st32((c.r[16].w[0] + 9420u), c.r[3].w[0]);
    set32(c.r[11], 0u + 804u);
    st32((c.r[16].w[0] + 10100u), c.r[30].w[0]);
    set32(c.r[3], 0u + 1055u);
    st32((c.r[16].w[0] + 10296u), c.r[22].w[0]);
    set32(c.r[30], 0u + 866u);
    st32((c.r[16].w[0] + 10980u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 11176u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 11860u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12056u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12740u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 9432u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 9608u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 10312u), c.r[5].w[0]);
    set32(c.r[4], 0u + 888u);
    st32((c.r[16].w[0] + 11192u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 12072u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12596u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 12936u), c.r[13].w[0]);
    set32(c.r[14], 0u + 72u);
    st32((c.r[16].w[0] + 13380u), c.r[11].w[0]);
    set32(c.r[13], 0u + 760u);
    st32((c.r[16].w[0] + 12604u), c.r[13].w[0]);
    set32(c.r[11], 0u + 814u);
    st32((c.r[16].w[0] + 13236u), c.r[14].w[0]);
    set32(c.r[13], 0u + 822u);
    st32((c.r[16].w[0] + 13476u), c.r[11].w[0]);
    set32(c.r[14], 0u + 827u);
    st32((c.r[16].w[0] + 13816u), c.r[13].w[0]);
    set32(c.r[11], 0u + 826u);
    st32((c.r[16].w[0] + 13824u), c.r[14].w[0]);
    set32(c.r[13], 0u + 825u);
    st32((c.r[16].w[0] + 14032u), c.r[11].w[0]);
    set32(c.r[14], 0u + 839u);
    st32((c.r[16].w[0] + 14028u), c.r[13].w[0]);
    set32(c.r[11], 0u + 862u);
    st32((c.r[16].w[0] + 14260u), c.r[14].w[0]);
    set32(c.r[13], 0u + 865u);
    st32((c.r[16].w[0] + 15380u), c.r[11].w[0]);
    set32(c.r[14], 0u + 867u);
    st32((c.r[16].w[0] + 15140u), c.r[13].w[0]);
    set32(c.r[11], 0u + 875u);
    st32((c.r[16].w[0] + 15236u), c.r[14].w[0]);
    set32(c.r[13], 0u + 876u);
    st32((c.r[16].w[0] + 15576u), c.r[11].w[0]);
    set32(c.r[14], 0u + 878u);
    st32((c.r[16].w[0] + 13832u), c.r[6].w[0]);
    set32(c.r[11], 0u + 882u);
    st32((c.r[16].w[0] + 14712u), c.r[5].w[0]);
    set32(c.r[6], 0u + 841u);
    st32((c.r[16].w[0] + 15592u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 16260u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1052u);
    st32((c.r[16].w[0] + 12952u), c.r[5].w[0]);
    set32(c.r[14], 0u + 1054u);
    st32((c.r[16].w[0] + 16456u), c.r[11].w[0]);
    set32(c.r[5], 0u + 825u);
    st32((c.r[16].w[0] + 12940u), c.r[7].w[0]);
    set32(c.r[11], 0u + 883u);
    st32((c.r[16].w[0] + 12944u), c.r[8].w[0]);
    set32(c.r[7], 0u + 940u);
    st32((c.r[16].w[0] + 13152u), c.r[9].w[0]);
    set32(c.r[8], 0u + 938u);
    st32((c.r[16].w[0] + 13156u), c.r[10].w[0]);
    set32(c.r[9], 0u + 942u);
    st32((c.r[16].w[0] + 13620u), c.r[12].w[0]);
    set32(c.r[10], 0u + 944u);
    st32((c.r[16].w[0] + 14356u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 14704u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1067u);
    st32((c.r[16].w[0] + 15808u), c.r[30].w[0]);
    st32((c.r[16].w[0] + 13128u), c.r[13].w[0]);
    set32(c.r[30], 0u + 60u);
    st32((c.r[16].w[0] + 13124u), c.r[14].w[0]);
    set32(c.r[13], 0u + 889u);
    st32((c.r[16].w[0] + 13820u), c.r[5].w[0]);
    set32(c.r[14], 0u + 884u);
    st32((c.r[16].w[0] + 14696u), c.r[2].w[0]);
    set32(c.r[5], 0u + 914u);
    st32((c.r[16].w[0] + 14700u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16460u), c.r[11].w[0]);
    set32(c.r[2], 0u + 890u);
    st32((c.r[16].w[0] + 16672u), c.r[13].w[0]);
    set32(c.r[11], 0u + 908u);
    set32(c.r[13], 0u + 909u);
    st32((c.r[16].w[0] + 16472u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 17352u), c.r[11].w[0]);
    set32(c.r[14], 0u + 918u);
    st32((c.r[16].w[0] + 17548u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1014u);
    set32(c.r[13], 0u + 1021u);
    st32((c.r[16].w[0] + 16464u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 18020u), c.r[14].w[0]);
    set32(c.r[4], 0u + 894u);
    st32((c.r[16].w[0] + 18232u), c.r[8].w[0]);
    set32(c.r[14], 0u + 1023u);
    st32((c.r[16].w[0] + 18900u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1031u);
    st32((c.r[16].w[0] + 23060u), c.r[11].w[0]);
    set32(c.r[9], 0u + 1030u);
    st32((c.r[16].w[0] + 23704u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1056u);
    set32(c.r[13], 0u + 1058u);
    st32((c.r[16].w[0] + 16668u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 17140u), c.r[4].w[0]);
    set32(c.r[2], 0u + 943u);
    st32((c.r[16].w[0] + 17340u), c.r[5].w[0]);
    set32(c.r[4], 0u + 974u);
    st32((c.r[16].w[0] + 18216u), c.r[7].w[0]);
    set32(c.r[5], 0u + 993u);
    st32((c.r[16].w[0] + 19540u), c.r[10].w[0]);
    set32(c.r[7], 0u + 994u);
    st32((c.r[16].w[0] + 23500u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1016u);
    st32((c.r[16].w[0] + 23512u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1043u);
    st32((c.r[16].w[0] + 23708u), c.r[14].w[0]);
    set32(c.r[9], 0u + 1042u);
    st32((c.r[16].w[0] + 24392u), c.r[11].w[0]);
    set32(c.r[14], 0u + 909u);
    st32((c.r[16].w[0] + 25060u), c.r[13].w[0]);
    set32(c.r[11], 0u + 943u);
    set32(c.r[13], 0u + 1031u);
    st32((c.r[16].w[0] + 19976u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 21540u), c.r[4].w[0]);
    c.r[2].d[0] = 0ull | 32768ull;
    st32((c.r[16].w[0] + 21736u), c.r[5].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 21752u), c.r[7].w[0]);
    set32(c.r[5], 0u + 1201u);
    st32((c.r[16].w[0] + 23156u), c.r[10].w[0]);
    set32(c.r[7], 0u + 1210u);
    st32((c.r[16].w[0] + 23940u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1221u);
    st32((c.r[16].w[0] + 24036u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1209u);
    st32((c.r[16].w[0] + 24384u), c.r[3].w[0]);
    set32(c.r[9], 0u + 1213u);
    st32((c.r[16].w[0] + 17336u), c.r[14].w[0]);
    set32(c.r[4], 0u + 28u);
    st32((c.r[16].w[0] + 19780u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1073u);
    st32((c.r[16].w[0] + 23496u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1075u);
    st32((c.r[16].w[0] + 24376u), c.r[3].w[0]);
    set32(c.r[13], 0u + 1071u);
    st32((c.r[16].w[0] + 24380u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 24820u), c.r[6].w[0]);
    set32(c.r[3], 0u + 1251u);
    st32((c.r[16].w[0] + 25256u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 25260u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1076u);
    st32((c.r[16].w[0] + 25264u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1074u);
    st32((c.r[16].w[0] + 25472u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1052u);
    st32((c.r[16].w[0] + 25272u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1054u);
    st32((c.r[16].w[0] + 25448u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1078u);
    st32((c.r[16].w[0] + 25444u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1082u);
    st32((c.r[16].w[0] + 25940u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1083u);
    st32((c.r[16].w[0] + 26136u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1089u);
    st32((c.r[16].w[0] + 26140u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1090u);
    st32((c.r[16].w[0] + 26144u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1084u);
    st32((c.r[16].w[0] + 26352u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1091u);
    st32((c.r[16].w[0] + 26152u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1095u);
    st32((c.r[16].w[0] + 26348u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1107u);
    st32((c.r[16].w[0] + 26820u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1108u);
    st32((c.r[16].w[0] + 27016u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1106u);
    st32((c.r[16].w[0] + 27020u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1111u);
    st32((c.r[16].w[0] + 27032u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1126u);
    st32((c.r[16].w[0] + 27700u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1109u);
    st32((c.r[16].w[0] + 27896u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1127u);
    st32((c.r[16].w[0] + 27900u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1135u);
    st32((c.r[16].w[0] + 27912u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1145u);
    st32((c.r[16].w[0] + 28580u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1149u);
    st32((c.r[16].w[0] + 28792u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1159u);
    st32((c.r[16].w[0] + 29460u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1162u);
    st32((c.r[16].w[0] + 29672u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1178u);
    st32((c.r[16].w[0] + 30340u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1160u);
    st32((c.r[16].w[0] + 30536u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1179u);
    st32((c.r[16].w[0] + 30540u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1182u);
    st32((c.r[16].w[0] + 30552u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1198u);
    st32((c.r[16].w[0] + 25488u), c.r[6].w[0]);
    set32(c.r[13], 0u + 1199u);
    st32((c.r[16].w[0] + 31220u), c.r[14].w[0]);
    set32(c.r[6], 0u + 1261u);
    st32((c.r[16].w[0] + 31416u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1220u);
    st32((c.r[16].w[0] + 31432u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1231u);
    st32((c.r[16].w[0] + 32296u), c.r[7].w[0]);
    set32(c.r[13], 0u + 1230u);
    st32((c.r[16].w[0] + 32312u), c.r[8].w[0]);
    set32(c.r[7], 0u + 1701u);
    st32((c.r[16].w[0] + 32556u), c.r[5].w[0]);
    set32(c.r[8], 0u + 1747u);
    st32((c.r[2].w[0] + 408u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 424u), c.r[14].w[0]);
    set32(c.r[10], 0u + 1226u);
    set32(c.r[14], 0u + 1244u);
    st32((c.r[2].w[0] + 3048u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 3928u), c.r[11].w[0]);
    set32(c.r[10], 0u - 1u);
    st32((c.r[2].w[0] + 3944u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1238u);
    st32((c.r[2].w[0] + 5688u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1252u);
    st32((c.r[2].w[0] + 6584u), c.r[3].w[0]);
    set32(c.r[14], 0u + 1254u);
    set32(c.r[3], 0u + 1253u);
    st32((c.r[2].w[0] + 5692u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 5900u), c.r[11].w[0]);
    set32(c.r[10], 0u + 1280u);
    st32((c.r[2].w[0] + 6568u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1279u);
    st32((c.r[2].w[0] + 7448u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1285u);
    st32((c.r[2].w[0] + 7456u), c.r[3].w[0]);
    set32(c.r[14], 0u + 1330u);
    set32(c.r[3], 0u + 1337u);
    st32((c.r[2].w[0] + 8328u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 8344u), c.r[11].w[0]);
    set32(c.r[10], 0u + 1338u);
    st32((c.r[2].w[0] + 9012u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1345u);
    st32((c.r[2].w[0] + 10772u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1357u);
    st32((c.r[2].w[0] + 10984u), c.r[3].w[0]);
    set32(c.r[14], 0u + 1368u);
    set32(c.r[3], 0u + 1397u);
    st32((c.r[2].w[0] + 212u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 7452u), c.r[6].w[0]);
    set32(c.r[9], 0u + 1782u);
    st32((c.r[2].w[0] + 11864u), c.r[10].w[0]);
    set32(c.r[6], 0u + 1760u);
    st32((c.r[2].w[0] + 12728u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 13412u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1410u);
    st32((c.r[2].w[0] + 13392u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1429u);
    st32((c.r[2].w[0] + 14488u), c.r[3].w[0]);
    set32(c.r[14], 0u + 1441u);
    st32((c.r[16].w[0] + 32100u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1437u);
    st32((c.r[16].w[0] + 32552u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 11848u), c.r[10].w[0]);
    set32(c.r[5], 0u + 1285u);
    st32((c.r[2].w[0] + 8600u), c.r[5].w[0]);
    set32(c.r[10], 0u + 1426u);
    st32((c.r[2].w[0] + 13020u), c.r[30].w[0]);
    set32(c.r[5], 0u + 1466u);
    st32((c.r[2].w[0] + 13364u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 15368u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 15152u), c.r[11].w[0]);
    set32(c.r[10], 0u + 1467u);
    st32((c.r[2].w[0] + 16052u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1476u);
    st32((c.r[2].w[0] + 16032u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1507u);
    st32((c.r[2].w[0] + 16692u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1480u);
    st32((c.r[2].w[0] + 16932u), c.r[10].w[0]);
    set32(c.r[11], 0u + 1566u);
    st32((c.r[2].w[0] + 16788u), c.r[13].w[0]);
    set32(c.r[10], 0u + 1546u);
    st32((c.r[2].w[0] + 16912u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1564u);
    st32((c.r[2].w[0] + 19572u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1592u);
    st32((c.r[2].w[0] + 19148u), c.r[10].w[0]);
    set32(c.r[11], 0u + 1575u);
    st32((c.r[2].w[0] + 19768u), c.r[13].w[0]);
    set32(c.r[10], 0u + 1574u);
    st32((c.r[2].w[0] + 19776u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1576u);
    st32((c.r[2].w[0] + 20000u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1577u);
    st32((c.r[2].w[0] + 19332u), c.r[10].w[0]);
    set32(c.r[11], 0u + 1596u);
    st32((c.r[2].w[0] + 19428u), c.r[13].w[0]);
    set32(c.r[10], 0u + 1595u);
    st32((c.r[2].w[0] + 19552u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1610u);
    st32((c.r[2].w[0] + 21528u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1515u);
    st32((c.r[2].w[0] + 15812u), c.r[3].w[0]);
    set32(c.r[11], 0u + 1546u);
    st32((c.r[2].w[0] + 16520u), c.r[5].w[0]);
    set32(c.r[3], 0u + 1515u);
    st32((c.r[2].w[0] + 20648u), c.r[10].w[0]);
    set32(c.r[5], 0u + 1547u);
    st32((c.r[2].w[0] + 22212u), c.r[13].w[0]);
    set32(c.r[10], 0u + 1547u);
    st32((c.r[2].w[0] + 17400u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1592u);
    st32((c.r[2].w[0] + 19144u), c.r[11].w[0]);
    set32(c.r[14], 0u + 1608u);
    st32((c.r[2].w[0] + 17812u), c.r[3].w[0]);
    set32(c.r[11], 0u + 1646u);
    st32((c.r[2].w[0] + 18692u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    st32((c.r[2].w[0] + 14780u), c.r[30].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 15124u), c.r[4].w[0]);
    set32(c.r[3], 0u + 1970u);
    st32((c.r[2].w[0] + 15660u), c.r[30].w[0]);
    set32(c.r[5], 0u + 1971u);
    st32((c.r[2].w[0] + 16004u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 16884u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 18280u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 19772u), c.r[13].w[0]);
    set32(c.r[10], 0u + 2170u);
    st32((c.r[2].w[0] + 19524u), c.r[4].w[0]);
    set32(c.r[13], 0u + 1618u);
    st32((c.r[2].w[0] + 22408u), c.r[14].w[0]);
    st32((c.r[2].w[0] + 22412u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 22416u), c.r[14].w[0]);
    set32(c.r[11], 0u + 1622u);
    set32(c.r[14], 0u + 1619u);
    st32((c.r[2].w[0] + 21972u), c.r[13].w[0]);
    st32((c.r[2].w[0] + 22068u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1675u);
    set32(c.r[14], 0u + 1682u);
    st32((c.r[2].w[0] + 22192u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 23972u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1707u);
    st32((c.r[2].w[0] + 23828u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1715u);
    set32(c.r[14], 0u + 1716u);
    st32((c.r[2].w[0] + 24852u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 24612u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1717u);
    st32((c.r[2].w[0] + 24708u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1752u);
    set32(c.r[14], 0u + 1772u);
    st32((c.r[2].w[0] + 24832u), c.r[11].w[0]);
    st32((c.r[2].w[0] + 25732u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1787u);
    st32((c.r[2].w[0] + 25492u), c.r[6].w[0]);
    set32(c.r[13], 0u + 1795u);
    st32((c.r[2].w[0] + 25588u), c.r[14].w[0]);
    set32(c.r[6], 0u + 1762u);
    st32((c.r[2].w[0] + 26108u), c.r[8].w[0]);
    set32(c.r[14], 0u + 1675u);
    st32((c.r[2].w[0] + 25928u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 25932u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 25936u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 26104u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 25228u), c.r[7].w[0]);
    set32(c.r[8], 0u + 1796u);
    st32((c.r[2].w[0] + 25712u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 26612u), c.r[11].w[0]);
    set32(c.r[6], 0u + 2840u);
    st32((c.r[2].w[0] + 26372u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1936u);
    st32((c.r[2].w[0] + 22164u), c.r[4].w[0]);
    set32(c.r[13], 0u + 1802u);
    st32((c.r[2].w[0] + 23560u), c.r[14].w[0]);
    st32((c.r[2].w[0] + 25048u), c.r[7].w[0]);
    set32(c.r[14], 0u + 1816u);
    st32((c.r[2].w[0] + 25052u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 25056u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 24804u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 25224u), c.r[7].w[0]);
    st32((c.r[2].w[0] + 25684u), c.r[4].w[0]);
    set32(c.r[7], 0u + 2835u);
    st32((c.r[2].w[0] + 26808u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 26812u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 26816u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 26468u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 30772u), c.r[11].w[0]);
    set32(c.r[8], 0u + 191u);
    st32((c.r[2].w[0] + 26592u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1847u);
    st32((c.r[2].w[0] + 27492u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1829u);
    st32((c.r[2].w[0] + 27440u), c.r[8].w[0]);
    set32(c.r[14], 0u + 1830u);
    st32((c.r[2].w[0] + 27472u), c.r[11].w[0]);
    set32(c.r[8], 0u + 1815u);
    st32((c.r[2].w[0] + 27252u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1859u);
    st32((c.r[2].w[0] + 27348u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1889u);
    st32((c.r[2].w[0] + 27868u), c.r[8].w[0]);
    set32(c.r[14], 0u + 1891u);
    st32((c.r[2].w[0] + 28372u), c.r[11].w[0]);
    set32(c.r[8], 0u + 1854u);
    st32((c.r[2].w[0] + 28568u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1888u);
    st32((c.r[2].w[0] + 28572u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1876u);
    st32((c.r[2].w[0] + 28576u), c.r[8].w[0]);
    set32(c.r[14], 0u + 1867u);
    st32((c.r[2].w[0] + 28584u), c.r[11].w[0]);
    set32(c.r[8], 0u + 1893u);
    st32((c.r[2].w[0] + 28228u), c.r[13].w[0]);
    set32(c.r[11], 0u + 1934u);
    st32((c.r[2].w[0] + 28352u), c.r[14].w[0]);
    set32(c.r[13], 0u + 34u);
    st32((c.r[2].w[0] + 29448u), c.r[8].w[0]);
    set32(c.r[14], 0u + 1902u);
    st32((c.r[2].w[0] + 30332u), c.r[11].w[0]);
    set32(c.r[8], 0u + 1916u);
    st32((c.r[2].w[0] + 26988u), c.r[9].w[0]);
    set32(c.r[11], 0u + 1917u);
    st32((c.r[2].w[0] + 28324u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 29892u), c.r[13].w[0]);
    st32((c.r[2].w[0] + 30508u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1937u);
    st32((c.r[2].w[0] + 30112u), c.r[8].w[0]);
    set32(c.r[14], 0u + 1815u);
    st32((c.r[2].w[0] + 26564u), c.r[4].w[0]);
    set32(c.r[8], 0u + 1902u);
    st32((c.r[2].w[0] + 26984u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 27444u), c.r[4].w[0]);
    set32(c.r[9], 0u + 1936u);
    st32((c.r[2].w[0] + 29988u), c.r[11].w[0]);
    set32(c.r[4], 0u + 34u);
    st32((c.r[2].w[0] + 27100u), c.r[30].w[0]);
    set32(c.r[11], 0u + 1941u);
    st32((c.r[2].w[0] + 31212u), c.r[13].w[0]);
    st32((c.r[2].w[0] + 27864u), c.r[14].w[0]);
    set32(c.r[13], 0u + 1952u);
    st32((c.r[2].w[0] + 28132u), c.r[4].w[0]);
    set32(c.r[14], 0u + 1955u);
    st32((c.r[2].w[0] + 30328u), c.r[8].w[0]);
    set32(c.r[4], 0u + 1953u);
    st32((c.r[2].w[0] + 30504u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 31208u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1962u);
    st32((c.r[16].w[0] + 4u), c.r[11].w[0]);
    set32(c.r[2], 0u + 1954u);
    set32(c.r[9], 0u + 1965u);
    st32((c.r[16].w[0] + 1764u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 1960u), c.r[14].w[0]);
    set32(c.r[11], 0u + 1964u);
    st32((c.r[16].w[0] + 1964u), c.r[2].w[0]);
    set32(c.r[13], 0u + 1963u);
    st32((c.r[16].w[0] + 1976u), c.r[4].w[0]);
    set32(c.r[14], 0u + 1976u);
    st32((c.r[16].w[0] + 2644u), c.r[8].w[0]);
    set32(c.r[2], 0u + 1977u);
    st32((c.r[16].w[0] + 2840u), c.r[9].w[0]);
    set32(c.r[4], 0u + 1993u);
    st32((c.r[16].w[0] + 2844u), c.r[11].w[0]);
    set32(c.r[8], 0u + 1997u);
    set32(c.r[9], 0u + 1995u);
    st32((c.r[16].w[0] + 2856u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 5752u), c.r[14].w[0]);
    set32(c.r[11], 0u + 1996u);
    st32((c.r[16].w[0] + 6540u), c.r[2].w[0]);
    set32(c.r[14], 0u + 2003u);
    st32((c.r[16].w[0] + 5924u), c.r[4].w[0]);
    set32(c.r[13], 0u + 1998u);
    st32((c.r[16].w[0] + 6632u), c.r[8].w[0]);
    set32(c.r[2], 0u + 2164u);
    st32((c.r[16].w[0] + 7044u), c.r[9].w[0]);
    set32(c.r[4], 0u + 1952u);
    st32((c.r[16].w[0] + 7416u), c.r[11].w[0]);
    set32(c.r[9], 0u + 1977u);
    set32(c.r[8], 0u + 1962u);
    st32((c.r[16].w[0] + 3736u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 4616u), c.r[5].w[0]);
    set32(c.r[11], 0u + 2162u);
    st32((c.r[16].w[0] + 7420u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 7016u), c.r[14].w[0]);
    set32(c.r[13], 0u + 2163u);
    st32((c.r[16].w[0] + 7512u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1352u), c.r[4].w[0]);
    set32(c.r[2], 0u + 2302u);
    st32((c.r[16].w[0] + 2232u), c.r[8].w[0]);
    set32(c.r[4], 0u + 2301u);
    st32((c.r[16].w[0] + 3112u), c.r[3].w[0]);
    set32(c.r[8], 0u + 2308u);
    st32((c.r[16].w[0] + 3524u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3720u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3724u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 3992u), c.r[5].w[0]);
    set32(c.r[3], 0u + 2300u);
    st32((c.r[16].w[0] + 4404u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4600u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4604u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 6164u), c.r[9].w[0]);
    set32(c.r[5], 0u + 2303u);
    st32((c.r[16].w[0] + 6536u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 7004u), c.r[14].w[0]);
    set32(c.r[9], 0u + 2512u);
    st32((c.r[16].w[0] + 7008u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 7924u), c.r[11].w[0]);
    set32(c.r[14], 0u + 2165u);
    st32((c.r[16].w[0] + 8296u), c.r[13].w[0]);
    set32(c.r[11], 0u + 2511u);
    st32((c.r[16].w[0] + 8300u), c.r[14].w[0]);
    set32(c.r[13], 0u + 2493u);
    st32((c.r[16].w[0] + 8392u), c.r[2].w[0]);
    set32(c.r[14], 0u + 2496u);
    st32((c.r[16].w[0] + 8804u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2479u);
    st32((c.r[16].w[0] + 9176u), c.r[4].w[0]);
    set32(c.r[3], 0u + 2519u);
    st32((c.r[16].w[0] + 9180u), c.r[5].w[0]);
    set32(c.r[4], 0u + 2517u);
    st32((c.r[16].w[0] + 8776u), c.r[8].w[0]);
    set32(c.r[5], 0u + 2518u);
    st32((c.r[16].w[0] + 10760u), c.r[9].w[0]);
    set32(c.r[8], 0u + 2520u);
    set32(c.r[9], 0u + 2525u);
    st32((c.r[16].w[0] + 10776u), c.r[11].w[0]);
    st32((c.r[16].w[0] + 10324u), c.r[13].w[0]);
    set32(c.r[11], 0u + 2689u);
    st32((c.r[16].w[0] + 10420u), c.r[14].w[0]);
    set32(c.r[13], 0u + 2707u);
    st32((c.r[16].w[0] + 10940u), c.r[2].w[0]);
    set32(c.r[14], 0u + 2715u);
    st32((c.r[16].w[0] + 11912u), c.r[3].w[0]);
    set32(c.r[2], 0u + 2695u);
    st32((c.r[16].w[0] + 12324u), c.r[4].w[0]);
    set32(c.r[3], 0u + 2834u);
    st32((c.r[16].w[0] + 12696u), c.r[5].w[0]);
    set32(c.r[4], 0u + 2832u);
    st32((c.r[16].w[0] + 12700u), c.r[8].w[0]);
    set32(c.r[5], 0u + 2308u);
    st32((c.r[16].w[0] + 12296u), c.r[9].w[0]);
    set32(c.r[8], 0u + 2479u);
    st32((c.r[16].w[0] + 12284u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 12288u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 7896u), c.r[10].w[0]);
    set32(c.r[9], 0u + 2833u);
    st32((c.r[16].w[0] + 12792u), c.r[11].w[0]);
    st32((c.r[16].w[0] + 13204u), c.r[13].w[0]);
    st32((c.r[16].w[0] + 12964u), c.r[14].w[0]);
    st32((c.r[16].w[0] + 13176u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 13672u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 14084u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 7884u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 7888u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 8764u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 8768u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 10936u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 13164u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 13168u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 14456u), c.r[9].w[0]);
    st32((c.r[16].w[0] + 14056u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 14460u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 14044u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 14048u), c.r[6].w[0]);
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
    c.budget -= 707;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F29D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], c.r[5].w[0] - 30024u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[3], c.r[3].w[0] - 14544u);
    set32(c.r[6], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[8], c.r[8].w[0] - 29656u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] - 28552u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[3], c.r[3].w[0] - 14488u);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] - 14432u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[12], c.r[12].w[0] - 28184u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[9], c.r[9].w[0] - 14376u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[9], c.r[6].w[0] + c.r[9].w[0]);
    set32(c.r[16], c.r[16].w[0] - 29288u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[11], c.r[11].w[0] - 14320u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[11], c.r[6].w[0] + c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[10], c.r[10].w[0] - 14264u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[10], c.r[6].w[0] + c.r[10].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[8], c.r[8].w[0] - 14208u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[8], c.r[6].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[14], c.r[14].w[0] - 27816u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[7], c.r[7].w[0] - 31864u);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[13], c.r[13].w[0] - 28920u);
    set32(c.r[2], c.r[2].w[0] + c.r[12].w[0]);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[15], c.r[15].w[0] - 31496u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 14712u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[12], c.r[12].w[0] - 30392u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[3].w[0])));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[11].w[0]), c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[14].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[10].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[13].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[8].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[15].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[12].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 99;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F2B60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B84u);  if (depth < kMaxDepth) unit_0049(c, 198u, depth + 1u); else { c.pc = 0x002267F0u; return; } if (c.pc != 0x001F2B84u) [[unlikely]] return; }
L_001F2B84:
    set32(c.r[16], 0u - 1u);
    st32((c.r[17].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2B98u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x001F2B98u) [[unlikely]] return; }
L_001F2B98:
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[3], 0u - 1u);
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[6], 0u + 2u);
    st8((c.r[17].w[0] + 10146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[5].w[0] << (c.r[18].w[0] & 31u));
    st32((c.r[17].w[0] + 132u), c.f[0]);
    st32((c.r[17].w[0] + 184u), c.f[1]);
    st32((c.r[17].w[0] + 176u), c.f[1]);
    st32((c.r[17].w[0] + 180u), c.f[1]);
    st32((c.r[17].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 136u), 0u);
    st32((c.r[17].w[0] + 144u), 0u);
    st32((c.r[17].w[0] + 148u), 0u);
    st32((c.r[17].w[0] + 152u), 0u);
    st32((c.r[17].w[0] + 208u), 0u);
    st32((c.r[17].w[0] + 216u), 0u);
    st16((c.r[17].w[0] + 312u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 117u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 36u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 664u), c.r[16].w[0]);
    st16((c.r[17].w[0] + 7686u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 212u), 0u);
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 7696u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 10131u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 612u), 0u);
    st16((c.r[17].w[0] + 10142u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 9276u), c.r[16].w[0]);
    st16((c.r[17].w[0] + 10002u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[17].w[0] + 10004u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[17].w[0] + 7710u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[17].w[0] + 7712u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[17].w[0] + 7714u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st8((c.r[17].w[0] + 10079u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10084u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 68u), 0u);
    st8((c.r[17].w[0] + 10129u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9064u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9065u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9066u), static_cast<std::uint8_t>(0u));
    st64((c.r[17].w[0] + 9240u), 0ull);
    st64((c.r[17].w[0] + 9248u), 0ull);
    st64((c.r[17].w[0] + 9256u), 0ull);
    st8((c.r[17].w[0] + 9067u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10139u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10140u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10099u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 588u), 0u);
    st64((c.r[17].w[0] + 560u), c.r[6].d[0]);
    st8((c.r[17].w[0] + 10087u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 10088u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 60;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2C88u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x001F2C88u) [[unlikely]] return; }
L_001F2C88:
    set32(c.r[2], 0u + 30000u);
    st32((c.r[17].w[0] + 9832u), c.r[16].w[0]);
    st16((c.r[17].w[0] + 9286u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 4u);
    st32((c.r[17].w[0] + 544u), 0u);
    set32(c.r[3], c.r[17].w[0] + 10124u);
    st32((c.r[17].w[0] + 548u), 0u);
    st32((c.r[17].w[0] + 552u), 0u);
    st16((c.r[17].w[0] + 9284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 10137u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 10138u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 10010u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
L_001F2CB8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2CB8u | kUnwind; return; } goto L_001F2CB8; } }
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    st16((c.r[17].w[0] + 10118u), static_cast<std::uint16_t>(0u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[17].w[0] + 9816u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[17].w[0] + 10280u);
    st8((c.r[17].w[0] + 9817u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 9818u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 9820u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 9819u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 116u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 10000u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 10144u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 8972u), 0u);
    st32((c.r[17].w[0] + 8976u), 0u);
    st32((c.r[17].w[0] + 8980u), 0u);
    st32((c.r[17].w[0] + 8984u), 0u);
    st32((c.r[17].w[0] + 8988u), 0u);
    st8((c.r[17].w[0] + 9969u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 9926u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D28u);  if (depth < kMaxDepth) unit_0037(c, 309u, depth + 1u); else { c.pc = 0x001DE638u; return; } if (c.pc != 0x001F2D28u) [[unlikely]] return; }
L_001F2D28:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D34u);  if (depth < kMaxDepth) unit_0084(c, 149u, depth + 1u); else { c.pc = 0x00312268u; return; } if (c.pc != 0x001F2D34u) [[unlikely]] return; }
L_001F2D34:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D40u);  if (depth < kMaxDepth) unit_003C(c, 260u, depth + 1u); else { c.pc = 0x001F29D0u; return; } if (c.pc != 0x001F2D40u) [[unlikely]] return; }
L_001F2D40:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2D50u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x001F2D50u) [[unlikely]] return; }
L_001F2D50:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[4], 0u + 880u);
    set32(c.r[3], ld32((c.r[17].w[0] + 104u)));
    set32(c.r[2], 0u - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st16((c.r[17].w[0] + 10880u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4440u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + 24688u);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0] + 632u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 628u)));
    set32(c.r[5], 0u + 184u);
    set32(c.r[8], 0u + 185u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 28u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[8].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DB8u);  if (depth < kMaxDepth) unit_0097(c, 191u, depth + 1u); else { c.pc = 0x0035DD88u; return; } if (c.pc != 0x001F2DB8u) [[unlikely]] return; }
L_001F2DB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] - 20496u);
    c.budget -= 4;
L_001F2DC8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F2DEC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2DE4u);  if (depth < kMaxDepth) unit_0049(c, 219u, depth + 1u); else { c.pc = 0x00226BA0u; return; } if (c.pc != 0x001F2DE4u) [[unlikely]] return; }
L_001F2DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F2E14; } }
L_001F2DEC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(38ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2DC8u | kUnwind; return; } goto L_001F2DC8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 20496u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E14u);  if (depth < kMaxDepth) unit_0049(c, 219u, depth + 1u); else { c.pc = 0x00226BA0u; return; } if (c.pc != 0x001F2E14u) [[unlikely]] return; }
L_001F2E14:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E20u);  if (depth < kMaxDepth) unit_009E(c, 69u, depth + 1u); else { c.pc = 0x00378A08u; return; } if (c.pc != 0x001F2E20u) [[unlikely]] return; }
L_001F2E20:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F2E40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] - 20504u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E74u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x001F2E74u) [[unlikely]] return; }
L_001F2E74:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] - 20504u), 0u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2E88u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x001F2E88u) [[unlikely]] return; }
L_001F2E88:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[18].w[0] + 1u);
    set32(c.r[2], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + 14208u);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 10;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001F2ED0; } }
    set32(c.r[2], 0u + 19u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7512u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F2EF0; } }
L_001F2ED0:
    set32(c.r[2], 0u + 19u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7512u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F2F24; } }
L_001F2EF0:
    set32(c.r[2], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 27456u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2F0Cu);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x001F2F0Cu) [[unlikely]] return; }
L_001F2F0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F2F24; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F2F24u);  if (depth < kMaxDepth) unit_0081(c, 86u, depth + 1u); else { c.pc = 0x003052C8u; return; } if (c.pc != 0x001F2F24u) [[unlikely]] return; }
L_001F2F24:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F2F48:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[25].d[0] = 0ull + 0ull;
    set32(c.r[30], c.r[2].w[0] + 31832u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[3], c.r[30].w[0] + 7326u);
    c.r[24].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[30].w[0] + 1528u);
    set32(c.r[2], c.r[24].w[0] + 7478u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[23], c.r[30].w[0] + 5896u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 24;
L_001F2FA8:
    st64((c.r[23].w[0] - 1336u), 0ull);
    set32(c.r[7], 0u + 1u);
    st64((c.r[23].w[0] - 120u), 0ull);
    set32(c.r[6], 0u + 62u);
    st64((c.r[23].w[0] - 1320u), 0ull);
    set32(c.r[5], c.r[30].w[0] + c.r[25].w[0]);
    st64((c.r[23].w[0] - 104u), 0ull);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[23].w[0] - 1328u), 0ull);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st64((c.r[23].w[0] - 112u), 0ull);
    set32(c.r[2], 0u + 25u);
    st64((c.r[23].w[0]), 0ull);
    c.r[15].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[24].w[0]), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], 0u + 1000u);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[24].w[0] + 2128u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], 0u + 12u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[24].w[0] + 2736u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[24].w[0] + 2432u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[14].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    c.r[13].d[0] = c.r[3].d[0] + 0ull;
    c.r[12].d[0] = c.r[3].d[0] + 0ull;
    c.r[11].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[7].w[0] - 8u), 0u);
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[24].w[0] + 608u), static_cast<std::uint16_t>(0u));
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[23], c.r[23].w[0] + 152u);
    set32(c.r[7], ld32((c.r[29].w[0] + 16u)));
    st16((c.r[24].w[0] + 912u), static_cast<std::uint16_t>(0u));
    set32(c.r[21], c.r[30].w[0] + c.r[7].w[0]);
    st16((c.r[24].w[0] + 1216u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], 0u + 53u);
    st16((c.r[24].w[0] + 6992u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], 0u + 60u);
    st16((c.r[24].w[0] + 7296u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], 0u + 1u);
    st16((c.r[24].w[0] + 4u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], 0u + 750u);
    st16((c.r[24].w[0] + 2132u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], 0u + 12u);
    st16((c.r[24].w[0] + 2740u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], 0u - 2u);
    st16((c.r[24].w[0] + 2436u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[24], c.r[24].w[0] + 38u);
    st32((c.r[7].w[0]), c.r[6].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[5].w[0] + 612u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[6], c.r[30].w[0] + c.r[5].w[0]);
    set32(c.r[5], 0u + 45u);
    st16((c.r[3].w[0] + 916u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 1220u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[3], 0u + 53u);
    st16((c.r[15].w[0] + 6996u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u + 60u);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    st16((c.r[16].w[0] + 7300u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1000u);
    set32(c.r[25], c.r[25].w[0] + 38u);
    st16((c.r[18].w[0] + 2130u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 12u);
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] + 76u);
    st32((c.r[29].w[0] + 12u), c.r[3].w[0]);
    st16((c.r[19].w[0] + 2738u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 76u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    st16((c.r[20].w[0] + 2434u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 53u);
    st32((c.r[21].w[0] + 1524u), 0u);
    set32(c.r[4], 0u + 60u);
    st16((c.r[22].w[0] + 610u), static_cast<std::uint16_t>(0u));
    st16((c.r[14].w[0] + 914u), static_cast<std::uint16_t>(0u));
    st16((c.r[13].w[0] + 1218u), static_cast<std::uint16_t>(0u));
    st16((c.r[12].w[0] + 6994u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[11].w[0] + 7298u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 1u);
    st16((c.r[10].w[0] + 30u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 1000u);
    st16((c.r[9].w[0] + 2158u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 12u);
    st16((c.r[8].w[0] + 2766u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 3u);
    st16((c.r[7].w[0] + 2462u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[7], 0u + 53u);
    st32((c.r[6].w[0] + 1580u), c.r[7].w[0]);
    st16((c.r[5].w[0] + 638u), static_cast<std::uint16_t>(0u));
    set32(c.r[6], 0u + 60u);
    set32(c.r[3], ld32((c.r[29].w[0])));
    st16((c.r[3].w[0] + 942u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    st16((c.r[4].w[0] + 1246u), static_cast<std::uint16_t>(0u));
    st16((c.r[2].w[0] + 7022u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 38u);
    set32(c.r[7], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 122;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F2FA8u | kUnwind; return; } goto L_001F2FA8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 28128u);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st32((c.r[2].w[0] + 184u), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F31D0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    mmi::mult(c, 0, c.r[30].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 23u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    set32(c.r[23], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 304u), c.f[20]);
    st32((c.r[29].w[0] + 128u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 132u), c.r[7].w[0]);
    c.budget -= 23;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 7694u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(90ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12576u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001F0000u < 16384u) { entry = entries_003C[(t - 0x001F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F3258:
    set32(c.r[18], 0u + 268u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[18].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[22].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 68u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[21].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32A4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F32A4u) [[unlikely]] return; }
L_001F32A4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[20], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    set32(c.r[19], c.r[2].w[0] << 4);
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[22].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32D4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F32D4u) [[unlikely]] return; }
L_001F32D4:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F32FCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F32FCu) [[unlikely]] return; }
L_001F32FC:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3318u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3318u) [[unlikely]] return; }
L_001F3318:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[2], 0u + 1056u);
    set32(c.r[17], c.r[17].w[0] + 17040u);
    set32(c.r[16], c.r[29].w[0] + 32u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[19].w[0]);
    set32(c.r[2], c.r[19].w[0] + c.r[17].w[0]);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.f[14] = ld32((c.r[3].w[0] + 8u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F335Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F335Cu) [[unlikely]] return; }
L_001F335C:
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[9], c.r[29].w[0] + 64u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3388u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F3388u) [[unlikely]] return; }
L_001F3388:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F33D4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F33D4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F33D4:
    set32(c.r[17], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 72u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[4].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3420u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3420u) [[unlikely]] return; }
L_001F3420:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F343Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F343Cu) [[unlikely]] return; }
L_001F343C:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3460u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3460u) [[unlikely]] return; }
L_001F3460:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F347Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F347Cu) [[unlikely]] return; }
L_001F347C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], 0u + 1056u);
    set32(c.r[3], c.r[4].w[0] + 17040u);
    c.f[15] = c.f[20];
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F34BCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F34BCu) [[unlikely]] return; }
L_001F34BC:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F34DCu);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F34DCu) [[unlikely]] return; }
L_001F34DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F3528; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F3528; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F3528:
    set32(c.r[17], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 76u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[4].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3574u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3574u) [[unlikely]] return; }
L_001F3574:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3590u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3590u) [[unlikely]] return; }
L_001F3590:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F35B4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F35B4u) [[unlikely]] return; }
L_001F35B4:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F35D0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F35D0u) [[unlikely]] return; }
L_001F35D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], 0u + 1056u);
    set32(c.r[3], c.r[4].w[0] + 17040u);
    c.f[15] = c.f[20];
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3610u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3610u) [[unlikely]] return; }
L_001F3610:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3630u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F3630u) [[unlikely]] return; }
L_001F3630:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F367C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F367C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F367C:
    set32(c.r[17], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 80u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[4].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36C8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F36C8u) [[unlikely]] return; }
L_001F36C8:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F36E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F36E4u) [[unlikely]] return; }
L_001F36E4:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3708u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3708u) [[unlikely]] return; }
L_001F3708:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3724u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3724u) [[unlikely]] return; }
L_001F3724:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], 0u + 1056u);
    set32(c.r[3], c.r[4].w[0] + 17040u);
    c.f[15] = c.f[20];
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3764u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3764u) [[unlikely]] return; }
L_001F3764:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3784u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F3784u) [[unlikely]] return; }
L_001F3784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F37D0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F37D0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F37D0:
    set32(c.r[17], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 84u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[4].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F381Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F381Cu) [[unlikely]] return; }
L_001F381C:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3838u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3838u) [[unlikely]] return; }
L_001F3838:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F385Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F385Cu) [[unlikely]] return; }
L_001F385C:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3878u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3878u) [[unlikely]] return; }
L_001F3878:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], 0u + 1056u);
    set32(c.r[3], c.r[4].w[0] + 17040u);
    c.f[15] = c.f[20];
    set32(c.r[4], ld32((c.r[29].w[0] + 128u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = ld32((c.r[3].w[0] + 4u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F38B8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F38B8u) [[unlikely]] return; }
L_001F38B8:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F38D8u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F38D8u) [[unlikely]] return; }
L_001F38D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F3924:
    set32(c.r[17], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 92u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3970u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3970u) [[unlikely]] return; }
L_001F3970:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3990u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3990u) [[unlikely]] return; }
L_001F3990:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39B4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F39B4u) [[unlikely]] return; }
L_001F39B4:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F39D0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F39D0u) [[unlikely]] return; }
L_001F39D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[5], 0u + 1056u);
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A1Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3A1Cu) [[unlikely]] return; }
L_001F3A1C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 68u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3A3Cu);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F3A3Cu) [[unlikely]] return; }
L_001F3A3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F3A88:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3ABCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3ABCu) [[unlikely]] return; }
L_001F3ABC:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3ADCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3ADCu) [[unlikely]] return; }
L_001F3ADC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 23u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 1000u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B00u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3B00u) [[unlikely]] return; }
L_001F3B00:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B1Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3B1Cu) [[unlikely]] return; }
L_001F3B1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[5], 0u + 1056u);
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B68u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3B68u) [[unlikely]] return; }
L_001F3B68:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 72u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3B88u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F3B88u) [[unlikely]] return; }
L_001F3B88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F3BD4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C08u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3C08u) [[unlikely]] return; }
L_001F3C08:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C28u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3C28u) [[unlikely]] return; }
L_001F3C28:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 23u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 1100u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C4Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3C4Cu) [[unlikely]] return; }
L_001F3C4C:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3C68u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3C68u) [[unlikely]] return; }
L_001F3C68:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[5], 0u + 1056u);
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3CB4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3CB4u) [[unlikely]] return; }
L_001F3CB4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 76u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3CD4u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F3CD4u) [[unlikely]] return; }
L_001F3CD4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F3D20:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3D54u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3D54u) [[unlikely]] return; }
L_001F3D54:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3D74u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3D74u) [[unlikely]] return; }
L_001F3D74:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 23u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3D98u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3D98u) [[unlikely]] return; }
L_001F3D98:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3DB4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3DB4u) [[unlikely]] return; }
L_001F3DB4:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[5], 0u + 1056u);
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3E00u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3E00u) [[unlikely]] return; }
L_001F3E00:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3E20u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F3E20u) [[unlikely]] return; }
L_001F3E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 80u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F3E6C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], 0u + 23u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3EA0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3EA0u) [[unlikely]] return; }
L_001F3EA0:
    set32(c.r[17], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3EC0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3EC0u) [[unlikely]] return; }
L_001F3EC0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 23u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3EE4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F3EE4u) [[unlikely]] return; }
L_001F3EE4:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3F00u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3F00u) [[unlikely]] return; }
L_001F3F00:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[5], 0u + 1056u);
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.f[15] = c.f[20];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3F4Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F3F4Cu) [[unlikely]] return; }
L_001F3F4C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 84u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F3F6Cu);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F3F6Cu) [[unlikely]] return; }
L_001F3F6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 84u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 108u, depth); } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_003D(c, 107u, depth); } }
L_001F3FB8:
    set32(c.r[17], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 92u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4004u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_003D(c, 2u, depth);
}

}
