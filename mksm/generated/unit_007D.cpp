#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007D[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0,
    0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205,
    0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0,
    0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 301, 0,
};

void unit_007D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F4000;
    case 2u: goto L_002F4010;
    case 3u: goto L_002F4028;
    case 4u: goto L_002F4050;
    case 5u: goto L_002F4058;
    case 6u: goto L_002F4060;
    case 7u: goto L_002F4080;
    case 8u: goto L_002F4088;
    case 9u: goto L_002F4090;
    case 10u: goto L_002F40C0;
    case 11u: goto L_002F4138;
    case 12u: goto L_002F4148;
    case 13u: goto L_002F415C;
    case 14u: goto L_002F416C;
    case 15u: goto L_002F4188;
    case 16u: goto L_002F4190;
    case 17u: goto L_002F4198;
    case 18u: goto L_002F41A8;
    case 19u: goto L_002F41D8;
    case 20u: goto L_002F41F0;
    case 21u: goto L_002F4200;
    case 22u: goto L_002F4234;
    case 23u: goto L_002F4244;
    case 24u: goto L_002F4248;
    case 25u: goto L_002F4254;
    case 26u: goto L_002F426C;
    case 27u: goto L_002F4290;
    case 28u: goto L_002F42B8;
    case 29u: goto L_002F42DC;
    case 30u: goto L_002F42E8;
    case 31u: goto L_002F42F8;
    case 32u: goto L_002F430C;
    case 33u: goto L_002F4318;
    case 34u: goto L_002F4340;
    case 35u: goto L_002F4370;
    case 36u: goto L_002F43B8;
    case 37u: goto L_002F440C;
    case 38u: goto L_002F4434;
    case 39u: goto L_002F4474;
    case 40u: goto L_002F4480;
    case 41u: goto L_002F448C;
    case 42u: goto L_002F44A0;
    case 43u: goto L_002F44C8;
    case 44u: goto L_002F4500;
    case 45u: goto L_002F4540;
    case 46u: goto L_002F4570;
    case 47u: goto L_002F45A0;
    case 48u: goto L_002F45E8;
    case 49u: goto L_002F4604;
    case 50u: goto L_002F460C;
    case 51u: goto L_002F4638;
    case 52u: goto L_002F4678;
    case 53u: goto L_002F4680;
    case 54u: goto L_002F4694;
    case 55u: goto L_002F46C0;
    case 56u: goto L_002F46F0;
    case 57u: goto L_002F4738;
    case 58u: goto L_002F4754;
    case 59u: goto L_002F475C;
    case 60u: goto L_002F4788;
    case 61u: goto L_002F47C0;
    case 62u: goto L_002F47F0;
    case 63u: goto L_002F4838;
    case 64u: goto L_002F4870;
    case 65u: goto L_002F4888;
    case 66u: goto L_002F4898;
    case 67u: goto L_002F48BC;
    case 68u: goto L_002F48D0;
    case 69u: goto L_002F48F8;
    case 70u: goto L_002F4928;
    case 71u: goto L_002F4970;
    case 72u: goto L_002F498C;
    case 73u: goto L_002F49B0;
    case 74u: goto L_002F49D0;
    case 75u: goto L_002F49D8;
    case 76u: goto L_002F49E0;
    case 77u: goto L_002F49E8;
    case 78u: goto L_002F4A00;
    case 79u: goto L_002F4A90;
    case 80u: goto L_002F4AC8;
    case 81u: goto L_002F4ADC;
    case 82u: goto L_002F4AF0;
    case 83u: goto L_002F4BA8;
    case 84u: goto L_002F4BE0;
    case 85u: goto L_002F4C4C;
    case 86u: goto L_002F4C80;
    case 87u: goto L_002F4CB4;
    case 88u: goto L_002F4CE0;
    case 89u: goto L_002F4D00;
    case 90u: goto L_002F4D44;
    case 91u: goto L_002F4D4C;
    case 92u: goto L_002F4DB8;
    case 93u: goto L_002F4DEC;
    case 94u: goto L_002F4E40;
    case 95u: goto L_002F4E6C;
    case 96u: goto L_002F4E80;
    case 97u: goto L_002F4E88;
    case 98u: goto L_002F4EC0;
    case 99u: goto L_002F4FB4;
    case 100u: goto L_002F4FD0;
    case 101u: goto L_002F5060;
    case 102u: goto L_002F50B4;
    case 103u: goto L_002F50D8;
    case 104u: goto L_002F5128;
    case 105u: goto L_002F5160;
    case 106u: goto L_002F5200;
    case 107u: goto L_002F522C;
    case 108u: goto L_002F52A8;
    case 109u: goto L_002F5318;
    case 110u: goto L_002F5330;
    case 111u: goto L_002F5368;
    case 112u: goto L_002F5408;
    case 113u: goto L_002F5434;
    case 114u: goto L_002F54B0;
    case 115u: goto L_002F5518;
    case 116u: goto L_002F5560;
    case 117u: goto L_002F5610;
    case 118u: goto L_002F5704;
    case 119u: goto L_002F5730;
    case 120u: goto L_002F57AC;
    case 121u: goto L_002F57E0;
    case 122u: goto L_002F58A0;
    case 123u: goto L_002F5914;
    case 124u: goto L_002F5930;
    case 125u: goto L_002F5980;
    case 126u: goto L_002F5A3C;
    case 127u: goto L_002F5B30;
    case 128u: goto L_002F5B60;
    case 129u: goto L_002F5BDC;
    case 130u: goto L_002F5C10;
    case 131u: goto L_002F5CC8;
    case 132u: goto L_002F5D68;
    case 133u: goto L_002F5D8C;
    case 134u: goto L_002F5D9C;
    case 135u: goto L_002F5DB0;
    case 136u: goto L_002F5DC0;
    case 137u: goto L_002F5E28;
    case 138u: goto L_002F5EE0;
    case 139u: goto L_002F5F30;
    case 140u: goto L_002F5F60;
    case 141u: goto L_002F5F8C;
    case 142u: goto L_002F5F9C;
    case 143u: goto L_002F5FAC;
    case 144u: goto L_002F5FC8;
    case 145u: goto L_002F5FDC;
    case 146u: goto L_002F5FF0;
    case 147u: goto L_002F6000;
    case 148u: goto L_002F6034;
    case 149u: goto L_002F6058;
    case 150u: goto L_002F6070;
    case 151u: goto L_002F60EC;
    case 152u: goto L_002F611C;
    case 153u: goto L_002F6150;
    case 154u: goto L_002F6264;
    case 155u: goto L_002F6298;
    case 156u: goto L_002F62F8;
    case 157u: goto L_002F6338;
    case 158u: goto L_002F6370;
    case 159u: goto L_002F6474;
    case 160u: goto L_002F64A8;
    case 161u: goto L_002F6518;
    case 162u: goto L_002F6548;
    case 163u: goto L_002F6578;
    case 164u: goto L_002F669C;
    case 165u: goto L_002F66D0;
    case 166u: goto L_002F674C;
    case 167u: goto L_002F6788;
    case 168u: goto L_002F67C8;
    case 169u: goto L_002F6838;
    case 170u: goto L_002F6870;
    case 171u: goto L_002F6908;
    case 172u: goto L_002F6A08;
    case 173u: goto L_002F6A24;
    case 174u: goto L_002F6A90;
    case 175u: goto L_002F6AB4;
    case 176u: goto L_002F6AC8;
    case 177u: goto L_002F6AE0;
    case 178u: goto L_002F6AF4;
    case 179u: goto L_002F6B08;
    case 180u: goto L_002F6B30;
    case 181u: goto L_002F6B40;
    case 182u: goto L_002F6B50;
    case 183u: goto L_002F6B68;
    case 184u: goto L_002F6B78;
    case 185u: goto L_002F6B90;
    case 186u: goto L_002F6BA0;
    case 187u: goto L_002F6BE0;
    case 188u: goto L_002F6C08;
    case 189u: goto L_002F6C7C;
    case 190u: goto L_002F6CB8;
    case 191u: goto L_002F6D00;
    case 192u: goto L_002F6D48;
    case 193u: goto L_002F6D88;
    case 194u: goto L_002F6DA8;
    case 195u: goto L_002F6DE8;
    case 196u: goto L_002F6DF8;
    case 197u: goto L_002F6E18;
    case 198u: goto L_002F6E3C;
    case 199u: goto L_002F6E58;
    case 200u: goto L_002F6E74;
    case 201u: goto L_002F6ED8;
    case 202u: goto L_002F6F10;
    case 203u: goto L_002F6F2C;
    case 204u: goto L_002F6F64;
    case 205u: goto L_002F6F7C;
    case 206u: goto L_002F6F8C;
    case 207u: goto L_002F6FD8;
    case 208u: goto L_002F7004;
    case 209u: goto L_002F7010;
    case 210u: goto L_002F7044;
    case 211u: goto L_002F7050;
    case 212u: goto L_002F706C;
    case 213u: goto L_002F70B0;
    case 214u: goto L_002F70C8;
    case 215u: goto L_002F70F8;
    case 216u: goto L_002F7118;
    case 217u: goto L_002F7138;
    case 218u: goto L_002F7144;
    case 219u: goto L_002F7150;
    case 220u: goto L_002F7180;
    case 221u: goto L_002F71A0;
    case 222u: goto L_002F71AC;
    case 223u: goto L_002F71B8;
    case 224u: goto L_002F71E8;
    case 225u: goto L_002F7208;
    case 226u: goto L_002F7220;
    case 227u: goto L_002F7238;
    case 228u: goto L_002F7258;
    case 229u: goto L_002F7270;
    case 230u: goto L_002F7288;
    case 231u: goto L_002F72A8;
    case 232u: goto L_002F72F8;
    case 233u: goto L_002F7340;
    case 234u: goto L_002F7390;
    case 235u: goto L_002F73D8;
    case 236u: goto L_002F73FC;
    case 237u: goto L_002F7410;
    case 238u: goto L_002F744C;
    case 239u: goto L_002F748C;
    case 240u: goto L_002F74D4;
    case 241u: goto L_002F74E8;
    case 242u: goto L_002F7500;
    case 243u: goto L_002F7574;
    case 244u: goto L_002F758C;
    case 245u: goto L_002F75DC;
    case 246u: goto L_002F7668;
    case 247u: goto L_002F7688;
    case 248u: goto L_002F76B0;
    case 249u: goto L_002F76D0;
    case 250u: goto L_002F7774;
    case 251u: goto L_002F7788;
    case 252u: goto L_002F77CC;
    case 253u: goto L_002F77F0;
    case 254u: goto L_002F7884;
    case 255u: goto L_002F789C;
    case 256u: goto L_002F78BC;
    case 257u: goto L_002F7940;
    case 258u: goto L_002F7978;
    case 259u: goto L_002F79C4;
    case 260u: goto L_002F79D4;
    case 261u: goto L_002F79E8;
    case 262u: goto L_002F7A00;
    case 263u: goto L_002F7A10;
    case 264u: goto L_002F7A38;
    case 265u: goto L_002F7A48;
    case 266u: goto L_002F7A58;
    case 267u: goto L_002F7AB0;
    case 268u: goto L_002F7B0C;
    case 269u: goto L_002F7B40;
    case 270u: goto L_002F7B50;
    case 271u: goto L_002F7B84;
    case 272u: goto L_002F7C1C;
    case 273u: goto L_002F7C38;
    case 274u: goto L_002F7C64;
    case 275u: goto L_002F7C8C;
    case 276u: goto L_002F7D1C;
    case 277u: goto L_002F7D50;
    case 278u: goto L_002F7D7C;
    case 279u: goto L_002F7DA4;
    case 280u: goto L_002F7E34;
    case 281u: goto L_002F7E68;
    case 282u: goto L_002F7E70;
    case 283u: goto L_002F7E9C;
    case 284u: goto L_002F7EA8;
    case 285u: goto L_002F7EC4;
    case 286u: goto L_002F7ED0;
    case 287u: goto L_002F7EE8;
    case 288u: goto L_002F7F14;
    case 289u: goto L_002F7F24;
    case 290u: goto L_002F7F40;
    case 291u: goto L_002F7F54;
    case 292u: goto L_002F7F68;
    case 293u: goto L_002F7F7C;
    case 294u: goto L_002F7F8C;
    case 295u: goto L_002F7FAC;
    case 296u: goto L_002F7FBC;
    case 297u: goto L_002F7FC8;
    case 298u: goto L_002F7FD8;
    case 299u: goto L_002F7FE8;
    case 300u: goto L_002F7FF0;
    case 301u: goto L_002F7FF8;
    default: bad_entry(c, 0x002F4000u); return;
    }
