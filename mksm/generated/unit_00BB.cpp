#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00BB[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00BB(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003EC000;
    case 2u: goto L_003EC054;
    case 3u: goto L_003EC0A4;
    case 4u: goto L_003EC0B8;
    case 5u: goto L_003EC0D0;
    case 6u: goto L_003EC0D8;
    case 7u: goto L_003EC0FC;
    case 8u: goto L_003EC114;
    case 9u: goto L_003EC16C;
    case 10u: goto L_003EC1A4;
    case 11u: goto L_003EC1E8;
    case 12u: goto L_003EC218;
    case 13u: goto L_003EC238;
    case 14u: goto L_003EC2C8;
    case 15u: goto L_003EC300;
    case 16u: goto L_003EC31C;
    case 17u: goto L_003EC35C;
    case 18u: goto L_003EC36C;
    case 19u: goto L_003EC380;
    case 20u: goto L_003EC3B0;
    case 21u: goto L_003EC3B8;
    case 22u: goto L_003EC3FC;
    case 23u: goto L_003EC418;
    case 24u: goto L_003EC428;
    case 25u: goto L_003EC438;
    case 26u: goto L_003EC480;
    case 27u: goto L_003EC49C;
    case 28u: goto L_003EC4AC;
    case 29u: goto L_003EC4E8;
    case 30u: goto L_003EC53C;
    case 31u: goto L_003EC554;
    case 32u: goto L_003EC564;
    case 33u: goto L_003EC590;
    case 34u: goto L_003EC5A0;
    case 35u: goto L_003EC5DC;
    case 36u: goto L_003EC664;
    case 37u: goto L_003EC6E8;
    case 38u: goto L_003EC704;
    case 39u: goto L_003EC73C;
    case 40u: goto L_003EC754;
    case 41u: goto L_003EC76C;
    case 42u: goto L_003EC790;
    case 43u: goto L_003EC7C4;
    case 44u: goto L_003EC80C;
    case 45u: goto L_003EC828;
    case 46u: goto L_003EC860;
    case 47u: goto L_003EC878;
    case 48u: goto L_003EC890;
    case 49u: goto L_003EC8B4;
    case 50u: goto L_003EC8E8;
    case 51u: goto L_003EC920;
    case 52u: goto L_003EC934;
    case 53u: goto L_003EC948;
    case 54u: goto L_003EC994;
    case 55u: goto L_003EC9B8;
    case 56u: goto L_003EC9D0;
    case 57u: goto L_003ECA04;
    case 58u: goto L_003ECA24;
    case 59u: goto L_003ECA38;
    case 60u: goto L_003ECA84;
    case 61u: goto L_003ECAA8;
    case 62u: goto L_003ECAC0;
    case 63u: goto L_003ECAF4;
    case 64u: goto L_003ECB10;
    case 65u: goto L_003ECB30;
    case 66u: goto L_003ECB50;
    case 67u: goto L_003ECB64;
    case 68u: goto L_003ECB88;
    case 69u: goto L_003ECB9C;
    case 70u: goto L_003ECBC0;
    case 71u: goto L_003ECBEC;
    case 72u: goto L_003ECC24;
    case 73u: goto L_003ECC38;
    case 74u: goto L_003ECC4C;
    case 75u: goto L_003ECC78;
    case 76u: goto L_003ECC8C;
    case 77u: goto L_003ECC98;
    case 78u: goto L_003ECCAC;
    case 79u: goto L_003ECCC0;
    case 80u: goto L_003ECCEC;
    case 81u: goto L_003ECCFC;
    case 82u: goto L_003ECD5C;
    case 83u: goto L_003ECD6C;
    case 84u: goto L_003ECDA8;
    case 85u: goto L_003ECDBC;
    case 86u: goto L_003ECDCC;
    case 87u: goto L_003ECDDC;
    case 88u: goto L_003ECE38;
    case 89u: goto L_003ECE4C;
    case 90u: goto L_003ECEA8;
    case 91u: goto L_003ECEBC;
    case 92u: goto L_003ECEDC;
    case 93u: goto L_003ECF20;
    case 94u: goto L_003ECF34;
    case 95u: goto L_003ECFA4;
    case 96u: goto L_003ECFB4;
    case 97u: goto L_003ECFCC;
    case 98u: goto L_003ED024;
    case 99u: goto L_003ED038;
    case 100u: goto L_003ED094;
    case 101u: goto L_003ED0A4;
    case 102u: goto L_003ED0BC;
    case 103u: goto L_003ED0CC;
    case 104u: goto L_003ED100;
    case 105u: goto L_003ED124;
    case 106u: goto L_003ED134;
    case 107u: goto L_003ED148;
    case 108u: goto L_003ED19C;
    case 109u: goto L_003ED1A8;
    case 110u: goto L_003ED1B0;
    case 111u: goto L_003ED230;
    case 112u: goto L_003ED244;
    case 113u: goto L_003ED270;
    case 114u: goto L_003ED2F8;
    case 115u: goto L_003ED308;
    case 116u: goto L_003ED338;
    case 117u: goto L_003ED3D0;
    case 118u: goto L_003ED414;
    case 119u: goto L_003ED450;
    case 120u: goto L_003ED4A8;
    case 121u: goto L_003ED4BC;
    case 122u: goto L_003ED4CC;
    case 123u: goto L_003ED4E0;
    case 124u: goto L_003ED528;
    case 125u: goto L_003ED538;
    case 126u: goto L_003ED548;
    case 127u: goto L_003ED558;
    case 128u: goto L_003ED580;
    case 129u: goto L_003ED588;
    case 130u: goto L_003ED5B0;
    case 131u: goto L_003ED5B8;
    case 132u: goto L_003ED5C8;
    case 133u: goto L_003ED5D8;
    case 134u: goto L_003ED608;
    case 135u: goto L_003ED60C;
    case 136u: goto L_003ED640;
    case 137u: goto L_003ED6AC;
    case 138u: goto L_003ED6F0;
    case 139u: goto L_003ED710;
    case 140u: goto L_003ED720;
    case 141u: goto L_003ED73C;
    case 142u: goto L_003ED74C;
    case 143u: goto L_003ED780;
    case 144u: goto L_003ED7B8;
    case 145u: goto L_003ED7D0;
    case 146u: goto L_003ED7E8;
    case 147u: goto L_003ED7F4;
    case 148u: goto L_003ED800;
    case 149u: goto L_003ED820;
    case 150u: goto L_003ED830;
    case 151u: goto L_003ED8A0;
    case 152u: goto L_003ED8C8;
    case 153u: goto L_003ED910;
    case 154u: goto L_003ED978;
    case 155u: goto L_003ED9F8;
    case 156u: goto L_003EDA18;
    case 157u: goto L_003EDAD4;
    case 158u: goto L_003EDAE4;
    case 159u: goto L_003EDB08;
    case 160u: goto L_003EDB14;
    case 161u: goto L_003EDB2C;
    case 162u: goto L_003EDB50;
    case 163u: goto L_003EDBB8;
    case 164u: goto L_003EDBDC;
    case 165u: goto L_003EDC30;
    case 166u: goto L_003EDC58;
    case 167u: goto L_003EDC68;
    case 168u: goto L_003EDC84;
    case 169u: goto L_003EDC94;
    case 170u: goto L_003EDCD8;
    case 171u: goto L_003EDD58;
    case 172u: goto L_003EDD7C;
    case 173u: goto L_003EDDD8;
    case 174u: goto L_003EDE00;
    case 175u: goto L_003EDE10;
    case 176u: goto L_003EDE2C;
    case 177u: goto L_003EDE3C;
    case 178u: goto L_003EDE64;
    case 179u: goto L_003EDE98;
    case 180u: goto L_003EDEF0;
    case 181u: goto L_003EDF38;
    case 182u: goto L_003EDF4C;
    case 183u: goto L_003EDF5C;
    case 184u: goto L_003EDF88;
    case 185u: goto L_003EDFD0;
    case 186u: goto L_003EE01C;
    case 187u: goto L_003EE068;
    case 188u: goto L_003EE0C0;
    case 189u: goto L_003EE110;
    case 190u: goto L_003EE11C;
    case 191u: goto L_003EE15C;
    case 192u: goto L_003EE180;
    case 193u: goto L_003EE1C4;
    case 194u: goto L_003EE218;
    case 195u: goto L_003EE2BC;
    case 196u: goto L_003EE2DC;
    case 197u: goto L_003EE2EC;
    case 198u: goto L_003EE300;
    case 199u: goto L_003EE340;
    case 200u: goto L_003EE378;
    case 201u: goto L_003EE388;
    case 202u: goto L_003EE3D8;
    case 203u: goto L_003EE400;
    case 204u: goto L_003EE420;
    case 205u: goto L_003EE434;
    case 206u: goto L_003EE448;
    case 207u: goto L_003EE4B8;
    case 208u: goto L_003EE4C0;
    case 209u: goto L_003EE4DC;
    case 210u: goto L_003EE538;
    case 211u: goto L_003EE5C0;
    case 212u: goto L_003EE5D4;
    case 213u: goto L_003EE5E4;
    case 214u: goto L_003EE620;
    case 215u: goto L_003EE694;
    case 216u: goto L_003EE6A8;
    case 217u: goto L_003EE6B8;
    case 218u: goto L_003EE6D8;
    case 219u: goto L_003EE730;
    case 220u: goto L_003EE744;
    case 221u: goto L_003EE758;
    case 222u: goto L_003EE788;
    case 223u: goto L_003EE7D8;
    case 224u: goto L_003EE7E0;
    case 225u: goto L_003EE7E8;
    case 226u: goto L_003EE84C;
    case 227u: goto L_003EE868;
    case 228u: goto L_003EE878;
    case 229u: goto L_003EE8BC;
    case 230u: goto L_003EE8C4;
    case 231u: goto L_003EE900;
    case 232u: goto L_003EE948;
    case 233u: goto L_003EE960;
    case 234u: goto L_003EE990;
    case 235u: goto L_003EEA10;
    case 236u: goto L_003EEA28;
    case 237u: goto L_003EEA68;
    case 238u: goto L_003EEA80;
    case 239u: goto L_003EEA98;
    case 240u: goto L_003EEAAC;
    case 241u: goto L_003EEAC0;
    case 242u: goto L_003EEAF4;
    case 243u: goto L_003EEAFC;
    case 244u: goto L_003EEB08;
    case 245u: goto L_003EEB30;
    case 246u: goto L_003EEB54;
    case 247u: goto L_003EEB68;
    case 248u: goto L_003EEB78;
    case 249u: goto L_003EEBB0;
    case 250u: goto L_003EEBF8;
    case 251u: goto L_003EEC18;
    case 252u: goto L_003EEC28;
    case 253u: goto L_003EEC44;
    case 254u: goto L_003EEC60;
    case 255u: goto L_003EEC98;
    case 256u: goto L_003EECE0;
    case 257u: goto L_003EED00;
    case 258u: goto L_003EED44;
    case 259u: goto L_003EED68;
    case 260u: goto L_003EED78;
    case 261u: goto L_003EED94;
    case 262u: goto L_003EEDA4;
    case 263u: goto L_003EEDC0;
    case 264u: goto L_003EEDE0;
    case 265u: goto L_003EEE18;
    case 266u: goto L_003EEE74;
    case 267u: goto L_003EEE8C;
    case 268u: goto L_003EEEA8;
    case 269u: goto L_003EEF00;
    case 270u: goto L_003EEF5C;
    case 271u: goto L_003EEF68;
    case 272u: goto L_003EEF80;
    case 273u: goto L_003EEFA0;
    case 274u: goto L_003EEFD0;
    case 275u: goto L_003EF030;
    case 276u: goto L_003EF080;
    case 277u: goto L_003EF378;
    case 278u: goto L_003EF808;
    case 279u: goto L_003EFCF0;
    default: bad_entry(c, 0x003EC000u); return;
    }
L_003EC000:
    set32(c.r[3], ld32((c.r[2].w[0] + 648u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 788u), c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == 0ull; st32((c.r[2].w[0] + 648u), c.r[3].w[0]);  if (t) { goto L_003EC084; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_003EC054; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[20].w[0] - 22720u);  if (t) { goto L_003EC058; } }
    c.f[0] = ld32((c.r[7].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[3].w[0] + 500u)));  goto L_003EC05C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC054u); set32(c.r[4], c.r[4].w[0] - 17448u);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003EC054u) [[unlikely]] return; }
L_003EC054:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    c.budget -= 1;
L_003EC058:
    set32(c.r[2], ld32((c.r[3].w[0] + 500u)));
    c.budget -= 1;
L_003EC05C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.f[0] = ld32((c.r[3].w[0] + 112u));  goto L_003EC068; }
    c.f[0] = ld32((c.r[3].w[0] + 1648u));
    c.budget -= 1;
