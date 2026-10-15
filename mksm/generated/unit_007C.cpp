#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007C[4096] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0,
    220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_007C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F0000;
    case 2u: goto L_002F0004;
    case 3u: goto L_002F0018;
    case 4u: goto L_002F0024;
    case 5u: goto L_002F0040;
    case 6u: goto L_002F0064;
    case 7u: goto L_002F007C;
    case 8u: goto L_002F00A0;
    case 9u: goto L_002F00A4;
    case 10u: goto L_002F00C4;
    case 11u: goto L_002F00E0;
    case 12u: goto L_002F0108;
    case 13u: goto L_002F0180;
    case 14u: goto L_002F0190;
    case 15u: goto L_002F01CC;
    case 16u: goto L_002F0200;
    case 17u: goto L_002F0284;
    case 18u: goto L_002F0290;
    case 19u: goto L_002F02E4;
    case 20u: goto L_002F0300;
    case 21u: goto L_002F0320;
    case 22u: goto L_002F0334;
    case 23u: goto L_002F0350;
    case 24u: goto L_002F0364;
    case 25u: goto L_002F0380;
    case 26u: goto L_002F0394;
    case 27u: goto L_002F03C0;
    case 28u: goto L_002F0404;
    case 29u: goto L_002F0440;
    case 30u: goto L_002F0474;
    case 31u: goto L_002F04A8;
    case 32u: goto L_002F0510;
    case 33u: goto L_002F0548;
    case 34u: goto L_002F0558;
    case 35u: goto L_002F0640;
    case 36u: goto L_002F06A8;
    case 37u: goto L_002F06D8;
    case 38u: goto L_002F06F8;
    case 39u: goto L_002F071C;
    case 40u: goto L_002F0738;
    case 41u: goto L_002F0780;
    case 42u: goto L_002F0798;
    case 43u: goto L_002F07E0;
    case 44u: goto L_002F07F8;
    case 45u: goto L_002F0850;
    case 46u: goto L_002F0884;
    case 47u: goto L_002F08B8;
    case 48u: goto L_002F08D4;
    case 49u: goto L_002F0930;
    case 50u: goto L_002F0938;
    case 51u: goto L_002F0970;
    case 52u: goto L_002F0988;
    case 53u: goto L_002F0998;
    case 54u: goto L_002F09AC;
    case 55u: goto L_002F09C4;
    case 56u: goto L_002F09E8;
    case 57u: goto L_002F0B8C;
    case 58u: goto L_002F0BAC;
    case 59u: goto L_002F0BC0;
    case 60u: goto L_002F0D38;
    case 61u: goto L_002F0D78;
    case 62u: goto L_002F0DA8;
    case 63u: goto L_002F0DE0;
    case 64u: goto L_002F0E18;
    case 65u: goto L_002F0E60;
    case 66u: goto L_002F0E88;
    case 67u: goto L_002F0EC0;
    case 68u: goto L_002F0F68;
    case 69u: goto L_002F1010;
    case 70u: goto L_002F106C;
    case 71u: goto L_002F1090;
    case 72u: goto L_002F1158;
    case 73u: goto L_002F11E8;
    case 74u: goto L_002F128C;
    case 75u: goto L_002F12C0;
    case 76u: goto L_002F12E8;
    case 77u: goto L_002F1378;
    case 78u: goto L_002F13AC;
    case 79u: goto L_002F1450;
    case 80u: goto L_002F1460;
    case 81u: goto L_002F1470;
    case 82u: goto L_002F1488;
    case 83u: goto L_002F1504;
    case 84u: goto L_002F1520;
    case 85u: goto L_002F1530;
    case 86u: goto L_002F1540;
    case 87u: goto L_002F1554;
    case 88u: goto L_002F1654;
    case 89u: goto L_002F1690;
    case 90u: goto L_002F1708;
    case 91u: goto L_002F1758;
    case 92u: goto L_002F179C;
    case 93u: goto L_002F17C8;
    case 94u: goto L_002F1808;
    case 95u: goto L_002F1838;
    case 96u: goto L_002F1884;
    case 97u: goto L_002F1930;
    case 98u: goto L_002F1958;
    case 99u: goto L_002F199C;
    case 100u: goto L_002F1A10;
    case 101u: goto L_002F1B30;
    case 102u: goto L_002F1CAC;
    case 103u: goto L_002F1CD0;
    case 104u: goto L_002F1CFC;
    case 105u: goto L_002F1D34;
    case 106u: goto L_002F1D60;
    case 107u: goto L_002F1DC8;
    case 108u: goto L_002F1DF8;
    case 109u: goto L_002F1E24;
    case 110u: goto L_002F1ED8;
    case 111u: goto L_002F1F04;
    case 112u: goto L_002F1F2C;
    case 113u: goto L_002F1F54;
    case 114u: goto L_002F1F88;
    case 115u: goto L_002F1FA4;
    case 116u: goto L_002F1FE0;
    case 117u: goto L_002F201C;
    case 118u: goto L_002F2104;
    case 119u: goto L_002F2260;
    case 120u: goto L_002F2270;
    case 121u: goto L_002F2304;
    case 122u: goto L_002F23A4;
    case 123u: goto L_002F2458;
    case 124u: goto L_002F2468;
    case 125u: goto L_002F247C;
    case 126u: goto L_002F2490;
    case 127u: goto L_002F24CC;
    case 128u: goto L_002F24EC;
    case 129u: goto L_002F254C;
    case 130u: goto L_002F2574;
    case 131u: goto L_002F258C;
    case 132u: goto L_002F25F8;
    case 133u: goto L_002F2674;
    case 134u: goto L_002F26D4;
    case 135u: goto L_002F26E0;
    case 136u: goto L_002F27B0;
    case 137u: goto L_002F2880;
    case 138u: goto L_002F28BC;
    case 139u: goto L_002F2978;
    case 140u: goto L_002F29E8;
    case 141u: goto L_002F29F4;
    case 142u: goto L_002F2A40;
    case 143u: goto L_002F2A50;
    case 144u: goto L_002F2A98;
    case 145u: goto L_002F2AE0;
    case 146u: goto L_002F2B04;
    case 147u: goto L_002F2B14;
    case 148u: goto L_002F2B5C;
    case 149u: goto L_002F2B80;
    case 150u: goto L_002F2B94;
    case 151u: goto L_002F2BA8;
    case 152u: goto L_002F2BB4;
    case 153u: goto L_002F2BC8;
    case 154u: goto L_002F2BDC;
    case 155u: goto L_002F2C44;
    case 156u: goto L_002F2C8C;
    case 157u: goto L_002F2CB0;
    case 158u: goto L_002F2CC4;
    case 159u: goto L_002F2CD8;
    case 160u: goto L_002F2CE4;
    case 161u: goto L_002F2CF8;
    case 162u: goto L_002F2D0C;
    case 163u: goto L_002F2D84;
    case 164u: goto L_002F2DA8;
    case 165u: goto L_002F2DC0;
    case 166u: goto L_002F2E08;
    case 167u: goto L_002F2E3C;
    case 168u: goto L_002F2EBC;
    case 169u: goto L_002F2EF0;
    case 170u: goto L_002F2F10;
    case 171u: goto L_002F2F34;
    case 172u: goto L_002F2F68;
    case 173u: goto L_002F2FEC;
    case 174u: goto L_002F30E4;
    case 175u: goto L_002F30F8;
    case 176u: goto L_002F3158;
    case 177u: goto L_002F3180;
    case 178u: goto L_002F3198;
    case 179u: goto L_002F3230;
    case 180u: goto L_002F324C;
    case 181u: goto L_002F3270;
    case 182u: goto L_002F32A8;
    case 183u: goto L_002F3304;
    case 184u: goto L_002F336C;
    case 185u: goto L_002F33A8;
    case 186u: goto L_002F33E0;
    case 187u: goto L_002F3420;
    case 188u: goto L_002F3450;
    case 189u: goto L_002F3464;
    case 190u: goto L_002F3478;
    case 191u: goto L_002F34B0;
    case 192u: goto L_002F355C;
    case 193u: goto L_002F3608;
    case 194u: goto L_002F3664;
    case 195u: goto L_002F3690;
    case 196u: goto L_002F36E0;
    case 197u: goto L_002F3748;
    case 198u: goto L_002F3780;
    case 199u: goto L_002F3814;
    case 200u: goto L_002F3838;
    case 201u: goto L_002F3878;
    case 202u: goto L_002F38C8;
    case 203u: goto L_002F3918;
    case 204u: goto L_002F3928;
    case 205u: goto L_002F394C;
    case 206u: goto L_002F3960;
    case 207u: goto L_002F3970;
    case 208u: goto L_002F3990;
    case 209u: goto L_002F39A0;
    case 210u: goto L_002F39B0;
    case 211u: goto L_002F39C0;
    case 212u: goto L_002F39E8;
    case 213u: goto L_002F3A08;
    case 214u: goto L_002F3A58;
    case 215u: goto L_002F3A98;
    case 216u: goto L_002F3AB0;
    case 217u: goto L_002F3AC8;
    case 218u: goto L_002F3AD0;
    case 219u: goto L_002F3B70;
    case 220u: goto L_002F3B80;
    case 221u: goto L_002F3BAC;
    case 222u: goto L_002F3D40;
    case 223u: goto L_002F3D7C;
    case 224u: goto L_002F3D90;
    case 225u: goto L_002F3DF0;
    case 226u: goto L_002F3E14;
    case 227u: goto L_002F3E60;
    case 228u: goto L_002F3E84;
    case 229u: goto L_002F3E98;
    case 230u: goto L_002F3EAC;
    case 231u: goto L_002F3EB8;
    case 232u: goto L_002F3ECC;
    case 233u: goto L_002F3EE0;
    case 234u: goto L_002F3F48;
    case 235u: goto L_002F3F84;
    case 236u: goto L_002F3FC0;
    default: bad_entry(c, 0x002F0000u); return;
    }
L_002F0000:
    c.budget -= 1;
L_002F0004:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0018u);  if (depth < kMaxDepth) unit_008E(c, 352u, depth + 1u); else { c.pc = 0x0033BD88u; return; } if (c.pc != 0x002F0018u) [[unlikely]] return; }
L_002F0018:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0028; } }
L_002F0024:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F0028:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0040:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], ld32((c.r[2].w[0] + 9488u)));
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0064u);  if (depth < kMaxDepth) unit_0094(c, 152u, depth + 1u); else { c.pc = 0x00351BE0u; return; } if (c.pc != 0x002F0064u) [[unlikely]] return; }
L_002F0064:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F00EC; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F007Cu);  if (depth < kMaxDepth) unit_008F(c, 33u, depth + 1u); else { c.pc = 0x0033C660u; return; } if (c.pc != 0x002F007Cu) [[unlikely]] return; }
L_002F007C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F00CC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 11856u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00A0u);  if (depth < kMaxDepth) unit_008E(c, 356u, depth + 1u); else { c.pc = 0x0033BE10u; return; } if (c.pc != 0x002F00A0u) [[unlikely]] return; }
L_002F00A0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x002F0000u);
    c.budget -= 1;
L_002F00A4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 224u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    set32(c.r[8], 0u + 1u);
    set32(c.r[9], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00C4u);  if (depth < kMaxDepth) unit_008E(c, 71u, depth + 1u); else { c.pc = 0x00338FA0u; return; } if (c.pc != 0x002F00C4u) [[unlikely]] return; }
L_002F00C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F00E0; } }
L_002F00CC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00720000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 11856u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F00E0u);  if (depth < kMaxDepth) unit_008E(c, 356u, depth + 1u); else { c.pc = 0x0033BE10u; return; } if (c.pc != 0x002F00E0u) [[unlikely]] return; }
L_002F00E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F00F0; } }
L_002F00EC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F00F0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0108:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7696u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 27456u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7712u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st8((c.r[6].w[0] + 10130u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u - 1u);
    st8((c.r[6].w[0] + 10131u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[4].d[0];  if (t) { goto L_002F0178; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_002F0178; } }
    c.r[2].d[0] = ld8((c.r[6].w[0] + 9040u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0178; } }
    set32(c.r[4], ld32((c.r[6].w[0] + 7700u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002F0178; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_002F0178; } }
    set32(c.r[3], ld32((c.r[3].w[0] + 36u)));
    set32(c.r[2], 0u + 53u);
    c.budget -= 2;
L_002F0178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0180:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0190:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44260000u);
    c.r[1].d[0] = c.r[1].d[0] | 49152ull;
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F01F0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 10372u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F01CC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F01CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44260000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F01F0; } }
    st32((c.r[5].w[0]), c.f[2]);
    c.budget -= 1;
