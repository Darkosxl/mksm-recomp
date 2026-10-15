#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00C3[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15,
    0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 73, 0,
    0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    82, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 99,
    0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 106, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0,
    0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 240, 241, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0,
    0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0,
    313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0,
    0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0,
};

void unit_00C3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0040C000;
    case 2u: goto L_0040C018;
    case 3u: goto L_0040C544;
    case 4u: goto L_0040C55C;
    case 5u: goto L_0040C560;
    case 6u: goto L_0040C588;
    case 7u: goto L_0040C64C;
    case 8u: goto L_0040C658;
    case 9u: goto L_0040C6EC;
    case 10u: goto L_0040C75C;
    case 11u: goto L_0040C768;
    case 12u: goto L_0040C788;
    case 13u: goto L_0040C7B0;
    case 14u: goto L_0040C7E4;
    case 15u: goto L_0040C7FC;
    case 16u: goto L_0040C804;
    case 17u: goto L_0040C820;
    case 18u: goto L_0040C844;
    case 19u: goto L_0040C860;
    case 20u: goto L_0040C870;
    case 21u: goto L_0040C878;
    case 22u: goto L_0040C890;
    case 23u: goto L_0040C8C0;
    case 24u: goto L_0040C908;
    case 25u: goto L_0040C938;
    case 26u: goto L_0040C950;
    case 27u: goto L_0040C990;
    case 28u: goto L_0040C9C0;
    case 29u: goto L_0040CB60;
    case 30u: goto L_0040CD3C;
    case 31u: goto L_0040CD44;
    case 32u: goto L_0040CD4C;
    case 33u: goto L_0040CD58;
    case 34u: goto L_0040CD80;
    case 35u: goto L_0040CE78;
    case 36u: goto L_0040CEE0;
    case 37u: goto L_0040CF6C;
    case 38u: goto L_0040CFE8;
    case 39u: goto L_0040D04C;
    case 40u: goto L_0040D080;
    case 41u: goto L_0040D0B4;
    case 42u: goto L_0040D0C8;
    case 43u: goto L_0040D0E8;
    case 44u: goto L_0040D148;
    case 45u: goto L_0040D1B0;
    case 46u: goto L_0040D1C0;
    case 47u: goto L_0040D1E0;
    case 48u: goto L_0040D248;
    case 49u: goto L_0040D250;
    case 50u: goto L_0040D258;
    case 51u: goto L_0040D290;
    case 52u: goto L_0040D298;
    case 53u: goto L_0040D2D0;
    case 54u: goto L_0040D2D8;
    case 55u: goto L_0040D2E0;
    case 56u: goto L_0040D300;
    case 57u: goto L_0040D324;
    case 58u: goto L_0040D338;
    case 59u: goto L_0040D360;
    case 60u: goto L_0040D390;
    case 61u: goto L_0040D3D8;
    case 62u: goto L_0040D430;
    case 63u: goto L_0040D450;
    case 64u: goto L_0040D458;
    case 65u: goto L_0040D460;
    case 66u: goto L_0040D498;
    case 67u: goto L_0040D4A0;
    case 68u: goto L_0040D4D8;
    case 69u: goto L_0040D4E0;
    case 70u: goto L_0040D4E8;
    case 71u: goto L_0040D508;
    case 72u: goto L_0040D574;
    case 73u: goto L_0040D578;
    case 74u: goto L_0040D584;
    case 75u: goto L_0040D5D0;
    case 76u: goto L_0040D5D4;
    case 77u: goto L_0040D5DC;
    case 78u: goto L_0040D5E4;
    case 79u: goto L_0040D610;
    case 80u: goto L_0040D61C;
    case 81u: goto L_0040D628;
    case 82u: goto L_0040D680;
    case 83u: goto L_0040D684;
    case 84u: goto L_0040D68C;
    case 85u: goto L_0040D694;
    case 86u: goto L_0040D6C0;
    case 87u: goto L_0040D6CC;
    case 88u: goto L_0040D6D8;
    case 89u: goto L_0040D708;
    case 90u: goto L_0040D718;
    case 91u: goto L_0040D73C;
    case 92u: goto L_0040D74C;
    case 93u: goto L_0040D78C;
    case 94u: goto L_0040D7CC;
    case 95u: goto L_0040D7D4;
    case 96u: goto L_0040D7DC;
    case 97u: goto L_0040D7E4;
    case 98u: goto L_0040D7EC;
    case 99u: goto L_0040D7FC;
    case 100u: goto L_0040D804;
    case 101u: goto L_0040D814;
    case 102u: goto L_0040D81C;
    case 103u: goto L_0040D82C;
    case 104u: goto L_0040D834;
    case 105u: goto L_0040D83C;
    case 106u: goto L_0040D888;
    case 107u: goto L_0040D88C;
    case 108u: goto L_0040D894;
    case 109u: goto L_0040D89C;
    case 110u: goto L_0040D8C8;
    case 111u: goto L_0040D8D0;
    case 112u: goto L_0040D8DC;
    case 113u: goto L_0040D92C;
    case 114u: goto L_0040D930;
    case 115u: goto L_0040D938;
    case 116u: goto L_0040D940;
    case 117u: goto L_0040D948;
    case 118u: goto L_0040D968;
    case 119u: goto L_0040D97C;
    case 120u: goto L_0040D9AC;
    case 121u: goto L_0040D9B4;
    case 122u: goto L_0040D9E8;
    case 123u: goto L_0040D9F0;
    case 124u: goto L_0040DA24;
    case 125u: goto L_0040DA2C;
    case 126u: goto L_0040DA60;
    case 127u: goto L_0040DA68;
    case 128u: goto L_0040DA70;
    case 129u: goto L_0040DAA0;
    case 130u: goto L_0040DAD0;
    case 131u: goto L_0040DB18;
    case 132u: goto L_0040DB64;
    case 133u: goto L_0040DBB0;
    case 134u: goto L_0040DBF8;
    case 135u: goto L_0040DC20;
    case 136u: goto L_0040DC5C;
    case 137u: goto L_0040DC64;
    case 138u: goto L_0040DC70;
    case 139u: goto L_0040DC78;
    case 140u: goto L_0040DC80;
    case 141u: goto L_0040DCAC;
    case 142u: goto L_0040DCB4;
    case 143u: goto L_0040DCBC;
    case 144u: goto L_0040DCD8;
    case 145u: goto L_0040DD28;
    case 146u: goto L_0040DD60;
    case 147u: goto L_0040DD78;
    case 148u: goto L_0040DDC4;
    case 149u: goto L_0040DDE0;
    case 150u: goto L_0040DDFC;
    case 151u: goto L_0040DE10;
    case 152u: goto L_0040DE18;
    case 153u: goto L_0040DE4C;
    case 154u: goto L_0040DE80;
    case 155u: goto L_0040DED0;
    case 156u: goto L_0040DEE0;
    case 157u: goto L_0040DF20;
    case 158u: goto L_0040DF70;
    case 159u: goto L_0040DFC4;
    case 160u: goto L_0040DFD8;
    case 161u: goto L_0040E080;
    case 162u: goto L_0040E090;
    case 163u: goto L_0040E0B0;
    case 164u: goto L_0040E0F8;
    case 165u: goto L_0040E108;
    case 166u: goto L_0040E120;
    case 167u: goto L_0040E130;
    case 168u: goto L_0040E168;
    case 169u: goto L_0040E1B0;
    case 170u: goto L_0040E200;
    case 171u: goto L_0040E218;
    case 172u: goto L_0040E228;
    case 173u: goto L_0040E2C0;
    case 174u: goto L_0040E300;
    case 175u: goto L_0040E354;
    case 176u: goto L_0040E364;
    case 177u: goto L_0040E378;
    case 178u: goto L_0040E390;
    case 179u: goto L_0040E3B8;
    case 180u: goto L_0040E41C;
    case 181u: goto L_0040E460;
    case 182u: goto L_0040E478;
    case 183u: goto L_0040E48C;
    case 184u: goto L_0040E4A0;
    case 185u: goto L_0040E4D0;
    case 186u: goto L_0040E4E0;
    case 187u: goto L_0040E4F4;
    case 188u: goto L_0040E510;
    case 189u: goto L_0040E538;
    case 190u: goto L_0040E550;
    case 191u: goto L_0040E584;
    case 192u: goto L_0040E598;
    case 193u: goto L_0040E5B8;
    case 194u: goto L_0040E5D8;
    case 195u: goto L_0040E60C;
    case 196u: goto L_0040E61C;
    case 197u: goto L_0040E630;
    case 198u: goto L_0040E650;
    case 199u: goto L_0040E680;
    case 200u: goto L_0040E690;
    case 201u: goto L_0040E6A4;
    case 202u: goto L_0040E6C0;
    case 203u: goto L_0040E6F0;
    case 204u: goto L_0040E700;
    case 205u: goto L_0040E714;
    case 206u: goto L_0040E730;
    case 207u: goto L_0040E760;
    case 208u: goto L_0040E770;
    case 209u: goto L_0040E784;
    case 210u: goto L_0040E7A0;
    case 211u: goto L_0040E7C4;
    case 212u: goto L_0040E7DC;
    case 213u: goto L_0040E7EC;
    case 214u: goto L_0040E800;
    case 215u: goto L_0040E820;
    case 216u: goto L_0040E850;
    case 217u: goto L_0040E860;
    case 218u: goto L_0040E874;
    case 219u: goto L_0040E890;
    case 220u: goto L_0040E8C0;
    case 221u: goto L_0040E8D0;
    case 222u: goto L_0040E8E4;
    case 223u: goto L_0040E900;
    case 224u: goto L_0040E924;
    case 225u: goto L_0040E940;
    case 226u: goto L_0040E954;
    case 227u: goto L_0040E968;
    case 228u: goto L_0040E97C;
    case 229u: goto L_0040E998;
    case 230u: goto L_0040E9AC;
    case 231u: goto L_0040E9C0;
    case 232u: goto L_0040EA24;
    case 233u: goto L_0040EA40;
    case 234u: goto L_0040EA6C;
    case 235u: goto L_0040EA78;
    case 236u: goto L_0040EA90;
    case 237u: goto L_0040EAAC;
    case 238u: goto L_0040EAC8;
    case 239u: goto L_0040EAD8;
    case 240u: goto L_0040EB08;
    case 241u: goto L_0040EB0C;
    case 242u: goto L_0040EB14;
    case 243u: goto L_0040EB1C;
    case 244u: goto L_0040EB28;
    case 245u: goto L_0040EB50;
    case 246u: goto L_0040EBB0;
    case 247u: goto L_0040EC30;
    case 248u: goto L_0040EC58;
    case 249u: goto L_0040EC78;
    case 250u: goto L_0040EC9C;
    case 251u: goto L_0040ECB8;
    case 252u: goto L_0040ED1C;
    case 253u: goto L_0040ED54;
    case 254u: goto L_0040EDA0;
    case 255u: goto L_0040EE40;
    case 256u: goto L_0040EE68;
    case 257u: goto L_0040EEB8;
    case 258u: goto L_0040EEE4;
    case 259u: goto L_0040EF30;
    case 260u: goto L_0040EFB0;
    case 261u: goto L_0040EFD4;
    case 262u: goto L_0040EFF0;
    case 263u: goto L_0040F034;
    case 264u: goto L_0040F084;
    case 265u: goto L_0040F0D0;
    case 266u: goto L_0040F140;
    case 267u: goto L_0040F15C;
    case 268u: goto L_0040F19C;
    case 269u: goto L_0040F1C8;
    case 270u: goto L_0040F1F0;
    case 271u: goto L_0040F238;
    case 272u: goto L_0040F248;
    case 273u: goto L_0040F258;
    case 274u: goto L_0040F288;
    case 275u: goto L_0040F2B0;
    case 276u: goto L_0040F2D4;
    case 277u: goto L_0040F328;
    case 278u: goto L_0040F340;
    case 279u: goto L_0040F360;
    case 280u: goto L_0040F388;
    case 281u: goto L_0040F3AC;
    case 282u: goto L_0040F410;
    case 283u: goto L_0040F438;
    case 284u: goto L_0040F45C;
    case 285u: goto L_0040F4B8;
    case 286u: goto L_0040F4D8;
    case 287u: goto L_0040F510;
    case 288u: goto L_0040F534;
    case 289u: goto L_0040F598;
    case 290u: goto L_0040F5F0;
    case 291u: goto L_0040F610;
    case 292u: goto L_0040F620;
    case 293u: goto L_0040F640;
    case 294u: goto L_0040F650;
    case 295u: goto L_0040F668;
    case 296u: goto L_0040F680;
    case 297u: goto L_0040F690;
    case 298u: goto L_0040F6A8;
    case 299u: goto L_0040F6B8;
    case 300u: goto L_0040F6C8;
    case 301u: goto L_0040F6D8;
    case 302u: goto L_0040F710;
    case 303u: goto L_0040F76C;
    case 304u: goto L_0040F7BC;
    case 305u: goto L_0040F7E0;
    case 306u: goto L_0040F840;
    case 307u: goto L_0040F864;
    case 308u: goto L_0040F8A0;
    case 309u: goto L_0040F8DC;
    case 310u: goto L_0040F8E4;
    case 311u: goto L_0040F8F0;
    case 312u: goto L_0040F8F8;
    case 313u: goto L_0040F900;
    case 314u: goto L_0040F92C;
    case 315u: goto L_0040F934;
    case 316u: goto L_0040F93C;
    case 317u: goto L_0040F958;
    case 318u: goto L_0040F9A8;
    case 319u: goto L_0040F9C0;
    case 320u: goto L_0040F9D8;
    case 321u: goto L_0040F9E8;
    case 322u: goto L_0040FA28;
    case 323u: goto L_0040FA58;
    case 324u: goto L_0040FAB4;
    case 325u: goto L_0040FACC;
    case 326u: goto L_0040FAF0;
    case 327u: goto L_0040FB48;
    case 328u: goto L_0040FB9C;
    case 329u: goto L_0040FBE8;
    case 330u: goto L_0040FCC0;
    case 331u: goto L_0040FCE0;
    case 332u: goto L_0040FD20;
    case 333u: goto L_0040FD78;
    case 334u: goto L_0040FDB0;
    case 335u: goto L_0040FE68;
    case 336u: goto L_0040FE88;
    case 337u: goto L_0040FEA8;
    case 338u: goto L_0040FF08;
    case 339u: goto L_0040FF30;
    case 340u: goto L_0040FF80;
    case 341u: goto L_0040FFE4;
    case 342u: goto L_0040FFF8;
    default: bad_entry(c, 0x0040C000u); return;
    }