L_003EC068:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 1u);  if (t) { goto L_003EC084; } }
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_003EC084:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[20].w[0] - 22720u);  if (t) { goto L_003EC128; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EC0B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0A4u);  if (depth < kMaxDepth) unit_00BB(c, 245u, depth + 1u); else { c.pc = 0x003EEB30u; return; } if (c.pc != 0x003EC0A4u) [[unlikely]] return; }
L_003EC0A4:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.f[1] = ld32((c.r[17].w[0]));  goto L_003EC0E0; }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003EC0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0B8u); set32(c.r[4], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003EC0B8u) [[unlikely]] return; }
L_003EC0B8:
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.f[0] = ld32((c.r[29].w[0]));  if (t) { goto L_003EC100; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 292u, depth + 1u); else { c.pc = 0x003E3730u; return; } if (c.pc != 0x003EC0D0u) [[unlikely]] return; }
L_003EC0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0D8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 273u, depth + 1u); else { c.pc = 0x003E31F0u; return; } if (c.pc != 0x003EC0D8u) [[unlikely]] return; }
L_003EC0D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[29].w[0]));  if (t) { goto L_003EC100; } }
L_003EC0E0:
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EC108; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC0FCu); set32(c.r[4], c.r[17].w[0] + 44u);  if (depth < kMaxDepth) unit_00BB(c, 185u, depth + 1u); else { c.pc = 0x003EDFD0u; return; } if (c.pc != 0x003EC0FCu) [[unlikely]] return; }
L_003EC0FC:
    c.f[0] = ld32((c.r[29].w[0]));
    c.budget -= 1;
L_003EC100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0]), c.f[0]);  if (t) { goto L_003EC114; } }
L_003EC108:
    set32(c.r[4], c.r[17].w[0] + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC114u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 192u, depth + 1u); else { c.pc = 0x003EE180u; return; } if (c.pc != 0x003EC114u) [[unlikely]] return; }
L_003EC114:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 2272u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 2272u), c.r[2].w[0]);  if (t) { goto L_003EC218; } }
L_003EC128:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], c.r[19].w[0] - 20104u);  if (t) { goto L_003EC150; } }
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], ld32((c.r[16].w[0] + 500u)));  goto L_003EC1AC; }
L_003EC150:
    set32(c.r[2], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[3].w[0] + 128u), c.r[2].w[0]);  if (t) { goto L_003EC16C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC16Cu); set32(c.r[4], c.r[4].w[0] - 17408u);  if (depth < kMaxDepth) unit_00BB(c, 107u, depth + 1u); else { c.pc = 0x003ED148u; return; } if (c.pc != 0x003EC16Cu) [[unlikely]] return; }
L_003EC16C:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 500u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EC198; } }
    c.f[1] = ld32((c.r[16].w[0] + 2332u));
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);  if (t) { goto L_003EC21C; } }
L_003EC198:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC1A4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 373u, depth + 1u); else { c.pc = 0x003EBCB0u; return; } if (c.pc != 0x003EC1A4u) [[unlikely]] return; }
L_003EC1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);  if (t) { goto L_003EC21C; } }
L_003EC1AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[19].w[0] - 20104u);  if (t) { goto L_003EC1F0; } }
    c.f[0] = ld32((c.r[16].w[0] + 1648u));
    c.f[0] = c.f[0] ^ fp::kSign;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], c.r[19].w[0] - 20104u);  if (t) { goto L_003EC1F0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 656u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC1E8u); st32((c.r[3].w[0] + 656u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_00BA(c, 373u, depth + 1u); else { c.pc = 0x003EBCB0u; return; } if (c.pc != 0x003EC1E8u) [[unlikely]] return; }
L_003EC1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);  if (t) { goto L_003EC21C; } }
L_003EC1F0:
    set32(c.r[3], c.r[20].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[5].w[0] + 644u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[5].w[0] + 644u), c.r[2].w[0]);  if (t) { goto L_003EC218; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC218u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 373u, depth + 1u); else { c.pc = 0x003EBCB0u; return; } if (c.pc != 0x003EC218u) [[unlikely]] return; }
L_003EC218:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EC21C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EC238:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    set32(c.r[2], c.r[2].w[0] - 22720u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 160u)));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EC298; } }
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    c.f[1] = ld32((c.r[2].w[0] + 2336u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[2].w[0] + 12u), c.f[1]);  goto L_003EC298; }
L_003EC298:
    st32((c.r[21].w[0]), 0u);
    set32(c.r[3], c.r[23].w[0] - 22720u);
    set32(c.r[18], ld32((c.r[3].w[0] + 2228u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003EC464; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003EC464; } }
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
L_003EC2C8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], ld32((c.r[18].w[0] + 16u)));  goto L_003EC2E0; }
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003EC448; }
    set32(c.r[17], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 1;
L_003EC2E0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_003EC33C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EC334; } }
    set32(c.r[19], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[19].w[0] + 2280u)));
    c.budget -= 2;
L_003EC300:
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], ld32((c.r[17].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_003EC31C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC31Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 152u, depth + 1u); else { c.pc = 0x003E98F8u; return; } if (c.pc != 0x003EC31Cu) [[unlikely]] return; }
L_003EC31C:
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[17], ld32((c.r[20].w[0] + 2224u)));  goto L_003EC340; }
    set32(c.r[2], ld32((c.r[17].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 2280u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC300u | kUnwind; return; } goto L_003EC300; }
L_003EC334:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[23].w[0] - 22720u);  if (t) { goto L_003EC344; } }
L_003EC33C:
    set32(c.r[17], ld32((c.r[20].w[0] + 2224u)));
    c.budget -= 1;
L_003EC340:
    set32(c.r[16], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003EC344:
    set32(c.r[2], ld32((c.r[16].w[0] + 2216u)));
    c.budget -= 3;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[18].w[0] + 44u)));  goto L_003EC370; }
    set32(c.r[4], ld32((c.r[16].w[0] + 2192u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC35Cu); set32(c.r[5], c.r[30].w[0] - 17384u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC35Cu) [[unlikely]] return; }
L_003EC35C:
    set32(c.r[4], 0u + 3u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC36Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EC36Cu) [[unlikely]] return; }
L_003EC36C:
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 1;
L_003EC370:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 48u)));  goto L_003EC3D0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC380u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EC380u) [[unlikely]] return; }
L_003EC380:
    set32(c.r[3], ld32((c.r[21].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[21].w[0]), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 2272u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    st32((c.r[16].w[0] + 2272u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 9;
    if (c.r[2].d[0] == 0ull) { set32(c.r[5], ld32((c.r[18].w[0] + 48u)));  goto L_003EC3D0; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003EC3CC; } }
L_003EC3B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC3B8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 386u, depth + 1u); else { c.pc = 0x003EBF70u; return; } if (c.pc != 0x003EC3B8u) [[unlikely]] return; }
L_003EC3B8:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC3B0u | kUnwind; return; } goto L_003EC3B0; } }
L_003EC3CC:
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 1;
L_003EC3D0:
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003EC448; }
    set32(c.r[2], ld32((c.r[20].w[0] + 96u)));
    set32(c.r[3], ld32((c.r[20].w[0] + 100u)));
    set32(c.r[4], ld32((c.r[20].w[0] + 500u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003EC448; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC3FCu); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EC3FCu) [[unlikely]] return; }
L_003EC3FC:
    set32(c.r[2], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], ld32((c.r[18].w[0] + 28u)));  goto L_003EC448; }
    set32(c.r[4], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 8u);  if (t) { goto L_003EC444; } }
    c.budget -= 1;
L_003EC418:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003EC430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC428u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 386u, depth + 1u); else { c.pc = 0x003EBF70u; return; } if (c.pc != 0x003EC428u) [[unlikely]] return; }
L_003EC428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_003EC43C; } }
L_003EC430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC438u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 373u, depth + 1u); else { c.pc = 0x003EBCB0u; return; } if (c.pc != 0x003EC438u) [[unlikely]] return; }
L_003EC438:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003EC43C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC418u | kUnwind; return; } goto L_003EC418; } }
L_003EC444:
    set32(c.r[18], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 1;
L_003EC448:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], c.r[23].w[0] - 22720u);  if (t) { goto L_003EC464; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 60u)));
    c.r[2].d[0] = c.r[2].d[0] & 2048ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[18].w[0] + 44u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC2C8u | kUnwind; return; } goto L_003EC2C8; }
    set32(c.r[2], c.r[23].w[0] - 22720u);
    c.budget -= 1;
L_003EC464:
    set32(c.r[3], ld32((c.r[2].w[0] + 2424u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);  if (t) { goto L_003EC4BC; } }
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[3].w[0] + 8u);  if (t) { goto L_003EC4B8; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003EC480:
    set32(c.r[4], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0])));  goto L_003EC4B0; }
    c.budget -= 2;
    if (c.r[22].d[0] == 0ull) { set32(c.r[5], ld32((c.r[17].w[0] + 2224u)));  goto L_003EC4A4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC49Cu); set32(c.r[5], ld32((c.r[17].w[0] + 2224u)));  if (depth < kMaxDepth) unit_00BA(c, 386u, depth + 1u); else { c.pc = 0x003EBF70u; return; } if (c.pc != 0x003EC49Cu) [[unlikely]] return; }
L_003EC49C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0])));  if (t) { goto L_003EC4B0; } }
L_003EC4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC4ACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BA(c, 373u, depth + 1u); else { c.pc = 0x003EBCB0u; return; } if (c.pc != 0x003EC4ACu) [[unlikely]] return; }
L_003EC4AC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 1;
L_003EC4B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC480u | kUnwind; return; } goto L_003EC480; } }
L_003EC4B8:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EC4BC:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003EC4E8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[3].w[0] - 22720u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    c.r[30].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 176u), c.f[20]);
    set32(c.r[4], ld32((c.r[19].w[0] + 2420u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC53Cu); set32(c.r[22], ld32((c.r[2].w[0] + 180u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EC53Cu) [[unlikely]] return; }
L_003EC53C:
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[19].w[0] + 512u)));
    st32((c.r[29].w[0] + 12u), 0u);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC554u); set32(c.r[4], ld32((c.r[19].w[0] + 2424u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EC554u) [[unlikely]] return; }
L_003EC554:
    set32(c.r[3], ld32((c.r[19].w[0] + 2268u)));
    set32(c.r[4], ld32((c.r[19].w[0] + 68u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC564u); set32(c.r[23], c.r[3].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B8(c, 289u, depth + 1u); else { c.pc = 0x003E3678u; return; } if (c.pc != 0x003EC564u) [[unlikely]] return; }
L_003EC564:
    set32(c.r[16], ld32((c.r[19].w[0] + 2212u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003EC614; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003EC614; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00080000u);
    c.r[17].d[0] = c.r[17].d[0] | 512ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 5;
L_003EC590:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 60u)));  goto L_003EC5A8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC5A0u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EC5A0u) [[unlikely]] return; }
L_003EC5A0:
    set32(c.r[30], c.r[30].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 2;
L_003EC5A8:
    c.r[2].d[0] = c.r[3].d[0] & c.r[19].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 8192ull;  if (t) { goto L_003EC5FC; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003EC5D4; } }
    c.r[2].d[0] = c.r[3].d[0] & c.r[17].d[0];
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[17].d[0];
    set32(c.r[3], c.r[4].w[0] + 1u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_003EC5FC; } }
L_003EC5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC5DCu); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EC5DCu) [[unlikely]] return; }
L_003EC5DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], c.r[5].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[5].w[0] + 504u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    set32(c.r[4], c.r[5].w[0] + 1u);
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[4].d[0];
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 8;
L_003EC5FC:
    set32(c.r[16], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003EC614; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 48u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EC590u | kUnwind; return; } goto L_003EC590; }
L_003EC614:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EC644; } }
    set32(c.r[3], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[3].w[0] + 424u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    if (c.r[2].d[0] == c.r[21].d[0]) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003EC648; }
    set32(c.r[2], ld32((c.r[3].w[0] + 428u)));
    set32(c.r[3], c.r[20].w[0] - 1u);
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[21].d[0];
    if (c.r[2].d[0] != 0) c.r[20].d[0] = c.r[3].d[0];
    c.budget -= 5;
L_003EC644:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EC648:
    set32(c.r[16], c.r[3].w[0] - 22720u);
    c.r[2].d[0] = ld64((c.r[16].w[0] + 424u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EC664; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC664u); set32(c.r[5], c.r[5].w[0] - 17264u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC664u) [[unlikely]] return; }
L_003EC664:
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  goto L_003EC680; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 420u)));  if (t) { goto L_003EC694; } }
L_003EC680:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], ld32((c.r[16].w[0] + 2276u)));  goto L_003EC69C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 76u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 72u)));
    c.budget -= 3;
L_003EC694:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[19], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 2;
L_003EC69C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[4].w[0] - 20104u);
    set32(c.r[16], c.r[5].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[2].w[0] + 780u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 148u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 144u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 476u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_003EC7E0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EC6F0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[5], c.r[5].w[0] - 17192u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC6E8u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC6E8u) [[unlikely]] return; }
L_003EC6E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EC708; } }
L_003EC6F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[5], c.r[5].w[0] - 17112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC704u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC704u) [[unlikely]] return; }
L_003EC704:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EC708:
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 17048u);  if (t) { goto L_003EC728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 17008u);  if (t) { goto L_003EC730; } }
L_003EC728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[2].w[0] - 16984u);
    c.budget -= 2;