L_002F4000:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4010:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 25932u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[3], c.r[2].w[0] - 16464u);
    st32((c.r[2].w[0] - 16464u), c.r[7].w[0]);
    st32((c.r[3].w[0] + 24u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 20u), c.r[5].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] - 19472u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[3].w[0] + 9236u), c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4090:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F40C0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002F40C0u) [[unlikely]] return; }
L_002F40C0:
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    st32((c.r[29].w[0] + 12u), c.f[2]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F410C; } }
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F410C; } }
    st32((c.r[29].w[0] + 24u), c.f[1]);
    st32((c.r[29].w[0] + 28u), c.f[2]);
    st32((c.r[29].w[0] + 16u), c.f[2]);
    st32((c.r[29].w[0] + 20u), c.f[1]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4124; } }
L_002F410C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 28u), c.f[0]);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 6;
L_002F4124:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4138u);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x002F4138u) [[unlikely]] return; }
L_002F4138:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4148u);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x002F4148u) [[unlikely]] return; }
L_002F4148:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F415Cu);  if (depth < kMaxDepth) unit_0044(c, 281u, depth + 1u); else { c.pc = 0x00213DE8u; return; } if (c.pc != 0x002F415Cu) [[unlikely]] return; }
L_002F415C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F416Cu);  if (depth < kMaxDepth) unit_0044(c, 273u, depth + 1u); else { c.pc = 0x00213C28u; return; } if (c.pc != 0x002F416Cu) [[unlikely]] return; }
L_002F416C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4188:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4190:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4198:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F41A8:
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 14664u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[4].w[0] + 200u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    st32((c.r[4].w[0] + 208u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F41D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F41F0u);  if (depth < kMaxDepth) unit_007C(c, 214u, depth + 1u); else { c.pc = 0x002F3A58u; return; } if (c.pc != 0x002F41F0u) [[unlikely]] return; }
L_002F41F0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4200:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[4], c.r[4].w[0] - 6944u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4234u);  if (depth < kMaxDepth) unit_0090(c, 324u, depth + 1u); else { c.pc = 0x00343990u; return; } if (c.pc != 0x002F4234u) [[unlikely]] return; }
L_002F4234:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st32((c.r[3].w[0] - 4564u), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4244u);  if (depth < kMaxDepth) unit_0074(c, 41u, depth + 1u); else { c.pc = 0x002D08C0u; return; } if (c.pc != 0x002F4244u) [[unlikely]] return; }
L_002F4244:
    c.budget -= 1;
L_002F4248:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4254u);  if (depth < kMaxDepth) unit_0078(c, 79u, depth + 1u); else { c.pc = 0x002E0D30u; return; } if (c.pc != 0x002F4254u) [[unlikely]] return; }
L_002F4254:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4248u | kUnwind; return; } goto L_002F4248; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F426Cu);  if (depth < kMaxDepth) unit_0083(c, 295u, depth + 1u); else { c.pc = 0x0030FA38u; return; } if (c.pc != 0x002F426Cu) [[unlikely]] return; }
L_002F426C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F42F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[2].w[0] + 14208u);
    set32(c.r[17], 0u + 13248u);
    set32(c.r[19], c.r[18].w[0] + 13248u);
    c.budget -= 5;
L_002F4290:
    set32(c.r[16], c.r[4].w[0] + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F42B8; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42B8u);  if (depth < kMaxDepth) unit_006C(c, 302u, depth + 1u); else { c.pc = 0x002B3298u; return; } if (c.pc != 0x002F42B8u) [[unlikely]] return; }
L_002F42B8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4290u | kUnwind; return; } goto L_002F4290; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] + 27456u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42DCu);  if (depth < kMaxDepth) unit_0053(c, 67u, depth + 1u); else { c.pc = 0x0024CD90u; return; } if (c.pc != 0x002F42DCu) [[unlikely]] return; }
L_002F42DC:
    set32(c.r[4], c.r[16].w[0] + 13248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42E8u);  if (depth < kMaxDepth) unit_0053(c, 67u, depth + 1u); else { c.pc = 0x0024CD90u; return; } if (c.pc != 0x002F42E8u) [[unlikely]] return; }
L_002F42E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F44D8; } }
L_002F42F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F42F8u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002F42F8u) [[unlikely]] return; }
L_002F42F8:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 14208u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F430Cu);  if (depth < kMaxDepth) unit_0049(c, 245u, depth + 1u); else { c.pc = 0x00226EF0u; return; } if (c.pc != 0x002F430Cu) [[unlikely]] return; }
L_002F430C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4318u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002F4318u) [[unlikely]] return; }
L_002F4318:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16388u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F43CC; } }
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[17], 0u + 1u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[19].d[0] = 0ull | 32768ull;
    c.r[19].d[0] = c.r[19].d[0] << 17;
    set32(c.r[18], 0u - 1u);
    c.budget -= 6;
L_002F4340:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4370; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[21].w[0] - 6080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4370u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F4370u) [[unlikely]] return; }
L_002F4370:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F43B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F43B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F43B8; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F43B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002F43B8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F43B8u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002F43B8u) [[unlikely]] return; }
L_002F43B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4340u | kUnwind; return; } goto L_002F4340; } }
L_002F43CC:
    set32(c.r[16], c.r[20].w[0] + 14664u);
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4478; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 200u)));
    set32(c.r[6], ld32((c.r[2].w[0] + 14184u)));
    set32(c.r[4], 0u + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[5], 0u + 395u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], 0u + 2u);
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[6], 0u + 128u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F440Cu);  if (depth < kMaxDepth) unit_007D(c, 103u, depth + 1u); else { c.pc = 0x002F50D8u; return; } if (c.pc != 0x002F440Cu) [[unlikely]] return; }
L_002F440C:
    set32(c.r[2], ld32((c.r[16].w[0] + 204u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[16].w[0] + 208u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[16].w[0] + 204u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002F4478; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 200u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4434u);  if (depth < kMaxDepth) unit_0039(c, 352u, depth + 1u); else { c.pc = 0x001E6F50u; return; } if (c.pc != 0x002F4434u) [[unlikely]] return; }
L_002F4434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4474; } }
    c.f[13] = 0u;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[16] = c.r[1].w[0];
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = c.f[13];
    c.f[15] = c.f[13];
    c.f[17] = c.f[13];
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4474u);  if (depth < kMaxDepth) unit_0087(c, 21u, depth + 1u); else { c.pc = 0x0031C328u; return; } if (c.pc != 0x002F4474u) [[unlikely]] return; }
L_002F4474:
    st32((c.r[16].w[0] + 208u), 0u);
    c.budget -= 1;
L_002F4478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4480u);  if (depth < kMaxDepth) unit_0083(c, 288u, depth + 1u); else { c.pc = 0x0030F968u; return; } if (c.pc != 0x002F4480u) [[unlikely]] return; }
L_002F4480:
    set32(c.r[18], 0u + 13248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F448Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002F448Cu) [[unlikely]] return; }
L_002F448C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[2].w[0] + 14208u);
    set32(c.r[19], c.r[17].w[0] + 13248u);
    c.budget -= 5;
L_002F44A0:
    set32(c.r[16], c.r[4].w[0] + 1u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F44C8; } }
    mmi::mult(c, 0, c.r[4].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F44C8u);  if (depth < kMaxDepth) unit_006C(c, 302u, depth + 1u); else { c.pc = 0x002B3298u; return; } if (c.pc != 0x002F44C8u) [[unlikely]] return; }
L_002F44C8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F44A0u | kUnwind; return; } goto L_002F44A0; } }
L_002F44D8:
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
L_002F4500:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st32((c.r[2].w[0] - 4564u), c.r[3].w[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] - 16320u), c.r[3].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4540u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002F4540u) [[unlikely]] return; }
L_002F4540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16388u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F45FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[19].d[0] = 0ull | 32768ull;
    c.r[19].d[0] = c.r[19].d[0] << 17;
    set32(c.r[18], 0u - 1u);
    c.budget -= 8;
L_002F4570:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F45A0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 6080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F45A0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F45A0u) [[unlikely]] return; }
L_002F45A0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F45E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F45E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F45E8; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F45E8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002F45E8; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F45E8u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002F45E8u) [[unlikely]] return; }
L_002F45E8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4570u | kUnwind; return; } goto L_002F4570; } }
L_002F45FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4604u);  if (depth < kMaxDepth) unit_0083(c, 288u, depth + 1u); else { c.pc = 0x0030F968u; return; } if (c.pc != 0x002F4604u) [[unlikely]] return; }
L_002F4604:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F460Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002F460Cu) [[unlikely]] return; }
L_002F460C:
    st32((c.r[21].w[0] - 16320u), 0u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4638:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    st32((c.r[4].w[0] - 16320u), c.r[3].w[0]);
    st32((c.r[2].w[0] - 4564u), c.r[3].w[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4678u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002F4678u) [[unlikely]] return; }
L_002F4678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4680u);  if (depth < kMaxDepth) unit_0049(c, 245u, depth + 1u); else { c.pc = 0x00226EF0u; return; } if (c.pc != 0x002F4680u) [[unlikely]] return; }
L_002F4680:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 14208u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4694u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002F4694u) [[unlikely]] return; }
L_002F4694:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16388u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F474C; } }
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[17], 0u + 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[19].d[0] = 0ull | 32768ull;
    c.r[19].d[0] = c.r[19].d[0] << 17;
    set32(c.r[18], 0u - 1u);
    c.budget -= 7;
