#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007E[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0,
    11, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0,
    0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 260, 0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292,
    0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0,
    0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359,
    0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
};

void unit_007E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F8000;
    case 2u: goto L_002F8018;
    case 3u: goto L_002F8020;
    case 4u: goto L_002F8030;
    case 5u: goto L_002F8038;
    case 6u: goto L_002F8044;
    case 7u: goto L_002F8058;
    case 8u: goto L_002F8068;
    case 9u: goto L_002F8070;
    case 10u: goto L_002F8078;
    case 11u: goto L_002F8080;
    case 12u: goto L_002F808C;
    case 13u: goto L_002F8094;
    case 14u: goto L_002F80A4;
    case 15u: goto L_002F80AC;
    case 16u: goto L_002F80B4;
    case 17u: goto L_002F80BC;
    case 18u: goto L_002F80C8;
    case 19u: goto L_002F80D0;
    case 20u: goto L_002F80D8;
    case 21u: goto L_002F80E0;
    case 22u: goto L_002F80E8;
    case 23u: goto L_002F80F0;
    case 24u: goto L_002F8100;
    case 25u: goto L_002F8110;
    case 26u: goto L_002F8120;
    case 27u: goto L_002F8130;
    case 28u: goto L_002F8148;
    case 29u: goto L_002F8150;
    case 30u: goto L_002F8158;
    case 31u: goto L_002F8160;
    case 32u: goto L_002F8168;
    case 33u: goto L_002F8170;
    case 34u: goto L_002F8178;
    case 35u: goto L_002F8180;
    case 36u: goto L_002F8190;
    case 37u: goto L_002F81A8;
    case 38u: goto L_002F81B8;
    case 39u: goto L_002F81D0;
    case 40u: goto L_002F81E0;
    case 41u: goto L_002F81F0;
    case 42u: goto L_002F8200;
    case 43u: goto L_002F8214;
    case 44u: goto L_002F8228;
    case 45u: goto L_002F8240;
    case 46u: goto L_002F8250;
    case 47u: goto L_002F8264;
    case 48u: goto L_002F8284;
    case 49u: goto L_002F8298;
    case 50u: goto L_002F82AC;
    case 51u: goto L_002F82CC;
    case 52u: goto L_002F82E0;
    case 53u: goto L_002F82F8;
    case 54u: goto L_002F8318;
    case 55u: goto L_002F832C;
    case 56u: goto L_002F8340;
    case 57u: goto L_002F8360;
    case 58u: goto L_002F836C;
    case 59u: goto L_002F8380;
    case 60u: goto L_002F8394;
    case 61u: goto L_002F83B0;
    case 62u: goto L_002F83C8;
    case 63u: goto L_002F83E0;
    case 64u: goto L_002F83F0;
    case 65u: goto L_002F83F8;
    case 66u: goto L_002F840C;
    case 67u: goto L_002F8428;
    case 68u: goto L_002F8438;
    case 69u: goto L_002F8468;
    case 70u: goto L_002F84C0;
    case 71u: goto L_002F84F0;
    case 72u: goto L_002F850C;
    case 73u: goto L_002F8538;
    case 74u: goto L_002F8564;
    case 75u: goto L_002F8578;
    case 76u: goto L_002F8590;
    case 77u: goto L_002F85C0;
    case 78u: goto L_002F8600;
    case 79u: goto L_002F8620;
    case 80u: goto L_002F8640;
    case 81u: goto L_002F8670;
    case 82u: goto L_002F86A0;
    case 83u: goto L_002F8748;
    case 84u: goto L_002F8768;
    case 85u: goto L_002F8788;
    case 86u: goto L_002F87C8;
    case 87u: goto L_002F87E4;
    case 88u: goto L_002F87F8;
    case 89u: goto L_002F880C;
    case 90u: goto L_002F8898;
    case 91u: goto L_002F88E8;
    case 92u: goto L_002F89C4;
    case 93u: goto L_002F8A0C;
    case 94u: goto L_002F8A60;
    case 95u: goto L_002F8A94;
    case 96u: goto L_002F8AA0;
    case 97u: goto L_002F8AB4;
    case 98u: goto L_002F8B40;
    case 99u: goto L_002F8B60;
    case 100u: goto L_002F8BE8;
    case 101u: goto L_002F8BF8;
    case 102u: goto L_002F8C10;
    case 103u: goto L_002F8C28;
    case 104u: goto L_002F8C88;
    case 105u: goto L_002F8C94;
    case 106u: goto L_002F8CB0;
    case 107u: goto L_002F8CC0;
    case 108u: goto L_002F8D70;
    case 109u: goto L_002F8E24;
    case 110u: goto L_002F8E38;
    case 111u: goto L_002F8E4C;
    case 112u: goto L_002F8E60;
    case 113u: goto L_002F8E70;
    case 114u: goto L_002F8E80;
    case 115u: goto L_002F8EA8;
    case 116u: goto L_002F8ED8;
    case 117u: goto L_002F8F00;
    case 118u: goto L_002F8F14;
    case 119u: goto L_002F8F28;
    case 120u: goto L_002F8F3C;
    case 121u: goto L_002F8F50;
    case 122u: goto L_002F9058;
    case 123u: goto L_002F90C4;
    case 124u: goto L_002F9178;
    case 125u: goto L_002F91D4;
    case 126u: goto L_002F9244;
    case 127u: goto L_002F924C;
    case 128u: goto L_002F925C;
    case 129u: goto L_002F9290;
    case 130u: goto L_002F92E8;
    case 131u: goto L_002F935C;
    case 132u: goto L_002F9390;
    case 133u: goto L_002F93F8;
    case 134u: goto L_002F9448;
    case 135u: goto L_002F9474;
    case 136u: goto L_002F947C;
    case 137u: goto L_002F94A4;
    case 138u: goto L_002F94C8;
    case 139u: goto L_002F94D0;
    case 140u: goto L_002F94E8;
    case 141u: goto L_002F9530;
    case 142u: goto L_002F95A0;
    case 143u: goto L_002F961C;
    case 144u: goto L_002F9620;
    case 145u: goto L_002F967C;
    case 146u: goto L_002F9698;
    case 147u: goto L_002F96BC;
    case 148u: goto L_002F96DC;
    case 149u: goto L_002F96E8;
    case 150u: goto L_002F96F8;
    case 151u: goto L_002F9710;
    case 152u: goto L_002F9748;
    case 153u: goto L_002F9788;
    case 154u: goto L_002F97C8;
    case 155u: goto L_002F9808;
    case 156u: goto L_002F9848;
    case 157u: goto L_002F987C;
    case 158u: goto L_002F98C4;
    case 159u: goto L_002F98F8;
    case 160u: goto L_002F9920;
    case 161u: goto L_002F992C;
    case 162u: goto L_002F993C;
    case 163u: goto L_002F9980;
    case 164u: goto L_002F99C8;
    case 165u: goto L_002F9A00;
    case 166u: goto L_002F9A60;
    case 167u: goto L_002F9AD4;
    case 168u: goto L_002F9AE4;
    case 169u: goto L_002F9B20;
    case 170u: goto L_002F9B54;
    case 171u: goto L_002F9BB0;
    case 172u: goto L_002F9C90;
    case 173u: goto L_002F9CD8;
    case 174u: goto L_002F9D08;
    case 175u: goto L_002F9D68;
    case 176u: goto L_002F9DDC;
    case 177u: goto L_002F9E18;
    case 178u: goto L_002F9E4C;
    case 179u: goto L_002F9EA8;
    case 180u: goto L_002F9F88;
    case 181u: goto L_002FA10C;
    case 182u: goto L_002FA12C;
    case 183u: goto L_002FA140;
    case 184u: goto L_002FA150;
    case 185u: goto L_002FA1A8;
    case 186u: goto L_002FA228;
    case 187u: goto L_002FA2A4;
    case 188u: goto L_002FA318;
    case 189u: goto L_002FA388;
    case 190u: goto L_002FA3F8;
    case 191u: goto L_002FA468;
    case 192u: goto L_002FA4D8;
    case 193u: goto L_002FA528;
    case 194u: goto L_002FA540;
    case 195u: goto L_002FA558;
    case 196u: goto L_002FA578;
    case 197u: goto L_002FA588;
    case 198u: goto L_002FA5A0;
    case 199u: goto L_002FA5C0;
    case 200u: goto L_002FA5D0;
    case 201u: goto L_002FA5F4;
    case 202u: goto L_002FA618;
    case 203u: goto L_002FA640;
    case 204u: goto L_002FA658;
    case 205u: goto L_002FA664;
    case 206u: goto L_002FA690;
    case 207u: goto L_002FA6C8;
    case 208u: goto L_002FA6F0;
    case 209u: goto L_002FA708;
    case 210u: goto L_002FA714;
    case 211u: goto L_002FA738;
    case 212u: goto L_002FA770;
    case 213u: goto L_002FA778;
    case 214u: goto L_002FA780;
    case 215u: goto L_002FA798;
    case 216u: goto L_002FA7A8;
    case 217u: goto L_002FA7B8;
    case 218u: goto L_002FA7D0;
    case 219u: goto L_002FA7E0;
    case 220u: goto L_002FA820;
    case 221u: goto L_002FA828;
    case 222u: goto L_002FA848;
    case 223u: goto L_002FA86C;
    case 224u: goto L_002FA884;
    case 225u: goto L_002FA89C;
    case 226u: goto L_002FA8B4;
    case 227u: goto L_002FA8CC;
    case 228u: goto L_002FA8E4;
    case 229u: goto L_002FA8FC;
    case 230u: goto L_002FA914;
    case 231u: goto L_002FA950;
    case 232u: goto L_002FA968;
    case 233u: goto L_002FA980;
    case 234u: goto L_002FA99C;
    case 235u: goto L_002FA9C4;
    case 236u: goto L_002FA9D8;
    case 237u: goto L_002FAA60;
    case 238u: goto L_002FAAB8;
    case 239u: goto L_002FAAC0;
    case 240u: goto L_002FAACC;
    case 241u: goto L_002FAB0C;
    case 242u: goto L_002FAB1C;
    case 243u: goto L_002FAB28;
    case 244u: goto L_002FAB30;
    case 245u: goto L_002FAB3C;
    case 246u: goto L_002FAB68;
    case 247u: goto L_002FABC8;
    case 248u: goto L_002FABF0;
    case 249u: goto L_002FABF8;
    case 250u: goto L_002FAC04;
    case 251u: goto L_002FAC44;
    case 252u: goto L_002FAC60;
    case 253u: goto L_002FAC68;
    case 254u: goto L_002FAC70;
    case 255u: goto L_002FAC7C;
    case 256u: goto L_002FACB0;
    case 257u: goto L_002FACF8;
    case 258u: goto L_002FAD24;
    case 259u: goto L_002FAD34;
    case 260u: goto L_002FAD38;
    case 261u: goto L_002FAD40;
    case 262u: goto L_002FAD4C;
    case 263u: goto L_002FAD74;
    case 264u: goto L_002FAD90;
    case 265u: goto L_002FADA8;
    case 266u: goto L_002FADB0;
    case 267u: goto L_002FADE4;
    case 268u: goto L_002FAE00;
    case 269u: goto L_002FAE30;
    case 270u: goto L_002FAE5C;
    case 271u: goto L_002FAE78;
    case 272u: goto L_002FAEA4;
    case 273u: goto L_002FAEC0;
    case 274u: goto L_002FAEF0;
    case 275u: goto L_002FAF00;
    case 276u: goto L_002FAF18;
    case 277u: goto L_002FAF28;
    case 278u: goto L_002FAF4C;
    case 279u: goto L_002FAF6C;
    case 280u: goto L_002FAF88;
    case 281u: goto L_002FAF94;
    case 282u: goto L_002FAFB0;
    case 283u: goto L_002FAFF8;
    case 284u: goto L_002FB010;
    case 285u: goto L_002FB030;
    case 286u: goto L_002FB048;
    case 287u: goto L_002FB054;
    case 288u: goto L_002FB070;
    case 289u: goto L_002FB0B4;
    case 290u: goto L_002FB0C0;
    case 291u: goto L_002FB0F4;
    case 292u: goto L_002FB0FC;
    case 293u: goto L_002FB118;
    case 294u: goto L_002FB134;
    case 295u: goto L_002FB13C;
    case 296u: goto L_002FB168;
    case 297u: goto L_002FB170;
    case 298u: goto L_002FB188;
    case 299u: goto L_002FB1A0;
    case 300u: goto L_002FB1AC;
    case 301u: goto L_002FB1C0;
    case 302u: goto L_002FB1EC;
    case 303u: goto L_002FB1F4;
    case 304u: goto L_002FB220;
    case 305u: goto L_002FB228;
    case 306u: goto L_002FB230;
    case 307u: goto L_002FB238;
    case 308u: goto L_002FB244;
    case 309u: goto L_002FB260;
    case 310u: goto L_002FB290;
    case 311u: goto L_002FB298;
    case 312u: goto L_002FB2A4;
    case 313u: goto L_002FB2C8;
    case 314u: goto L_002FB2D0;
    case 315u: goto L_002FB2DC;
    case 316u: goto L_002FB300;
    case 317u: goto L_002FB380;
    case 318u: goto L_002FB538;
    case 319u: goto L_002FB57C;
    case 320u: goto L_002FB5CC;
    case 321u: goto L_002FB768;
    case 322u: goto L_002FB7B4;
    case 323u: goto L_002FB7D8;
    case 324u: goto L_002FB7EC;
    case 325u: goto L_002FB83C;
    case 326u: goto L_002FB8C0;
    case 327u: goto L_002FB8FC;
    case 328u: goto L_002FB928;
    case 329u: goto L_002FB968;
    case 330u: goto L_002FB9EC;
    case 331u: goto L_002FBA28;
    case 332u: goto L_002FBA58;
    case 333u: goto L_002FBAE4;
    case 334u: goto L_002FBB00;
    case 335u: goto L_002FBB14;
    case 336u: goto L_002FBB28;
    case 337u: goto L_002FBB64;
    case 338u: goto L_002FBB78;
    case 339u: goto L_002FBBBC;
    case 340u: goto L_002FBBD0;
    case 341u: goto L_002FBC28;
    case 342u: goto L_002FBC44;
    case 343u: goto L_002FBCE8;
    case 344u: goto L_002FBCFC;
    case 345u: goto L_002FBD10;
    case 346u: goto L_002FBD24;
    case 347u: goto L_002FBD50;
    case 348u: goto L_002FBD6C;
    case 349u: goto L_002FBD9C;
    case 350u: goto L_002FBDE0;
    case 351u: goto L_002FBE30;
    case 352u: goto L_002FBE40;
    case 353u: goto L_002FBE90;
    case 354u: goto L_002FBEA4;
    case 355u: goto L_002FBEB8;
    case 356u: goto L_002FBECC;
    case 357u: goto L_002FBEE0;
    case 358u: goto L_002FBF38;
    case 359u: goto L_002FBF7C;
    case 360u: goto L_002FBF90;
    case 361u: goto L_002FBFF8;
    default: bad_entry(c, 0x002F8000u); return;
    }