L_002F01F0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0200:
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0278; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0278; } }
    set32(c.r[2], 0u + 153u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0278; } }
    set32(c.r[2], 0u + 205u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0278; } }
    set32(c.r[2], 0u + 169u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0278; } }
    set32(c.r[2], 0u + 171u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0278; } }
    set32(c.r[2], 0u + 170u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F0278; } }
    set32(c.r[2], 0u + 172u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0284; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 6664u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002F0284; } }
L_002F0278:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0284:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0290:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st32((c.r[29].w[0] + 104u), c.f[23]);
    st32((c.r[29].w[0] + 96u), c.f[22]);
    st32((c.r[29].w[0] + 88u), c.f[21]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC37A0000u);
    c.f[22] = c.r[1].w[0];
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.f[23] = 0u;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.f[12] = c.f[22];
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    c.f[13] = c.f[22];
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.f[14] = c.f[23];
    st32((c.r[29].w[0] + 80u), c.f[20]);
    c.f[15] = c.f[21];
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F02E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002F02E4u) [[unlikely]] return; }
L_002F02E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437A0000u);
    c.f[20] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0300u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002F0300u) [[unlikely]] return; }
L_002F0300:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[23];
    c.f[15] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0320u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002F0320u) [[unlikely]] return; }
L_002F0320:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0334u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002F0334u) [[unlikely]] return; }
L_002F0334:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[22];
    c.f[14] = c.f[23];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0350u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002F0350u) [[unlikely]] return; }
L_002F0350:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0364u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002F0364u) [[unlikely]] return; }
L_002F0364:
    c.f[12] = c.f[22];
    c.f[13] = c.f[20];
    c.f[14] = c.f[23];
    c.f[15] = c.f[21];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0380u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002F0380u) [[unlikely]] return; }
L_002F0380:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0394u);  if (depth < kMaxDepth) unit_0044(c, 276u, depth + 1u); else { c.pc = 0x00213CB8u; return; } if (c.pc != 0x002F0394u) [[unlikely]] return; }
L_002F0394:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[23] = ld32((c.r[29].w[0] + 104u));
    c.f[22] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = ld32((c.r[29].w[0] + 88u));
    c.f[20] = ld32((c.r[29].w[0] + 80u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F03C0:
    set32(c.r[29], c.r[29].w[0] - 1680u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    st128((c.r[29].w[0] + 1664u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 1648u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1632u) & ~15u, c.r[18]);
    set32(c.r[4], c.r[29].w[0] + 1584u);
    st128((c.r[29].w[0] + 1616u) & ~15u, c.r[19]);
    set32(c.r[18], 0u + 268u);
    st64((c.r[29].w[0] + 1600u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0404u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002F0404u) [[unlikely]] return; }
L_002F0404:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[17], c.r[17].w[0] - 14152u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0440u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F0440u) [[unlikely]] return; }
L_002F0440:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0474u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F0474u) [[unlikely]] return; }
L_002F0474:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 1056u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F04A8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F04A8u) [[unlikely]] return; }
L_002F04A8:
    c.f[0] = ld32((c.r[29].w[0] + 128u));
    c.f[3] = ld32((c.r[29].w[0] + 656u));
    c.f[2] = ld32((c.r[29].w[0] + 660u));
    c.f[5] = ld32((c.r[29].w[0] + 132u));
    c.f[3] = fp::add(c.f[3], c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 664u));
    c.f[4] = ld32((c.r[29].w[0] + 136u));
    c.f[2] = fp::add(c.f[2], c.f[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = fp::add(c.f[1], c.f[4]);
    ld128((c.r[29].w[0] + 1664u) & ~15u, c.r[16]);
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    ld128((c.r[29].w[0] + 1648u) & ~15u, c.r[17]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    ld128((c.r[29].w[0] + 1632u) & ~15u, c.r[18]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1600u));
    st32((c.r[19].w[0]), c.f[3]);
    st32((c.r[19].w[0] + 4u), c.f[2]);
    st32((c.r[19].w[0] + 8u), c.f[1]);
    ld128((c.r[29].w[0] + 1616u) & ~15u, c.r[19]);
    set32(c.r[29], c.r[29].w[0] + 1680u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0510:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0548; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0550; } }
    c.f[0] = c.f[1];
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0548:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_002F0550:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0558:
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0580; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0598; } }
L_002F0580:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[0] = c.f[1];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0598; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_002F0598:
    st32((c.r[4].w[0]), c.f[0]);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F05C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F05E0; } }
L_002F05C8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[0] = c.f[1];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F05E0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_002F05E0:
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[1] = 0u;
    c.f[0] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0610; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0628; } }
L_002F0610:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.f[0] = c.f[1];
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0628; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.budget -= 2;
L_002F0628:
    st32((c.r[4].w[0] + 8u), c.f[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0640:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4984u)));
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F071C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    st32((c.r[16].w[0] + 11824u), 0u);
    st32((c.r[16].w[0] + 11744u), 0u);
    st32((c.r[16].w[0] + 11504u), 0u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F071C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10090u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F071C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F06A8u);  if (depth < kMaxDepth) unit_0045(c, 34u, depth + 1u); else { c.pc = 0x002146C8u; return; } if (c.pc != 0x002F06A8u) [[unlikely]] return; }
L_002F06A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[1] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[0] = c.r[1].w[0];
    c.f[12] = fp::mul(c.f[12], c.f[1]);
    c.f[12] = fp::mul(c.f[12], c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F06D8u);  if (depth < kMaxDepth) unit_0045(c, 41u, depth + 1u); else { c.pc = 0x002149F8u; return; } if (c.pc != 0x002F06D8u) [[unlikely]] return; }
L_002F06D8:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F06F8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F06F8u) [[unlikely]] return; }
L_002F06F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 20u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F071Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F071Cu) [[unlikely]] return; }
L_002F071C:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0738:
    set32(c.r[29], c.r[29].w[0] - 544u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    set32(c.r[6], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0780u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F0780u) [[unlikely]] return; }
L_002F0780:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 544u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0798:
    set32(c.r[29], c.r[29].w[0] - 544u);
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 528u), c.r[31].d[0]);
    set32(c.r[6], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 104u)));
    set32(c.r[3], c.r[3].w[0] - 14152u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[9].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[10], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0] + 60u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F07E0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F07E0u) [[unlikely]] return; }
L_002F07E0:
    c.f[0] = ld32((c.r[29].w[0] + 132u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 528u));
    set32(c.r[29], c.r[29].w[0] + 544u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F07F8:
    set32(c.r[29], c.r[29].w[0] - 1120u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[16]);
    c.r[8].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 1088u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1072u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00650000u);
    st64((c.r[29].w[0] + 1056u), c.r[31].d[0]);
    set32(c.r[18], 0u + 268u);
    set32(c.r[17], c.r[17].w[0] - 14152u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0850u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F0850u) [[unlikely]] return; }
L_002F0850:
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 528u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[8].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0884u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F0884u) [[unlikely]] return; }
L_002F0884:
    c.f[0] = ld32((c.r[29].w[0] + 660u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1088u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1072u) & ~15u, c.r[18]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 1056u));
    set32(c.r[29], c.r[29].w[0] + 1120u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F08B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F08D4u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F08D4u) [[unlikely]] return; }
L_002F08D4:
    set32(c.r[2], ld32((c.r[16].w[0] + 11504u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F08F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    c.f[0] = ld32((c.r[16].w[0] + 11556u));
    c.r[2].d[0] = c.r[2].d[0] | 1024ull;
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F091C; } }
L_002F08F8:
    set32(c.r[2], ld32((c.r[16].w[0] + 11280u)));
    set32(c.r[3], 0u - 1025u);
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 11280u), c.r[2].w[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
L_002F091C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0938:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0970u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002F0970u) [[unlikely]] return; }
L_002F0970:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x447A0000u);
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0988u);  if (depth < kMaxDepth) unit_0045(c, 29u, depth + 1u); else { c.pc = 0x00214638u; return; } if (c.pc != 0x002F0988u) [[unlikely]] return; }
L_002F0988:
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0998u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002F0998u) [[unlikely]] return; }
L_002F0998:
    set32(c.r[4], c.r[16].w[0] + 48u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F09ACu);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002F09ACu) [[unlikely]] return; }
L_002F09AC:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F09C4u);  if (depth < kMaxDepth) unit_0070(c, 51u, depth + 1u); else { c.pc = 0x002C0AA8u; return; } if (c.pc != 0x002F09C4u) [[unlikely]] return; }
L_002F09C4:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F09E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[7].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 143u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13160u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 13161u));
    set32(c.r[3], c.r[3].w[0] - 128u);
    set32(c.r[4], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    c.budget -= 22;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_002F0A74; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x46700000u);
    c.r[1].d[0] = c.r[1].d[0] | 16384ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0A70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.r[7].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0A74; } }
L_002F0A70:
    st16((c.r[16].w[0] + 11336u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002F0A74:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 12928u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8892u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0B00; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8892u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 13076u)));
    st16((c.r[16].w[0] + 12928u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F0AF0; } }
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[4].d[0];  if (t) { goto L_002F0AF4; } }
    c.r[3].d[0] = ld16((c.r[16].w[0] + 12926u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 8888u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st16((c.r[16].w[0] + 12926u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[4].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F0B10; } }
    st16((c.r[16].w[0] + 12926u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 13076u), c.r[7].w[0]);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002F0B10; } }
    st16((c.r[16].w[0] + 12928u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0B10; } }
L_002F0AF0:
    st32((c.r[16].w[0] + 13076u), c.r[7].w[0]);
    c.budget -= 1;
L_002F0AF4:
    st16((c.r[16].w[0] + 12926u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0B10; } }
L_002F0B00:
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0B10; } }
    st32((c.r[16].w[0] + 13076u), 0u);
    c.budget -= 1;
L_002F0B10:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13160u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0B30; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0B44; } }
L_002F0B30:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0B48; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 2;
L_002F0B44:
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F0B48:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 13161u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0B68; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0B7C; } }
L_002F0B68:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0B80; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 2;
L_002F0B7C:
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F0B80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0B8Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002F0B8Cu) [[unlikely]] return; }
L_002F0B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0B98; } }
    st32((c.r[16].w[0] + 13076u), 0u);
    c.budget -= 1;
L_002F0B98:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F0BACu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002F0BACu) [[unlikely]] return; }
L_002F0BAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0BC0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13160u));
    set32(c.r[5], c.r[4].w[0] + 612u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x427C0000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13161u));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0C0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0C30; } }
L_002F0C0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0C34; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 2;
L_002F0C30:
    st32((c.r[4].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 1;
L_002F0C34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x427C0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0C60; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0C84; } }
L_002F0C60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0C88; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 2;
L_002F0C84:
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F0C88:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13160u));
    set32(c.r[5], c.r[4].w[0] + 13076u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13161u));
    st32((c.r[4].w[0] + 13076u), 0u);
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0CE4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437D0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0CEC; } }
L_002F0CE4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 13076u), c.r[2].w[0]);
    c.budget -= 2;
L_002F0CEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F0D24; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x437D0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0D2C; } }
L_002F0D24:
    set32(c.r[2], 0u + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002F0D2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0D38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 14208u);
    set32(c.r[3], ld32((c.r[4].w[0] + 13888u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F0D54; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[4].w[0] + 26118u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F0D54:
    set32(c.r[2], ld32((c.r[4].w[0] + 27136u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0D70; } }
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 6598u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002F0D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] - 16492u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F0E0C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[6], c.r[4].w[0] + 4u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16496u)));
    set32(c.r[5], 0u + 12u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] - 16496u), c.r[2].w[0]);
    c.budget -= 7;
L_002F0DA8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], c.r[7].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    if (c.r[3].d[0] != 0) c.r[7].d[0] = c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0DA8u | kUnwind; return; } goto L_002F0DA8; } }
    c.r[2].d[0] = c.r[7].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F0E0C; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[5], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