L_002F46C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F46F0; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 6080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F46F0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F46F0u) [[unlikely]] return; }
L_002F46F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F4738; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4738; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4738; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4738; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002F4738; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4738u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002F4738u) [[unlikely]] return; }
L_002F4738:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F46C0u | kUnwind; return; } goto L_002F46C0; } }
L_002F474C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4754u);  if (depth < kMaxDepth) unit_0083(c, 288u, depth + 1u); else { c.pc = 0x0030F968u; return; } if (c.pc != 0x002F4754u) [[unlikely]] return; }
L_002F4754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F475Cu);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002F475Cu) [[unlikely]] return; }
L_002F475C:
    st32((c.r[21].w[0] - 16320u), 0u);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4788:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    set32(c.r[17], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[18], 0u - 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = 0ull | 32768ull;
    c.r[19].d[0] = c.r[19].d[0] << 17;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.budget -= 14;
L_002F47C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 6080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F47F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F47F0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F47F0u) [[unlikely]] return; }
L_002F47F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F4838; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4838; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4838; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4838; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002F4838; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4838u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002F4838u) [[unlikely]] return; }
L_002F4838:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F47C0u | kUnwind; return; } goto L_002F47C0; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00500000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], ld32((c.r[2].w[0] + 32380u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4888u);  if (depth < kMaxDepth) unit_006C(c, 97u, depth + 1u); else { c.pc = 0x002B10A8u; return; } if (c.pc != 0x002F4888u) [[unlikely]] return; }
L_002F4888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4898:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48BCu);  if (depth < kMaxDepth) unit_0049(c, 245u, depth + 1u); else { c.pc = 0x00226EF0u; return; } if (c.pc != 0x002F48BCu) [[unlikely]] return; }
L_002F48BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 14208u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F48D0u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002F48D0u) [[unlikely]] return; }
L_002F48D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16388u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F4984; } }
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[17], 0u + 1u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[19].d[0] = 0ull | 32768ull;
    c.r[19].d[0] = c.r[19].d[0] << 17;
    set32(c.r[18], 0u - 1u);
    c.budget -= 6;
L_002F48F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4928; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[20].w[0] - 6080u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4928u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F4928u) [[unlikely]] return; }
L_002F4928:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F4970; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4970; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4970; } }
    c.r[2].d[0] = ld64((c.r[16].w[0] + 120u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F4970; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002F4970; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4970u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x002367B8u; return; } if (c.pc != 0x002F4970u) [[unlikely]] return; }
L_002F4970:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F48F8u | kUnwind; return; } goto L_002F48F8; } }
L_002F4984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F498Cu);  if (depth < kMaxDepth) unit_0083(c, 288u, depth + 1u); else { c.pc = 0x0030F968u; return; } if (c.pc != 0x002F498Cu) [[unlikely]] return; }
L_002F498C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F49B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[16].w[0] - 16320u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49D0u);  if (depth < kMaxDepth) unit_0083(c, 295u, depth + 1u); else { c.pc = 0x0030FA38u; return; } if (c.pc != 0x002F49D0u) [[unlikely]] return; }
L_002F49D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49D8u);  if (depth < kMaxDepth) unit_0050(c, 85u, depth + 1u); else { c.pc = 0x00241410u; return; } if (c.pc != 0x002F49D8u) [[unlikely]] return; }
L_002F49D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49E0u);  if (depth < kMaxDepth) unit_0083(c, 291u, depth + 1u); else { c.pc = 0x0030F9C0u; return; } if (c.pc != 0x002F49E0u) [[unlikely]] return; }
L_002F49E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F49E8u);  if (depth < kMaxDepth) unit_0053(c, 11u, depth + 1u); else { c.pc = 0x0024C280u; return; } if (c.pc != 0x002F49E8u) [[unlikely]] return; }
L_002F49E8:
    st32((c.r[16].w[0] - 16320u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4A00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[18], c.r[4].w[0] + 28u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[20].d[0] & 2ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4A4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[2].w[0] + 21864u);
    set32(c.r[17], c.r[3].w[0] - 9848u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4A5C; } }
L_002F4A4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], c.r[2].w[0] + 21832u);
    set32(c.r[17], c.r[3].w[0] + 21896u);
    c.budget -= 4;
L_002F4A5C:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[21], 0u - 16u);
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[5].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 13;
L_002F4A90:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[16], c.r[17].w[0] + 4u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 1u));
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[18].w[0] + 2u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[18].w[0] + 3u));
    st8((c.r[17].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4AC8u);  if (depth < kMaxDepth) unit_009F(c, 323u, depth + 1u); else { c.pc = 0x0037FCA0u; return; } if (c.pc != 0x002F4AC8u) [[unlikely]] return; }
L_002F4AC8:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4ADCu);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002F4ADCu) [[unlikely]] return; }
L_002F4ADC:
    set32(c.r[5], c.r[19].w[0] + 1u);
    set32(c.r[10], c.r[17].w[0] + 132u);
    set32(c.r[9], c.r[18].w[0] + 260u);
    set32(c.r[8], c.r[18].w[0] + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_002F4AF0:
    set32(c.r[2], c.r[7].w[0] >> 31);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[6], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4B40; } }
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[2].d[0] = c.r[2].d[0] & c.r[21].d[0];
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4B54; } }
L_002F4B40:
    c.r[2].d[0] = ld8((c.r[8].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002F4B54:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4AF0u | kUnwind; return; } goto L_002F4AF0; } }
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[10].d[0] + 0ull;
    c.r[18].d[0] = c.r[9].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4A90u | kUnwind; return; } goto L_002F4A90; } }
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
L_002F4BA8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[17], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 18712u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    st32((c.r[5].w[0] - 3028u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4BE0u);  if (depth < kMaxDepth) unit_0057(c, 187u, depth + 1u); else { c.pc = 0x0025EB10u; return; } if (c.pc != 0x002F4BE0u) [[unlikely]] return; }
L_002F4BE0:
    set32(c.r[9], ld32((c.r[17].w[0])));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = c.r[9].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4C5C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4C14; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4C28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4CBC; } }
L_002F4C14:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4C90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4CBC; } }
L_002F4C28:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] - 12752u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C4Cu);  if (depth < kMaxDepth) unit_009F(c, 279u, depth + 1u); else { c.pc = 0x0037F430u; return; } if (c.pc != 0x002F4C4Cu) [[unlikely]] return; }
L_002F4C4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 10896u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4CBC; } }
L_002F4C5C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] - 16304u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 160u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4C80u);  if (depth < kMaxDepth) unit_009F(c, 279u, depth + 1u); else { c.pc = 0x0037F430u; return; } if (c.pc != 0x002F4C80u) [[unlikely]] return; }
L_002F4C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 10888u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4CBC; } }
L_002F4C90:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[16], c.r[16].w[0] + 18240u);
    set32(c.r[5], ld32((c.r[18].w[0])));
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 128u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CB4u);  if (depth < kMaxDepth) unit_009F(c, 279u, depth + 1u); else { c.pc = 0x0037F430u; return; } if (c.pc != 0x002F4CB4u) [[unlikely]] return; }
L_002F4CB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 10892u), c.r[16].w[0]);
    c.budget -= 2;
L_002F4CBC:
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 19440u);
    set32(c.r[7], c.r[7].w[0] - 19368u);
    set32(c.r[8], 0u + 233u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4CE0u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002F4CE0u) [[unlikely]] return; }
L_002F4CE0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F4D00:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[4].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[22], 0u + 12u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D44u);  if (depth < kMaxDepth) unit_009E(c, 92u, depth + 1u); else { c.pc = 0x00378FA8u; return; } if (c.pc != 0x002F4D44u) [[unlikely]] return; }
L_002F4D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4D4Cu);  if (depth < kMaxDepth) unit_0034(c, 128u, depth + 1u); else { c.pc = 0x001D1638u; return; } if (c.pc != 0x002F4D4Cu) [[unlikely]] return; }
L_002F4D4C:
    set32(c.r[2], ld32((c.r[18].w[0] + 21824u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[16], c.r[16].w[0] + 21800u);
    set32(c.r[4], ld32((c.r[23].w[0] + 20660u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[20], c.r[16].w[0] + 4u);
    set32(c.r[21], ld32((c.r[3].w[0] + 18712u)));
    set32(c.r[30], c.r[16].w[0] + 8u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[7].w[0]), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[17], c.r[17].w[0] + 24576u);
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[2].w[0]), c.r[4].w[0]);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], 0u + 30u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DB8u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002F4DB8u) [[unlikely]] return; }
L_002F4DB8:
    set32(c.r[7], ld32((c.r[18].w[0] + 21824u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[19], c.r[19].w[0] + 19368u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 31u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4DECu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002F4DECu) [[unlikely]] return; }
L_002F4DEC:
    set32(c.r[3], ld32((c.r[18].w[0] + 21824u)));
    set32(c.r[11], 0u + 1u);
    set32(c.r[12], ld32((c.r[23].w[0] + 20660u)));
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st32((c.r[18].w[0] + 21824u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 32u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[20], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[7].w[0]), c.r[11].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[30].w[0]);
    st32((c.r[20].w[0]), c.r[3].w[0]);
    st32((c.r[2].w[0]), c.r[12].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E40u);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002F4E40u) [[unlikely]] return; }
L_002F4E40:
    set32(c.r[7], ld32((c.r[18].w[0] + 21824u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], 0u + 33u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E6Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002F4E6Cu) [[unlikely]] return; }
L_002F4E6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 21824u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 21824u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E80u);  if (depth < kMaxDepth) unit_009E(c, 99u, depth + 1u); else { c.pc = 0x00379188u; return; } if (c.pc != 0x002F4E80u) [[unlikely]] return; }
L_002F4E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4E88u);  if (depth < kMaxDepth) unit_009E(c, 101u, depth + 1u); else { c.pc = 0x003791D8u; return; } if (c.pc != 0x002F4E88u) [[unlikely]] return; }
L_002F4E88:
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
L_002F4EC0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 21792u)));
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4F30; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F4F1C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F4F30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4F48; } }
L_002F4F1C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F4F3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4F48; } }
L_002F4F30:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4F4C; } }
L_002F4F3C:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4F4C; } }
L_002F4F48:
    set32(c.r[4], 0u + 255u);
    c.budget -= 1;
L_002F4F4C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002F4F68; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F4F8C; } }
L_002F4F68:
    set32(c.r[6], 0u - c.r[6].w[0]);
    set32(c.r[2], 0u + 128u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[4], c.r[6].w[0] >> 24);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    if (c.r[4].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 9;
L_002F4F8C:
    set32(c.r[2], c.r[5].w[0] << 8);
    if (c.r[6].d[0] == 0) c.r[4].d[0] = 0ull;
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F4FB4u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x002F4FB4u) [[unlikely]] return; }
L_002F4FB4:
    c.r[7].d[0] = c.r[20].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F4FF0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 95u);
    set32(c.r[5], 0u + 32u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_002F4FD0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002F4FE0; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002F4FE0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F4FD0u | kUnwind; return; } goto L_002F4FD0; } }
L_002F4FF0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F5008; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10888u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002F5024; } }
L_002F5008:
    c.r[2].d[0] = c.r[20].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5068; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10892u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F5068; } }
L_002F5024:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[1].w[0];
    c.f[12] = c.r[18].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = c.r[19].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[15] = c.f[14];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5060u);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F5060u) [[unlikely]] return; }
L_002F5060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F50B4; } }
L_002F5068:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10896u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F50B4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[1].w[0];
    c.f[12] = c.r[18].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = c.r[19].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.f[15] = c.f[14];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F50B4u);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F50B4u) [[unlikely]] return; }
L_002F50B4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F50D8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[20], 0u + 13u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    set32(c.r[30], 0u + 10u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 8u), 0u);
    c.budget -= 20;
