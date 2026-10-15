#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007B[4096] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0,
    0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260,
};

void unit_007B(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002EC000;
    case 2u: goto L_002EC004;
    case 3u: goto L_002EC00C;
    case 4u: goto L_002EC028;
    case 5u: goto L_002EC070;
    case 6u: goto L_002EC0A4;
    case 7u: goto L_002EC0CC;
    case 8u: goto L_002EC0E8;
    case 9u: goto L_002EC0F8;
    case 10u: goto L_002EC130;
    case 11u: goto L_002EC158;
    case 12u: goto L_002EC174;
    case 13u: goto L_002EC188;
    case 14u: goto L_002EC194;
    case 15u: goto L_002EC1CC;
    case 16u: goto L_002EC1F4;
    case 17u: goto L_002EC214;
    case 18u: goto L_002EC228;
    case 19u: goto L_002EC234;
    case 20u: goto L_002EC260;
    case 21u: goto L_002EC2C0;
    case 22u: goto L_002EC2C8;
    case 23u: goto L_002EC2F4;
    case 24u: goto L_002EC368;
    case 25u: goto L_002EC398;
    case 26u: goto L_002EC41C;
    case 27u: goto L_002EC44C;
    case 28u: goto L_002EC478;
    case 29u: goto L_002EC490;
    case 30u: goto L_002EC4A8;
    case 31u: goto L_002EC4E0;
    case 32u: goto L_002EC4FC;
    case 33u: goto L_002EC514;
    case 34u: goto L_002EC528;
    case 35u: goto L_002EC540;
    case 36u: goto L_002EC544;
    case 37u: goto L_002EC578;
    case 38u: goto L_002EC5D0;
    case 39u: goto L_002EC5F8;
    case 40u: goto L_002EC614;
    case 41u: goto L_002EC630;
    case 42u: goto L_002EC644;
    case 43u: goto L_002EC698;
    case 44u: goto L_002EC6B4;
    case 45u: goto L_002EC6C8;
    case 46u: goto L_002EC708;
    case 47u: goto L_002EC720;
    case 48u: goto L_002EC73C;
    case 49u: goto L_002EC750;
    case 50u: goto L_002EC780;
    case 51u: goto L_002EC798;
    case 52u: goto L_002EC7F4;
    case 53u: goto L_002EC824;
    case 54u: goto L_002EC840;
    case 55u: goto L_002EC878;
    case 56u: goto L_002EC888;
    case 57u: goto L_002EC8B4;
    case 58u: goto L_002EC8E8;
    case 59u: goto L_002EC918;
    case 60u: goto L_002EC960;
    case 61u: goto L_002EC998;
    case 62u: goto L_002EC9B8;
    case 63u: goto L_002EC9C0;
    case 64u: goto L_002EC9D8;
    case 65u: goto L_002ECA00;
    case 66u: goto L_002ECA24;
    case 67u: goto L_002ECA40;
    case 68u: goto L_002ECA64;
    case 69u: goto L_002ECA88;
    case 70u: goto L_002ECAD0;
    case 71u: goto L_002ECB1C;
    case 72u: goto L_002ECB78;
    case 73u: goto L_002ECC68;
    case 74u: goto L_002ECCB0;
    case 75u: goto L_002ECCC8;
    case 76u: goto L_002ECDE0;
    case 77u: goto L_002ECE58;
    case 78u: goto L_002ECEB4;
    case 79u: goto L_002ECEF8;
    case 80u: goto L_002ECF1C;
    case 81u: goto L_002ECF34;
    case 82u: goto L_002ECF68;
    case 83u: goto L_002ECFE8;
    case 84u: goto L_002ED044;
    case 85u: goto L_002ED07C;
    case 86u: goto L_002ED0B0;
    case 87u: goto L_002ED0E8;
    case 88u: goto L_002ED0F8;
    case 89u: goto L_002ED118;
    case 90u: goto L_002ED198;
    case 91u: goto L_002ED1F8;
    case 92u: goto L_002ED234;
    case 93u: goto L_002ED268;
    case 94u: goto L_002ED2A4;
    case 95u: goto L_002ED2C4;
    case 96u: goto L_002ED2E8;
    case 97u: goto L_002ED30C;
    case 98u: goto L_002ED340;
    case 99u: goto L_002ED39C;
    case 100u: goto L_002ED464;
    case 101u: goto L_002ED48C;
    case 102u: goto L_002ED5C0;
    case 103u: goto L_002ED610;
    case 104u: goto L_002ED628;
    case 105u: goto L_002ED650;
    case 106u: goto L_002ED698;
    case 107u: goto L_002ED6D0;
    case 108u: goto L_002ED760;
    case 109u: goto L_002ED790;
    case 110u: goto L_002ED7AC;
    case 111u: goto L_002ED7D4;
    case 112u: goto L_002ED7FC;
    case 113u: goto L_002ED8E8;
    case 114u: goto L_002EDBE8;
    case 115u: goto L_002EDC18;
    case 116u: goto L_002EDC98;
    case 117u: goto L_002EDCF4;
    case 118u: goto L_002EDD20;
    case 119u: goto L_002EDD40;
    case 120u: goto L_002EDD8C;
    case 121u: goto L_002EDDC0;
    case 122u: goto L_002EDDCC;
    case 123u: goto L_002EDE30;
    case 124u: goto L_002EDE78;
    case 125u: goto L_002EDEB0;
    case 126u: goto L_002EDEBC;
    case 127u: goto L_002EDED0;
    case 128u: goto L_002EDEEC;
    case 129u: goto L_002EDF0C;
    case 130u: goto L_002EDF98;
    case 131u: goto L_002EE030;
    case 132u: goto L_002EE054;
    case 133u: goto L_002EE090;
    case 134u: goto L_002EE0E0;
    case 135u: goto L_002EE1AC;
    case 136u: goto L_002EE1E0;
    case 137u: goto L_002EE240;
    case 138u: goto L_002EE300;
    case 139u: goto L_002EE388;
    case 140u: goto L_002EE3DC;
    case 141u: goto L_002EE428;
    case 142u: goto L_002EE588;
    case 143u: goto L_002EE5CC;
    case 144u: goto L_002EE624;
    case 145u: goto L_002EE63C;
    case 146u: goto L_002EE670;
    case 147u: goto L_002EE7B4;
    case 148u: goto L_002EE7C0;
    case 149u: goto L_002EE82C;
    case 150u: goto L_002EE840;
    case 151u: goto L_002EE898;
    case 152u: goto L_002EE8AC;
    case 153u: goto L_002EE8D0;
    case 154u: goto L_002EE938;
    case 155u: goto L_002EE964;
    case 156u: goto L_002EE978;
    case 157u: goto L_002EE9E8;
    case 158u: goto L_002EE9FC;
    case 159u: goto L_002EEA64;
    case 160u: goto L_002EEA78;
    case 161u: goto L_002EEAF0;
    case 162u: goto L_002EEB04;
    case 163u: goto L_002EEBF4;
    case 164u: goto L_002EEC24;
    case 165u: goto L_002EEC68;
    case 166u: goto L_002EED04;
    case 167u: goto L_002EED2C;
    case 168u: goto L_002EED70;
    case 169u: goto L_002EEE40;
    case 170u: goto L_002EEE60;
    case 171u: goto L_002EEE90;
    case 172u: goto L_002EEEB0;
    case 173u: goto L_002EEEE4;
    case 174u: goto L_002EEF60;
    case 175u: goto L_002EEFBC;
    case 176u: goto L_002EEFFC;
    case 177u: goto L_002EF080;
    case 178u: goto L_002EF0B4;
    case 179u: goto L_002EF208;
    case 180u: goto L_002EF28C;
    case 181u: goto L_002EF2B0;
    case 182u: goto L_002EF2C8;
    case 183u: goto L_002EF37C;
    case 184u: goto L_002EF3F8;
    case 185u: goto L_002EF48C;
    case 186u: goto L_002EF4C0;
    case 187u: goto L_002EF508;
    case 188u: goto L_002EF518;
    case 189u: goto L_002EF534;
    case 190u: goto L_002EF560;
    case 191u: goto L_002EF574;
    case 192u: goto L_002EF588;
    case 193u: goto L_002EF5A0;
    case 194u: goto L_002EF5AC;
    case 195u: goto L_002EF5DC;
    case 196u: goto L_002EF600;
    case 197u: goto L_002EF614;
    case 198u: goto L_002EF638;
    case 199u: goto L_002EF64C;
    case 200u: goto L_002EF674;
    case 201u: goto L_002EF688;
    case 202u: goto L_002EF6B0;
    case 203u: goto L_002EF6C4;
    case 204u: goto L_002EF6D4;
    case 205u: goto L_002EF710;
    case 206u: goto L_002EF780;
    case 207u: goto L_002EF7B8;
    case 208u: goto L_002EF7E8;
    case 209u: goto L_002EF7F8;
    case 210u: goto L_002EF844;
    case 211u: goto L_002EF858;
    case 212u: goto L_002EF870;
    case 213u: goto L_002EF884;
    case 214u: goto L_002EF8C4;
    case 215u: goto L_002EF8D8;
    case 216u: goto L_002EF8F0;
    case 217u: goto L_002EF900;
    case 218u: goto L_002EF924;
    case 219u: goto L_002EF938;
    case 220u: goto L_002EF95C;
    case 221u: goto L_002EF970;
    case 222u: goto L_002EF998;
    case 223u: goto L_002EF9AC;
    case 224u: goto L_002EF9D4;
    case 225u: goto L_002EF9E8;
    case 226u: goto L_002EF9F8;
    case 227u: goto L_002EFA28;
    case 228u: goto L_002EFA88;
    case 229u: goto L_002EFAC4;
    case 230u: goto L_002EFAF8;
    case 231u: goto L_002EFB2C;
    case 232u: goto L_002EFB84;
    case 233u: goto L_002EFB94;
    case 234u: goto L_002EFBC8;
    case 235u: goto L_002EFBE8;
    case 236u: goto L_002EFBFC;
    case 237u: goto L_002EFC10;
    case 238u: goto L_002EFC28;
    case 239u: goto L_002EFC58;
    case 240u: goto L_002EFC80;
    case 241u: goto L_002EFCF0;
    case 242u: goto L_002EFD0C;
    case 243u: goto L_002EFD58;
    case 244u: goto L_002EFD68;
    case 245u: goto L_002EFDD0;
    case 246u: goto L_002EFDF8;
    case 247u: goto L_002EFE54;
    case 248u: goto L_002EFEB8;
    case 249u: goto L_002EFEC8;
    case 250u: goto L_002EFEE0;
    case 251u: goto L_002EFEF8;
    case 252u: goto L_002EFF08;
    case 253u: goto L_002EFF20;
    case 254u: goto L_002EFF48;
    case 255u: goto L_002EFF64;
    case 256u: goto L_002EFF78;
    case 257u: goto L_002EFF9C;
    case 258u: goto L_002EFFB4;
    case 259u: goto L_002EFFD8;
    case 260u: goto L_002EFFFC;
    default: bad_entry(c, 0x002EC000u); return;
    }
L_002EC000:
    c.budget -= 1;