L_002F0DE0:
    set32(c.r[2], ld32((c.r[7].w[0] - 16496u)));
    c.r[3].d[0] = c.r[5].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F0DF8; } }
    st32((c.r[4].w[0]), c.r[6].w[0]);
    c.budget -= 1;
L_002F0DF8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.r[2].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0DE0u | kUnwind; return; } goto L_002F0DE0; } }
L_002F0E0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] | 4095ull;
    c.r[5].d[0] = c.r[3].d[0] & 8192ull;
    c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.r[6].d[0] = c.r[3].d[0] & 32768ull;
    c.r[2].d[0] = c.r[4].d[0] | 32768ull;
    c.r[7].d[0] = c.r[3].d[0] & 16384ull;
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[3].d[0] = c.r[3].d[0] & 4096ull;
    c.r[5].d[0] = c.r[4].d[0] | 8192ull;
    if (c.r[6].d[0] != 0) c.r[4].d[0] = c.r[5].d[0];
    c.r[2].d[0] = c.r[4].d[0] | 4096ull;
    if (c.r[7].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[2].d[0] = c.r[4].d[0] | 16384ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[4].d[0];
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0E60:
    set32(c.r[3], 0u + 72u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 8744u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 15u);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 10;
L_002F0E88:
    c.r[2].d[0] = c.r[4].d[0] & c.r[6].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F0E9C; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    c.budget -= 2;
L_002F0E9C:
    set32(c.r[6], c.r[6].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F0E88u | kUnwind; return; } goto L_002F0E88; } }
    c.r[2].d[0] = c.r[7].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0EC0:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13161u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13160u));
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0F50; } }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0F38; } }
    c.f[0] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0F40; } }
L_002F0F38:
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 2;
L_002F0F40:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0F50; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002F0F50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F0F68:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13160u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[3], c.r[3].w[0] - 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13161u));
    set32(c.r[2], c.r[2].w[0] - 128u);
    c.f[0] = c.f[0] & fp::kAbs;
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 20;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0FF8; } }
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0FE0; } }
    c.f[0] = fp::add(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F0FE8; } }
L_002F0FE0:
    c.f[0] = fp::sub(c.f[2], c.f[3]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 2;
L_002F0FE8:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F0FF8; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_002F0FF8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3C000000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F1010:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13162u));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1030; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1044; } }
L_002F1030:
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1048; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 2;
L_002F1044:
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F1048:
    c.r[4].d[0] = ld8((c.r[4].w[0] + 13163u));
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F106C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F106C:
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(192ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1084; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002F1084:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F1090:
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.r[3].d[0] = 0ull + 0ull;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F10C4; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F10EC; } }
L_002F10C4:
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F10F0; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 3;
L_002F10EC:
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F10F0:
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[13]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1120; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1148; } }
L_002F1120:
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F114C; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    c.budget -= 3;
L_002F1148:
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_002F114C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F1158:
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0]), 0u);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1194; } }
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F119C; } }
L_002F1194:
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002F119C:
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[13]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F11D4; } }
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[13]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F11DC; } }
L_002F11D4:
    set32(c.r[2], 0u + 1u);
    st32((c.r[6].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_002F11DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F11E8:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 13162u));
    set32(c.r[5], c.r[4].w[0] + 612u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x427C0000u);
    c.f[0] = c.r[1].w[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 13163u));
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 15;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1234; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1258; } }
L_002F1234:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F125C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 612u)));
    c.r[2].d[0] = c.r[2].d[0] | 8192ull;
    c.budget -= 2;
L_002F1258:
    st32((c.r[4].w[0] + 612u), c.r[2].w[0]);
    c.budget -= 1;
L_002F125C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x427C0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F128C; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 4096ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F128C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x433F0000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F12B4; } }
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.r[2].d[0] = c.r[2].d[0] | 16384ull;
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_002F12B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F12C0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[19].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
L_002F12E8:
    set32(c.r[2], c.r[19].w[0] << 2);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1654; } }
    set32(c.r[4], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 112u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1654; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 204u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1654; } }
    set32(c.r[2], 0u + 206u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1654; } }
    set32(c.r[2], 0u + 207u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1654; } }
    set32(c.r[2], 0u + 217u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1654; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1378; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1378; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1378u);  if (depth < kMaxDepth) unit_0079(c, 181u, depth + 1u); else { c.pc = 0x002E6A88u; return; } if (c.pc != 0x002F1378u) [[unlikely]] return; }
L_002F1378:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 10034u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10077u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F13AC; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F13AC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[2].w[0] << (c.r[4].w[0] & 31u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F13ACu);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002F13ACu) [[unlikely]] return; }
L_002F13AC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9924u));
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1418; } }
    c.r[2].d[0] = c.r[3].sd[0] < 22ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F13DC; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F13F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F140C; } }
L_002F13DC:
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F1418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F140C; } }
L_002F13F0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002F1418; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 13152u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1418; } }
L_002F140C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002F1418; } }
    st8((c.r[16].w[0] + 9924u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F1418:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9924u));
    set32(c.r[8], 0u - 1u);
    st8((c.r[16].w[0] + 9922u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(24ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1554; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 20128u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002F0000u < 16384u) { entry = entries_007C[(t - 0x002F0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F1450:
    set32(c.r[8], 0u + 1u);
    set32(c.r[6], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F1460:
    set32(c.r[8], 0u + 143u);
    set32(c.r[6], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F1470:
    set32(c.r[8], 0u + 145u);
    set32(c.r[2], 0u + 146u);
    if (c.r[17].d[0] == 0) c.r[8].d[0] = c.r[2].d[0];
    set32(c.r[6], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F1488:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], c.r[3].w[0] - 159u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1584; } }
    c.r[2].d[0] = c.r[6].sd[0] < 143ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F14C4; } }
    c.r[2].d[0] = c.r[6].sd[0] < 140ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F14C4; } }
    set32(c.r[8], 0u + 142u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F14C4:
    set32(c.r[5], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 147u);
    st32((c.r[16].w[0] + 13128u), 0u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002F14E8; } }
    set32(c.r[8], 0u + 147u);
    set32(c.r[6], 0u + 147u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F14E8:
    set32(c.r[3], ld32((c.r[16].w[0] + 13076u)));
    set32(c.r[8], 0u + 118u);
    set32(c.r[2], 0u + 105u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[8].d[0] = c.r[2].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F1504:
    set32(c.r[2], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[4], 0u + 82u);
    c.r[3].d[0] = c.r[2].d[0] ^ 82ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    if (c.r[3].d[0] == 0) c.r[8].d[0] = c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F1520:
    set32(c.r[8], 0u + 3u);
    set32(c.r[6], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F1530:
    set32(c.r[8], 0u + 10u);
    set32(c.r[6], ld32((c.r[16].w[0] + 7700u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F1540:
    set32(c.r[3], c.r[18].w[0] + c.r[21].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1664; } }
L_002F1554:
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], c.r[3].w[0] - 159u);
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1584; } }
    set32(c.r[2], 0u + 176u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002F1584; } }
    set32(c.r[2], 0u + 167u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002F1590; } }
L_002F1584:
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F15AC; } }
L_002F1590:
    c.r[2].d[0] = c.r[6].sd[0] < 143ll ? 1ull : 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F15AC; } }
    c.r[2].d[0] = c.r[6].sd[0] < 140ll ? 1ull : 0ull;
    set32(c.r[8], 0u + 142u);
    if (c.r[2].d[0] != 0) c.r[8].d[0] = 0ull;
    c.budget -= 3;
L_002F15AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F15E0; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002F15E0; } }
    set32(c.r[2], 0u + 69u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002F15F0; } }
    set32(c.r[2], 0u + 212u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[2].d[0];  if (t) { goto L_002F15E0; } }
    st32((c.r[16].w[0] + 11188u), 0u);
    c.budget -= 1;
L_002F15E0:
    set32(c.r[6], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002F15FC; } }
L_002F15F0:
    set32(c.r[8], 0u + 69u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1608; } }
L_002F15FC:
    set32(c.r[3], 0u + 212u);
    c.r[2].d[0] = c.r[6].d[0] ^ 212ull;
    if (c.r[2].d[0] == 0) c.r[8].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_002F1608:
    set32(c.r[2], ld32((c.r[16].w[0] + 11188u)));
    set32(c.r[4], 0u + 45u);
    c.r[5].d[0] = c.r[6].d[0] ^ 100ull;
    set32(c.r[7], 0u + 100u);
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.r[6].d[0] = c.r[6].d[0] ^ 93ull;
    if (c.r[2].d[0] == 0) c.r[8].d[0] = c.r[4].d[0];
    set32(c.r[3], 0u + 93u);
    if (c.r[5].d[0] == 0) c.r[8].d[0] = c.r[7].d[0];
    set32(c.r[2], 0u - 1u);
    if (c.r[6].d[0] == 0) c.r[8].d[0] = c.r[3].d[0];
    c.budget -= 13;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { goto L_002F1654; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[8].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1654u);  if (depth < kMaxDepth) unit_006F(c, 127u, depth + 1u); else { c.pc = 0x002BDEF0u; return; } if (c.pc != 0x002F1654u) [[unlikely]] return; }
L_002F1654:
    set32(c.r[19], c.r[19].w[0] + 1u);
    c.r[2].d[0] = c.r[19].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F12E8u | kUnwind; return; } goto L_002F12E8; } }
L_002F1664:
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
L_002F1690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[29], c.r[29].w[0] - 240u);
    set32(c.r[3], ld32((c.r[2].w[0] - 25932u)));
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 232u), c.f[23]);
    st32((c.r[29].w[0] + 224u), c.f[22]);
    st32((c.r[29].w[0] + 216u), c.f[21]);
    st32((c.r[29].w[0] + 208u), c.f[20]);
    c.budget -= 19;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F25B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[21] = 0u;
    set32(c.r[17], c.r[2].w[0] + 27456u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[20] = c.r[1].w[0];
    set32(c.r[23], c.r[17].w[0] - 13248u);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[30], 0u - 1u);
    set32(c.r[21], 0u + 13248u);
    c.r[16].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 11;
L_002F1708:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7694u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[30].d[0];  if (t) { goto L_002F18F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F18F4; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[30].d[0];  if (t) { goto L_002F18F4; } }
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_002F1744; } }
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F175C; } }
L_002F1744:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1758u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F1758u) [[unlikely]] return; }
L_002F1758:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F175C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 88u)));
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[19].w[0] - 5024u), c.r[6].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 50u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F18F4; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.f[13] = c.f[21];
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F179Cu);  if (depth < kMaxDepth) unit_006E(c, 158u, depth + 1u); else { c.pc = 0x002B9FD8u; return; } if (c.pc != 0x002F179Cu) [[unlikely]] return; }
L_002F179C:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[30].d[0];  if (t) { goto L_002F18F4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_002F18F4; } }
    set32(c.r[2], ld32((c.r[19].w[0] - 5024u)));
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 42u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F17C8u);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x002F17C8u) [[unlikely]] return; }
L_002F17C8:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 8u);
    set32(c.r[8], c.r[29].w[0] + 12u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[9], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[2].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    st32((c.r[3].w[0] + 84u), 0u);
    st16((c.r[3].w[0] + 7710u), static_cast<std::uint16_t>(c.r[22].w[0]));
    c.r[2].d[0] = ld16((c.r[29].w[0]));
    st16((c.r[16].w[0] + 7712u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1808u);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x002F1808u) [[unlikely]] return; }
L_002F1808:
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[16].w[0] + 10084u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[21].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[21].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    st8((c.r[2].w[0] + 10084u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.f[12] = fp::add(c.f[12], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1838u);  if (depth < kMaxDepth) unit_0045(c, 106u, depth + 1u); else { c.pc = 0x00215DF0u; return; } if (c.pc != 0x002F1838u) [[unlikely]] return; }
L_002F1838:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[29].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    c.f[1] = fp::add(c.f[1], c.f[0]);
    st32((c.r[3].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 132u));
    st32((c.r[3].w[0] + 132u), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 148u));
    c.f[12] = fp::add(c.f[12], c.f[20]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1884u);  if (depth < kMaxDepth) unit_0045(c, 108u, depth + 1u); else { c.pc = 0x00215E58u; return; } if (c.pc != 0x002F1884u) [[unlikely]] return; }