L_002F5128:
    c.r[19].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F5270; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5270; } }
    c.r[22].d[0] = c.r[21].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { goto L_002F51A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_002F5180; } }
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], 0u + 13u);
    c.budget -= 2;
L_002F5160:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5180; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F51A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5160u | kUnwind; return; } goto L_002F5160; } }
L_002F5180:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { goto L_002F51A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_002F51F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F51B0; } }
L_002F51A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[20].d[0];  if (t) { goto L_002F51CC; } }
L_002F51B0:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_002F51D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_002F51D8; } }
L_002F51CC:
    set32(c.r[23], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F51DC; } }
L_002F51D8:
    set32(c.r[23], 0u + 1u);
    c.budget -= 1;
L_002F51DC:
    set32(c.r[2], c.r[3].w[0] << 24);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[19], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
L_002F51F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5200u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F5200u) [[unlikely]] return; }
L_002F5200:
    set32(c.r[4], c.r[2].w[0] >> 31);
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0])));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F522Cu);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x002F522Cu) [[unlikely]] return; }
L_002F522C:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002F5244; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21864u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F524C; } }
L_002F5244:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21832u);
    c.budget -= 2;
L_002F524C:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002F5264; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F5264:
    set32(c.r[17], c.r[16].w[0] + c.r[23].w[0]);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5128u | kUnwind; return; } goto L_002F5128; } }
L_002F5270:
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
L_002F52A8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.f[13] = c.f[12];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[30].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[23], 0u + 10u);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[21], 0u + 13u);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5318u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x002F5318u) [[unlikely]] return; }
L_002F5318:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[2], c.r[3].w[0] >> 31);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[18], c.r[18].w[0] - c.r[3].w[0]);
    c.budget -= 6;
L_002F5330:
    c.r[20].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F5478; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5478; } }
    c.r[22].d[0] = c.r[19].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_002F53A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_002F5388; } }
    set32(c.r[4], 0u + 10u);
    set32(c.r[3], 0u + 13u);
    c.budget -= 2;
L_002F5368:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5388; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F53A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5368u | kUnwind; return; } goto L_002F5368; } }
L_002F5388:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[23].d[0];  if (t) { goto L_002F53A8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_002F53F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F53B8; } }
L_002F53A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_002F53D4; } }
L_002F53B8:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_002F53E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[23].d[0];  if (t) { goto L_002F53E0; } }
L_002F53D4:
    set32(c.r[30], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F53E4; } }
L_002F53E0:
    set32(c.r[30], 0u + 1u);
    c.budget -= 1;
L_002F53E4:
    set32(c.r[2], c.r[3].w[0] << 24);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[20], 0u + 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_002F53F8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5408u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F5408u) [[unlikely]] return; }
L_002F5408:
    set32(c.r[4], c.r[2].w[0] >> 31);
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - c.r[4].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5434u);  if (depth < kMaxDepth) unit_007D(c, 98u, depth + 1u); else { c.pc = 0x002F4EC0u; return; } if (c.pc != 0x002F5434u) [[unlikely]] return; }
L_002F5434:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002F544C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21864u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5454; } }
L_002F544C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21832u);
    c.budget -= 2;
L_002F5454:
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002F546C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 16u)));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F546C:
    set32(c.r[17], c.r[16].w[0] + c.r[30].w[0]);
    c.budget -= 3;
    { const bool t = c.r[20].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5330u | kUnwind; return; } goto L_002F5330; } }
L_002F5478:
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
L_002F54B0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[7].d[0] & 4ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 208u), c.f[22]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[21]);
    c.f[22] = c.f[12];
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.f[21] = c.f[13];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    set32(c.r[30], 0u + 13u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    c.budget -= 26;
L_002F5518:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[23].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5860; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F5860; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[20] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[4], 0u + 10u);
    c.r[22].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F55A4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { goto L_002F5580; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 1;
L_002F5560:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5580; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F55A4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5560u | kUnwind; return; } goto L_002F5560; } }
L_002F5580:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 10u);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F55A4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_002F5600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F55B4; } }
L_002F55A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { goto L_002F55D4; } }
L_002F55B4:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[30].d[0];  if (t) { goto L_002F55E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002F55E4; } }
L_002F55D4:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F55EC; } }
L_002F55E4:
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 12u), c.r[4].w[0]);
    c.budget -= 2;
L_002F55EC:
    set32(c.r[2], c.r[3].w[0] << 24);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[23], 0u + 1u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
L_002F5600:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5610u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F5610u) [[unlikely]] return; }
L_002F5610:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 21792u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002F5680; } }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F566C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F5680; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5698; } }
L_002F566C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002F568C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5698; } }
L_002F5680:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F569C; } }
L_002F568C:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F569C; } }
L_002F5698:
    set32(c.r[4], 0u + 255u);
    c.budget -= 1;
L_002F569C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002F56B8; } }
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F56DC; } }
L_002F56B8:
    set32(c.r[7], 0u - c.r[20].w[0]);
    set32(c.r[2], 0u + 128u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    if (c.r[4].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 9;
L_002F56DC:
    set32(c.r[2], c.r[5].w[0] << 8);
    if (c.r[7].d[0] == 0) c.r[4].d[0] = 0ull;
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5704u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x002F5704u) [[unlikely]] return; }
L_002F5704:
    set32(c.r[4], ld32((c.r[29].w[0] + 12u)));
    c.f[12] = c.r[19].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[21], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F5750; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 95u);
    set32(c.r[5], 0u + 32u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
L_002F5730:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002F5740; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002F5740:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5730u | kUnwind; return; } goto L_002F5730; } }
L_002F5750:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002F5774; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 16304u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5794; } }
L_002F5774:
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F57B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 18240u);
    c.budget -= 5;
L_002F5794:
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57ACu);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F57ACu) [[unlikely]] return; }
L_002F57AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F57E0; } }
L_002F57B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] - 12752u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F57E0u);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F57E0u) [[unlikely]] return; }
L_002F57E0:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull;  if (t) { goto L_002F5800; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 21864u);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F582C; } }
L_002F5800:
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F581C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F582C; } }
L_002F581C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21832u);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
L_002F582C:
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002F5854; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_002F5854:
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[23].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5518u | kUnwind; return; } goto L_002F5518; } }
L_002F5860:
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
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F58A0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st32((c.r[29].w[0] + 12u), c.r[7].w[0]);
    c.r[9].d[0] = c.r[29].d[0] | 4ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[2].d[0] = c.r[7].d[0] & 4ull;
    st32((c.r[29].w[0] + 208u), c.f[22]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[21]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    c.f[22] = c.f[12];
    c.f[21] = c.f[13];
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 192u), c.f[20]);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5914u);  if (depth < kMaxDepth) unit_007D(c, 168u, depth + 1u); else { c.pc = 0x002F67C8u; return; } if (c.pc != 0x002F5914u) [[unlikely]] return; }
L_002F5914:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[29].w[0] + 16u), 0u);
    set32(c.r[2], c.r[3].w[0] >> 31);
    st32((c.r[29].w[0] + 20u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[20], c.r[20].w[0] - c.r[3].w[0]);
    c.budget -= 7;
L_002F5930:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.r[30].d[0] = 0ull + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5C88; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002F5C88; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 12u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[20] = c.r[20].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[4], 0u + 10u);
    c.r[23].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F59C8; } }
    set32(c.r[3], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002F59A0; } }
    c.budget -= 1;
L_002F5980:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F59A0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F59C8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5980u | kUnwind; return; } goto L_002F5980; } }
L_002F59A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], 0u + 10u);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F59C8; } }
    set32(c.r[4], 0u + 13u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002F5A2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F59DC; } }
L_002F59C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[4], 0u + 13u);
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F5A00; } }
L_002F59DC:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[4], 0u + 13u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002F5A10; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002F5A10; } }
L_002F5A00:
    set32(c.r[2], 0u + 2u);
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5A18; } }
L_002F5A10:
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 16u), c.r[4].w[0]);
    c.budget -= 2;
L_002F5A18:
    set32(c.r[2], c.r[3].w[0] << 24);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[30], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
L_002F5A2C:
    set32(c.r[5], ld32((c.r[29].w[0] + 12u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5A3Cu);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F5A3Cu) [[unlikely]] return; }
L_002F5A3C:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 21792u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[19], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 16;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_002F5AAC; } }
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5A98; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F5AAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5AC4; } }
L_002F5A98:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002F5AB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5AC4; } }
L_002F5AAC:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5AC8; } }
L_002F5AB8:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5AC8; } }
L_002F5AC4:
    set32(c.r[4], 0u + 255u);
    c.budget -= 1;
L_002F5AC8:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] < 0;  if (t) { goto L_002F5AE4; } }
    c.r[3].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5B08; } }
L_002F5AE4:
    set32(c.r[7], 0u - c.r[21].w[0]);
    set32(c.r[2], 0u + 128u);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 16));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 8));
    set32(c.r[4], c.r[7].w[0] >> 24);
    c.r[6].d[0] = c.r[6].d[0] & 255ull;
    if (c.r[4].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[7].d[0] & 255ull;
    c.budget -= 9;
L_002F5B08:
    set32(c.r[2], c.r[5].w[0] << 8);
    if (c.r[7].d[0] == 0) c.r[4].d[0] = 0ull;
    c.r[2].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5B30u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x002F5B30u) [[unlikely]] return; }
L_002F5B30:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.f[12] = c.r[19].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    set32(c.r[22], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F5B80; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 95u);
    set32(c.r[5], 0u + 32u);
    c.r[3].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
L_002F5B60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002F5B70; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002F5B70:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5B60u | kUnwind; return; } goto L_002F5B60; } }
L_002F5B80:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002F5BA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] - 16304u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5BC4; } }
L_002F5BA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F5BE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 18240u);
    c.budget -= 5;
L_002F5BC4:
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5BDCu);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F5BDCu) [[unlikely]] return; }
L_002F5BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5C10; } }
L_002F5BE4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.f[13] = c.f[20];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] - 12752u);
    c.r[7].d[0] = 0ull + 0ull;
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5C10u);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F5C10u) [[unlikely]] return; }
L_002F5C10:
    c.budget -= 2;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002F5C30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] + 21864u);
    c.f[0] = ld32((c.r[4].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5C5C; } }
L_002F5C30:
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5C4C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5C5C; } }
L_002F5C4C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21832u);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
L_002F5C5C:
    c.f[0] = fp::mul(c.f[0], c.f[21]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    set32(c.r[20], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002F5C7C; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F5C7C:
    c.r[18].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[30].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5930u | kUnwind; return; } goto L_002F5930; } }
L_002F5C88:
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
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F5CC8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].d[0] = c.r[5].d[0] & 2ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5D14; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[21], c.r[2].w[0] - 16304u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5D1C; } }
L_002F5D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[21], c.r[2].w[0] - 12752u);
    c.budget -= 2;
L_002F5D1C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F5EF8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F5D40; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5EF8; } }
L_002F5D40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5ED4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[30], c.r[2].w[0] - 9848u);
    set32(c.r[23], c.r[3].w[0] + 21896u);
    c.r[20].d[0] = c.r[5].d[0] & 2ull;
    set32(c.r[22], 0u + 132u);
    c.budget -= 6;