L_0040C000:
    c.r[4].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[1] = c.r[4].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[15]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[1] = fp::sub(c.f[14], c.f[0]);  if (t) { goto L_0040C288; } }
    c.budget -= 1;
L_0040C018:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0040C040; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[9], 0u - 24u);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    set32(c.r[16], c.f[12]);
    c.budget -= 5;
L_0040C040:
    c.r[5].d[0] = c.r[16].d[0] & c.r[3].d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001C0000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 23));
    set32(c.r[4], c.r[9].w[0] - 127u);
    c.r[2].d[0] = c.r[2].d[0] | 50289ull;
    set32(c.r[9], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[5].d[0] | c.r[6].d[0];  if (t) { goto L_0040C06C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0040C090; } }
L_0040C06C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    c.r[2].d[0] = c.r[2].d[0] | 46038ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[8], 0u + 1u);  if (t) { goto L_0040C090; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF800000u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 4;
L_0040C090:
    c.f[12] = c.r[16].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13688u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    c.f[2] = ld32((c.r[2].w[0]));
    c.f[0] = fp::add(c.f[12], c.f[2]);
    c.f[15] = fp::sub(c.f[12], c.f[2]);
    fpu_div(c, 14u, c.f[1], c.f[0]);
    c.f[20] = fp::mul(c.f[15], c.f[14]);
    set32(c.r[2], c.f[20]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = c.r[6].d[0] | 61440ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.f[5] = c.r[3].w[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));
    set32(c.r[2], c.r[8].w[0] << 21);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E530000u);
    c.r[1].d[0] = c.r[1].d[0] | 61762ull;
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E6C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 12885ull;
    c.f[3] = c.r[1].w[0];
    c.f[11] = fp::mul(c.f[20], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E8B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 41733ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EAA0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[9] = c.r[1].w[0];
    c.f[2] = fp::sub(c.f[12], c.f[2]);
    c.f[4] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[11], c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EDB0000u);
    c.r[1].d[0] = c.r[1].d[0] | 28087ull;
    c.f[8] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[5], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[10] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[5], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[1] = fp::sub(c.f[15], c.f[1]);
    c.f[6] = fp::mul(c.f[11], c.f[11]);
    c.f[0] = fp::mul(c.f[11], c.f[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    c.f[3] = fp::add(c.f[5], c.f[20]);
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[1] = fp::mul(c.f[14], c.f[1]);
    c.f[0] = fp::mul(c.f[11], c.f[0]);
    c.f[3] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[9]);
    c.f[0] = fp::mul(c.f[11], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[0] = fp::mul(c.f[11], c.f[0]);
    c.f[11] = fp::mul(c.f[5], c.f[5]);
    c.f[0] = fp::add(c.f[0], c.f[10]);
    c.f[2] = fp::add(c.f[11], c.f[4]);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    set32(c.r[3], c.f[2]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[4] = fp::sub(c.f[2], c.f[4]);
    c.f[4] = fp::sub(c.f[4], c.f[11]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[15] = fp::mul(c.f[5], c.f[2]);
    c.f[2] = fp::sub(c.f[0], c.f[4]);
    c.f[0] = fp::mul(c.f[2], c.f[20]);
    c.f[14] = fp::add(c.f[1], c.f[0]);
    c.f[3] = fp::add(c.f[15], c.f[14]);
    set32(c.r[3], c.f[3]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.f[7] = c.r[3].w[0];
    c.f[2] = fp::sub(c.f[7], c.f[15]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x369D0000u);
    c.r[1].d[0] = c.r[1].d[0] | 50080ull;
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F760000u);
    c.r[1].d[0] = c.r[1].d[0] | 14415ull;
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + 13704u);
    c.f[6] = fp::sub(c.f[14], c.f[2]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.f[1] = fp::mul(c.f[7], c.f[1]);
    c.f[4] = ld32((c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F760000u);
    c.r[1].d[0] = c.r[1].d[0] | 14336ull;
    c.f[2] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[0] = fp::mul(c.f[6], c.f[0]);
    set32(c.r[2], c.r[2].w[0] + 13696u);
    c.f[2] = fp::mul(c.f[7], c.f[2]);
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[12] = c.r[9].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[0] = fp::add(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[12]);
    set32(c.r[3], c.f[0]);
    c.r[4].d[0] = c.r[3].d[0] & c.r[6].d[0];
    c.f[4] = c.r[4].w[0];
    c.f[0] = fp::sub(c.f[4], c.f[12]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 126;
L_0040C288:
    set32(c.r[2], c.r[10].w[0] - 1u);
    set32(c.r[3], c.r[20].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040C2AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_0040C2AC:
    set32(c.r[2], c.f[21]);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[21], c.f[2]);
    c.f[3] = c.r[4].w[0];
    c.f[1] = fp::mul(c.f[21], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[7] = fp::mul(c.f[2], c.f[3]);
    c.f[6] = fp::add(c.f[0], c.f[1]);
    c.f[13] = fp::add(c.f[6], c.f[7]);
    set32(c.r[7], c.f[13]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C310; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62154ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[20], c.f[1]);  if (t) { goto L_0040C398; } }
    c.budget -= 1;
L_0040C310:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_0040C350; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33380000u);
    c.r[1].d[0] = c.r[1].d[0] | 43580ull;
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[13], c.f[7]);
    c.f[0] = fp::add(c.f[6], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_0040C3A0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x71490000u);
    c.r[1].d[0] = c.r[1].d[0] | 62154ull;
    c.f[1] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[20], c.f[1]);  if (t) { goto L_0040C398; } }
L_0040C350:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040C388; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3160000u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_0040C3A0; } }
    c.f[0] = fp::sub(c.f[13], c.f[7]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_0040C3A4; } }
L_0040C388:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x0DA20000u);
    c.r[1].d[0] = c.r[1].d[0] | 16992ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 4;