L_002F1884:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0])));
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    mmi::mult(c, 0, c.r[3].w[0], c.r[21].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[4].w[0] + c.r[21].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[23].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 8940u));
    st16((c.r[3].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 208u));
    st32((c.r[3].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 212u));
    st32((c.r[3].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[16].w[0] + 216u));
    st32((c.r[3].w[0] + 216u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 7676u));
    st16((c.r[3].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 148u));
    st32((c.r[3].w[0] + 148u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 113u));
    st8((c.r[3].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 28;
L_002F18F4:
    set32(c.r[22], c.r[22].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 13248u);
    set32(c.r[17], c.r[17].w[0] + 13248u);
    c.r[2].d[0] = c.r[22].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1708u | kUnwind; return; } goto L_002F1708; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.f[21] = 0u;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[23] = c.r[1].w[0];
    set32(c.r[17], c.r[2].w[0] + 27456u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[22] = c.r[1].w[0];
    c.r[22].d[0] = 0ull + 0ull;
    c.budget -= 9;
L_002F1930:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    set32(c.r[19], c.r[22].w[0] + 1u);
    set32(c.r[18], c.r[17].w[0] + 13248u);
    set32(c.r[5], 0u + 1u);
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_002F25A0; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1958u);  if (depth < kMaxDepth) unit_0089(c, 163u, depth + 1u); else { c.pc = 0x00325D28u; return; } if (c.pc != 0x002F1958u) [[unlikely]] return; }
L_002F1958:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002F25A0; } }
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 668u)));
    c.budget -= 3;
    { const bool t = c.r[21].d[0] == 0ull;  if (t) { goto L_002F25A0; } }
    c.r[20].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_002F1988; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F19A0; } }
L_002F1988:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F199Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F199Cu) [[unlikely]] return; }
L_002F199C:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F19A0:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st32((c.r[5].w[0] - 5024u), c.r[4].w[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F19D0; } }
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0] + 36u), c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F19D8; } }
L_002F19D0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 12u)));
    st32((c.r[29].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 2;
L_002F19D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7716u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F1AB4; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[12] = c.f[21];
    c.f[13] = c.f[21];
    set32(c.r[5], c.r[29].w[0] + 20u);
    set32(c.r[6], c.r[29].w[0] + 4u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[19], c.r[22].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1A10u);  if (depth < kMaxDepth) unit_006E(c, 158u, depth + 1u); else { c.pc = 0x002B9FD8u; return; } if (c.pc != 0x002F1A10u) [[unlikely]] return; }
L_002F1A10:
    set32(c.r[18], c.r[17].w[0] + 13248u);
    st8((c.r[17].w[0] + 10136u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002F25A0; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002F1AAC; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F25A0; } }
    set32(c.r[2], 0u + 13248u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.lo.d[0] = c.r[2].d[0];
    mmi::madd(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[23].w[0] - 5024u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 86u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9940u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 22872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F25A0; } }
L_002F1AAC:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 20u));
    st16((c.r[17].w[0] + 7716u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F1AB4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7716u)));
    set32(c.r[2], 0u + 13248u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[5], c.r[6].w[0] + 27456u);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1C84; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F1C84; } }
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    set32(c.r[18], 0u + 512u);
    c.f[12] = ld32((c.r[16].w[0] + 136u));
    c.f[2] = ld32((c.r[17].w[0] + 148u));
    c.f[12] = fp::sub(c.f[12], c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[17].w[0] + 128u));
    c.f[0] = fp::cvt_w_s(c.f[2]);
    set32(c.r[2], c.f[0]);
    c.f[13] = fp::sub(c.f[1], c.f[13]);
    c.f[12] = c.f[12] ^ fp::kSign;
    c.f[20] = c.r[2].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1B30u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002F1B30u) [[unlikely]] return; }
L_002F1B30:
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[21]));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1B60; } }
    c.f[20] = fp::add(c.f[20], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1B80; } }
L_002F1B60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1B80; } }
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 1;
L_002F1B80:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[21]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1B9C; } }
    c.f[1] = fp::add(c.f[1], c.f[23]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1BBC; } }
L_002F1B9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1BBC; } }
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 1;
L_002F1BBC:
    c.f[2] = c.r[18].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[3] = fp::sub(c.f[20], c.f[2]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[21]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1C00; } }
    c.f[0] = fp::add(c.f[3], c.f[23]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1C44; } }
    c.f[0] = fp::add(c.f[20], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1C38; } }
L_002F1C00:
    c.f[0] = fp::add(c.f[20], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[2] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1C50; } }
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1C44; } }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 1;
L_002F1C38:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1C70; } }
L_002F1C44:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1C74; } }
L_002F1C50:
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1C70; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1C74; } }
L_002F1C70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F1C74:
    set32(c.r[19], c.r[22].w[0] + 1u);
    set32(c.r[18], c.r[17].w[0] + 13248u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F25A0; } }
L_002F1C84:
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] >= 0;  if (t) { goto L_002F1C98; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1CB0; } }
L_002F1C98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CACu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F1CACu) [[unlikely]] return; }
L_002F1CAC:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F1CB0:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    st32((c.r[23].w[0] - 5024u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F1D28; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CD0u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F1CD0u) [[unlikely]] return; }
L_002F1CD0:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1D14; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1CFCu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F1CFCu) [[unlikely]] return; }
L_002F1CFC:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[22]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1D78; } }
L_002F1D14:
    set32(c.r[3], ld32((c.r[23].w[0] - 5024u)));
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1D84; } }
L_002F1D28:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D34u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F1D34u) [[unlikely]] return; }
L_002F1D34:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F1D78; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1D60u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F1D60u) [[unlikely]] return; }
L_002F1D60:
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[22]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F1D84; } }
L_002F1D78:
    set32(c.r[30], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1D88; } }
L_002F1D84:
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F1D88:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7716u)));
    set32(c.r[19], c.r[22].w[0] + 1u);
    set32(c.r[18], c.r[17].w[0] + 13248u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002F25A0; } }
    c.budget -= 2;
    { const bool t = c.r[21].sd[0] >= 0;  if (t) { goto L_002F1DB4; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1DCC; } }
L_002F1DB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DC8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F1DC8u) [[unlikely]] return; }
L_002F1DC8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F1DCC:
    st32((c.r[23].w[0] - 5024u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10136u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F1DE0; } }
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 38u)));
    c.budget -= 1;
L_002F1DE0:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.f[13] = ld32((c.r[17].w[0] + 136u));
    c.f[14] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1DF8u);  if (depth < kMaxDepth) unit_0081(c, 174u, depth + 1u); else { c.pc = 0x00306268u; return; } if (c.pc != 0x002F1DF8u) [[unlikely]] return; }
L_002F1DF8:
    st32((c.r[29].w[0] + 4u), c.f[0]);
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_002F1E10; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1E28; } }
L_002F1E10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1E24u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F1E24u) [[unlikely]] return; }
L_002F1E24:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F1E28:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[23].w[0] - 5024u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F20D0; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    c.lo.d[0] = c.r[2].d[0];
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 86u)));
    mmi::madd(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[6], c.r[6].w[0] - 22872u);
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9940u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F20D0; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F20D0; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002F20D0; } }
    c.f[1] = ld32((c.r[16].w[0] + 128u));
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.f[0] = ld32((c.r[16].w[0] + 136u));
    c.f[13] = ld32((c.r[17].w[0] + 136u));
    c.f[12] = fp::sub(c.f[1], c.f[12]);
    c.f[13] = fp::sub(c.f[0], c.f[13]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1ED8u);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002F1ED8u) [[unlikely]] return; }
L_002F1ED8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_002F1EF0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F1F04; } }
L_002F1EF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[3].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F04u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F1F04u) [[unlikely]] return; }
L_002F1F04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[7], c.r[29].w[0] + 8u);
    st32((c.r[4].w[0] - 5024u), c.r[2].w[0]);
    set32(c.r[8], c.r[29].w[0] + 12u);
    set32(c.r[9], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 10u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F2Cu);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x002F1F2Cu) [[unlikely]] return; }
L_002F1F2C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[7], c.r[29].w[0] + 24u);
    set32(c.r[2], ld32((c.r[5].w[0] - 5024u)));
    set32(c.r[8], c.r[29].w[0] + 28u);
    set32(c.r[9], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 42u)));
    set32(c.r[6], 0u + 10u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F54u);  if (depth < kMaxDepth) unit_006B(c, 113u, depth + 1u); else { c.pc = 0x002AE650u; return; } if (c.pc != 0x002F1F54u) [[unlikely]] return; }
L_002F1F54:
    c.f[20] = c.r[18].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    c.f[20] = fp::add(c.f[20], c.f[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.f[12] = c.f[20];
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1F88u);  if (depth < kMaxDepth) unit_0045(c, 106u, depth + 1u); else { c.pc = 0x00215DF0u; return; } if (c.pc != 0x002F1F88u) [[unlikely]] return; }
L_002F1F88:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    c.f[12] = c.f[20];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FA4u);  if (depth < kMaxDepth) unit_0045(c, 108u, depth + 1u); else { c.pc = 0x00215E58u; return; } if (c.pc != 0x002F1FA4u) [[unlikely]] return; }
L_002F1FA4:
    set32(c.r[3], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], c.r[5].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    st32((c.r[29].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F1FE0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F1FE0u) [[unlikely]] return; }
L_002F1FE0:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 6080u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], c.r[5].w[0] - 6080u);
    c.f[0] = ld32((c.r[6].w[0] + 128u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[29].w[0] + 24u), c.f[1]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F201Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F201Cu) [[unlikely]] return; }
L_002F201C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 6080u);
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    set32(c.r[2], ld32((c.r[29].w[0] + 24u)));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[1]);
    set32(c.r[4], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[2].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F207C; } }
    set32(c.r[2], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x002F2068u);  goto L_002F206C; }
L_002F206C:
    c.r[3].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
L_002F207C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8938u)));
    set32(c.r[19], c.r[22].w[0] + 1u);
    set32(c.r[18], c.r[17].w[0] + 13248u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F25A0; } }
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = ld32((c.r[17].w[0] + 128u));
    c.f[3] = c.r[5].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    st32((c.r[17].w[0] + 216u), 0u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 208u), 0u);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[17].w[0] + 128u), c.f[1]);
    st32((c.r[17].w[0] + 136u), c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F25A0; } }
L_002F20D0:
    set32(c.r[2], 0u - 1u);
    st16((c.r[17].w[0] + 668u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 7716u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_002F20F0; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2108; } }
L_002F20F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2104u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F2104u) [[unlikely]] return; }
L_002F2104:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F2108:
    set32(c.r[3], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[23].w[0] - 5024u), c.r[4].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F22E0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[6], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_002F2524; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 48u)));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2524; } }
    set32(c.r[2], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 86u)));
    c.lo.d[0] = c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::madd(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9940u)));
    set32(c.r[4], c.r[4].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] - 22872u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[5].w[0] + c.r[3].w[0]);
    c.f[0] = c.r[5].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F2524; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10079u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2524; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10085u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2524; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10097u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2524; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_002F2524; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F2524; } }
    c.budget -= 2;
    { const bool t = c.r[30].d[0] == 0ull;  if (t) { goto L_002F2524; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F22E0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F22E0; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002F22E0; } }
    set32(c.r[2], 0u + 45u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F22E0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F22E0; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F22E0; } }
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_002F224C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2260; } }
L_002F224C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[5].w[0] + 12288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2260u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F2260u) [[unlikely]] return; }
L_002F2260:
    st32((c.r[23].w[0] - 5024u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2270u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F2270u) [[unlikely]] return; }
L_002F2270:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[1] = c.r[1].w[0];
    c.r[2].d[0] = 0ull + 0ull;
    c.f[2] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[22]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F22B0; } }
    set32(c.r[3], ld32((c.r[23].w[0] - 5024u)));
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    if (c.r[2].d[0] == 0) c.r[6].d[0] = 0ull;
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 6;
L_002F22B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F22E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 7700u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F22E0; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F22E0; } }
    set32(c.r[2], 0u + 138u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2524; } }
L_002F22E0:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2308; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2304u);  if (depth < kMaxDepth) unit_006E(c, 170u, depth + 1u); else { c.pc = 0x002BA420u; return; } if (c.pc != 0x002F2304u) [[unlikely]] return; }
L_002F2304:
    st32((c.r[16].w[0] + 148u), c.f[0]);
    c.budget -= 1;