L_002F5D68:
    set32(c.r[3], ld32((c.r[29].w[0])));
    set32(c.r[2], c.r[3].w[0] + 1u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002F5DA4; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D8Cu);  if (depth < kMaxDepth) unit_009F(c, 320u, depth + 1u); else { c.pc = 0x0037FC30u; return; } if (c.pc != 0x002F5D8Cu) [[unlikely]] return; }
L_002F5D8C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5D9Cu);  if (depth < kMaxDepth) unit_009F(c, 320u, depth + 1u); else { c.pc = 0x0037FC30u; return; } if (c.pc != 0x002F5D9Cu) [[unlikely]] return; }
L_002F5D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5DC0; } }
L_002F5DA4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5DB0u);  if (depth < kMaxDepth) unit_009F(c, 317u, depth + 1u); else { c.pc = 0x0037FB90u; return; } if (c.pc != 0x002F5DB0u) [[unlikely]] return; }
L_002F5DB0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[29].w[0] + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5DC0u);  if (depth < kMaxDepth) unit_009F(c, 317u, depth + 1u); else { c.pc = 0x0037FB90u; return; } if (c.pc != 0x002F5DC0u) [[unlikely]] return; }
L_002F5DC0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 32u);
    c.budget -= 4;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002F5DDC; } }
    set32(c.r[18], 0u + 255u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[18].d[0];  if (t) { goto L_002F5E18; } }
L_002F5DDC:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F5ED4; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F5EC4; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002F5E0C; } }
    set32(c.r[19], c.r[19].w[0] + 12u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5EC4; } }
L_002F5E0C:
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5EC4; } }
L_002F5E18:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5E28u);  if (depth < kMaxDepth) unit_009F(c, 301u, depth + 1u); else { c.pc = 0x0037F970u; return; } if (c.pc != 0x002F5E28u) [[unlikely]] return; }
L_002F5E28:
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[18].d[0];  if (t) { goto L_002F5EC4; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002F5E70; } }
    mmi::mult(c, 0, c.r[17].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    set32(c.r[5], c.r[3].w[0] + c.r[30].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5EA4; } }
    set32(c.r[2], c.r[16].w[0] >> 31);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5EBC; } }
L_002F5E70:
    mmi::mult(c, 0, c.r[17].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[16].d[0] & 1ull;
    set32(c.r[5], c.r[3].w[0] + c.r[23].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F5EA4; } }
    set32(c.r[2], c.r[16].w[0] >> 31);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5EBC; } }
L_002F5EA4:
    set32(c.r[2], c.r[16].w[0] >> 31);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] << 28);
    c.budget -= 6;
L_002F5EBC:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 28));
    set32(c.r[19], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002F5EC4:
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F5D68u | kUnwind; return; } goto L_002F5D68; } }
L_002F5ED4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5EE0u);  if (depth < kMaxDepth) unit_009F(c, 284u, depth + 1u); else { c.pc = 0x0037F530u; return; } if (c.pc != 0x002F5EE0u) [[unlikely]] return; }
L_002F5EE0:
    c.f[1] = c.r[19].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.budget -= 6;
L_002F5EF8:
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
L_002F5F30:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 72u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 88u), c.r[11].d[0]);
    st32((c.r[29].w[0] + 56u), c.f[12]);
    st32((c.r[29].w[0] + 60u), c.f[14]);
    st32((c.r[29].w[0] + 64u), c.f[16]);
    st32((c.r[29].w[0] + 68u), c.f[18]);
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F5F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002F5FF0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F5FB4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], c.r[4].w[0] - 16304u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F8Cu);  if (depth < kMaxDepth) unit_009F(c, 278u, depth + 1u); else { c.pc = 0x0037F420u; return; } if (c.pc != 0x002F5F8Cu) [[unlikely]] return; }
L_002F5F8C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[4], c.r[4].w[0] + 18240u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5F9Cu);  if (depth < kMaxDepth) unit_009F(c, 278u, depth + 1u); else { c.pc = 0x0037F420u; return; } if (c.pc != 0x002F5F9Cu) [[unlikely]] return; }
L_002F5F9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[4], c.r[4].w[0] - 12752u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5FACu);  if (depth < kMaxDepth) unit_009F(c, 278u, depth + 1u); else { c.pc = 0x0037F420u; return; } if (c.pc != 0x002F5FACu) [[unlikely]] return; }
L_002F5FAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F5FF0; } }
L_002F5FB4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 12752u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5FC8u);  if (depth < kMaxDepth) unit_009F(c, 282u, depth + 1u); else { c.pc = 0x0037F500u; return; } if (c.pc != 0x002F5FC8u) [[unlikely]] return; }
L_002F5FC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 18240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5FDCu);  if (depth < kMaxDepth) unit_009F(c, 282u, depth + 1u); else { c.pc = 0x0037F500u; return; } if (c.pc != 0x002F5FDCu) [[unlikely]] return; }
L_002F5FDC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] - 16304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F5FF0u);  if (depth < kMaxDepth) unit_009F(c, 282u, depth + 1u); else { c.pc = 0x0037F500u; return; } if (c.pc != 0x002F5FF0u) [[unlikely]] return; }
L_002F5FF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0] + 18712u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[3].w[0])));
    st32((c.r[7].w[0] - 3028u), c.r[6].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6034u);  if (depth < kMaxDepth) unit_007D(c, 78u, depth + 1u); else { c.pc = 0x002F4A00u; return; } if (c.pc != 0x002F6034u) [[unlikely]] return; }
L_002F6034:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] - 19440u);
    set32(c.r[7], c.r[7].w[0] - 19392u);
    set32(c.r[8], 0u + 165u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6058u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002F6058u) [[unlikely]] return; }
L_002F6058:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6070:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[10].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[2], ld32((c.r[17].w[0] + 21824u)));
    set32(c.r[19], 0u + 12u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[16], c.r[16].w[0] + 21800u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[11], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[11].w[0]), c.r[7].w[0]);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[2].w[0] + 8u), c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[7].d[0] = c.r[11].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 24576u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F60ECu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002F60ECu) [[unlikely]] return; }
L_002F60EC:
    set32(c.r[7], ld32((c.r[17].w[0] + 21824u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[7].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[8].w[0] + 19368u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[7], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F611Cu);  if (depth < kMaxDepth) unit_009E(c, 97u, depth + 1u); else { c.pc = 0x00379078u; return; } if (c.pc != 0x002F611Cu) [[unlikely]] return; }
L_002F611C:
    set32(c.r[2], ld32((c.r[17].w[0] + 21824u)));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st32((c.r[17].w[0] + 21824u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6150:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 120u), c.f[23]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.f[23] = c.f[15];
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.f[22] = c.f[14];
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[21] = c.f[13];
    set32(c.r[3], ld32((c.r[2].w[0] + 21792u)));
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F61E0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F61CC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F61E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F61F8; } }
L_002F61CC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F61EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F61F8; } }
L_002F61E0:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F61FC; } }
L_002F61EC:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F61FC; } }
L_002F61F8:
    set32(c.r[4], 0u + 255u);
    c.budget -= 1;
L_002F61FC:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002F6218; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F623C; } }
L_002F6218:
    set32(c.r[6], 0u - c.r[6].w[0]);
    set32(c.r[2], 0u + 128u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[4], c.r[6].w[0] >> 24);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    if (c.r[4].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 9;
L_002F623C:
    set32(c.r[2], c.r[5].w[0] << 8);
    if (c.r[6].d[0] == 0) c.r[4].d[0] = 0ull;
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[17].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6264u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x002F6264u) [[unlikely]] return; }
L_002F6264:
    c.r[7].d[0] = c.r[18].d[0] & 2ull;
    c.f[12] = c.r[20].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.f[13] = c.r[19].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F62B8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 95u);
    set32(c.r[5], 0u + 32u);
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_002F6298:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002F62A8; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002F62A8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6298u | kUnwind; return; } goto L_002F6298; } }
L_002F62B8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F6300; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[18] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10888u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.f[16] = c.f[22];
    c.f[17] = c.f[23];
    c.f[19] = c.f[18];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F62F8u);  if (depth < kMaxDepth) unit_009F(c, 289u, depth + 1u); else { c.pc = 0x0037F608u; return; } if (c.pc != 0x002F62F8u) [[unlikely]] return; }
L_002F62F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6338; } }
L_002F6300:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[18] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10896u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.f[16] = c.f[22];
    c.f[17] = c.f[23];
    c.f[19] = c.f[18];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6338u);  if (depth < kMaxDepth) unit_009F(c, 289u, depth + 1u); else { c.pc = 0x0037F608u; return; } if (c.pc != 0x002F6338u) [[unlikely]] return; }
L_002F6338:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[23] = ld32((c.r[29].w[0] + 120u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6370:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[21] = c.f[13];
    set32(c.r[3], ld32((c.r[2].w[0] + 21792u)));
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F63F0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F63DC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F63F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6408; } }
L_002F63DC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F63FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6408; } }
L_002F63F0:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F640C; } }
L_002F63FC:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F640C; } }
L_002F6408:
    set32(c.r[4], 0u + 255u);
    c.budget -= 1;
L_002F640C:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002F6428; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F644C; } }
L_002F6428:
    set32(c.r[6], 0u - c.r[6].w[0]);
    set32(c.r[2], 0u + 128u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[4], c.r[6].w[0] >> 24);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    if (c.r[4].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 9;
L_002F644C:
    set32(c.r[2], c.r[5].w[0] << 8);
    if (c.r[6].d[0] == 0) c.r[4].d[0] = 0ull;
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6474u);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x002F6474u) [[unlikely]] return; }
L_002F6474:
    c.f[12] = c.r[20].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[7].d[0] = c.r[18].d[0] & 2ull;
    c.f[13] = c.r[19].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F64C8; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 95u);
    set32(c.r[5], 0u + 32u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_002F64A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002F64B8; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002F64B8:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F64A8u | kUnwind; return; } goto L_002F64A8; } }
L_002F64C8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F64E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16304u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F64FC; } }
L_002F64E4:
    c.r[2].d[0] = c.r[18].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6520; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 18240u);
    c.budget -= 3;
L_002F64FC:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6518u);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F6518u) [[unlikely]] return; }
L_002F6518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6548; } }
L_002F6520:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 12752u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6548u);  if (depth < kMaxDepth) unit_009F(c, 291u, depth + 1u); else { c.pc = 0x0037F680u; return; } if (c.pc != 0x002F6548u) [[unlikely]] return; }
L_002F6548:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6578:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 136u), c.f[25]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[24]);
    c.f[25] = c.f[13];
    st32((c.r[29].w[0] + 120u), c.f[23]);
    c.f[24] = c.f[12];
    st32((c.r[29].w[0] + 112u), c.f[22]);
    c.f[23] = c.f[17];
    st32((c.r[29].w[0] + 104u), c.f[21]);
    c.f[22] = c.f[16];
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.f[21] = c.f[15];
    set32(c.r[3], ld32((c.r[2].w[0] + 21792u)));
    c.f[20] = c.f[14];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 28;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6618; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6604; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6618; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6630; } }
L_002F6604:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F6624; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6630; } }
L_002F6618:
    set32(c.r[4], 0u + 128u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6634; } }
L_002F6624:
    set32(c.r[4], 0u + 64u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6634; } }
L_002F6630:
    set32(c.r[4], 0u + 255u);
    c.budget -= 1;