L_002F8000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8030u);  if (depth < kMaxDepth) unit_0084(c, 273u, depth + 1u); else { c.pc = 0x00313CA0u; return; } if (c.pc != 0x002F8030u) [[unlikely]] return; }
L_002F8030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8038u);  if (depth < kMaxDepth) unit_0084(c, 28u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x002F8038u) [[unlikely]] return; }
L_002F8038:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8044u);  if (depth < kMaxDepth) unit_0076(c, 120u, depth + 1u); else { c.pc = 0x002D9C60u; return; } if (c.pc != 0x002F8044u) [[unlikely]] return; }
L_002F8044:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8058:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8068u);  if (depth < kMaxDepth) unit_003C(c, 166u, depth + 1u); else { c.pc = 0x001F18C0u; return; } if (c.pc != 0x002F8068u) [[unlikely]] return; }
L_002F8068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8070u);  if (depth < kMaxDepth) unit_0053(c, 7u, depth + 1u); else { c.pc = 0x0024C1F8u; return; } if (c.pc != 0x002F8070u) [[unlikely]] return; }
L_002F8070:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8078u);  if (depth < kMaxDepth) unit_0049(c, 241u, depth + 1u); else { c.pc = 0x00226EA0u; return; } if (c.pc != 0x002F8078u) [[unlikely]] return; }
L_002F8078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8080u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002F8080u) [[unlikely]] return; }
L_002F8080:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F808Cu);  if (depth < kMaxDepth) unit_0077(c, 22u, depth + 1u); else { c.pc = 0x002DC5D8u; return; } if (c.pc != 0x002F808Cu) [[unlikely]] return; }
L_002F808C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8094u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002F8094u) [[unlikely]] return; }
L_002F8094:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80A4u);  if (depth < kMaxDepth) unit_0077(c, 27u, depth + 1u); else { c.pc = 0x002DC6B8u; return; } if (c.pc != 0x002F80A4u) [[unlikely]] return; }
L_002F80A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80ACu);  if (depth < kMaxDepth) unit_0049(c, 243u, depth + 1u); else { c.pc = 0x00226EC8u; return; } if (c.pc != 0x002F80ACu) [[unlikely]] return; }
L_002F80AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80B4u);  if (depth < kMaxDepth) unit_007E(c, 85u, depth + 1u); else { c.pc = 0x002F8788u; return; } if (c.pc != 0x002F80B4u) [[unlikely]] return; }
L_002F80B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80BCu);  if (depth < kMaxDepth) unit_0084(c, 28u, depth + 1u); else { c.pc = 0x00310440u; return; } if (c.pc != 0x002F80BCu) [[unlikely]] return; }
L_002F80BC:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80C8u);  if (depth < kMaxDepth) unit_0076(c, 120u, depth + 1u); else { c.pc = 0x002D9C60u; return; } if (c.pc != 0x002F80C8u) [[unlikely]] return; }
L_002F80C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80D0u);  if (depth < kMaxDepth) unit_0088(c, 114u, depth + 1u); else { c.pc = 0x00321368u; return; } if (c.pc != 0x002F80D0u) [[unlikely]] return; }
L_002F80D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80D8u);  if (depth < kMaxDepth) unit_003D(c, 145u, depth + 1u); else { c.pc = 0x001F6C90u; return; } if (c.pc != 0x002F80D8u) [[unlikely]] return; }
L_002F80D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80E0u);  if (depth < kMaxDepth) unit_003C(c, 280u, depth + 1u); else { c.pc = 0x001F2F48u; return; } if (c.pc != 0x002F80E0u) [[unlikely]] return; }
L_002F80E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80E8u);  if (depth < kMaxDepth) unit_0073(c, 97u, depth + 1u); else { c.pc = 0x002CDC18u; return; } if (c.pc != 0x002F80E8u) [[unlikely]] return; }
L_002F80E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80F0u);  if (depth < kMaxDepth) unit_0073(c, 115u, depth + 1u); else { c.pc = 0x002CDD70u; return; } if (c.pc != 0x002F80F0u) [[unlikely]] return; }
L_002F80F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8110u);  if (depth < kMaxDepth) unit_0077(c, 18u, depth + 1u); else { c.pc = 0x002DC568u; return; } if (c.pc != 0x002F8110u) [[unlikely]] return; }
L_002F8110:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8120u);  if (depth < kMaxDepth) unit_0077(c, 27u, depth + 1u); else { c.pc = 0x002DC6B8u; return; } if (c.pc != 0x002F8120u) [[unlikely]] return; }
L_002F8120:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 24040u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8148u);  if (depth < kMaxDepth) unit_007D(c, 282u, depth + 1u); else { c.pc = 0x002F7E70u; return; } if (c.pc != 0x002F8148u) [[unlikely]] return; }
L_002F8148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8150u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002F8150u) [[unlikely]] return; }
L_002F8150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8158u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002F8158u) [[unlikely]] return; }
L_002F8158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8160u);  if (depth < kMaxDepth) unit_0057(c, 205u, depth + 1u); else { c.pc = 0x0025EE98u; return; } if (c.pc != 0x002F8160u) [[unlikely]] return; }
L_002F8160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8168u);  if (depth < kMaxDepth) unit_0043(c, 28u, depth + 1u); else { c.pc = 0x0020C750u; return; } if (c.pc != 0x002F8168u) [[unlikely]] return; }
L_002F8168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8170u);  if (depth < kMaxDepth) unit_0043(c, 19u, depth + 1u); else { c.pc = 0x0020C570u; return; } if (c.pc != 0x002F8170u) [[unlikely]] return; }
L_002F8170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8178u);  if (depth < kMaxDepth) unit_0044(c, 26u, depth + 1u); else { c.pc = 0x00210D60u; return; } if (c.pc != 0x002F8178u) [[unlikely]] return; }
L_002F8178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8180u);  if (depth < kMaxDepth) unit_0058(c, 60u, depth + 1u); else { c.pc = 0x00260968u; return; } if (c.pc != 0x002F8180u) [[unlikely]] return; }
L_002F8180:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8190:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81A8u);  if (depth < kMaxDepth) unit_007D(c, 287u, depth + 1u); else { c.pc = 0x002F7EE8u; return; } if (c.pc != 0x002F81A8u) [[unlikely]] return; }
L_002F81A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F81B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81D0u);  if (depth < kMaxDepth) unit_007D(c, 287u, depth + 1u); else { c.pc = 0x002F7EE8u; return; } if (c.pc != 0x002F81D0u) [[unlikely]] return; }
L_002F81D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F81E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81F0u);  if (depth < kMaxDepth) unit_0039(c, 302u, depth + 1u); else { c.pc = 0x001E6938u; return; } if (c.pc != 0x002F81F0u) [[unlikely]] return; }
L_002F81F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8214u);  if (depth < kMaxDepth) unit_0049(c, 234u, depth + 1u); else { c.pc = 0x00226DF0u; return; } if (c.pc != 0x002F8214u) [[unlikely]] return; }
L_002F8214:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8240u);  if (depth < kMaxDepth) unit_0094(c, 109u, depth + 1u); else { c.pc = 0x00351678u; return; } if (c.pc != 0x002F8240u) [[unlikely]] return; }
L_002F8240:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8264u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x002F8264u) [[unlikely]] return; }
L_002F8264:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F82A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F828C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8284u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8284u) [[unlikely]] return; }
L_002F8284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F82AC; } }
L_002F828C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8298u);  if (depth < kMaxDepth) unit_0049(c, 234u, depth + 1u); else { c.pc = 0x00226DF0u; return; } if (c.pc != 0x002F8298u) [[unlikely]] return; }
L_002F8298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F82AC; } }
L_002F82A0:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82ACu);  if (depth < kMaxDepth) unit_0049(c, 234u, depth + 1u); else { c.pc = 0x00226DF0u; return; } if (c.pc != 0x002F82ACu) [[unlikely]] return; }
L_002F82AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002F82CC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] + 26848u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82CCu);  if (depth < kMaxDepth) unit_0093(c, 169u, depth + 1u); else { c.pc = 0x0034DEE8u; return; } if (c.pc != 0x002F82CCu) [[unlikely]] return; }
L_002F82CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F82E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82F8u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x002F82F8u) [[unlikely]] return; }
L_002F82F8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F8334; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8320; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8318u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8318u) [[unlikely]] return; }
L_002F8318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8340; } }
L_002F8320:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F832Cu);  if (depth < kMaxDepth) unit_0049(c, 234u, depth + 1u); else { c.pc = 0x00226DF0u; return; } if (c.pc != 0x002F832Cu) [[unlikely]] return; }
L_002F832C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8340; } }
L_002F8334:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8340u);  if (depth < kMaxDepth) unit_0049(c, 234u, depth + 1u); else { c.pc = 0x00226DF0u; return; } if (c.pc != 0x002F8340u) [[unlikely]] return; }
L_002F8340:
    set32(c.r[5], ld32((c.r[16].w[0] + 100u)));
    set32(c.r[2], 0u - 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002F8360; } }
    set32(c.r[4], c.r[16].w[0] + 26848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8360u);  if (depth < kMaxDepth) unit_0093(c, 169u, depth + 1u); else { c.pc = 0x0034DEE8u; return; } if (c.pc != 0x002F8360u) [[unlikely]] return; }
L_002F8360:
    set32(c.r[4], c.r[16].w[0] + 26848u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F836Cu);  if (depth < kMaxDepth) unit_0093(c, 266u, depth + 1u); else { c.pc = 0x0034EB20u; return; } if (c.pc != 0x002F836Cu) [[unlikely]] return; }
L_002F836C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8394u);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x002F8394u) [[unlikely]] return; }
L_002F8394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F83D0; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F83B8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83B0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F83B0u) [[unlikely]] return; }
L_002F83B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F83E0; } }
L_002F83B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83C8u);  if (depth < kMaxDepth) unit_0094(c, 109u, depth + 1u); else { c.pc = 0x00351678u; return; } if (c.pc != 0x002F83C8u) [[unlikely]] return; }
L_002F83C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F83E0; } }
L_002F83D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83E0u);  if (depth < kMaxDepth) unit_0094(c, 109u, depth + 1u); else { c.pc = 0x00351678u; return; } if (c.pc != 0x002F83E0u) [[unlikely]] return; }
L_002F83E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F83F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F83F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F840Cu);  if (depth < kMaxDepth) unit_007E(c, 68u, depth + 1u); else { c.pc = 0x002F8438u; return; } if (c.pc != 0x002F840Cu) [[unlikely]] return; }
L_002F840C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8428; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8428; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8428u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8428u) [[unlikely]] return; }
L_002F8428:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8438:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8468u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8468u) [[unlikely]] return; }
L_002F8468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8494; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8494; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F84A4; } }
L_002F8494:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
L_002F84A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F84C0:
    set32(c.r[6], ld32((c.r[4].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[5].w[0] + 24344u);
    set32(c.r[7], ld32((c.r[4].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F84F0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F850C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F850C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24368u);
    set32(c.r[5], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8538:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[4].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8564u);  if (depth < kMaxDepth) unit_0044(c, 121u, depth + 1u); else { c.pc = 0x002124B0u; return; } if (c.pc != 0x002F8564u) [[unlikely]] return; }
L_002F8564:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_002F85A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[17], c.r[2].w[0] + 24368u);
    c.budget -= 2;
L_002F8578:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8590u);  if (depth < kMaxDepth) unit_0044(c, 122u, depth + 1u); else { c.pc = 0x002124C0u; return; } if (c.pc != 0x002F8590u) [[unlikely]] return; }
L_002F8590:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8578u | kUnwind; return; } goto L_002F8578; } }
L_002F85A4:
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F85D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24368u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002F85C0:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[16].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F85C0u | kUnwind; return; } goto L_002F85C0; } }
L_002F85D8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8600:
    set32(c.r[3], 0u + 108u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 12408u);
    set32(c.r[3], 0u + 26u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 104u);
    c.budget -= 8;
L_002F8620:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8620u | kUnwind; return; } goto L_002F8620; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 560u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 5000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8670u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002F8670u) [[unlikely]] return; }
L_002F8670:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.r[9].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u - 999u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F8718; } }
    set32(c.r[2], 0u + 108u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[10], ld32((c.r[3].w[0] + 17024u)));
    set32(c.r[4], 0u + 56u);
    set32(c.r[8], c.r[9].w[0] - 12408u);
    set32(c.r[7], 0u - 999u);
    c.budget -= 7;