L_0040C398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_0040C55C; } }
L_0040C3A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_0040C3A4:
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[2].d[0] = c.r[5].d[0] & c.r[6].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 23));  if (t) { goto L_0040C420; } }
    set32(c.r[3], c.r[4].w[0] - 126u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> (c.r[3].w[0] & 31u)));
    set32(c.r[9], c.r[5].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[9].d[0] & c.r[6].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 23));
    set32(c.r[8], c.r[2].w[0] - 127u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[8].w[0] & 31u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[9].d[0] & c.r[2].d[0];
    c.f[12] = c.r[2].w[0];
    c.r[3].d[0] = c.r[9].d[0] & c.r[3].d[0];
    c.f[7] = fp::sub(c.f[7], c.f[12]);
    set32(c.r[2], 0u + 23u);
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] - c.r[8].w[0]);
    set32(c.r[9], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> (c.r[2].w[0] & 31u)));
    set32(c.r[4], 0u - 1u);
    c.f[4] = fp::add(c.f[6], c.f[7]);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[2], 0u - c.r[9].w[0]);
    if (c.r[4].d[0] == 0) c.r[9].d[0] = c.r[2].d[0];
    set32(c.r[7], c.f[4]);
    c.budget -= 25;
L_0040C420:
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.f[12] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29184ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F310000u);
    c.r[1].d[0] = c.r[1].d[0] | 29208ull;
    c.f[4] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[12], c.f[7]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x35BF0000u);
    c.r[1].d[0] = c.r[1].d[0] | 48780ull;
    c.f[2] = c.r[1].w[0];
    c.f[15] = fp::mul(c.f[12], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x33310000u);
    c.r[1].d[0] = c.r[1].d[0] | 47948ull;
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::mul(c.f[12], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB5DD0000u);
    c.r[1].d[0] = c.r[1].d[0] | 59918ull;
    c.f[5] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[6], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBB360000u);
    c.r[1].d[0] = c.r[1].d[0] | 2913ull;
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x388A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 45909ull;
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E2A0000u);
    c.r[1].d[0] = c.r[1].d[0] | 43691ull;
    c.f[8] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    c.f[14] = fp::add(c.f[1], c.f[2]);
    c.f[13] = fp::add(c.f[15], c.f[14]);
    c.f[12] = fp::mul(c.f[13], c.f[13]);
    c.f[1] = fp::sub(c.f[13], c.f[15]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[9] = fp::sub(c.f[14], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[5]);
    c.f[2] = fp::mul(c.f[13], c.f[9]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[2] = fp::add(c.f[9], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[6]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[7]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[8]);
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = fp::sub(c.f[13], c.f[0]);
    set32(c.r[4], c.f[0]);
    c.f[3] = fp::sub(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[13], c.f[0]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[0], c.f[13]);
    c.f[13] = fp::sub(c.f[4], c.f[1]);
    set32(c.r[2], c.f[13]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[9].w[0] << 23);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 23));
    c.budget -= 71;
    { const bool t = c.r[3].sd[0] > 0; c.f[12] = c.f[13];  if (t) { goto L_0040C550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C544u); c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (depth < kMaxDepth) unit_0042(c, 81u, depth + 1u); else { c.pc = 0x0020A188u; return; } if (c.pc != 0x0040C544u) [[unlikely]] return; }
L_0040C544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[13] = c.f[0];  if (t) { goto L_0040C558; } }
    c.budget -= 1;
L_0040C550:
    c.f[13] = c.r[5].w[0];
    c.budget -= 2;
L_0040C558:
    c.f[0] = fp::mul(c.f[20], c.f[13]);
    c.budget -= 1;
L_0040C55C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0040C560:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0040C588:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 20));
    c.r[3].d[0] = c.r[2].d[0] & 2047ull;
    set32(c.r[8], c.r[3].w[0] - 1023u);
    c.r[2].d[0] = c.r[8].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[6].w[0] >> 31);  if (t) { goto L_0040C6CC; } }
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0040C680; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    c.r[2].d[0] = c.r[6].d[0] & c.r[18].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x000F0000u);  if (t) { goto L_0040C70C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[2], 0u - c.r[7].w[0]);
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 12);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[17].d[0] = c.r[17].d[0] >> 32;
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[3].d[0] = c.r[3].d[0] & c.r[17].d[0];
    c.r[5].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], c.r[4].w[0] + 13832u);
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C64Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0040C64Cu) [[unlikely]] return; }
L_0040C64C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C658u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0040C658u) [[unlikely]] return; }
L_0040C658:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[6].d[0] & c.r[18].d[0];
    set32(c.r[2], c.r[19].w[0] << 31);
    c.r[4].d[0] = c.r[4].d[0] & c.r[17].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0040C768; } }
L_0040C680:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[8].w[0] & 31u)));
    c.r[3].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] >> 1);  if (t) { goto L_0040C70C; } }
    c.r[2].d[0] = c.r[6].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 19u);  if (t) { goto L_0040C730; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; c.r[3].d[0] = ~(0ull | c.r[4].d[0]);  if (t) { goto L_0040C6B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_0040C730; } }
L_0040C6B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[8].w[0] & 31u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[6].d[0] = c.r[3].d[0] | c.r[2].d[0];  if (t) { goto L_0040C730; } }
L_0040C6CC:
    c.r[2].d[0] = c.r[8].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[8], c.r[3].w[0] - 1043u);  goto L_0040C6F4; }
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C6ECu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0040C6ECu) [[unlikely]] return; }
L_0040C6EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0040C76C; } }
L_0040C6F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[4], c.r[2].w[0] >> (c.r[8].w[0] & 31u));
    c.r[3].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] >> 1);  if (t) { goto L_0040C714; } }
L_0040C70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0040C768; } }
L_0040C714:
    c.r[2].d[0] = c.r[7].d[0] & c.r[4].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = ~(0ull | c.r[4].d[0]);  if (t) { goto L_0040C730; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> (c.r[8].w[0] & 31u)));
    c.r[7].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 4;
L_0040C730:
    c.r[2].d[0] = c.r[7].d[0] << 32;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[9].d[0] = c.r[6].d[0] << 32;
    c.r[5].d[0] = c.r[9].d[0] | c.r[2].d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[3].w[0] + 13832u);
    set32(c.r[2], c.r[19].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C75Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 206u, depth + 1u); else { c.pc = 0x00202590u; return; } if (c.pc != 0x0040C75Cu) [[unlikely]] return; }
L_0040C75C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C768u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0040(c, 211u, depth + 1u); else { c.pc = 0x002025E8u; return; } if (c.pc != 0x0040C768u) [[unlikely]] return; }
L_0040C768:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0040C76C:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0040C788:
    set32(c.r[3], c.f[12]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] >> 31);  c.pc = t; return; }
L_0040C7B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] - 872u)));
    set32(c.r[18], c.r[17].w[0] - 872u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0040C804; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C7E4u); set32(c.r[4], c.r[4].w[0] + 13848u);  if (depth < kMaxDepth) unit_00E1(c, 22u, depth + 1u); else { c.pc = 0x004842B0u; return; } if (c.pc != 0x0040C7E4u) [[unlikely]] return; }
L_0040C7E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_0040C804; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C7FCu); set32(c.r[6], 0u + 14u);  if (depth < kMaxDepth) unit_00E1(c, 71u, depth + 1u); else { c.pc = 0x004848F8u; return; } if (c.pc != 0x0040C7FCu) [[unlikely]] return; }
L_0040C7FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C804u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00E1(c, 43u, depth + 1u); else { c.pc = 0x00484540u; return; } if (c.pc != 0x0040C804u) [[unlikely]] return; }
L_0040C804:
    set32(c.r[2], c.r[17].w[0] - 872u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0040C820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] - 872u)));
    set32(c.r[16], c.r[3].w[0] - 872u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0040C844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C844u);  if (depth < kMaxDepth) unit_00C3(c, 13u, depth + 1u); else { c.pc = 0x0040C7B0u; return; } if (c.pc != 0x0040C844u) [[unlikely]] return; }
L_0040C844:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[2].d[0] = c.r[2].d[0] ^ 84ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040C860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C870u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 415u, depth + 1u); else { c.pc = 0x0047FF10u; return; } if (c.pc != 0x0040C870u) [[unlikely]] return; }
L_0040C870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C878u);  if (depth < kMaxDepth) unit_00C3(c, 17u, depth + 1u); else { c.pc = 0x0040C820u; return; } if (c.pc != 0x0040C878u) [[unlikely]] return; }
L_0040C878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_0040C888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] - 876u));  if (t) { goto L_0040C8B4; } }
L_0040C888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C890u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DF(c, 415u, depth + 1u); else { c.pc = 0x0047FF10u; return; } if (c.pc != 0x0040C890u) [[unlikely]] return; }
L_0040C890:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] >> 13);
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[3].w[0] >> 16);  goto L_0040C8B0; }
    set32(c.r[2], c.r[3].w[0] >> 4);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_0040C8B4; } }
L_0040C8B0:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    c.budget -= 1;
L_0040C8B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0040C8C0:
    sdr(c.r[3], (c.r[7].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    set32(c.r[29], c.r[29].w[0] + 16u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 18;
L_0040C908:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 25920u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040C938u);  if (depth < kMaxDepth) unit_00E2(c, 82u, depth + 1u); else { c.pc = 0x00489CA0u; return; } if (c.pc != 0x0040C938u) [[unlikely]] return; }
L_0040C938:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 28632u);
    set32(c.r[4], 0u - 1u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] + 772u);
    set32(c.r[3], 0u + 16u);
    c.budget -= 6;
L_0040C950:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C950u | kUnwind; return; } goto L_0040C950; } }
    st32((c.r[16].w[0] + 52u), 0u);
    set32(c.r[6], 0u + 16u);
    st32((c.r[16].w[0] + 56u), 0u);
    set32(c.r[3], c.r[16].w[0] + 200u);
    st32((c.r[16].w[0] + 60u), 0u);
    set32(c.r[8], c.r[16].w[0] + 132u);
    st32((c.r[16].w[0] + 48u), 0u);
    set32(c.r[9], c.r[16].w[0] + 716u);
    set32(c.r[12], c.r[16].w[0] + 863u);
    set32(c.r[2], c.r[16].w[0] + 128u);
    c.budget -= 10;
L_0040C990:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[6].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C990u | kUnwind; return; } goto L_0040C990; } }
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 16u);
    set32(c.r[10], 0u + 8192u);
    c.r[5].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 6;