L_002F6634:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002F6650; } }
    c.r[3].d[0] = c.r[6].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6674; } }
L_002F6650:
    set32(c.r[6], 0u - c.r[6].w[0]);
    set32(c.r[2], 0u + 128u);
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 16));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[4], c.r[6].w[0] >> 24);
    c.r[7].d[0] = c.r[7].d[0] & 255ull;
    if (c.r[4].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 9;
L_002F6674:
    set32(c.r[2], c.r[5].w[0] << 8);
    if (c.r[6].d[0] == 0) c.r[4].d[0] = 0ull;
    c.r[2].d[0] = c.r[7].d[0] | c.r[2].d[0];
    set32(c.r[3], c.r[3].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[16].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F669Cu);  if (depth < kMaxDepth) unit_00DD(c, 75u, depth + 1u); else { c.pc = 0x00474EDCu; return; } if (c.pc != 0x002F669Cu) [[unlikely]] return; }
L_002F669C:
    c.f[12] = c.r[20].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[7].d[0] = c.r[18].d[0] & 2ull;
    c.f[13] = c.r[19].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F66F0; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 95u);
    set32(c.r[5], 0u + 32u);
    c.r[3].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
L_002F66D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002F66E0; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 1;
L_002F66E0:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F66D0u | kUnwind; return; } goto L_002F66D0; } }
L_002F66F0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002F670C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 10888u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6724; } }
L_002F670C:
    c.r[2].d[0] = c.r[18].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6754; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 10892u)));
    c.budget -= 3;
L_002F6724:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.f[16] = c.f[22];
    c.f[17] = c.f[23];
    c.f[18] = c.f[24];
    c.f[19] = c.f[25];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F674Cu);  if (depth < kMaxDepth) unit_009F(c, 289u, depth + 1u); else { c.pc = 0x0037F608u; return; } if (c.pc != 0x002F674Cu) [[unlikely]] return; }
L_002F674C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6788; } }
L_002F6754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 10896u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.f[16] = c.f[22];
    c.f[17] = c.f[23];
    c.f[18] = c.f[24];
    c.f[19] = c.f[25];
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6788u);  if (depth < kMaxDepth) unit_009F(c, 289u, depth + 1u); else { c.pc = 0x0037F608u; return; } if (c.pc != 0x002F6788u) [[unlikely]] return; }
L_002F6788:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[25] = ld32((c.r[29].w[0] + 136u));
    c.f[24] = ld32((c.r[29].w[0] + 128u));
    c.f[23] = ld32((c.r[29].w[0] + 120u));
    c.f[22] = ld32((c.r[29].w[0] + 112u));
    c.f[21] = ld32((c.r[29].w[0] + 104u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F67C8:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 184u), c.f[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.f[21] = 0u;
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    set32(c.r[18], 0u + 13u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    set32(c.r[22], 0u + 10u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[23].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[23]);
    c.r[30].d[0] = c.r[20].d[0] & 4ull;
    st32((c.r[29].w[0] + 192u), c.f[22]);
    c.f[23] = c.f[12];
    st32((c.r[29].w[0] + 176u), c.f[20]);
    c.f[22] = c.f[13];
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.f[20] = c.f[21];
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st32((c.r[29].w[0]), c.r[8].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    c.budget -= 28;
L_002F6838:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[17].d[0] = 0ull + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F69A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F69A8; } }
    c.r[19].d[0] = c.r[20].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002F68B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002F6890; } }
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u + 13u);
    c.budget -= 2;
L_002F6870:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6890; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002F68B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6870u | kUnwind; return; } goto L_002F6870; } }
L_002F6890:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002F68B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002F68FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F68C0; } }
L_002F68B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[18].d[0];  if (t) { goto L_002F68DC; } }
L_002F68C0:
    set32(c.r[2], c.r[3].w[0] << 24);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002F68E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[22].d[0];  if (t) { goto L_002F68E8; } }
L_002F68DC:
    set32(c.r[21], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F68EC; } }
L_002F68E8:
    set32(c.r[21], 0u + 1u);
    c.budget -= 1;
L_002F68EC:
    set32(c.r[2], c.r[3].w[0] << 24);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[23], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
L_002F68FC:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6908u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F6908u) [[unlikely]] return; }
L_002F6908:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::mul(c.f[0], c.f[23]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F6940; } }
    c.f[20] = c.f[0];
    c.budget -= 1;
L_002F6940:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002F6960; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[2], c.r[2].w[0] + 21864u);
    c.f[0] = ld32((c.r[2].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6988; } }
L_002F6960:
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002F6978; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6988; } }
L_002F6978:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006E0000u);
    set32(c.r[3], c.r[3].w[0] + 21832u);
    c.f[0] = ld32((c.r[3].w[0] + 24u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 4;
L_002F6988:
    c.f[0] = fp::mul(c.f[0], c.f[22]);
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F699C; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[23].w[0]));
    c.budget -= 1;
L_002F699C:
    set32(c.r[4], c.r[16].w[0] + c.r[21].w[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6838u | kUnwind; return; } goto L_002F6838; } }
L_002F69A8:
    set32(c.r[2], ld32((c.r[29].w[0])));
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.f[0] = fp::cvt_w_s(c.f[20]);
    st32((c.r[2].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    c.f[0] = fp::cvt_w_s(c.f[21]);
    st32((c.r[2].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[23] = ld32((c.r[29].w[0] + 200u));
    c.f[22] = ld32((c.r[29].w[0] + 192u));
    c.f[21] = ld32((c.r[29].w[0] + 184u));
    c.f[20] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[29], c.r[29].w[0] + 208u);
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6A08:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6A24u);  if (depth < kMaxDepth) unit_007D(c, 131u, depth + 1u); else { c.pc = 0x002F5CC8u; return; } if (c.pc != 0x002F6A24u) [[unlikely]] return; }
L_002F6A24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F6A70; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F6A70; } }
    c.f[1] = c.r[16].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6A74; } }
L_002F6A70:
    c.f[0] = c.f[20];
    c.budget -= 1;
L_002F6A74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6A90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 10888u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F6AC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AB4u);  if (depth < kMaxDepth) unit_009F(c, 308u, depth + 1u); else { c.pc = 0x0037FA38u; return; } if (c.pc != 0x002F6AB4u) [[unlikely]] return; }
L_002F6AB4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F6AC8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 10888u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AC8u);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037E768u; return; } if (c.pc != 0x002F6AC8u) [[unlikely]] return; }
L_002F6AC8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 10896u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F6AF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AE0u);  if (depth < kMaxDepth) unit_009F(c, 308u, depth + 1u); else { c.pc = 0x0037FA38u; return; } if (c.pc != 0x002F6AE0u) [[unlikely]] return; }
L_002F6AE0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F6AF4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 10896u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6AF4u);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037E768u; return; } if (c.pc != 0x002F6AF4u) [[unlikely]] return; }
L_002F6AF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6B08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10900u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F6B40; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10888u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B30u);  if (depth < kMaxDepth) unit_009F(c, 304u, depth + 1u); else { c.pc = 0x0037F9C0u; return; } if (c.pc != 0x002F6B30u) [[unlikely]] return; }
L_002F6B30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 10896u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B40u);  if (depth < kMaxDepth) unit_009F(c, 304u, depth + 1u); else { c.pc = 0x0037F9C0u; return; } if (c.pc != 0x002F6B40u) [[unlikely]] return; }
L_002F6B40:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6B50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B68u);  if (depth < kMaxDepth) unit_007D(c, 140u, depth + 1u); else { c.pc = 0x002F5F60u; return; } if (c.pc != 0x002F6B68u) [[unlikely]] return; }
L_002F6B68:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6B78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6B90u);  if (depth < kMaxDepth) unit_007D(c, 140u, depth + 1u); else { c.pc = 0x002F5F60u; return; } if (c.pc != 0x002F6B90u) [[unlikely]] return; }
L_002F6B90:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6BA0:
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[2], c.r[10].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002F6BEC; } }
    set32(c.r[9], c.r[4].w[0] + 1u);
    c.r[2].d[0] = 0ull + 0ull;
    c.r[11].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[8], c.r[4].w[0] << 2);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6C2C; } }
L_002F6BE0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F6C2C; } }
L_002F6BEC:
    c.r[11].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], c.r[4].w[0] + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], c.r[4].w[0] << 2);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[11].w[0] + 24016u);
    c.budget -= 7;
L_002F6C08:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6BE0u | kUnwind; return; } goto L_002F6BE0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6C08u | kUnwind; return; } goto L_002F6C08; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F6C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6C7C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[2].d[0];  if (t) { goto L_002F6C7C; } }
    set32(c.r[3], 0u + 13248u);
    set32(c.r[2], c.r[12].w[0] + 23960u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], 0u - 1u);
    set32(c.r[4], c.r[11].w[0] + 24016u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 14208u);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0]), c.r[6].w[0]);
    st16((c.r[3].w[0] + 7694u), static_cast<std::uint16_t>(c.r[10].w[0]));
    st16((c.r[3].w[0] + 10924u), static_cast<std::uint16_t>(c.r[10].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6C7C:
    set32(c.r[4], 0u + 13248u);
    set32(c.r[2], c.r[11].w[0] + 24016u);
    mmi::mult(c, 0, c.r[9].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[10].d[0] + 0ull;
    set32(c.r[3], c.r[12].w[0] + 23960u);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] + 14208u);
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    st16((c.r[4].w[0] + 7694u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 10924u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6CB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10120u)));
    set32(c.r[5], 0u + 3u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];
    c.r[2].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6D18; } }
    set32(c.r[4], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00040000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[2].d[0] = c.r[2].d[0] | 2816ull;
    set32(c.r[6], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u - 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 9;
L_002F6D00:
    st16((c.r[3].w[0] + 10924u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[3].w[0] + 7694u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 13248u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6D00u | kUnwind; return; } goto L_002F6D00; } }
L_002F6D18:
    set32(c.r[2], ld32((c.r[7].w[0] + 10120u)));
    set32(c.r[5], 0u + 2u);
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6D60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 23960u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
L_002F6D48:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6D48u | kUnwind; return; } goto L_002F6D48; } }
L_002F6D60:
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6DA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24016u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
L_002F6D88:
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6D88u | kUnwind; return; } goto L_002F6D88; } }
L_002F6DA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6DA8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[2].w[0] + 10368u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F6EB4; } }
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], 0u + 1u);
    c.budget -= 2;
L_002F6DE8:
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[17].w[0] << 2);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6DF8u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002F6DF8u) [[unlikely]] return; }
L_002F6DF8:
    set32(c.r[3], ld32((c.r[2].w[0] + 776u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6E94; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E18u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002F6E18u) [[unlikely]] return; }
L_002F6E18:
    set32(c.r[3], ld32((c.r[2].w[0] + 776u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[5], ld32((c.r[6].w[0] + 128u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E3Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F6E3Cu) [[unlikely]] return; }
L_002F6E3C:
    c.r[2].d[0] = c.r[2].d[0] & 10ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 10ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F6E94; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E58u);  if (depth < kMaxDepth) unit_0066(c, 214u, depth + 1u); else { c.pc = 0x0029A258u; return; } if (c.pc != 0x002F6E58u) [[unlikely]] return; }
L_002F6E58:
    set32(c.r[3], ld32((c.r[2].w[0] + 776u)));
    set32(c.r[5], 0u + 8192u);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6E74u);  if (depth < kMaxDepth) unit_0066(c, 98u, depth + 1u); else { c.pc = 0x00298DA8u; return; } if (c.pc != 0x002F6E74u) [[unlikely]] return; }