L_002F86A0:
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F86B8; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[10].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
L_002F86B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F86D0; } }
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[10].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
L_002F86D0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[5], c.r[16].w[0] + 56u);
    c.r[2].d[0] = c.r[3].sd[0] < -1ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8708; } }
    set32(c.r[2], 0u - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002F8708; } }
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_002F8708:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F86A0u | kUnwind; return; } goto L_002F86A0; } }
L_002F8718:
    set32(c.r[3], 0u + 108u);
    set32(c.r[2], c.r[9].w[0] - 12408u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8748:
    set32(c.r[3], 0u + 108u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 12408u);
    set32(c.r[3], 0u + 26u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 104u);
    c.budget -= 8;
L_002F8768:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8768u | kUnwind; return; } goto L_002F8768; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8788:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], ld32((c.r[2].w[0] + 18708u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[7].w[0] - 18856u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[5], 0u + 4800u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] - 18808u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 93u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87C8u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002F87C8u) [[unlikely]] return; }
L_002F87C8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[16].w[0] + 24428u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 4800u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F87E4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002F87E4u) [[unlikely]] return; }
L_002F87E4:
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[16].w[0] + 24428u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[18], 0u + 99u);
    st32((c.r[2].w[0] + 24432u), c.r[16].w[0]);
    c.budget -= 5;
L_002F87F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F880Cu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002F880Cu) [[unlikely]] return; }
L_002F880C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002F882C; } }
    set32(c.r[2], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8860; } }
L_002F882C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_002F884C; } }
    set32(c.r[2], c.r[16].w[0] - 48u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8860; } }
L_002F884C:
    set32(c.r[3], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[16].w[0] - 48u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_002F8860:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F87F8u | kUnwind; return; } goto L_002F87F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 24436u), 0u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8898:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0] + 24436u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 17;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F8A20; } }
    set32(c.r[22], 0u - 1u);
    set32(c.r[21], 0u + 1u);
    c.budget -= 3;
L_002F88E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[17], ld32((c.r[16].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8984; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[16].w[0] + 36u), c.r[22].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24432u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8928; } }
    st32((c.r[16].w[0]), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[4].w[0] + 24432u), c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8934; } }
L_002F8928:
    st32((c.r[4].w[0] + 24432u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
L_002F8934:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8960; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8954; } }
    st32((c.r[3].w[0]), c.r[17].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F89A4; } }
L_002F8954:
    st32((c.r[3].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F89A4; } }
L_002F8960:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8978; } }
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[20].w[0] + 24436u), c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F89A4; } }
L_002F8978:
    st32((c.r[20].w[0] + 24436u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F89A4; } }
L_002F8984:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F89A0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[18].d[0] ^ c.r[2].d[0];
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[21].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F89A4; } }
L_002F89A0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002F89A4:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F8A14; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F89C4; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F89C4u) [[unlikely]] return; }
L_002F89C4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8A0C; } }
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8A0C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 44u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8A0C; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A0Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F8A0Cu) [[unlikely]] return; }
L_002F8A0C:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_002F8A14:
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F88E8u | kUnwind; return; } goto L_002F88E8; } }
L_002F8A20:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[3].w[0] + 14664u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 20u), 0u);
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8A60:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 4800u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24428u)));
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 99u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A94u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002F8A94u) [[unlikely]] return; }
L_002F8A94:
    set32(c.r[16], ld32((c.r[16].w[0] + 24428u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[2].w[0] + 24432u), c.r[16].w[0]);
    c.budget -= 3;
L_002F8AA0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 48u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AB4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002F8AB4u) [[unlikely]] return; }
L_002F8AB4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002F8AD4; } }
    set32(c.r[2], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8B08; } }
L_002F8AD4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_002F8AF4; } }
    set32(c.r[2], c.r[16].w[0] - 48u);
    set32(c.r[4], c.r[16].w[0] + 48u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0]), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8B08; } }
L_002F8AF4:
    set32(c.r[3], c.r[16].w[0] + 48u);
    set32(c.r[2], c.r[16].w[0] - 48u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 5;
L_002F8B08:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8AA0u | kUnwind; return; } goto L_002F8AA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 24436u), 0u);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8B40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 24432u)));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002F8B60; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8B60:
    set32(c.r[2], ld32((c.r[6].w[0])));
    st32((c.r[3].w[0] + 24432u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8B74; } }
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 1;
L_002F8B74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[2].w[0] + 24436u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8B98; } }
    st32((c.r[2].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8B9C; } }
L_002F8B98:
    st32((c.r[6].w[0]), 0u);
    c.budget -= 1;
L_002F8B9C:
    set32(c.r[2], ld32((c.r[6].w[0] + 20u)));
    set32(c.r[3], 0u - 3u);
    st32((c.r[5].w[0] + 24436u), c.r[6].w[0]);
    set32(c.r[4], 0u - 2u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[5], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st32((c.r[6].w[0] + 40u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 36u), c.r[5].w[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[6].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 4u), 0u);
    st32((c.r[6].w[0] + 44u), 0u);
    st32((c.r[6].w[0] + 24u), 0u);
    st32((c.r[6].w[0] + 12u), 0u);
    st32((c.r[6].w[0] + 16u), 0u);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8BE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24436u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8C1C; } }
L_002F8BF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002F8C10; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8C10:
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8BF8u | kUnwind; return; } goto L_002F8BF8; } }
L_002F8C1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8C28:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[6], ld32((c.r[7].w[0] + 24432u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F8C5C; } }
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    st32((c.r[7].w[0] + 24432u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8C68; } }
L_002F8C5C:
    st32((c.r[7].w[0] + 24432u), c.r[4].w[0]);
    st32((c.r[4].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 3;
L_002F8C68:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F8C94; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8C88; } }
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8C88:
    st32((c.r[5].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8C94:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F8CB0; } }
    st32((c.r[3].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[2].w[0] + 24436u), c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8CB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[2].w[0] + 24436u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F8CC0:
    set32(c.r[29], c.r[29].w[0] - 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st32((c.r[29].w[0] + 616u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 23004u)));
    st128((c.r[29].w[0] + 784u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 736u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[30]);
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 616u)));
    c.r[30].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 768u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 752u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 720u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 704u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 672u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 864u), c.f[24]);
    st32((c.r[29].w[0] + 856u), c.f[23]);
    st32((c.r[29].w[0] + 848u), c.f[22]);
    st32((c.r[29].w[0] + 840u), c.f[21]);
    st32((c.r[29].w[0] + 832u), c.f[20]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[2], 0u + 20u);
    st32((c.r[29].w[0] + 628u), c.r[11].w[0]);
    set32(c.r[3], c.r[3].w[0] - 48u);
    if (c.r[6].d[0] == 0) c.r[2].d[0] = 0ull;
    st32((c.r[29].w[0] + 608u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 612u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 636u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 620u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 624u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 632u), c.r[2].w[0]);
    c.budget -= 36;
    { const bool t = c.r[11].sd[0] <= 0;  if (t) { goto L_002F91FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 18784u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[24] = c.r[1].w[0];
    st8((c.r[29].w[0] + 640u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 644u), c.r[3].w[0]);
    c.budget -= 8;
L_002F8D70:
    set32(c.r[2], 0u + 332u);
    set32(c.r[4], c.r[21].w[0] + 1u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 656u), c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 324u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F91E8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 316u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8DB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[19], ld32((c.r[2].w[0] + 10888u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8DB8; } }
L_002F8DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[19], ld32((c.r[2].w[0] + 10896u)));
    c.budget -= 2;
L_002F8DB8:
    set32(c.r[2], 0u + 332u);
    set32(c.r[3], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = ld8((c.r[29].w[0] + 640u));
    c.f[2] = ld32((c.r[3].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[4] = ld32((c.r[4].w[0]));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[9], c.r[21].w[0] + 1u);
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.f[3] = ld32((c.r[29].w[0] + 632u));
    c.f[3] = fp::cvt_s_w(c.f[3]);
    set32(c.r[16], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[4], c.r[29].w[0] + 1u);
    c.f[1] = ld32((c.r[16].w[0] + 308u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[5].d[0] = 0ull + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 304u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[6], 0u + 299u);
    st32((c.r[29].w[0] + 656u), c.r[9].w[0]);
    c.f[2] = fp::add(c.f[2], c.f[1]);
    c.f[22] = fp::add(c.f[4], c.f[0]);
    c.f[21] = fp::add(c.f[2], c.f[3]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E24u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x002F8E24u) [[unlikely]] return; }
L_002F8E24:
    set32(c.r[4], ld32((c.r[29].w[0] + 644u)));
    set32(c.r[6], 0u + 299u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E38u);  if (depth < kMaxDepth) unit_00DD(c, 90u, depth + 1u); else { c.pc = 0x004753A0u; return; } if (c.pc != 0x002F8E38u) [[unlikely]] return; }
L_002F8E38:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 644u)));
    set32(c.r[5], c.r[11].w[0] - 18776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E4Cu);  if (depth < kMaxDepth) unit_00DE(c, 86u, depth + 1u); else { c.pc = 0x00478AE8u; return; } if (c.pc != 0x002F8E4Cu) [[unlikely]] return; }
L_002F8E4C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[24];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E60u);  if (depth < kMaxDepth) unit_009F(c, 286u, depth + 1u); else { c.pc = 0x0037F550u; return; } if (c.pc != 0x002F8E60u) [[unlikely]] return; }
L_002F8E60:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[24];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E70u);  if (depth < kMaxDepth) unit_009F(c, 287u, depth + 1u); else { c.pc = 0x0037F560u; return; } if (c.pc != 0x002F8E70u) [[unlikely]] return; }
L_002F8E70:
    set32(c.r[5], ld32((c.r[16].w[0] + 316u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E80u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F8E80u) [[unlikely]] return; }
L_002F8E80:
    set32(c.r[3], ld32((c.r[19].w[0] + 28356u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 648u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F91E8; } }
    set32(c.r[2], 0u + 332u);
    c.f[20] = c.f[24];
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 652u), c.r[4].w[0]);
    c.budget -= 4;
L_002F8EA8:
    c.r[20].d[0] = 0ull + 0ull;
    c.f[23] = ld32((c.r[29].w[0] + 648u));
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8F78; } }
    set32(c.r[7], ld32((c.r[29].w[0] + 636u)));
    c.r[2].d[0] = c.r[22].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8F78; } }
    set32(c.r[9], ld32((c.r[29].w[0] + 652u)));
    set32(c.r[23], 0u + 10u);
    set32(c.r[16], c.r[9].w[0] + c.r[30].w[0]);
    c.budget -= 3;
L_002F8ED8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_002F8EF0; } }
    set32(c.r[20], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F8F14; } }
L_002F8EF0:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F00u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x002F8F00u) [[unlikely]] return; }
L_002F8F00:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[11].w[0] - 18776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F14u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x002F8F14u) [[unlikely]] return; }
L_002F8F14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[2].w[0] - 18776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F28u);  if (depth < kMaxDepth) unit_00DE(c, 86u, depth + 1u); else { c.pc = 0x00478AE8u; return; } if (c.pc != 0x002F8F28u) [[unlikely]] return; }
L_002F8F28:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 316u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F3Cu);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F8F3Cu) [[unlikely]] return; }
L_002F8F3C:
    set32(c.r[5], ld32((c.r[16].w[0] + 316u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F50u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F8F50u) [[unlikely]] return; }
L_002F8F50:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F8F78; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 636u)));
    set32(c.r[2], c.r[6].w[0] + c.r[22].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8F78; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8ED8u | kUnwind; return; } goto L_002F8ED8; } }
L_002F8F78:
    set32(c.r[2], 0u + 332u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 328u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8FDC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[2], c.r[6].w[0] >> 31);
    set32(c.r[7], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[4], c.r[3].w[0] >> 31);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[22] = fp::sub(c.f[2], c.f[1]);
    c.budget -= 19;
L_002F8FDC:
    set32(c.r[9], ld32((c.r[29].w[0] + 880u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] != c.r[9].d[0];  if (t) { goto L_002F910C; } }
    set32(c.r[5], ld32((c.r[5].w[0] + 316u)));
    c.r[2].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9048; } }
    c.r[4].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = ld8((c.r[18].w[0]));
    c.f[12] = c.f[22];
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[19], ld32((c.r[11].w[0] + 10888u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.f[13] = c.f[21];
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[20];
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9168; } }
L_002F9048:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[4].w[0] - 18768u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9058u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F9058u) [[unlikely]] return; }
L_002F9058:
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[5].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[18].w[0] + 2u));
    c.f[13] = c.f[21];
    c.f[12] = fp::sub(c.f[22], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 16);
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 18768u);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90C4u);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F90C4u) [[unlikely]] return; }
L_002F90C4:
    c.r[6].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = ld8((c.r[18].w[0]));
    c.f[12] = c.f[22];
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    set32(c.r[6], c.r[6].w[0] << 8);
    c.r[3].d[0] = ld8((c.r[18].w[0] + 3u));
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.f[13] = c.f[21];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 24);
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[20];
    c.budget -= 18;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9168; } }
L_002F910C:
    set32(c.r[2], ld32((c.r[5].w[0] + 316u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9180; } }
    set32(c.r[3], c.r[5].w[0] + 312u);
    c.f[12] = c.f[22];
    c.r[2].d[0] = ld8((c.r[3].w[0] + 1u));
    c.f[13] = c.f[21];
    c.r[5].d[0] = ld8((c.r[5].w[0] + 312u));
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 2u));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0] + 3u));
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[7].w[0] << 24);
    set32(c.r[19], ld32((c.r[2].w[0] + 10888u)));
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[20];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 19;
L_002F9168:
    c.f[15] = c.f[20];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9178u);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F9178u) [[unlikely]] return; }
L_002F9178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F91D4; } }
L_002F9180:
    set32(c.r[7], c.r[5].w[0] + 312u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 312u));
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = ld8((c.r[7].w[0] + 2u));
    c.f[12] = c.f[22];
    c.r[5].d[0] = ld8((c.r[7].w[0] + 3u));
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[6], c.r[6].w[0] << 16);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.f[13] = c.f[21];
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[20];
    c.f[15] = c.f[20];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F91D4u);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F91D4u) [[unlikely]] return; }
L_002F91D4:
    c.f[21] = fp::add(c.f[21], c.f[23]);
    c.r[6].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8EA8u | kUnwind; return; } goto L_002F8EA8; } }