L_003EC730:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC73Cu); c.r[7].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC73Cu) [[unlikely]] return; }
L_003EC73C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC754; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC754u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC754u) [[unlikely]] return; }
L_003EC754:
    set32(c.r[6], c.r[30].w[0] - c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC774; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC76Cu); set32(c.r[5], c.r[5].w[0] - 16920u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC76Cu) [[unlikely]] return; }
L_003EC76C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC794; } }
L_003EC774:
    set32(c.r[2], c.r[20].w[0] - c.r[23].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[22].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC790; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC790u); set32(c.r[5], c.r[5].w[0] - 16880u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC790u) [[unlikely]] return; }
L_003EC790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003EC794:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] - 16832u);  if (t) { goto L_003EC7A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 16792u);  if (t) { goto L_003EC7B0; } }
L_003EC7A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[2].w[0] - 16984u);
    c.budget -= 2;
L_003EC7B0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[4].w[0] - 22720u);
    set32(c.r[7], ld32((c.r[2].w[0] + 2276u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC7C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC7C4u) [[unlikely]] return; }
L_003EC7C4:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECAF4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] - 16784u);  if (t) { goto L_003EC9E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC9F4; } }
L_003EC7E0:
    set32(c.r[2], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_003EC904; }
    set32(c.r[2], ld32((c.r[16].w[0] + 464u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EC814; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[5], c.r[5].w[0] - 16728u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC80Cu); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC80Cu) [[unlikely]] return; }
L_003EC80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EC82C; } }
L_003EC814:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[5], c.r[5].w[0] - 16640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC828u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC828u) [[unlikely]] return; }
L_003EC828:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EC82C:
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[5], c.r[3].w[0] - 16568u);  if (t) { goto L_003EC84C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 17008u);  if (t) { goto L_003EC854; } }
L_003EC84C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[2].w[0] - 16984u);
    c.budget -= 2;
L_003EC854:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC860u); c.r[7].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC860u) [[unlikely]] return; }
L_003EC860:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC878; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16976u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC878u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC878u) [[unlikely]] return; }
L_003EC878:
    set32(c.r[6], c.r[30].w[0] - c.r[22].w[0]);
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] <= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC898; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC890u); set32(c.r[5], c.r[5].w[0] - 16920u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC890u) [[unlikely]] return; }
L_003EC890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC8B8; } }
L_003EC898:
    set32(c.r[2], c.r[20].w[0] - c.r[23].w[0]);
    set32(c.r[6], c.r[2].w[0] - c.r[22].w[0]);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] <= 0; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC8B4; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC8B4u); set32(c.r[5], c.r[5].w[0] - 16880u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC8B4u) [[unlikely]] return; }
L_003EC8B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003EC8B8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] - 16536u);  if (t) { goto L_003EC8CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 16792u);  if (t) { goto L_003EC8D4; } }
L_003EC8CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[2].w[0] - 16984u);
    c.budget -= 2;
L_003EC8D4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[4].w[0] - 22720u);
    set32(c.r[7], ld32((c.r[2].w[0] + 2276u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC8E8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC8E8u) [[unlikely]] return; }
L_003EC8E8:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECAF4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[5], c.r[2].w[0] - 16496u);  if (t) { goto L_003EC9E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC9F4; } }
L_003EC904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECA0C; } }
    set32(c.r[7], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[5], c.r[5].w[0] - 16440u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC920u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC920u) [[unlikely]] return; }
L_003EC920:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC934u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC934u) [[unlikely]] return; }
L_003EC934:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16336u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC948u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC948u) [[unlikely]] return; }
L_003EC948:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EC998; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC97C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC970; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 16288u);  if (t) { goto L_003EC980; } }
L_003EC970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 16264u);  if (t) { goto L_003EC980; } }
L_003EC97C:
    set32(c.r[6], c.r[2].w[0] - 16248u);
    c.budget -= 1;
L_003EC980:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC994u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC994u) [[unlikely]] return; }
L_003EC994:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EC998:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[2].w[0] - 22720u);
    set32(c.r[5], c.r[5].w[0] - 16208u);
    set32(c.r[2], ld32((c.r[17].w[0] + 2264u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 2232u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC9B8u); set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC9B8u) [[unlikely]] return; }
L_003EC9B8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003EC9D0; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 2276u)));
    set32(c.r[5], c.r[5].w[0] - 16168u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EC9D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EC9D0u) [[unlikely]] return; }
L_003EC9D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECAF4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] - 16120u);  if (t) { goto L_003EC9F0; } }
L_003EC9E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 16792u);  if (t) { goto L_003EC9F8; } }
L_003EC9F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003EC9F4:
    set32(c.r[6], c.r[2].w[0] - 16984u);
    c.budget -= 1;
L_003EC9F8:
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECA04u) [[unlikely]] return; }
L_003ECA04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 12u)));  if (t) { goto L_003ECAF8; } }
L_003ECA0C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[7], ld32((c.r[16].w[0] + 504u)));
    set32(c.r[5], c.r[5].w[0] - 16064u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECA24u) [[unlikely]] return; }
L_003ECA24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 16024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECA38u) [[unlikely]] return; }
L_003ECA38:
    c.budget -= 2;
    if (c.r[30].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003ECA88; }
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECA6C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECA60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 15992u);  if (t) { goto L_003ECA70; } }
L_003ECA60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 15968u);  if (t) { goto L_003ECA70; } }
L_003ECA6C:
    set32(c.r[6], c.r[2].w[0] - 15952u);
    c.budget -= 1;
L_003ECA70:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECA84u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECA84u) [[unlikely]] return; }
L_003ECA84:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003ECA88:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[17], c.r[4].w[0] - 22720u);
    set32(c.r[5], c.r[5].w[0] - 15904u);
    set32(c.r[2], ld32((c.r[17].w[0] + 2264u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[17].w[0] + 2232u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECAA8u); set32(c.r[6], c.r[2].w[0] - c.r[6].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECAA8u) [[unlikely]] return; }
L_003ECAA8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECAC0; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 2276u)));
    set32(c.r[5], c.r[5].w[0] - 15880u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECAC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECAC0u) [[unlikely]] return; }
L_003ECAC0:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECAF4; } }
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull; set32(c.r[5], c.r[2].w[0] - 15848u);  if (t) { goto L_003ECAE0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[6], c.r[2].w[0] - 16792u);  if (t) { goto L_003ECAE8; } }
L_003ECAE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], c.r[2].w[0] - 16984u);
    c.budget -= 2;
L_003ECAE8:
    set32(c.r[7], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECAF4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECAF4u) [[unlikely]] return; }
L_003ECAF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 1;
L_003ECAF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECB10; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15800u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB10u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECB10u) [[unlikely]] return; }
L_003ECB10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[3].w[0] - 21932u);
    set32(c.r[5], c.r[4].w[0] - 15760u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB30u); set32(c.r[7], c.r[16].w[0] - 256u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECB30u) [[unlikely]] return; }
L_003ECB30:
    set32(c.r[6], ld32((c.r[16].w[0] - 392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[2].d[0]) { c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  goto L_003ECB58; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB50u); set32(c.r[5], c.r[5].w[0] - 15728u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECB50u) [[unlikely]] return; }
L_003ECB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ECB68; } }
L_003ECB58:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB64u); set32(c.r[5], c.r[5].w[0] - 15720u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECB64u) [[unlikely]] return; }
L_003ECB64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003ECB68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[5].w[0] - 20104u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 680u)));
    set32(c.r[5], c.r[2].w[0] - 15712u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB88u); set32(c.r[17], c.r[3].w[0] - 22720u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECB88u) [[unlikely]] return; }
L_003ECB88:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 764u)));
    set32(c.r[5], c.r[4].w[0] - 15672u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECB9Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECB9Cu) [[unlikely]] return; }
L_003ECB9C:
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECBC0; } }
    set32(c.r[6], ld32((c.r[17].w[0] + 2264u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 2232u)));
    set32(c.r[5], c.r[5].w[0] - 15632u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECBC0u); set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECBC0u) [[unlikely]] return; }
L_003ECBC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[16].w[0] + 648u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 652u)));
    set32(c.r[5], c.r[2].w[0] - 15600u);
    set32(c.r[7], ld32((c.r[16].w[0] + 616u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 632u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECBECu); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECBECu) [[unlikely]] return; }
L_003ECBEC:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECC4C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 64u)));
    set32(c.r[5], c.r[5].w[0] - 15552u);
    set32(c.r[7], ld32((c.r[16].w[0] + 196u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 192u)));
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 220u)));
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC24u); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECC24u) [[unlikely]] return; }
L_003ECC24:
    set32(c.r[6], ld32((c.r[16].w[0] + 72u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 15504u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC38u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECC38u) [[unlikely]] return; }
L_003ECC38:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15456u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECC4Cu) [[unlikely]] return; }
L_003ECC4C:
    set32(c.r[2], ld32((c.r[17].w[0] + 380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ECD00; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 2380u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 22720u);  if (t) { goto L_003ECD04; } }
    c.r[4].d[0] = ld64((c.r[17].w[0] + 2296u));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_003ECC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC78u);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003ECC78u) [[unlikely]] return; }
L_003ECC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[20] = c.f[0];  if (t) { goto L_003ECC90; } }
L_003ECC80:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC8Cu); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003ECC8Cu) [[unlikely]] return; }
L_003ECC8C:
    c.f[20] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_003ECC90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECC98u);  if (depth < kMaxDepth) unit_00C4(c, 83u, depth + 1u); else { c.pc = 0x00410B90u; return; } if (c.pc != 0x003ECC98u) [[unlikely]] return; }
L_003ECC98:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0; c.r[2].d[0] = c.r[4].d[0] >> 1;  if (t) { goto L_003ECCB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECCACu);  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003ECCACu) [[unlikely]] return; }
L_003ECCAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003ECCC4; } }
L_003ECCB4:
    c.r[4].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECCC0u); c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];  if (depth < kMaxDepth) unit_0040(c, 182u, depth + 1u); else { c.pc = 0x00202098u; return; } if (c.pc != 0x003ECCC0u) [[unlikely]] return; }
L_003ECCC0:
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 1;
L_003ECCC4:
    fpu_div(c, 20u, c.f[20], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[3].w[0] - 20104u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 15424u);
    st32((c.r[2].w[0] + 136u), c.f[20]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECCECu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ECCECu) [[unlikely]] return; }
L_003ECCEC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECCFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECCFCu) [[unlikely]] return; }
L_003ECCFC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003ECD00:
    set32(c.r[3], c.r[4].w[0] - 22720u);
    c.budget -= 1;
L_003ECD04:
    set32(c.r[2], ld32((c.r[3].w[0] + 392u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECD74; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 172u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003ECDE0; }
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  goto L_003ECDE0; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[5].w[0] - 20104u);
    c.f[0] = ld32((c.r[3].w[0] + 2308u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[12] = ld32((c.r[2].w[0] + 704u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    fpu_div(c, 12u, c.f[12], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECD5Cu); set32(c.r[16], c.r[16].w[0] - 15368u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ECD5Cu) [[unlikely]] return; }
L_003ECD5C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECD6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECD6Cu) [[unlikely]] return; }
L_003ECD6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ECDE0; } }
L_003ECD74:
    c.f[12] = ld32((c.r[3].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 15004u));
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ECDDC; } }
    set32(c.r[17], c.r[2].w[0] - 20104u);
    set32(c.r[2], ld32((c.r[17].w[0] + 704u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECDC4; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECDA8u); set32(c.r[16], c.r[16].w[0] - 15312u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ECDA8u) [[unlikely]] return; }
L_003ECDA8:
    set32(c.r[6], ld32((c.r[17].w[0] + 704u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECDBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECDBCu) [[unlikely]] return; }
L_003ECDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ECDE0; } }
L_003ECDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECDCCu); set32(c.r[16], c.r[16].w[0] - 15264u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ECDCCu) [[unlikely]] return; }
L_003ECDCC:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECDDCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECDDCu) [[unlikely]] return; }
L_003ECDDC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003ECDE0:
    c.f[1] = 0u;
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.f[0] = ld32((c.r[2].w[0] + 2384u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ECE54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[4].w[0] - 20104u);
    set32(c.r[4], ld32((c.r[2].w[0] + 780u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] - 15232u);  if (t) { goto L_003ECE20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 15200u);  if (t) { goto L_003ECE28; } }
L_003ECE20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 15184u);
    c.budget -= 2;
L_003ECE28:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[5].w[0] - 22720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECE38u); c.f[12] = ld32((c.r[2].w[0] + 2384u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ECE38u) [[unlikely]] return; }
L_003ECE38:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECE4Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECE4Cu) [[unlikely]] return; }
L_003ECE4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[1] = 0u;
    c.budget -= 2;