L_002EC004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EBF48u | kUnwind; return; } [[clang::musttail]] return unit_007A(c, 314u, depth); } }
L_002EC00C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EC028:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC070u);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x002EC070u) [[unlikely]] return; }
L_002EC070:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[23].w[0])));
    set32(c.r[4], c.r[2].w[0] - 3u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EC540; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 21488u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002EC000u < 16384u) { entry = entries_007B[(t - 0x002EC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002EC0A4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], c.r[8].w[0] - 21544u);
    set32(c.r[9], 0u + 334u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 21608u);
    set32(c.r[5], 0u + 52u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0CCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EC0CCu) [[unlikely]] return; }
L_002EC0CC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], c.r[19].w[0] + 24u);
    set32(c.r[7], c.r[19].w[0] + 36u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0E8u);  if (depth < kMaxDepth) unit_007A(c, 308u, depth + 1u); else { c.pc = 0x002EBD30u; return; } if (c.pc != 0x002EC0E8u) [[unlikely]] return; }
L_002EC0E8:
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC0F8u);  if (depth < kMaxDepth) unit_007B(c, 60u, depth + 1u); else { c.pc = 0x002EC960u; return; } if (c.pc != 0x002EC0F8u) [[unlikely]] return; }
L_002EC0F8:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = ld32((c.r[18].w[0] + 48u));
    st32((c.r[19].w[0] + 8u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    st32((c.r[19].w[0] + 12u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 56u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 60u));
    st32((c.r[19].w[0] + 48u), c.f[2]);
    st32((c.r[19].w[0] + 20u), c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC544; } }
L_002EC130:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 21608u);
    set32(c.r[8], c.r[8].w[0] - 21544u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 367u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], 0u + 12u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC158u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EC158u) [[unlikely]] return; }
L_002EC158:
    set32(c.r[3], ld32((c.r[23].w[0] + 4u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[19].w[0]), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 60u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC174u);  if (depth < kMaxDepth) unit_007B(c, 60u, depth + 1u); else { c.pc = 0x002EC960u; return; } if (c.pc != 0x002EC174u) [[unlikely]] return; }
L_002EC174:
    st32((c.r[19].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC188u);  if (depth < kMaxDepth) unit_007B(c, 60u, depth + 1u); else { c.pc = 0x002EC960u; return; } if (c.pc != 0x002EC188u) [[unlikely]] return; }
L_002EC188:
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC544; } }
L_002EC194:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] - 21608u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + 48u);
    set32(c.r[8], c.r[8].w[0] - 21544u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[9], 0u + 406u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1CCu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EC1CCu) [[unlikely]] return; }
L_002EC1CC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[19], c.r[19].w[0] + 48u);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC1F4u);  if (depth < kMaxDepth) unit_007B(c, 60u, depth + 1u); else { c.pc = 0x002EC960u; return; } if (c.pc != 0x002EC1F4u) [[unlikely]] return; }
L_002EC1F4:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[16].w[0] + 8u), 0u);
    set32(c.r[5], c.r[5].w[0] - 21528u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC214u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x002EC214u) [[unlikely]] return; }
L_002EC214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC240; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC228u);  if (depth < kMaxDepth) unit_00DD(c, 224u, depth + 1u); else { c.pc = 0x004768E0u; return; } if (c.pc != 0x002EC228u) [[unlikely]] return; }
L_002EC228:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC234u);  if (depth < kMaxDepth) unit_0040(c, 257u, depth + 1u); else { c.pc = 0x00202DE8u; return; } if (c.pc != 0x002EC234u) [[unlikely]] return; }
L_002EC234:
    st32((c.r[16].w[0] + 44u), c.f[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC244; } }
L_002EC240:
    st32((c.r[16].w[0] + 44u), 0u);
    c.budget -= 1;
L_002EC244:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002EC29C; } }
    c.budget -= 1;
L_002EC260:
    c.f[1] = ld32((c.r[4].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[3].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[3].w[0] + 8u), c.f[1]);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] + 16u);
    st32((c.r[3].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC260u | kUnwind; return; } goto L_002EC260; } }
L_002EC29C:
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.r[19].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 48u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[19].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC2C0u);  if (depth < kMaxDepth) unit_0085(c, 242u, depth + 1u); else { c.pc = 0x00316740u; return; } if (c.pc != 0x002EC2C0u) [[unlikely]] return; }
L_002EC2C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC544; } }
L_002EC2C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[2].w[0] - 3028u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 21608u);
    set32(c.r[8], c.r[8].w[0] - 21544u);
    set32(c.r[5], 0u + 40u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 465u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC2F4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EC2F4u) [[unlikely]] return; }
L_002EC2F4:
    c.f[1] = ld32((c.r[18].w[0] + 12u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[19].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 16u));
    st32((c.r[19].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 20u));
    st32((c.r[19].w[0] + 8u), c.f[1]);
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EC328; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC32C; } }
L_002EC328:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002EC32C:
    st32((c.r[19].w[0] + 24u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[19].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[19].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[19].w[0] + 28u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[19].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[19].w[0] + 36u), c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC544; } }
L_002EC368:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 21608u);
    set32(c.r[17], c.r[17].w[0] - 21544u);
    set32(c.r[5], 0u + 80u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 504u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC398u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EC398u) [[unlikely]] return; }
L_002EC398:
    c.r[21].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 16u)));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 535u);
    set32(c.r[2], ld32((c.r[18].w[0] + 12u)));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[19].w[0] + 8u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 24u));
    st32((c.r[19].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 28u));
    st32((c.r[19].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[19].w[0] + 44u), 0u);
    st32((c.r[19].w[0] + 40u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[19].w[0] + 52u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[19].w[0] + 60u), 0u);
    st32((c.r[19].w[0] + 56u), c.f[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 12u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC41Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EC41Cu) [[unlikely]] return; }
L_002EC41C:
    st32((c.r[19].w[0] + 64u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 12u);
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 16u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 537u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC44Cu);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EC44Cu) [[unlikely]] return; }
L_002EC44C:
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[18].w[0] + 20u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 539u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC478u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EC478u) [[unlikely]] return; }
L_002EC478:
    st32((c.r[19].w[0] + 72u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[17], ld32((c.r[19].w[0] + 64u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC4C0; } }
L_002EC490:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 12u);
    set32(c.r[21], c.r[21].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4A8u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002EC4A8u) [[unlikely]] return; }
L_002EC4A8:
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[16], c.r[16].w[0] + 12u);
    c.r[2].d[0] = c.r[21].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC490u | kUnwind; return; } goto L_002EC490; } }
L_002EC4C0:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[6], 0u + 12u);
    set32(c.r[4], ld32((c.r[19].w[0] + 68u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 52u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4E0u);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002EC4E0u) [[unlikely]] return; }
L_002EC4E0:
    set32(c.r[6], ld32((c.r[19].w[0] + 8u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 56u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[19].w[0] + 72u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC4FCu);  if (depth < kMaxDepth) unit_0043(c, 267u, depth + 1u); else { c.pc = 0x0020FDE0u; return; } if (c.pc != 0x002EC4FCu) [[unlikely]] return; }
L_002EC4FC:
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[5].w[0] - 21512u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC514u);  if (depth < kMaxDepth) unit_0090(c, 155u, depth + 1u); else { c.pc = 0x00341628u; return; } if (c.pc != 0x002EC514u) [[unlikely]] return; }
L_002EC514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC534; } }
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC528u);  if (depth < kMaxDepth) unit_00DD(c, 226u, depth + 1u); else { c.pc = 0x00476900u; return; } if (c.pc != 0x002EC528u) [[unlikely]] return; }
L_002EC528:
    st32((c.r[19].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC544; } }
L_002EC534:
    st32((c.r[19].w[0] + 12u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC544; } }
L_002EC540:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EC544:
    st32((c.r[23].w[0] + 8u), c.r[19].w[0]);
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
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EC578:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    c.r[17].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 48u), c.r[6].w[0]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.f[12] = ld32((c.r[18].w[0]));
    c.f[13] = ld32((c.r[18].w[0] + 4u));
    c.f[14] = ld32((c.r[18].w[0] + 8u));
    c.f[15] = ld32((c.r[18].w[0] + 12u));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC5D0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EC5D0u) [[unlikely]] return; }
L_002EC5D0:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[22], c.r[29].w[0] + 16u);
    set32(c.r[23], c.r[29].w[0] + 32u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002EC670; } }
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = c.r[22].d[0] + 0ull;
    c.r[20].d[0] = c.r[23].d[0] + 0ull;
    c.r[16].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
L_002EC5F8:
    c.f[12] = ld32((c.r[16].w[0]));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.f[15] = ld32((c.r[16].w[0] + 12u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC614u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EC614u) [[unlikely]] return; }
L_002EC614:
    c.f[12] = ld32((c.r[16].w[0] + 16u));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 20u));
    c.f[14] = ld32((c.r[16].w[0] + 24u));
    c.f[15] = ld32((c.r[16].w[0] + 28u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC630u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EC630u) [[unlikely]] return; }
L_002EC630:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC644u);  if (depth < kMaxDepth) unit_0045(c, 75u, depth + 1u); else { c.pc = 0x00215840u; return; } if (c.pc != 0x002EC644u) [[unlikely]] return; }
L_002EC644:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EC65C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC6D0; } }
L_002EC65C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[30].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC5F8u | kUnwind; return; } goto L_002EC5F8; } }
L_002EC670:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[15] = ld32((c.r[2].w[0] - 4u));
    c.f[12] = ld32((c.r[2].w[0] - 16u));
    c.f[13] = ld32((c.r[2].w[0] - 12u));
    c.f[14] = ld32((c.r[2].w[0] - 8u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC698u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EC698u) [[unlikely]] return; }
L_002EC698:
    c.f[15] = ld32((c.r[19].w[0] + 12u));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.f[12] = ld32((c.r[19].w[0]));
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6B4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EC6B4u) [[unlikely]] return; }
L_002EC6B4:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC6C8u);  if (depth < kMaxDepth) unit_0045(c, 75u, depth + 1u); else { c.pc = 0x00215840u; return; } if (c.pc != 0x002EC6C8u) [[unlikely]] return; }
L_002EC6C8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 2;
L_002EC6D0:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EC708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[2].w[0] - 17248u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EC720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002EC73C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC73Cu);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x002EC73Cu) [[unlikely]] return; }
L_002EC73C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EC750:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[4].w[0] - 14960u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC780u);  if (depth < kMaxDepth) unit_0060(c, 262u, depth + 1u); else { c.pc = 0x00283C48u; return; } if (c.pc != 0x002EC780u) [[unlikely]] return; }
L_002EC780:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[16].w[0] + 12u);
    set32(c.r[6], c.r[2].w[0] + 5936u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 6;
L_002EC798:
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_002EC7AC; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_002EC7AC:
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC798u | kUnwind; return; } goto L_002EC798; } }
    set32(c.r[5], 0u + 12u);
    st32((c.r[18].w[0]), c.r[16].w[0]);
    mmi::mult(c, 0, c.r[17].w[0], c.r[5].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[17].w[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[7].w[0] - 21608u);
    set32(c.r[8], c.r[8].w[0] - 21560u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[9], 0u + 148u);
    c.r[5].d[0] = c.lo.d[0];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC7F4u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EC7F4u) [[unlikely]] return; }