L_0040C9C0:
    c.r[2].d[0] = c.r[6].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C9D8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040C9D8:
    c.r[2].d[0] = c.r[6].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040C9F0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040C9F0:
    c.r[2].d[0] = c.r[6].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CA08; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CA08:
    c.r[2].d[0] = c.r[6].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CA20; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CA20:
    c.r[2].d[0] = c.r[6].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CA38; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CA38:
    c.r[2].d[0] = c.r[6].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CA50; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CA50:
    c.r[2].d[0] = c.r[6].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CA68; } }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CA68:
    c.r[2].d[0] = c.r[6].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CA80; } }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CA80:
    c.r[2].d[0] = c.r[6].sd[0] < 193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CA98; } }
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CA98:
    c.r[2].d[0] = c.r[6].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CAB0; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CAB0:
    c.r[2].d[0] = c.r[6].sd[0] < 321ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CAC8; } }
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CAC8:
    c.r[2].d[0] = c.r[6].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CAE0; } }
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CAE0:
    c.r[2].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CAF8; } }
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CAF8:
    c.r[2].d[0] = c.r[6].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CB10; } }
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CB2C; } }
L_0040CB10:
    c.r[2].d[0] = c.r[6].sd[0] < 4097ll ? 1ull : 0ull;
    set32(c.r[4], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CB2C; } }
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[11].d[0];
    c.budget -= 3;
L_0040CB2C:
    set32(c.r[3], c.r[7].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040C9C0u | kUnwind; return; } goto L_0040C9C0; } }
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u + 16u);
    set32(c.r[10], 0u + 8192u);
    c.budget -= 4;
L_0040CB60:
    set32(c.r[3], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] << 10);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CB84; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CB84:
    c.r[2].d[0] = c.r[5].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CB9C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CB9C:
    c.r[2].d[0] = c.r[5].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CBB4; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CBB4:
    c.r[2].d[0] = c.r[5].sd[0] < 49ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CBCC; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CBCC:
    c.r[2].d[0] = c.r[5].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CBE4; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CBE4:
    c.r[2].d[0] = c.r[5].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CBFC; } }
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CBFC:
    c.r[2].d[0] = c.r[5].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC14; } }
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CC14:
    c.r[2].d[0] = c.r[5].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC2C; } }
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CC2C:
    c.r[2].d[0] = c.r[5].sd[0] < 193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC44; } }
    set32(c.r[4], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CC44:
    c.r[2].d[0] = c.r[5].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC5C; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CC5C:
    c.r[2].d[0] = c.r[5].sd[0] < 321ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC74; } }
    set32(c.r[4], 0u + 11u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CC74:
    c.r[2].d[0] = c.r[5].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CC8C; } }
    set32(c.r[4], 0u + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CC8C:
    c.r[2].d[0] = c.r[5].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CCA4; } }
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CCA4:
    c.r[2].d[0] = c.r[5].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CCBC; } }
    set32(c.r[4], 0u + 14u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CCD8; } }
L_0040CCBC:
    c.r[2].d[0] = c.r[5].sd[0] < 4097ll ? 1ull : 0ull;
    set32(c.r[4], 0u + 15u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040CCD8; } }
    set32(c.r[4], 0u - 1u);
    c.r[2].d[0] = c.r[10].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[11].d[0];
    c.budget -= 3;
L_0040CCD8:
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CB60u | kUnwind; return; } goto L_0040CB60; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[2], 0u + 8192u);
    set32(c.r[3], 0u + 64u);
    c.r[5].d[0] = c.r[5].d[0] | 65520ull;
    st32((c.r[16].w[0] + 748u), 0u);
    c.r[5].d[0] = c.r[12].d[0] & c.r[5].d[0];
    st32((c.r[16].w[0] + 752u), 0u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 756u), 0u);
    set32(c.r[6], 0u + 16384u);
    st32((c.r[16].w[0] + 760u), 0u);
    st32((c.r[16].w[0] + 764u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 768u), c.r[3].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD3Cu);  if (depth < kMaxDepth) unit_0042(c, 97u, depth + 1u); else { c.pc = 0x0020A5A8u; return; } if (c.pc != 0x0040CD3Cu) [[unlikely]] return; }
L_0040CD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CD4C; } }
L_0040CD44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CD4Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040CD4Cu) [[unlikely]] return; }
L_0040CD4C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CD6C; } }
L_0040CD58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[2], c.r[2].w[0] + 25920u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CD44u | kUnwind; return; } goto L_0040CD44; } }
L_0040CD6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040CD80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].d[0] = c.r[5].sd[0] < 8193ll ? 1ull : 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D034; } }
    c.r[6].d[0] = c.r[5].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040CDD4; } }
    set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);
    c.r[19].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CDE8; } }
L_0040CDD4:
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[19], ld32((c.r[2].w[0] + 716u)));
    c.budget -= 5;
L_0040CDE8:
    set32(c.r[2], c.r[16].w[0] + 772u);
    set32(c.r[18], c.r[19].w[0] << 2);
    set32(c.r[20], c.r[2].w[0] + c.r[18].w[0]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[16].w[0] + 64u);
    set32(c.r[21], c.r[2].w[0] + c.r[18].w[0]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040CE34; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[21].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D04C; } }
L_0040CE34:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040CF4C; } }
    set32(c.r[4], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 132u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[19].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CEA4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 8256u);
    set32(c.r[2], ld32((c.r[3].w[0] - 8936u)));
    set32(c.r[5], 0u + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CE78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040CE78u) [[unlikely]] return; }
L_0040CE78:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[5], c.r[2].w[0] + 64u);
    set32(c.r[4], c.r[2].w[0] + 8256u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 748u)));
    st32((c.r[16].w[0] + 56u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 748u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 52u), c.r[5].w[0]);
    c.budget -= 11;
L_0040CEA4:
    set32(c.r[8], ld32((c.r[16].w[0] + 60u)));
    c.r[10].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    st32((c.r[8].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[20].w[0])));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040CF38; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x03420000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 21044ull;
    c.budget -= 5;
L_0040CEE0:
    set32(c.r[4], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[2], c.r[4].w[0] + c.r[19].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CF38; } }
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[17], c.r[17].w[0] + c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[16].w[0] + 60u), c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CEE0u | kUnwind; return; } goto L_0040CEE0; } }
L_0040CF38:
    set32(c.r[2], c.r[22].w[0] + c.r[10].w[0]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[9].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D028; } }
L_0040CF4C:
    set32(c.r[2], c.r[16].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[17], ld32((c.r[2].w[0] + 132u)));
    set32(c.r[4], 0u + 8256u);
    set32(c.r[2], ld32((c.r[3].w[0] - 8936u)));
    set32(c.r[5], 0u + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040CF6Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040CF6Cu) [[unlikely]] return; }
L_0040CF6C:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040CF94; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040CF9C; } }
L_0040CF94:
    st32((c.r[6].w[0]), 0u);
    st32((c.r[16].w[0] + 48u), c.r[6].w[0]);
    c.budget -= 2;
L_0040CF9C:
    set32(c.r[2], ld32((c.r[16].w[0] + 748u)));
    set32(c.r[3], c.r[19].w[0] << 2);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[10], c.r[6].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[22].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 748u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[10].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 8192ll ? 1ull : 0ull;
    set32(c.r[11], ld32((c.r[3].w[0])));
    st32((c.r[10].w[0] + 4u), 0u);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040D01C; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x03420000u);
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[8], c.r[23].w[0] + c.r[5].w[0]);
    c.r[9].d[0] = c.r[9].d[0] | 21044ull;
    c.budget -= 5;
L_0040CFE8:
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[7], c.r[7].w[0] + c.r[17].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 8192ll ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[3].w[0]);
    st32((c.r[8].w[0]), c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[17].w[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040CFE8u | kUnwind; return; } goto L_0040CFE8; } }
L_0040D01C:
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[10].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[11].w[0]);
    c.budget -= 3;
L_0040D028:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D04C; } }
L_0040D034:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 8936u)));
    set32(c.r[5], 0u + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D04Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D04Cu) [[unlikely]] return; }
L_0040D04C:
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
L_0040D080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[4], ld32((c.r[2].w[0] - 17104u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[2].w[0] - 17104u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 13;
L_0040D0B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D1A4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    c.budget -= 3;
L_0040D0C8:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D18C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D0E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D0E8u) [[unlikely]] return; }
L_0040D0E8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D118; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[18], c.r[2].w[0] + 4u);
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D198; } }
L_0040D118:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0040D148; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << 1);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D148u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0040D148u) [[unlikely]] return; }
L_0040D148:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D198; } }
L_0040D18C:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[18], c.r[4].w[0] + 4u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 3;
L_0040D198:
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D0C8u | kUnwind; return; } goto L_0040D0C8; } }
L_0040D1A4:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040D258; } }
L_0040D1B0:
    set32(c.r[16], c.r[3].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0040D238; } }
    c.budget -= 1;
L_0040D1C0:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D1E0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D1E0u) [[unlikely]] return; }
L_0040D1E0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040D22C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[18], c.r[5].w[0] + 4u);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.budget -= 16;
L_0040D22C:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D1C0u | kUnwind; return; } goto L_0040D1C0; } }
L_0040D238:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D1B0u | kUnwind; return; } goto L_0040D1B0; } }
L_0040D248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D258; } }
L_0040D250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D258u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040D258u) [[unlikely]] return; }
L_0040D258:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0040D2E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D290u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D290u) [[unlikely]] return; }
L_0040D290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D2E0; } }
L_0040D298:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D250u | kUnwind; return; } goto L_0040D250; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D2D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D2D0u) [[unlikely]] return; }
L_0040D2D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D250u | kUnwind; return; } goto L_0040D250; } }
L_0040D2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D2E0u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0040D2E0u) [[unlikely]] return; }
L_0040D2E0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040D300:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), 0u);
    c.budget -= 9;
L_0040D324:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 16u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D338u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0040D338u) [[unlikely]] return; }
L_0040D338:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17104u)));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040D3C4; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[16].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    c.budget -= 5;
L_0040D360:
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[17].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0040D390; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[3].w[0] << 1);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[2].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D390u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0040D390u) [[unlikely]] return; }
L_0040D390:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D360u | kUnwind; return; } goto L_0040D360; } }
L_0040D3C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[16], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0040D460; } }
    c.budget -= 1;
L_0040D3D8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[3], c.r[16].w[0] << 2);
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[3].w[0])));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D430; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040D430; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D430u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D430u) [[unlikely]] return; }
L_0040D430:
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[4].w[0]), 0u);
    c.budget -= 8;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D3D8u | kUnwind; return; } goto L_0040D3D8; } }