L_003ECE54:
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.f[0] = ld32((c.r[2].w[0] + 2388u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ECEC0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[4].w[0] - 20104u);
    set32(c.r[4], ld32((c.r[2].w[0] + 780u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[17], c.r[3].w[0] - 15176u);  if (t) { goto L_003ECE90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 15200u);  if (t) { goto L_003ECE98; } }
L_003ECE90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 15184u);
    c.budget -= 2;
L_003ECE98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[5].w[0] - 22720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECEA8u); c.f[12] = ld32((c.r[2].w[0] + 2388u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ECEA8u) [[unlikely]] return; }
L_003ECEA8:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECEBCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECEBCu) [[unlikely]] return; }
L_003ECEBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003ECEC0:
    set32(c.r[16], c.r[2].w[0] - 22720u);
    set32(c.r[2], ld32((c.r[16].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003ED0BC; } }
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECEDCu); c.r[6].d[0] = c.r[29].d[0] | 4ull;  if (depth < kMaxDepth) unit_00BD(c, 215u, depth + 1u); else { c.pc = 0x003F7930u; return; } if (c.pc != 0x003ECEDCu) [[unlikely]] return; }
L_003ECEDC:
    c.f[0] = ld32((c.r[16].w[0] + 1600u));
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECFCC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 2380u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] - 15144u);  if (t) { goto L_003ECF10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 16984u);  if (t) { goto L_003ECF18; } }
L_003ECF10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 15088u);
    c.budget -= 2;
L_003ECF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECF20u); c.f[12] = ld32((c.r[29].w[0]));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ECF20u) [[unlikely]] return; }
L_003ECF20:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECF34u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECF34u) [[unlikely]] return; }
L_003ECF34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[0] = ld32((c.r[29].w[0]));
    set32(c.r[3], c.r[4].w[0] - 22720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    c.f[3] = ld32((c.r[3].w[0] + 1652u));
    c.f[1] = ld32((c.r[3].w[0] + 1600u));
    c.f[1] = fp::add(c.f[3], c.f[1]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[12]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECFC0; } }
    c.f[1] = fp::add(c.f[3], c.f[3]);
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECFBC; } }
    c.f[1] = ld32((c.r[3].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 15004u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ECFBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECFA4u); set32(c.r[16], c.r[16].w[0] - 15080u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ECFA4u) [[unlikely]] return; }
L_003ECFA4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECFB4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECFB4u) [[unlikely]] return; }
L_003ECFB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ECFD0; } }
L_003ECFBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003ECFC0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ECFCCu); set32(c.r[5], c.r[2].w[0] - 15064u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ECFCCu) [[unlikely]] return; }
L_003ECFCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003ECFD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] - 22720u);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 1600u));
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ED0C0; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 2380u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] - 15056u);  if (t) { goto L_003ED014; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] - 16984u);  if (t) { goto L_003ED01C; } }
L_003ED014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[2].w[0] - 15088u);
    c.budget -= 2;
L_003ED01C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED024u); c.f[12] = ld32((c.r[29].w[0] + 4u));  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ED024u) [[unlikely]] return; }
L_003ED024:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED038u); c.r[7].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED038u) [[unlikely]] return; }
L_003ED038:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[3], c.r[4].w[0] - 22720u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[3] = c.r[1].w[0];
    c.f[0] = ld32((c.r[3].w[0] + 1652u));
    c.f[1] = c.f[1] ^ fp::kSign;
    c.f[2] = ld32((c.r[3].w[0] + 1600u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[12]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ED0AC; } }
    c.f[1] = ld32((c.r[3].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 15004u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ED0AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED094u); set32(c.r[16], c.r[16].w[0] - 15080u);  if (depth < kMaxDepth) unit_0040(c, 369u, depth + 1u); else { c.pc = 0x00203830u; return; } if (c.pc != 0x003ED094u) [[unlikely]] return; }
L_003ED094:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED0A4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED0A4u) [[unlikely]] return; }
L_003ED0A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ED0C0; } }
L_003ED0AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED0BCu); set32(c.r[5], c.r[2].w[0] - 15064u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED0BCu) [[unlikely]] return; }
L_003ED0BC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 1;
L_003ED0C0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED0CCu); set32(c.r[5], c.r[3].w[0] - 15064u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED0CCu) [[unlikely]] return; }
L_003ED0CC:
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_003ED100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED124u); set32(c.r[4], c.r[4].w[0] - 18464u);  if (depth < kMaxDepth) unit_00BC(c, 119u, depth + 1u); else { c.pc = 0x003F27E0u; return; } if (c.pc != 0x003ED124u) [[unlikely]] return; }
L_003ED124:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED134u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003ED134u) [[unlikely]] return; }
L_003ED134:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003ED148:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[2].w[0] - 22720u);
    set32(c.r[3], ld32((c.r[4].w[0] + 2304u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_003ED19C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 172u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003ED19C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);  if (t) { goto L_003ED19C; } }
    c.f[1] = ld32((c.r[4].w[0] + 2324u));
    c.f[0] = ld32((c.r[2].w[0] - 15000u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[4].w[0] + 1936u);  if (t) { goto L_003ED19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED19Cu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_00DD(c, 55u, depth + 1u); else { c.pc = 0x00474934u; return; } if (c.pc != 0x003ED19Cu) [[unlikely]] return; }
L_003ED19C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003ED1A8:
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 2;
L_003ED1B0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    set32(c.r[21], ld32((c.r[22].w[0])));
    c.budget -= 13;
    { const bool t = c.r[21].d[0] == 0ull; set32(c.r[18], c.r[21].w[0] + 4u);  if (t) { goto L_003ED300; } }
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[17], c.r[19].w[0] - 20208u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 100u)));
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[3], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];
    st32((c.r[17].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[16].w[0] << 1);
    st32((c.r[17].w[0] + 100u), c.r[5].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED230u); set32(c.r[16], c.r[16].w[0] + 1u);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003ED230u) [[unlikely]] return; }
L_003ED230:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[20].w[0] + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED244u); set32(c.r[6], c.r[16].w[0] << 2);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x003ED244u) [[unlikely]] return; }
L_003ED244:
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[22].w[0])));  goto L_003ED290; }
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] + 8u);  if (t) { goto L_003ED28C; } }
    c.budget -= 1;
L_003ED270:
    c.budget -= 2;
    if (c.r[3].d[0] == c.r[21].d[0]) { st32((c.r[2].w[0] - 4u), c.r[20].w[0]);  goto L_003ED278; }
L_003ED278:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED270u | kUnwind; return; } goto L_003ED270; } }
L_003ED28C:
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.budget -= 1;
L_003ED290:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[19], c.r[19].w[0] - 20208u);  if (t) { goto L_003ED30C; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_003ED2F0; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[22].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0])));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003ED2F8; } }
L_003ED2F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED2F8u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003ED2F8u) [[unlikely]] return; }
L_003ED2F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0]), 0u);  if (t) { goto L_003ED30C; } }
L_003ED300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED308u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003ED308u) [[unlikely]] return; }
L_003ED308:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003ED30C:
    st32((c.r[22].w[0]), c.r[20].w[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003ED338:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[7], c.r[2].w[0] - 20208u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    if (c.r[16].d[0] != 0) c.r[3].d[0] = c.r[4].d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], c.r[16].w[0] << 2);
    set32(c.r[2], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[17], c.r[4].w[0] + 8u);
    c.r[2].d[0] = c.r[2].d[0] < c.r[17].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[17].w[0] << 2);  if (t) { goto L_003ED40C; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[7].w[0] + 24u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[5].w[0])));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_003ED3C8; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 60u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[7].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { goto L_003ED3D4; } }
L_003ED3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED3D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003ED3D0u) [[unlikely]] return; }
L_003ED3D0:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003ED3D4:
    set32(c.r[2], c.r[19].w[0] - 20208u);
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 28u)));
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - c.r[17].w[0]);  if (t) { goto L_003ED418; } }
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (t) { goto L_003ED418; } }
L_003ED40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED414u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 87u, depth + 1u); else { c.pc = 0x003E0EB8u; return; } if (c.pc != 0x003ED414u) [[unlikely]] return; }
L_003ED414:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_003ED418:
    set32(c.r[2], c.r[16].w[0] << 2);
    st32((c.r[6].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[6].w[0] + 4u), 0u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003ED450:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[21].w[0] - c.r[19].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[22], c.r[2].w[0] - 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 16;
    { const bool t = c.r[22].sd[0] >= 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003ED4CC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    set32(c.r[5], c.r[5].w[0] - 14992u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4A8u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED4A8u) [[unlikely]] return; }
L_003ED4A8:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 14920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4BCu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 248u, depth + 1u); else { c.pc = 0x003EEB78u; return; } if (c.pc != 0x003ED4BCu) [[unlikely]] return; }
L_003ED4BC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4CCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003ED4CCu) [[unlikely]] return; }
L_003ED4CC:
    set32(c.r[16], c.r[20].w[0] - 1u);
    set32(c.r[18], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[21].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED4E0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003ED4E0u) [[unlikely]] return; }
L_003ED4E0:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[20].w[0] << 2);
    set32(c.r[2], ld32((c.r[21].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[4].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[17], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_003ED56C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14720u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003EC000u < 16384u) { entry = entries_00BB[(t - 0x003EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003ED528:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
L_003ED538:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
L_003ED548:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
L_003ED558:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003ED588; } }
L_003ED56C:
    set32(c.r[16], c.r[19].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED580u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x003ED580u) [[unlikely]] return; }
L_003ED580:
    set32(c.r[18], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_003ED588:
    c.r[2].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { goto L_003ED5F4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[3], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 14688u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003EC000u < 16384u) { entry = entries_00BB[(t - 0x003EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003ED5B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0])));  if (t) { goto L_003ED5E8; } }
L_003ED5B8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
L_003ED5C8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 4;
L_003ED5D8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 4;
L_003ED5E8:
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { goto L_003ED60C; } }
L_003ED5F4:
    set32(c.r[16], c.r[22].w[0] << 2);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED608u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x003ED608u) [[unlikely]] return; }
L_003ED608:
    set32(c.r[17], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_003ED60C:
    st32((c.r[17].w[0]), 0u);
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003ED640:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003ED66C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003ED75C; } }
L_003ED66C:
    set32(c.r[7], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] - 1u);  if (t) { goto L_003ED754; } }
    c.r[2].d[0] = c.r[7].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ED758; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    set32(c.r[5], c.r[5].w[0] - 14520u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED6ACu); set32(c.r[20], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED6ACu) [[unlikely]] return; }
L_003ED6AC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], ld32((c.r[16].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 14640u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[6].w[0] - 14432u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED6F0u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED6F0u) [[unlikely]] return; }
L_003ED6F0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; c.r[17].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_003ED72C; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003ED710:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 14600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED720u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED720u) [[unlikely]] return; }
L_003ED720:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED710u | kUnwind; return; } goto L_003ED710; }
L_003ED72C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED73Cu); set32(c.r[5], c.r[5].w[0] - 14592u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED73Cu) [[unlikely]] return; }
L_003ED73C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED74Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003ED74Cu) [[unlikely]] return; }
L_003ED74C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003ED75C; } }
L_003ED754:
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_003ED758:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003ED75C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003ED780:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);  if (t) { goto L_003ED8A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED7B8u);  if (depth < kMaxDepth) unit_00BB(c, 156u, depth + 1u); else { c.pc = 0x003EDA18u; return; } if (c.pc != 0x003ED7B8u) [[unlikely]] return; }
L_003ED7B8:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 4;
    if (c.r[20].d[0] == c.r[2].d[0]) { set32(c.r[4], ld32((c.r[21].w[0])));  goto L_003ED834; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED7D0u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 268u, depth + 1u); else { c.pc = 0x003EEEA8u; return; } if (c.pc != 0x003ED7D0u) [[unlikely]] return; }
L_003ED7D0:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED7E8u); set32(c.r[17], c.r[17].w[0] - 14368u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003ED7E8u) [[unlikely]] return; }
L_003ED7E8:
    set32(c.r[4], ld32((c.r[16].w[0] + 48u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED7F4u); c.r[19].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003ED7F4u) [[unlikely]] return; }
L_003ED7F4:
    set32(c.r[18], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED800u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003ED800u) [[unlikely]] return; }
L_003ED800:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[21].w[0])));
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[18].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED820u); c.r[10].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003ED820u) [[unlikely]] return; }
L_003ED820:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED830u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003ED830u) [[unlikely]] return; }
L_003ED830:
    set32(c.r[4], ld32((c.r[21].w[0])));
    c.budget -= 1;
L_003ED834:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ED8A4; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[2].w[0] - 20208u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_003ED898; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[6].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[21].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[21].w[0])));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003ED8A0; } }
L_003ED898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED8A0u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003ED8A0u) [[unlikely]] return; }
L_003ED8A0:
    st32((c.r[21].w[0]), 0u);
    c.budget -= 1;
L_003ED8A4:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003ED8A8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003ED8C8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 20208u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003ED98C; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[16], c.r[3].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { goto L_003ED98C; } }
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 1;
L_003ED910:
    set32(c.r[7], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[6], c.r[19].w[0] - 20208u);  if (t) { goto L_003ED97C; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_003ED970; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[6].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003ED978; } }