L_002EC7F4:
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[3].w[0] - 6896u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC824u);  if (depth < kMaxDepth) unit_007B(c, 54u, depth + 1u); else { c.pc = 0x002EC840u; return; } if (c.pc != 0x002EC824u) [[unlikely]] return; }
L_002EC824:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EC840:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[6].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC878u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x002EC878u) [[unlikely]] return; }
L_002EC878:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EC8C0; } }
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EC888:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[17], c.r[17].w[0] + 12u);
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC8B4u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x002EC8B4u) [[unlikely]] return; }
L_002EC8B4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC888u | kUnwind; return; } goto L_002EC888; } }
L_002EC8C0:
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002EC93C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[20], 0u + 1u);
    set32(c.r[19], c.r[2].w[0] + 5936u);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 5;
L_002EC8E8:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[20].d[0];  if (t) { goto L_002EC920; } }
    set32(c.r[6], ld32((c.r[5].w[0] + 8u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC918u);  if (depth < kMaxDepth) unit_007B(c, 4u, depth + 1u); else { c.pc = 0x002EC028u; return; } if (c.pc != 0x002EC918u) [[unlikely]] return; }
L_002EC918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC924; } }
L_002EC920:
    st32((c.r[5].w[0] + 8u), 0u);
    c.budget -= 1;
L_002EC924:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC8E8u | kUnwind; return; } goto L_002EC8E8; } }
L_002EC93C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EC960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EC9E0; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002EC9A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC9E0; } }
L_002EC998:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EC9E4; } }
L_002EC9A4:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9B8u);  if (depth < kMaxDepth) unit_0090(c, 91u, depth + 1u); else { c.pc = 0x00340BB0u; return; } if (c.pc != 0x002EC9B8u) [[unlikely]] return; }
L_002EC9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EC9E0; } }
L_002EC9C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC998u | kUnwind; return; } goto L_002EC998; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EC9D8u);  if (depth < kMaxDepth) unit_0090(c, 93u, depth + 1u); else { c.pc = 0x00340BF8u; return; } if (c.pc != 0x002EC9D8u) [[unlikely]] return; }
L_002EC9D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EC9C0u | kUnwind; return; } goto L_002EC9C0; } }
L_002EC9E0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_002EC9E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECA00:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002ECA18; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECA24; } }
L_002ECA18:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECA24:
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECA40:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002ECA58; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECA64; } }
L_002ECA58:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECA64:
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 17ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECA88:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002ECAC0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECAC0; } }
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 23ull;
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
L_002ECAC0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECAD0:
    set32(c.r[7], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002ECAEC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECAF8; } }
L_002ECAEC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECB08; } }
L_002ECAF8:
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002ECB08:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ECB1C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECB1C:
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002ECB58; } }
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECB4C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002ECB58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECB68; } }
L_002ECB4C:
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002ECB68; } }
L_002ECB58:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECB68; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_002ECB68:
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECB78:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002ECB98; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECBA4; } }
L_002ECB98:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECBB4; } }
L_002ECBA4:
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002ECBB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ECBC8; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECC18; } }
L_002ECBC8:
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002ECC04; } }
    c.r[2].d[0] = c.r[6].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECBF8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002ECC04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECC14; } }
L_002ECBF8:
    set32(c.r[2], 0u + 17u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002ECC14; } }
L_002ECC04:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECC14; } }
    set32(c.r[7], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 1;
L_002ECC14:
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 1;
L_002ECC18:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002ECC58; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002ECC3C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ECC48; } }
L_002ECC3C:
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECC58; } }
L_002ECC48:
    set32(c.r[2], 0u + 12u);
    set32(c.r[3], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_002ECC58:
    c.r[2].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECC68:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002ECCA0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECCA0; } }
    set32(c.r[3], 0u + 12u);
    set32(c.r[4], ld32((c.r[4].w[0] + 12u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[2].d[0] ^ 28ull;
    c.r[3].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 7;
L_002ECCA0:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECCB0:
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[4].w[0] + 32u)));
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002ECDD0; } }
L_002ECCC8:
    set32(c.r[6], c.r[7].w[0] + 16u);
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002ECCF0; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECCF0; } }
    set32(c.r[6], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 1;
L_002ECCF0:
    c.f[2] = ld32((c.r[7].w[0]));
    c.f[1] = ld32((c.r[6].w[0]));
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECD24; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ECD34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECDB8; } }
L_002ECD24:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECDB8; } }
L_002ECD34:
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[6].w[0] + 8u));
    c.f[4] = c.f[1];
    c.f[2] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[3] = c.f[0];
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECD6C; } }
    fpu_compare(c, fp::key(c.f[4]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ECD7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECDB8; } }
L_002ECD6C:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECDB8; } }
L_002ECD7C:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECDA4; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[4]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ECDB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECDB8; } }
L_002ECDA4:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ECDB8; } }
L_002ECDB4:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_002ECDB8:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[7].d[0] = c.r[10].d[0] + 0ull;
    c.r[2].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ECCC8u | kUnwind; return; } goto L_002ECCC8; } }
L_002ECDD0:
    c.r[2].d[0] = c.r[9].d[0] & 1ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECDE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 13;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECE30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECE34; } }
L_002ECE30:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECE34:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ECE60; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECE58u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ECE58u) [[unlikely]] return; }
L_002ECE58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECE64; } }
L_002ECE60:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECE64:
    set32(c.r[2], ld32((c.r[19].w[0] + 23216u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECE90; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECE94; } }
L_002ECE90:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECE94:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ECEC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEB4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ECEB4u) [[unlikely]] return; }
L_002ECEB4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002ECEC8; } }
L_002ECEC4:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECEC8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002ECEE0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002ECF40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECF24; } }
L_002ECEE0:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECEF8u);  if (depth < kMaxDepth) unit_008E(c, 356u, depth + 1u); else { c.pc = 0x0033BE10u; return; } if (c.pc != 0x002ECEF8u) [[unlikely]] return; }
L_002ECEF8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 224u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF1Cu);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x002ECF1Cu) [[unlikely]] return; }
L_002ECF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECF34; } }
L_002ECF24:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECF34u);  if (depth < kMaxDepth) unit_008E(c, 356u, depth + 1u); else { c.pc = 0x0033BE10u; return; } if (c.pc != 0x002ECF34u) [[unlikely]] return; }
L_002ECF34:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECF44; } }
L_002ECF40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECF44:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ECF68:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { const bool t = c.r[18].sd[0] < 0;  if (t) { goto L_002ED0F8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECFC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ECFC4; } }
L_002ECFC0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECFC4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ECFF0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ECFE8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ECFE8u) [[unlikely]] return; }
L_002ECFE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ECFF4; } }
L_002ECFF0:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ECFF4:
    set32(c.r[2], ld32((c.r[19].w[0] + 23216u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED020; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[18].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED024; } }
L_002ED020:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED024:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ED054; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED044u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED044u) [[unlikely]] return; }
L_002ED044:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002ED058; } }
L_002ED054:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED058:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002ED068; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED0F8; } }
L_002ED068:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002ED088; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED08C; } }
L_002ED07C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED0D4; } }
L_002ED088:
    set32(c.r[16], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 1;
L_002ED08C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ED0F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[6], 0u + 113u);
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002ED0D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 48u)));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002ED0B0:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED07Cu | kUnwind; return; } goto L_002ED07C; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED0B0u | kUnwind; return; } goto L_002ED0B0; } }
L_002ED0D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED0D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED0F8; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0E8u);  if (depth < kMaxDepth) unit_007B(c, 76u, depth + 1u); else { c.pc = 0x002ECDE0u; return; } if (c.pc != 0x002ED0E8u) [[unlikely]] return; }
L_002ED0E8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 113u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED0F8u);  if (depth < kMaxDepth) unit_00A5(c, 141u, depth + 1u); else { c.pc = 0x00395C58u; return; } if (c.pc != 0x002ED0F8u) [[unlikely]] return; }
L_002ED0F8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED118:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    set32(c.r[2], ld32((c.r[3].w[0] + 23216u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED170; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED174; } }
L_002ED170:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED174:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ED1A0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[18].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED198u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED198u) [[unlikely]] return; }
L_002ED198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED1A4; } }
L_002ED1A0:
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED1A4:
    set32(c.r[2], ld32((c.r[20].w[0] + 23216u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED1D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0] + 23212u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED1D4; } }
L_002ED1D0:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED1D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002ED204; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 28u)));
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[16].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED1F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED1F8u) [[unlikely]] return; }
L_002ED1F8:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002ED208; } }
L_002ED204:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED208:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002ED218; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002ED318; } }
L_002ED218:
    c.budget -= 2;
    { const bool t = c.r[19].d[0] == 0ull;  if (t) { goto L_002ED2A4; } }
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002ED240; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED244; } }
L_002ED234:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED28C; } }
L_002ED240:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 1;
L_002ED244:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002ED2A4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[7], 0u + 113u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002ED288; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 48u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 2;
L_002ED268:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED234u | kUnwind; return; } goto L_002ED234; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED268u | kUnwind; return; } goto L_002ED268; } }
L_002ED288:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED28C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED2A4; } }
    set32(c.r[5], 0u + 113u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2A4u);  if (depth < kMaxDepth) unit_00A5(c, 138u, depth + 1u); else { c.pc = 0x00395B98u; return; } if (c.pc != 0x002ED2A4u) [[unlikely]] return; }
L_002ED2A4:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_002ED2F0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2C4u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x002ED2C4u) [[unlikely]] return; }
L_002ED2C4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 224u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED2E8u);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x002ED2E8u) [[unlikely]] return; }
L_002ED2E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED30C; } }
L_002ED2F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002ED30C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED30Cu);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x002ED30Cu) [[unlikely]] return; }
L_002ED30C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED31C; } }
L_002ED318:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED31C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 40u), c.f[21]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.f[21] = c.f[13];
    set32(c.r[3], ld32((c.r[2].w[0] + 23020u)));
    c.f[20] = c.f[12];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002ED5A4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 11257u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED3A4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002ED3A4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED39Cu);  if (depth < kMaxDepth) unit_0062(c, 140u, depth + 1u); else { c.pc = 0x0028A288u; return; } if (c.pc != 0x002ED39Cu) [[unlikely]] return; }
L_002ED39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED5A4; } }
L_002ED3A4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10240u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED5A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7686u)));
    set32(c.r[7], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002ED450; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 142u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED450; } }
    c.f[0] = ld32((c.r[16].w[0] + 128u));
    set32(c.r[4], 0u + 1056u);
    c.f[1] = ld32((c.r[16].w[0] + 136u));
    mmi::mult(c, 0, c.r[7].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    c.f[1] = fp::add(c.f[1], c.f[21]);
    set32(c.r[3], c.r[3].w[0] + 17040u);
    set32(c.r[2], 0u + 528u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[16].w[0] + 128u), c.f[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    st32((c.r[16].w[0] + 136u), c.f[1]);
    mmi::mult(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] - 14032u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.f[0] = ld32((c.r[6].w[0]));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = ld32((c.r[2].w[0] + 136u));
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[20]);
    c.f[2] = fp::add(c.f[2], c.f[21]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[2].w[0] + 128u), c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[2].w[0] + 136u), c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 30;