L_002F2308:
    st32((c.r[17].w[0] + 208u), 0u);
    set32(c.r[3], 0u + 13248u);
    st32((c.r[17].w[0] + 216u), 0u);
    c.lo.d[0] = c.r[3].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[4], c.r[4].w[0] + 14208u);
    mmi::madd(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 8933u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 208u), 0u);
    st32((c.r[2].w[0] + 216u), 0u);
    st8((c.r[2].w[0] + 8932u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 212u), 0u);
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F235C; } }
    set32(c.r[2], 0u + 2u);
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 2;
L_002F235C:
    st32((c.r[16].w[0] + 212u), 0u);
    st16((c.r[16].w[0] + 8940u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[18].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F237C; } }
    set32(c.r[2], 0u + 2u);
    st64((c.r[16].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 2;
L_002F237C:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_002F2390; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F23A8; } }
L_002F2390:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[5].w[0] + 12288u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F23A4u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F23A4u) [[unlikely]] return; }
L_002F23A4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F23A8:
    c.r[2].d[0] = ld64((c.r[17].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st32((c.r[23].w[0] - 5024u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2458; } }
    set32(c.r[2], 0u - 1u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    st16((c.r[16].w[0] + 7686u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[4], 0u - 1u);
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    st16((c.r[16].w[0] + 7672u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7674u), static_cast<std::uint16_t>(0u));
    st8((c.r[16].w[0] + 10076u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10092u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002F2408; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[6].w[0] + 14208u);
    c.lo.d[0] = c.r[6].d[0];
    set32(c.r[6], 0u + 13248u);
    mmi::madd(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[2].w[0] + 7710u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 7712u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
L_002F2408:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_002F2430; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 13248u);
    mmi::madd(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[2].w[0] + 7712u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 7710u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 7;
L_002F2430:
    set32(c.r[2], ld32((c.r[16].w[0] + 584u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    st32((c.r[16].w[0] + 664u), c.r[4].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    st16((c.r[16].w[0] + 668u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 584u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2458u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002F2458u) [[unlikely]] return; }
L_002F2458:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[19], c.r[22].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2468u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F2468u) [[unlikely]] return; }
L_002F2468:
    set32(c.r[18], c.r[17].w[0] + 13248u);
    st32((c.r[16].w[0] + 132u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F247Cu);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F247Cu) [[unlikely]] return; }
L_002F247C:
    st32((c.r[17].w[0] + 132u), c.f[0]);
    set32(c.r[3], 0u + 4u);
    st16((c.r[17].w[0] + 10010u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], c.r[17].w[0] + 10124u);
    c.budget -= 5;
L_002F2490:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F2490u | kUnwind; return; } goto L_002F2490; } }
    st16((c.r[17].w[0] + 10118u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[20].sd[0] < 0;  if (t) { goto L_002F24CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24CCu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F24CCu) [[unlikely]] return; }
L_002F24CC:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 42u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 20u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st32((c.r[3].w[0] - 5024u), c.r[2].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F24ECu);  if (depth < kMaxDepth) unit_0081(c, 27u, depth + 1u); else { c.pc = 0x00304620u; return; } if (c.pc != 0x002F24ECu) [[unlikely]] return; }
L_002F24EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] - 5024u)));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 14u));
    st8((c.r[16].w[0] + 9997u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 10091u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 9931u)));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 9931u));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F25A0; } }
    set32(c.r[2], 0u - c.r[3].w[0]);
    st8((c.r[17].w[0] + 9931u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F25A0; } }
L_002F2524:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { goto L_002F2538; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2550; } }
L_002F2538:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[4], c.r[6].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F254Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F254Cu) [[unlikely]] return; }
L_002F254C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F2550:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 40u));
    st32((c.r[23].w[0] - 5024u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F257C; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 74u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2574u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002F2574u) [[unlikely]] return; }
L_002F2574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F258C; } }
L_002F257C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 73u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F258Cu);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002F258Cu) [[unlikely]] return; }
L_002F258C:
    set32(c.r[2], 0u + 12u);
    st8((c.r[17].w[0] + 9931u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 7700u), c.r[2].w[0]);
    set32(c.r[19], c.r[22].w[0] + 1u);
    set32(c.r[18], c.r[17].w[0] + 13248u);
    c.budget -= 5;
L_002F25A0:
    c.r[22].d[0] = c.r[19].d[0] + 0ull;
    c.r[17].d[0] = c.r[18].d[0] + 0ull;
    c.r[2].d[0] = c.r[22].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F1930u | kUnwind; return; } goto L_002F1930; } }
L_002F25B4:
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
    c.f[23] = ld32((c.r[29].w[0] + 232u));
    c.f[22] = ld32((c.r[29].w[0] + 224u));
    c.f[21] = ld32((c.r[29].w[0] + 216u));
    c.f[20] = ld32((c.r[29].w[0] + 208u));
    set32(c.r[29], c.r[29].w[0] + 240u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F25F8:
    set32(c.r[29], c.r[29].w[0] - 176u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    mmi::mult(c, 0, c.r[23].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 23;
    { const bool t = c.r[22].sd[0] >= 0;  if (t) { goto L_002F2660; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2678; } }
L_002F2660:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2674u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F2674u) [[unlikely]] return; }
L_002F2674:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F2678:
    c.r[2].d[0] = ld64((c.r[19].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F26A0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F26A8; } }
L_002F26A0:
    c.r[30].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 12u)));
    st32((c.r[29].w[0] + 4u), c.r[30].w[0]);
    c.budget -= 2;
L_002F26A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2774; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7712u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_002F2774; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26D4u);  if (depth < kMaxDepth) unit_0080(c, 155u, depth + 1u); else { c.pc = 0x003025D0u; return; } if (c.pc != 0x002F26D4u) [[unlikely]] return; }
L_002F26D4:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F26E0u);  if (depth < kMaxDepth) unit_0081(c, 192u, depth + 1u); else { c.pc = 0x00306598u; return; } if (c.pc != 0x002F26E0u) [[unlikely]] return; }
L_002F26E0:
    set32(c.r[20], c.r[2].w[0] - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[4].w[0] + 27456u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 104u));
    st16((c.r[19].w[0] + 7710u), static_cast<std::uint16_t>(c.r[16].w[0]));
    st16((c.r[19].w[0] + 7712u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[2].w[0] + 7712u), static_cast<std::uint16_t>(c.r[16].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 104u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st16((c.r[2].w[0] + 7710u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[19].w[0] + 128u));
    st32((c.r[19].w[0] + 148u), c.f[0]);
    st32((c.r[2].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 132u));
    st32((c.r[2].w[0] + 132u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 136u));
    st32((c.r[2].w[0] + 136u), c.f[1]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 8940u));
    st16((c.r[2].w[0] + 8940u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 208u));
    st32((c.r[2].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 212u));
    st32((c.r[2].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 216u));
    st32((c.r[2].w[0] + 216u), c.f[0]);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 7676u));
    st16((c.r[2].w[0] + 7676u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 148u));
    st32((c.r[2].w[0] + 148u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[19].w[0] + 113u));
    st8((c.r[2].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 37;
L_002F2774:
    set32(c.r[2], 0u - 1u);
    st16((c.r[19].w[0] + 10038u), static_cast<std::uint16_t>(0u));
    st8((c.r[19].w[0] + 9969u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 10132u), static_cast<std::uint8_t>(0u));
    st32((c.r[19].w[0] + 68u), 0u);
    c.budget -= 7;
    { const bool t = c.r[22].sd[0] >= 0;  if (t) { goto L_002F279C; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F27B4; } }
L_002F279C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F27B0u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F27B0u) [[unlikely]] return; }
L_002F27B0:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F27B4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 88u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2800; } }
    set32(c.r[3], c.r[23].w[0] + 1u);
    set32(c.r[5], 0u + 13248u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[2].w[0] + 14208u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7696u)));
    c.budget -= 10;
    { const bool t = c.r[20].d[0] == c.r[4].d[0];  if (t) { goto L_002F2800; } }
    mmi::mult(c, 0, c.r[20].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 113u));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st8((c.r[2].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002F2800:
    c.r[16].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F2844; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F2F34; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 292u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F2F34; } }
L_002F2844:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 42u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2DDC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2DDC; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 9848u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F28C4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2880u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002F2880u) [[unlikely]] return; }
L_002F2880:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F28C4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F28C4; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F28C4; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F28BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F28BCu) [[unlikely]] return; }
L_002F28BC:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[19].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F28C4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F28DC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7696u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F28E0; } }
L_002F28DC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7712u)));
    c.budget -= 1;
L_002F28E0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002F28F4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_002F28F4:
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[21], c.r[20].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002F2924; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2D5C; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_002F2D5C; } }
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == c.r[3].d[0];  if (t) { goto L_002F2D5C; } }
L_002F2924:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002F299C; } }
    set32(c.r[16], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[17], c.r[17].w[0] - 6080u);
    set32(c.r[18], c.r[2].w[0] + 27456u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2978u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002F2978u) [[unlikely]] return; }
L_002F2978:
    mmi::mult(c, 0, c.r[21].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.f[0] = ld32((c.r[17].w[0] + 136u));
    c.f[1] = ld32((c.r[17].w[0] + 128u));
    set32(c.r[18], c.r[18].w[0] - 13248u);
    c.f[2] = ld32((c.r[17].w[0] + 132u));
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    st32((c.r[16].w[0] + 10264u), c.f[0]);
    st32((c.r[16].w[0] + 10256u), c.f[1]);
    st32((c.r[16].w[0] + 10260u), c.f[2]);
    c.budget -= 9;
L_002F299C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10272u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2A04; } }
    c.f[3] = c.r[2].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = ld32((c.r[19].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x40C90000u);
    c.r[1].d[0] = c.r[1].d[0] | 4059ull;
    c.f[2] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x39800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[29].w[0]), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29E8u);  if (depth < kMaxDepth) unit_008B(c, 163u, depth + 1u); else { c.pc = 0x0032D3F0u; return; } if (c.pc != 0x002F29E8u) [[unlikely]] return; }
L_002F29E8:
    c.f[12] = ld32((c.r[29].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F29F4u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x002F29F4u) [[unlikely]] return; }
L_002F29F4:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[19].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_002F2A04:
    set32(c.r[18], 0u + 13248u);
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    mmi::mult(c, 0, c.r[21].w[0], c.r[18].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], 0u + 1u);
    set32(c.r[21], c.r[2].w[0] + 14208u);
    st32((c.r[19].w[0] + 36u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    st16((c.r[19].w[0] + 9008u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[21].w[0]);
    set32(c.r[22], 0u + 8u);
    st16((c.r[16].w[0] + 9008u), static_cast<std::uint16_t>(c.r[17].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A40u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002F2A40u) [[unlikely]] return; }
L_002F2A40:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[30].w[0] + 42u)));
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A50u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002F2A50u) [[unlikely]] return; }
L_002F2A50:
    mmi::mult(c, 0, c.r[23].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st16((c.r[19].w[0] + 9008u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 9008u), static_cast<std::uint16_t>(0u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st16((c.r[16].w[0] + 7710u), static_cast<std::uint16_t>(c.r[23].w[0]));
    set32(c.r[6], 0u + 1u);
    st32((c.r[16].w[0] + 84u), 0u);
    st16((c.r[19].w[0] + 7712u), static_cast<std::uint16_t>(c.r[20].w[0]));
    set32(c.r[2], c.r[3].w[0] + c.r[18].w[0]);
    st8((c.r[16].w[0] + 10084u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[21].w[0]);
    st8((c.r[2].w[0] + 10084u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10079u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[16].w[0] + 10079u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 7700u), c.r[22].w[0]);
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2A98u);  if (depth < kMaxDepth) unit_0079(c, 190u, depth + 1u); else { c.pc = 0x002E6D40u; return; } if (c.pc != 0x002F2A98u) [[unlikely]] return; }
L_002F2A98:
    set32(c.r[4], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F2F10; } }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2F10; } }
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[21].w[0] + 13248u);
    set32(c.r[5], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[17], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 104u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002F2F10; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2AE0u);  if (depth < kMaxDepth) unit_0089(c, 168u, depth + 1u); else { c.pc = 0x00325DD8u; return; } if (c.pc != 0x002F2AE0u) [[unlikely]] return; }
L_002F2AE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2F10; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F2C38; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B04u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F2B04u) [[unlikely]] return; }
L_002F2B04:
    st32((c.r[17].w[0] + 132u), c.f[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B14u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x002F2B14u) [[unlikely]] return; }