L_003ED970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED978u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003ED978u) [[unlikely]] return; }
L_003ED978:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 1;
L_003ED97C:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[29].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003ED910u | kUnwind; return; } goto L_003ED910; } }
L_003ED98C:
    set32(c.r[7], ld32((c.r[18].w[0] - 20160u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull; set32(c.r[16], c.r[18].w[0] - 20160u);  if (t) { goto L_003ED9FC; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[6], c.r[16].w[0] - 48u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + 8u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_003ED9F0; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[6].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] - 20160u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003ED9F8; } }
L_003ED9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003ED9F8u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003ED9F8u) [[unlikely]] return; }
L_003ED9F8:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003ED9FC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003EDA18:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] - 20208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; c.r[19].d[0] = 0ull + 0ull;  if (t) { goto L_003EDAB8; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[3].w[0])));  goto L_003EDA5C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003EDAB8; } }
L_003EDA5C:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - 2u);  if (t) { goto L_003EDA98; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_003EDAB4; } }
L_003EDA98:
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 7;
L_003EDAB4:
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003EDAB8:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] - 20208u);  if (t) { goto L_003EDAE8; } }
    set32(c.r[2], c.r[16].w[0] - 20208u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAD4u); set32(c.r[5], c.r[5].w[0] - 14248u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDAD4u) [[unlikely]] return; }
L_003EDAD4:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDAE4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EDAE4u) [[unlikely]] return; }
L_003EDAE4:
    set32(c.r[18], c.r[16].w[0] - 20208u);
    c.budget -= 1;
L_003EDAE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003EDB30; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB08u); set32(c.r[16], c.r[16].w[0] - 14176u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EDB08u) [[unlikely]] return; }
L_003EDB08:
    set32(c.r[17], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB14u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EDB14u) [[unlikely]] return; }
L_003EDB14:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDB2Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDB2Cu) [[unlikely]] return; }
L_003EDB2C:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_003EDB30:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EDB50:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.budget -= 13;
    { const bool t = c.r[17].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EDB9C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[20], c.r[18].w[0] + 4u);
    set32(c.r[21], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[17].w[0] << 2);  if (t) { goto L_003EDC94; } }
L_003EDB9C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBB8u); set32(c.r[5], c.r[5].w[0] - 14064u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDBB8u) [[unlikely]] return; }
L_003EDBB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[19], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] - 14920u);  if (t) { goto L_003EDBE8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDBDCu); set32(c.r[22], c.r[17].w[0] << 2);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDBDCu) [[unlikely]] return; }
L_003EDBDC:
    set32(c.r[20], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[17].w[0] + 1u);  if (t) { goto L_003EDC84; } }
L_003EDBE8:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[9], c.r[18].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 14640u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[22], c.r[17].w[0] << 2);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[21], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC30u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDC30u) [[unlikely]] return; }
L_003EDC30:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EDC74; } }
    c.r[23].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_003EDC58:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[23].w[0] - 14600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC68u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDC68u) [[unlikely]] return; }
L_003EDC68:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDC58u | kUnwind; return; } goto L_003EDC58; }
L_003EDC74:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC84u); set32(c.r[5], c.r[5].w[0] - 14592u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDC84u) [[unlikely]] return; }
L_003EDC84:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDC94u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EDC94u) [[unlikely]] return; }
L_003EDC94:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[20].w[0] + c.r[22].w[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st32((c.r[2].w[0]), c.r[21].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003EDCD8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.budget -= 15;
    { const bool t = c.r[17].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EDD38; } }
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[22], c.r[19].w[0] + 4u);  if (t) { goto L_003EDD38; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[23], c.r[18].w[0] + 1u);
    set32(c.r[30], c.r[18].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[21], c.r[17].w[0] << 2);  if (t) { goto L_003EDE3C; } }
L_003EDD38:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], c.r[5].w[0] - 13992u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD58u); c.r[7].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDD58u) [[unlikely]] return; }
L_003EDD58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[20], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[19].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] - 14920u);  if (t) { goto L_003EDD8C; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 14664u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDD7Cu); set32(c.r[30], c.r[18].w[0] - c.r[17].w[0]);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDD7Cu) [[unlikely]] return; }
L_003EDD7C:
    set32(c.r[21], c.r[17].w[0] << 2);
    set32(c.r[22], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[23], c.r[18].w[0] + 1u);  if (t) { goto L_003EDE2C; } }
L_003EDD8C:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[9], c.r[19].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 14640u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[30], c.r[18].w[0] - c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[21], c.r[17].w[0] << 2);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[23], c.r[18].w[0] + 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDDD8u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDDD8u) [[unlikely]] return; }
L_003EDDD8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; c.r[17].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003EDE1C; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 4;
L_003EDE00:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], c.r[18].w[0] - 14600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE10u); set32(c.r[16], c.r[16].w[0] + 4u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDE10u) [[unlikely]] return; }
L_003EDE10:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[6], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDE00u | kUnwind; return; } goto L_003EDE00; }
L_003EDE1C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE2Cu); set32(c.r[5], c.r[5].w[0] - 14592u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDE2Cu) [[unlikely]] return; }
L_003EDE2C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE3Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EDE3Cu) [[unlikely]] return; }
L_003EDE3C:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[6], c.r[30].w[0] + 1u);
    set32(c.r[4], c.r[21].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[19].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDE64u); st32((c.r[2].w[0]), c.r[23].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 50u, depth + 1u); else { c.pc = 0x00474814u; return; } if (c.pc != 0x003EDE64u) [[unlikely]] return; }
L_003EDE64:
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
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003EDE98:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[19].w[0])));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003EDEE8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_003EDF08; }
L_003EDEE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDEF0u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 110u, depth + 1u); else { c.pc = 0x003ED1B0u; return; } if (c.pc != 0x003EDEF0u) [[unlikely]] return; }
L_003EDEF0:
    set32(c.r[3], ld32((c.r[19].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
L_003EDF08:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0; set32(c.r[18], c.r[2].w[0] - 1u);  if (t) { goto L_003EDF1C; } }
    c.r[2].d[0] = c.r[18].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_003EDF60; }
L_003EDF1C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    set32(c.r[5], c.r[5].w[0] - 14992u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF38u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EDF38u) [[unlikely]] return; }
L_003EDF38:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[19].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF4Cu); set32(c.r[5], c.r[5].w[0] - 14920u);  if (depth < kMaxDepth) unit_00BB(c, 248u, depth + 1u); else { c.pc = 0x003EEB78u; return; } if (c.pc != 0x003EDF4Cu) [[unlikely]] return; }
L_003EDF4C:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EDF5Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EDF5Cu) [[unlikely]] return; }
L_003EDF5C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003EDF60:
    set32(c.r[4], c.r[18].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[18].w[0] - c.r[20].w[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[3].w[0] + 4u);  if (t) { goto L_003EDFA4; } }
L_003EDF88:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EDF88u | kUnwind; return; } goto L_003EDF88; } }
L_003EDFA4:
    st32((c.r[4].w[0]), c.r[21].w[0]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EDFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[17].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EE050; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EE014; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_003EE034; }
L_003EE014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE01Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 110u, depth + 1u); else { c.pc = 0x003ED1B0u; return; } if (c.pc != 0x003EE01Cu) [[unlikely]] return; }
L_003EE01C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
L_003EE034:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[17].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 7;
L_003EE050:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EE068:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_003EE15C; } }
    set32(c.r[4], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != 0ull; if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[4].d[0];  if (t) { goto L_003EE0C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE0C0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003EE0C0u) [[unlikely]] return; }
L_003EE0C0:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_003EE0C4:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 9;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] - 1u);  if (t) { goto L_003EE0EC; } }
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_003EE0EC:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[19], c.r[17].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + 1u);  if (t) { goto L_003EE134; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[5].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE110u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 201u, depth + 1u); else { c.pc = 0x003EE388u; return; } if (c.pc != 0x003EE110u) [[unlikely]] return; }
L_003EE110:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE11Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 234u, depth + 1u); else { c.pc = 0x003EE990u; return; } if (c.pc != 0x003EE11Cu) [[unlikely]] return; }
L_003EE11C:
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.budget -= 6;
L_003EE134:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] <= 0; st32((c.r[3].w[0]), c.r[2].w[0]);  if (t) { goto L_003EE15C; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[4], c.r[17].w[0] << 2);
    set32(c.r[6], c.r[16].w[0] + 1u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE15Cu); set32(c.r[4], c.r[4].w[0] + 4u);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x003EE15Cu) [[unlikely]] return; }
L_003EE15C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003EE180:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EE1BC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_003EE1DC; }
L_003EE1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE1C4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 110u, depth + 1u); else { c.pc = 0x003ED1B0u; return; } if (c.pc != 0x003EE1C4u) [[unlikely]] return; }
L_003EE1C4:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
L_003EE1DC:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[2].w[0] << 2);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] - 4u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] - 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0]), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EE218:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003EE2EC; } }
    set32(c.r[10], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[16].w[0] + 4u);
    set32(c.r[2], c.r[10].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[9], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 1u);
    if (c.r[3].d[0] == 0) c.r[9].d[0] = c.r[10].d[0];
    c.r[2].d[0] = c.r[10].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EE270; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] != 0ull; set32(c.r[2], c.r[9].w[0] << 2);  if (t) { goto L_003EE288; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EE270:
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20156u)));
    set32(c.r[5], c.r[5].w[0] - 14912u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_003EE2B4; } }
L_003EE288:
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EE2C0; } }
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20156u)));
    set32(c.r[5], c.r[5].w[0] - 14824u);
    c.r[8].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 7;
L_003EE2B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE2BCu);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EE2BCu) [[unlikely]] return; }
L_003EE2BC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_003EE2C0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EE2EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 20156u)));
    set32(c.r[5], c.r[5].w[0] - 14736u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE2DCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 248u, depth + 1u); else { c.pc = 0x003EEB78u; return; } if (c.pc != 0x003EE2DCu) [[unlikely]] return; }
L_003EE2DC:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE2ECu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EE2ECu) [[unlikely]] return; }
L_003EE2EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EE300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[9].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EE378; } }
    set32(c.r[5], ld32((c.r[9].w[0])));
    set32(c.r[8], c.r[9].w[0] + 4u);
    c.r[7].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    c.budget -= 12;
L_003EE340:
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[7], c.r[7].w[0] + 4u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE340u | kUnwind; return; } goto L_003EE340; } }
    c.r[2].d[0] = c.r[3].d[0] < c.r[7].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[6].w[0] - 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE340u | kUnwind; return; } goto L_003EE340; } }
    set32(c.r[5], c.r[6].w[0] - c.r[8].w[0]);
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE378u); set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 2));  if (depth < kMaxDepth) unit_00BB(c, 162u, depth + 1u); else { c.pc = 0x003EDB50u; return; } if (c.pc != 0x003EE378u) [[unlikely]] return; }
L_003EE378:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE388:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[4].d[0] = 0ull + 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[5].d[0];
    set32(c.r[6], ld32((c.r[18].w[0])));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[6].d[0];
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE3D8u); set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003EE3D8u) [[unlikely]] return; }
L_003EE3D8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[16].w[0] << 2);
    set32(c.r[4], c.r[17].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE400u); st32((c.r[2].w[0] + 4u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_00DD(c, 40u, depth + 1u); else { c.pc = 0x0047466Cu; return; } if (c.pc != 0x003EE400u) [[unlikely]] return; }
L_003EE400:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EE420:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[8].d[0] != 0ull) { set32(c.r[2], ld32((c.r[8].w[0] + 4u)));  goto L_003EE434; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EE434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[8].w[0] + 4u);  if (t) { goto L_003EE464; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], c.r[7].w[0] + 4u);  if (t) { goto L_003EE4B8; } }
    c.budget -= 1;
L_003EE448:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003EE468; } }
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[7], c.r[7].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE448u | kUnwind; return; } goto L_003EE448; }
L_003EE464:
    set32(c.r[2], ld32((c.r[7].w[0])));
    c.budget -= 1;
L_003EE468:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u - 1u);  if (t) { goto L_003EE4B8; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[8].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_003EE498; } }
    set32(c.r[2], ld32((c.r[8].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003EE498:
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[7].w[0]), c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_003EE4B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EE4C0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EE4D4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], ld32((c.r[4].w[0])));  goto L_003EE4DC; }
L_003EE4D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EE4DC:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 4u);  if (t) { goto L_003EE518; } }
    set32(c.r[2], c.r[2].w[0] - 2u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0]), c.r[2].w[0]);  if (t) { goto L_003EE530; } }