L_002ED450:
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED464u);  if (depth < kMaxDepth) unit_007B(c, 179u, depth + 1u); else { c.pc = 0x002EF208u; return; } if (c.pc != 0x002ED464u) [[unlikely]] return; }
L_002ED464:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 8940u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002ED47C; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002ED47C:
    c.f[12] = ld32((c.r[16].w[0] + 208u));
    c.f[13] = ld32((c.r[16].w[0] + 216u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED48Cu);  if (depth < kMaxDepth) unit_0079(c, 146u, depth + 1u); else { c.pc = 0x002E6398u; return; } if (c.pc != 0x002ED48Cu) [[unlikely]] return; }
L_002ED48C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st8((c.r[16].w[0] + 10130u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u - 1u);
    st8((c.r[16].w[0] + 10131u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_002ED508; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002ED4F8; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9040u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED4F8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002ED4F8; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002ED4F8; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[2], 0u + 53u);
    c.budget -= 2;
L_002ED4F8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED54C; } }
L_002ED508:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    set32(c.r[5], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[2].w[0] + 128u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.budget -= 17;
L_002ED54C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7710u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002ED59C; } }
    set32(c.r[5], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    st32((c.r[3].w[0] + 128u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7710u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[2].w[0] + 136u), c.f[0]);
    c.budget -= 16;
L_002ED59C:
    set32(c.r[2], 0u + 90u);
    st8((c.r[16].w[0] + 10094u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002ED5A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[21] = ld32((c.r[29].w[0] + 40u));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED5C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], ld32((c.r[2].w[0] + 6668u)));
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 160u), c.f[20]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED724; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[2].w[0] + 27456u);
    set32(c.r[30], 0u + 268u);
    c.budget -= 4;
L_002ED610:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 9872u);
    set32(c.r[21], c.r[16].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED628u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002ED628u) [[unlikely]] return; }
L_002ED628:
    set32(c.r[22], c.r[20].w[0] + 13248u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED710; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7694u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002ED710; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED650u);  if (depth < kMaxDepth) unit_0089(c, 171u, depth + 1u); else { c.pc = 0x00325E50u; return; } if (c.pc != 0x002ED650u) [[unlikely]] return; }
L_002ED650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED710; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[2], c.r[2].w[0] - 14152u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[20] = c.r[1].w[0];
    c.lo.d[0] = c.r[2].d[0];
    c.r[18].d[0] = 0ull + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::madd(c, 0, c.r[16].w[0], c.r[30].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 17040u);
    set32(c.r[19], c.r[3].w[0] - 5552u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[23], 0u + 15u);
    set32(c.r[2], 0u + 1056u);
    mmi::madd(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.budget -= 16;
L_002ED698:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_002ED6AC; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED6F8; } }
L_002ED6AC:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED6D0u);  if (depth < kMaxDepth) unit_0049(c, 139u, depth + 1u); else { c.pc = 0x00225E48u; return; } if (c.pc != 0x002ED6D0u) [[unlikely]] return; }
L_002ED6D0:
    c.f[2] = ld32((c.r[19].w[0] + 132u));
    c.f[0] = ld32((c.r[19].w[0] + 128u));
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    st32((c.r[16].w[0]), c.f[0]);
    st32((c.r[16].w[0] + 8u), c.f[1]);
    st32((c.r[16].w[0] + 4u), c.f[2]);
    c.budget -= 8;
    { const bool t = c.r[18].d[0] != c.r[23].d[0];  if (t) { goto L_002ED6F8; } }
    c.f[0] = fp::sub(c.f[2], c.f[20]);
    st32((c.r[16].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_002ED6F8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED698u | kUnwind; return; } goto L_002ED698; } }
L_002ED710:
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.r[20].d[0] = c.r[22].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002ED610u | kUnwind; return; } goto L_002ED610; } }
L_002ED724:
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
    c.f[20] = ld32((c.r[29].w[0] + 160u));
    set32(c.r[29], c.r[29].w[0] + 176u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED760:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED790u);  if (depth < kMaxDepth) unit_0089(c, 177u, depth + 1u); else { c.pc = 0x00325F28u; return; } if (c.pc != 0x002ED790u) [[unlikely]] return; }
L_002ED790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED804; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00660000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 27328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED7ACu);  if (depth < kMaxDepth) unit_0048(c, 294u, depth + 1u); else { c.pc = 0x00223E70u; return; } if (c.pc != 0x002ED7ACu) [[unlikely]] return; }
L_002ED7AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED804; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[5], ld32((c.r[18].w[0] + 19740u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 200u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 204u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED7D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED7D4u) [[unlikely]] return; }
L_002ED7D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED810; } }
    set32(c.r[6], ld32((c.r[18].w[0] + 19740u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[6].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 288u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 292u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002ED7FCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002ED7FCu) [[unlikely]] return; }
L_002ED7FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED810; } }
L_002ED804:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED8C8; } }
L_002ED810:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], 0u + 1536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 6944u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 1380u)));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_002ED8C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10079u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_002ED8C4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10116u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002ED8C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10010u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002ED8A4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10012u)));
    c.r[2].d[0] = c.r[2].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002ED898; } }
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10114u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10120u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED8C0; } }
L_002ED898:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED8C4; } }
L_002ED8A4:
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10114u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10120u)));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.r[19].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED8C4; } }
L_002ED8C0:
    set32(c.r[19], 0u + 1u);
    c.budget -= 1;
L_002ED8C4:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_002ED8C8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002ED8E8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[14].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    set32(c.r[4], c.r[2].w[0] - 17232u);
    set32(c.r[3], ld32((c.r[2].w[0] - 17232u)));
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EDC6C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0] + 7694u)));
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44260000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[20] = ld32((c.r[2].w[0]));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[21] = ld32((c.r[3].w[0]));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.r[12].d[0] = ld16((c.r[8].w[0] + 7694u));
    c.r[13].d[0] = ld16((c.r[16].w[0] + 7694u));
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[1]));
    c.f[2] = c.f[21];
    c.budget -= 20;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EDA5C; } }
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EDA5C; } }
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002ED9E4; } }
    set32(c.r[2], ld32((c.r[8].w[0] + 10372u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002ED9C0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002ED9E8; } }
L_002ED9C0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44260000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002ED9E4; } }
    c.f[20] = c.f[1];
    c.budget -= 1;
L_002ED9E4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002ED9E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDC6C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44260000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EDA50; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 10372u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EDA2C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDA54; } }
L_002EDA2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44260000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDA50; } }
    c.f[21] = c.f[1];
    c.budget -= 1;
L_002EDA50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EDA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EDC6C; } }
L_002EDA5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44260000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDA8C; } }
    st32((c.r[19].w[0]), 0u);
    st32((c.r[20].w[0]), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDC6C; } }
L_002EDA8C:
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDAA8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4B180000u);
    c.r[1].d[0] = c.r[1].d[0] | 38527ull;
    c.f[21] = c.r[1].w[0];
    c.budget -= 3;
L_002EDAA8:
    set32(c.r[2], ld32((c.r[8].w[0] + 104u)));
    set32(c.r[5], 0u + 1536u);
    set32(c.r[3], ld32((c.r[16].w[0] + 104u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 6944u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[8].w[0] + 13192u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[3], c.r[3].w[0] - 1524u);
    set32(c.r[6], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 76u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 76u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.budget -= 26;
    { const bool t = c.r[5].d[0] != c.r[9].d[0];  if (t) { goto L_002EDB20; } }
    set32(c.r[3], ld32((c.r[8].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EDB3C; } }
L_002EDB20:
    set32(c.r[2], ld32((c.r[16].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[9].d[0];  if (t) { goto L_002EDB94; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EDB94; } }
L_002EDB3C:
    set32(c.r[4], c.r[14].w[0] - 17232u);
    set32(c.r[2], c.r[12].w[0] << 16);
    set32(c.r[3], c.r[13].w[0] << 16);
    set32(c.r[4], c.r[4].w[0] + 368u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 14));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 76u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 76u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[20] = ld32((c.r[2].w[0]));
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.f[21] = ld32((c.r[3].w[0]));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.f[21] = fp::add(c.f[21], c.f[1]);
    c.budget -= 22;
L_002EDB94:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[20]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDBB4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 2;
L_002EDBB4:
    fpu_compare(c, fp::key(c.f[21]) == fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDBCC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 2;
L_002EDBCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[5], c.r[10].w[0] - 1u);
    set32(c.r[17], c.r[2].w[0] - 11856u);
    set32(c.r[18], 0u + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDBE8u);  if (depth < kMaxDepth) unit_008F(c, 8u, depth + 1u); else { c.pc = 0x0033C148u; return; } if (c.pc != 0x002EDBE8u) [[unlikely]] return; }
L_002EDBE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002EDC04; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 5;
L_002EDC04:
    set32(c.r[5], ld32((c.r[16].w[0] + 104u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDC18u);  if (depth < kMaxDepth) unit_008F(c, 8u, depth + 1u); else { c.pc = 0x0033C148u; return; } if (c.pc != 0x002EDC18u) [[unlikely]] return; }
L_002EDC18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[18].d[0];  if (t) { goto L_002EDC34; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x453B0000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    c.f[21] = fp::add(c.f[21], c.f[0]);
    c.budget -= 5;
L_002EDC34:
    c.f[1] = fp::add(c.f[21], c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = ld32((c.r[19].w[0]));
    fpu_div(c, 1u, c.f[20], c.f[1]);
    c.f[1] = fp::sub(c.f[0], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.f[2] = fp::mul(c.f[2], c.f[1]);
    st32((c.r[19].w[0]), c.f[2]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[20].w[0]), c.f[0]);
    c.budget -= 14;
L_002EDC6C:
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
L_002EDC98:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 200u), c.f[21]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[6], c.r[18].w[0] + 64u);
    st32((c.r[29].w[0] + 208u), c.f[22]);
    c.r[21].d[0] = c.r[9].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.f[21] = c.f[12];
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    set32(c.r[5], c.r[16].w[0] + 64u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDCF4u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002EDCF4u) [[unlikely]] return; }
L_002EDCF4:
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[22] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[20].w[0] + 208u));
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.f[14] = ld32((c.r[20].w[0] + 216u));
    c.f[13] = c.f[20];
    c.f[15] = c.f[22];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD20u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EDD20u) [[unlikely]] return; }
L_002EDD20:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[2] = c.f[20];
    set32(c.r[2], ld32((c.r[3].w[0] + 6688u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDD44; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD40u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002EDD40u) [[unlikely]] return; }
L_002EDD40:
    c.f[2] = c.f[0];
    c.budget -= 1;
L_002EDD44:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.f[0] = ld32((c.r[2].w[0] + 6684u));
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDDD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 6700u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EDD94; } }
    c.f[12] = ld32((c.r[18].w[0] + 48u));
    c.f[13] = c.f[20];
    c.f[14] = ld32((c.r[18].w[0] + 56u));
    c.f[15] = c.f[22];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDD8Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EDD8Cu) [[unlikely]] return; }