L_002F91E8:
    set32(c.r[21], ld32((c.r[29].w[0] + 656u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 628u)));
    c.r[2].d[0] = c.r[21].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F8D70u | kUnwind; return; } goto L_002F8D70; } }
L_002F91FC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 69u);
    set32(c.r[3], ld32((c.r[4].w[0] + 23004u)));
    st8((c.r[29].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F926C; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[7].w[0] + 19772u)));
    set32(c.r[5], 0u - 40u);
    set32(c.r[7], 0u + 512u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9244u);  if (depth < kMaxDepth) unit_007E(c, 215u, depth + 1u); else { c.pc = 0x002FA798u; return; } if (c.pc != 0x002F9244u) [[unlikely]] return; }
L_002F9244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9290; } }
L_002F924C:
    set32(c.r[2], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9310; } }
L_002F925C:
    set32(c.r[2], c.r[10].w[0] + 8u);
    set32(c.r[17], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F93B8; } }
L_002F926C:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[9].w[0] + 19772u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u + 480u);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9290u);  if (depth < kMaxDepth) unit_007E(c, 215u, depth + 1u); else { c.pc = 0x002FA798u; return; } if (c.pc != 0x002F9290u) [[unlikely]] return; }
L_002F9290:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[11].w[0] + 14948u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], 0u + 128u);
    set32(c.r[6], c.r[2].w[0] + 24440u);
    set32(c.r[3], 0u + 127u);
    set32(c.r[2], 0u + 255u);
    st8((c.r[29].w[0] + 19u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 896u)));
    set32(c.r[5], c.r[4].w[0] + 168u);
    st8((c.r[29].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[18].d[0] = ~(0ull | c.r[2].d[0]);
    st8((c.r[29].w[0] + 17u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = 0ull + 0ull;
    st8((c.r[29].w[0] + 33u), static_cast<std::uint8_t>(0u));
    st8((c.r[29].w[0] + 34u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
L_002F92E8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[7], ld32((c.r[29].w[0] + 896u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F924Cu | kUnwind; return; } goto L_002F924C; } }
    set32(c.r[4], c.r[4].w[0] + 24u);
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[4].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F92E8u | kUnwind; return; } goto L_002F92E8; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_002F9310:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F935C; } }
    set32(c.r[11], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[3], ld32((c.r[29].w[0] + 620u)));
    set32(c.r[9], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[4], ld32((c.r[11].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[11], ld32((c.r[29].w[0] + 632u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[5], c.r[7].w[0] - c.r[11].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F935Cu);  if (depth < kMaxDepth) unit_007E(c, 215u, depth + 1u); else { c.pc = 0x002FA798u; return; } if (c.pc != 0x002F935Cu) [[unlikely]] return; }
L_002F935C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[10], c.r[2].w[0] + 24440u);
    set32(c.r[7], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[9], ld32((c.r[4].w[0])));
    c.r[3].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[11], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[6], c.r[3].w[0] + 168u);
    set32(c.r[2], ld32((c.r[29].w[0] + 620u)));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[5], ld32((c.r[11].w[0])));
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 13;
L_002F9390:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[11], ld32((c.r[29].w[0] + 896u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[11].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F925Cu | kUnwind; return; } goto L_002F925C; } }
    set32(c.r[3], c.r[3].w[0] + 24u);
    set32(c.r[8], c.r[8].w[0] + 24u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9390u | kUnwind; return; } goto L_002F9390; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F93B8:
    set32(c.r[2], ld32((c.r[29].w[0] + 624u)));
    if (c.r[17].d[0] == 0) c.r[17].d[0] = c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F9450; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 632u)));
    set32(c.r[6], c.r[4].w[0] + c.r[9].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[16], c.r[3].w[0] - 4u);
    set32(c.r[6], c.r[6].w[0] - 4u);
    set32(c.r[5], c.r[5].w[0] - c.r[16].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[9], 0u + 1u);
    set32(c.r[8], c.r[29].w[0] + 32u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F93F8u);  if (depth < kMaxDepth) unit_007E(c, 215u, depth + 1u); else { c.pc = 0x002FA798u; return; } if (c.pc != 0x002F93F8u) [[unlikely]] return; }
L_002F93F8:
    set32(c.r[7], ld32((c.r[29].w[0] + 632u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 612u)));
    set32(c.r[5], c.r[7].w[0] - 8u);
    set32(c.r[4], ld32((c.r[29].w[0] + 608u)));
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[9], ld32((c.r[29].w[0] + 620u)));
    set32(c.r[11], ld32((c.r[29].w[0] + 616u)));
    set32(c.r[5], c.r[7].w[0] - c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[2], ld32((c.r[11].w[0])));
    set32(c.r[4], c.r[6].w[0] + 8u);
    set32(c.r[7], c.r[7].w[0] + c.r[3].w[0]);
    c.r[9].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[16].w[0]);
    set32(c.r[6], c.r[6].w[0] - 4u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9448u);  if (depth < kMaxDepth) unit_007E(c, 215u, depth + 1u); else { c.pc = 0x002FA798u; return; } if (c.pc != 0x002F9448u) [[unlikely]] return; }
L_002F9448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9474; } }
L_002F9450:
    set32(c.r[11], ld32((c.r[29].w[0] + 632u)));
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[9].w[0]);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[11].w[0]);
    set32(c.r[5], c.r[5].w[0] - c.r[11].w[0]);
    c.r[9].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9474u);  if (depth < kMaxDepth) unit_007E(c, 215u, depth + 1u); else { c.pc = 0x002FA798u; return; } if (c.pc != 0x002F9474u) [[unlikely]] return; }
L_002F9474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F947Cu);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002F947Cu) [[unlikely]] return; }
L_002F947C:
    set32(c.r[2], ld32((c.r[29].w[0] + 888u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F94A4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 21172u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F94B4; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 888u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[4].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94A4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F94A4u) [[unlikely]] return; }
L_002F94A4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[2], ld32((c.r[7].w[0] - 21172u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F94C8; } }
L_002F94B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 20712u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94C8u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x002F94C8u) [[unlikely]] return; }
L_002F94C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94D0u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002F94D0u) [[unlikely]] return; }
L_002F94D0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[9].w[0] + 14948u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F94E8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F94E8u) [[unlikely]] return; }
L_002F94E8:
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 784u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 768u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 752u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 736u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 720u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 704u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 672u));
    c.f[24] = ld32((c.r[29].w[0] + 864u));
    c.f[23] = ld32((c.r[29].w[0] + 856u));
    c.f[22] = ld32((c.r[29].w[0] + 848u));
    c.f[21] = ld32((c.r[29].w[0] + 840u));
    c.f[20] = ld32((c.r[29].w[0] + 832u));
    set32(c.r[29], c.r[29].w[0] + 880u);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9530:
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[11].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    set32(c.r[20], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 64u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 72u), 0u);
    c.budget -= 27;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_002F95D8; } }
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_002F95A0:
    set32(c.r[2], ld32((c.r[3].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F95C4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F95C4; } }
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F95DC; } }
L_002F95C4:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 332u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F95A0u | kUnwind; return; } goto L_002F95A0; } }
L_002F95D8:
    set32(c.r[16], 0u - 1u);
    c.budget -= 1;
L_002F95DC:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 19624u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[3], c.r[3].w[0] - 32408u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] + 14948u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 308u)));
    set32(c.r[3], 0u + 30u);
    st32((c.r[29].w[0] + 76u), c.r[3].w[0]);
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F961Cu);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378258u; return; } if (c.pc != 0x002F961Cu) [[unlikely]] return; }
L_002F961C:
    c.budget -= 1;
L_002F9620:
    c.r[2].d[0] = ld8((c.r[22].w[0]));
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[22].w[0] + 1u));
    c.r[10].d[0] = ld8((c.r[22].w[0] + 2u));
    c.r[11].d[0] = ld8((c.r[22].w[0] + 3u));
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    st8((c.r[29].w[0] + 32u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 56u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 60u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 64u)));
    st8((c.r[21].w[0] + 2u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[21].w[0] + 3u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[10].d[0] = c.r[17].d[0] + 0ull;
    st8((c.r[21].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[11].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[29].w[0] + 256u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 248u)));
    st32((c.r[29].w[0]), c.r[16].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F967Cu);  if (depth < kMaxDepth) unit_007E(c, 107u, depth + 1u); else { c.pc = 0x002F8CC0u; return; } if (c.pc != 0x002F967Cu) [[unlikely]] return; }
L_002F967C:
    set32(c.r[4], ld32((c.r[29].w[0] + 76u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F96C4; } }
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[29].w[0] + 76u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F98F8; } }
L_002F9698:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 332u);
    st32((c.r[29].w[0] + 72u), c.r[3].w[0]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 300u)));
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96BCu);  if (depth < kMaxDepth) unit_000A(c, 362u, depth + 1u); else { c.pc = 0x0012AB48u; return; } if (c.pc != 0x002F96BCu) [[unlikely]] return; }
L_002F96BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F98A4; } }
L_002F96C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 17200u);
    set32(c.r[30], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96DCu);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x002F96DCu) [[unlikely]] return; }
L_002F96DC:
    set32(c.r[20], 0u + 332u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[23], c.r[2].w[0] + 17200u);
    c.budget -= 3;
L_002F96E8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96F8u);  if (depth < kMaxDepth) unit_0071(c, 271u, depth + 1u); else { c.pc = 0x002C6F10u; return; } if (c.pc != 0x002F96F8u) [[unlikely]] return; }
L_002F96F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9894; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9710u);  if (depth < kMaxDepth) unit_0071(c, 304u, depth + 1u); else { c.pc = 0x002C72A8u; return; } if (c.pc != 0x002F9710u) [[unlikely]] return; }
L_002F9710:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F97D4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[30].d[0];  if (t) { goto L_002F9894; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_002F9874; } }
    set32(c.r[3], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002F9770; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 3;
L_002F9748:
    set32(c.r[2], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9760; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F97BC; } }
L_002F9760:
    set32(c.r[4], c.r[4].w[0] - 332u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9748u | kUnwind; return; } goto L_002F9748; } }
L_002F9770:
    set32(c.r[3], c.r[19].w[0] - 1u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9874; } }
    mmi::mult(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 2;
L_002F9788:
    set32(c.r[2], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F97A0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F97BC; } }
L_002F97A0:
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 332u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9788u | kUnwind; return; } goto L_002F9788; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9874; } }
L_002F97BC:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9874; } }
L_002F97C8:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9874; } }
L_002F97D4:
    c.r[2].d[0] = c.r[3].d[0] & 16384ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9884; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[30].d[0];  if (t) { goto L_002F9894; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_002F9874; } }
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9834; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 2;
L_002F9808:
    set32(c.r[2], ld32((c.r[3].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9820; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F97C8u | kUnwind; return; } goto L_002F97C8; } }
L_002F9820:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 332u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9808u | kUnwind; return; } goto L_002F9808; } }
L_002F9834:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_002F9874; } }
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_002F9848:
    set32(c.r[2], ld32((c.r[3].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9860; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F97C8u | kUnwind; return; } goto L_002F97C8; } }
L_002F9860:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 332u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9848u | kUnwind; return; } goto L_002F9848; } }
L_002F9874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F987Cu);  if (depth < kMaxDepth) unit_000A(c, 356u, depth + 1u); else { c.pc = 0x0012AA40u; return; } if (c.pc != 0x002F987Cu) [[unlikely]] return; }
L_002F987C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9894; } }
L_002F9884:
    set32(c.r[4], ld32((c.r[29].w[0] + 264u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9698u | kUnwind; return; } goto L_002F9698; } }
L_002F9894:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F96E8u | kUnwind; return; } goto L_002F96E8; } }
L_002F98A4:
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F98E8; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98C4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F98C4u) [[unlikely]] return; }
L_002F98C4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F98E8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F98E8; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F994C; } }
L_002F98E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[3].w[0] - 22920u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F98F8u);  if (depth < kMaxDepth) unit_0086(c, 147u, depth + 1u); else { c.pc = 0x003199E0u; return; } if (c.pc != 0x002F98F8u) [[unlikely]] return; }
L_002F98F8:
    set32(c.r[4], ld32((c.r[29].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9620u | kUnwind; return; } goto L_002F9620; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[3].w[0] + 14948u), 0u);
    set32(c.r[16], c.r[2].w[0] + 17200u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F992C; } }
    c.budget -= 1;
L_002F9920:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F992Cu);  if (depth < kMaxDepth) unit_0071(c, 235u, depth + 1u); else { c.pc = 0x002C6878u; return; } if (c.pc != 0x002F992Cu) [[unlikely]] return; }
L_002F992C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F993Cu);  if (depth < kMaxDepth) unit_0071(c, 307u, depth + 1u); else { c.pc = 0x002C7360u; return; } if (c.pc != 0x002F993Cu) [[unlikely]] return; }
L_002F993C:
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9920u | kUnwind; return; } goto L_002F9920; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 1;
L_002F994C:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14932u)));
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9C74; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 14936u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F9C74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[17], c.r[2].w[0] + 800u);
    c.budget -= 2;
L_002F99C8:
    set32(c.r[2], 0u + 124u);
    set32(c.r[4], ld32((c.r[9].w[0] + 14932u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002F9C60; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9A58; } }
    set32(c.r[2], c.r[3].w[0] + 96u);
    set32(c.r[16], c.r[29].w[0] + 4u);
    c.budget -= 2;
L_002F9A00:
    ldl(c.r[4], (c.r[3].w[0] + 7u));
    ldr(c.r[4], (c.r[3].w[0]));
    ldl(c.r[6], (c.r[3].w[0] + 15u));
    ldr(c.r[6], (c.r[3].w[0] + 8u));
    ldl(c.r[7], (c.r[3].w[0] + 23u));
    ldr(c.r[7], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[4], (c.r[5].w[0] + 7u));
    sdr(c.r[4], (c.r[5].w[0]));
    sdl(c.r[6], (c.r[5].w[0] + 15u));
    sdr(c.r[6], (c.r[5].w[0] + 8u));
    sdl(c.r[7], (c.r[5].w[0] + 23u));
    sdr(c.r[7], (c.r[5].w[0] + 16u));
    sdl(c.r[9], (c.r[5].w[0] + 31u));
    sdr(c.r[9], (c.r[5].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9A00u | kUnwind; return; } goto L_002F9A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9A90; } }