L_002F2B14:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F2B48; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002F2B48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 16u);
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2B4C; } }
L_002F2B48:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002F2B4C:
    st64((c.r[19].w[0] + 560u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B5Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002F2B5Cu) [[unlikely]] return; }
L_002F2B5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2BDC; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[17].w[0] + 10256u));
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B80u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002F2B80u) [[unlikely]] return; }
L_002F2B80:
    c.f[12] = ld32((c.r[17].w[0] + 10264u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2B94u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002F2B94u) [[unlikely]] return; }
L_002F2B94:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BA8u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002F2BA8u) [[unlikely]] return; }
L_002F2BA8:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BB4u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F2BB4u) [[unlikely]] return; }
L_002F2BB4:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BC8u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x002F2BC8u) [[unlikely]] return; }
L_002F2BC8:
    c.f[12] = ld32((c.r[17].w[0] + 136u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2BDCu);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002F2BDCu) [[unlikely]] return; }
L_002F2BDC:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    set32(c.r[4], 0u + 12u);
    set32(c.r[5], 0u + 8u);
    st32((c.r[19].w[0] + 148u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8940u));
    st16((c.r[19].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 208u));
    st32((c.r[19].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    st32((c.r[19].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 216u));
    st32((c.r[19].w[0] + 216u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 7676u));
    st16((c.r[19].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 113u));
    st32((c.r[19].w[0] + 7700u), c.r[4].w[0]);
    st8((c.r[19].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[19].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 7700u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 7700u), c.r[5].w[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2F10; } }
L_002F2C38:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C44u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x002F2C44u) [[unlikely]] return; }
L_002F2C44:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F2C78; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 7700u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[22].d[0];  if (t) { goto L_002F2C78; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 16u);
    st64((c.r[19].w[0] + 560u), c.r[2].d[0]);
    st32((c.r[19].w[0] + 212u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2C7C; } }
L_002F2C78:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002F2C7C:
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2C8Cu);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002F2C8Cu) [[unlikely]] return; }
L_002F2C8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2D0C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[19].w[0] + 10256u));
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CB0u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002F2CB0u) [[unlikely]] return; }
L_002F2CB0:
    c.f[12] = ld32((c.r[19].w[0] + 10264u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CC4u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002F2CC4u) [[unlikely]] return; }
L_002F2CC4:
    c.f[12] = ld32((c.r[19].w[0] + 128u));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CD8u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002F2CD8u) [[unlikely]] return; }
L_002F2CD8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CE4u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F2CE4u) [[unlikely]] return; }
L_002F2CE4:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2CF8u);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x002F2CF8u) [[unlikely]] return; }
L_002F2CF8:
    c.f[12] = ld32((c.r[19].w[0] + 136u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D0Cu);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002F2D0Cu) [[unlikely]] return; }
L_002F2D0C:
    c.f[0] = ld32((c.r[19].w[0] + 148u));
    set32(c.r[4], 0u + 12u);
    st32((c.r[17].w[0] + 148u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 8940u));
    st16((c.r[17].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 208u));
    st32((c.r[17].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[19].w[0] + 212u));
    st32((c.r[17].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[19].w[0] + 216u));
    st32((c.r[17].w[0] + 216u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[19].w[0] + 7676u));
    st16((c.r[17].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 113u));
    st32((c.r[17].w[0] + 7700u), c.r[4].w[0]);
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2F10; } }
L_002F2D5C:
    c.budget -= 2;
    { const bool t = c.r[22].sd[0] >= 0;  if (t) { goto L_002F2D70; } }
    c.r[30].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2D88; } }
L_002F2D70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2D84u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F2D84u) [[unlikely]] return; }
L_002F2D84:
    c.r[30].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002F2D88:
    c.r[2].d[0] = ld16((c.r[30].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2DB0; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 74u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2DA8u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002F2DA8u) [[unlikely]] return; }
L_002F2DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2DC0; } }
L_002F2DB0:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[5], 0u + 73u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2DC0u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002F2DC0u) [[unlikely]] return; }
L_002F2DC0:
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], 0u - 1u);
    st16((c.r[19].w[0] + 668u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st32((c.r[19].w[0] + 7700u), c.r[2].w[0]);
    st16((c.r[19].w[0] + 7716u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2F10; } }
L_002F2DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[6], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F2E08; } }
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 40u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 44u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E08u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F2E08u) [[unlikely]] return; }
L_002F2E08:
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 100u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F2E20; } }
    set32(c.r[2], 0u + 6u);
    st32((c.r[19].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 2;
L_002F2E20:
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_002F2E44; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2E3Cu);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x002F2E3Cu) [[unlikely]] return; }
L_002F2E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2F10; } }
L_002F2E44:
    c.r[2].d[0] = c.r[17].d[0] & 30ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2E94; } }
    c.r[2].d[0] = ld64((c.r[19].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2E78; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[19].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2E7C; } }
L_002F2E78:
    st32((c.r[19].w[0] + 7700u), 0u);
    c.budget -= 1;
L_002F2E7C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 8933u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2E94; } }
    set32(c.r[2], 0u + 16u);
    st8((c.r[19].w[0] + 8932u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[19].w[0] + 8933u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002F2E94:
    set32(c.r[2], ld32((c.r[19].w[0] + 44u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2EC4; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F2EBC; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2EBCu);  if (depth < kMaxDepth) unit_0069(c, 91u, depth + 1u); else { c.pc = 0x002A6188u; return; } if (c.pc != 0x002F2EBCu) [[unlikely]] return; }
L_002F2EBC:
    set32(c.r[2], 0u + 5u);
    st32((c.r[19].w[0] + 76u), c.r[2].w[0]);
    c.budget -= 2;
L_002F2EC4:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2EF8; } }
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    st8((c.r[19].w[0] + 9829u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2EF0u);  if (depth < kMaxDepth) unit_0079(c, 179u, depth + 1u); else { c.pc = 0x002E69D8u; return; } if (c.pc != 0x002F2EF0u) [[unlikely]] return; }
L_002F2EF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2F10; } }
L_002F2EF8:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F10u);  if (depth < kMaxDepth) unit_0079(c, 175u, depth + 1u); else { c.pc = 0x002E68E0u; return; } if (c.pc != 0x002F2F10u) [[unlikely]] return; }
L_002F2F10:
    c.r[2].d[0] = ld64((c.r[19].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F2F34; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    st64((c.r[19].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2F34u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002F2F34u) [[unlikely]] return; }
L_002F2F34:
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
L_002F2F68:
    set32(c.r[29], c.r[29].w[0] - 160u);
    set32(c.r[3], 0u + 13248u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    set32(c.r[4], 0u - 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[30]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st8((c.r[20].w[0] + 9969u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[20].w[0] + 10038u), static_cast<std::uint16_t>(0u));
    st8((c.r[20].w[0] + 10132u), static_cast<std::uint8_t>(0u));
    c.budget -= 25;
    { const bool t = c.r[23].sd[0] >= 0;  if (t) { goto L_002F2FD8; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F2FEC; } }
L_002F2FD8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F2FECu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F2FECu) [[unlikely]] return; }
L_002F2FEC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 88u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 5024u), c.r[2].w[0]);
    c.r[30].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002F3044; } }
    set32(c.r[3], c.r[22].w[0] + 1u);
    set32(c.r[16], 0u + 13248u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[5], c.r[2].w[0] + 14208u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7696u)));
    c.budget -= 10;
    { const bool t = c.r[21].d[0] == c.r[4].d[0];  if (t) { goto L_002F3044; } }
    mmi::mult(c, 0, c.r[21].w[0], c.r[16].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].d[0] = ld8((c.r[3].w[0] + 113u));
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002F3044:
    c.r[6].d[0] = c.r[17].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F3088; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 7700u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3270; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7694u)));
    set32(c.r[3], 0u + 880u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[5], ld32((c.r[20].w[0] + 36u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 4440u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 292u)));
    c.budget -= 10;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002F3270; } }
L_002F3088:
    set32(c.r[4], ld32((c.r[30].w[0] - 5024u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 42u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F31B4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F31B4; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002F3128; } }
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 7712u)));
    set32(c.r[17], 0u + 13248u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[19], 0u + 1u);
    set32(c.r[16], c.r[21].w[0] + 1u);
    set32(c.r[18], c.r[18].w[0] + 14208u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    st16((c.r[20].w[0] + 9008u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] + c.r[18].w[0]);
    st16((c.r[16].w[0] + 9008u), static_cast<std::uint16_t>(c.r[19].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30E4u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002F30E4u) [[unlikely]] return; }
L_002F30E4:
    set32(c.r[2], ld32((c.r[30].w[0] - 5024u)));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 42u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F30F8u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002F30F8u) [[unlikely]] return; }
L_002F30F8:
    mmi::mult(c, 0, c.r[22].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    st16((c.r[20].w[0] + 9008u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 9008u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 7710u), static_cast<std::uint16_t>(c.r[22].w[0]));
    st32((c.r[16].w[0] + 84u), 0u);
    st16((c.r[20].w[0] + 7712u), static_cast<std::uint16_t>(c.r[21].w[0]));
    set32(c.r[17], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[17], c.r[17].w[0] + c.r[18].w[0]);
    st8((c.r[16].w[0] + 10084u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[17].w[0] + 10084u), static_cast<std::uint8_t>(c.r[19].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F324C; } }
L_002F3128:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F3148; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 10930u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002F3160; } }
L_002F3148:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3158u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002F3158u) [[unlikely]] return; }
L_002F3158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3198; } }
L_002F3160:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[2].d[0] = c.r[2].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3188; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 74u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3180u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002F3180u) [[unlikely]] return; }
L_002F3180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3198; } }
L_002F3188:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], 0u + 73u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3198u);  if (depth < kMaxDepth) unit_0080(c, 221u, depth + 1u); else { c.pc = 0x00303678u; return; } if (c.pc != 0x002F3198u) [[unlikely]] return; }
L_002F3198:
    set32(c.r[2], 0u + 8u);
    set32(c.r[3], 0u - 1u);
    st16((c.r[20].w[0] + 668u), static_cast<std::uint16_t>(c.r[23].w[0]));
    st32((c.r[20].w[0] + 7700u), c.r[2].w[0]);
    st16((c.r[20].w[0] + 7716u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F324C; } }
L_002F31B4:
    set32(c.r[2], 0u + 6u);
    c.r[3].d[0] = c.r[17].d[0] & 30ull;
    st32((c.r[20].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F320C; } }
    c.r[2].d[0] = ld64((c.r[20].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F31F0; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[20].w[0] + 7700u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F31F4; } }
L_002F31F0:
    st32((c.r[20].w[0] + 7700u), 0u);
    c.budget -= 1;
L_002F31F4:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 8933u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F320C; } }
    set32(c.r[2], 0u + 16u);
    st8((c.r[20].w[0] + 8932u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[20].w[0] + 8933u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002F320C:
    c.r[2].d[0] = c.r[17].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F323C; } }
    set32(c.r[16], 0u + 1u);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    st8((c.r[20].w[0] + 9829u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3230u);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002F3230u) [[unlikely]] return; }
L_002F3230:
    st8((c.r[20].w[0] + 113u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F324C; } }
L_002F323C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F324Cu);  if (depth < kMaxDepth) unit_0081(c, 162u, depth + 1u); else { c.pc = 0x00306078u; return; } if (c.pc != 0x002F324Cu) [[unlikely]] return; }
L_002F324C:
    c.r[2].d[0] = ld64((c.r[20].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F3270; } }
    set32(c.r[2], 0u + 2u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st64((c.r[20].w[0] + 560u), c.r[2].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3270u);  if (depth < kMaxDepth) unit_001A(c, 234u, depth + 1u); else { c.pc = 0x0016A750u; return; } if (c.pc != 0x002F3270u) [[unlikely]] return; }