L_002EDD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDDC0; } }
L_002EDD94:
    c.f[1] = ld32((c.r[16].w[0] + 72u));
    c.f[13] = c.f[20];
    c.f[0] = ld32((c.r[18].w[0] + 64u));
    c.f[15] = c.f[22];
    c.f[12] = ld32((c.r[16].w[0] + 64u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = ld32((c.r[18].w[0] + 72u));
    c.f[12] = fp::sub(c.f[0], c.f[12]);
    c.f[14] = fp::sub(c.f[14], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDC0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EDDC0u) [[unlikely]] return; }
L_002EDDC0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDDCCu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002EDDCCu) [[unlikely]] return; }
L_002EDDCC:
    c.f[2] = c.f[0];
    c.budget -= 1;
L_002EDDD0:
    c.f[1] = ld32((c.r[17].w[0]));
    c.f[0] = ld32((c.r[21].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 6684u));
    st32((c.r[29].w[0] + 52u), 0u);
    st32((c.r[29].w[0] + 60u), c.f[20]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDED8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 6692u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EDE54; } }
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE30u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002EDE30u) [[unlikely]] return; }
L_002EDE30:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDE9C; } }
    c.f[21] = c.f[21] ^ fp::kSign;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDE9C; } }
L_002EDE54:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[17], c.r[29].w[0] + 32u);
    set32(c.r[2], ld32((c.r[3].w[0] + 6696u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EDE9C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDE78u);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002EDE78u) [[unlikely]] return; }
L_002EDE78:
    c.f[21] = c.f[20];
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EDE9C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 2;
L_002EDE9C:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDEB0u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002EDEB0u) [[unlikely]] return; }
L_002EDEB0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDEBCu);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002EDEBCu) [[unlikely]] return; }
L_002EDEBC:
    c.f[12] = fp::mul(c.f[0], c.f[21]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDED0u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002EDED0u) [[unlikely]] return; }
L_002EDED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EDEEC; } }
L_002EDED8:
    c.f[12] = c.f[21];
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDEECu);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002EDEECu) [[unlikely]] return; }
L_002EDEEC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 6704u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EDF24; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EDF0Cu);  if (depth < kMaxDepth) unit_008B(c, 106u, depth + 1u); else { c.pc = 0x0032CD08u; return; } if (c.pc != 0x002EDF0Cu) [[unlikely]] return; }
L_002EDF0C:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EDF5C; } }
L_002EDF24:
    c.f[2] = ld32((c.r[29].w[0] + 16u));
    c.f[3] = ld32((c.r[29].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 128u));
    c.f[1] = ld32((c.r[20].w[0] + 136u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[20].w[0] + 128u), c.f[0]);
    st32((c.r[20].w[0] + 136u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    c.budget -= 14;
L_002EDF5C:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.f[22] = ld32((c.r[29].w[0] + 208u));
    c.f[21] = ld32((c.r[29].w[0] + 200u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    set32(c.r[29], c.r[29].w[0] + 224u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EDF98:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[29], c.r[29].w[0] - 304u);
    set32(c.r[2], ld32((c.r[3].w[0] + 6672u)));
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 288u), c.f[26]);
    st32((c.r[29].w[0] + 280u), c.f[25]);
    st32((c.r[29].w[0] + 272u), c.f[24]);
    st32((c.r[29].w[0] + 264u), c.f[23]);
    st32((c.r[29].w[0] + 256u), c.f[22]);
    st32((c.r[29].w[0] + 248u), c.f[21]);
    st32((c.r[29].w[0] + 240u), c.f[20]);
    st32((c.r[29].w[0] + 24u), c.r[4].w[0]);
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EEF0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 31940u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE014; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002EEF0C; } }
L_002EE014:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20756u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE030u);  if (depth < kMaxDepth) unit_0043(c, 205u, depth + 1u); else { c.pc = 0x0020EE28u; return; } if (c.pc != 0x002EE030u) [[unlikely]] return; }
L_002EE030:
    set32(c.r[4], ld32((c.r[16].w[0] + 20756u)));
    set32(c.r[5], 0u + 1120u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[17].w[0] - 20960u);
    set32(c.r[8], c.r[18].w[0] - 20920u);
    set32(c.r[9], 0u + 1517u);
    st64((c.r[29].w[0] + 40u), 0ull);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE054u);  if (depth < kMaxDepth) unit_0043(c, 213u, depth + 1u); else { c.pc = 0x0020F058u; return; } if (c.pc != 0x002EE054u) [[unlikely]] return; }
L_002EE054:
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[29].w[0] + 28u), 0u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002EE2F0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], 0u + 13248u);
    set32(c.r[21], c.r[3].w[0] + 27456u);
    set32(c.r[22], 0u + 80u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[20], c.r[21].w[0] - 13248u);
    set32(c.r[18], c.r[3].w[0] - 6080u);
    set32(c.r[30], 0u - 1u);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.budget -= 10;
L_002EE090:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], 0u + 1536u);
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] - 6944u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[17], c.r[2].w[0] + c.r[5].w[0]);
    c.budget -= 15;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EE2D8; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE0E0u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002EE0E0u) [[unlikely]] return; }
L_002EE0E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE2D8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[16].w[0] + 13184u), 0u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { goto L_002EE2D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE2D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE2D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[5].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    c.r[5].d[0] = c.r[3].d[0] | c.r[5].d[0];
    st64((c.r[29].w[0] + 40u), c.r[5].d[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EE150; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE154; } }
L_002EE150:
    set32(c.r[2], ld32((c.r[17].w[0] + 88u)));
    c.budget -= 1;
L_002EE154:
    set32(c.r[6], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], 0u + 268u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[6].w[0], c.r[19].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[17], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 48u)));
    c.lo.d[0] = c.r[4].d[0];
    mmi::madd(c, 0, c.r[6].w[0], c.r[22].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE1ACu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002EE1ACu) [[unlikely]] return; }
L_002EE1AC:
    c.f[1] = ld32((c.r[18].w[0] + 128u));
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.f[15] = 0u;
    st32((c.r[16].w[0] + 32u), c.f[1]);
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 136u));
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.f[13] = ld32((c.r[18].w[0] + 132u));
    c.f[14] = ld32((c.r[18].w[0] + 136u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE1E0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EE1E0u) [[unlikely]] return; }
L_002EE1E0:
    c.f[0] = ld32((c.r[17].w[0] + 128u));
    c.f[1] = ld32((c.r[18].w[0] + 128u));
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[16].w[0] + 48u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 136u));
    c.f[0] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 18;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002EE234; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE240; } }
L_002EE234:
    set32(c.r[4], c.r[23].w[0] + 12288u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE240u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002EE240u) [[unlikely]] return; }
L_002EE240:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[6].w[0] - 25544u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    mmi::madd(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 64u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[19].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 30u)));
    st32((c.r[4].w[0] + 16u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[6].w[0] - 25160u);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    set32(c.r[3], c.r[3].w[0] - 24776u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 10084u)));
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10048u)));
    st32((c.r[4].w[0] + 28u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10050u)));
    st32((c.r[4].w[0] + 24u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10046u)));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 38;
L_002EE2D8:
    set32(c.r[2], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[29].w[0] + 28u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE090u | kUnwind; return; } goto L_002EE090; } }
L_002EE2F0:
    set32(c.r[4], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[29].w[0] + 28u), 0u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_002EEE18; } }
L_002EE300:
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], ld32((c.r[29].w[0] + 28u)));
    c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[6].w[0] & 31u));
    st32((c.r[29].w[0] + 64u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EEE00; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u + 80u);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[30].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EEE00; } }
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[5], c.r[29].w[0] + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[26] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[25] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 15;
L_002EE388:
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[5].w[0] & 31u));
    set32(c.r[6], c.r[5].w[0] + 1u);
    c.r[4].d[0] = ld64((c.r[29].w[0] + 40u));
    st32((c.r[29].w[0] + 68u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EEDE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], 0u + 80u);
    set32(c.r[4], ld32((c.r[2].w[0] + 24028u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EE3FC; } }
    set32(c.r[4], c.r[30].w[0] + 64u);
    set32(c.r[5], c.r[23].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE3DCu);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x002EE3DCu) [[unlikely]] return; }
L_002EE3DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x4A740000u);
    c.r[1].d[0] = c.r[1].d[0] | 9216ull;
    c.f[1] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EEDE8; } }
L_002EE3FC:
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[17], 0u + 13248u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + 27456u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[29].w[0] + 68u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE428u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002EE428u) [[unlikely]] return; }
L_002EE428:
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002EEDE8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[29].w[0] + 36u), 0u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[16].w[0] - 13248u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE46C; } }
    set32(c.r[18], ld32((c.r[30].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE498; } }
L_002EE46C:
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 113u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002EE494; } }
    set32(c.r[18], ld32((c.r[30].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE498; } }
L_002EE494:
    set32(c.r[18], ld32((c.r[30].w[0])));
    c.budget -= 1;
L_002EE498:
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE4D4; } }
    set32(c.r[16], ld32((c.r[23].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE500; } }
L_002EE4D4:
    set32(c.r[6], ld32((c.r[29].w[0] + 64u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[5].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 113u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002EE4FC; } }
    set32(c.r[16], ld32((c.r[23].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE500; } }
L_002EE4FC:
    set32(c.r[16], ld32((c.r[23].w[0])));
    c.budget -= 1;
L_002EE500:
    set32(c.r[3], ld32((c.r[30].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE538; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE528; } }
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE5F8; } }
L_002EE528:
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.r[18].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE604; } }
L_002EE538:
    set32(c.r[2], ld32((c.r[23].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE554; } }
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE604; } }
L_002EE554:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[20], c.r[2].w[0] + 27456u);
    set32(c.r[22], 0u + 13248u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 28u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[2].w[0] + c.r[20].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[19], c.r[3].w[0] + c.r[20].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE588u);  if (depth < kMaxDepth) unit_007B(c, 108u, depth + 1u); else { c.pc = 0x002ED760u; return; } if (c.pc != 0x002EE588u) [[unlikely]] return; }
L_002EE588:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE5B0; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[20], c.r[20].w[0] - 13248u);
    set32(c.r[21], 0u + 11u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 7700u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_002EE5BC; } }
L_002EE5B0:
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE604; } }
L_002EE5BC:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE5CCu);  if (depth < kMaxDepth) unit_007B(c, 108u, depth + 1u); else { c.pc = 0x002ED760u; return; } if (c.pc != 0x002EE5CCu) [[unlikely]] return; }
L_002EE5CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EE5EC; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[21].d[0];  if (t) { goto L_002EE5F8; } }
L_002EE5EC:
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE604; } }
L_002EE5F8:
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[18].d[0];
    c.budget -= 3;
L_002EE604:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[29].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 14788u)));
    set32(c.r[6], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 32u)));
    if (c.r[3].d[0] != 0) c.r[17].d[0] = c.r[6].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE624u);  if (depth < kMaxDepth) unit_007B(c, 174u, depth + 1u); else { c.pc = 0x002EEF60u; return; } if (c.pc != 0x002EE624u) [[unlikely]] return; }
L_002EE624:
    set32(c.r[4], ld32((c.r[29].w[0] + 52u)));
    st8((c.r[4].w[0] + 9940u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE63Cu);  if (depth < kMaxDepth) unit_007B(c, 174u, depth + 1u); else { c.pc = 0x002EEF60u; return; } if (c.pc != 0x002EE63Cu) [[unlikely]] return; }