L_002F9A58:
    set32(c.r[2], c.r[3].w[0] + 96u);
    set32(c.r[16], c.r[29].w[0] + 4u);
    c.budget -= 2;
L_002F9A60:
    c.r[11].d[0] = ld64((c.r[3].w[0]));
    c.r[13].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[14].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[4].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[11].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[13].d[0]);
    st64((c.r[5].w[0] + 16u), c.r[14].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[4].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9A60u | kUnwind; return; } goto L_002F9A60; } }
L_002F9A90:
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    set32(c.r[9], ld32((c.r[3].w[0] + 24u)));
    sdl(c.r[6], (c.r[5].w[0] + 7u));
    sdr(c.r[6], (c.r[5].w[0]));
    sdl(c.r[7], (c.r[5].w[0] + 15u));
    sdr(c.r[7], (c.r[5].w[0] + 8u));
    sdl(c.r[8], (c.r[5].w[0] + 23u));
    sdr(c.r[8], (c.r[5].w[0] + 16u));
    st32((c.r[5].w[0] + 24u), c.r[9].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AD4u);  if (depth < kMaxDepth) unit_0039(c, 349u, depth + 1u); else { c.pc = 0x001E6EF0u; return; } if (c.pc != 0x002F9AD4u) [[unlikely]] return; }
L_002F9AD4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AE4u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002F9AE4u) [[unlikely]] return; }
L_002F9AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[11], c.r[2].w[0] + 840u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[8], c.r[3].w[0] + 2080u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[12], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] + 40u);
    set32(c.r[9], c.r[2].w[0] + 2160u);
    set32(c.r[4], c.r[4].w[0] + 2120u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 15;
L_002F9B20:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9C34; } }
    set32(c.r[2], ld32((c.r[10].w[0] + 14928u)));
    set32(c.r[5], c.r[3].w[0] + c.r[11].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[10].w[0] + 14928u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9BAC; } }
    set32(c.r[2], c.r[7].w[0] + 96u);
    c.budget -= 1;
L_002F9B54:
    ldl(c.r[11], (c.r[4].w[0] + 7u));
    ldr(c.r[11], (c.r[4].w[0]));
    ldl(c.r[13], (c.r[4].w[0] + 15u));
    ldr(c.r[13], (c.r[4].w[0] + 8u));
    ldl(c.r[14], (c.r[4].w[0] + 23u));
    ldr(c.r[14], (c.r[4].w[0] + 16u));
    ldl(c.r[3], (c.r[4].w[0] + 31u));
    ldr(c.r[3], (c.r[4].w[0] + 24u));
    sdl(c.r[11], (c.r[5].w[0] + 7u));
    sdr(c.r[11], (c.r[5].w[0]));
    sdl(c.r[13], (c.r[5].w[0] + 15u));
    sdr(c.r[13], (c.r[5].w[0] + 8u));
    sdl(c.r[14], (c.r[5].w[0] + 23u));
    sdr(c.r[14], (c.r[5].w[0] + 16u));
    sdl(c.r[3], (c.r[5].w[0] + 31u));
    sdr(c.r[3], (c.r[5].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9B54u | kUnwind; return; } goto L_002F9B54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9BE0; } }
L_002F9BAC:
    set32(c.r[2], c.r[7].w[0] + 96u);
    c.budget -= 1;
L_002F9BB0:
    c.r[11].d[0] = ld64((c.r[4].w[0]));
    c.r[13].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[14].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[11].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[13].d[0]);
    st64((c.r[5].w[0] + 16u), c.r[14].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9BB0u | kUnwind; return; } goto L_002F9BB0; } }
L_002F9BE0:
    set32(c.r[2], ld32((c.r[10].w[0] + 14928u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 100u)));
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[9].w[0]), c.r[12].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    ldl(c.r[6], (c.r[4].w[0] + 7u));
    ldr(c.r[6], (c.r[4].w[0]));
    ldl(c.r[7], (c.r[4].w[0] + 15u));
    ldr(c.r[7], (c.r[4].w[0] + 8u));
    ldl(c.r[8], (c.r[4].w[0] + 23u));
    ldr(c.r[8], (c.r[4].w[0] + 16u));
    set32(c.r[9], ld32((c.r[4].w[0] + 24u)));
    sdl(c.r[6], (c.r[5].w[0] + 7u));
    sdr(c.r[6], (c.r[5].w[0]));
    sdl(c.r[7], (c.r[5].w[0] + 15u));
    sdr(c.r[7], (c.r[5].w[0] + 8u));
    sdl(c.r[8], (c.r[5].w[0] + 23u));
    sdr(c.r[8], (c.r[5].w[0] + 16u));
    st32((c.r[5].w[0] + 24u), c.r[9].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9C54; } }
L_002F9C34:
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 124u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9B20u | kUnwind; return; } goto L_002F9B20; } }
L_002F9C54:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9C78; } }
L_002F9C60:
    set32(c.r[2], ld32((c.r[7].w[0] + 14936u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F99C8u | kUnwind; return; } goto L_002F99C8; } }
L_002F9C74:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F9C78:
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9C90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14932u)));
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9F70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 14936u)));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F9F70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[2].w[0] + 800u);
    c.budget -= 3;
L_002F9CD8:
    set32(c.r[2], ld32((c.r[9].w[0] + 14932u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002F9F58; } }
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9D60; } }
    set32(c.r[2], c.r[3].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 4u);
    c.budget -= 2;
L_002F9D08:
    ldl(c.r[5], (c.r[3].w[0] + 7u));
    ldr(c.r[5], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[9], (c.r[3].w[0] + 23u));
    ldr(c.r[9], (c.r[3].w[0] + 16u));
    ldl(c.r[10], (c.r[3].w[0] + 31u));
    ldr(c.r[10], (c.r[3].w[0] + 24u));
    sdl(c.r[5], (c.r[6].w[0] + 7u));
    sdr(c.r[5], (c.r[6].w[0]));
    sdl(c.r[7], (c.r[6].w[0] + 15u));
    sdr(c.r[7], (c.r[6].w[0] + 8u));
    sdl(c.r[9], (c.r[6].w[0] + 23u));
    sdr(c.r[9], (c.r[6].w[0] + 16u));
    sdl(c.r[10], (c.r[6].w[0] + 31u));
    sdr(c.r[10], (c.r[6].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9D08u | kUnwind; return; } goto L_002F9D08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9D98; } }
L_002F9D60:
    set32(c.r[2], c.r[3].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 4u);
    c.budget -= 2;
L_002F9D68:
    c.r[11].d[0] = ld64((c.r[3].w[0]));
    c.r[13].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[14].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[11].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[13].d[0]);
    st64((c.r[6].w[0] + 16u), c.r[14].d[0]);
    st64((c.r[6].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9D68u | kUnwind; return; } goto L_002F9D68; } }
L_002F9D98:
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    ldl(c.r[7], (c.r[3].w[0] + 7u));
    ldr(c.r[7], (c.r[3].w[0]));
    ldl(c.r[8], (c.r[3].w[0] + 15u));
    ldr(c.r[8], (c.r[3].w[0] + 8u));
    ldl(c.r[9], (c.r[3].w[0] + 23u));
    ldr(c.r[9], (c.r[3].w[0] + 16u));
    set32(c.r[10], ld32((c.r[3].w[0] + 24u)));
    sdl(c.r[7], (c.r[6].w[0] + 7u));
    sdr(c.r[7], (c.r[6].w[0]));
    sdl(c.r[8], (c.r[6].w[0] + 15u));
    sdr(c.r[8], (c.r[6].w[0] + 8u));
    sdl(c.r[9], (c.r[6].w[0] + 23u));
    sdr(c.r[9], (c.r[6].w[0] + 16u));
    st32((c.r[6].w[0] + 24u), c.r[10].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9DDCu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x002F9DDCu) [[unlikely]] return; }
L_002F9DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[11], c.r[2].w[0] + 840u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00780000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[8], c.r[3].w[0] + 2080u);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[12], 0u + 1u);
    set32(c.r[5], c.r[6].w[0] + 40u);
    set32(c.r[9], c.r[2].w[0] + 2160u);
    set32(c.r[4], c.r[4].w[0] + 2120u);
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 15;
L_002F9E18:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9F2C; } }
    set32(c.r[2], ld32((c.r[10].w[0] + 14928u)));
    set32(c.r[5], c.r[3].w[0] + c.r[11].w[0]);
    st32((c.r[4].w[0]), 0u);
    c.r[3].d[0] = c.r[5].d[0] & 7ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[10].w[0] + 14928u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9EA4; } }
    set32(c.r[2], c.r[7].w[0] + 96u);
    c.budget -= 1;
L_002F9E4C:
    ldl(c.r[11], (c.r[4].w[0] + 7u));
    ldr(c.r[11], (c.r[4].w[0]));
    ldl(c.r[13], (c.r[4].w[0] + 15u));
    ldr(c.r[13], (c.r[4].w[0] + 8u));
    ldl(c.r[14], (c.r[4].w[0] + 23u));
    ldr(c.r[14], (c.r[4].w[0] + 16u));
    ldl(c.r[3], (c.r[4].w[0] + 31u));
    ldr(c.r[3], (c.r[4].w[0] + 24u));
    sdl(c.r[11], (c.r[5].w[0] + 7u));
    sdr(c.r[11], (c.r[5].w[0]));
    sdl(c.r[13], (c.r[5].w[0] + 15u));
    sdr(c.r[13], (c.r[5].w[0] + 8u));
    sdl(c.r[14], (c.r[5].w[0] + 23u));
    sdr(c.r[14], (c.r[5].w[0] + 16u));
    sdl(c.r[3], (c.r[5].w[0] + 31u));
    sdr(c.r[3], (c.r[5].w[0] + 24u));
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9E4Cu | kUnwind; return; } goto L_002F9E4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9ED8; } }
L_002F9EA4:
    set32(c.r[2], c.r[7].w[0] + 96u);
    c.budget -= 1;
L_002F9EA8:
    c.r[11].d[0] = ld64((c.r[4].w[0]));
    c.r[13].d[0] = ld64((c.r[4].w[0] + 8u));
    c.r[14].d[0] = ld64((c.r[4].w[0] + 16u));
    c.r[3].d[0] = ld64((c.r[4].w[0] + 24u));
    st64((c.r[5].w[0]), c.r[11].d[0]);
    st64((c.r[5].w[0] + 8u), c.r[13].d[0]);
    st64((c.r[5].w[0] + 16u), c.r[14].d[0]);
    st64((c.r[5].w[0] + 24u), c.r[3].d[0]);
    set32(c.r[4], c.r[4].w[0] + 32u);
    set32(c.r[5], c.r[5].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9EA8u | kUnwind; return; } goto L_002F9EA8; } }
L_002F9ED8:
    set32(c.r[2], ld32((c.r[10].w[0] + 14928u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 100u)));
    st32((c.r[8].w[0]), c.r[2].w[0]);
    st32((c.r[9].w[0]), c.r[12].w[0]);
    st32((c.r[6].w[0]), c.r[3].w[0]);
    ldl(c.r[6], (c.r[4].w[0] + 7u));
    ldr(c.r[6], (c.r[4].w[0]));
    ldl(c.r[7], (c.r[4].w[0] + 15u));
    ldr(c.r[7], (c.r[4].w[0] + 8u));
    ldl(c.r[8], (c.r[4].w[0] + 23u));
    ldr(c.r[8], (c.r[4].w[0] + 16u));
    set32(c.r[9], ld32((c.r[4].w[0] + 24u)));
    sdl(c.r[6], (c.r[5].w[0] + 7u));
    sdr(c.r[6], (c.r[5].w[0]));
    sdl(c.r[7], (c.r[5].w[0] + 15u));
    sdr(c.r[7], (c.r[5].w[0] + 8u));
    sdl(c.r[8], (c.r[5].w[0] + 23u));
    sdr(c.r[8], (c.r[5].w[0] + 16u));
    st32((c.r[5].w[0] + 24u), c.r[9].w[0]);
    c.budget -= 21;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9F4C; } }
L_002F9F2C:
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[9], c.r[9].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 124u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9E18u | kUnwind; return; } goto L_002F9E18; } }
L_002F9F4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9F74; } }
L_002F9F58:
    set32(c.r[2], ld32((c.r[7].w[0] + 14936u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 124u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F9CD8u | kUnwind; return; } goto L_002F9CD8; } }
L_002F9F70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F9F74:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F9F88:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[15].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 44u), c.r[7].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[7].w[0]);
    c.budget -= 17;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_002FA074; } }
    c.r[2].d[0] = ld8((c.r[15].w[0] + 4u));
    c.r[3].d[0] = ld8((c.r[15].w[0] + 5u));
    c.r[4].d[0] = ld8((c.r[15].w[0] + 6u));
    c.r[6].d[0] = ld8((c.r[15].w[0]));
    c.r[7].d[0] = ld8((c.r[15].w[0] + 1u));
    c.r[8].d[0] = ld8((c.r[15].w[0] + 2u));
    c.r[9].d[0] = ld8((c.r[15].w[0] + 3u));
    c.r[10].d[0] = ld8((c.r[15].w[0] + 8u));
    c.r[11].d[0] = ld8((c.r[15].w[0] + 9u));
    c.r[12].d[0] = ld8((c.r[15].w[0] + 10u));
    c.r[13].d[0] = ld8((c.r[15].w[0] + 11u));
    c.r[5].d[0] = ld8((c.r[15].w[0] + 7u));
    c.r[14].d[0] = ld8((c.r[15].w[0] + 12u));
    st8((c.r[29].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 55u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 67u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[11].w[0]));
    st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[29].w[0] + 59u), static_cast<std::uint8_t>(c.r[13].w[0]));
    st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[4].d[0] = ld8((c.r[15].w[0] + 15u));
    c.r[2].d[0] = ld8((c.r[15].w[0] + 13u));
    c.r[3].d[0] = ld8((c.r[15].w[0] + 14u));
    st8((c.r[29].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 70u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 71u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 42;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FA0E4; } }