L_002F3270:
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
L_002F32A8:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 272u) & ~15u, c.r[21]);
    set32(c.r[3], c.r[29].w[0] + 32u);
    st32((c.r[29].w[0] + 368u), c.f[20]);
    set32(c.r[6], c.r[2].w[0] - 19936u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    c.r[2].d[0] = c.r[6].d[0] & 7ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 256u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 376u), c.f[21]);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F335C; } }
    set32(c.r[5], c.r[6].w[0] + 96u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_002F3304:
    ldl(c.r[9], (c.r[6].w[0] + 7u));
    ldr(c.r[9], (c.r[6].w[0]));
    ldl(c.r[10], (c.r[6].w[0] + 15u));
    ldr(c.r[10], (c.r[6].w[0] + 8u));
    ldl(c.r[11], (c.r[6].w[0] + 23u));
    ldr(c.r[11], (c.r[6].w[0] + 16u));
    ldl(c.r[12], (c.r[6].w[0] + 31u));
    ldr(c.r[12], (c.r[6].w[0] + 24u));
    sdl(c.r[9], (c.r[3].w[0] + 7u));
    sdr(c.r[9], (c.r[3].w[0]));
    sdl(c.r[10], (c.r[3].w[0] + 15u));
    sdr(c.r[10], (c.r[3].w[0] + 8u));
    sdl(c.r[11], (c.r[3].w[0] + 23u));
    sdr(c.r[11], (c.r[3].w[0] + 16u));
    sdl(c.r[12], (c.r[3].w[0] + 31u));
    sdr(c.r[12], (c.r[3].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3304u | kUnwind; return; } goto L_002F3304; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F339C; } }
L_002F335C:
    set32(c.r[5], c.r[6].w[0] + 96u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[29].w[0] + 128u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 4;
L_002F336C:
    c.r[9].d[0] = ld64((c.r[6].w[0]));
    c.r[10].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[11].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[12].d[0] = ld64((c.r[6].w[0] + 24u));
    st64((c.r[3].w[0]), c.r[9].d[0]);
    st64((c.r[3].w[0] + 8u), c.r[10].d[0]);
    st64((c.r[3].w[0] + 16u), c.r[11].d[0]);
    st64((c.r[3].w[0] + 24u), c.r[12].d[0]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[6].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F336Cu | kUnwind; return; } goto L_002F336C; } }
L_002F339C:
    set32(c.r[6], c.r[7].w[0] - 19840u);
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], c.r[6].w[0] + 128u);
    c.budget -= 3;
L_002F33A8:
    ld128((c.r[6].w[0]) & ~15u, c.r[5]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[9]);
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    st128((c.r[3].w[0] + 16u) & ~15u, c.r[9]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[6].d[0] != c.r[7].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F33A8u | kUnwind; return; } goto L_002F33A8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[20], 0u + 11u);
    c.budget -= 6;
L_002F33E0:
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[17].w[0] + 4u)));
    c.f[15] = c.f[21];
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] - 1u);
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.f[12] = ld32((c.r[2].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = fp::mul(c.f[14], c.f[20]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[13] = fp::mul(c.f[13], c.f[20]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3420u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002F3420u) [[unlikely]] return; }
L_002F3420:
    set32(c.r[16], c.r[16].w[0] << 4);
    c.f[15] = c.f[21];
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.f[14] = fp::mul(c.f[14], c.f[20]);
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[13] = fp::mul(c.f[13], c.f[20]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3450u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002F3450u) [[unlikely]] return; }
L_002F3450:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3464u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002F3464u) [[unlikely]] return; }
L_002F3464:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3478u);  if (depth < kMaxDepth) unit_0045(c, 4u, depth + 1u); else { c.pc = 0x002140C8u; return; } if (c.pc != 0x002F3478u) [[unlikely]] return; }
L_002F3478:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F33E0u | kUnwind; return; } goto L_002F33E0; } }
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 256u));
    c.f[21] = ld32((c.r[29].w[0] + 376u));
    c.f[20] = ld32((c.r[29].w[0] + 368u));
    set32(c.r[29], c.r[29].w[0] + 384u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F34B0:
    set32(c.r[29], c.r[29].w[0] - 1152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st128((c.r[29].w[0] + 1072u) & ~15u, c.r[19]);
    set32(c.r[7], c.r[2].w[0] - 19712u);
    st128((c.r[29].w[0] + 1056u) & ~15u, c.r[20]);
    set32(c.r[6], c.r[29].w[0] + 512u);
    st32((c.r[29].w[0] + 1136u), c.f[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[16]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 1104u) & ~15u, c.r[17]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 1088u) & ~15u, c.r[18]);
    c.r[2].d[0] = c.r[7].d[0] & 7ull;
    st128((c.r[29].w[0] + 1040u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 1024u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 1008u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 992u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 976u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1144u), c.f[21]);
    c.budget -= 22;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F35B4; } }
    set32(c.r[5], c.r[29].w[0] + 260u);
    set32(c.r[8], c.r[29].w[0] + 264u);
    set32(c.r[9], c.r[29].w[0] + 268u);
    st32((c.r[29].w[0] + 968u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 944u), c.r[8].w[0]);
    set32(c.r[10], c.r[29].w[0] + 4u);
    st32((c.r[29].w[0] + 952u), c.r[9].w[0]);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 8));
    set32(c.r[8], c.r[29].w[0] + 8u);
    c.r[9].d[0] = c.r[20].d[0] & 255ull;
    st32((c.r[29].w[0] + 948u), c.r[10].w[0]);
    set32(c.r[2], c.r[7].w[0] + 128u);
    st32((c.r[29].w[0] + 960u), c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 956u), c.r[8].w[0]);
    set32(c.r[4], c.r[29].w[0] + 656u);
    st32((c.r[29].w[0] + 964u), c.r[9].w[0]);
    set32(c.r[21], c.r[29].w[0] + 784u);
    set32(c.r[23], c.r[29].w[0] + 256u);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 16));
    set32(c.r[30], c.r[29].w[0] + 12u);
    c.budget -= 21;
L_002F355C:
    ldl(c.r[10], (c.r[7].w[0] + 7u));
    ldr(c.r[10], (c.r[7].w[0]));
    ldl(c.r[5], (c.r[7].w[0] + 15u));
    ldr(c.r[5], (c.r[7].w[0] + 8u));
    ldl(c.r[8], (c.r[7].w[0] + 23u));
    ldr(c.r[8], (c.r[7].w[0] + 16u));
    ldl(c.r[9], (c.r[7].w[0] + 31u));
    ldr(c.r[9], (c.r[7].w[0] + 24u));
    sdl(c.r[10], (c.r[6].w[0] + 7u));
    sdr(c.r[10], (c.r[6].w[0]));
    sdl(c.r[5], (c.r[6].w[0] + 15u));
    sdr(c.r[5], (c.r[6].w[0] + 8u));
    sdl(c.r[8], (c.r[6].w[0] + 23u));
    sdr(c.r[8], (c.r[6].w[0] + 16u));
    sdl(c.r[9], (c.r[6].w[0] + 31u));
    sdr(c.r[9], (c.r[6].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 20;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F355Cu | kUnwind; return; } goto L_002F355C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3638; } }
L_002F35B4:
    set32(c.r[10], c.r[29].w[0] + 260u);
    set32(c.r[5], c.r[29].w[0] + 264u);
    set32(c.r[8], c.r[29].w[0] + 268u);
    st32((c.r[29].w[0] + 968u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 944u), c.r[5].w[0]);
    set32(c.r[9], c.r[29].w[0] + 4u);
    st32((c.r[29].w[0] + 952u), c.r[8].w[0]);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 8));
    set32(c.r[5], c.r[29].w[0] + 8u);
    c.r[8].d[0] = c.r[20].d[0] & 255ull;
    st32((c.r[29].w[0] + 948u), c.r[9].w[0]);
    set32(c.r[2], c.r[7].w[0] + 128u);
    st32((c.r[29].w[0] + 960u), c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[29].w[0] + 956u), c.r[5].w[0]);
    set32(c.r[4], c.r[29].w[0] + 656u);
    st32((c.r[29].w[0] + 964u), c.r[8].w[0]);
    set32(c.r[21], c.r[29].w[0] + 784u);
    set32(c.r[23], c.r[29].w[0] + 256u);
    set32(c.r[22], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[20].w[0]) >> 16));
    set32(c.r[30], c.r[29].w[0] + 12u);
    c.budget -= 21;
L_002F3608:
    c.r[9].d[0] = ld64((c.r[7].w[0]));
    c.r[10].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[5].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 24u));
    st64((c.r[6].w[0]), c.r[9].d[0]);
    st64((c.r[6].w[0] + 8u), c.r[10].d[0]);
    st64((c.r[6].w[0] + 16u), c.r[5].d[0]);
    st64((c.r[6].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[6], c.r[6].w[0] + 32u);
    c.budget -= 12;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3608u | kUnwind; return; } goto L_002F3608; } }
L_002F3638:
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    ldl(c.r[10], (c.r[7].w[0] + 15u));
    ldr(c.r[10], (c.r[7].w[0] + 8u));
    sdl(c.r[9], (c.r[6].w[0] + 7u));
    sdr(c.r[9], (c.r[6].w[0]));
    sdl(c.r[10], (c.r[6].w[0] + 15u));
    set32(c.r[3], c.r[3].w[0] - 19840u);
    sdr(c.r[10], (c.r[6].w[0] + 8u));
    set32(c.r[5], c.r[3].w[0] + 128u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 11;
L_002F3664:
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[7]);
    st128((c.r[2].w[0]) & ~15u, c.r[6]);
    st128((c.r[2].w[0] + 16u) & ~15u, c.r[7]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3664u | kUnwind; return; } goto L_002F3664; } }
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[18], 0u + 7u);
    c.budget -= 3;
L_002F3690:
    c.f[12] = ld32((c.r[16].w[0]));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.f[14] = ld32((c.r[16].w[0] + 8u));
    c.f[12] = fp::mul(c.f[12], c.f[20]);
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[1] = ld32((c.r[19].w[0]));
    c.f[14] = fp::mul(c.f[14], c.f[20]);
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[2] = ld32((c.r[19].w[0] + 8u));
    c.f[12] = fp::add(c.f[12], c.f[1]);
    c.f[13] = fp::add(c.f[0], c.f[13]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[14] = fp::add(c.f[14], c.f[2]);
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F36E0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002F36E0u) [[unlikely]] return; }
L_002F36E0:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3690u | kUnwind; return; } goto L_002F3690; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 968u)));
    set32(c.r[10], c.r[29].w[0] + 512u);
    set32(c.r[5], ld32((c.r[29].w[0] + 944u)));
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 952u)));
    c.r[22].d[0] = c.r[22].d[0] & 255ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 948u)));
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[29].w[0] + 956u)));
    set32(c.r[8], ld32((c.r[29].w[0] + 960u)));
    st32((c.r[29].w[0] + 940u), c.r[30].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.r[21].d[0] = c.r[8].d[0] & 255ull;
    st32((c.r[29].w[0] + 916u), c.r[10].w[0]);
    set32(c.r[30], 0u + 8u);
    st32((c.r[29].w[0] + 920u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 924u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 928u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 932u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 936u), c.r[9].w[0]);
    set32(c.r[18], ld32((c.r[29].w[0] + 964u)));
    st32((c.r[29].w[0] + 912u), c.r[23].w[0]);
    c.budget -= 24;
L_002F3748:
    set32(c.r[2], ld32((c.r[29].w[0] + 916u)));
    set32(c.r[17], c.r[4].w[0] + 1u);
    set32(c.r[11], ld32((c.r[29].w[0] + 940u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    c.lo.d[0] = c.r[2].d[0];
    set32(c.r[10], ld32((c.r[29].w[0] + 936u)));
    set32(c.r[2], 0u + 24u);
    set32(c.r[9], ld32((c.r[29].w[0] + 932u)));
    mmi::madd(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], ld32((c.r[29].w[0] + 928u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 924u)));
    set32(c.r[12], 0u + 5u);
    set32(c.r[5], ld32((c.r[29].w[0] + 920u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 912u)));
    c.budget -= 14;
L_002F3780:
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[12], c.r[12].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[4].w[0]), c.f[0]);
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 4u));
    st32((c.r[5].w[0]), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    set32(c.r[2], ld32((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 8u));
    st32((c.r[6].w[0]), c.f[0]);
    st32((c.r[7].w[0]), c.f[21]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st32((c.r[8].w[0]), c.r[22].w[0]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    st32((c.r[9].w[0]), c.r[21].w[0]);
    set32(c.r[8], c.r[8].w[0] + 16u);
    st32((c.r[10].w[0]), c.r[18].w[0]);
    set32(c.r[9], c.r[9].w[0] + 16u);
    st32((c.r[11].w[0]), c.r[30].w[0]);
    set32(c.r[10], c.r[10].w[0] + 16u);
    set32(c.r[11], c.r[11].w[0] + 16u);
    c.budget -= 32;
    { const bool t = c.r[12].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3780u | kUnwind; return; } goto L_002F3780; } }
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3814u);  if (depth < kMaxDepth) unit_004B(c, 52u, depth + 1u); else { c.pc = 0x0022D6F8u; return; } if (c.pc != 0x002F3814u) [[unlikely]] return; }
L_002F3814:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3748u | kUnwind; return; } goto L_002F3748; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3838u);  if (depth < kMaxDepth) unit_007C(c, 182u, depth + 1u); else { c.pc = 0x002F32A8u; return; } if (c.pc != 0x002F3838u) [[unlikely]] return; }
L_002F3838:
    ld128((c.r[29].w[0] + 1120u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 1104u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 1088u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 1072u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 1056u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 1040u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 1024u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 1008u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 992u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 976u));
    c.f[21] = ld32((c.r[29].w[0] + 1144u));
    c.f[20] = ld32((c.r[29].w[0] + 1136u));
    set32(c.r[29], c.r[29].w[0] + 1152u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3878:
    set32(c.r[29], c.r[29].w[0] - 672u);
    st128((c.r[29].w[0] + 640u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 512u) & ~15u, c.r[30]);
    st32((c.r[29].w[0] + 656u), c.f[20]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 608u) & ~15u, c.r[18]);
    c.f[20] = c.f[12];
    st128((c.r[29].w[0] + 592u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 560u) & ~15u, c.r[21]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 544u) & ~15u, c.r[22]);
    set32(c.r[19], 0u - 2u);
    st128((c.r[29].w[0] + 528u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 624u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 576u) & ~15u, c.r[20]);
    st64((c.r[29].w[0] + 496u), c.r[31].d[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F38C8u);  if (depth < kMaxDepth) unit_007D(c, 9u, depth + 1u); else { c.pc = 0x002F4090u; return; } if (c.pc != 0x002F38C8u) [[unlikely]] return; }