L_002EE63C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], 0u + 13248u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.lo.d[0] = c.r[4].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    mmi::madd(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st8((c.r[3].w[0] + 9940u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[30].w[0] + 32u));
    c.f[13] = ld32((c.r[30].w[0] + 40u));
    c.f[14] = ld32((c.r[23].w[0] + 32u));
    c.f[15] = ld32((c.r[23].w[0] + 40u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE670u);  if (depth < kMaxDepth) unit_0081(c, 176u, depth + 1u); else { c.pc = 0x003062F8u; return; } if (c.pc != 0x002EE670u) [[unlikely]] return; }
L_002EE670:
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[23] = c.f[0];
    fpu_compare(c, fp::key(c.f[23]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EE698; } }
    set32(c.r[5], 0u + 1u);
    st32((c.r[29].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 2;
L_002EE698:
    c.f[1] = ld32((c.r[30].w[0] + 36u));
    set32(c.r[4], 0u + 300u);
    c.f[0] = ld32((c.r[23].w[0] + 36u));
    c.f[3] = c.f[1];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[2] = c.f[0];
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EE704; } }
    set32(c.r[6], ld32((c.r[30].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002EE6F8; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE6EC; } }
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[16].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE748; } }
L_002EE6EC:
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE748; } }
L_002EE6F8:
    set32(c.r[2], ld32((c.r[23].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE744; } }
L_002EE704:
    set32(c.r[3], ld32((c.r[30].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002EE740; } }
    set32(c.r[2], ld32((c.r[23].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE734; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[16].d[0];
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE748; } }
L_002EE734:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE748; } }
L_002EE740:
    set32(c.r[2], ld32((c.r[23].w[0] + 24u)));
    c.budget -= 1;
L_002EE744:
    if (c.r[2].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.budget -= 1;
L_002EE748:
    set32(c.r[6], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002EEDAC; } }
    c.f[0] = fp::sub(c.f[3], c.f[2]);
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EEDAC; } }
    c.f[0] = c.r[17].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = ld32((c.r[30].w[0] + 64u));
    c.f[2] = ld32((c.r[30].w[0] + 72u));
    c.f[12] = ld32((c.r[23].w[0] + 64u));
    c.f[13] = ld32((c.r[23].w[0] + 72u));
    c.f[23] = fp::sub(c.f[0], c.f[23]);
    c.f[12] = fp::sub(c.f[1], c.f[12]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[13] = fp::sub(c.f[2], c.f[13]);
    c.f[23] = fp::mul(c.f[23], c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7B4u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x002EE7B4u) [[unlikely]] return; }
L_002EE7B4:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE7C0u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x002EE7C0u) [[unlikely]] return; }
L_002EE7C0:
    c.f[24] = c.r[2].w[0];
    c.f[24] = fp::cvt_s_w(c.f[24]);
    c.f[21] = fp::add(c.f[24], c.f[26]);
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EE7EC; } }
    c.f[21] = fp::sub(c.f[21], c.f[25]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE80C; } }
L_002EE7EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[21]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EE80C; } }
    c.f[21] = fp::add(c.f[21], c.f[25]);
    c.budget -= 1;
L_002EE80C:
    set32(c.r[2], ld32((c.r[30].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE878; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[24];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE82Cu);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002EE82Cu) [[unlikely]] return; }
L_002EE82C:
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE840u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002EE840u) [[unlikely]] return; }
L_002EE840:
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[3], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEB2C; } }
L_002EE878:
    set32(c.r[2], ld32((c.r[23].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EE8BC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE898u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002EE898u) [[unlikely]] return; }
L_002EE898:
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8ACu);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002EE8ACu) [[unlikely]] return; }
L_002EE8AC:
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[3], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEB0C; } }
L_002EE8BC:
    set32(c.r[2], ld32((c.r[29].w[0] + 52u)));
    c.f[13] = c.f[24];
    c.f[12] = ld32((c.r[2].w[0] + 148u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE8D0u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x002EE8D0u) [[unlikely]] return; }
L_002EE8D0:
    c.f[13] = fp::sub(c.f[24], c.f[26]);
    c.f[20] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[26]) < fp::key(c.f[13]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EE8F4; } }
    c.f[13] = fp::sub(c.f[13], c.f[25]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EE914; } }
L_002EE8F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5000000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EE914; } }
    c.f[13] = fp::add(c.f[13], c.f[25]);
    c.budget -= 1;
L_002EE914:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    mmi::madd(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[12] = ld32((c.r[2].w[0] + 148u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE938u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x002EE938u) [[unlikely]] return; }
L_002EE938:
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[20]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EE9D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[24];
    set32(c.r[16], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE964u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002EE964u) [[unlikely]] return; }
L_002EE964:
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE978u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002EE978u) [[unlikely]] return; }
L_002EE978:
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[3], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[22] = c.f[0] ^ fp::kSign;
    c.f[20] = c.f[1] ^ fp::kSign;
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEA44; } }
L_002EE9D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[21];
    set32(c.r[16], ld32((c.r[29].w[0] + 56u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9E8u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002EE9E8u) [[unlikely]] return; }
L_002EE9E8:
    set32(c.r[5], ld32((c.r[29].w[0] + 56u)));
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EE9FCu);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002EE9FCu) [[unlikely]] return; }
L_002EE9FC:
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[3], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.f[22] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.f[20] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 18;
L_002EEA44:
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EEAD0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[24];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA64u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002EEA64u) [[unlikely]] return; }
L_002EEA64:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEA78u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002EEA78u) [[unlikely]] return; }
L_002EEA78:
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[3], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[22] = c.f[0] ^ fp::kSign;
    c.f[20] = c.f[1] ^ fp::kSign;
    c.budget -= 22;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEB4C; } }
L_002EEAD0:
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EEB4C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    c.f[12] = c.f[21];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEAF0u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002EEAF0u) [[unlikely]] return; }
L_002EEAF0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEB04u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002EEB04u) [[unlikely]] return; }
L_002EEB04:
    c.f[0] = fp::cvt_w_s(c.f[23]);
    set32(c.r[3], c.f[0]);
    c.budget -= 2;
L_002EEB0C:
    c.f[1] = ld32((c.r[29].w[0]));
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 8;
L_002EEB2C:
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    c.f[22] = c.r[2].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    c.f[20] = c.r[3].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 8;
L_002EEB4C:
    set32(c.r[18], ld32((c.r[30].w[0] + 12u)));
    set32(c.r[2], 0u + 3u);
    set32(c.r[17], ld32((c.r[23].w[0] + 12u)));
    c.budget -= 5;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002EEB68; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002EEB7C; } }
L_002EEB68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E000000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::mul(c.f[20], c.f[0]);
    c.f[22] = fp::mul(c.f[22], c.f[0]);
    c.budget -= 5;
L_002EEB7C:
    c.r[2].d[0] = c.r[18].d[0] ^ 3ull;
    c.r[3].d[0] = c.r[17].d[0] ^ 3ull;
    if (c.r[2].d[0] == 0) c.r[18].d[0] = 0ull;
    if (c.r[3].d[0] == 0) c.r[17].d[0] = 0ull;
    c.budget -= 6;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002EEC9C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002EEC9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[22], 0u + 13248u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[21], c.r[29].w[0] + 8u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[20], c.r[29].w[0] + 12u);
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    mmi::madd(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 12u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::madd(c, 0, c.r[2].w[0], c.r[22].w[0]);
    c.r[19].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEBF4u);  if (depth < kMaxDepth) unit_007B(c, 113u, depth + 1u); else { c.pc = 0x002ED8E8u; return; } if (c.pc != 0x002EEBF4u) [[unlikely]] return; }
L_002EEBF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002EEC2C; } }
    c.f[12] = ld32((c.r[29].w[0] + 8u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 12u));
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC24u);  if (depth < kMaxDepth) unit_0079(c, 184u, depth + 1u); else { c.pc = 0x002E6BD8u; return; } if (c.pc != 0x002EEC24u) [[unlikely]] return; }
L_002EEC24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EEC9C; } }
L_002EEC2C:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], c.r[2].w[0] - 148u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EEC68; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[8].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[30].d[0] + 0ull;
    c.r[7].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEC68u);  if (depth < kMaxDepth) unit_007B(c, 116u, depth + 1u); else { c.pc = 0x002EDC98u; return; } if (c.pc != 0x002EEC68u) [[unlikely]] return; }
L_002EEC68:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    mmi::madd(c, 0, c.r[3].w[0], c.r[22].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.lo.d[0] = c.r[4].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[2].w[0] + 13184u), c.r[4].w[0]);
    mmi::madd(c, 0, c.r[4].w[0], c.r[22].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[3].w[0] + 13184u), c.r[5].w[0]);
    c.budget -= 13;
L_002EEC9C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002EEDE8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] == c.r[2].d[0];  if (t) { goto L_002EEDE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[20], 0u + 13248u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[19], c.r[29].w[0] + 16u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[18], c.r[29].w[0] + 20u);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 16u), c.f[22]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    mmi::madd(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 20u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 28u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::madd(c, 0, c.r[2].w[0], c.r[20].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED04u);  if (depth < kMaxDepth) unit_007B(c, 113u, depth + 1u); else { c.pc = 0x002ED8E8u; return; } if (c.pc != 0x002EED04u) [[unlikely]] return; }
L_002EED04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 28392u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002EED34; } }
    c.f[12] = ld32((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 20u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED2Cu);  if (depth < kMaxDepth) unit_0079(c, 184u, depth + 1u); else { c.pc = 0x002E6BD8u; return; } if (c.pc != 0x002EED2Cu) [[unlikely]] return; }
L_002EED2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EEDE8; } }
L_002EED34:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], c.r[2].w[0] - 148u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EED70; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[23].d[0] + 0ull;
    c.r[8].d[0] = c.r[19].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EED70u);  if (depth < kMaxDepth) unit_007B(c, 116u, depth + 1u); else { c.pc = 0x002EDC98u; return; } if (c.pc != 0x002EED70u) [[unlikely]] return; }
L_002EED70:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    mmi::madd(c, 0, c.r[3].w[0], c.r[20].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.lo.d[0] = c.r[4].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[2].w[0] + 13184u), c.r[4].w[0]);
    mmi::madd(c, 0, c.r[4].w[0], c.r[20].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[3].w[0] + 13184u), c.r[5].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EEDE8; } }