L_002F6E74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6E94; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(51ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F6E94; } }
    st32((c.r[16].w[0] + 56u), c.r[19].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002F6E94:
    c.r[2].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F6EB4; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 40u)));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F6DE8u | kUnwind; return; } goto L_002F6DE8; } }
L_002F6EB4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F6ED8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[18], c.r[18].w[0] + 9872u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[16], 0u + 2200u);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F10u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002F6F10u) [[unlikely]] return; }
L_002F6F10:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44890000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[20] = c.r[1].w[0];
    set32(c.r[17], ld32((c.r[2].w[0] + 840u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F2Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002F6F2Cu) [[unlikely]] return; }
L_002F6F2C:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.budget -= 4;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x002F6F38u);  goto L_002F6F3C; }
L_002F6F3C:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = fp::sub(c.f[0], c.f[20]);
    c.r[3].d[0] = c.hi.d[0];
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F64u);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002F6F64u) [[unlikely]] return; }
L_002F6F64:
    set32(c.r[3], ld32((c.r[2].w[0] + 840u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[3].w[0] + 132u));
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F7Cu);  if (depth < kMaxDepth) unit_0062(c, 74u, depth + 1u); else { c.pc = 0x00289768u; return; } if (c.pc != 0x002F6F7Cu) [[unlikely]] return; }
L_002F6F7C:
    set32(c.r[17], ld32((c.r[2].w[0] + 840u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6F8Cu);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002F6F8Cu) [[unlikely]] return; }
L_002F6F8C:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    set32(c.r[2], 0u + 2200u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[1] = fp::sub(c.f[1], c.f[20]);
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002F6FA4u);  goto L_002F6FA8; }
L_002F6FA8:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], 0u - 1u);
    set32(c.r[8], 0u + 1u);
    c.r[3].d[0] = c.hi.d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F6FD8u);  if (depth < kMaxDepth) unit_0061(c, 359u, depth + 1u); else { c.pc = 0x00287B70u; return; } if (c.pc != 0x002F6FD8u) [[unlikely]] return; }
L_002F6FD8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F7088; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 224u)));
    set32(c.r[6], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] + 204u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7004u);  if (depth < kMaxDepth) unit_0061(c, 277u, depth + 1u); else { c.pc = 0x00286A58u; return; } if (c.pc != 0x002F7004u) [[unlikely]] return; }
L_002F7004:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7010u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037B3B8u; return; } if (c.pc != 0x002F7010u) [[unlikely]] return; }
L_002F7010:
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[2].w[0] + 7u);
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    if (c.r[4].d[0] != 0) c.r[3].d[0] = c.r[2].d[0];
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 3));
    set32(c.r[4], ld32((c.r[17].w[0] + 224u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7044u);  if (depth < kMaxDepth) unit_0065(c, 283u, depth + 1u); else { c.pc = 0x00297028u; return; } if (c.pc != 0x002F7044u) [[unlikely]] return; }
L_002F7044:
    set32(c.r[4], ld32((c.r[17].w[0] + 224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7050u);  if (depth < kMaxDepth) unit_0064(c, 227u, depth + 1u); else { c.pc = 0x00293600u; return; } if (c.pc != 0x002F7050u) [[unlikely]] return; }
L_002F7050:
    set32(c.r[16], ld32((c.r[17].w[0] + 840u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 19144u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F706Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002F706Cu) [[unlikely]] return; }
L_002F706C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 6u);
    st16((c.r[16].w[0] + 10240u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[16].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F708C; } }
L_002F7088:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F708C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[20] = ld32((c.r[29].w[0] + 96u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F70B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 24016u);
    set32(c.r[3], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + 20u);
    c.budget -= 6;
L_002F70C8:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F70C8u | kUnwind; return; } goto L_002F70C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 23960u);
    set32(c.r[3], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] + 52u);
    c.budget -= 6;
L_002F70F8:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F70F8u | kUnwind; return; } goto L_002F70F8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7118:
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002F7144; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7138:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 23960u);
    c.budget -= 3;
L_002F7150:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7138u | kUnwind; return; } goto L_002F7138; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7150u | kUnwind; return; } goto L_002F7150; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7180:
    set32(c.r[4], c.r[4].w[0] << 16);
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002F71AC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F71A0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F71AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] + 24016u);
    c.budget -= 3;
L_002F71B8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F71A0u | kUnwind; return; } goto L_002F71A0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F71B8u | kUnwind; return; } goto L_002F71B8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F71E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24016u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7208:
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    set32(c.r[3], c.r[2].w[0] + 24016u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
L_002F7220:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002F7238; } }
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7238:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7220u | kUnwind; return; } goto L_002F7220; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7258:
    set32(c.r[4], c.r[4].w[0] << 16);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 16));
    set32(c.r[3], c.r[2].w[0] + 24016u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
L_002F7270:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002F7288; } }
    st32((c.r[3].w[0]), c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7288:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7270u | kUnwind; return; } goto L_002F7270; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F72A8:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[2], c.r[8].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002F72E0; } }
    set32(c.r[9], c.r[5].w[0] << 2);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7318; } }
L_002F72E0:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], c.r[5].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[10].w[0] + 23960u);
    c.budget -= 6;
L_002F72F8:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_002F7318; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F72F8u | kUnwind; return; } goto L_002F72F8; } }
L_002F7318:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[2], c.r[10].w[0] + 23960u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 7694u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7340:
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[2], c.r[8].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], 0u - 1u);
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002F7378; } }
    set32(c.r[9], c.r[5].w[0] << 2);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F73B0; } }
L_002F7378:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[9], c.r[5].w[0] << 2);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[10].w[0] + 24016u);
    c.budget -= 6;
L_002F7390:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { goto L_002F73B0; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.r[2].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F7390u | kUnwind; return; } goto L_002F7390; } }
L_002F73B0:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[2], c.r[10].w[0] + 24016u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[2], c.r[9].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[8].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 10924u), static_cast<std::uint16_t>(c.r[8].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F73D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] + 14792u)));
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002F73FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F73FCu);  if (depth < kMaxDepth) unit_0089(c, 302u, depth + 1u); else { c.pc = 0x00327870u; return; } if (c.pc != 0x002F73FCu) [[unlikely]] return; }
L_002F73FC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7410:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[29].d[0] | 4ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], c.r[2].w[0] - 18864u);
    ldl(c.r[3], (c.r[8].w[0] + 7u));
    ldr(c.r[3], (c.r[8].w[0]));
    sdl(c.r[3], (c.r[29].w[0] + 7u));
    sdr(c.r[3], (c.r[29].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F744Cu);  if (depth < kMaxDepth) unit_0039(c, 422u, depth + 1u); else { c.pc = 0x001E7F60u; return; } if (c.pc != 0x002F744Cu) [[unlikely]] return; }
L_002F744C:
    set32(c.r[6], ld32((c.r[29].w[0])));
    set32(c.r[2], 0u - 1u);
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002F74AC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F748Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F748Cu) [[unlikely]] return; }
L_002F748C:
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    st32((c.r[17].w[0] + 128u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[17].w[0] + 132u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F74D4; } }
L_002F74AC:
    st32((c.r[17].w[0] + 128u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x459C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    st32((c.r[17].w[0] + 132u), 0u);
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74D4u);  if (depth < kMaxDepth) unit_0089(c, 195u, depth + 1u); else { c.pc = 0x00326150u; return; } if (c.pc != 0x002F74D4u) [[unlikely]] return; }
L_002F74D4:
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F74E8u);  if (depth < kMaxDepth) unit_003C(c, 261u, depth + 1u); else { c.pc = 0x001F2B60u; return; } if (c.pc != 0x002F74E8u) [[unlikely]] return; }
L_002F74E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 12904u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[2].w[0] + 12904u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F7668; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24044u)));
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { goto L_002F7594; } }
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F7594; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7574u);  if (depth < kMaxDepth) unit_0018(c, 304u, depth + 1u); else { c.pc = 0x00162A58u; return; } if (c.pc != 0x002F7574u) [[unlikely]] return; }
L_002F7574:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002F7594; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F758Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F758Cu) [[unlikely]] return; }
L_002F758C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7668; } }
L_002F7594:
    set32(c.r[3], c.r[19].w[0] + 12904u);
    c.f[3] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[3]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F75E4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 12904u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[18].w[0] + 24044u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st32((c.r[19].w[0] + 12904u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002F7668; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F75DCu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F75DCu) [[unlikely]] return; }
L_002F75DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7668; } }
L_002F75E4:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F7614; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 12u), c.f[2]);
    st32((c.r[18].w[0] + 24044u), c.r[2].w[0]);
    st32((c.r[3].w[0] + 16u), c.f[3]);
    c.budget -= 4;
L_002F7614:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F7640; } }
    st32((c.r[3].w[0] + 12u), c.f[1]);
    st32((c.r[3].w[0] + 16u), c.f[3]);
    st32((c.r[18].w[0] + 24044u), 0u);
    c.budget -= 3;
L_002F7640:
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    set32(c.r[2], 0u + 8u);
    st32((c.r[19].w[0] + 12904u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[1]);
    c.r[5].d[0] = 0ull + 0ull;
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7668u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F7668u) [[unlikely]] return; }
L_002F7668:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7688:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + 12904u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F7774; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76B0u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x002F76B0u) [[unlikely]] return; }
L_002F76B0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 44u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F76D0u);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x002F76D0u) [[unlikely]] return; }
L_002F76D0:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[7], 0u + 254u);
    set32(c.r[4], 0u + 1024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[1].w[0];
    st16((c.r[2].w[0] + 316u), static_cast<std::uint16_t>(0u));
    set32(c.r[8], 0u + 2096u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], c.r[6].w[0] + 29952u);
    set32(c.r[5], 0u + 1u);
    st16((c.r[3].w[0] + 318u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[2].w[0] + 320u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[3].w[0] + 312u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 480u)));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[2].w[0] + 308u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[3].w[0] + 310u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 192u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 120u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[3].w[0] + 314u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[3].w[0] + 516u), c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7774u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F7774u) [[unlikely]] return; }
L_002F7774:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7788:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[19], c.r[2].w[0] + 12904u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F7950; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77CCu);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x002F77CCu) [[unlikely]] return; }
L_002F77CC:
    set32(c.r[16], 0u + 1024u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[19].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F77F0u);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x002F77F0u) [[unlikely]] return; }