L_003EE518:
    set32(c.r[2], c.r[5].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 6;
L_003EE530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_003EE538:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[6].w[0] << 2);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    set32(c.r[2], c.r[2].w[0] + 4u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[17], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st32((c.r[17].w[0]), c.r[2].w[0]);  if (t) { goto L_003EE590; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003EE590:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EE5AC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0])));  goto L_003EE5E8; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EE5AC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    set32(c.r[5], c.r[5].w[0] - 14992u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE5C0u); set32(c.r[4], ld32((c.r[16].w[0] + 52u)));  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EE5C0u) [[unlikely]] return; }
L_003EE5C0:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 14920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE5D4u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 248u, depth + 1u); else { c.pc = 0x003EEB78u; return; } if (c.pc != 0x003EE5D4u) [[unlikely]] return; }
L_003EE5D4:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE5E4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EE5E4u) [[unlikely]] return; }
L_003EE5E4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_003EE5E8:
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st32((c.r[19].w[0]), c.r[4].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0]), 0u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EE620:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[18].w[0])));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.budget -= 13;
    { const bool t = c.r[17].sd[0] < 0; set32(c.r[19], c.r[18].w[0] + c.r[2].w[0]);  if (t) { goto L_003EE678; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_003EE66C; } }
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EE67C; } }
L_003EE66C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 2);  if (t) { goto L_003EE6BC; } }
L_003EE678:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 1;
L_003EE67C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    set32(c.r[5], c.r[5].w[0] - 14992u);
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE694u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EE694u) [[unlikely]] return; }
L_003EE694:
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 14920u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE6A8u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 248u, depth + 1u); else { c.pc = 0x003EEB78u; return; } if (c.pc != 0x003EE6A8u) [[unlikely]] return; }
L_003EE6A8:
    set32(c.r[4], 0u + 5u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE6B8u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EE6B8u) [[unlikely]] return; }
L_003EE6B8:
    set32(c.r[2], c.r[17].w[0] << 2);
    c.budget -= 1;
L_003EE6BC:
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[3], c.r[5].w[0] + 8u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[5].w[0])));  if (t) { goto L_003EE6E0; } }
    c.budget -= 1;
L_003EE6D8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 2;
L_003EE6E0:
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE6D8u | kUnwind; return; } goto L_003EE6D8; } }
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; st32((c.r[19].w[0]), c.r[2].w[0]);  if (t) { goto L_003EE710; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003EE710:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EE730:
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[7].d[0] != 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 4u)));  goto L_003EE744; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EE744:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[3], c.r[7].w[0] + 4u);  if (t) { goto L_003EE774; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_003EE7D8; } }
    c.budget -= 1;
L_003EE758:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003EE778; } }
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE758u | kUnwind; return; } goto L_003EE758; }
L_003EE774:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_003EE778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 8u);  if (t) { goto L_003EE7D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  if (t) { goto L_003EE790; } }
L_003EE788:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_003EE790:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE788u | kUnwind; return; } goto L_003EE788; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[6], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; st32((c.r[6].w[0]), c.r[3].w[0]);  if (t) { goto L_003EE7D0; } }
    set32(c.r[2], ld32((c.r[7].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_003EE7D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[5].d[0] + 0ull;  c.pc = t; return; }
L_003EE7D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EE7E0:
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 2;
L_003EE7E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[9], c.r[4].w[0] + 4u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[10], c.r[5].w[0] + 4u);
    set32(c.r[6], ld32((c.r[4].w[0])));
    set32(c.r[7], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    if (c.r[2].d[0] == 0) c.r[8].d[0] = c.r[6].d[0];
    if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[7].d[0];
    c.budget -= 20;
    { const bool t = c.r[8].d[0] != c.r[4].d[0]; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003EE858; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; c.r[4].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003EE854; } }
    c.r[5].d[0] = c.r[10].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EE84Cu); set32(c.r[6], c.r[8].w[0] << 2);  if (depth < kMaxDepth) unit_00DD(c, 36u, depth + 1u); else { c.pc = 0x004745D8u; return; } if (c.pc != 0x003EE84Cu) [[unlikely]] return; }
L_003EE84C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003EE858; } }
L_003EE854:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003EE858:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EE868:
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_003EE884; } }
L_003EE878:
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { goto L_003EE8BC; } }
L_003EE884:
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_003EE898; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 2;
L_003EE898:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[2], ld32((c.r[6].w[0])));  if (t) { goto L_003EE8C4; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003EE8D4; } }
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 4u);  if (t) { goto L_003EE8D4; } }
L_003EE8BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EE8C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; set32(c.r[3], ld32((c.r[4].w[0])));  if (t) { goto L_003EE8D4; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 2;
L_003EE8D4:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE878u | kUnwind; return; } goto L_003EE878; }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE8BCu | kUnwind; return; } goto L_003EE8BC; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE8BCu | kUnwind; return; } goto L_003EE8BC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003EE900:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[4].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[9], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    c.r[2].d[0] = c.r[8].d[0] ^ c.r[9].d[0];
    set32(c.r[4], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[6].w[0] + 4u);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    if (c.r[2].d[0] == 0) c.r[8].d[0] = c.r[4].d[0];
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[7].d[0];
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];  if (t) { goto L_003EE980; } }
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 2;
L_003EE948:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[8].w[0] + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[5].w[0] + 4u);  if (t) { goto L_003EE960; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EE960:
    set32(c.r[3], c.r[8].w[0] + 4u);
    c.r[2].d[0] = c.r[8].d[0] ^ c.r[9].d[0];
    if (c.r[2].d[0] == 0) c.r[8].d[0] = c.r[3].d[0];
    set32(c.r[4], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[5].d[0] ^ c.r[7].d[0];
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EE948u | kUnwind; return; } goto L_003EE948; } }
L_003EE980:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_003EE990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EEA14; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[2].w[0] - 20208u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[5], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_003EEA08; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 76u)));
    set32(c.r[5], ld32((c.r[6].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], ld32((c.r[6].w[0] + 24u)));
    st32((c.r[6].w[0] + 76u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[5].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { goto L_003EEA10; } }
L_003EEA08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA10u);  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003EEA10u) [[unlikely]] return; }
L_003EEA10:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003EEA14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEA28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EEA6C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[4], ld32((c.r[3].w[0] - 20192u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[2].w[0] + 8u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    if (c.r[4].d[0] == 0ull) { ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  goto L_003EEA70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEA68u); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B8(c, 138u, depth + 1u); else { c.pc = 0x003E17E8u; return; } if (c.pc != 0x003EEA68u) [[unlikely]] return; }
L_003EEA68:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_003EEA6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EEA70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003EEA80:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EEAB4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { goto L_003EEAB4; } }
    c.budget -= 1;
L_003EEA98:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[5].d[0]) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_003EEAA8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_003EEAA8:
    c.budget -= 1;
L_003EEAAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEA98u | kUnwind; return; } goto L_003EEA98; } }
L_003EEAB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EEAC0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[7], c.r[4].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 1u);
    if (c.r[4].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003EEAFC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_003EEAF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_003EEAFC:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003EEB24; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 1;
L_003EEB08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0]; set32(c.r[4], c.r[4].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEAF4u | kUnwind; return; } goto L_003EEAF4; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEB08u | kUnwind; return; } goto L_003EEB08; }
L_003EEB24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_003EEB30:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003EEB70; } }
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003EEB64; } }
    set32(c.r[3], c.r[5].w[0] - 1u);
    c.budget -= 1;
L_003EEB54:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  c.pc = t; return; }
L_003EEB64:
    c.budget -= 1;
L_003EEB68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] - 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEB54u | kUnwind; return; } goto L_003EEB54; } }
L_003EEB70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_003EEB78:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.budget -= 10;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EEBB8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[5], c.r[5].w[0] - 14664u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEBB0u); c.r[6].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EEBB0u) [[unlikely]] return; }
L_003EEBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  if (t) { goto L_003EEC48; } }
L_003EEBB8:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[19], c.r[17].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 14640u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEBF8u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EEBF8u) [[unlikely]] return; }
L_003EEBF8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; c.r[17].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003EEC34; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 2;
L_003EEC18:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] - 14600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC28u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EEC28u) [[unlikely]] return; }
L_003EEC28:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEC18u | kUnwind; return; } goto L_003EEC18; }
L_003EEC34:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEC44u); set32(c.r[5], c.r[5].w[0] - 14592u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EEC44u) [[unlikely]] return; }
L_003EEC44:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EEC48:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EEC60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == c.r[7].d[0]; set32(c.r[3], c.r[17].w[0] + 4u);  if (t) { goto L_003EECB4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EECC8; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_003EEC98:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_003EECB8; } }
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 4u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEC98u | kUnwind; return; } goto L_003EEC98; }
L_003EECB4:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 1;
L_003EECB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (t) { goto L_003EECC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0]), c.r[6].w[0]);  if (t) { goto L_003EEDA4; } }
L_003EECC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[16], c.r[16].w[0] - 20208u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EECE0u); set32(c.r[5], c.r[5].w[0] - 14584u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EECE0u) [[unlikely]] return; }
L_003EECE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[18], ld32((c.r[16].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[6], c.r[2].w[0] - 14920u);  if (t) { goto L_003EED08; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED00u); set32(c.r[5], c.r[5].w[0] - 14664u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EED00u) [[unlikely]] return; }
L_003EED00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_003EED98; } }
L_003EED08:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[17].w[0] + 4u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 2);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 14640u);
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    if (c.r[2].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED44u); c.r[9].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EED44u) [[unlikely]] return; }
L_003EED44:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] <= 0; c.r[17].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_003EED84; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.budget -= 3;
L_003EED68:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] - 14600u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED78u); set32(c.r[17], c.r[17].w[0] + 4u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EED78u) [[unlikely]] return; }
L_003EED78:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[6], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003EED68u | kUnwind; return; } goto L_003EED68; }
L_003EED84:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EED94u); set32(c.r[5], c.r[5].w[0] - 14592u);  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EED94u) [[unlikely]] return; }
L_003EED94:
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_003EED98:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEDA4u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00BC(c, 117u, depth + 1u); else { c.pc = 0x003F27B8u; return; } if (c.pc != 0x003EEDA4u) [[unlikely]] return; }
L_003EEDA4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EEDC0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEDE0u); set32(c.r[17], c.r[16].w[0] - 20160u);  if (depth < kMaxDepth) unit_00BB(c, 116u, depth + 1u); else { c.pc = 0x003ED338u; return; } if (c.pc != 0x003EEDE0u) [[unlikely]] return; }
L_003EEDE0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[3], ld32((c.r[16].w[0] - 20160u)));  if (t) { goto L_003EEE4C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EEE10; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_003EEE30; }
L_003EEE10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 110u, depth + 1u); else { c.pc = 0x003ED1B0u; return; } if (c.pc != 0x003EEE18u) [[unlikely]] return; }
L_003EEE18:
    set32(c.r[3], ld32((c.r[16].w[0] - 20160u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
L_003EEE30:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[18].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 7;
L_003EEE4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[17], c.r[3].w[0] - 20208u);
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_003EEE90; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 48u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE74u); set32(c.r[16], c.r[16].w[0] - 14424u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EEE74u) [[unlikely]] return; }
L_003EEE74:
    set32(c.r[4], ld32((c.r[17].w[0] + 52u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[18].w[0])));
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEE8Cu); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EEE8Cu) [[unlikely]] return; }
L_003EEE8C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003EEE90:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003EEEA8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[16].w[0] - 20160u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[19].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003EEF34; } }
    set32(c.r[3], ld32((c.r[16].w[0] - 20160u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EEEF8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_003EEF18; }
L_003EEEF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 110u, depth + 1u); else { c.pc = 0x003ED1B0u; return; } if (c.pc != 0x003EEF00u) [[unlikely]] return; }
L_003EEF00:
    set32(c.r[3], ld32((c.r[16].w[0] - 20160u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
L_003EEF18:
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[19].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 7;
L_003EEF34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[18], c.r[3].w[0] - 20208u);
    set32(c.r[2], ld32((c.r[18].w[0] + 56u)));
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[2].d[0] != 0ull) { ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);  goto L_003EEF84; }
    set32(c.r[4], ld32((c.r[18].w[0] + 48u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF5Cu); set32(c.r[16], c.r[16].w[0] - 14120u);  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EEF5Cu) [[unlikely]] return; }
L_003EEF5C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF68u); c.r[4].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 136u, depth + 1u); else { c.pc = 0x003ED640u; return; } if (c.pc != 0x003EEF68u) [[unlikely]] return; }
L_003EEF68:
    set32(c.r[4], ld32((c.r[18].w[0] + 52u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EEF80u); c.r[8].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B6(c, 226u, depth + 1u); else { c.pc = 0x003DBD58u; return; } if (c.pc != 0x003EEF80u) [[unlikely]] return; }
L_003EEF80:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003EEF84:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003EEFA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003EEFEC; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 8u);  if (t) { goto L_003EEFEC; } }
    c.budget -= 1;
L_003EEFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_003EEFF0; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003EEFD0u | kUnwind; return; } goto L_003EEFD0; } }
L_003EEFEC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003EEFF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_003EF068; }
    c.budget -= 2;
    if (c.r[17].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_003EF068; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003EF028; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[5].w[0])));  goto L_003EF048; }