L_002EEDAC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 52u)));
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[5], 0u + 13248u);
    c.lo.d[0] = c.r[3].d[0];
    c.r[2].d[0] = ld64((c.r[6].w[0] + 560u));
    set32(c.r[3], ld32((c.r[29].w[0] + 68u)));
    mmi::madd(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0xF7FF0000u);
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    st64((c.r[6].w[0] + 560u), c.r[2].d[0]);
    c.r[3].d[0] = ld64((c.r[4].w[0] + 560u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[5].d[0];
    st64((c.r[4].w[0] + 560u), c.r[3].d[0]);
    c.budget -= 15;
L_002EEDE8:
    set32(c.r[6], ld32((c.r[29].w[0] + 68u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[6].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE388u | kUnwind; return; } goto L_002EE388; } }
L_002EEE00:
    set32(c.r[4], ld32((c.r[29].w[0] + 64u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    st32((c.r[29].w[0] + 28u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EE300u | kUnwind; return; } goto L_002EE300; } }
L_002EEE18:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[6].w[0] + 20756u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], c.r[3].w[0] - 20920u);
    set32(c.r[6], c.r[2].w[0] - 20960u);
    set32(c.r[5], 0u + 1120u);
    set32(c.r[8], 0u + 2158u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE40u);  if (depth < kMaxDepth) unit_0043(c, 220u, depth + 1u); else { c.pc = 0x0020F330u; return; } if (c.pc != 0x002EEE40u) [[unlikely]] return; }
L_002EEE40:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[16], c.r[3].w[0] + 27456u);
    c.r[2].d[0] = c.r[2].d[0] | 54400ull;
    set32(c.r[19], 0u + 11u);
    set32(c.r[18], c.r[16].w[0] + c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 8;
L_002EEE60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EEEFC; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 6676u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EEEFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 13184u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EEEFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEE90u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002EEE90u) [[unlikely]] return; }
L_002EEE90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EEEFC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_002EEEFC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEB0u);  if (depth < kMaxDepth) unit_0089(c, 167u, depth + 1u); else { c.pc = 0x00325DC8u; return; } if (c.pc != 0x002EEEB0u) [[unlikely]] return; }
L_002EEEB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002EEEFC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 6680u)));
    c.f[20] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EEED4; } }
    c.f[0] = ld32((c.r[16].w[0] + 9280u));
    c.f[0] = fp::add(c.f[20], c.f[0]);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.budget -= 3;
L_002EEED4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEEE4u);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x002EEEE4u) [[unlikely]] return; }
L_002EEEE4:
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EEEFC; } }
    st32((c.r[16].w[0] + 132u), c.f[20]);
    c.budget -= 1;
L_002EEEFC:
    set32(c.r[16], c.r[16].w[0] + 13248u);
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EEE60u | kUnwind; return; } goto L_002EEE60; } }
L_002EEF0C:
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
    c.f[26] = ld32((c.r[29].w[0] + 288u));
    c.f[25] = ld32((c.r[29].w[0] + 280u));
    c.f[24] = ld32((c.r[29].w[0] + 272u));
    c.f[23] = ld32((c.r[29].w[0] + 264u));
    c.f[22] = ld32((c.r[29].w[0] + 256u));
    c.f[21] = ld32((c.r[29].w[0] + 248u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    set32(c.r[29], c.r[29].w[0] + 304u);
    c.budget -= 20;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EEF60:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[17], 0u + 13248u);
    set32(c.r[2], c.r[20].w[0] + 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[19], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[29].w[0] + 136u), c.f[21]);
    c.r[21].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 128u), c.f[20]);
    c.f[20] = ld32((c.r[16].w[0] + 136u));
    c.f[21] = ld32((c.r[16].w[0] + 128u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFBCu);  if (depth < kMaxDepth) unit_0081(c, 135u, depth + 1u); else { c.pc = 0x00305C90u; return; } if (c.pc != 0x002EEFBCu) [[unlikely]] return; }
L_002EEFBC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EEFD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 25152u);
    c.f[20] = ld32((c.r[2].w[0] + 24u));
    c.f[21] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
L_002EEFD8:
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 136u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = fp::sub(c.f[20], c.f[13]);
    c.f[12] = fp::sub(c.f[21], c.f[12]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EEFFCu);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x002EEFFCu) [[unlikely]] return; }
L_002EEFFC:
    c.f[1] = ld32((c.r[16].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[4]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.f[1];
    st32((c.r[29].w[0]), c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF050; } }
    c.f[0] = fp::add(c.f[0], c.f[4]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF074; } }
L_002EF050:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF078; } }
    c.f[0] = fp::sub(c.f[1], c.f[4]);
    c.budget -= 1;
L_002EF074:
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 1;
L_002EF078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF080u);  if (depth < kMaxDepth) unit_0081(c, 135u, depth + 1u); else { c.pc = 0x00305C90u; return; } if (c.pc != 0x002EF080u) [[unlikely]] return; }
L_002EF080:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002EF0B4; } }
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF0B4u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002EF0B4u) [[unlikely]] return; }
L_002EF0B4:
    c.f[0] = ld32((c.r[29].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[2] = c.f[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF104; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF104; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF1D4; } }
L_002EF104:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF164; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0160000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF164; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[20].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[21].w[0] + 14208u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF1BC; } }
L_002EF164:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF1D0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40160000u);
    c.r[1].d[0] = c.r[1].d[0] | 52196ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF1D0; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[20].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[21].w[0] + 14208u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
L_002EF1BC:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 113u)));
    if (c.r[2].d[0] == 0) c.r[6].d[0] = c.r[5].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF1D4; } }
L_002EF1D0:
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002EF1D4:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.f[21] = ld32((c.r[29].w[0] + 136u));
    c.f[20] = ld32((c.r[29].w[0] + 128u));
    set32(c.r[29], c.r[29].w[0] + 144u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EF208:
    set32(c.r[29], c.r[29].w[0] - 1168u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[17]);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[17], c.r[2].w[0] + 27456u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[18]);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 1088u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 12u);
    st64((c.r[29].w[0] + 1072u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1152u), c.f[20]);
    set32(c.r[19], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 7700u)));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002EF3D4; } }
    set32(c.r[16], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 14152u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF28Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002EF28Cu) [[unlikely]] return; }
L_002EF28C:
    set32(c.r[6], ld32((c.r[16].w[0])));
    set32(c.r[4], c.r[17].w[0] + 13248u);
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2B0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002EF2B0u) [[unlikely]] return; }
L_002EF2B0:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.f[14] = ld32((c.r[29].w[0] + 656u));
    c.f[15] = ld32((c.r[29].w[0] + 664u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF2C8u);  if (depth < kMaxDepth) unit_007A(c, 168u, depth + 1u); else { c.pc = 0x002E9F30u; return; } if (c.pc != 0x002EF2C8u) [[unlikely]] return; }
L_002EF2C8:
    c.f[0] = c.f[0] & fp::kAbs;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x449C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[1] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    fpu_div(c, 1u, c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF300; } }
    c.f[1] = c.f[2];
    c.budget -= 1;
L_002EF300:
    c.f[0] = ld32((c.r[18].w[0] + 9948u));
    c.f[20] = fp::sub(c.f[2], c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[0], c.f[2]);
    c.f[12] = fp::sub(c.f[12], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF348; } }
    c.f[12] = fp::sub(c.f[12], c.f[3]);
    c.budget -= 1;
L_002EF348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC0490000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002EF36C; } }
    c.f[12] = fp::add(c.f[12], c.f[3]);
    c.budget -= 1;
L_002EF36C:
    set32(c.r[4], c.r[29].w[0] + 1056u);
    set32(c.r[5], c.r[29].w[0] + 1060u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF37Cu);  if (depth < kMaxDepth) unit_0045(c, 110u, depth + 1u); else { c.pc = 0x00215EC0u; return; } if (c.pc != 0x002EF37Cu) [[unlikely]] return; }
L_002EF37C:
    c.f[0] = ld32((c.r[19].w[0] + 208u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[4] = c.r[1].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[3] = ld32((c.r[29].w[0] + 1056u));
    c.f[1] = ld32((c.r[18].w[0] + 128u));
    c.f[5] = ld32((c.r[29].w[0] + 1060u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 216u));
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[4]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = fp::add(c.f[2], c.f[0]);
    st32((c.r[18].w[0] + 136u), c.f[2]);
    c.budget -= 22;
L_002EF3D4:
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1088u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1072u));
    c.f[20] = ld32((c.r[29].w[0] + 1152u));
    set32(c.r[29], c.r[29].w[0] + 1168u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EF3F8:
    set32(c.r[29], c.r[29].w[0] - 1248u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 1216u) & ~15u, c.r[16]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 1200u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 1184u) & ~15u, c.r[18]);
    set32(c.r[16], c.r[16].w[0] - 14152u);
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 268u);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[20]);
    c.r[9].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[21]);
    set32(c.r[10], 0u + 1u);
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 1240u), c.f[21]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 1232u), c.f[20]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 1088u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[17], c.r[22].w[0] + 11856u);
    set32(c.r[2], ld32((c.r[22].w[0] + 104u)));
    set32(c.r[19], c.r[22].w[0] + 11872u);
    c.f[20] = 0u;
    set32(c.r[20], c.r[22].w[0] + 11824u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF48Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002EF48Cu) [[unlikely]] return; }
L_002EF48C:
    set32(c.r[2], ld32((c.r[22].w[0] + 104u)));
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF4C0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002EF4C0u) [[unlikely]] return; }
L_002EF4C0:
    c.f[0] = ld32((c.r[29].w[0] + 656u));
    c.f[15] = c.f[21];
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.f[2] = ld32((c.r[29].w[0] + 660u));
    c.f[12] = fp::add(c.f[12], c.f[0]);
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    c.f[1] = ld32((c.r[29].w[0] + 664u));
    c.f[13] = fp::add(c.f[13], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[14] = fp::add(c.f[14], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.f[13] = fp::mul(c.f[13], c.f[0]);
    c.f[14] = fp::mul(c.f[14], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF508u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF508u) [[unlikely]] return; }
L_002EF508:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF518u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002EF518u) [[unlikely]] return; }
L_002EF518:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF534u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF534u) [[unlikely]] return; }
L_002EF534:
    set32(c.r[2], ld32((c.r[21].w[0] + 8u)));
    c.f[12] = c.f[20];
    c.f[15] = c.f[21];
    c.f[13] = c.f[12];
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF560u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF560u) [[unlikely]] return; }
L_002EF560:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF574u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF574u) [[unlikely]] return; }
L_002EF574:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF588u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF588u) [[unlikely]] return; }
L_002EF588:
    set32(c.r[4], ld32((c.r[22].w[0] + 104u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5A0u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002EF5A0u) [[unlikely]] return; }
L_002EF5A0:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5ACu);  if (depth < kMaxDepth) unit_0089(c, 58u, depth + 1u); else { c.pc = 0x00324D98u; return; } if (c.pc != 0x002EF5ACu) [[unlikely]] return; }
L_002EF5AC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 14u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF5C8; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002EF5CC; } }
L_002EF5C8:
    st32((c.r[22].w[0] + 11824u), 0u);
    c.budget -= 1;
L_002EF5CC:
    set32(c.r[5], c.r[22].w[0] + 11872u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF5DCu);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002EF5DCu) [[unlikely]] return; }
L_002EF5DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF600u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF600u) [[unlikely]] return; }
L_002EF600:
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF614u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF614u) [[unlikely]] return; }
L_002EF614:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 1072u);
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF638u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF638u) [[unlikely]] return; }
L_002EF638:
    set32(c.r[4], c.r[29].w[0] + 1072u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF64Cu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF64Cu) [[unlikely]] return; }
L_002EF64C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[13] = c.r[1].w[0];
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF674u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF674u) [[unlikely]] return; }
L_002EF674:
    set32(c.r[4], c.r[29].w[0] + 1056u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF688u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF688u) [[unlikely]] return; }
L_002EF688:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 1072u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[13] = c.r[1].w[0];
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6B0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF6B0u) [[unlikely]] return; }
L_002EF6B0:
    set32(c.r[4], c.r[29].w[0] + 1072u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6C4u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF6C4u) [[unlikely]] return; }
L_002EF6C4:
    set32(c.r[5], c.r[22].w[0] + 11888u);
    set32(c.r[4], c.r[22].w[0] + 11488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF6D4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002EF6D4u) [[unlikely]] return; }