L_002FA074:
    c.r[5].d[0] = ld8((c.r[15].w[0] + 3u));
    c.r[2].d[0] = ld8((c.r[15].w[0]));
    c.r[3].d[0] = ld8((c.r[15].w[0] + 1u));
    c.r[4].d[0] = ld8((c.r[15].w[0] + 2u));
    st8((c.r[29].w[0] + 68u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 69u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 70u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 71u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 48u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 49u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 50u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 51u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 52u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 53u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 54u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 55u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 56u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 57u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 58u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 59u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 60u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 62u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 63u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[29].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 65u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[29].w[0] + 66u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[29].w[0] + 67u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 28;
L_002FA0E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FA114; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 640u);
    set32(c.r[7], 0u + 256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA10Cu);  if (depth < kMaxDepth) unit_004C(c, 4u, depth + 1u); else { c.pc = 0x00230280u; return; } if (c.pc != 0x002FA10Cu) [[unlikely]] return; }
L_002FA10C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FA12C; } }
L_002FA114:
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 640u);
    set32(c.r[7], 0u + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA12Cu);  if (depth < kMaxDepth) unit_004C(c, 4u, depth + 1u); else { c.pc = 0x00230280u; return; } if (c.pc != 0x002FA12Cu) [[unlikely]] return; }
L_002FA12C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA140u);  if (depth < kMaxDepth) unit_004B(c, 64u, depth + 1u); else { c.pc = 0x0022DCF0u; return; } if (c.pc != 0x002FA140u) [[unlikely]] return; }
L_002FA140:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA150:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002FA4FC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FA4FC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + 24440u);
    set32(c.r[6], 0u + 24u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], 0u + 16u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA1A8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x002FA1A8u) [[unlikely]] return; }
L_002FA1A8:
    set32(c.r[21], 0u + 1u);
    set32(c.r[18], 0u + 64u);
    set32(c.r[17], 0u + 255u);
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    set32(c.r[2], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[3], c.r[16].w[0] + 12u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], c.r[16].w[0] + 16u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[7], c.r[16].w[0] + 20u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[6], 0u + 24u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[20], 0u + 96u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[22], 0u + 3u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[16], c.r[16].w[0] + 24u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA228u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x002FA228u) [[unlikely]] return; }
L_002FA228:
    set32(c.r[3], 0u + 37u);
    st32((c.r[16].w[0]), c.r[21].w[0]);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[8], 0u + 69u);
    set32(c.r[2], c.r[16].w[0] + 8u);
    set32(c.r[4], 0u + 21u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], c.r[16].w[0] + 12u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[9], 0u + 10u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[7], c.r[16].w[0] + 20u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[16].w[0] + 16u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 24u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 24u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA2A4u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x002FA2A4u) [[unlikely]] return; }
L_002FA2A4:
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 8u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[16].w[0] + 12u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], c.r[16].w[0] + 16u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[7], c.r[16].w[0] + 20u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[6], 0u + 24u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[16], c.r[16].w[0] + 24u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA318u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x002FA318u) [[unlikely]] return; }
L_002FA318:
    st32((c.r[16].w[0]), c.r[22].w[0]);
    set32(c.r[2], c.r[16].w[0] + 8u);
    st32((c.r[16].w[0] + 4u), c.r[21].w[0]);
    set32(c.r[3], c.r[16].w[0] + 12u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[4], c.r[16].w[0] + 16u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[7], c.r[16].w[0] + 20u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[6], 0u + 24u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[16], c.r[16].w[0] + 24u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA388u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x002FA388u) [[unlikely]] return; }
L_002FA388:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 8u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[16].w[0] + 12u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 16u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[16].w[0] + 20u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[6], 0u + 24u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 24u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA3F8u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x002FA3F8u) [[unlikely]] return; }
L_002FA3F8:
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 8u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[16].w[0] + 12u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 16u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], c.r[16].w[0] + 20u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = 0ull + 0ull;
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[6], 0u + 24u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[16].w[0] + 24u);
    st8((c.r[7].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[7].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA468u);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x002FA468u) [[unlikely]] return; }
L_002FA468:
    set32(c.r[3], 0u + 6u);
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 8u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    set32(c.r[3], c.r[16].w[0] + 12u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[16].w[0] + 16u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 192u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 20u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 2120u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], 0u + 1u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] + 36u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[20].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 28;
L_002FA4D8:
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA4D8u | kUnwind; return; } goto L_002FA4D8; } }
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[2].w[0] + 24608u), c.r[3].w[0]);
    c.budget -= 3;
L_002FA4FC:
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
L_002FA528:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 24440u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[2].w[0] + 8u);
    set32(c.r[6], c.r[3].w[0] + 168u);
    c.budget -= 6;
L_002FA540:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002FA558; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA558:
    set32(c.r[3], c.r[3].w[0] + 24u);
    set32(c.r[5], c.r[5].w[0] + 24u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA540u | kUnwind; return; } goto L_002FA540; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[2].w[0] + 24440u);
    set32(c.r[5], c.r[3].w[0] + 168u);
    c.budget -= 4;
L_002FA588:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002FA5A0; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA5A0:
    set32(c.r[3], c.r[3].w[0] + 24u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[5].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA588u | kUnwind; return; } goto L_002FA588; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA5C0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_002FA608; } }
    c.budget -= 1;
L_002FA5D0:
    set32(c.r[2], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA5F4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA5F4; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA5F4:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 332u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA5D0u | kUnwind; return; } goto L_002FA5D0; } }
L_002FA608:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA618:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FA6BC; } }
    set32(c.r[3], c.r[6].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002FA674; } }
    set32(c.r[2], 0u + 332u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[7].w[0] + c.r[8].w[0]);
    c.budget -= 4;
L_002FA640:
    set32(c.r[2], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA664; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA664; } }
L_002FA658:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA664:
    set32(c.r[4], c.r[4].w[0] - 332u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA640u | kUnwind; return; } goto L_002FA640; } }
L_002FA674:
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA6BC; } }
    set32(c.r[2], 0u + 332u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] + c.r[8].w[0]);
    c.budget -= 3;
L_002FA690:
    set32(c.r[2], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA6A8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA658u | kUnwind; return; } goto L_002FA658; } }
L_002FA6A8:
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 332u);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA690u | kUnwind; return; } goto L_002FA690; } }
L_002FA6BC:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA6C8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FA764; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA728; } }
    set32(c.r[2], 0u + 332u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 4;
L_002FA6F0:
    set32(c.r[2], ld32((c.r[7].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA714; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA714; } }
L_002FA708:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA714:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[7], c.r[7].w[0] + 332u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA6F0u | kUnwind; return; } goto L_002FA6F0; } }
L_002FA728:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0;  if (t) { goto L_002FA764; } }
    c.budget -= 1;
L_002FA738:
    set32(c.r[2], ld32((c.r[4].w[0] + 324u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA750; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA708u | kUnwind; return; } goto L_002FA708; } }
L_002FA750:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 332u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA738u | kUnwind; return; } goto L_002FA738; } }
L_002FA764:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA770:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA778:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 14932u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 14936u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA798:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7A8u);  if (depth < kMaxDepth) unit_007E(c, 180u, depth + 1u); else { c.pc = 0x002F9F88u; return; } if (c.pc != 0x002FA7A8u) [[unlikely]] return; }
L_002FA7A8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA7B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7D0u);  if (depth < kMaxDepth) unit_007E(c, 184u, depth + 1u); else { c.pc = 0x002FA150u; return; } if (c.pc != 0x002FA7D0u) [[unlikely]] return; }
L_002FA7D0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA7E0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[18], c.r[21].w[0] + 17200u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    set32(c.r[19], c.r[2].w[0] + 15600u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[22], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
L_002FA820:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002FA828:
    set32(c.r[6], c.r[22].w[0] << (c.r[16].w[0] & 31u));
    set32(c.r[4], c.r[21].w[0] + 17200u);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA848u);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C7018u; return; } if (c.pc != 0x002FA848u) [[unlikely]] return; }
L_002FA848:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA828u | kUnwind; return; } goto L_002FA828; } }
    c.r[6].d[0] = ld16((c.r[19].w[0]));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA86Cu);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C7018u; return; } if (c.pc != 0x002FA86Cu) [[unlikely]] return; }
L_002FA86C:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 2u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA884u);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C7018u; return; } if (c.pc != 0x002FA884u) [[unlikely]] return; }
L_002FA884:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 4u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA89Cu);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C7018u; return; } if (c.pc != 0x002FA89Cu) [[unlikely]] return; }
L_002FA89C:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 6u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8B4u);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C7018u; return; } if (c.pc != 0x002FA8B4u) [[unlikely]] return; }
L_002FA8B4:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 8u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8CCu);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C7018u; return; } if (c.pc != 0x002FA8CCu) [[unlikely]] return; }
L_002FA8CC:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 10u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8E4u);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C7018u; return; } if (c.pc != 0x002FA8E4u) [[unlikely]] return; }
L_002FA8E4:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 14u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA8FCu);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C7018u; return; } if (c.pc != 0x002FA8FCu) [[unlikely]] return; }
L_002FA8FC:
    c.r[6].d[0] = ld16((c.r[19].w[0] + 12u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA914u);  if (depth < kMaxDepth) unit_0071(c, 276u, depth + 1u); else { c.pc = 0x002C7018u; return; } if (c.pc != 0x002FA914u) [[unlikely]] return; }
L_002FA914:
    c.r[17].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA820u | kUnwind; return; } goto L_002FA820; } }
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
L_002FA950:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA968u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x002FA968u) [[unlikely]] return; }
L_002FA968:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 15744u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 112u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA980u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002FA980u) [[unlikely]] return; }
L_002FA980:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[5].d[0] | 176ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA99Cu);  if (depth < kMaxDepth) unit_0056(c, 285u, depth + 1u); else { c.pc = 0x0025B038u; return; } if (c.pc != 0x002FA99Cu) [[unlikely]] return; }
L_002FA99C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 15744u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 24620u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] | 176ull;
    st32((c.r[3].w[0] + 296u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 104u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9C4u);  if (depth < kMaxDepth) unit_0056(c, 332u, depth + 1u); else { c.pc = 0x0025B7F0u; return; } if (c.pc != 0x002FA9C4u) [[unlikely]] return; }
L_002FA9C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 176ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9D8u);  if (depth < kMaxDepth) unit_0058(c, 71u, depth + 1u); else { c.pc = 0x00260B40u; return; } if (c.pc != 0x002FA9D8u) [[unlikely]] return; }
L_002FA9D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[6], 0u + 640u);
    set32(c.r[4], ld32((c.r[16].w[0] + 15744u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 512u);
    st32((c.r[2].w[0] + 72u), c.f[0]);
    st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 2096u);
    st32((c.r[2].w[0] + 56u), c.f[0]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    st32((c.r[2].w[0] + 68u), c.f[0]);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[2].w[0] + 44u), 0u);
    st32((c.r[2].w[0] + 48u), 0u);
    st32((c.r[2].w[0] + 52u), 0u);
    st32((c.r[2].w[0] + 64u), 0u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 308u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[1].w[0];
    c.r[3].d[0] = ld16((c.r[2].w[0] + 6u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[1].w[0];
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    st16((c.r[4].w[0] + 310u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 196u), c.f[0]);
    st32((c.r[4].w[0] + 480u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 192u), c.f[1]);
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 34;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FAA60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[2], ld32((c.r[3].w[0] + 24640u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FAB44; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[5].w[0] + 15804u), c.r[2].w[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 19624u), c.r[3].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[16], 0u + 3u);
    c.budget -= 10;
L_002FAAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAAC0u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002FAAC0u) [[unlikely]] return; }
L_002FAAC0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAACCu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002FAACCu) [[unlikely]] return; }
L_002FAACC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAAB8u | kUnwind; return; } goto L_002FAAB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[19].w[0] + 24640u);
    set32(c.r[4], ld32((c.r[2].w[0] + 23004u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[16], 0u + 1u);
    set32(c.r[7], ld32((c.r[3].w[0] + 4u)));
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[17].w[0] + 19776u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 19772u), c.r[7].w[0]);
    st32((c.r[19].w[0] + 24640u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB0Cu);  if (depth < kMaxDepth) unit_0049(c, 45u, depth + 1u); else { c.pc = 0x00224E98u; return; } if (c.pc != 0x002FAB0Cu) [[unlikely]] return; }
L_002FAB0C:
    set32(c.r[4], ld32((c.r[18].w[0] + 19772u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 19776u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB1Cu);  if (depth < kMaxDepth) unit_0049(c, 221u, depth + 1u); else { c.pc = 0x00226BF8u; return; } if (c.pc != 0x002FAB1Cu) [[unlikely]] return; }
L_002FAB1C:
    set32(c.r[2], 0u + 4u);
    st32((c.r[20].w[0] + 19624u), c.r[2].w[0]);
    c.budget -= 3;
L_002FAB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB30u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002FAB30u) [[unlikely]] return; }
L_002FAB30:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB3Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002FAB3Cu) [[unlikely]] return; }
L_002FAB3C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAB28u | kUnwind; return; } goto L_002FAB28; } }
L_002FAB44:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FAB68:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[17].w[0] + 19772u)));
    set32(c.r[16], c.r[3].w[0] + 24640u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 19776u)));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 24640u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FABC8u);  if (depth < kMaxDepth) unit_0049(c, 259u, depth + 1u); else { c.pc = 0x002270D8u; return; } if (c.pc != 0x002FABC8u) [[unlikely]] return; }
L_002FABC8:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], 0u + 512u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[3].w[0] + 15804u), c.r[18].w[0]);
    st32((c.r[17].w[0] + 19772u), c.r[6].w[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[5].w[0] + 19624u), c.r[4].w[0]);
    c.budget -= 10;