L_0040D450:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D460; } }
L_0040D458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D460u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040D460u) [[unlikely]] return; }
L_0040D460:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_0040D4E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D498u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D498u) [[unlikely]] return; }
L_0040D498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D4E8; } }
L_0040D4A0:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D458u | kUnwind; return; } goto L_0040D458; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D4D8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D4D8u) [[unlikely]] return; }
L_0040D4D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D458u | kUnwind; return; } goto L_0040D458; } }
L_0040D4E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D4E8u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0040D4E8u) [[unlikely]] return; }
L_0040D4E8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040D508:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    set32(c.r[2], ld32((c.r[3].w[0] - 17140u)));
    c.r[23].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040D970; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], c.r[7].w[0] + 13968u);
    set32(c.r[8], c.r[8].w[0] + 13936u);
    set32(c.r[5], 0u + 17248u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 104u);
    set32(c.r[18], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D574u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x0040D574u) [[unlikely]] return; }
L_0040D574:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0040D578:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D584u);  if (depth < kMaxDepth) unit_00C3(c, 24u, depth + 1u); else { c.pc = 0x0040C908u; return; } if (c.pc != 0x0040D584u) [[unlikely]] return; }
L_0040D584:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 8208u)));
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040D5D0; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040D5D0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D5D0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D5D0u) [[unlikely]] return; }
L_0040D5D0:
    st32((c.r[21].w[0] + 8208u), c.r[16].w[0]);
    c.budget -= 1;
L_0040D5D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D5E4; } }
L_0040D5DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D5E4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040D5E4u) [[unlikely]] return; }
L_0040D5E4:
    set32(c.r[7], ld32((c.r[21].w[0] + 8208u)));
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[16], 0u + 8u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[20], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D610u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D610u) [[unlikely]] return; }
L_0040D610:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 3;
L_0040D61C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D628u);  if (depth < kMaxDepth) unit_00E6(c, 37u, depth + 1u); else { c.pc = 0x00498590u; return; } if (c.pc != 0x0040D628u) [[unlikely]] return; }
L_0040D628:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], ld32((c.r[3].w[0] + 8252u)));
    set32(c.r[2], c.r[2].w[0] - 28712u);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[20].d[0] = 0ull + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040D680; } }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D680; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D680u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D680u) [[unlikely]] return; }
L_0040D680:
    st32((c.r[19].w[0] + 8252u), c.r[18].w[0]);
    c.budget -= 1;
L_0040D684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D694; } }
L_0040D68C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D694u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040D694u) [[unlikely]] return; }
L_0040D694:
    set32(c.r[7], ld32((c.r[21].w[0] + 8208u)));
    set32(c.r[5], 0u + 32u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[16], 0u + 32u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[22], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D6C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D6C0u) [[unlikely]] return; }
L_0040D6C0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[17].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 3;
L_0040D6CC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D6D8u);  if (depth < kMaxDepth) unit_00E5(c, 263u, depth + 1u); else { c.pc = 0x00497FF0u; return; } if (c.pc != 0x0040D6D8u) [[unlikely]] return; }
L_0040D6D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[6], ld32((c.r[19].w[0] + 8252u)));
    set32(c.r[2], c.r[2].w[0] - 28672u);
    set32(c.r[18], c.r[17].w[0] + 8u);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D708u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D708u) [[unlikely]] return; }
L_0040D708:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D718u);  if (depth < kMaxDepth) unit_00C3(c, 178u, depth + 1u); else { c.pc = 0x0040E390u; return; } if (c.pc != 0x0040D718u) [[unlikely]] return; }
L_0040D718:
    set32(c.r[6], ld32((c.r[19].w[0] + 8252u)));
    set32(c.r[16], c.r[17].w[0] + 20u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D73Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D73Cu) [[unlikely]] return; }
L_0040D73C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D74Cu);  if (depth < kMaxDepth) unit_00C3(c, 178u, depth + 1u); else { c.pc = 0x0040E390u; return; } if (c.pc != 0x0040D74Cu) [[unlikely]] return; }
L_0040D74C:
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D78C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040D78C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D78Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D78Cu) [[unlikely]] return; }
L_0040D78C:
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D83C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040D83C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7CCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D7CCu) [[unlikely]] return; }
L_0040D7CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D83C; } }
L_0040D7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7DCu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040D7DCu) [[unlikely]] return; }
L_0040D7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7E4u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040D7E4u) [[unlikely]] return; }
L_0040D7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7ECu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040D7ECu) [[unlikely]] return; }
L_0040D7EC:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D7FCu);  if (depth < kMaxDepth) unit_00C3(c, 179u, depth + 1u); else { c.pc = 0x0040E3B8u; return; } if (c.pc != 0x0040D7FCu) [[unlikely]] return; }
L_0040D7FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D7D4u | kUnwind; return; } goto L_0040D7D4; } }
L_0040D804:
    set32(c.r[4], c.r[17].w[0] + 8u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D814u);  if (depth < kMaxDepth) unit_00C3(c, 179u, depth + 1u); else { c.pc = 0x0040E3B8u; return; } if (c.pc != 0x0040D814u) [[unlikely]] return; }
L_0040D814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D7DCu | kUnwind; return; } goto L_0040D7DC; } }
L_0040D81C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D82Cu);  if (depth < kMaxDepth) unit_00E5(c, 261u, depth + 1u); else { c.pc = 0x00497F90u; return; } if (c.pc != 0x0040D82Cu) [[unlikely]] return; }
L_0040D82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D7E4u | kUnwind; return; } goto L_0040D7E4; } }
L_0040D834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D83Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0040D83Cu) [[unlikely]] return; }
L_0040D83C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 8232u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040D888; } }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D888; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D888u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D888u) [[unlikely]] return; }
L_0040D888:
    st32((c.r[16].w[0] + 8232u), c.r[20].w[0]);
    c.budget -= 1;
L_0040D88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D89C; } }
L_0040D894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D89Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040D89Cu) [[unlikely]] return; }
L_0040D89C:
    set32(c.r[7], ld32((c.r[21].w[0] + 8208u)));
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[16], 0u + 20u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[18], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D8C8u) [[unlikely]] return; }
L_0040D8C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0040D8D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D8DCu);  if (depth < kMaxDepth) unit_00E6(c, 45u, depth + 1u); else { c.pc = 0x00498668u; return; } if (c.pc != 0x0040D8DCu) [[unlikely]] return; }
L_0040D8DC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[3].w[0] + 8228u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040D92C; } }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040D92C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D92Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D92Cu) [[unlikely]] return; }
L_0040D92C:
    st32((c.r[19].w[0] + 8228u), c.r[16].w[0]);
    c.budget -= 1;
L_0040D930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040D940; } }
L_0040D938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D940u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040D940u) [[unlikely]] return; }
L_0040D940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D948u);  if (depth < kMaxDepth) unit_00C3(c, 40u, depth + 1u); else { c.pc = 0x0040D080u; return; } if (c.pc != 0x0040D948u) [[unlikely]] return; }
L_0040D948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8248u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D968u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D968u) [[unlikely]] return; }
L_0040D968:
    set32(c.r[2], 0u + 1u);
    st32((c.r[23].w[0] - 17140u), c.r[2].w[0]);
    c.budget -= 2;
L_0040D970:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DA70; } }
L_0040D97C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D5DCu | kUnwind; return; } goto L_0040D5DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 13968u);
    set32(c.r[7], c.r[7].w[0] + 13944u);
    set32(c.r[8], 0u + 104u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9ACu);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0040D9ACu) [[unlikely]] return; }
L_0040D9AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D5DCu | kUnwind; return; } goto L_0040D5DC; } }
L_0040D9B4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D68Cu | kUnwind; return; } goto L_0040D68C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 17u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040D9E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040D9E8u) [[unlikely]] return; }
L_0040D9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D68Cu | kUnwind; return; } goto L_0040D68C; } }
L_0040D9F0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D894u | kUnwind; return; } goto L_0040D894; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 17u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DA24u) [[unlikely]] return; }
L_0040DA24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D894u | kUnwind; return; } goto L_0040D894; } }
L_0040DA2C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D938u | kUnwind; return; } goto L_0040D938; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 17u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DA60u) [[unlikely]] return; }
L_0040DA60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040D938u | kUnwind; return; } goto L_0040D938; } }
L_0040DA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DA70u);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0040DA70u) [[unlikely]] return; }
L_0040DA70:
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
L_0040DAA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17140u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_0040DC00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DAD0u);  if (depth < kMaxDepth) unit_00C3(c, 56u, depth + 1u); else { c.pc = 0x0040D300u; return; } if (c.pc != 0x0040DAD0u) [[unlikely]] return; }
L_0040DAD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8228u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040DB18; } }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040DB18; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB18u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DB18u) [[unlikely]] return; }
L_0040DB18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0] + 8228u), 0u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8232u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040DB64; } }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040DB64; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DB64u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DB64u) [[unlikely]] return; }
L_0040DB64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0] + 8232u), 0u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8252u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040DBB0; } }
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040DBB0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBB0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DBB0u) [[unlikely]] return; }
L_0040DBB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0] + 8252u), 0u);
    set32(c.r[6], ld32((c.r[2].w[0] + 8208u)));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040DBF8; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040DBF8; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 72u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 76u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DBF8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DBF8u) [[unlikely]] return; }
L_0040DBF8:
    st32((c.r[16].w[0] + 8208u), 0u);
    st32((c.r[17].w[0] - 17140u), 0u);
    c.budget -= 2;
L_0040DC00:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = 0ull + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DC20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 8u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 17u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 8u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC5Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DC5Cu) [[unlikely]] return; }
L_0040DC5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0040DC64:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC70u);  if (depth < kMaxDepth) unit_00E6(c, 73u, depth + 1u); else { c.pc = 0x004989B0u; return; } if (c.pc != 0x0040DC70u) [[unlikely]] return; }
L_0040DC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040DCBC; } }
L_0040DC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DC80u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040DC80u) [[unlikely]] return; }
L_0040DC80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 17u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DCACu) [[unlikely]] return; }
L_0040DCAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DC78u | kUnwind; return; } goto L_0040DC78; } }
L_0040DCB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DCBCu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0040DCBCu) [[unlikely]] return; }
L_0040DCBC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DCD8:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0040DD1C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040DD1C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[7], ld32((c.r[6].w[0] - 17104u)));
    set32(c.r[2], c.r[5].w[0] - 17152u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 9184u);
    st32((c.r[6].w[0] - 17104u), c.r[2].w[0]);
    st32((c.r[5].w[0] - 17152u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8248u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 12;
L_0040DD1C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DD28:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 28632u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040DD84; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.budget -= 1;
L_0040DD60:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[17].w[0] - 8932u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DD78u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DD78u) [[unlikely]] return; }
L_0040DD78:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040DD60u | kUnwind; return; } goto L_0040DD60; } }
L_0040DD84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] + 25920u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040DDC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 20748u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 13968u);
    set32(c.r[7], c.r[7].w[0] + 13944u);
    set32(c.r[8], 0u + 104u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDC4u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x0040DDC4u) [[unlikely]] return; }