L_002EF6D4:
    ld128((c.r[29].w[0] + 1216u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1200u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1184u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1168u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1152u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1136u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[23]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1088u));
    c.f[21] = ld32((c.r[29].w[0] + 1240u));
    c.f[20] = ld32((c.r[29].w[0] + 1232u));
    set32(c.r[29], c.r[29].w[0] + 1248u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EF710:
    set32(c.r[29], c.r[29].w[0] - 704u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st128((c.r[29].w[0] + 656u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[22]);
    set32(c.r[5], 0u + 268u);
    st128((c.r[29].w[0] + 688u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 672u) & ~15u, c.r[17]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[19]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[21]);
    c.r[7].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 576u), c.r[31].d[0]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF780u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002EF780u) [[unlikely]] return; }
L_002EF780:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 6u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EF7C0; } }
    set32(c.r[2], c.r[18].w[0] + 11776u);
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = ld32((c.r[18].w[0] + 136u));
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF7B8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF7B8u) [[unlikely]] return; }
L_002EF7B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF7E8; } }
L_002EF7C0:
    set32(c.r[2], c.r[18].w[0] + 11776u);
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.f[13] = ld32((c.r[29].w[0] + 132u));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.f[14] = ld32((c.r[29].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF7E8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF7E8u) [[unlikely]] return; }
L_002EF7E8:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF7F8u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002EF7F8u) [[unlikely]] return; }
L_002EF7F8:
    c.f[12] = ld32((c.r[18].w[0] + 208u));
    c.f[13] = 0u;
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EF88C; } }
    c.f[14] = ld32((c.r[18].w[0] + 216u));
    fpu_compare(c, fp::key(c.f[14]) == fp::key(c.f[13]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002EF88C; } }
    set32(c.r[17], c.r[29].w[0] + 528u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[18].w[0] + 11792u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF844u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF844u) [[unlikely]] return; }
L_002EF844:
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF858u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002EF858u) [[unlikely]] return; }
L_002EF858:
    c.f[12] = ld32((c.r[22].w[0] + 12u));
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF870u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002EF870u) [[unlikely]] return; }
L_002EF870:
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF884u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002EF884u) [[unlikely]] return; }
L_002EF884:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EF8D8; } }
L_002EF88C:
    set32(c.r[2], ld32((c.r[22].w[0] + 12u)));
    set32(c.r[16], c.r[18].w[0] + 11792u);
    c.f[12] = 0u;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = c.r[2].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[13] = c.f[12];
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8C4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF8C4u) [[unlikely]] return; }
L_002EF8C4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8D8u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF8D8u) [[unlikely]] return; }
L_002EF8D8:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], c.r[18].w[0] + 11744u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF8F0u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002EF8F0u) [[unlikely]] return; }
L_002EF8F0:
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF900u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002EF900u) [[unlikely]] return; }
L_002EF900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF924u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF924u) [[unlikely]] return; }
L_002EF924:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF938u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF938u) [[unlikely]] return; }
L_002EF938:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[13] = c.f[12];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF95Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF95Cu) [[unlikely]] return; }
L_002EF95C:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF970u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF970u) [[unlikely]] return; }
L_002EF970:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[13] = c.r[1].w[0];
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF998u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF998u) [[unlikely]] return; }
L_002EF998:
    set32(c.r[4], c.r[29].w[0] + 544u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9ACu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF9ACu) [[unlikely]] return; }
L_002EF9AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[13] = c.r[1].w[0];
    c.f[14] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9D4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EF9D4u) [[unlikely]] return; }
L_002EF9D4:
    set32(c.r[4], c.r[29].w[0] + 560u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9E8u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EF9E8u) [[unlikely]] return; }
L_002EF9E8:
    set32(c.r[5], c.r[18].w[0] + 11808u);
    set32(c.r[4], c.r[18].w[0] + 11488u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EF9F8u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002EF9F8u) [[unlikely]] return; }
L_002EF9F8:
    ld128((c.r[29].w[0] + 688u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 672u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 656u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 576u));
    set32(c.r[29], c.r[29].w[0] + 704u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFA28:
    set32(c.r[29], c.r[29].w[0] - 1728u);
    st128((c.r[29].w[0] + 1664u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 1648u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1632u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 1696u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1680u) & ~15u, c.r[17]);
    c.r[5].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 1616u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1720u), c.f[21]);
    st32((c.r[29].w[0] + 1712u), c.f[20]);
    c.budget -= 15;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002EFB78; } }
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    set32(c.r[4], c.r[29].w[0] + 1600u);
    c.f[13] = ld32((c.r[18].w[0] + 132u));
    set32(c.r[17], 0u + 268u);
    c.f[14] = ld32((c.r[18].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFA88u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EFA88u) [[unlikely]] return; }
L_002EFA88:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[16], c.r[16].w[0] - 14152u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAC4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002EFAC4u) [[unlikely]] return; }
L_002EFAC4:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], c.r[29].w[0] + 544u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFAF8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002EFAF8u) [[unlikely]] return; }
L_002EFAF8:
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1072u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB2Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002EFB2Cu) [[unlikely]] return; }
L_002EFB2C:
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    c.f[3] = ld32((c.r[29].w[0] + 672u));
    c.f[2] = ld32((c.r[29].w[0] + 676u));
    c.f[5] = ld32((c.r[29].w[0] + 148u));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 680u));
    c.f[4] = ld32((c.r[29].w[0] + 152u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0]), c.f[3]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFB84; } }
L_002EFB78:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB84u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002EFB84u) [[unlikely]] return; }
L_002EFB84:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFB94u);  if (depth < kMaxDepth) unit_0044(c, 274u, depth + 1u); else { c.pc = 0x00213C78u; return; } if (c.pc != 0x002EFB94u) [[unlikely]] return; }
L_002EFB94:
    c.f[20] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    set32(c.r[17], c.r[18].w[0] + 11536u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3FA0000u);
    c.f[13] = c.r[1].w[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    set32(c.r[16], c.r[18].w[0] + 11552u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBC8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EFBC8u) [[unlikely]] return; }
L_002EFBC8:
    c.f[13] = ld32((c.r[20].w[0] + 4u));
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[12] = c.f[20];
    c.f[15] = c.f[21];
    c.f[14] = c.f[12];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBE8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002EFBE8u) [[unlikely]] return; }
L_002EFBE8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFBFCu);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EFBFCu) [[unlikely]] return; }
L_002EFBFC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC10u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002EFC10u) [[unlikely]] return; }
L_002EFC10:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[5], c.r[18].w[0] + 11504u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFC28u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002EFC28u) [[unlikely]] return; }
L_002EFC28:
    ld128((c.r[29].w[0] + 1696u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1680u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1664u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1648u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1632u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1616u));
    c.f[21] = ld32((c.r[29].w[0] + 1720u));
    c.f[20] = ld32((c.r[29].w[0] + 1712u));
    set32(c.r[29], c.r[29].w[0] + 1728u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFC58:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFD6C; } }
L_002EFC80:
    set32(c.r[4], c.r[19].w[0] - 11856u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EFCAC; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFCB0; } }
L_002EFCAC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EFCB0:
    set32(c.r[2], 0u + 544u);
    set32(c.r[3], ld32((c.r[3].w[0] + 240u)));
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002EFD68; } }
    set32(c.r[4], c.r[16].w[0] + 128u);
    set32(c.r[2], ld32((c.r[4].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EFD68; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EFD68; } }
    set32(c.r[17], c.r[16].w[0] + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFCF0u);  if (depth < kMaxDepth) unit_008D(c, 300u, depth + 1u); else { c.pc = 0x003377E0u; return; } if (c.pc != 0x002EFCF0u) [[unlikely]] return; }
L_002EFCF0:
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002EFD24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD0Cu);  if (depth < kMaxDepth) unit_0039(c, 417u, depth + 1u); else { c.pc = 0x001E7E68u; return; } if (c.pc != 0x002EFD0Cu) [[unlikely]] return; }
L_002EFD0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EFD24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 420u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFD28; } }
L_002EFD24:
    set32(c.r[2], ld32((c.r[16].w[0] + 420u)));
    c.budget -= 1;
L_002EFD28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002EFD40; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.r[17].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
L_002EFD40:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002EFD58; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD58u);  if (depth < kMaxDepth) unit_008E(c, 88u, depth + 1u); else { c.pc = 0x00339400u; return; } if (c.pc != 0x002EFD58u) [[unlikely]] return; }
L_002EFD58:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFD68u);  if (depth < kMaxDepth) unit_007B(c, 82u, depth + 1u); else { c.pc = 0x002ECF68u; return; } if (c.pc != 0x002EFD68u) [[unlikely]] return; }
L_002EFD68:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002EFD6C:
    set32(c.r[4], c.r[19].w[0] - 11856u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EFD98; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFD9C; } }
L_002EFD98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EFD9C:
    set32(c.r[2], ld32((c.r[2].w[0] + 236u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFC80u | kUnwind; return; } goto L_002EFC80; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFDD0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFE58; } }
L_002EFDF8:
    set32(c.r[4], c.r[19].w[0] - 11856u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EFE24; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFE28; } }
L_002EFE24:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EFE28:
    set32(c.r[3], ld32((c.r[2].w[0] + 256u)));
    set32(c.r[2], c.r[18].w[0] << 7);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002EFE54; } }
    set32(c.r[16], c.r[17].w[0] + 40u);
    st32((c.r[16].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 84u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFE54u);  if (depth < kMaxDepth) unit_007B(c, 82u, depth + 1u); else { c.pc = 0x002ECF68u; return; } if (c.pc != 0x002EFE54u) [[unlikely]] return; }
L_002EFE54:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_002EFE58:
    set32(c.r[4], c.r[19].w[0] - 11856u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 540u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002EFE84; } }
    set32(c.r[2], 0u + 268u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFE88; } }
L_002EFE84:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002EFE88:
    set32(c.r[2], ld32((c.r[2].w[0] + 252u)));
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002EFDF8u | kUnwind; return; } goto L_002EFDF8; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFEB8:
    st32((c.r[4].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFEC8:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFEE0:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFEF8:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFF08:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFF20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002EFF50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF48u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x002EFF48u) [[unlikely]] return; }
L_002EFF48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002EFF64; } }
L_002EFF50:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF64u);  if (depth < kMaxDepth) unit_008E(c, 356u, depth + 1u); else { c.pc = 0x0033BE10u; return; } if (c.pc != 0x002EFF64u) [[unlikely]] return; }
L_002EFF64:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002EFF78:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFF9Cu);  if (depth < kMaxDepth) unit_0094(c, 152u, depth + 1u); else { c.pc = 0x00351BE0u; return; } if (c.pc != 0x002EFF9Cu) [[unlikely]] return; }
L_002EFF9C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007C(c, 4u, depth); } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFB4u);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x002EFFB4u) [[unlikely]] return; }
L_002EFFB4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_007C(c, 2u, depth); } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFD8u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x002EFFD8u) [[unlikely]] return; }
L_002EFFD8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 224u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002EFFFCu);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x002EFFFCu) [[unlikely]] return; }
L_002EFFFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_007C(c, 3u, depth); } }
    [[clang::musttail]] return unit_007C(c, 2u, depth);
}

}