L_003EF028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003EF030u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00BB(c, 110u, depth + 1u); else { c.pc = 0x003ED1B0u; return; } if (c.pc != 0x003EF030u) [[unlikely]] return; }
L_003EF030:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
L_003EF048:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[4].w[0]), c.r[17].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
L_003EF068:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003EF080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 57u);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 2896u)));
    set32(c.r[7], c.r[2].w[0] + 876u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 13904u);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[10], 0u + 139u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 2896u), c.r[6].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1336u), c.r[4].w[0]);
    set32(c.r[12], 0u + 1u);
    st16((c.r[2].w[0] + 2098u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0] + 2479u), static_cast<std::uint8_t>(0u));
    set32(c.r[13], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[8], 0u + 140u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 1664u), 0u);
    set32(c.r[3], c.r[3].w[0] - 13880u);
    st16((c.r[2].w[0] + 2262u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[11], c.r[6].w[0] + 2u);
    st8((c.r[2].w[0] + 2561u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], 0u + 139u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], 0u + 6u);
    st32((c.r[2].w[0] + 1668u), c.r[3].w[0]);
    set32(c.r[10], c.r[11].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[11].w[0]);
    set32(c.r[8], 0u + 141u);
    st16((c.r[2].w[0] + 2264u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 2562u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 3u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13824u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1672u), c.r[3].w[0]);
    set32(c.r[10], 0u + 7u);
    st8((c.r[2].w[0] + 2563u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[4], 0u + 207u);
    st16((c.r[2].w[0] + 2266u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13776u);
    set32(c.r[4], c.r[6].w[0] + 4u);
    st32((c.r[2].w[0] + 1936u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 2629u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[5], 0u + 208u);
    st16((c.r[2].w[0] + 2398u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 5u);
    set32(c.r[11], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] - 13728u);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 1940u), c.r[3].w[0]);
    set32(c.r[5], 0u + 129u);
    st8((c.r[2].w[0] + 2630u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[4], c.r[6].w[0] + 6u);
    st16((c.r[2].w[0] + 2400u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13680u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1624u), c.r[3].w[0]);
    set32(c.r[8], 0u + 58u);
    st8((c.r[2].w[0] + 2551u), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 2900u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 13632u);
    st16((c.r[2].w[0] + 2242u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[6].w[0] + 7u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[11], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1340u), c.r[3].w[0]);
    set32(c.r[8], 0u + 33u);
    st32((c.r[2].w[0] + 2896u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2100u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13576u);
    st8((c.r[2].w[0] + 2480u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[6].w[0] + 8u);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1240u), c.r[3].w[0]);
    set32(c.r[5], 0u + 23u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2050u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13544u);
    st8((c.r[2].w[0] + 2455u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[6].w[0] + 9u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1200u), c.r[3].w[0]);
    set32(c.r[5], 0u + 79u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2030u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13512u);
    st8((c.r[2].w[0] + 2445u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[6].w[0] + 10u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1424u), c.r[3].w[0]);
    set32(c.r[5], 0u + 30u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2142u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13496u);
    st8((c.r[2].w[0] + 2501u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[6].w[0] + 11u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1228u), c.r[3].w[0]);
    set32(c.r[5], 0u + 32u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2044u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13448u);
    st8((c.r[2].w[0] + 2452u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[6].w[0] + 12u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1236u), c.r[3].w[0]);
    set32(c.r[5], 0u + 131u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2048u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13408u);
    st8((c.r[2].w[0] + 2454u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[6].w[0] + 13u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1632u), c.r[3].w[0]);
    set32(c.r[5], 0u + 133u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2246u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13344u);
    st8((c.r[2].w[0] + 2553u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[6].w[0] + 14u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1640u), c.r[3].w[0]);
    set32(c.r[5], 0u + 14u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2250u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13296u);
    st8((c.r[2].w[0] + 2555u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[6].w[0] + 15u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1164u), c.r[3].w[0]);
    set32(c.r[5], 0u + 94u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2012u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13256u);
    st8((c.r[2].w[0] + 2436u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[6].w[0] + 16u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1484u), c.r[3].w[0]);
    set32(c.r[5], 0u + 132u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2172u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[6], c.r[6].w[0] + 17u);
    st8((c.r[2].w[0] + 2516u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13208u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2554u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[2].w[0] + 2896u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 1636u), c.r[3].w[0]);
    c.budget -= 190;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[2].w[0] + 2248u), static_cast<std::uint16_t>(c.r[9].w[0]));  c.pc = t; return; }