L_0040DDC4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DDE0:
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 14032u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DDFCu);  if (depth < kMaxDepth) unit_00C3(c, 174u, depth + 1u); else { c.pc = 0x0040E300u; return; } if (c.pc != 0x0040DDFCu) [[unlikely]] return; }
L_0040DDFC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DE10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DE18:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 44u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DE4Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DE4Cu) [[unlikely]] return; }
L_0040DE4C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02340000u);
    st32((c.r[4].w[0] + 4u), c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 22102ull;
    st32((c.r[4].w[0] + 8u), c.r[17].w[0]);
    set32(c.r[2], c.r[4].w[0] + 16u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DE80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040DED0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDEAD0000u);
    set32(c.r[4], c.r[3].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] | 48879ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0] - 16u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[7], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DED0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DED0u) [[unlikely]] return; }
L_0040DED0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DEE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[16].w[0] + c.r[6].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 32u)));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DF20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DF20u) [[unlikely]] return; }
L_0040DF20:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x02340000u);
    set32(c.r[2], c.r[16].w[0] + 15u);
    c.r[3].d[0] = c.r[3].d[0] | 22102ull;
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[16], 0u - c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] - 16u), c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] - 16u);
    st32((c.r[4].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[5], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[18].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st32((c.r[4].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DF70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_0040DFC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xDEAD0000u);
    set32(c.r[3], c.r[8].w[0] - 16u);
    c.r[2].d[0] = c.r[2].d[0] | 48879ull;
    st32((c.r[8].w[0] - 16u), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[9].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[3].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 48u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], c.r[8].w[0] - c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0] + 8u)));
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040DFC4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040DFC4u) [[unlikely]] return; }
L_0040DFC4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040DFD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0040E080; } }
    c.r[2].d[0] = c.r[6].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E06C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E018; } }
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 200u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E02C; } }
L_0040E018:
    set32(c.r[2], c.r[6].w[0] - 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 10));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 716u)));
    c.budget -= 5;
L_0040E02C:
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + 772u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x03420000u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[5].d[0] | 21044ull;
    set32(c.r[3], c.r[3].w[0] + 64u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    st32((c.r[7].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[7].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[7].w[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E080; } }
L_0040E06C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] - 8932u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E080u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E080u) [[unlikely]] return; }
L_0040E080:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E090:
    set32(c.r[3], ld32((c.r[4].w[0] + 756u)));
    c.lo.d[0] = 0ull;
    set32(c.r[6], c.r[4].w[0] + 776u);
    set32(c.r[7], 0u + 15u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 760u)));
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 8;
L_0040E0B0:
    set32(c.r[3], ld32((c.r[6].w[0] - 640u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[6], c.r[6].w[0] + 4u);
    mmi::madd(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[7].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E0B0u | kUnwind; return; } goto L_0040E0B0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 768u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 764u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 748u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E0F8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 17140u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E108:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E120u);  if (depth < kMaxDepth) unit_00C3(c, 144u, depth + 1u); else { c.pc = 0x0040DCD8u; return; } if (c.pc != 0x0040E120u) [[unlikely]] return; }
L_0040E120:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[6], 0u + 17u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[16], 0u + 20u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E168u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E168u) [[unlikely]] return; }
L_0040E168:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[4], c.r[4].w[0] - 23680u);
    set32(c.r[5], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[7], 0u + 16384u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 16u), 0u);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E1B0:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0040E1F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040E1F4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[7], ld32((c.r[6].w[0] - 17104u)));
    set32(c.r[2], c.r[5].w[0] - 17136u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 7888u);
    st32((c.r[6].w[0] - 17104u), c.r[2].w[0]);
    st32((c.r[5].w[0] - 17136u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8236u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 12;
L_0040E1F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E218u);  if (depth < kMaxDepth) unit_00C3(c, 169u, depth + 1u); else { c.pc = 0x0040E1B0u; return; } if (c.pc != 0x0040E218u) [[unlikely]] return; }
L_0040E218:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E228:
    set32(c.r[5], c.r[5].w[0] - c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 32800ull;
    set32(c.r[5], c.r[5].w[0] >> 4);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 57360ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] | 57376ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st32((c.r[2].w[0]), c.r[5].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 32784ull;
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 21;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E288; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_0040E288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 256u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 8176u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040E2E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 57360ull;
    c.budget -= 2;
L_0040E2C0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040E2C0u | kUnwind; return; } goto L_0040E2C0; } }
L_0040E2E0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040E2F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0040E2F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E300:
    set32(c.r[29], c.r[29].w[0] - 1184u);
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 1136u), c.r[6].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 1144u), c.r[7].d[0]);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    set32(c.r[7], c.r[29].w[0] + 1136u);
    st64((c.r[29].w[0] + 1152u), c.r[8].d[0]);
    set32(c.r[5], 0u + 1024u);
    st64((c.r[29].w[0] + 1160u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 1168u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 1176u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 1120u), c.f[12]);
    st32((c.r[29].w[0] + 1124u), c.f[14]);
    st32((c.r[29].w[0] + 1128u), c.f[16]);
    st32((c.r[29].w[0] + 1132u), c.f[18]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E354u);  if (depth < kMaxDepth) unit_0042(c, 164u, depth + 1u); else { c.pc = 0x0020B2F0u; return; } if (c.pc != 0x0040E354u) [[unlikely]] return; }
L_0040E354:
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E364u);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E364u) [[unlikely]] return; }
L_0040E364:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E378u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E378u) [[unlikely]] return; }
L_0040E378:
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1184u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st32((c.r[4].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 23528u);
    st32((c.r[4].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld16((c.r[5].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E3B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 23528u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040E41C; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040E41C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E41Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E41Cu) [[unlikely]] return; }
L_0040E41C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].d[0] = c.r[17].d[0] & 1ull;
    set32(c.r[2], c.r[2].w[0] - 6904u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0040E460; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 19u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E460u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040E460u) [[unlikely]] return; }
L_0040E460:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E478:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E48Cu);  if (depth < kMaxDepth) unit_00C3(c, 271u, depth + 1u); else { c.pc = 0x0040F238u; return; } if (c.pc != 0x0040E48Cu) [[unlikely]] return; }
L_0040E48C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E4A0:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 14424u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4D0u);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x0020A5B8u; return; } if (c.pc != 0x0040E4D0u) [[unlikely]] return; }
L_0040E4D0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4E0u);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E4E0u) [[unlikely]] return; }
L_0040E4E0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E4F4u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E4F4u) [[unlikely]] return; }
L_0040E4F4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1072u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E510:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E538u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E538u) [[unlikely]] return; }
L_0040E538:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E550:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0040E5A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E584u);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E584u) [[unlikely]] return; }
L_0040E584:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E598u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E598u) [[unlikely]] return; }
L_0040E598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040E5B8; } }
L_0040E5A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14416u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E5B8u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E5B8u) [[unlikely]] return; }
L_0040E5B8:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E5D8:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    set32(c.r[5], c.r[5].w[0] << 16);
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    set32(c.r[6], c.r[6].w[0] + 14432u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E60Cu);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x0020A5B8u; return; } if (c.pc != 0x0040E60Cu) [[unlikely]] return; }
L_0040E60C:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E61Cu);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E61Cu) [[unlikely]] return; }
L_0040E61C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E630u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E630u) [[unlikely]] return; }
L_0040E630:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1072u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E650:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    c.r[7].d[0] = c.r[5].d[0] & 65535ull;
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 14440u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E680u);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x0020A5B8u; return; } if (c.pc != 0x0040E680u) [[unlikely]] return; }
L_0040E680:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E690u);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E690u) [[unlikely]] return; }
L_0040E690:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E6A4u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E6A4u) [[unlikely]] return; }
L_0040E6A4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1072u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E6C0:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 14432u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E6F0u);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x0020A5B8u; return; } if (c.pc != 0x0040E6F0u) [[unlikely]] return; }
L_0040E6F0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E700u);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E700u) [[unlikely]] return; }
L_0040E700:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E714u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E714u) [[unlikely]] return; }
L_0040E714:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1072u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E730:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 14440u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E760u);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x0020A5B8u; return; } if (c.pc != 0x0040E760u) [[unlikely]] return; }
L_0040E760:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E770u);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E770u) [[unlikely]] return; }
L_0040E770:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E784u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E784u) [[unlikely]] return; }
L_0040E784:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1072u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E7A0:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 14448u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7C4u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x0040E7C4u) [[unlikely]] return; }
L_0040E7C4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1024u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7DCu);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x0020A5B8u; return; } if (c.pc != 0x0040E7DCu) [[unlikely]] return; }
L_0040E7DC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E7ECu);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E7ECu) [[unlikely]] return; }
L_0040E7EC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E800u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E800u) [[unlikely]] return; }
L_0040E800:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1072u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E820:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 14456u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E850u);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x0020A5B8u; return; } if (c.pc != 0x0040E850u) [[unlikely]] return; }
L_0040E850:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E860u);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E860u) [[unlikely]] return; }
L_0040E860:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E874u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E874u) [[unlikely]] return; }
L_0040E874:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1072u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E890:
    set32(c.r[29], c.r[29].w[0] - 1072u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 14464u);
    set32(c.r[5], 0u + 1024u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8C0u);  if (depth < kMaxDepth) unit_0042(c, 98u, depth + 1u); else { c.pc = 0x0020A5B8u; return; } if (c.pc != 0x0040E8C0u) [[unlikely]] return; }