L_002FABF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FABF8u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002FABF8u) [[unlikely]] return; }
L_002FABF8:
    set32(c.r[19], c.r[19].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC04u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002FAC04u) [[unlikely]] return; }
L_002FAC04:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FABF0u | kUnwind; return; } goto L_002FABF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 15748u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FAC84; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], ld32((c.r[17].w[0] + 23004u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FAC84; } }
    set32(c.r[2], 0u + 224u);
    set32(c.r[4], ld32((c.r[21].w[0] + 19772u)));
    st32((c.r[22].w[0] + 19776u), c.r[2].w[0]);
    set32(c.r[5], 0u + 224u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC44u);  if (depth < kMaxDepth) unit_0049(c, 221u, depth + 1u); else { c.pc = 0x00226BF8u; return; } if (c.pc != 0x002FAC44u) [[unlikely]] return; }
L_002FAC44:
    set32(c.r[16], 0u + 1u);
    set32(c.r[4], ld32((c.r[17].w[0] + 23004u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC60u);  if (depth < kMaxDepth) unit_0049(c, 45u, depth + 1u); else { c.pc = 0x00224E98u; return; } if (c.pc != 0x002FAC60u) [[unlikely]] return; }
L_002FAC60:
    set32(c.r[2], 0u + 4u);
    st32((c.r[20].w[0] + 19624u), c.r[2].w[0]);
    c.budget -= 2;
L_002FAC68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC70u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002FAC70u) [[unlikely]] return; }
L_002FAC70:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC7Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002FAC7Cu) [[unlikely]] return; }
L_002FAC7C:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAC68u | kUnwind; return; } goto L_002FAC68; } }
L_002FAC84:
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
L_002FACB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 15744u)));
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FAE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACF8u);  if (depth < kMaxDepth) unit_007E(c, 246u, depth + 1u); else { c.pc = 0x002FAB68u; return; } if (c.pc != 0x002FACF8u) [[unlikely]] return; }
L_002FACF8:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 19772u)));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 19776u)));
    c.r[20].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[17], 0u + 5u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD24u);  if (depth < kMaxDepth) unit_0049(c, 221u, depth + 1u); else { c.pc = 0x00226BF8u; return; } if (c.pc != 0x002FAD24u) [[unlikely]] return; }
L_002FAD24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 19304u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD34u);  if (depth < kMaxDepth) unit_0053(c, 70u, depth + 1u); else { c.pc = 0x0024CDC0u; return; } if (c.pc != 0x002FAD34u) [[unlikely]] return; }
L_002FAD34:
    c.budget -= 1;
L_002FAD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD40u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002FAD40u) [[unlikely]] return; }
L_002FAD40:
    set32(c.r[4], ld32((c.r[23].w[0] + 15744u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD4Cu);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002FAD4Cu) [[unlikely]] return; }
L_002FAD4C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002FAD74; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80800000u);
    set32(c.r[4], ld32((c.r[21].w[0] + 14224u)));
    set32(c.r[5], ld32((c.r[20].w[0] + 14228u)));
    c.r[6].d[0] = c.r[6].d[0] | 32897ull;
    set32(c.r[7], ld32((c.r[19].w[0] + 14232u)));
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD74u);  if (depth < kMaxDepth) unit_007D(c, 103u, depth + 1u); else { c.pc = 0x002F50D8u; return; } if (c.pc != 0x002FAD74u) [[unlikely]] return; }
L_002FAD74:
    set32(c.r[16], c.r[22].w[0] + 13496u);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FADA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD90u);  if (depth < kMaxDepth) unit_0039(c, 70u, depth + 1u); else { c.pc = 0x001E48F8u; return; } if (c.pc != 0x002FAD90u) [[unlikely]] return; }
L_002FAD90:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FADA8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FADA8u);  if (depth < kMaxDepth) unit_0039(c, 70u, depth + 1u); else { c.pc = 0x001E48F8u; return; } if (c.pc != 0x002FADA8u) [[unlikely]] return; }
L_002FADA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FADB0u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002FADB0u) [[unlikely]] return; }
L_002FADB0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FAD38u | kUnwind; return; } goto L_002FAD38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24620u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FADE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FADE4u) [[unlikely]] return; }
L_002FADE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20668u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 15804u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAE00u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x002FAE00u) [[unlikely]] return; }
L_002FAE00:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FAE30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 20668u)));
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0] + 24628u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAE5Cu);  if (depth < kMaxDepth) unit_0057(c, 183u, depth + 1u); else { c.pc = 0x0025EAB8u; return; } if (c.pc != 0x002FAE5Cu) [[unlikely]] return; }
L_002FAE5C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[6], 0u + 131u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAE78u);  if (depth < kMaxDepth) unit_0057(c, 190u, depth + 1u); else { c.pc = 0x0025EB58u; return; } if (c.pc != 0x002FAE78u) [[unlikely]] return; }
L_002FAE78:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 18728u);
    st32((c.r[3].w[0] + 24620u), c.r[2].w[0]);
    set32(c.r[7], c.r[7].w[0] - 18680u);
    set32(c.r[8], 0u + 102u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAEA4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002FAEA4u) [[unlikely]] return; }
L_002FAEA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FAEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[8], c.r[8].w[0] - 20944u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAEF0u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002FAEF0u) [[unlikely]] return; }
L_002FAEF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FAF00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 15744u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF18u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002FAF18u) [[unlikely]] return; }
L_002FAF18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FAF28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24640u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FAF54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF4Cu);  if (depth < kMaxDepth) unit_007E(c, 237u, depth + 1u); else { c.pc = 0x002FAA60u; return; } if (c.pc != 0x002FAF4Cu) [[unlikely]] return; }
L_002FAF4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FAF6C; } }
L_002FAF54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 19772u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 19776u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF6Cu);  if (depth < kMaxDepth) unit_0049(c, 221u, depth + 1u); else { c.pc = 0x00226BF8u; return; } if (c.pc != 0x002FAF6Cu) [[unlikely]] return; }
L_002FAF6C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 15744u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FAF98; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 480u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF88u);  if (depth < kMaxDepth) unit_0049(c, 238u, depth + 1u); else { c.pc = 0x00226E40u; return; } if (c.pc != 0x002FAF88u) [[unlikely]] return; }
L_002FAF88:
    set32(c.r[4], ld32((c.r[16].w[0] + 15744u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF94u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002FAF94u) [[unlikely]] return; }
L_002FAF94:
    st32((c.r[16].w[0] + 15744u), 0u);
    c.budget -= 1;
L_002FAF98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FAFB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[3].w[0] + 15744u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB058; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 368u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 24620u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FAFF8u) [[unlikely]] return; }
L_002FAFF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24640u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FB018; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB010u);  if (depth < kMaxDepth) unit_007E(c, 237u, depth + 1u); else { c.pc = 0x002FAA60u; return; } if (c.pc != 0x002FB010u) [[unlikely]] return; }
L_002FB010:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB030; } }
L_002FB018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 19772u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 19776u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB030u);  if (depth < kMaxDepth) unit_0049(c, 221u, depth + 1u); else { c.pc = 0x00226BF8u; return; } if (c.pc != 0x002FB030u) [[unlikely]] return; }
L_002FB030:
    set32(c.r[2], ld32((c.r[16].w[0] + 15744u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB058; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 480u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB048u);  if (depth < kMaxDepth) unit_0049(c, 238u, depth + 1u); else { c.pc = 0x00226E40u; return; } if (c.pc != 0x002FB048u) [[unlikely]] return; }
L_002FB048:
    set32(c.r[4], ld32((c.r[16].w[0] + 15744u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB054u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002FB054u) [[unlikely]] return; }
L_002FB054:
    st32((c.r[16].w[0] + 15744u), 0u);
    c.budget -= 1;
L_002FB058:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[17].w[0] + 15744u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB0FC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 19772u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[2].w[0] + 19304u), 0u);
    st32((c.r[5].w[0] + 24632u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB0B4u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002FB0B4u) [[unlikely]] return; }
L_002FB0B4:
    set32(c.r[4], ld32((c.r[17].w[0] + 15744u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB0C0u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002FB0C0u) [[unlikely]] return; }
L_002FB0C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002FB0F4; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x80800000u);
    set32(c.r[7], ld32((c.r[8].w[0] + 14232u)));
    c.r[6].d[0] = c.r[6].d[0] | 32897ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 14224u)));
    c.r[8].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 14228u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB0F4u);  if (depth < kMaxDepth) unit_007D(c, 103u, depth + 1u); else { c.pc = 0x002F50D8u; return; } if (c.pc != 0x002FB0F4u) [[unlikely]] return; }
L_002FB0F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB0FCu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002FB0FCu) [[unlikely]] return; }
L_002FB0FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB118:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB134u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x002FB134u) [[unlikely]] return; }
L_002FB134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB13Cu);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x002FB13Cu) [[unlikely]] return; }
L_002FB13C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] - 20944u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB168u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002FB168u) [[unlikely]] return; }
L_002FB168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB170u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x002FB170u) [[unlikely]] return; }
L_002FB170:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB188:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB1A0u);  if (depth < kMaxDepth) unit_007E(c, 231u, depth + 1u); else { c.pc = 0x002FA950u; return; } if (c.pc != 0x002FB1A0u) [[unlikely]] return; }
L_002FB1A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB1ACu);  if (depth < kMaxDepth) unit_007E(c, 256u, depth + 1u); else { c.pc = 0x002FACB0u; return; } if (c.pc != 0x002FB1ACu) [[unlikely]] return; }
L_002FB1AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB1C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[2].w[0] + 24624u), c.r[5].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB1ECu);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x002FB1ECu) [[unlikely]] return; }
L_002FB1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB1F4u);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x002FB1F4u) [[unlikely]] return; }
L_002FB1F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[8].w[0] - 20944u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB220u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002FB220u) [[unlikely]] return; }
L_002FB220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB228u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x002FB228u) [[unlikely]] return; }
L_002FB228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB230u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x002FB230u) [[unlikely]] return; }
L_002FB230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB238u);  if (depth < kMaxDepth) unit_007E(c, 231u, depth + 1u); else { c.pc = 0x002FA950u; return; } if (c.pc != 0x002FB238u) [[unlikely]] return; }
L_002FB238:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB244u);  if (depth < kMaxDepth) unit_007E(c, 256u, depth + 1u); else { c.pc = 0x002FACB0u; return; } if (c.pc != 0x002FB244u) [[unlikely]] return; }
L_002FB244:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 3u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[2].w[0] + 19624u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 15804u), c.r[4].w[0]);
    c.budget -= 12;
L_002FB290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB298u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002FB298u) [[unlikely]] return; }
L_002FB298:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2A4u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002FB2A4u) [[unlikely]] return; }
L_002FB2A4:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB290u | kUnwind; return; } goto L_002FB290; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[16], 0u + 3u);
    set32(c.r[4], ld32((c.r[2].w[0] + 24632u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[5], ld32((c.r[2].w[0] + 19776u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2C8u);  if (depth < kMaxDepth) unit_0049(c, 221u, depth + 1u); else { c.pc = 0x00226BF8u; return; } if (c.pc != 0x002FB2C8u) [[unlikely]] return; }
L_002FB2C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2D0u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002FB2D0u) [[unlikely]] return; }
L_002FB2D0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2DCu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002FB2DCu) [[unlikely]] return; }
L_002FB2DC:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB2C8u | kUnwind; return; } goto L_002FB2C8; } }
    st32((c.r[17].w[0] + 15804u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB300:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[2].w[0] + 14208u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 13248u);
    set32(c.r[3], c.r[17].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 11160u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002FB518; } }
    mmi::mult(c, 0, c.r[19].w[0], c.r[6].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] + 13248u);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002FB384; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB380u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FB380u) [[unlikely]] return; }
L_002FB380:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FB384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 104u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FB3A4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB3EC; } }
L_002FB3A4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 104u));
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9284u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[2].d[0];
    c.budget -= 18;
L_002FB3EC:
    set32(c.r[2], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + 27456u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[7].w[0] + 10000u));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB434; } }
    c.r[3].d[0] = ld16((c.r[7].w[0] + 9998u));
    set32(c.r[4], 0u - 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[3].w[0] + 255u);
    if (c.r[4].d[0] != 0) c.r[2].d[0] = c.r[3].d[0];
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.budget -= 7;
L_002FB434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10124u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FB518; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 10010u)));
    set32(c.r[2], c.r[2].w[0] + 17792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[0] = c.r[16].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = c.r[7].sd[0] < 12ll ? 1ull : 0ull;
    set32(c.r[4], 0u + 11u);
    c.f[2] = ld32((c.r[3].w[0]));
    if (c.r[5].d[0] == 0) c.r[7].d[0] = c.r[4].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 17944u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 5004u)));
    set32(c.r[9], 0u - 1u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], ld32((c.r[2].w[0] - 5016u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 9284u)));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[16], c.f[1]);
    set32(c.r[2], c.r[16].w[0] << 3);
    if (c.r[5].d[0] != 0) c.r[16].d[0] = c.r[2].d[0];
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[7], c.r[4].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[7].d[0] = 0ull;
    c.budget -= 36;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FB4DC; } }
    set32(c.r[2], 0u + 1u);
    if (c.r[7].d[0] == 0) c.r[7].d[0] = c.r[2].d[0];
    c.budget -= 2;
L_002FB4DC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 9286u)));
    set32(c.r[2], c.r[7].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    st16((c.r[8].w[0] + 9284u), static_cast<std::uint16_t>(c.r[7].w[0]));
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x002FB4FCu);  goto L_002FB500; }
L_002FB500:
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[4].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[9].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[7].d[0] = 0ull;
    st16((c.r[8].w[0] + 9286u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.budget -= 6;
L_002FB518:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB538:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u - 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002FB744; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] ^ 1ull;
    c.r[19].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB57Cu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FB57Cu) [[unlikely]] return; }
L_002FB57C:
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 13248u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 10040u)));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] - 26108u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002FB5D8; } }
    c.r[3].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB62C; } }