L_003EF378:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    set32(c.r[7], c.r[2].w[0] + 876u);
    set32(c.r[5], 0u + 56u);
    set32(c.r[6], ld32((c.r[2].w[0] + 2896u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 13176u);
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], 0u + 212u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 2896u), c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1332u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2096u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13152u);
    st8((c.r[2].w[0] + 2478u), static_cast<std::uint8_t>(0u));
    set32(c.r[12], 0u + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[6].w[0] + 1u);
    st32((c.r[2].w[0] + 1956u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 148u);
    st8((c.r[2].w[0] + 2634u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2408u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13120u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 2u);
    st32((c.r[2].w[0] + 1700u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 143u);
    st8((c.r[2].w[0] + 2570u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2280u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13088u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 3u);
    st32((c.r[2].w[0] + 1680u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 144u);
    st8((c.r[2].w[0] + 2565u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2270u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 13040u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 4u);
    st32((c.r[2].w[0] + 1684u), c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[10], 0u + 152u);
    st8((c.r[2].w[0] + 2566u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2272u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[6].w[0] + 5u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12992u);
    st32((c.r[2].w[0] + 1716u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] + 6u);
    st8((c.r[2].w[0] + 2574u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2288u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12960u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[13], 0u + 2u);
    st32((c.r[2].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[16], 0u + 148u);
    st32((c.r[2].w[0] + 1716u), c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    st16((c.r[2].w[0] + 2288u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[4], 0u + 109u);
    st8((c.r[2].w[0] + 2574u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12920u);
    st32((c.r[2].w[0] + 1544u), c.r[3].w[0]);
    set32(c.r[14], 0u + 3u);
    set32(c.r[4], c.r[6].w[0] + 7u);
    st8((c.r[2].w[0] + 2531u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st16((c.r[2].w[0] + 2202u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[5], 0u + 151u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] - 12888u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1712u), c.r[3].w[0]);
    set32(c.r[5], 0u + 106u);
    st16((c.r[2].w[0] + 2286u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[6].w[0] + 9u);
    st8((c.r[2].w[0] + 2573u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[11], c.r[11].w[0] - 12848u);
    st32((c.r[2].w[0] + 2896u), c.r[3].w[0]);
    set32(c.r[8], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1532u), c.r[11].w[0]);
    set32(c.r[5], 0u + 153u);
    st8((c.r[2].w[0] + 2528u), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2196u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12816u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 10u);
    st32((c.r[2].w[0] + 1720u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 111u);
    st16((c.r[2].w[0] + 2290u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 2575u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[4], c.r[6].w[0] + 11u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12776u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1552u), c.r[3].w[0]);
    set32(c.r[8], 0u + 155u);
    st8((c.r[2].w[0] + 2533u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[4], 0u + 212u);
    st16((c.r[2].w[0] + 2206u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[5], c.r[6].w[0] + 12u);
    st16((c.r[2].w[0] + 2294u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12744u);
    st32((c.r[2].w[0] + 1728u), c.r[3].w[0]);
    set32(c.r[8], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[4], 0u + 112u);
    st8((c.r[2].w[0] + 2577u), static_cast<std::uint8_t>(c.r[13].w[0]));
    set32(c.r[3], c.r[6].w[0] + 13u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[10], c.r[3].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[3].w[0]);
    set32(c.r[5], 0u + 34u);
    st32((c.r[2].w[0] + 1556u), c.r[11].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 2534u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12704u);
    st16((c.r[2].w[0] + 2208u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[15], 0u + 6u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 14u);
    st32((c.r[2].w[0] + 1244u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 199u);
    st16((c.r[2].w[0] + 2052u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 2456u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12664u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 15u);
    st32((c.r[2].w[0] + 1904u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 191u);
    st8((c.r[2].w[0] + 2621u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2382u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12632u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 16u);
    st32((c.r[2].w[0] + 1872u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 198u);
    st8((c.r[2].w[0] + 2613u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2366u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12600u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 17u);
    st32((c.r[2].w[0] + 1900u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 168u);
    st8((c.r[2].w[0] + 2620u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2380u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12568u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 18u);
    st32((c.r[2].w[0] + 1780u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 150u);
    st8((c.r[2].w[0] + 2590u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2320u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12536u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 19u);
    st32((c.r[2].w[0] + 1708u), c.r[3].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st16((c.r[2].w[0] + 2284u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[5], 0u + 149u);
    st8((c.r[2].w[0] + 2572u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 12496u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 20u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 1704u), c.r[3].w[0]);
    set32(c.r[11], 0u + 4u);
    st8((c.r[2].w[0] + 2571u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[3], c.r[6].w[0] + 21u);
    st16((c.r[2].w[0] + 2282u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[13], c.r[3].w[0] + c.r[7].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 2896u), c.r[3].w[0]);
    set32(c.r[8], c.r[6].w[0] + 22u);
    st8((c.r[2].w[0] + 2425u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[4].w[0] - 12448u);
    st32((c.r[2].w[0] + 1120u), 0u);
    set32(c.r[5], 0u + 3u);
    st16((c.r[2].w[0] + 1990u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[12], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[10], 0u + 5u);
    st32((c.r[2].w[0] + 2896u), c.r[8].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 1124u), c.r[4].w[0]);
    set32(c.r[14], 0u + 7u);
    st16((c.r[2].w[0] + 1992u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12392u);
    st8((c.r[2].w[0] + 2426u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[5], c.r[6].w[0] + 23u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[8], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 1128u), c.r[3].w[0]);
    set32(c.r[10], 0u + 8u);
    st16((c.r[2].w[0] + 1994u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[5], c.r[6].w[0] + 24u);
    st8((c.r[2].w[0] + 2427u), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[4], c.r[4].w[0] - 12328u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[11], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 1132u), c.r[4].w[0]);
    set32(c.r[8], c.r[6].w[0] + 25u);
    st16((c.r[2].w[0] + 1996u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12264u);
    st8((c.r[2].w[0] + 2428u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[13], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[12], 0u + 9u);
    st32((c.r[2].w[0] + 2896u), c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 1140u), c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] + 26u);
    st8((c.r[2].w[0] + 2430u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[4], c.r[4].w[0] - 12240u);
    st16((c.r[2].w[0] + 2000u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[8], 0u + 10u);
    st32((c.r[2].w[0] + 1144u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 27u);
    st16((c.r[2].w[0] + 2002u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 12216u);
    st8((c.r[2].w[0] + 2431u), static_cast<std::uint8_t>(c.r[14].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[2].w[0] + 2432u), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0] + 2896u), c.r[6].w[0]);
    st32((c.r[2].w[0] + 1148u), c.r[3].w[0]);
    st16((c.r[2].w[0] + 2004u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 291;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EF808:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] - 20104u);
    set32(c.r[7], c.r[3].w[0] + 876u);
    set32(c.r[5], 0u + 64u);
    set32(c.r[6], ld32((c.r[3].w[0] + 2896u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[9], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] - 12192u);
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[8], 0u + 170u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0] + 2896u), c.r[6].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 1364u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[3].w[0] + 2112u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] - 12168u);
    st8((c.r[3].w[0] + 2486u), static_cast<std::uint8_t>(0u));
    set32(c.r[12], 0u + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], c.r[6].w[0] + 1u);
    st32((c.r[3].w[0] + 1788u), c.r[2].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], 0u + 176u);
    st16((c.r[3].w[0] + 2324u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[3].w[0] + 2592u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[2], c.r[2].w[0] - 12144u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 2u);
    st32((c.r[3].w[0] + 1812u), c.r[2].w[0]);
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[8], 0u + 177u);
    st16((c.r[3].w[0] + 2336u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[3].w[0] + 2598u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[2], c.r[2].w[0] - 12104u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[4], 0u + 7u);
    st32((c.r[3].w[0] + 1816u), c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] + 3u);
    st8((c.r[3].w[0] + 2599u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[8], c.r[5].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[4], 0u + 110u);
    st16((c.r[3].w[0] + 2338u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] - 12080u);
    st32((c.r[3].w[0] + 1548u), c.r[2].w[0]);
    set32(c.r[16], 0u + 3u);
    set32(c.r[4], c.r[6].w[0] + 4u);
    st8((c.r[3].w[0] + 2532u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st16((c.r[3].w[0] + 2204u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[5], 0u + 200u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[13], 0u + 170u);
    set32(c.r[4], c.r[6].w[0] + 5u);
    set32(c.r[2], c.r[2].w[0] - 12048u);
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 1908u), c.r[2].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[7].w[0]);
    st16((c.r[3].w[0] + 2384u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[5], 0u + 100u);
    st8((c.r[3].w[0] + 2622u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[4], c.r[6].w[0] + 6u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 12008u);
    st32((c.r[3].w[0] + 1508u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    st16((c.r[3].w[0] + 2184u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[5], 0u + 213u);
    st8((c.r[3].w[0] + 2522u), static_cast<std::uint8_t>(c.r[12].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[15], 0u + 2u);
    set32(c.r[4], c.r[6].w[0] + 7u);
    set32(c.r[2], c.r[2].w[0] - 11952u);
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 1960u), c.r[2].w[0]);
    set32(c.r[5], 0u + 214u);
    st16((c.r[3].w[0] + 2410u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[2], c.r[6].w[0] + 8u);
    st8((c.r[3].w[0] + 2635u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] - 11912u);
    st32((c.r[3].w[0] + 2896u), c.r[2].w[0]);
    set32(c.r[10], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 1964u), c.r[8].w[0]);
    set32(c.r[5], 0u + 215u);
    st8((c.r[3].w[0] + 2636u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[3].w[0] + 2412u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[2], c.r[2].w[0] - 11896u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[6].w[0] + 9u);
    st32((c.r[3].w[0] + 1968u), c.r[2].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[2], 0u + 216u);
    st16((c.r[3].w[0] + 2414u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[4], c.r[6].w[0] + 10u);
    st8((c.r[3].w[0] + 2637u), static_cast<std::uint8_t>(c.r[15].w[0]));
    set32(c.r[11], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[10], 0u + 194u);
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 1972u), c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + 11u);
    st8((c.r[3].w[0] + 2638u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 11856u);
    st16((c.r[3].w[0] + 2416u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[14], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[8], 0u + 137u);
    st32((c.r[3].w[0] + 2896u), c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 1884u), c.r[2].w[0]);
    set32(c.r[5], c.r[6].w[0] + 12u);
    st16((c.r[3].w[0] + 2372u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[4], c.r[4].w[0] - 11816u);
    st8((c.r[3].w[0] + 2616u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[11], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[10], 0u + 138u);
    st32((c.r[3].w[0] + 1656u), c.r[4].w[0]);
    set32(c.r[8], c.r[6].w[0] + 13u);
    st8((c.r[3].w[0] + 2559u), static_cast<std::uint8_t>(c.r[15].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11776u);
    st16((c.r[3].w[0] + 2258u), static_cast<std::uint16_t>(c.r[13].w[0]));
    set32(c.r[14], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[5], 0u + 135u);
    st32((c.r[3].w[0] + 2896u), c.r[8].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 1660u), c.r[2].w[0]);
    set32(c.r[11], 0u + 6u);
    st8((c.r[3].w[0] + 2560u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[2], c.r[6].w[0] + 14u);
    st16((c.r[3].w[0] + 2260u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[4].w[0] - 11736u);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[10], c.r[2].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 2896u), c.r[2].w[0]);
    set32(c.r[5], 0u + 136u);
    st32((c.r[3].w[0] + 1648u), c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + 15u);
    st16((c.r[3].w[0] + 2254u), static_cast<std::uint16_t>(c.r[13].w[0]));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[3].w[0] + 2557u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[13], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[8], c.r[8].w[0] - 11704u);
    st32((c.r[3].w[0] + 2896u), c.r[2].w[0]);
    set32(c.r[5], 0u + 166u);
    st32((c.r[3].w[0] + 1652u), c.r[8].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[3].w[0] + 2558u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[4], c.r[6].w[0] + 16u);
    st16((c.r[3].w[0] + 2256u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[14], 0u + 165u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] - 11680u);
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[10], c.r[4].w[0] + c.r[7].w[0]);
    st32((c.r[3].w[0] + 1772u), c.r[2].w[0]);
    set32(c.r[5], 0u + 167u);
    st16((c.r[3].w[0] + 2316u), static_cast<std::uint16_t>(c.r[14].w[0]));
    set32(c.r[4], c.r[6].w[0] + 17u);
    st8((c.r[3].w[0] + 2588u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[13], c.r[4].w[0] + c.r[7].w[0]);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] + 18u);
    st32((c.r[3].w[0] + 1776u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11648u);
    st8((c.r[3].w[0] + 2589u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[15], c.r[5].w[0] + c.r[7].w[0]);
    st16((c.r[3].w[0] + 2318u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[10], 0u + 190u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[8], c.r[6].w[0] + 19u);
    st32((c.r[3].w[0] + 1768u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11624u);
    st16((c.r[3].w[0] + 2314u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[13], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2587u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[11], 0u + 47u);
    st8((c.r[15].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 1868u), c.r[4].w[0]);
    set32(c.r[5], c.r[6].w[0] + 20u);
    st32((c.r[3].w[0] + 2896u), c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11576u);
    st16((c.r[3].w[0] + 2364u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[14], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2612u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[10], 0u + 142u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[8], c.r[6].w[0] + 21u);
    st32((c.r[3].w[0] + 1296u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11528u);
    st16((c.r[3].w[0] + 2078u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[13], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2469u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[11], 0u + 147u);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + 22u);
    st32((c.r[3].w[0] + 1676u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11472u);
    st16((c.r[3].w[0] + 2268u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[14], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2564u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[10], 0u + 145u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[8], c.r[6].w[0] + 23u);
    st32((c.r[3].w[0] + 1696u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11432u);
    st16((c.r[3].w[0] + 2278u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[13], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2569u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[11], 0u + 146u);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + 24u);
    st32((c.r[3].w[0] + 1688u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11392u);
    st16((c.r[3].w[0] + 2274u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[14], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2567u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[10], 0u + 95u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[8], c.r[6].w[0] + 25u);
    st32((c.r[3].w[0] + 1692u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11344u);
    st16((c.r[3].w[0] + 2276u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[13], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2568u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[11], 0u + 154u);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + 26u);
    st32((c.r[3].w[0] + 1488u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11320u);
    st16((c.r[3].w[0] + 2174u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[14], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2517u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[10], 0u + 54u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 1724u), c.r[2].w[0]);
    set32(c.r[8], c.r[6].w[0] + 27u);
    st32((c.r[3].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11280u);
    st16((c.r[3].w[0] + 2292u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[13], c.r[8].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2576u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[11], 0u + 193u);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 2896u), c.r[8].w[0]);
    set32(c.r[5], c.r[6].w[0] + 28u);
    st32((c.r[3].w[0] + 1324u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 11240u);
    st16((c.r[3].w[0] + 2092u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[5].w[0] + c.r[7].w[0]);
    st8((c.r[3].w[0] + 2476u), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[8], 0u + 18u);
    st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[3].w[0] + 1880u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 29u);
    st32((c.r[3].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] - 11200u);
    st16((c.r[3].w[0] + 2370u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[2], 0u + 193u);
    st8((c.r[3].w[0] + 2615u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[3].w[0] + 2440u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[3].w[0] + 2896u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 1180u), c.r[4].w[0]);
    st16((c.r[3].w[0] + 2020u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 313;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003EFCF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 20104u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    set32(c.r[6], c.r[2].w[0] + 876u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[7], 0u + 59u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    set32(c.r[9], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    set32(c.r[4], c.r[4].w[0] - 11168u);
    st128((c.r[29].w[0]) & ~15u, c.r[22]);
    set32(c.r[8], 0u + 45u);
    set32(c.r[19], 0u + 2u);
    set32(c.r[22], 0u + 3u);
    set32(c.r[5], ld32((c.r[2].w[0] + 2896u)));
    set32(c.r[11], 0u + 1u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    set32(c.r[12], 0u + 80u);
    set32(c.r[3], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[16], c.r[16].w[0] - 11016u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[2].w[0] + 2896u), c.r[5].w[0]);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1344u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2102u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[5].w[0] + 1u);
    st8((c.r[2].w[0] + 2481u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 11112u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.r[15].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1288u), c.r[3].w[0]);
    set32(c.r[7], 0u + 46u);
    st8((c.r[2].w[0] + 2467u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], c.r[5].w[0] + 2u);
    st16((c.r[2].w[0] + 2074u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[3].w[0] - 11088u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[7], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1292u), c.r[3].w[0]);
    set32(c.r[4], 0u + 80u);
    st8((c.r[2].w[0] + 2468u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2076u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 11040u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[15], c.r[15].w[0] - 10992u);
    set32(c.r[4], c.r[5].w[0] + 3u);
    st32((c.r[2].w[0] + 1428u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[8], c.r[4].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0] + 2144u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[7], 0u + 82u);
    st8((c.r[2].w[0] + 2502u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[3], c.r[5].w[0] + 4u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[4], 0u + 81u);
    st32((c.r[2].w[0] + 2896u), c.r[3].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1436u), c.r[16].w[0]);
    set32(c.r[3], c.r[5].w[0] + 5u);
    st16((c.r[2].w[0] + 2148u), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[8], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0] + 2504u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[17], 0u + 89u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[13].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st32((c.r[2].w[0] + 2896u), c.r[3].w[0]);
    set32(c.r[7], 0u + 83u);
    st32((c.r[2].w[0] + 1432u), c.r[15].w[0]);
    set32(c.r[4], c.r[5].w[0] + 6u);
    st8((c.r[2].w[0] + 2503u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2146u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[3], c.r[3].w[0] - 10968u);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[10], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[7], 0u + 89u);
    st32((c.r[2].w[0] + 1440u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2150u), static_cast<std::uint16_t>(c.r[12].w[0]));
    set32(c.r[3], c.r[5].w[0] + 7u);
    st8((c.r[2].w[0] + 2505u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[4], c.r[4].w[0] - 10944u);
    st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 2896u), c.r[3].w[0]);
    set32(c.r[7], 0u + 91u);
    st32((c.r[2].w[0] + 1464u), c.r[4].w[0]);
    set32(c.r[10], 0u + 90u);
    st16((c.r[2].w[0] + 2162u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[5].w[0] + 8u);
    st8((c.r[2].w[0] + 2511u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[12], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[8].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], c.r[5].w[0] + 9u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[14], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1472u), c.r[16].w[0]);
    set32(c.r[7], 0u + 92u);
    st16((c.r[2].w[0] + 2166u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[4], c.r[5].w[0] + 10u);
    st8((c.r[2].w[0] + 2513u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[13], c.r[13].w[0] - 10920u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[8], 0u + 93u);
    st32((c.r[2].w[0] + 2896u), c.r[3].w[0]);
    set32(c.r[12], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1468u), c.r[15].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 2512u), static_cast<std::uint8_t>(c.r[22].w[0]));
    set32(c.r[3], c.r[3].w[0] - 10896u);
    st16((c.r[2].w[0] + 2164u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[10], 0u + 85u);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[20], 0u + 85u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[7], c.r[5].w[0] + 11u);
    st16((c.r[2].w[0] + 2168u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[14], c.r[7].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1476u), c.r[13].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 2514u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[4], c.r[4].w[0] - 10864u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[17], 0u + 88u);
    st32((c.r[2].w[0] + 2896u), c.r[7].w[0]);
    set32(c.r[8], c.r[5].w[0] + 12u);
    st32((c.r[2].w[0] + 1480u), c.r[3].w[0]);
    set32(c.r[12], c.r[8].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0] + 2170u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[7], 0u + 87u);
    st8((c.r[2].w[0] + 2515u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[3], c.r[5].w[0] + 13u);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    st32((c.r[2].w[0] + 2896u), c.r[8].w[0]);
    set32(c.r[14], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1448u), c.r[4].w[0]);
    set32(c.r[10], 0u + 86u);
    st16((c.r[2].w[0] + 2154u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[4], c.r[5].w[0] + 14u);
    st8((c.r[2].w[0] + 2507u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[18], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[8], c.r[5].w[0] + 16u);
    st32((c.r[2].w[0] + 2896u), c.r[3].w[0]);
    set32(c.r[7], c.r[5].w[0] + 15u);
    st32((c.r[2].w[0] + 1456u), c.r[16].w[0]);
    set32(c.r[21], c.r[7].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0] + 2509u), static_cast<std::uint8_t>(c.r[19].w[0]));
    set32(c.r[12], 0u + 160u);
    st16((c.r[2].w[0] + 2158u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[14].w[0]), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[3], c.r[3].w[0] - 10840u);
    st32((c.r[2].w[0] + 2896u), c.r[4].w[0]);
    set32(c.r[19], c.r[8].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1452u), c.r[15].w[0]);
    set32(c.r[14], 0u + 157u);
    st8((c.r[2].w[0] + 2508u), static_cast<std::uint8_t>(c.r[22].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st16((c.r[2].w[0] + 2156u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[10], c.r[5].w[0] + 17u);
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[4], c.r[4].w[0] - 10800u);
    st32((c.r[2].w[0] + 2896u), c.r[7].w[0]);
    set32(c.r[18], c.r[10].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0] + 1460u), c.r[13].w[0]);
    set32(c.r[15], 0u + 159u);
    st16((c.r[2].w[0] + 2160u), static_cast<std::uint16_t>(c.r[20].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 2510u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[7], c.r[7].w[0] - 10752u);
    st8((c.r[21].w[0]), static_cast<std::uint8_t>(c.r[12].w[0]));
    set32(c.r[16], 0u + 161u);
    st32((c.r[2].w[0] + 2896u), c.r[8].w[0]);
    set32(c.r[12], c.r[5].w[0] + 18u);
    st32((c.r[2].w[0] + 1748u), c.r[3].w[0]);
    set32(c.r[20], c.r[12].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0] + 2304u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005A0000u);
    st8((c.r[2].w[0] + 2582u), static_cast<std::uint8_t>(c.r[11].w[0]));
    set32(c.r[13], c.r[5].w[0] + 19u);
    st8((c.r[19].w[0]), static_cast<std::uint8_t>(c.r[14].w[0]));
    set32(c.r[3], c.r[3].w[0] - 10696u);
    st32((c.r[2].w[0] + 2896u), c.r[10].w[0]);
    c.budget -= 196;
    [[clang::musttail]] return unit_00BC(c, 1u, depth);
}

}