L_002F77F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[6], 0u + 253u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[18], 0u + 2096u);
    st16((c.r[2].w[0] + 316u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    set32(c.r[4], c.r[4].w[0] + 29952u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[17], 0u + 23u);
    st16((c.r[2].w[0] + 318u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st16((c.r[2].w[0] + 312u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st16((c.r[3].w[0] + 308u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st16((c.r[2].w[0] + 310u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[3].w[0] + 192u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[2].w[0] + 196u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[3].w[0] + 120u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st16((c.r[2].w[0] + 314u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 20u)));
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    st32((c.r[2].w[0] + 516u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 20u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7884u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F7884u) [[unlikely]] return; }
L_002F7884:
    set32(c.r[2], ld32((c.r[19].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 480u)));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F789Cu);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x002F789Cu) [[unlikely]] return; }
L_002F789C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 75u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F78BCu);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x002F78BCu) [[unlikely]] return; }
L_002F78BC:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[6], 0u + 254u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[0] = c.r[1].w[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    st16((c.r[2].w[0] + 316u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 31568u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st16((c.r[2].w[0] + 318u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    st16((c.r[3].w[0] + 320u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st16((c.r[2].w[0] + 312u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    st16((c.r[3].w[0] + 308u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st16((c.r[2].w[0] + 310u), static_cast<std::uint16_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[3].w[0] + 192u), c.f[20]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[2].w[0] + 196u), c.f[0]);
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[3].w[0] + 120u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st16((c.r[2].w[0] + 314u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[19].w[0] + 24u)));
    st16((c.r[3].w[0] + 322u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    st32((c.r[2].w[0] + 516u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 24u)));
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7940u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F7940u) [[unlikely]] return; }
L_002F7940:
    set32(c.r[2], ld32((c.r[19].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 480u)));
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[17].w[0]));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 4;
L_002F7950:
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
L_002F7978:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[3].w[0] + 12904u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 12904u), 0u);
    st32((c.r[2].w[0] + 24044u), 0u);
    st32((c.r[16].w[0] + 12u), c.f[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    st16((c.r[6].w[0] + 322u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79C4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F79C4u) [[unlikely]] return; }
L_002F79C4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F79D4u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F79D4u) [[unlikely]] return; }
L_002F79D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F79E8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12924u)));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7A00:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12904u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7A10:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    c.f[0] = ld32((c.r[3].w[0] + 12916u));
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F7A30; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F7A30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 12912u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7A48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12912u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7A58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37F0000u);
    c.f[0] = c.r[1].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[6].w[0] + 12904u);
    set32(c.r[4], 0u + 1u);
    fpu_div(c, 0u, c.f[0], c.f[12]);
    set32(c.r[7], ld32((c.r[3].w[0] + 20u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st32((c.r[6].w[0] + 12904u), c.r[4].w[0]);
    set32(c.r[5], 0u + 255u);
    st32((c.r[2].w[0] + 24044u), 0u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.f[1]);
    st16((c.r[7].w[0] + 322u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st32((c.r[3].w[0] + 16u), c.f[0]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7AB0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42FE0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[5].w[0] + 12904u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    c.f[1] = ld32((c.r[4].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 24044u), 0u);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    st32((c.r[5].w[0] + 12904u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F7B0C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 12u), c.f[0]);
    st32((c.r[4].w[0] + 16u), 0u);
    st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[5].w[0] + 12904u), 0u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7B0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    fpu_div(c, 0u, c.f[0], c.f[12]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    st32((c.r[4].w[0] + 12u), c.f[1]);
    st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7B40:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12912u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7B50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 12912u)));
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[17].d[0];  if (t) { goto L_002F7BE8; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7B84u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F7B84u) [[unlikely]] return; }
L_002F7B84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44080000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43D00000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], 0u + 255u);
    set32(c.r[7], ld32((c.r[16].w[0] + 480u)));
    set32(c.r[3], 0u + 254u);
    set32(c.r[5], 0u + 2096u);
    set32(c.r[6], 0u + 127u);
    st16((c.r[16].w[0] + 316u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 312u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 192u), c.f[1]);
    st32((c.r[16].w[0] + 196u), c.f[0]);
    st32((c.r[16].w[0] + 120u), c.r[5].w[0]);
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 318u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 320u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 308u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 310u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 314u), static_cast<std::uint16_t>(0u));
    st16((c.r[7].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[7].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 25;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7C20; } }
L_002F7BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[1] = ld32((c.r[2].w[0] + 12932u));
    c.f[0] = ld32((c.r[3].w[0] + 12936u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F7C0C; } }
    st32((c.r[3].w[0] + 12936u), c.f[1]);
    c.budget -= 1;
L_002F7C0C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C1Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F7C1Cu) [[unlikely]] return; }
L_002F7C1C:
    st16((c.r[16].w[0] + 322u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 1;
L_002F7C20:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7C38:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 1024u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C64u);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x002F7C64u) [[unlikely]] return; }
L_002F7C64:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[16], c.r[16].w[0] + 12904u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7C8Cu);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x002F7C8Cu) [[unlikely]] return; }
L_002F7C8C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[6], 0u + 253u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[7], 0u + 2096u);
    st16((c.r[2].w[0] + 316u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + 29952u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[5], 0u + 1u);
    st16((c.r[3].w[0] + 318u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[2].w[0] + 320u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[3].w[0] + 312u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[2].w[0] + 308u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[3].w[0] + 310u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 192u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[2].w[0] + 120u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[3].w[0] + 314u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    st32((c.r[3].w[0] + 516u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D1Cu);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F7D1Cu) [[unlikely]] return; }
L_002F7D1C:
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[2].w[0] + 480u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[18].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7D50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 23u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7D7Cu);  if (depth < kMaxDepth) unit_0083(c, 274u, depth + 1u); else { c.pc = 0x0030F670u; return; } if (c.pc != 0x002F7D7Cu) [[unlikely]] return; }
L_002F7D7C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00060000u);
    set32(c.r[16], c.r[16].w[0] + 12904u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 178ull;
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7DA4u);  if (depth < kMaxDepth) unit_0083(c, 304u, depth + 1u); else { c.pc = 0x0030FAF8u; return; } if (c.pc != 0x002F7DA4u) [[unlikely]] return; }
L_002F7DA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[6], 0u + 254u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[7], 0u + 2096u);
    st16((c.r[2].w[0] + 316u), static_cast<std::uint16_t>(0u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] + 31568u);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    st16((c.r[3].w[0] + 318u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[2].w[0] + 320u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[3].w[0] + 312u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[2].w[0] + 308u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[3].w[0] + 310u), static_cast<std::uint16_t>(c.r[18].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 192u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 196u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[2].w[0] + 120u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[3].w[0] + 314u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    st16((c.r[2].w[0] + 322u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[3].w[0] + 516u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E34u);  if (depth < kMaxDepth) unit_0089(c, 198u, depth + 1u); else { c.pc = 0x003261D8u; return; } if (c.pc != 0x002F7E34u) [[unlikely]] return; }
L_002F7E34:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[2].w[0] + 480u)));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[18].w[0]));
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[18].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + 12904u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F7EAC; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 480u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7E9Cu);  if (depth < kMaxDepth) unit_0049(c, 238u, depth + 1u); else { c.pc = 0x00226E40u; return; } if (c.pc != 0x002F7E9Cu) [[unlikely]] return; }
L_002F7E9C:
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EA8u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002F7EA8u) [[unlikely]] return; }
L_002F7EA8:
    st32((c.r[16].w[0] + 20u), 0u);
    c.budget -= 1;
L_002F7EAC:
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F7ED4; } }
    set32(c.r[4], ld32((c.r[2].w[0] + 480u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7EC4u);  if (depth < kMaxDepth) unit_0049(c, 238u, depth + 1u); else { c.pc = 0x00226E40u; return; } if (c.pc != 0x002F7EC4u) [[unlikely]] return; }
L_002F7EC4:
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7ED0u);  if (depth < kMaxDepth) unit_0043(c, 21u, depth + 1u); else { c.pc = 0x0020C5D8u; return; } if (c.pc != 0x002F7ED0u) [[unlikely]] return; }
L_002F7ED0:
    st32((c.r[16].w[0] + 24u), 0u);
    c.budget -= 1;
L_002F7ED4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7EE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = 0ull | 65535ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002F7F54; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F7F2C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24048u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F14u);  if (depth < kMaxDepth) unit_007B(c, 46u, depth + 1u); else { c.pc = 0x002EC708u; return; } if (c.pc != 0x002F7F14u) [[unlikely]] return; }
L_002F7F14:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[4], c.r[4].w[0] + 24064u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F24u);  if (depth < kMaxDepth) unit_0088(c, 193u, depth + 1u); else { c.pc = 0x00322000u; return; } if (c.pc != 0x002F7F24u) [[unlikely]] return; }
L_002F7F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F7F54; } }
L_002F7F2C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 24064u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F40u);  if (depth < kMaxDepth) unit_0088(c, 195u, depth + 1u); else { c.pc = 0x00322048u; return; } if (c.pc != 0x002F7F40u) [[unlikely]] return; }
L_002F7F40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] + 24048u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F54u);  if (depth < kMaxDepth) unit_007B(c, 47u, depth + 1u); else { c.pc = 0x002EC720u; return; } if (c.pc != 0x002F7F54u) [[unlikely]] return; }
L_002F7F54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F7F68:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F7Cu);  if (depth < kMaxDepth) unit_0043(c, 16u, depth + 1u); else { c.pc = 0x0020C4B8u; return; } if (c.pc != 0x002F7F7Cu) [[unlikely]] return; }
L_002F7F7C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 17200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7F8Cu);  if (depth < kMaxDepth) unit_0071(c, 228u, depth + 1u); else { c.pc = 0x002C6520u; return; } if (c.pc != 0x002F7F8Cu) [[unlikely]] return; }
L_002F7F8C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00750000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004D0000u);
    set32(c.r[16], c.r[16].w[0] + 14040u);
    set32(c.r[6], 0u + 7169u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 14864u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FACu);  if (depth < kMaxDepth) unit_009C(c, 110u, depth + 1u); else { c.pc = 0x00370B60u; return; } if (c.pc != 0x002F7FACu) [[unlikely]] return; }
L_002F7FAC:
    set32(c.r[5], 0u + 15u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FBCu);  if (depth < kMaxDepth) unit_009C(c, 61u, depth + 1u); else { c.pc = 0x00370798u; return; } if (c.pc != 0x002F7FBCu) [[unlikely]] return; }
L_002F7FBC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FC8u);  if (depth < kMaxDepth) unit_009C(c, 65u, depth + 1u); else { c.pc = 0x003707E8u; return; } if (c.pc != 0x002F7FC8u) [[unlikely]] return; }
L_002F7FC8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 29328u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FD8u);  if (depth < kMaxDepth) unit_009E(c, 330u, depth + 1u); else { c.pc = 0x0037B4F0u; return; } if (c.pc != 0x002F7FD8u) [[unlikely]] return; }
L_002F7FD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00750000u);
    set32(c.r[4], c.r[4].w[0] + 28288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FE8u);  if (depth < kMaxDepth) unit_009E(c, 237u, depth + 1u); else { c.pc = 0x0037AA90u; return; } if (c.pc != 0x002F7FE8u) [[unlikely]] return; }
L_002F7FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FF0u);  if (depth < kMaxDepth) unit_0044(c, 55u, depth + 1u); else { c.pc = 0x002114D8u; return; } if (c.pc != 0x002F7FF0u) [[unlikely]] return; }
L_002F7FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F7FF8u);  if (depth < kMaxDepth) unit_0044(c, 165u, depth + 1u); else { c.pc = 0x00212DD0u; return; } if (c.pc != 0x002F7FF8u) [[unlikely]] return; }
L_002F7FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8000u);  if (depth < kMaxDepth) unit_0039(c, 365u, depth + 1u); else { c.pc = 0x001E7240u; return; } if (c.pc != 0x002F8000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_007E(c, 1u, depth);
}

}