L_0040E8C0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8D0u);  if (depth < kMaxDepth) unit_0042(c, 174u, depth + 1u); else { c.pc = 0x0020B398u; return; } if (c.pc != 0x0040E8D0u) [[unlikely]] return; }
L_0040E8D0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E8E4u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E8E4u) [[unlikely]] return; }
L_0040E8E4:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1072u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[5].w[0] - 12u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E924u);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E924u) [[unlikely]] return; }
L_0040E924:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E954u);  if (depth < kMaxDepth) unit_00C3(c, 282u, depth + 1u); else { c.pc = 0x0040F410u; return; } if (c.pc != 0x0040E954u) [[unlikely]] return; }
L_0040E954:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E968:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E97Cu);  if (depth < kMaxDepth) unit_00C3(c, 286u, depth + 1u); else { c.pc = 0x0040F4D8u; return; } if (c.pc != 0x0040E97Cu) [[unlikely]] return; }
L_0040E97C:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E998:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040E9ACu);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040E9ACu) [[unlikely]] return; }
L_0040E9AC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040E9C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = ld16((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = ld16((c.r[6].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 16);
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0040EA24; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0040EA24; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[5], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 12u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA24u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EA24u) [[unlikely]] return; }
L_0040EA24:
    st32((c.r[17].w[0] + 8u), c.r[16].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040EA40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 10u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA6Cu);  if (depth < kMaxDepth) unit_00C3(c, 246u, depth + 1u); else { c.pc = 0x0040EBB0u; return; } if (c.pc != 0x0040EA6Cu) [[unlikely]] return; }
L_0040EA6C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EA78u);  if (depth < kMaxDepth) unit_00C3(c, 282u, depth + 1u); else { c.pc = 0x0040F410u; return; } if (c.pc != 0x0040EA78u) [[unlikely]] return; }
L_0040EA78:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040EA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EAACu);  if (depth < kMaxDepth) unit_00C3(c, 282u, depth + 1u); else { c.pc = 0x0040F410u; return; } if (c.pc != 0x0040EAACu) [[unlikely]] return; }
L_0040EAAC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040EAC8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
L_0040EAD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], c.r[2].w[0] - 23528u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], ld32((c.r[3].w[0] + 8252u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EB08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EB08u) [[unlikely]] return; }
L_0040EB08:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0040EB0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040EB1C; } }
L_0040EB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EB1Cu);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040EB1Cu) [[unlikely]] return; }
L_0040EB1C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040EB3C; } }
L_0040EB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 6904u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EB14u | kUnwind; return; } goto L_0040EB14; } }
L_0040EB3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040EB50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 22600u);
    st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[8], c.r[4].w[0] + 28u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[3], 0u - 1u);
    st32((c.r[7].w[0] + 12u), 0u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[7].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 28u), 0u);
    st32((c.r[8].w[0] + 12u), 0u);
    st32((c.r[8].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 8u), 0u);
    st32((c.r[4].w[0] + 44u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 48u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040EBB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EBFC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040ED70; } }
L_0040EBFC:
    set32(c.r[3], c.r[18].w[0] + 28u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040ED34; } }
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[21].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040ECFC; } }
    c.r[19].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_0040EC30:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], c.r[23].w[0] + c.r[20].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 8u)));
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EC58u);  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x0040EC58u) [[unlikely]] return; }
L_0040EC58:
    set32(c.r[20], c.r[20].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { goto L_0040ECB4; } }
    c.budget -= 1;
L_0040EC78:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[6], c.r[16].w[0] - c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EC9Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EC9Cu) [[unlikely]] return; }
L_0040EC9C:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040ECCC; } }
    c.r[2].d[0] = c.r[17].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EC78u | kUnwind; return; } goto L_0040EC78; } }
L_0040ECB4:
    st32((c.r[18].w[0] + 32u), 0u);
    c.budget -= 1;
L_0040ECB8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[16].d[0];  if (t) { goto L_0040ECE0; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040ED70; } }
L_0040ECCC:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040ECB8u | kUnwind; return; } goto L_0040ECB8; } }
L_0040ECE0:
    set32(c.r[2], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[4], c.r[21].w[0] - c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EC30u | kUnwind; return; } goto L_0040EC30; } }
L_0040ECFC:
    set32(c.r[2], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[16], c.r[21].w[0] - c.r[20].w[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], c.r[23].w[0] + c.r[20].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED1Cu);  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x0040ED1Cu) [[unlikely]] return; }
L_0040ED1C:
    set32(c.r[3], ld32((c.r[18].w[0] + 32u)));
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[18].w[0] + 32u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040ED70; } }
L_0040ED34:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[18].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040ED54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040ED54u) [[unlikely]] return; }
L_0040ED54:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[21].d[0];  if (t) { goto L_0040ED6C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0040ED6C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0040ED70:
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
L_0040EDA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 10;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0040EDD8; } }
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040EE94; } }
L_0040EDD8:
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[6], c.r[3].w[0] - c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EE0C; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040EE94; } }
L_0040EE0C:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_0040EE94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    mmi::div(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x0040EE24u);  goto L_0040EE28; }
L_0040EE28:
    c.r[19].d[0] = c.hi.d[0];
    c.budget -= 3;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_0040EE4C; } }
    set32(c.r[17], c.r[2].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040EE50; } }
L_0040EE40:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040EF0C; } }
L_0040EE4C:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040EE50:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[4], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EE68u);  if (depth < kMaxDepth) unit_0042(c, 201u, depth + 1u); else { c.pc = 0x0020B658u; return; } if (c.pc != 0x0040EE68u) [[unlikely]] return; }
L_0040EE68:
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[4].d[0] = 0ull < c.r[19].d[0] ? 1ull : 0ull;
    st32((c.r[16].w[0] + 52u), c.r[17].w[0]);
    mmi::div(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0040EE7Cu);  goto L_0040EE80; }
L_0040EE80:
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_0040EE94:
    set32(c.r[2], c.r[16].w[0] + 12u);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 12u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    set32(c.r[17], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[17].sd[0] <= 0;  if (t) { goto L_0040EF08; } }
    c.budget -= 1;
L_0040EEB8:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[5], c.r[5].w[0] + c.r[18].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EEE4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040EEE4u) [[unlikely]] return; }
L_0040EEE4:
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EE40u | kUnwind; return; } goto L_0040EE40; } }
    c.r[2].d[0] = c.r[18].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EEB8u | kUnwind; return; } goto L_0040EEB8; } }
L_0040EF08:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0040EF0C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040EF30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040EF78; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F0A0; } }
L_0040EF78:
    set32(c.r[3], c.r[17].w[0] + 12u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F064; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F014; } }
    c.r[21].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 2;
L_0040EFB0:
    set32(c.r[2], ld32((c.r[21].w[0] + 4u)));
    set32(c.r[4], c.r[22].w[0] + c.r[19].w[0]);
    set32(c.r[16], ld32((c.r[21].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[16], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EFD4u);  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x0040EFD4u) [[unlikely]] return; }
L_0040EFD4:
    set32(c.r[19], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040EFF0u);  if (depth < kMaxDepth) unit_00C3(c, 254u, depth + 1u); else { c.pc = 0x0040EDA0u; return; } if (c.pc != 0x0040EFF0u) [[unlikely]] return; }
L_0040EFF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F04C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    set32(c.r[4], c.r[20].w[0] - c.r[19].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040EFB0u | kUnwind; return; } goto L_0040EFB0; } }
L_0040F014:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], c.r[20].w[0] - c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[4], c.r[22].w[0] + c.r[19].w[0]);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F034u);  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x0040F034u) [[unlikely]] return; }
L_0040F034:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F0A0; } }
L_0040F04C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F0A0; } }
L_0040F064:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F084u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F084u) [[unlikely]] return; }
L_0040F084:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[20].d[0];  if (t) { goto L_0040F09C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 1ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
L_0040F09C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_0040F0A0:
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
L_0040F0D0:
    set32(c.r[29], c.r[29].w[0] - 1120u);
    st128((c.r[29].w[0] + 1088u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1072u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 1024u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F10C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F210; } }
L_0040F10C:
    set32(c.r[3], c.r[17].w[0] + 12u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F1B4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040F180; } }
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0040F140:
    set32(c.r[3], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F15Cu);  if (depth < kMaxDepth) unit_00C3(c, 254u, depth + 1u); else { c.pc = 0x0040EDA0u; return; } if (c.pc != 0x0040F15Cu) [[unlikely]] return; }
L_0040F15C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F19C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[4], c.r[19].w[0] - c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F140u | kUnwind; return; } goto L_0040F140; } }
L_0040F180:
    set32(c.r[3], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[4], c.r[19].w[0] - c.r[20].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F210; } }
L_0040F19C:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F210; } }
L_0040F1B4:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_0040F208; } }
    set32(c.r[18], 0u + 1024u);
    c.budget -= 2;
L_0040F1C8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[19].w[0] - c.r[16].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < 1025ll ? 1ull : 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 24u)));
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[18].d[0];
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F1F0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F1F0u) [[unlikely]] return; }
L_0040F1F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F19Cu | kUnwind; return; } goto L_0040F19C; } }
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F1C8u | kUnwind; return; } goto L_0040F1C8; } }
L_0040F208:
    c.r[2].d[0] = c.r[19].d[0] ^ c.r[16].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_0040F210:
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1088u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1072u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1024u));
    set32(c.r[29], c.r[29].w[0] + 1120u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F238:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F248:
    st32((c.r[4].w[0] + 8u), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F258:
    set32(c.r[2], c.r[4].w[0] + 12u);
    c.r[5].d[0] = c.r[5].d[0] ^ 1ull;
    set32(c.r[4], c.r[4].w[0] + 28u);
    c.r[3].d[0] = 0ull + 0ull;
    if (c.r[5].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    if (c.r[5].d[0] != 0) c.r[3].d[0] = c.r[7].d[0];
    st32((c.r[4].w[0] + 12u), c.r[7].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F288:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0040F304; } }
L_0040F2B0:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F2D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F2D4u) [[unlikely]] return; }
L_0040F2D4:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F2F8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F30C; } }
L_0040F2F8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F2B0u | kUnwind; return; } goto L_0040F2B0; } }
L_0040F304:
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_0040F30C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F328:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F340u);  if (depth < kMaxDepth) unit_00C3(c, 259u, depth + 1u); else { c.pc = 0x0040EF30u; return; } if (c.pc != 0x0040F340u) [[unlikely]] return; }
L_0040F340:
    c.r[3].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[4].d[0] = ld8((c.r[29].w[0]));
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F360:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0040F3D8; } }
L_0040F388:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F3ACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F3ACu) [[unlikely]] return; }
L_0040F3AC:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F3CC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F3DC; } }
L_0040F3CC:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F388u | kUnwind; return; } goto L_0040F388; } }
L_0040F3D8:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0040F3DC:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0040F488; } }
L_0040F438:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[18].w[0] - c.r[17].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F45Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F45Cu) [[unlikely]] return; }
L_0040F45C:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F47C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F48C; } }
L_0040F47C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F438u | kUnwind; return; } goto L_0040F438; } }
L_0040F488:
    st32((c.r[16].w[0] + 32u), 0u);
    c.budget -= 1;