L_002FB5CC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB744; } }
L_002FB5D8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB62C; } }
    c.r[2].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB5CCu | kUnwind; return; } goto L_002FB5CC; } }
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB610; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB628; } }
L_002FB610:
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB62C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002FB628:
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 1;
L_002FB62C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[2], 0u + 880u);
    set32(c.r[3], c.r[3].w[0] - 20584u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[8], c.r[4].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[4].d[0] = ld64((c.r[18].w[0] + 560u));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FB680; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 20520u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB728; } }
L_002FB680:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB6E8; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[10].w[0] + 14208u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10042u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002FB740; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FB6D8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FB740; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 20536u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB728; } }
L_002FB6D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 20552u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB728; } }
L_002FB6E8:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[10].w[0] + 14208u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10042u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002FB720; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FB740; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FB740; } }
L_002FB720:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 20568u);
    c.budget -= 2;
L_002FB728:
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 6;
L_002FB740:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 1;
L_002FB744:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FB768:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.f[15] = 0u;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.f[13] = ld32((c.r[18].w[0] + 132u));
    c.f[14] = ld32((c.r[18].w[0] + 136u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB7B4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002FB7B4u) [[unlikely]] return; }
L_002FB7B4:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9064u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB84C; } }
    set32(c.r[20], c.r[18].w[0] + 9068u);
    set32(c.r[19], c.r[18].w[0] + 9076u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.budget -= 6;
L_002FB7D8:
    set32(c.r[2], c.r[20].w[0] + c.r[17].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB7ECu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002FB7ECu) [[unlikely]] return; }
L_002FB7EC:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x002FB7F4u);  goto L_002FB7F8; }
L_002FB7F8:
    set32(c.r[2], c.r[17].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.f[13] = 0u;
    set32(c.r[4], c.r[23].w[0] - 22920u);
    c.f[14] = ld32((c.r[22].w[0] - 29220u));
    set32(c.r[5], 0u - 1u);
    c.f[15] = ld32((c.r[21].w[0] - 29216u));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[19].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB83Cu);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x002FB83Cu) [[unlikely]] return; }
L_002FB83C:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9064u));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB7D8u | kUnwind; return; } goto L_002FB7D8; } }
L_002FB84C:
    c.r[4].d[0] = ld64((c.r[18].w[0] + 9248u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FB8FC; } }
    c.r[2].d[0] = c.r[4].d[0] >> 32;
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FB8C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB8C0u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x002FB8C0u) [[unlikely]] return; }
L_002FB8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB8FC; } }
L_002FB8C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9289u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.f[13] = 0u;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB8FCu);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x002FB8FCu) [[unlikely]] return; }
L_002FB8FC:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 9066u));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB978; } }
    set32(c.r[22], 0u - 1u);
    c.r[22].d[0] = c.r[22].d[0] >> 32;
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[16], c.r[18].w[0] + 9204u);
    c.budget -= 7;
L_002FB928:
    c.r[6].d[0] = ld32((c.r[16].w[0]));
    set32(c.r[4], c.r[21].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[5], 0u - 1u);
    c.r[6].d[0] = c.r[6].d[0] & c.r[22].d[0];
    c.f[13] = 0u;
    c.f[14] = ld32((c.r[20].w[0] - 29220u));
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.f[15] = ld32((c.r[19].w[0] - 29216u));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB968u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x002FB968u) [[unlikely]] return; }
L_002FB968:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9066u));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB928u | kUnwind; return; } goto L_002FB928; } }
L_002FB978:
    c.r[4].d[0] = ld64((c.r[18].w[0] + 9256u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FBA28; } }
    c.r[2].d[0] = c.r[4].d[0] >> 32;
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].d[0] >> 32;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 32);
    c.r[6].d[0] = c.r[3].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    set32(c.r[2], c.r[5].w[0] << 24);
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002FB9F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = 0u;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB9ECu);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x002FB9ECu) [[unlikely]] return; }
L_002FB9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FBA28; } }
L_002FB9F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9289u)));
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.f[13] = 0u;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBA28u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x002FBA28u) [[unlikely]] return; }
L_002FBA28:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 160u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FBA58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[29], c.r[29].w[0] - 320u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[21]);
    c.lo.d[0] = c.r[2].d[0];
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], 0u + 13248u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[22]);
    mmi::madd(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[19]);
    set32(c.r[5], c.r[5].w[0] + 27456u);
    st32((c.r[29].w[0] + 92u), c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 9872u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 256u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 240u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[2].w[0] + c.r[5].w[0]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[23]);
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 312u), c.f[23]);
    st32((c.r[29].w[0] + 304u), c.f[22]);
    st32((c.r[29].w[0] + 296u), c.f[21]);
    st32((c.r[29].w[0] + 288u), c.f[20]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBAE4u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002FBAE4u) [[unlikely]] return; }
L_002FBAE4:
    set32(c.r[3], ld32((c.r[2].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 28u, depth); } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB00u);  if (depth < kMaxDepth) unit_0081(c, 116u, depth + 1u); else { c.pc = 0x003058B0u; return; } if (c.pc != 0x002FBB00u) [[unlikely]] return; }
L_002FBB00:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB14u);  if (depth < kMaxDepth) unit_0081(c, 119u, depth + 1u); else { c.pc = 0x00305948u; return; } if (c.pc != 0x002FBB14u) [[unlikely]] return; }
L_002FBB14:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB28u);  if (depth < kMaxDepth) unit_007F(c, 59u, depth + 1u); else { c.pc = 0x002FD460u; return; } if (c.pc != 0x002FBB28u) [[unlikely]] return; }
L_002FBB28:
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FBBF4; } }
    c.f[0] = c.r[23].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 52u);
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB64u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002FBB64u) [[unlikely]] return; }
L_002FBB64:
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB78u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002FBB78u) [[unlikely]] return; }
L_002FBB78:
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[0] = ld32((c.r[29].w[0] + 52u));
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[6], ld32((c.r[29].w[0] + 108u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBBBCu);  if (depth < kMaxDepth) unit_007F(c, 62u, depth + 1u); else { c.pc = 0x002FD588u; return; } if (c.pc != 0x002FBBBCu) [[unlikely]] return; }
L_002FBBBC:
    st16((c.r[19].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBBD0u);  if (depth < kMaxDepth) unit_0081(c, 113u, depth + 1u); else { c.pc = 0x00305818u; return; } if (c.pc != 0x002FBBD0u) [[unlikely]] return; }
L_002FBBD0:
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st16((c.r[19].w[0] + 9020u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 208u), c.f[1]);
    st32((c.r[19].w[0] + 216u), c.f[0]);
    c.budget -= 9;
L_002FBBF4:
    c.f[0] = c.r[23].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = ld32((c.r[19].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[17], c.r[29].w[0] + 56u);
    set32(c.r[16], c.r[29].w[0] + 60u);
    c.f[12] = fp::add(c.f[12], c.f[0]);
    set32(c.r[18], c.r[2].w[0] + 17040u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC28u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002FBC28u) [[unlikely]] return; }
L_002FBC28:
    set32(c.r[2], 0u + 1u);
    c.f[12] = c.f[0];
    st32((c.r[29].w[0] + 116u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC44u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002FBC44u) [[unlikely]] return; }
L_002FBC44:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[3], 0u + 1056u);
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.f[3] = ld32((c.r[19].w[0] + 136u));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    c.f[2] = ld32((c.r[19].w[0] + 128u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[5].w[0] + c.r[18].w[0]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[1] = ld32((c.r[16].w[0]));
    set32(c.r[6], c.r[6].w[0] + 17048u);
    set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[0] = c.r[30].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.f[4] = c.r[3].w[0];
    c.f[4] = fp::cvt_s_w(c.f[4]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[4]);
    st32((c.r[16].w[0]), c.f[1]);
    st32((c.r[19].w[0] + 128u), c.f[2]);
    c.f[0] = ld32((c.r[17].w[0]));
    st32((c.r[19].w[0] + 136u), c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCE8u);  if (depth < kMaxDepth) unit_007F(c, 51u, depth + 1u); else { c.pc = 0x002FD110u; return; } if (c.pc != 0x002FBCE8u) [[unlikely]] return; }
L_002FBCE8:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCFCu);  if (depth < kMaxDepth) unit_007F(c, 55u, depth + 1u); else { c.pc = 0x002FD230u; return; } if (c.pc != 0x002FBCFCu) [[unlikely]] return; }
L_002FBCFC:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD10u);  if (depth < kMaxDepth) unit_007F(c, 74u, depth + 1u); else { c.pc = 0x002FDE20u; return; } if (c.pc != 0x002FBD10u) [[unlikely]] return; }
L_002FBD10:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD24u);  if (depth < kMaxDepth) unit_007F(c, 70u, depth + 1u); else { c.pc = 0x002FDBB8u; return; } if (c.pc != 0x002FBD24u) [[unlikely]] return; }
L_002FBD24:
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002FBD40; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    c.r[2].d[0] = c.r[23].d[0] ^ 4096ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.budget -= 4;
L_002FBD40:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD50u);  if (depth < kMaxDepth) unit_007F(c, 78u, depth + 1u); else { c.pc = 0x002FE050u; return; } if (c.pc != 0x002FBD50u) [[unlikely]] return; }
L_002FBD50:
    c.r[30].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[29].w[0] + 96u), 0u);
    st16((c.r[4].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD6Cu);  if (depth < kMaxDepth) unit_006E(c, 94u, depth + 1u); else { c.pc = 0x002B9270u; return; } if (c.pc != 0x002FBD6Cu) [[unlikely]] return; }
L_002FBD6C:
    set32(c.r[5], 0u + 1056u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[6].w[0] + 17048u);
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[17].w[0]));
    set32(c.r[3], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.f[15] = ld32((c.r[3].w[0]));
    c.f[14] = ld32((c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBD9Cu);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x002FBD9Cu) [[unlikely]] return; }
L_002FBD9C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[19], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    set32(c.r[2], c.r[21].w[0] + 1u);
    c.lo.d[0] = c.r[3].d[0];
    st32((c.r[29].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[3], 0u + 13248u);
    mmi::madd(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[2].w[0] - 13212u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002FBDE4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBDE0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FBDE0u) [[unlikely]] return; }
L_002FBDE0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FBDE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBE30; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBE24; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], 0u + 1u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 9933u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002FBE24:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE30u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002FBE30u) [[unlikely]] return; }
L_002FBE30:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 100u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE40u);  if (depth < kMaxDepth) unit_007C(c, 13u, depth + 1u); else { c.pc = 0x002F0180u; return; } if (c.pc != 0x002FBE40u) [[unlikely]] return; }
L_002FBE40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 6u, depth); } }
    c.r[2].d[0] = c.r[19].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 6u, depth); } }
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FBE80; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + 14208u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 10130u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_002FBE80:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE90u);  if (depth < kMaxDepth) unit_0081(c, 123u, depth + 1u); else { c.pc = 0x00305A08u; return; } if (c.pc != 0x002FBE90u) [[unlikely]] return; }
L_002FBE90:
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEA4u);  if (depth < kMaxDepth) unit_007F(c, 91u, depth + 1u); else { c.pc = 0x002FE4B0u; return; } if (c.pc != 0x002FBEA4u) [[unlikely]] return; }
L_002FBEA4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEB8u);  if (depth < kMaxDepth) unit_007F(c, 96u, depth + 1u); else { c.pc = 0x002FE5A8u; return; } if (c.pc != 0x002FBEB8u) [[unlikely]] return; }
L_002FBEB8:
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBECCu);  if (depth < kMaxDepth) unit_007F(c, 101u, depth + 1u); else { c.pc = 0x002FE6A0u; return; } if (c.pc != 0x002FBECCu) [[unlikely]] return; }
L_002FBECC:
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEE0u);  if (depth < kMaxDepth) unit_007F(c, 70u, depth + 1u); else { c.pc = 0x002FDBB8u; return; } if (c.pc != 0x002FBEE0u) [[unlikely]] return; }
L_002FBEE0:
    set32(c.r[6], ld32((c.r[29].w[0] + 112u)));
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[6].w[0] + 216u), 0u);
    st32((c.r[6].w[0] + 208u), 0u);
    st32((c.r[6].w[0] + 212u), 0u);
    c.budget -= 7;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { goto L_002FBF08; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 28u, depth); } }
L_002FBF08:
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], c.r[20].w[0] - c.r[19].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.f[22] = c.r[23].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    set32(c.r[21], 0u + 13248u);
    if (c.r[3].d[0] != 0) c.r[20].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF38u);  if (depth < kMaxDepth) unit_007F(c, 86u, depth + 1u); else { c.pc = 0x002FE3B8u; return; } if (c.pc != 0x002FBF38u) [[unlikely]] return; }
L_002FBF38:
    set32(c.r[3], c.r[22].w[0] + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[19], c.r[5].w[0] + 14208u);
    st32((c.r[29].w[0] + 120u), c.r[3].w[0]);
    set32(c.r[18], c.r[4].w[0] + c.r[19].w[0]);
    st16((c.r[18].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_007F(c, 2u, depth); } }
    c.f[12] = ld32((c.r[18].w[0] + 148u));
    set32(c.r[16], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    set32(c.r[17], c.r[29].w[0] + 68u);
    c.f[12] = fp::add(c.f[12], c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF7Cu);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002FBF7Cu) [[unlikely]] return; }
L_002FBF7C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF90u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002FBF90u) [[unlikely]] return; }
L_002FBF90:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    mmi::mult(c, 0, c.r[22].w[0], c.r[21].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[29].w[0] + 68u));
    set32(c.r[4], c.r[19].w[0] + 13248u);
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    set32(c.r[2], 0u - c.r[30].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.f[12] = c.r[2].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.f[13] = c.r[3].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFF8u);  if (depth < kMaxDepth) unit_0079(c, 184u, depth + 1u); else { c.pc = 0x002E6BD8u; return; } if (c.pc != 0x002FBFF8u) [[unlikely]] return; }
L_002FBFF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_007F(c, 2u, depth); } }
    [[clang::musttail]] return unit_007F(c, 1u, depth);
}

}