L_002F38C8:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[4] = c.r[1].w[0];
    st32((c.r[29].w[0] + 480u), c.r[2].w[0]);
    set32(c.r[21], c.r[29].w[0] + 448u);
    set32(c.r[22], c.r[29].w[0] + 32u);
    c.r[23].d[0] = c.r[21].d[0] + 0ull;
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    set32(c.r[18], c.r[29].w[0] + 464u);
    c.f[3] = ld32((c.r[16].w[0] + 8u));
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[3] = fp::mul(c.f[3], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 44u), c.f[4]);
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 40u), c.f[3]);
    st32((c.r[29].w[0] + 32u), c.f[1]);
    st32((c.r[29].w[0] + 36u), c.f[2]);
    c.budget -= 20;
L_002F3918:
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3928u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002F3928u) [[unlikely]] return; }
L_002F3928:
    set32(c.r[17], 0u - 2u);
    c.f[12] = c.r[19].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    set32(c.r[20], c.r[19].w[0] + 1u);
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F394Cu);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x002F394Cu) [[unlikely]] return; }
L_002F394C:
    set32(c.r[3], ld32((c.r[29].w[0] + 480u)));
    c.lo.d[0] = c.r[3].d[0];
    set32(c.r[3], 0u + 80u);
    mmi::madd(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + 160u);
    c.budget -= 5;
L_002F3960:
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3970u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002F3970u) [[unlikely]] return; }
L_002F3970:
    c.f[12] = c.r[17].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.f[12] = fp::mul(c.f[20], c.f[12]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3990u);  if (depth < kMaxDepth) unit_0045(c, 11u, depth + 1u); else { c.pc = 0x00214170u; return; } if (c.pc != 0x002F3990u) [[unlikely]] return; }
L_002F3990:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39A0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002F39A0u) [[unlikely]] return; }
L_002F39A0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39B0u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002F39B0u) [[unlikely]] return; }
L_002F39B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F39C0u);  if (depth < kMaxDepth) unit_0045(c, 17u, depth + 1u); else { c.pc = 0x00214220u; return; } if (c.pc != 0x002F39C0u) [[unlikely]] return; }
L_002F39C0:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3960u | kUnwind; return; } goto L_002F3960; } }
    c.r[19].d[0] = c.r[20].d[0] + 0ull;
    c.r[2].d[0] = c.r[19].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3918u | kUnwind; return; } goto L_002F3918; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_002F39E8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F39E8u | kUnwind; return; } goto L_002F39E8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_002F3A08:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002F3A08u | kUnwind; return; } goto L_002F3A08; } }
    ld128((c.r[29].w[0] + 640u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 624u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 608u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 592u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 576u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 560u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 544u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 528u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 512u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 496u));
    c.f[20] = ld32((c.r[29].w[0] + 656u));
    set32(c.r[29], c.r[29].w[0] + 672u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3A58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002F3AB0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F3AB0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] - 16480u);
    set32(c.r[2], c.r[2].w[0] - 19520u);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3A98u);  if (depth < kMaxDepth) unit_0098(c, 215u, depth + 1u); else { c.pc = 0x003628E0u; return; } if (c.pc != 0x002F3A98u) [[unlikely]] return; }
L_002F3A98:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 19536u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3AB0u);  if (depth < kMaxDepth) unit_0098(c, 239u, depth + 1u); else { c.pc = 0x00362CE0u; return; } if (c.pc != 0x002F3AB0u) [[unlikely]] return; }
L_002F3AB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3AC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[5].w[0] + 7686u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], 0u - 1u);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7712u)));
    st16((c.r[5].w[0] + 7672u), static_cast<std::uint16_t>(0u));
    st16((c.r[5].w[0] + 7674u), static_cast<std::uint16_t>(0u));
    st8((c.r[5].w[0] + 10076u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 10092u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const bool t = c.r[7].d[0] == c.r[6].d[0];  if (t) { goto L_002F3B20; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[7].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 7710u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[5].w[0] + 7712u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 7;
L_002F3B20:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7710u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_002F3B48; } }
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st16((c.r[3].w[0] + 7712u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[5].w[0] + 7710u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 7;
L_002F3B48:
    set32(c.r[2], ld32((c.r[5].w[0] + 584u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[5].w[0] + 664u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], c.r[4].w[0] << (c.r[8].w[0] & 31u));
    st32((c.r[5].w[0] + 584u), c.r[2].w[0]);
    st16((c.r[5].w[0] + 668u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3B70u);  if (depth < kMaxDepth) unit_001B(c, 185u, depth + 1u); else { c.pc = 0x0016E868u; return; } if (c.pc != 0x002F3B70u) [[unlikely]] return; }
L_002F3B70:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3B80:
    c.f[0] = c.f[12];
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[12] = c.f[13] ^ fp::kSign;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 32u), c.f[20]);
    c.f[13] = c.f[0];
    c.f[20] = c.f[14];
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 1));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3BACu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002F3BACu) [[unlikely]] return; }
L_002F3BAC:
    c.f[1] = 0u;
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[1]));
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3BEC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[20] = fp::add(c.f[20], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3C0C; } }
L_002F3BEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3C0C; } }
    c.f[20] = fp::sub(c.f[20], c.f[0]);
    c.budget -= 1;
L_002F3C0C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3C3C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[2] = fp::add(c.f[2], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3C5C; } }
L_002F3C3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3C5C; } }
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_002F3C5C:
    c.f[14] = c.r[16].w[0];
    c.f[14] = fp::cvt_s_w(c.f[14]);
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[20], c.f[14]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3CB0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[0] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3CF4; } }
    c.f[0] = fp::add(c.f[20], c.f[14]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3CE8; } }
L_002F3CB0:
    c.f[0] = fp::add(c.f[20], c.f[14]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[14] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[14]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3D00; } }
    c.f[0] = fp::sub(c.f[0], c.f[14]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3CF4; } }
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 1;
L_002F3CE8:
    c.budget -= 3;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3D20; } }
L_002F3CF4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3D24; } }
L_002F3D00:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3D20; } }
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F3D24; } }
L_002F3D20:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F3D24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.f[20] = ld32((c.r[29].w[0] + 32u));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002F3D6C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3D7C; } }
L_002F3D6C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D7Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002F3D7Cu) [[unlikely]] return; }
L_002F3D7C:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] - 5024u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3D90u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F3D90u) [[unlikely]] return; }
L_002F3D90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[2] = c.r[1].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 132u));
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    c.f[3] = c.r[1].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[3]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F3DD4; } }
    set32(c.r[4], ld32((c.r[17].w[0] - 5024u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F3DD8; } }
L_002F3DD4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002F3DD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 48u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E14u);  if (depth < kMaxDepth) unit_006F(c, 80u, depth + 1u); else { c.pc = 0x002BD190u; return; } if (c.pc != 0x002F3E14u) [[unlikely]] return; }
L_002F3E14:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002F3E4C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 8u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F3E4C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.f[0] = c.r[1].w[0];
    set32(c.r[2], 0u + 16u);
    st64((c.r[17].w[0] + 560u), c.r[2].d[0]);
    st32((c.r[17].w[0] + 212u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3E50; } }
L_002F3E4C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002F3E50:
    st64((c.r[18].w[0] + 560u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E60u);  if (depth < kMaxDepth) unit_006E(c, 30u, depth + 1u); else { c.pc = 0x002B8570u; return; } if (c.pc != 0x002F3E60u) [[unlikely]] return; }
L_002F3E60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F3EE0; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[12] = ld32((c.r[17].w[0] + 10256u));
    set32(c.r[16], c.r[16].w[0] - 19312u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E84u);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002F3E84u) [[unlikely]] return; }
L_002F3E84:
    c.f[12] = ld32((c.r[17].w[0] + 10264u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3E98u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002F3E98u) [[unlikely]] return; }
L_002F3E98:
    c.f[12] = ld32((c.r[17].w[0] + 128u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3EACu);  if (depth < kMaxDepth) unit_0088(c, 321u, depth + 1u); else { c.pc = 0x00323B68u; return; } if (c.pc != 0x002F3EACu) [[unlikely]] return; }
L_002F3EAC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3EB8u);  if (depth < kMaxDepth) unit_0089(c, 194u, depth + 1u); else { c.pc = 0x00326140u; return; } if (c.pc != 0x002F3EB8u) [[unlikely]] return; }
L_002F3EB8:
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3ECCu);  if (depth < kMaxDepth) unit_0088(c, 322u, depth + 1u); else { c.pc = 0x00323BB0u; return; } if (c.pc != 0x002F3ECCu) [[unlikely]] return; }
L_002F3ECC:
    c.f[12] = ld32((c.r[17].w[0] + 136u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3EE0u);  if (depth < kMaxDepth) unit_0088(c, 323u, depth + 1u); else { c.pc = 0x00323BF8u; return; } if (c.pc != 0x002F3EE0u) [[unlikely]] return; }
L_002F3EE0:
    c.f[0] = ld32((c.r[17].w[0] + 148u));
    set32(c.r[4], 0u + 12u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 8940u));
    st16((c.r[18].w[0] + 8940u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 208u));
    st32((c.r[18].w[0] + 208u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 212u));
    st32((c.r[18].w[0] + 212u), c.f[1]);
    c.f[0] = ld32((c.r[17].w[0] + 216u));
    st32((c.r[18].w[0] + 216u), c.f[0]);
    c.r[2].d[0] = ld16((c.r[17].w[0] + 7676u));
    st16((c.r[18].w[0] + 7676u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 113u));
    st32((c.r[18].w[0] + 7700u), c.r[4].w[0]);
    st8((c.r[18].w[0] + 113u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 9020u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 9022u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002F3F48:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 9848u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F3FC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9872u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3F84u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002F3F84u) [[unlikely]] return; }
L_002F3F84:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002F3FC8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 230u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F3FC8; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 448u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002F3FC8; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 212u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002F3FC0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002F3FC0u) [[unlikely]] return; }
L_002F3FC0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 7696u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F3FC8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_002F3FDC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7696u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F3FE0; } }
L_002F3FDC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7712u)));
    c.budget -= 1;
L_002F3FE0:
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002F3FF4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 104u)));
    set32(c.r[4], c.r[2].w[0] - 1u);
    c.budget -= 2;
L_002F3FF4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 3;
    [[clang::musttail]] return unit_007D(c, 1u, depth);
}

}