L_0040F48C:
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 56u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), 0u);
    st32((c.r[16].w[0] + 52u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 36u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F4B8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F4B8u) [[unlikely]] return; }
L_0040F4B8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F4D8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[18], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 14;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_0040F560; } }
L_0040F510:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[18].w[0] - c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F534u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F534u) [[unlikely]] return; }
L_0040F534:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0040F554; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F564; } }
L_0040F554:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F510u | kUnwind; return; } goto L_0040F510; } }
L_0040F560:
    st32((c.r[17].w[0] + 32u), 0u);
    c.budget -= 1;
L_0040F564:
    set32(c.r[16], 0u - 1u);
    st32((c.r[17].w[0] + 16u), 0u);
    st32((c.r[17].w[0] + 20u), 0u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F598u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F598u) [[unlikely]] return; }
L_0040F598:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0040F5C4; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    st32((c.r[17].w[0] + 56u), c.r[16].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 52u), c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 7;
L_0040F5C4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F5F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F610u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F610u) [[unlikely]] return; }
L_0040F610:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 56u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 60u)));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F640u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F640u) [[unlikely]] return; }
L_0040F640:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F650:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[4].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F668:
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040F680; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F680:
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F690:
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 56u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F6A8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F6B8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F6C8:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F6D8:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] - 22072u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[5].w[0] + 1912u);
    st32((c.r[5].w[0] + 1912u), 0u);
    st32((c.r[3].w[0] + 8u), 0u);
    st32((c.r[3].w[0] + 12u), 0u);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F710:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] - 22072u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], c.r[16].w[0] + 1912u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[20].w[0] + 8208u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 1912u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 23;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F76Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F76Cu) [[unlikely]] return; }
L_0040F76C:
    st32((c.r[16].w[0] + 1912u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[17].w[0] + 8u), 0u);
    set32(c.r[2], c.r[2].w[0] - 6904u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[18].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0] + 4u), 0u);
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0040F7BC; } }
    set32(c.r[8], ld32((c.r[20].w[0] + 8208u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[7], 0u + 20u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F7BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F7BCu) [[unlikely]] return; }
L_0040F7BC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F7E0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[18], c.r[19].w[0] + 1924u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[20], c.r[18].w[0] - 12u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 1924u)));
    set32(c.r[5], ld32((c.r[18].w[0] - 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0040F87C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 8208u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F840u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F840u) [[unlikely]] return; }
L_0040F840:
    set32(c.r[7], ld32((c.r[16].w[0] + 8208u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 20u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F864u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F864u) [[unlikely]] return; }
L_0040F864:
    st32((c.r[18].w[0] - 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[19].w[0] + 1924u), c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] - 16u);
    st32((c.r[20].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[20].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 6;
L_0040F87C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F8A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 8u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[6], 0u + 20u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], 0u + 8u);
    set32(c.r[7], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 44u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8DCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F8DCu) [[unlikely]] return; }
L_0040F8DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 2;
L_0040F8E4:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F8F0u);  if (depth < kMaxDepth) unit_00C3(c, 301u, depth + 1u); else { c.pc = 0x0040F6D8u; return; } if (c.pc != 0x0040F8F0u) [[unlikely]] return; }
L_0040F8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040F93C; } }
L_0040F8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F900u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x0040F900u) [[unlikely]] return; }
L_0040F900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 20u);
    c.r[6].d[0] = ld16((c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F92Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040F92Cu) [[unlikely]] return; }
L_0040F92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040F8F8u | kUnwind; return; } goto L_0040F8F8; } }
L_0040F934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F93Cu);  if (depth < kMaxDepth) unit_0040(c, 260u, depth + 1u); else { c.pc = 0x00202E40u; return; } if (c.pc != 0x0040F93Cu) [[unlikely]] return; }
L_0040F93C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F958:
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0040F99C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040F99C; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00410000u);
    set32(c.r[7], ld32((c.r[6].w[0] - 17104u)));
    set32(c.r[2], c.r[5].w[0] - 17120u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[3], c.r[3].w[0] - 1888u);
    st32((c.r[6].w[0] - 17104u), c.r[2].w[0]);
    st32((c.r[5].w[0] - 17120u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 8256u);
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[7].w[0]);
    c.budget -= 12;
L_0040F99C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F9A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    set32(c.r[3], c.r[2].w[0] + 1916u);
    set32(c.r[4], ld32((c.r[3].w[0] - 4u)));
    st32((c.r[2].w[0] + 1916u), c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F9C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040F9D8u);  if (depth < kMaxDepth) unit_00C3(c, 317u, depth + 1u); else { c.pc = 0x0040F958u; return; } if (c.pc != 0x0040F9D8u) [[unlikely]] return; }
L_0040F9D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040F9E8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 13;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0040FA68; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_0040FA28:
    set32(c.r[7], ld32((c.r[19].w[0] + 8208u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[18], c.r[18].w[0] + 12u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[6], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FA58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040FA58u) [[unlikely]] return; }
L_0040FA58:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FA28u | kUnwind; return; } goto L_0040FA28; } }
L_0040FA68:
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0040FAB4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[3].d[0] & c.r[6].d[0];
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[7], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FAB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040FAB4u) [[unlikely]] return; }
L_0040FAB4:
    c.r[2].d[0] = c.r[20].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FACC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FACCu);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x0040FACCu) [[unlikely]] return; }
L_0040FACC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040FAF0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[20].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_0040FC78; } }
    c.r[22].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[23], 0u + 12u);
    c.r[22].d[0] = c.r[22].d[0] | 65535ull;
    set32(c.r[30], 0u + 1u);
    c.budget -= 4;
L_0040FB48:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[18], c.r[20].w[0] << 2);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] + c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0040FC2C; } }
    set32(c.r[17], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[16], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[22].d[0];
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0040FB9C; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 12u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FB9Cu);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0040FB9Cu) [[unlikely]] return; }
L_0040FB9C:
    st32((c.r[19].w[0] + 4u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    mmi::mult(c, 0, c.r[17].w[0], c.r[23].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], ld32((c.r[8].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[16], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[16], c.r[16].w[0] + c.r[9].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[5], 0u - c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    c.budget -= 19;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FBE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0040FBE8u) [[unlikely]] return; }
L_0040FBE8:
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[4], 0u - c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[30].w[0]);
    set32(c.r[4], ld32((c.r[21].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[18].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040FC60; } }
L_0040FC2C:
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[5], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[23].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[20].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 13;
L_0040FC60:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[20], c.r[20].w[0] + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FB48u | kUnwind; return; } goto L_0040FB48; } }
L_0040FC78:
    set32(c.r[16], ld32((c.r[21].w[0])));
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[16], ld32((c.r[21].w[0] + 4u)));
    st32((c.r[16].w[0] + 4u), 0u);
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
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040FCC0:
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[10].w[0] << 2);
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040FCF0; } }
L_0040FCE0:
    set32(c.r[2], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[8].w[0] << 2);
    c.budget -= 4;
L_0040FCF0:
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FCE0u | kUnwind; return; } goto L_0040FCE0; } }
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[11], c.r[6].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0040FD58; } }
L_0040FD20:
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[4], c.r[10].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0]), c.r[8].w[0]);
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[9].w[0])));
    set32(c.r[5], c.r[10].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FD20u | kUnwind; return; } goto L_0040FD20; } }
L_0040FD58:
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[6].w[0] << 2);
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040FD88; } }
    c.budget -= 1;
L_0040FD78:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[7].w[0] << 2);
    c.budget -= 4;
L_0040FD88:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FD78u | kUnwind; return; } goto L_0040FD78; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[11].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0040FDE8; } }
    c.budget -= 1;
L_0040FDB0:
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[2].w[0]), c.r[7].w[0]);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[9].w[0])));
    set32(c.r[5], c.r[6].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FDB0u | kUnwind; return; } goto L_0040FDB0; } }
L_0040FDE8:
    c.r[11].d[0] = c.r[10].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[6].d[0];  if (t) { goto L_0040FE54; } }
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[10].w[0] << 2);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[7], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 10;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_0040FE3C; } }
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[2].w[0]), c.r[10].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040FE54; } }
L_0040FE3C:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[7].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[9].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    c.budget -= 6;
L_0040FE54:
    c.r[2].d[0] = c.r[10].d[0] + 0ull;
    if (c.r[11].d[0] == 0) c.r[2].d[0] = c.r[6].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040FE68:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[8].d[0];  if (t) { goto L_0040FEEC; } }
L_0040FE88:
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[5].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0040FEE0; } }
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[4], c.r[4].w[0] << 2);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0040FECC; } }
L_0040FEA8:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.budget -= 9;
L_0040FECC:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FEA8u | kUnwind; return; } goto L_0040FEA8; } }
L_0040FEE0:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FE88u | kUnwind; return; } goto L_0040FE88; } }
L_0040FEEC:
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[8], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[8].d[0];  if (t) { goto L_0040FF74; } }
L_0040FF08:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[7], c.r[5].w[0] + 4u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_0040FF68; } }
    c.budget -= 1;
L_0040FF30:
    set32(c.r[4], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FF30u | kUnwind; return; } goto L_0040FF30; } }
L_0040FF68:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[8].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0040FF08u | kUnwind; return; } goto L_0040FF08; } }
L_0040FF74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0040FF80:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[4].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0040FFE4; } }
    set32(c.r[5], c.r[3].w[0] << 1);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    set32(c.r[6], 0u + 4u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[16].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0040FFE4u);  if (depth < kMaxDepth) unit_0042(c, 85u, depth + 1u); else { c.pc = 0x0020A318u; return; } if (c.pc != 0x0040FFE4u) [[unlikely]] return; }
L_0040FFE4:
    st32((c.r[17].w[0] + 4u), c.r[16].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0;  if (t) { [[clang::musttail]] return unit_00C4(c, 2u, depth); } }
    set32(c.r[7], 0u - 1u);
    c.budget -= 1;
L_0040FFF8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[5], c.r[6].w[0] << 2);
    c.budget -= 2;
    [[clang::musttail]] return unit_00C4(c, 1u, depth);
}

}
