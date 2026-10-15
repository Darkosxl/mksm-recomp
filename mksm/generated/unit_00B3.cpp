#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_00B3[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_00B3(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_003CC000;
    case 2u: goto L_003CC010;
    case 3u: goto L_003CC074;
    case 4u: goto L_003CC0A0;
    case 5u: goto L_003CC0E4;
    case 6u: goto L_003CC100;
    case 7u: goto L_003CC114;
    case 8u: goto L_003CC12C;
    case 9u: goto L_003CC134;
    case 10u: goto L_003CC138;
    case 11u: goto L_003CC158;
    case 12u: goto L_003CC1CC;
    case 13u: goto L_003CC1D8;
    case 14u: goto L_003CC208;
    case 15u: goto L_003CC2C8;
    case 16u: goto L_003CC538;
    case 17u: goto L_003CC778;
    case 18u: goto L_003CC838;
    case 19u: goto L_003CC918;
    case 20u: goto L_003CCA20;
    case 21u: goto L_003CCB48;
    case 22u: goto L_003CCD28;
    case 23u: goto L_003CCDA0;
    case 24u: goto L_003CCDC0;
    case 25u: goto L_003CCE98;
    case 26u: goto L_003CCEA8;
    case 27u: goto L_003CCEF0;
    case 28u: goto L_003CCF30;
    case 29u: goto L_003CCF70;
    case 30u: goto L_003CCFB8;
    case 31u: goto L_003CCFC0;
    case 32u: goto L_003CCFC8;
    case 33u: goto L_003CCFD0;
    case 34u: goto L_003CCFEC;
    case 35u: goto L_003CD008;
    case 36u: goto L_003CD06C;
    case 37u: goto L_003CD084;
    case 38u: goto L_003CD090;
    case 39u: goto L_003CD0A0;
    case 40u: goto L_003CD0B4;
    case 41u: goto L_003CD0C0;
    case 42u: goto L_003CD0D4;
    case 43u: goto L_003CD0E0;
    case 44u: goto L_003CD178;
    case 45u: goto L_003CD198;
    case 46u: goto L_003CD1B0;
    case 47u: goto L_003CD1CC;
    case 48u: goto L_003CD1F4;
    case 49u: goto L_003CD21C;
    case 50u: goto L_003CD240;
    case 51u: goto L_003CD260;
    case 52u: goto L_003CD280;
    case 53u: goto L_003CD29C;
    case 54u: goto L_003CD2C4;
    case 55u: goto L_003CD340;
    case 56u: goto L_003CD348;
    case 57u: goto L_003CD3D4;
    case 58u: goto L_003CD3F8;
    case 59u: goto L_003CD410;
    case 60u: goto L_003CD428;
    case 61u: goto L_003CD454;
    case 62u: goto L_003CD4C8;
    case 63u: goto L_003CD560;
    case 64u: goto L_003CD580;
    case 65u: goto L_003CD598;
    case 66u: goto L_003CD5CC;
    case 67u: goto L_003CD5E4;
    case 68u: goto L_003CD608;
    case 69u: goto L_003CD628;
    case 70u: goto L_003CD648;
    case 71u: goto L_003CD668;
    case 72u: goto L_003CD69C;
    case 73u: goto L_003CD6B4;
    case 74u: goto L_003CD728;
    case 75u: goto L_003CD758;
    case 76u: goto L_003CD778;
    case 77u: goto L_003CD790;
    case 78u: goto L_003CD7B8;
    case 79u: goto L_003CD810;
    case 80u: goto L_003CD828;
    case 81u: goto L_003CD838;
    case 82u: goto L_003CD840;
    case 83u: goto L_003CD854;
    case 84u: goto L_003CD860;
    case 85u: goto L_003CD874;
    case 86u: goto L_003CD880;
    case 87u: goto L_003CD8C0;
    case 88u: goto L_003CD8D0;
    case 89u: goto L_003CD980;
    case 90u: goto L_003CDA1C;
    case 91u: goto L_003CDA28;
    case 92u: goto L_003CDAC0;
    case 93u: goto L_003CDAEC;
    case 94u: goto L_003CDB48;
    case 95u: goto L_003CDB9C;
    case 96u: goto L_003CDBAC;
    case 97u: goto L_003CDBC8;
    case 98u: goto L_003CDCF8;
    case 99u: goto L_003CDD10;
    case 100u: goto L_003CDD30;
    case 101u: goto L_003CDD40;
    case 102u: goto L_003CDD58;
    case 103u: goto L_003CDD98;
    case 104u: goto L_003CDE04;
    case 105u: goto L_003CDE48;
    case 106u: goto L_003CDE84;
    case 107u: goto L_003CDEB0;
    case 108u: goto L_003CDEBC;
    case 109u: goto L_003CDEC8;
    case 110u: goto L_003CDF2C;
    case 111u: goto L_003CDFA0;
    case 112u: goto L_003CE17C;
    case 113u: goto L_003CE1AC;
    case 114u: goto L_003CE20C;
    case 115u: goto L_003CE278;
    case 116u: goto L_003CE3C4;
    case 117u: goto L_003CE488;
    case 118u: goto L_003CE4A8;
    case 119u: goto L_003CE4DC;
    case 120u: goto L_003CE52C;
    case 121u: goto L_003CE580;
    case 122u: goto L_003CE5DC;
    case 123u: goto L_003CE690;
    case 124u: goto L_003CE6D4;
    case 125u: goto L_003CE70C;
    case 126u: goto L_003CE744;
    case 127u: goto L_003CE790;
    case 128u: goto L_003CE7C8;
    case 129u: goto L_003CE7E0;
    case 130u: goto L_003CE824;
    case 131u: goto L_003CE864;
    case 132u: goto L_003CE9E0;
    case 133u: goto L_003CEA18;
    case 134u: goto L_003CEA50;
    case 135u: goto L_003CEA9C;
    case 136u: goto L_003CEAD4;
    case 137u: goto L_003CEB10;
    case 138u: goto L_003CEBB4;
    case 139u: goto L_003CEC10;
    case 140u: goto L_003CEC40;
    case 141u: goto L_003CEC58;
    case 142u: goto L_003CECC0;
    case 143u: goto L_003CED58;
    case 144u: goto L_003CED6C;
    case 145u: goto L_003CED78;
    case 146u: goto L_003CEDD8;
    case 147u: goto L_003CEEC0;
    case 148u: goto L_003CEF60;
    case 149u: goto L_003CEFD0;
    case 150u: goto L_003CEFE8;
    case 151u: goto L_003CF01C;
    case 152u: goto L_003CF038;
    case 153u: goto L_003CF088;
    case 154u: goto L_003CF118;
    case 155u: goto L_003CF160;
    case 156u: goto L_003CF198;
    case 157u: goto L_003CF1E8;
    case 158u: goto L_003CF228;
    case 159u: goto L_003CF258;
    case 160u: goto L_003CF2C0;
    case 161u: goto L_003CF338;
    case 162u: goto L_003CF344;
    case 163u: goto L_003CF368;
    case 164u: goto L_003CF388;
    case 165u: goto L_003CF3C0;
    case 166u: goto L_003CF410;
    case 167u: goto L_003CF418;
    case 168u: goto L_003CF500;
    case 169u: goto L_003CF530;
    case 170u: goto L_003CF548;
    case 171u: goto L_003CF618;
    case 172u: goto L_003CF630;
    case 173u: goto L_003CF660;
    case 174u: goto L_003CF6B8;
    case 175u: goto L_003CF700;
    case 176u: goto L_003CF790;
    case 177u: goto L_003CF7A4;
    case 178u: goto L_003CF7B0;
    case 179u: goto L_003CF808;
    case 180u: goto L_003CF844;
    case 181u: goto L_003CF880;
    case 182u: goto L_003CF8BC;
    case 183u: goto L_003CF8F4;
    case 184u: goto L_003CF910;
    case 185u: goto L_003CF954;
    case 186u: goto L_003CF978;
    case 187u: goto L_003CF9BC;
    case 188u: goto L_003CF9C8;
    case 189u: goto L_003CF9D0;
    case 190u: goto L_003CFA18;
    case 191u: goto L_003CFA28;
    case 192u: goto L_003CFA78;
    case 193u: goto L_003CFAB0;
    case 194u: goto L_003CFAC8;
    case 195u: goto L_003CFB20;
    case 196u: goto L_003CFB5C;
    case 197u: goto L_003CFB94;
    case 198u: goto L_003CFBB0;
    case 199u: goto L_003CFC08;
    case 200u: goto L_003CFC44;
    case 201u: goto L_003CFC80;
    case 202u: goto L_003CFCB8;
    case 203u: goto L_003CFCD0;
    case 204u: goto L_003CFD20;
    case 205u: goto L_003CFD5C;
    case 206u: goto L_003CFD98;
    case 207u: goto L_003CFDB0;
    case 208u: goto L_003CFDF0;
    case 209u: goto L_003CFE08;
    case 210u: goto L_003CFE30;
    case 211u: goto L_003CFE50;
    case 212u: goto L_003CFE94;
    case 213u: goto L_003CFEB8;
    case 214u: goto L_003CFED4;
    case 215u: goto L_003CFF00;
    default: bad_entry(c, 0x003CC000u); return;
    }
L_003CC000:
    set32(c.r[16], c.r[16].w[0] + 2u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 4;
L_003CC010:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[29].d[0]; set32(c.r[2], ld32((c.r[29].w[0] + 36u)));  if (t) { goto L_003CC06C; } }
    ldl(c.r[3], (c.r[17].w[0] + 7u));
    ldr(c.r[3], (c.r[17].w[0]));
    ldl(c.r[4], (c.r[17].w[0] + 15u));
    ldr(c.r[4], (c.r[17].w[0] + 8u));
    ldl(c.r[5], (c.r[17].w[0] + 23u));
    ldr(c.r[5], (c.r[17].w[0] + 16u));
    ldl(c.r[6], (c.r[17].w[0] + 31u));
    ldr(c.r[6], (c.r[17].w[0] + 24u));
    sdl(c.r[3], (c.r[29].w[0] + 7u));
    sdr(c.r[3], (c.r[29].w[0]));
    sdl(c.r[4], (c.r[29].w[0] + 15u));
    sdr(c.r[4], (c.r[29].w[0] + 8u));
    sdl(c.r[5], (c.r[29].w[0] + 23u));
    sdr(c.r[5], (c.r[29].w[0] + 16u));
    sdl(c.r[6], (c.r[29].w[0] + 31u));
    sdr(c.r[6], (c.r[29].w[0] + 24u));
    ldl(c.r[3], (c.r[17].w[0] + 39u));
    ldr(c.r[3], (c.r[17].w[0] + 32u));
    sdl(c.r[3], (c.r[29].w[0] + 39u));
    sdr(c.r[3], (c.r[29].w[0] + 32u));
    c.r[17].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 21;
L_003CC06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CB910u | kUnwind; return; } [[clang::musttail]] return unit_00B2(c, 213u, depth); } }
L_003CC074:
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] - 100u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[4].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC010u | kUnwind; return; } goto L_003CC010; } }
L_003CC0A0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] << 16);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 104u);
    set32(c.r[4], c.r[4].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[29].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 5u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC010u | kUnwind; return; } goto L_003CC010; } }
L_003CC0E4:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[16].w[0] + 8232u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC100u); set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CC100u) [[unlikely]] return; }
L_003CC100:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 23600u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC114u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 174u, depth + 1u); else { c.pc = 0x0040E300u; return; } if (c.pc != 0x003CC114u) [[unlikely]] return; }
L_003CC114:
    set32(c.r[5], ld32((c.r[16].w[0] + 8232u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC12Cu); set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CC12Cu) [[unlikely]] return; }
L_003CC12C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC134u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_00C3(c, 225u, depth + 1u); else { c.pc = 0x0040E940u; return; } if (c.pc != 0x003CC134u) [[unlikely]] return; }
L_003CC134:
    st32((0u), 0u);
    c.budget -= 1;
L_003CC138:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_003CC158:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st32((c.r[4].w[0]), c.r[7].w[0]);
    set32(c.r[7], c.r[5].w[0] + 48u);
    set32(c.r[3], c.r[4].w[0] + 16u);
    set32(c.r[2], c.r[29].w[0] + 16u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[10], 0u + 1u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[6]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[7]);
    vu::add(c.vu0, 15u, 8u, 0u, 0u);
    vu::sub(c.vu0, 14u, 6u, 6u, 7u);
    mmi::pextlw(c.r[10], c.r[10], c.r[0]);
    vu::mulbc(c.vu0, 15u, 6u, 6u, c.vu0.vf[7].w[3]);
    st128((c.r[2].w[0]) & ~15u, c.r[0]);
    vu::add(c.vu0, 15u, 6u, 6u, 8u);
    vu::ftoi(c.vu0, 15u, 7u, 6u, 0);
    mmi::pextlw(c.r[10], c.r[10], c.r[0]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[7]);
    c.r[8] = c.vu0.vf[7];
    mmi::psraw(c.r[8], c.r[8], 16u);
    mmi::paddw(c.r[8], c.r[8], c.r[10]);
    st128((c.r[29].w[0]) & ~15u, c.r[8]);
    set32(c.r[5], 0u + 16u);
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CC1CCu); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_00B2(c, 212u, depth + 1u); else { c.pc = 0x003CB8E8u; return; } if (c.pc != 0x003CC1CCu) [[unlikely]] return; }
L_003CC1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CC1D8:
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[7].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8u));
    st32((c.r[7].w[0] + 12u), 0u);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    ld128((c.r[7].w[0]) & ~15u, c.r[2]);
    c.budget -= 11;
    { const bool t = c.r[5].sd[0] <= 0; st128((c.r[7].w[0] + 16u) & ~15u, c.r[2]);  if (t) { goto L_003CC2C0; } }
    c.budget -= 1;
L_003CC208:
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[7].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[2] = c.f[0];  if (t) { goto L_003CC224; } }
    c.f[2] = c.f[1];
    c.budget -= 1;
L_003CC224:
    st32((c.r[7].w[0] + 16u), c.f[2]);
    c.f[1] = ld32((c.r[7].w[0] + 20u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003CC240; }
L_003CC240:
    st32((c.r[7].w[0] + 20u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 24u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003CC25C; }
L_003CC25C:
    st32((c.r[7].w[0] + 24u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003CC278; }
L_003CC278:
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003CC294; }
L_003CC294:
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[1];  goto L_003CC2B0; }
L_003CC2B0:
    st32((c.r[7].w[0] + 8u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CC208u | kUnwind; return; } goto L_003CC208; } }
L_003CC2C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CC2C8:
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[29], c.r[29].w[0] - 64u);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[7]);
    vu::sub(c.vu0, 15u, 4u, 7u, 6u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[8]);
    vu::mul(c.vu0, 14u, 1u, 4u, 4u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    vu::sub(c.vu0, 15u, 5u, 8u, 6u);
    c.r[2] = c.vu0.vf[1];
    vu::mul(c.vu0, 14u, 2u, 5u, 5u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.f[4] = c.r[2].w[0];
    vu::mul(c.vu0, 14u, 1u, 4u, 5u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.f[3] = 0u;
    c.f[7] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[1];
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    c.f[5] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[7], c.f[4]);
    c.f[0] = fp::mul(c.f[5], c.f[5]);
    c.f[6] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[6]));
    c.budget -= 33;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0]) & ~15u, c.vu0.vf[4]);  if (t) { goto L_003CC3D0; } }
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 6u, 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 3u, 1u, 4u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 5u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    fpu_div(c, 3u, c.f[3], c.f[6]);
    c.r[2] = c.vu0.vf[2];
    c.f[0] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[3];
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[4], c.f[0]);
    c.f[4] = fp::mul(c.f[2], c.f[5]);
    c.f[0] = fp::mul(c.f[0], c.f[5]);
    c.f[2] = fp::mul(c.f[7], c.f[2]);
    c.f[4] = fp::sub(c.f[4], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[6], c.f[4]);
    c.f[4] = fp::mul(c.f[3], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = fp::mul(c.f[3], c.f[0]);
    st32((c.r[8].w[0]), c.f[4]);
    c.f[3] = fp::mul(c.f[3], c.f[1]);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.budget -= 33;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 4u), c.f[3]);  if (t) { goto L_003CC530; } }
L_003CC3D0:
    vu::sub(c.vu0, 15u, 3u, 8u, 7u);
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[7]));
    vu::mul(c.vu0, 14u, 1u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    c.r[2] = c.vu0.vf[1];
    c.f[2] = c.r[2].w[0];
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CC49C; } }
    fpu_compare(c, fp::key(c.f[7]) <= fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);  goto L_003CC45C; }
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[8].w[0] + 4u), c.f[3]);  if (t) { goto L_003CC450; } }
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 2u, 1u, 3u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.r[2] = c.vu0.vf[2];
    c.budget -= 13;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CC4D4; } }
L_003CC450:
    st32((c.r[8].w[0] + 8u), c.f[3]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.f[3]);  if (t) { goto L_003CC530; } }
L_003CC45C:
    vu::sub(c.vu0, 15u, 1u, 1u, 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 2u, 1u, 5u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    st32((c.r[8].w[0] + 8u), c.f[3]);
    c.r[2] = c.vu0.vf[2];
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[7]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0]), c.f[0]);  if (t) { goto L_003CC52C; } }
L_003CC49C:
    fpu_compare(c, fp::key(c.f[4]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003CC4F0; } }
    vu::sub(c.vu0, 15u, 1u, 1u, 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 2u, 1u, 3u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    st32((c.r[8].w[0] + 4u), c.f[3]);
    c.r[2] = c.vu0.vf[2];
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.budget -= 10;
L_003CC4D4:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[8].w[0]), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[8].w[0] + 8u), c.f[1]);  if (t) { goto L_003CC530; } }
L_003CC4F0:
    vu::sub(c.vu0, 15u, 1u, 1u, 6u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[1].w[0];
    vu::mul(c.vu0, 14u, 2u, 1u, 4u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.r[2] = c.vu0.vf[2];
    st32((c.r[8].w[0]), c.f[3]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[4]);
    c.f[1] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.budget -= 15;
L_003CC52C:
    st32((c.r[8].w[0] + 4u), c.f[1]);
    c.budget -= 1;
L_003CC530:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CC538:
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 15u, 5u, 5u, 1u);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 2u, 5u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    c.r[2] = c.vu0.vf[3];
    vu::mul(c.vu0, 14u, 4u, 1u, 5u);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 6u, c.vu0.vf[4].w[2]);
    c.r[3] = c.vu0.vf[4];
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 6u, c.vu0.vf[3].w[2]);
    c.f[11] = c.r[2].w[0];
    vu::mul(c.vu0, 14u, 4u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 6u, c.vu0.vf[4].w[2]);
    c.r[2] = c.vu0.vf[3];
    c.f[10] = c.r[3].w[0];
    c.f[6] = c.r[2].w[0];
    c.r[3] = c.vu0.vf[4];
    vu::mul(c.vu0, 14u, 1u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    c.f[5] = c.r[3].w[0];
    c.r[2] = c.vu0.vf[1];
    c.f[3] = fp::mul(c.f[11], c.f[6]);
    c.f[9] = c.r[2].w[0];
    c.f[2] = fp::mul(c.f[10], c.f[5]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[5]);
    c.f[8] = fp::mul(c.f[5], c.f[5]);
    c.f[7] = fp::mul(c.f[9], c.f[6]);
    c.f[3] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = fp::sub(c.f[7], c.f[8]);
    c.f[4] = c.f[0] & fp::kAbs;
    c.f[1] = fp::mul(c.f[4], c.f[4]);
    c.f[0] = fp::mul(c.f[3], c.f[4]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 50;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CC658; } }
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], 0u + 2u);  if (t) { goto L_003CC620; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = c.f[0];  if (t) { goto L_003CC664; } }
L_003CC620:
    c.f[0] = fp::add(c.f[7], c.f[8]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x35800000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CC658; } }
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.f[0] = fp::mul(c.f[3], c.f[5]);  if (t) { goto L_003CC668; } }
L_003CC658:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_003CC664:
    c.f[0] = fp::mul(c.f[3], c.f[5]);
    c.budget -= 1;
L_003CC668:
    c.f[2] = fp::sub(c.f[0], c.f[10]);
    fpu_compare(c, fp::key(c.f[6]) <= fp::key(c.f[2]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CC68C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003CC6BC; } }
L_003CC68C:
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[2] = c.f[0];  goto L_003CC6B8; }
    fpu_div(c, 2u, c.f[2], c.f[6]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CC710; } }
L_003CC6B8:
    set32(c.r[2], 0u + 8u);
    c.budget -= 1;
L_003CC6BC:
    c.f[0] = fp::mul(c.f[2], c.f[5]);
    c.f[1] = 0u;
    c.f[3] = fp::add(c.f[0], c.f[11]);
    fpu_compare(c, fp::key(c.f[3]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CC6E4; } }
    c.f[3] = c.f[1];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 2ull;  if (t) { goto L_003CC710; } }
L_003CC6E4:
    fpu_compare(c, fp::key(c.f[9]) <= fp::key(c.f[3]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CC704; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 1ull;  if (t) { goto L_003CC710; } }
L_003CC704:
    fpu_div(c, 3u, c.f[3], c.f[9]);
    c.budget -= 3;
L_003CC710:
    set32(c.r[3], c.f[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[3] = c.r[3];
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[3].w[0]);
    set32(c.r[3], c.f[2]);
    st128((c.r[8].w[0]) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[4] = c.r[3];
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mulabc(c.vu0, 15u, 2u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 2u, 3u, c.vu0.vf[4].w[0]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[3] = c.vu0.vf[3];
    c.f[0] = c.r[3].w[0];
    st32((c.r[8].w[0] + 32u), c.f[0]);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC778:
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[7]);
    set32(c.r[29], c.r[29].w[0] - 32u);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 6u, 2u, 7u);
    vu::sub(c.vu0, 15u, 1u, 7u, 1u);
    c.f[1] = 0u;
    vu::mul(c.vu0, 14u, 2u, 6u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    vu::mul(c.vu0, 14u, 3u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 5u, c.vu0.vf[3].w[2]);
    c.r[2] = c.vu0.vf[2];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[0] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[3];
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[6]);  if (t) { goto L_003CC7E8; } }
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[7]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 8u);  if (t) { goto L_003CC830; } }
L_003CC7E8:
    fpu_compare(c, fp::key(c.f[2]) <= fp::key(c.f[0]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003CC824; } }
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[7]);
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::mulabc(c.vu0, 15u, 7u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 7u, 6u, c.vu0.vf[1].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[7].w[0]) & ~15u, c.vu0.vf[7]);  if (t) { goto L_003CC830; } }
L_003CC824:
    vu::add(c.vu0, 15u, 1u, 7u, 6u);
    set32(c.r[2], 0u + 4u);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 3;
L_003CC830:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CC838:
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    set32(c.r[29], c.r[29].w[0] - 48u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 3u, 3u, 2u);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    vu::mul(c.vu0, 14u, 5u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 5u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 8u, 5u, 4u, c.vu0.vf[5].w[2]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 7u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 7u, c.vu0.vf[2].w[2]);
    vu::mul(c.vu0, 14u, 4u, 3u, 1u);
    vu::addbc(c.vu0, 8u, 8u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 8u, c.vu0.vf[4].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[5] = c.r[1].w[0];
    c.f[3] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[5];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[4] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[4];
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    c.f[1] = c.r[2].w[0];
    vu::opmula(c.vu0, 1u, 3u);
    vu::opmsub(c.vu0, 4u, 3u, 1u);
    c.f[2] = fp::mul(c.f[3], c.f[4]);
    vu::mul(c.vu0, 14u, 2u, 4u, 4u);
    c.f[0] = fp::mul(c.f[1], c.f[1]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 6u, c.vu0.vf[2].w[2]);
    vu::sqrt(c.vu0, c.vu0.vf[2].w[0]);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.q);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    c.r[2] = c.vu0.vf[2];
    c.f[2] = fp::sub(c.f[2], c.f[0]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[5], c.f[0]);
    fpu_div(c, 5u, c.f[5], c.f[2]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[5]);
    c.f[3] = fp::mul(c.f[3], c.f[5]);
    c.f[4] = fp::mul(c.f[4], c.f[5]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[4]);
    c.budget -= 55;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CC918:
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    vu::addbc(c.vu0, 8u, 6u, 0u, c.vu0.vf[0].w[3]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[5]);
    set32(c.r[29], c.r[29].w[0] - 64u);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    vu::sub(c.vu0, 15u, 4u, 5u, 2u);
    vu::sub(c.vu0, 15u, 2u, 2u, 3u);
    vu::mul(c.vu0, 14u, 9u, 4u, 4u);
    vu::addbc(c.vu0, 8u, 13u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 9u, c.vu0.vf[9].w[1]);
    vu::maddbc(c.vu0, 8u, 9u, 13u, c.vu0.vf[9].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[9].w[0]);
    vu::addbc(c.vu0, 8u, 9u, 0u, c.vu0.q);
    vu::opmula(c.vu0, 2u, 4u);
    vu::opmsub(c.vu0, 7u, 4u, 2u);
    vu::mul(c.vu0, 14u, 8u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 12u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 8u, c.vu0.vf[8].w[1]);
    vu::maddbc(c.vu0, 8u, 8u, 12u, c.vu0.vf[8].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[8].w[0]);
    vu::addbc(c.vu0, 8u, 8u, 0u, c.vu0.q);
    vu::mul(c.vu0, 14u, 1u, 7u, 7u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[3] = c.r[1].w[0];
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 6u, c.vu0.vf[1].w[2]);
    vu::sub(c.vu0, 15u, 3u, 3u, 5u);
    vu::sqrt(c.vu0, c.vu0.vf[1].w[0]);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.q);
    vu::mul(c.vu0, 14u, 10u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 11u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 10u, c.vu0.vf[10].w[1]);
    vu::maddbc(c.vu0, 8u, 10u, 11u, c.vu0.vf[10].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[10].w[0]);
    vu::addbc(c.vu0, 8u, 10u, 0u, c.vu0.q);
    c.r[2] = c.vu0.vf[1];
    c.f[4] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[8];
    c.f[2] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[9];
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.f[0] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[10];
    st32((c.r[5].w[0]), c.f[2]);
    c.f[1] = c.r[2].w[0];
    st32((c.r[5].w[0] + 4u), c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[4]);
    st32((c.r[5].w[0] + 12u), c.f[3]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[7]);
    st32((c.r[5].w[0] + 16u), c.f[4]);
    c.budget -= 65;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CCA20:
    ld128((c.r[4].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    set32(c.r[29], c.r[29].w[0] - 64u);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 11u, 0u, 0u);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    vu::sub(c.vu0, 15u, 7u, 2u, 3u);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[6]);
    vu::sub(c.vu0, 15u, 3u, 3u, 6u);
    set32(c.r[2], c.f[0]);
    vu::opmula(c.vu0, 3u, 7u);
    vu::opmsub(c.vu0, 10u, 7u, 3u);
    c.vu0.vf[1] = c.r[2];
    vu::move(c.vu0, 15u, 5u, 10u);
    vu::sub(c.vu0, 15u, 6u, 6u, 2u);
    vu::mulbc(c.vu0, 15u, 5u, 5u, c.vu0.vf[1].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    st128((c.r[7].w[0]) & ~15u, c.vu0.vf[5]);
    vu::move(c.vu0, 15u, 8u, 7u);
    vu::move(c.vu0, 15u, 9u, 6u);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    set32(c.r[2], c.f[0]);
    c.vu0.vf[4] = c.r[2];
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    set32(c.r[2], c.f[2]);
    vu::mulbc(c.vu0, 15u, 3u, 3u, c.vu0.vf[4].w[0]);
    c.vu0.vf[1] = c.r[2];
    set32(c.r[2], c.f[1]);
    vu::mulbc(c.vu0, 15u, 8u, 8u, c.vu0.vf[1].w[0]);
    c.vu0.vf[2] = c.r[2];
    vu::opmula(c.vu0, 3u, 5u);
    vu::opmsub(c.vu0, 1u, 5u, 3u);
    vu::mulbc(c.vu0, 15u, 9u, 9u, c.vu0.vf[2].w[0]);
    st128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    vu::opmula(c.vu0, 9u, 5u);
    vu::opmsub(c.vu0, 4u, 5u, 9u);
    vu::opmula(c.vu0, 8u, 5u);
    vu::opmsub(c.vu0, 2u, 5u, 8u);
    st128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    st128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[4]);
    c.f[0] = ld32((c.r[6].w[0] + 4u));
    c.f[1] = ld32((c.r[6].w[0] + 8u));
    c.f[3] = ld32((c.r[6].w[0] + 16u));
    c.f[4] = ld32((c.r[6].w[0] + 32u));
    c.f[5] = ld32((c.r[6].w[0] + 36u));
    c.f[2] = ld32((c.r[6].w[0] + 24u));
    st32((c.r[6].w[0] + 32u), c.f[1]);
    st32((c.r[6].w[0] + 16u), c.f[0]);
    st32((c.r[6].w[0] + 4u), c.f[3]);
    st32((c.r[6].w[0] + 8u), c.f[4]);
    st32((c.r[6].w[0] + 36u), c.f[2]);
    st32((c.r[6].w[0] + 24u), c.f[5]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    c.f[0] = ld32((c.r[7].w[0]));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    st32((c.r[6].w[0] + 12u), c.f[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[10]);
    c.f[0] = ld32((c.r[7].w[0] + 4u));
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[8]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[9]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    st128((c.r[6].w[0] + 48u) & ~15u, c.vu0.vf[11]);
    st32((c.r[6].w[0] + 44u), c.f[1]);
    c.f[0] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[5].w[0] + 16u));
    c.f[0] = c.f[0] ^ fp::kSign;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    c.budget -= 73;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CCB48:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].d[0] = c.r[1].d[0] | 8389ull;
    c.f[5] = c.r[1].w[0];
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[2].w[0] - 17168u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[3] = c.r[1].w[0];
    ld128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 5u, 3u, 2u);
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[20].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 7u, 1u, 3u);
    vu::sub(c.vu0, 15u, 6u, 2u, 3u);
    c.f[7] = ld32((c.r[6].w[0] + 8u));
    vu::mul(c.vu0, 14u, 1u, 5u, 7u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 3u, c.vu0.vf[1].w[2]);
    vu::mul(c.vu0, 14u, 2u, 5u, 6u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.r[3] = c.vu0.vf[1];
    c.f[2] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.r[3] = c.vu0.vf[2];
    c.f[4] = ld32((c.r[6].w[0]));
    c.f[6] = c.r[3].w[0];
    c.f[2] = fp::mul(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 60u), c.f[3]);
    c.f[1] = fp::mul(c.f[6], c.f[7]);
    set32(c.r[3], 0u + 14u);
    c.f[0] = fp::mul(c.f[0], c.f[7]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    c.f[4] = fp::mul(c.f[4], c.f[6]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[5]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[7]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[6]);
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    c.f[5] = fp::sub(c.f[5], c.f[1]);
    c.f[1] = fp::add(c.f[1], c.f[3]);
    c.f[3] = fp::add(c.f[0], c.f[3]);
    c.f[5] = fp::sub(c.f[5], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[1]);
    st32((c.r[29].w[0] + 56u), c.f[3]);
    st32((c.r[29].w[0] + 52u), c.f[5]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 0u, 2u, 1u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[4].d[0] = c.r[2].d[0] & 14ull;
    c.budget -= 72;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003CCCDC; } }
    vu::opmula(c.vu0, 7u, 6u);
    vu::opmsub(c.vu0, 3u, 6u, 7u);
    c.f[1] = 0u;
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[0] = ld32((c.r[6].w[0] + 12u));
    set32(c.r[2], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::mulbc(c.vu0, 15u, 3u, 3u, c.vu0.vf[1].w[0]);
    vu::move(c.vu0, 15u, 1u, 3u);
    vu::mul(c.vu0, 14u, 2u, 1u, 5u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.r[3] = c.vu0.vf[2];
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 21;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[19].w[0] + 16u), c.f[0]);  if (t) { goto L_003CCCCC; } }
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003CCCD4; } }
L_003CCCCC:
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[19].w[0] + 16u), c.f[0]);
    c.budget -= 2;
L_003CCCD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CCE70; } }
L_003CCCDC:
    set32(c.r[2], c.r[2].w[0] + 24064u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[18].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[18].sd[0] >= 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003CCD74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + 24080u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[3], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[6], c.r[20].w[0] + c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCD28u); set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 17u, depth + 1u); else { c.pc = 0x003CC778u; return; } if (c.pc != 0x003CCD28u) [[unlikely]] return; }
L_003CCD28:
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    vu::move(c.vu0, 15u, 4u, 1u);
    vu::mul(c.vu0, 14u, 6u, 4u, 4u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 6u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[6].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[6].w[0]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.q);
    vu::mulbc(c.vu0, 8u, 3u, 6u, c.vu0.q);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[2] = c.vu0.vf[3];
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[4]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 16u), c.f[0]);  if (t) { goto L_003CCE6C; } }
L_003CCD74:
    set32(c.r[17], c.r[18].w[0] << 4);
    set32(c.r[16], c.r[16].w[0] + 24080u);
    set32(c.r[17], c.r[20].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] << 4);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCDA0u); set32(c.r[6], c.r[20].w[0] + c.r[6].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 17u, depth + 1u); else { c.pc = 0x003CC778u; return; } if (c.pc != 0x003CCDA0u) [[unlikely]] return; }
L_003CCDA0:
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[5].w[0] << 4);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCDC0u); set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 17u, depth + 1u); else { c.pc = 0x003CC778u; return; } if (c.pc != 0x003CCDC0u) [[unlikely]] return; }
L_003CCDC0:
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 6u, 3u, 1u);
    vu::sub(c.vu0, 15u, 5u, 3u, 2u);
    vu::mul(c.vu0, 14u, 1u, 6u, 6u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 4u, c.vu0.vf[1].w[2]);
    vu::mul(c.vu0, 14u, 2u, 5u, 5u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.r[3] = c.vu0.vf[1];
    c.r[2] = c.vu0.vf[2];
    c.f[2] = c.r[3].w[0];
    c.f[1] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[6]);
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 22;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[5]);  if (t) { goto L_003CCE44; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_rsqrt(c, 0u, c.f[0], c.f[2]);
    c.f[1] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[1] = c.r[3];
    vu::mulbc(c.vu0, 15u, 1u, 6u, c.vu0.vf[1].w[0]);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003CCE6C; } }
L_003CCE44:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    fpu_rsqrt(c, 0u, c.f[0], c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.vu0.vf[1] = c.r[2];
    vu::mulbc(c.vu0, 15u, 1u, 5u, c.vu0.vf[1].w[0]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[1]);
    st32((c.r[19].w[0] + 16u), c.f[1]);
    c.budget -= 10;
L_003CCE6C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003CCE70:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003CCE98:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_003CCEA8:
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { ld128((c.r[5].w[0]) & ~15u, c.r[2]);  goto L_003CCED0; }
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CCF64; } }
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    c.budget -= 1;
L_003CCED0:
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 48u), c.r[3].w[0]);  goto L_003CCF10; }
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_003CCEF0:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CCEF0u | kUnwind; return; } goto L_003CCEF0; }
    st32((c.r[4].w[0] + 48u), c.r[3].w[0]);
    c.budget -= 1;
L_003CCF10:
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { st32((c.r[4].w[0] + 56u), c.r[3].w[0]);  goto L_003CCF50; }
    set32(c.r[3], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 1;
L_003CCF30:
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[3].w[0] + 12u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CCF30u | kUnwind; return; } goto L_003CCF30; }
    st32((c.r[4].w[0] + 56u), c.r[3].w[0]);
    c.budget -= 1;
L_003CCF50:
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[4].w[0] + 60u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 5;
L_003CCF64:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CCF70:
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CCF94; } }
    c.f[1] = ld32((c.r[5].w[0] + 12u));
    c.f[0] = ld32((c.r[4].w[0] + 28u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CCFB0; } }
L_003CCF94:
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    ld128((c.r[5].w[0]) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[3]);
    c.f[0] = ld32((c.r[5].w[0] + 12u));
    st32((c.r[4].w[0]), c.f[0]);
    c.budget -= 7;
L_003CCFB0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CCFB8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CCFC0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CCFC8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 3u);  c.pc = t; return; }
L_003CCFD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CCFECu); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_00A9(c, 33u, depth + 1u); else { c.pc = 0x003A4430u; return; } if (c.pc != 0x003CCFECu) [[unlikely]] return; }
L_003CCFEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CD008:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003CD084; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003CD074; } }
    set32(c.r[6], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1048u)));
    set32(c.r[3], c.r[3].w[0] + 24136u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 12u);
    st32((c.r[29].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] - 23528u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] - 24312u);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD06Cu); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003CD06Cu) [[unlikely]] return; }
L_003CD06C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003CD088; } }
L_003CD074:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD084u); set32(c.r[4], c.r[4].w[0] - 23528u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003CD084u) [[unlikely]] return; }
L_003CD084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003CD088:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CD090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00760000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 23528u);  c.pc = t; return; }
L_003CD0A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0B4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B3(c, 35u, depth + 1u); else { c.pc = 0x003CD008u; return; } if (c.pc != 0x003CD0B4u) [[unlikely]] return; }
L_003CD0B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CD0C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD0D4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B3(c, 35u, depth + 1u); else { c.pc = 0x003CD008u; return; } if (c.pc != 0x003CD0D4u) [[unlikely]] return; }
L_003CD0D4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CD0E0:
    set32(c.r[29], c.r[29].w[0] - 400u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 1916u)));
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 1916u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003CD158; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 24152u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[22].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003CD158:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[21].d[0] = 0ull + 0ull;  if (t) { goto L_003CD208; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD178u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD178u) [[unlikely]] return; }
L_003CD178:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[22].w[0] + 1916u);  if (t) { goto L_003CD2D4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
L_003CD198:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD1B0u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD1B0u) [[unlikely]] return; }
L_003CD1B0:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD1CCu); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD1CCu) [[unlikely]] return; }
L_003CD1CC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_003CD1E0; }
    st32((c.r[20].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[21], 0u + 1u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
L_003CD1E0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD1F4u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD1F4u) [[unlikely]] return; }
L_003CD1F4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD198u | kUnwind; return; } goto L_003CD198; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[22].w[0] + 1916u);  if (t) { goto L_003CD2D4; } }
L_003CD208:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD21Cu); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD21Cu) [[unlikely]] return; }
L_003CD21C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[22].w[0] + 1916u);  if (t) { goto L_003CD2D4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    set32(c.r[8], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 4;
L_003CD240:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD260u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD260u) [[unlikely]] return; }
L_003CD260:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CD2AC; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD280u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD280u) [[unlikely]] return; }
L_003CD280:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 72u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 76u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[7].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD29Cu); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD29Cu) [[unlikely]] return; }
L_003CD29C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  goto L_003CD2B0; }
    st32((c.r[20].w[0] + 16u), c.r[16].w[0]);
    set32(c.r[21], 0u + 1u);
    c.budget -= 2;
L_003CD2AC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_003CD2B0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD2C4u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD2C4u) [[unlikely]] return; }
L_003CD2C4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[18].d[0]) { set32(c.r[8], ld32((c.r[19].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD240u | kUnwind; return; } goto L_003CD240; }
    set32(c.r[3], c.r[22].w[0] + 1916u);
    c.budget -= 1;
L_003CD2D4:
    set32(c.r[4], ld32((c.r[22].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003CD310; } }
    set32(c.r[2], c.r[2].w[0] + 24184u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[22].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003CD310:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_003CD340:
    set32(c.r[29], c.r[29].w[0] + 464u);
    c.budget -= 2;
L_003CD348:
    set32(c.r[29], c.r[29].w[0] - 384u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[3].w[0] + 1916u)));
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    set32(c.r[3], c.r[3].w[0] + 1916u);
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 272u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 368u), c.f[20]);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_003CD3B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 24224u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003CD3B8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.f[20] = ld32((c.r[2].w[0] + 24268u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD3D4u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD3D4u) [[unlikely]] return; }
L_003CD3D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[19].w[0] + 1916u);  if (t) { goto L_003CD464; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
L_003CD3F8:
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD410u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD410u) [[unlikely]] return; }
L_003CD410:
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 64u)));
    set32(c.r[6], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD428u); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD428u) [[unlikely]] return; }
L_003CD428:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { c.f[0] = c.f[20];  goto L_003CD438; }
L_003CD438:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.f[20] = c.f[0];
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD454u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD454u) [[unlikely]] return; }
L_003CD454:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD3F8u | kUnwind; return; } goto L_003CD3F8; }
    set32(c.r[3], c.r[19].w[0] + 1916u);
    c.budget -= 1;
L_003CD464:
    set32(c.r[4], ld32((c.r[19].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003CD4A0; } }
    set32(c.r[2], c.r[2].w[0] + 24184u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[19].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003CD4A0:
    c.f[0] = c.f[20];
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 272u));
    c.f[20] = ld32((c.r[29].w[0] + 368u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 384u);  c.pc = t; return; }
L_003CD4C8:
    set32(c.r[29], c.r[29].w[0] - 416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    st128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[2].w[0] + 1916u)));
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 1916u);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 288u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] == 0ull; c.r[21].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_003CD544; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 24152u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[22].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003CD544:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_003CD5F8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD560u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD560u) [[unlikely]] return; }
L_003CD560:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[22].w[0] + 1916u);  if (t) { goto L_003CD6C4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
L_003CD580:
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD598u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD598u) [[unlikely]] return; }
L_003CD598:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 276u), c.r[16].w[0]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 284u), c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5CCu); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD5CCu) [[unlikely]] return; }
L_003CD5CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD5E4u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD5E4u) [[unlikely]] return; }
L_003CD5E4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[18].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD580u | kUnwind; return; } goto L_003CD580; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[22].w[0] + 1916u);  if (t) { goto L_003CD6C4; } }
L_003CD5F8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD608u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD608u) [[unlikely]] return; }
L_003CD608:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[22].w[0] + 1916u);  if (t) { goto L_003CD6C4; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[18].d[0] = c.r[18].d[0] | 65535ull;
    set32(c.r[8], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
L_003CD628:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[8].w[0])));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD648u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD648u) [[unlikely]] return; }
L_003CD648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CD69C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 112u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD668u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD668u) [[unlikely]] return; }
L_003CD668:
    set32(c.r[3], ld32((c.r[20].w[0] + 8u)));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0] + 284u), c.r[20].w[0]);
    set32(c.r[6], c.r[29].w[0] + 272u);
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 276u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[8], ld32((c.r[3].w[0] + 84u)));
    c.budget -= 13;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD69Cu); set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD69Cu) [[unlikely]] return; }
L_003CD69C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD6B4u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD6B4u) [[unlikely]] return; }
L_003CD6B4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[18].d[0]) { set32(c.r[8], ld32((c.r[19].w[0] + 36u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD628u | kUnwind; return; } goto L_003CD628; }
    set32(c.r[3], c.r[22].w[0] + 1916u);
    c.budget -= 1;
L_003CD6C4:
    set32(c.r[4], ld32((c.r[22].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003CD700; } }
    set32(c.r[2], c.r[2].w[0] + 24184u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[22].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003CD700:
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 336u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 320u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 304u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 288u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 416u);  c.pc = t; return; }
L_003CD728:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 100u)));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD758u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD758u) [[unlikely]] return; }
L_003CD758:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = c.r[18].d[0] + 0ull;  goto L_003CD79C; }
    c.r[16].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[16].d[0] = c.r[16].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 4;
L_003CD778:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD790u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CD790u) [[unlikely]] return; }
L_003CD790:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[3], ld32((c.r[17].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CD778u | kUnwind; return; } goto L_003CD778; }
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_003CD79C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CD7B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_003CD828; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);  if (t) { goto L_003CD818; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], ld32((c.r[2].w[0] - 1044u)));
    c.r[11].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 23472u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[11], c.r[11].w[0] - 24312u);
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 16u), 0u);
    c.r[7].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD810u); c.r[10].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_00C4(c, 137u, depth + 1u); else { c.pc = 0x004114D0u; return; } if (c.pc != 0x003CD810u) [[unlikely]] return; }
L_003CD810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_003CD82C; } }
L_003CD818:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD828u); set32(c.r[4], c.r[4].w[0] - 23472u);  if (depth < kMaxDepth) unit_00E6(c, 266u, depth + 1u); else { c.pc = 0x0049A138u; return; } if (c.pc != 0x003CD828u) [[unlikely]] return; }
L_003CD828:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_003CD82C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CD838:
    set32(c.r[2], c.r[2].w[0]);
    c.budget -= 2;
L_003CD840:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD854u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B3(c, 78u, depth + 1u); else { c.pc = 0x003CD7B8u; return; } if (c.pc != 0x003CD854u) [[unlikely]] return; }
L_003CD854:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CD860:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD874u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B3(c, 78u, depth + 1u); else { c.pc = 0x003CD7B8u; return; } if (c.pc != 0x003CD874u) [[unlikely]] return; }
L_003CD874:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CD880:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 16u);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD8C0u); st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);  if (depth < kMaxDepth) unit_00B3(c, 102u, depth + 1u); else { c.pc = 0x003CDD58u; return; } if (c.pc != 0x003CD8C0u) [[unlikely]] return; }
L_003CD8C0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CD8D0u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 102u, depth + 1u); else { c.pc = 0x003CDD58u; return; } if (c.pc != 0x003CD8D0u) [[unlikely]] return; }
L_003CD8D0:
    ld128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[19].w[0]) & ~15u, c.vu0.vf[7]);
    ld128((c.r[18].w[0]) & ~15u, c.vu0.vf[3]);
    vu::sub(c.vu0, 15u, 7u, 7u, 1u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[11]);
    vu::sub(c.vu0, 15u, 6u, 7u, 3u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[12]);
    vu::sub(c.vu0, 15u, 8u, 11u, 12u);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 3u, 8u, 3u);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 4u, 3u, 1u);
    vu::addbc(c.vu0, 8u, 9u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 9u, c.vu0.vf[4].w[2]);
    vu::mul(c.vu0, 14u, 5u, 6u, 2u);
    vu::addbc(c.vu0, 8u, 10u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 5u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 8u, 5u, 10u, c.vu0.vf[5].w[2]);
    c.r[2] = c.vu0.vf[4];
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[8]);
    c.f[1] = c.r[2].w[0];
    c.r[2] = c.vu0.vf[5];
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[3]);
    c.f[0] = c.r[2].w[0];
    st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[7]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[6]);  if (t) { goto L_003CD960; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st32((c.r[19].w[0] + 48u), c.f[1]);
    st128((c.r[19].w[0]) & ~15u, c.vu0.vf[11]);
    st128((c.r[19].w[0] + 16u) & ~15u, c.r[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[19].w[0] + 32u) & ~15u, c.vu0.vf[12]);  if (t) { goto L_003CD964; } }
L_003CD960:
    st32((c.r[19].w[0] + 48u), c.f[0]);
    c.budget -= 1;
L_003CD964:
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003CD980:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 144u), c.f[20]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[1].d[0] = c.r[1].d[0] | 46871ull;
    c.f[20] = c.r[1].w[0];
    ld128((c.r[17].w[0] + 48u) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 3u, c.vu0.vf[0].w[3]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.r[2] = c.vu0.vf[2];
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 26;
    { const bool t = !(c.fcr31 & kFpuCondition); st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003CDA08; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), c.f[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 28u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[29].w[0]) & ~15u, c.r[2]);
    c.budget -= 8;
L_003CDA08:
    set32(c.r[16], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 102u, depth + 1u); else { c.pc = 0x003CDD58u; return; } if (c.pc != 0x003CDA1Cu) [[unlikely]] return; }
L_003CDA1C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDA28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 141u, depth + 1u); else { c.pc = 0x003CEC58u; return; } if (c.pc != 0x003CDA28u) [[unlikely]] return; }
L_003CDA28:
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    vu::mul(c.vu0, 14u, 1u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 1u, c.vu0.vf[1].w[1]);
    vu::maddbc(c.vu0, 8u, 1u, 2u, c.vu0.vf[1].w[2]);
    c.r[2] = c.vu0.vf[1];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 13;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CDAA4; } }
    vu::mul(c.vu0, 14u, 2u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 1u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 1u, c.vu0.vf[2].w[2]);
    ld128((c.r[29].w[0]) & ~15u, c.r[4]);
    vu::sqrt(c.vu0, c.vu0.vf[2].w[0]);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.q);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[3]);
    c.r[2] = c.vu0.vf[2];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = c.r[2].w[0];
    st32((c.r[18].w[0] + 36u), c.f[1]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    st128((c.r[18].w[0]) & ~15u, c.r[4]);
    st128((c.r[18].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 18;
L_003CDAA4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.f[20] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003CDAC0:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0] + 240u), c.f[20]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[17].w[0] + 80u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDAECu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 102u, depth + 1u); else { c.pc = 0x003CDD58u; return; } if (c.pc != 0x003CDAECu) [[unlikely]] return; }
L_003CDAEC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    set32(c.r[18], c.r[29].w[0] + 96u);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.f[20] = c.r[2].w[0];
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB48u); st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);  if (depth < kMaxDepth) unit_00B3(c, 102u, depth + 1u); else { c.pc = 0x003CDD58u; return; } if (c.pc != 0x003CDB48u) [[unlikely]] return; }
L_003CDB48:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], ld32((c.r[17].w[0] + 80u)));
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0] + 160u) & ~15u, c.vu0.vf[1]);
    c.r[2] = c.vu0.vf[3];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CDBA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDB9Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 141u, depth + 1u); else { c.pc = 0x003CEC58u; return; } if (c.pc != 0x003CDB9Cu) [[unlikely]] return; }
L_003CDB9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);  if (t) { goto L_003CDBB0; } }
L_003CDBA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDBACu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 141u, depth + 1u); else { c.pc = 0x003CEC58u; return; } if (c.pc != 0x003CDBACu) [[unlikely]] return; }
L_003CDBAC:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003CDBB0:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.f[20] = ld32((c.r[29].w[0] + 240u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_003CDBC8:
    set32(c.r[29], c.r[29].w[0] - 240u);
    c.r[2].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    st128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    set32(c.r[8], 0u + 2u);
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[1] = ld32((c.r[29].w[0] + 4u));
    c.f[2] = c.f[0] & fp::kAbs;
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CDC34; } }
    c.f[2] = c.f[1];
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
L_003CDC34:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[2], c.r[2].w[0] << 2);  goto L_003CDC50; }
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] << 2);
    c.budget -= 3;
L_003CDC50:
    set32(c.r[8], c.r[8].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[29].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[8], c.r[5].w[0] + c.r[8].w[0]);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[2].w[0]), c.f[0]);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.f[0] = ld32((c.r[9].w[0]));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[8].w[0]), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    vu::opmula(c.vu0, 1u, 2u);
    vu::opmsub(c.vu0, 1u, 2u, 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 4u, 2u, 2u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 3u, c.vu0.vf[4].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[4].w[0]);
    vu::mulbc(c.vu0, 14u, 2u, 2u, c.vu0.q);
    vu::mul(c.vu0, 14u, 6u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 6u, c.vu0.vf[6].w[1]);
    vu::maddbc(c.vu0, 8u, 6u, 5u, c.vu0.vf[6].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[6].w[0]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDCF8u); st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);  if (depth < kMaxDepth) unit_00B3(c, 86u, depth + 1u); else { c.pc = 0x003CD880u; return; } if (c.pc != 0x003CDCF8u) [[unlikely]] return; }
L_003CDCF8:
    set32(c.r[16], c.r[29].w[0] + 112u);
    set32(c.r[6], ld32((c.r[17].w[0] + 80u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD10u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 86u, depth + 1u); else { c.pc = 0x003CD880u; return; } if (c.pc != 0x003CDD10u) [[unlikely]] return; }
L_003CDD10:
    c.f[1] = ld32((c.r[29].w[0] + 96u));
    c.f[0] = ld32((c.r[29].w[0] + 160u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_003CDD38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD30u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 141u, depth + 1u); else { c.pc = 0x003CEC58u; return; } if (c.pc != 0x003CDD30u) [[unlikely]] return; }
L_003CDD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);  if (t) { goto L_003CDD44; } }
L_003CDD38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD40u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 141u, depth + 1u); else { c.pc = 0x003CEC58u; return; } if (c.pc != 0x003CDD40u) [[unlikely]] return; }
L_003CDD40:
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003CDD44:
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_003CDD58:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[16].w[0] + 64u)));
    st32((c.r[29].w[0] + 32u), 0u);
    set32(c.r[3], ld32((c.r[8].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 108u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDD98u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CDD98u) [[unlikely]] return; }
L_003CDD98:
    ld128((c.r[17].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[6], c.r[18].w[0] + 16u);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[3]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 4u, 4u, c.vu0.vf[0].w[3]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[5], c.r[29].w[0] + 16u);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    set32(c.r[7], c.r[29].w[0] + 36u);
    vu::mul(c.vu0, 14u, 5u, 3u, 4u);
    vu::mul(c.vu0, 14u, 7u, 2u, 4u);
    vu::mul(c.vu0, 14u, 6u, 1u, 4u);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[1]);
    vu::addbc(c.vu0, 4u, 7u, 7u, c.vu0.vf[7].w[0]);
    vu::addbc(c.vu0, 2u, 6u, 6u, c.vu0.vf[6].w[1]);
    vu::addbc(c.vu0, 8u, 5u, 5u, c.vu0.vf[5].w[2]);
    vu::addbc(c.vu0, 4u, 5u, 7u, c.vu0.vf[7].w[2]);
    vu::addbc(c.vu0, 2u, 5u, 6u, c.vu0.vf[6].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[4]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[5]);
    set32(c.r[8], ld32((c.r[16].w[0] + 68u)));
    st32((c.r[29].w[0] + 36u), 0u);
    set32(c.r[2], ld32((c.r[8].w[0] + 4u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 104u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 108u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDE04u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CDE04u) [[unlikely]] return; }
L_003CDE04:
    ld128((c.r[16].w[0] + 48u) & ~15u, c.vu0.vf[5]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[16].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[16].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[18].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 4u, c.vu0.vf[1].w[0]);
    vu::maddabc(c.vu0, 15u, 3u, c.vu0.vf[1].w[1]);
    vu::maddabc(c.vu0, 15u, 2u, c.vu0.vf[1].w[2]);
    vu::maddbc(c.vu0, 15u, 1u, 5u, c.vu0.vf[0].w[3]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[18].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_003CDE48:
    set32(c.r[29], c.r[29].w[0] - 12336u);
    st128((c.r[29].w[0] + 12272u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 12240u) & ~15u, c.r[20]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 12304u) & ~15u, c.r[16]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 12288u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 12256u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 12224u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 12208u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 12192u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 12176u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 12160u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 12320u), c.f[20]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    c.budget -= 15;
L_003CDE84:
    set32(c.r[3], ld32((c.r[3].w[0] + 128u)));
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], 0u - 1u);  if (t) { goto L_003CE310; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24304u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x003CC000u < 16384u) { entry = entries_00B3[(t - 0x003CC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003CDEB0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDEBCu); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 89u, depth + 1u); else { c.pc = 0x003CD980u; return; } if (c.pc != 0x003CDEBCu) [[unlikely]] return; }
L_003CDEBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_003CEAD8; } }
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CDEC8:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 3u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 3u, c.vu0.vf[2].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 16;
    if (!(c.fcr31 & kFpuCondition)) { set32(c.r[16], 0u + 1u);  goto L_003CDF24; }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_003CEAD8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 128u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDEB0u | kUnwind; return; } goto L_003CDEB0; } }
L_003CDF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDF2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 92u, depth + 1u); else { c.pc = 0x003CDAC0u; return; } if (c.pc != 0x003CDF2Cu) [[unlikely]] return; }
L_003CDF2C:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[3] = c.vu0.vf[3];
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003CDF94; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003CEAD8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 128u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDEC8u | kUnwind; return; } goto L_003CDEC8; } }
L_003CDF94:
    set32(c.r[16], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CDFA0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 97u, depth + 1u); else { c.pc = 0x003CDBC8u; return; } if (c.pc != 0x003CDFA0u) [[unlikely]] return; }
L_003CDFA0:
    set32(c.r[6], ld32((c.r[18].w[0] + 80u)));
    c.f[3] = 0u;
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 2u, 2u, 3u);
    vu::opmula(c.vu0, 1u, 2u);
    vu::opmsub(c.vu0, 1u, 2u, 1u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[4] = c.vu0.vf[3];
    c.f[0] = c.r[4].w[0];
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[3]));
    c.budget -= 24;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_003CE160; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { st32((c.r[20].w[0] + 32u), c.f[3]);  goto L_003CE01C; }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 128u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDF2Cu | kUnwind; return; } goto L_003CDF2C; } }
L_003CE01C:
    set32(c.r[7], c.r[29].w[0] + 16u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[6], 0u + 2u);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.f[1] = ld32((c.r[29].w[0] + 20u));
    c.f[2] = c.f[0] & fp::kAbs;
    c.f[1] = c.f[1] & fp::kAbs;
    c.f[0] = ld32((c.r[29].w[0] + 24u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[2]));
    c.f[0] = c.f[0] & fp::kAbs;
    c.budget -= 18;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003CE070; } }
    c.f[2] = c.f[1];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
L_003CE070:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[5].w[0] << 2);  if (t) { goto L_003CE088; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_003CE088:
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[7].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] << 2);
    c.f[1] = ld32((c.r[2].w[0]));
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[3].w[0]), c.f[3]);
    set32(c.r[5], c.r[20].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[20].w[0] + c.r[6].w[0]);
    st32((c.r[5].w[0]), c.f[1]);
    c.r[2].d[0] = 0ull + 0ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x34000000u);
    c.f[2] = c.r[1].w[0];
    ld128((c.r[20].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[3].w[0]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[3] = c.r[1].w[0];
    st128((c.r[20].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[4], ld32((c.r[18].w[0] + 72u)));
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[1]);
    vu::abs(c.vu0, 15u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 1u, c.vu0.vf[1].w[1]);
    vu::addbc(c.vu0, 8u, 2u, 2u, c.vu0.vf[1].w[2]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.r[5] = c.vu0.vf[2];
    c.f[0] = c.r[5].w[0];
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[1] = fp::add(c.f[0], c.f[0]);
    vu::abs(c.vu0, 15u, 1u, 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    ld128((c.r[4].w[0] + 16u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[4].w[0]) & ~15u, c.vu0.vf[2]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[20].w[0] + 36u), c.f[3]);
    set32(c.r[3], c.f[0]);
    c.vu0.vf[1] = c.r[3];
    vu::mulabc(c.vu0, 15u, 2u, c.vu0.vf[0].w[3]);
    vu::msubabc(c.vu0, 15u, 2u, c.vu0.vf[1].w[0]);
    vu::maddbc(c.vu0, 15u, 1u, 3u, c.vu0.vf[1].w[0]);
    c.budget -= 54;
    { const bool t = 0ull == 0ull; st128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003CEAD8; } }
L_003CE160:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE17Cu); set32(c.r[16], 0u + 3u);  if (depth < kMaxDepth) unit_00B3(c, 86u, depth + 1u); else { c.pc = 0x003CD880u; return; } if (c.pc != 0x003CE17Cu) [[unlikely]] return; }
L_003CE17C:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[1].d[0] = c.r[1].d[0] | 46871ull;
    c.f[0] = c.r[1].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CE1B0; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE1ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 141u, depth + 1u); else { c.pc = 0x003CEC58u; return; } if (c.pc != 0x003CE1ACu) [[unlikely]] return; }
L_003CE1AC:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_003CE1B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 80u)));  goto L_003CE27C; }
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00760000u);
    vu::mul(c.vu0, 14u, 3u, 1u, 1u);
    vu::addbc(c.vu0, 8u, 2u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 2u, c.vu0.vf[3].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[3].w[0]);
    vu::mulbc(c.vu0, 14u, 1u, 1u, c.vu0.q);
    st32((c.r[20].w[0] + 32u), 0u);
    st128((c.r[20].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[4], c.r[4].w[0] - 17168u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[6], c.r[5].w[0] + 16u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE20Cu); set32(c.r[7], c.r[5].w[0] + 32u);  if (depth < kMaxDepth) unit_00B3(c, 15u, depth + 1u); else { c.pc = 0x003CC2C8u; return; } if (c.pc != 0x003CE20Cu) [[unlikely]] return; }
L_003CE20C:
    c.f[0] = ld32((c.r[29].w[0] + 16u));
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], c.f[0]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[1] = c.r[4];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    c.f[0] = ld32((c.r[29].w[0] + 20u));
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    set32(c.r[5], c.f[0]);
    c.vu0.vf[3] = c.r[5];
    c.f[1] = ld32((c.r[29].w[0] + 24u));
    ld128((c.r[3].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[3].w[0]);
    set32(c.r[4], c.f[1]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.vu0.vf[4] = c.r[4];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[1].w[0];
    ld128((c.r[3].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[4].w[0]);
    st32((c.r[20].w[0] + 36u), c.f[0]);
    st128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003CEAD8; } }
L_003CE278:
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    c.budget -= 1;
L_003CE27C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3A830000u);
    c.r[1].d[0] = c.r[1].d[0] | 4719ull;
    c.f[1] = c.r[1].w[0];
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 3u);
    vu::opmula(c.vu0, 2u, 1u);
    vu::opmsub(c.vu0, 2u, 1u, 2u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 1u, 3u);
    vu::mul(c.vu0, 14u, 4u, 1u, 2u);
    vu::addbc(c.vu0, 8u, 5u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 4u, c.vu0.vf[4].w[1]);
    vu::maddbc(c.vu0, 8u, 4u, 5u, c.vu0.vf[4].w[2]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.r[5] = c.vu0.vf[4];
    c.f[0] = c.r[5].w[0];
    c.f[0] = c.f[0] & fp::kAbs;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 30;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;  if (t) { goto L_003CE310; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003CEAD8; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 128u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDFA0u | kUnwind; return; } goto L_003CDFA0; } }
L_003CE310:
    set32(c.r[2], c.r[29].w[0] + 148u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0] + 136u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 100ull;
    st32((c.r[29].w[0] + 140u), 0u);
    set32(c.r[4], c.r[29].w[0] + 136u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 576u);
    st32((c.r[29].w[0] + 560u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 560u);
    st32((c.r[29].w[0] + 564u), 0u);
    set32(c.r[4], c.r[29].w[0] + 8592u);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[29].w[0] + 8576u), c.r[4].w[0]);
    set32(c.r[2], c.r[29].w[0] + 8576u);
    st32((c.r[29].w[0] + 8580u), 0u);
    c.r[16].d[0] = c.r[16].d[0] | 55ull;
    set32(c.r[17], 0u + 4u);
    st32((c.r[2].w[0] + 8u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.r[22].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[5], ld32((c.r[29].w[0] + 8576u)));
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8576u)));
    st32((c.r[3].w[0] + 16u), 0u);
    ld128((c.r[6].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[29].w[0] + 8576u)));
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8576u)));
    st32((c.r[3].w[0] + 48u), 0u);
    ld128((c.r[6].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[29].w[0] + 8576u)));
    st128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8576u)));
    st32((c.r[3].w[0] + 80u), 0u);
    ld128((c.r[6].w[0] + 48u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 8576u)));
    st128((c.r[3].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[29].w[0] + 8576u)));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE3C4u); st32((c.r[5].w[0] + 112u), 0u);  if (depth < kMaxDepth) unit_00B3(c, 157u, depth + 1u); else { c.pc = 0x003CF1E8u; return; } if (c.pc != 0x003CE3C4u) [[unlikely]] return; }
L_003CE3C4:
    set32(c.r[2], c.r[29].w[0] + 10368u);
    st32((c.r[29].w[0] + 10356u), 0u);
    st32((c.r[29].w[0] + 10352u), c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 10352u);
    st32((c.r[3].w[0] + 4u), c.r[17].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st32((c.r[3].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[30], c.r[2].w[0] - 1040u);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[6], c.r[29].w[0] + 11264u);
    set32(c.r[4], ld32((c.r[29].w[0] + 10352u)));
    set32(c.r[5], c.r[29].w[0] + 11248u);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[23], c.r[29].w[0] + 112u);
    set32(c.r[21], c.r[29].w[0] + 64u);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 10352u)));
    ld128((c.r[3].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 10352u)));
    ld128((c.r[3].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 10352u)));
    ld128((c.r[3].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    st32((c.r[29].w[0] + 11248u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 11252u), 0u);
    st32((c.r[5].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[16].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 11248u)));
    ld128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    st128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 11248u)));
    ld128((c.r[3].w[0] + 80u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 11248u)));
    ld128((c.r[3].w[0] + 96u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 11248u)));
    ld128((c.r[3].w[0] + 112u) & ~15u, c.r[2]);
    st128((c.r[4].w[0] + 48u) & ~15u, c.r[2]);
    c.budget -= 49;
L_003CE488:
    set32(c.r[5], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 564u)));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] < 0; c.f[1] = ld32((c.r[5].w[0] + 16u));  if (t) { goto L_003CE4CC; } }
    set32(c.r[3], c.r[3].w[0] + 80u);
    c.budget -= 2;
L_003CE4A8:
    c.f[0] = ld32((c.r[3].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[2].w[0] - 1u);  if (t) { goto L_003CE4C4; } }
    c.f[1] = c.f[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 2;
L_003CE4C4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[3], c.r[3].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE4A8u | kUnwind; return; } goto L_003CE4A8; } }
L_003CE4CC:
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE4DCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 102u, depth + 1u); else { c.pc = 0x003CDD58u; return; } if (c.pc != 0x003CE4DCu) [[unlikely]] return; }
L_003CE4DC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 2u, 1u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 1u, 2u, 1u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.vu0.vf[1]);
    set32(c.r[2], ld32((c.r[16].w[0] + 52u)));
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE52Cu); st128((c.r[29].w[0] + 96u) & ~15u, c.vu0.vf[2]);  if (depth < kMaxDepth) unit_00C2(c, 198u, depth + 1u); else { c.pc = 0x0040A728u; return; } if (c.pc != 0x003CE52Cu) [[unlikely]] return; }
L_003CE52C:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[30].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 0u, 2u, 1u);
    set32(c.r[2], cfc2(c, 17u));
    c.r[2].d[0] = c.r[2].d[0] & 240ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[2].d[0] = c.r[2].d[0] & 14ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[29].w[0] + 128u);  if (t) { goto L_003CE624; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 12144u), 0u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 12144u);
    set32(c.r[6], c.r[29].w[0] + 12148u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE580u); c.r[8].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 170u, depth + 1u); else { c.pc = 0x003CF548u; return; } if (c.pc != 0x003CE580u) [[unlikely]] return; }
L_003CE580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[29].w[0] + 8584u)));  if (t) { goto L_003CE620; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[2], ld32((c.r[29].w[0] + 8580u)));
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 568u)));  if (t) { goto L_003CE5C8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 564u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    set32(c.r[5], ld32((c.r[29].w[0] + 12144u)));
    set32(c.r[4], ld32((c.r[29].w[0] + 140u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 12148u)));  if (t) { goto L_003CE5D0; } }
L_003CE5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[22], 0u + 1u);  if (t) { goto L_003CE624; } }
L_003CE5D0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE5DCu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 148u, depth + 1u); else { c.pc = 0x003CEF60u; return; } if (c.pc != 0x003CE5DCu) [[unlikely]] return; }
L_003CE5DC:
    set32(c.r[3], ld32((c.r[29].w[0] + 10356u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 10352u)));
    set32(c.r[4], c.r[3].w[0] << 4);
    ld128((c.r[29].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 10356u), c.r[3].w[0]);
    st128((c.r[4].w[0]) & ~15u, c.r[5]);
    set32(c.r[3], ld32((c.r[29].w[0] + 11252u)));
    set32(c.r[6], ld32((c.r[29].w[0] + 11248u)));
    set32(c.r[4], c.r[3].w[0] << 4);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st32((c.r[29].w[0] + 11252u), c.r[3].w[0]);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] == 0ull; st128((c.r[4].w[0]) & ~15u, c.r[5]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE488u | kUnwind; return; } goto L_003CE488; } }
L_003CE620:
    set32(c.r[22], 0u + 2u);
    c.budget -= 1;
L_003CE624:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[22].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003CE7D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    set32(c.r[4], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[18].w[0] + 76u), c.r[4].w[0]);  if (t) { goto L_003CE654; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[2].w[0] + 128u), c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[29].w[0] + 11256u)));  if (t) { goto L_003CE6A8; } }
L_003CE654:
    c.r[2].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_003CE7D0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB8D10000u);
    c.r[1].d[0] = c.r[1].d[0] | 46871ull;
    c.f[12] = c.r[1].w[0];
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[2].w[0] + 128u), 0u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x38D10000u);
    c.r[1].d[0] = c.r[1].d[0] | 46871ull;
    c.f[13] = c.r[1].w[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE690u); set32(c.r[5], ld32((c.r[18].w[0] + 76u)));  if (depth < kMaxDepth) unit_00B3(c, 142u, depth + 1u); else { c.pc = 0x003CECC0u; return; } if (c.pc != 0x003CE690u) [[unlikely]] return; }
L_003CE690:
    ld128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[2]);
    vu::add(c.vu0, 15u, 1u, 1u, 2u);
    set32(c.r[6], ld32((c.r[29].w[0] + 11256u)));
    st128((c.r[18].w[0] + 48u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    c.budget -= 6;
L_003CE6A8:
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);  if (t) { goto L_003CE6D4; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 11248u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE6D4u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE6D4u) [[unlikely]] return; }
L_003CE6D4:
    set32(c.r[6], ld32((c.r[29].w[0] + 10360u)));
    c.r[2].d[0] = c.r[6].d[0] & c.r[16].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 8584u)));  goto L_003CE710; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 10352u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE70Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE70Cu) [[unlikely]] return; }
L_003CE70C:
    set32(c.r[6], ld32((c.r[29].w[0] + 8584u)));
    c.budget -= 1;
L_003CE710:
    c.r[2].d[0] = c.r[6].d[0] & c.r[16].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 568u)));  if (t) { goto L_003CE748; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 8576u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE744u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE744u) [[unlikely]] return; }
L_003CE744:
    set32(c.r[5], ld32((c.r[29].w[0] + 568u)));
    c.budget -= 1;
L_003CE748:
    c.r[2].d[0] = c.r[5].d[0] & c.r[16].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  goto L_003CE794; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[5].d[0] & c.r[6].d[0];
    set32(c.r[2], 0u + 80u);
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[7], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE790u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE790u) [[unlikely]] return; }
L_003CE790:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_003CE794:
    c.r[2].d[0] = c.r[4].d[0] & c.r[16].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[18].w[0] + 72u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDE84u | kUnwind; return; } goto L_003CDE84; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE7C8u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE7C8u) [[unlikely]] return; }
L_003CE7C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[18].w[0] + 72u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CDE84u | kUnwind; return; } goto L_003CDE84; } }
L_003CE7D0:
    c.f[20] = 0u;
    c.r[17].d[0] = 0ull + 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00760000u);
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
L_003CE7E0:
    set32(c.r[4], c.r[19].w[0] - 17168u);
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    c.r[8].d[0] = c.r[29].d[0] + 0ull;
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[5], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[6], c.r[5].w[0] + 16u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE824u); set32(c.r[7], c.r[5].w[0] + 32u);  if (depth < kMaxDepth) unit_00B3(c, 15u, depth + 1u); else { c.pc = 0x003CC2C8u; return; } if (c.pc != 0x003CE824u) [[unlikely]] return; }
L_003CE824:
    c.f[0] = ld32((c.r[29].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_003CE85C; } }
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.f[0] = ld32((c.r[29].w[0] + 8u));  if (t) { goto L_003CE85C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], ld32((c.r[29].w[0] + 8576u)));  if (t) { goto L_003CE87C; } }
L_003CE85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE864u); set32(c.r[4], c.r[29].w[0] + 128u);  if (depth < kMaxDepth) unit_00B3(c, 163u, depth + 1u); else { c.pc = 0x003CF368u; return; } if (c.pc != 0x003CE864u) [[unlikely]] return; }
L_003CE864:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CE7E0u | kUnwind; return; } goto L_003CE7E0; }
    set32(c.r[2], ld32((c.r[29].w[0] + 8576u)));
    c.budget -= 1;
L_003CE87C:
    set32(c.r[6], 0u + 3u);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.r[17].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[3], ld32((c.r[29].w[0] + 10352u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 11248u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 64u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 8576u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 10352u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 16u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 11248u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 80u) & ~15u, c.r[2]);
    set32(c.r[2], ld32((c.r[29].w[0] + 8576u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 52u)));
    set32(c.r[3], ld32((c.r[29].w[0] + 10352u)));
    set32(c.r[4], c.r[4].w[0] - c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 5));
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 32u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[29].w[0] + 11248u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    ld128((c.r[3].w[0]) & ~15u, c.r[2]);
    st128((c.r[5].w[0] + 96u) & ~15u, c.r[2]);
    set32(c.r[3], ld32((c.r[18].w[0] + 72u)));
    st32((c.r[3].w[0] + 128u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[18].w[0] + 72u)));
    set32(c.r[3], c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    c.vu0.vf[1] = c.r[3];
    vu::mulbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[1].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[29].w[0] + 4u));
    ld128((c.r[2].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    set32(c.r[4], c.f[0]);
    c.vu0.vf[3] = c.r[4];
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[3].w[0]);
    set32(c.r[6], ld32((c.r[29].w[0] + 11256u)));
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    set32(c.r[5], c.f[0]);
    c.vu0.vf[3] = c.r[5];
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    vu::mulabc(c.vu0, 15u, 1u, c.vu0.vf[0].w[3]);
    vu::maddbc(c.vu0, 15u, 1u, 2u, c.vu0.vf[3].w[0]);
    st128((c.r[20].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[1]);
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[20].w[0] + 32u), c.f[0]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mulabc(c.vu0, 15u, 0u, c.vu0.vf[0].w[0]);
    vu::msubbc(c.vu0, 15u, 1u, 1u, c.vu0.vf[0].w[3]);
    c.budget -= 79;
    { const bool t = c.r[6].sd[0] < 0; st128((c.r[20].w[0]) & ~15u, c.vu0.vf[1]);  if (t) { goto L_003CE9E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 11248u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CE9E0u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CE9E0u) [[unlikely]] return; }
L_003CE9E0:
    set32(c.r[6], ld32((c.r[29].w[0] + 10360u)));
    c.r[2].d[0] = c.r[6].d[0] & c.r[17].d[0];
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[6], ld32((c.r[29].w[0] + 8584u)));  goto L_003CEA1C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 10352u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA18u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CEA18u) [[unlikely]] return; }
L_003CEA18:
    set32(c.r[6], ld32((c.r[29].w[0] + 8584u)));
    c.budget -= 1;
L_003CEA1C:
    c.r[2].d[0] = c.r[6].d[0] & c.r[17].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 568u)));  if (t) { goto L_003CEA54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0] + 8576u)));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA50u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CEA50u) [[unlikely]] return; }
L_003CEA50:
    set32(c.r[5], ld32((c.r[29].w[0] + 568u)));
    c.budget -= 1;
L_003CEA54:
    c.r[2].d[0] = c.r[5].d[0] & c.r[17].d[0];
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[29].w[0] + 144u)));  goto L_003CEAA0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.r[6].d[0] = c.r[5].d[0] & c.r[6].d[0];
    set32(c.r[2], 0u + 80u);
    set32(c.r[3], ld32((c.r[8].w[0] + 32u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 560u)));
    set32(c.r[7], 0u + 16u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 52u)));
    c.r[6].d[0] = c.lo.d[0];
    c.budget -= 15;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEA9Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CEA9Cu) [[unlikely]] return; }
L_003CEA9C:
    set32(c.r[4], ld32((c.r[29].w[0] + 144u)));
    c.budget -= 1;
L_003CEAA0:
    c.r[2].d[0] = c.r[4].d[0] & c.r[17].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[22].d[0] + 0ull;  if (t) { goto L_003CEAD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[6], c.r[4].w[0] << 2);
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[5], ld32((c.r[29].w[0] + 136u)));
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEAD4u); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CEAD4u) [[unlikely]] return; }
L_003CEAD4:
    c.r[2].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 1;
L_003CEAD8:
    ld128((c.r[29].w[0] + 12304u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 12288u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 12272u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 12256u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 12240u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 12224u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 12208u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 12192u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 12176u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 12160u));
    c.f[20] = ld32((c.r[29].w[0] + 12320u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 12336u);  c.pc = t; return; }
L_003CEB10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[13].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00530000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] + 1916u);
    set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[11].d[0] = c.r[7].d[0] + 0ull;
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[9].d[0] + 0ull;  if (t) { goto L_003CEB78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] + 24328u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 11;
L_003CEB78:
    ld128((c.r[10].w[0] + 48u) & ~15u, c.r[7]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    ld128((c.r[10].w[0]) & ~15u, c.r[6]);
    ld128((c.r[10].w[0] + 16u) & ~15u, c.r[2]);
    ld128((c.r[10].w[0] + 32u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[2]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[3]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[7]);
    st32((c.r[29].w[0] + 80u), c.r[13].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[12].w[0]);
    st32((c.r[29].w[0] + 88u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[8].w[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEBB4u); st32((c.r[29].w[0] + 92u), 0u);  if (depth < kMaxDepth) unit_00B3(c, 105u, depth + 1u); else { c.pc = 0x003CDE48u; return; } if (c.pc != 0x003CEBB4u) [[unlikely]] return; }
L_003CEBB4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 1916u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003CEBF4; } }
    set32(c.r[2], c.r[2].w[0] + 24344u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    set32(c.r[3], mfc0(c, 25u, 1u));
    st32((c.r[29].w[0]), c.r[3].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[2], mfc0(c, 25u, 3u));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[4].w[0] + 12u);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 1916u), c.r[3].w[0]);
    c.budget -= 10;
L_003CEBF4:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_003CEC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CEC44; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (t) { goto L_003CEC48; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D0E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64054ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEC40u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x003CEC40u) [[unlikely]] return; }
L_003CEC40:
    st32((c.r[16].w[0] - 23416u), c.f[0]);
    c.budget -= 1;
L_003CEC44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003CEC48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CEC58:
    set32(c.r[3], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 128u)));
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[5].w[0] + 32u) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    set32(c.r[6], ld32((c.r[4].w[0] + 72u)));
    ld128((c.r[5].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], ld32((c.r[4].w[0] + 72u)));
    ld128((c.r[5].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[2], ld32((c.r[6].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st128((c.r[2].w[0] + 64u) & ~15u, c.r[3]);
    set32(c.r[5], ld32((c.r[4].w[0] + 72u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 128u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 26;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 128u), c.r[2].w[0]);  c.pc = t; return; }
L_003CECC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C60000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 20077ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x30000000u);
    c.f[3] = c.r[1].w[0];
    c.f[13] = fp::sub(c.f[13], c.f[12]);
    set32(c.r[5], c.r[5].w[0] + 12345u);
    c.r[5].d[0] = c.r[5].d[0] & c.r[4].d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.f[2] = c.r[5].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[2] = fp::mul(c.f[2], c.f[3]);
    set32(c.r[2], c.r[2].w[0] + 12345u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[2] = fp::add(c.f[2], c.f[12]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    set32(c.r[3], c.r[3].w[0] + 12345u);
    c.f[2] = fp::mul(c.f[2], c.f[13]);
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[12]);
    st32((c.r[6].w[0]), c.f[2]);
    c.f[0] = fp::mul(c.f[0], c.f[3]);
    c.f[1] = fp::mul(c.f[1], c.f[13]);
    c.f[0] = fp::add(c.f[0], c.f[12]);
    st32((c.r[6].w[0] + 4u), c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[13]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0] + 8u), c.f[0]);  c.pc = t; return; }
L_003CED58:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CED6Cu); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B3(c, 139u, depth + 1u); else { c.pc = 0x003CEC10u; return; } if (c.pc != 0x003CED6Cu) [[unlikely]] return; }
L_003CED6C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CED78:
    set32(c.r[29], c.r[29].w[0] - 208u);
    set32(c.r[9], 0u + 2u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[29].w[0] + 192u), c.f[20]);
    c.r[30].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    set32(c.r[19], c.r[30].w[0] + 28u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.r[23].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.r[1].d[0] = c.r[1].d[0] | 50604ull;
    c.f[20] = c.r[1].w[0];
    c.budget -= 24;
L_003CEDD8:
    set32(c.r[18], ld32((c.r[19].w[0])));
    set32(c.r[16], ld32((c.r[18].w[0] + 12u)));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[17].w[0] + 4u);  if (t) { goto L_003CEED4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[3]);
    set32(c.r[3], 0u + 1u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[1]);
    vu::sub(c.vu0, 15u, 3u, 3u, 1u);
    c.f[2] = ld32((c.r[17].w[0]));
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 1u, 3u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[1]));
    c.budget -= 19;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::add(c.f[1], c.f[20]);  goto L_003CEE54; }
    c.f[0] = ld32((c.r[17].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[17].w[0] + 4u), c.f[1]);  goto L_003CEE68; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0]));  if (t) { goto L_003CEE6C; } }
L_003CEE54:
    fpu_compare(c, fp::key(c.f[2]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[17].w[0]), c.f[0]);  goto L_003CEE64; }
L_003CEE64:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003CEE68:
    c.f[1] = ld32((c.r[4].w[0]));
    c.budget -= 1;
L_003CEE6C:
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], 0u + 4u);  goto L_003CEE80; }
L_003CEE80:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[16].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 4u);  if (t) { goto L_003CEEA4; } }
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[3].d[0]) { c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));  goto L_003CEED4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003CEF00; } }
L_003CEEA4:
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[9]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEEC0u); c.r[8].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 145u, depth + 1u); else { c.pc = 0x003CED78u; return; } if (c.pc != 0x003CEEC0u) [[unlikely]] return; }
L_003CEEC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[9]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[9].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_003CEF04; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 68u));
    c.budget -= 1;
L_003CEED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[9].d[0]; set32(c.r[23], c.r[23].w[0] + 1u);  if (t) { goto L_003CEEF4; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    st32((c.r[3].w[0] + 16u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[20].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[20].w[0]), c.r[2].w[0]);
    st32((c.r[22].w[0]), c.r[18].w[0]);
    c.budget -= 6;
L_003CEEF4:
    c.r[2].d[0] = c.r[23].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CEDD8u | kUnwind; return; } goto L_003CEDD8; } }
L_003CEF00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 1;
L_003CEF04:
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[2].w[0] + 24352u));
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[18]);
    st32((c.r[30].w[0] + 16u), c.f[0]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[19]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[20]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[30].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[4].w[0]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.f[20] = ld32((c.r[29].w[0] + 192u));
    c.budget -= 23;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_003CEF60:
    set32(c.r[29], c.r[29].w[0] - 496u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    set32(c.r[10], c.r[29].w[0] + 12u);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    set32(c.r[3], c.r[16].w[0] + 8448u);
    st64((c.r[29].w[0] + 432u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = c.r[9].d[0] | 100ull;
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[3].w[0] + 4u)));
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], c.r[8].w[0] + 1u);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[8], c.r[8].w[0] << 5);
    set32(c.r[2], ld32((c.r[16].w[0] + 8448u)));
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    st128((c.r[2].w[0]) & ~15u, c.r[3]);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 416u), c.r[2].w[0]);
    st32((c.r[29].w[0]), c.r[10].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[9].w[0]);
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEFD0u); st32((c.r[29].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_00B3(c, 172u, depth + 1u); else { c.pc = 0x003CF630u; return; } if (c.pc != 0x003CEFD0u) [[unlikely]] return; }
L_003CEFD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CEFE8u); set32(c.r[8], c.r[29].w[0] + 416u);  if (depth < kMaxDepth) unit_00B3(c, 152u, depth + 1u); else { c.pc = 0x003CF038u; return; } if (c.pc != 0x003CEFE8u) [[unlikely]] return; }
L_003CEFE8:
    set32(c.r[6], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].sd[0] < 0; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_003CF01C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[8], ld32((c.r[2].w[0] + 8208u)));
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], ld32((c.r[8].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 48u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF01Cu); set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CF01Cu) [[unlikely]] return; }
L_003CF01C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 432u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 496u);  c.pc = t; return; }
L_003CF038:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    c.r[5].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[8].d[0] + 0ull;
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[22].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 18;
    { const bool t = c.r[2].sd[0] <= 0; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_003CF140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003CF134; } }
L_003CF088:
    set32(c.r[3], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[18].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[8], ld32((c.r[2].w[0])));  if (t) { goto L_003CF0B8; } }
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[9], ld32((c.r[2].w[0])));  if (t) { goto L_003CF0BC; } }
L_003CF0B8:
    set32(c.r[9], ld32((c.r[7].w[0])));
    c.budget -= 1;
L_003CF0BC:
    set32(c.r[5], c.r[8].w[0] + 20u);
    set32(c.r[6], c.r[8].w[0] + 52u);
    set32(c.r[2], c.r[8].w[0] + 36u);
    st32((c.r[8].w[0] + 56u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 32u), c.r[8].w[0]);
    set32(c.r[7], c.r[9].w[0] + 36u);
    st32((c.r[8].w[0] + 24u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[8].w[0] + 48u), c.r[8].w[0]);
    st32((c.r[8].w[0] + 40u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 64u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[2].w[0])));
    st32((c.r[8].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    st32((c.r[8].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[21].w[0])));
    st32((c.r[8].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[8].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[9].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF118u); st32((c.r[8].w[0] + 60u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_00B3(c, 175u, depth + 1u); else { c.pc = 0x003CF700u; return; } if (c.pc != 0x003CF118u) [[unlikely]] return; }
L_003CF118:
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], ld32((c.r[3].w[0] + 16u)));  if (t) { goto L_003CF140; } }
L_003CF134:
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[7], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF088u | kUnwind; return; } goto L_003CF088; }
    set32(c.r[20], 0u + 2u);
    c.budget -= 1;
L_003CF140:
    set32(c.r[4], c.r[19].w[0] + 432u);
    c.r[7].d[0] = c.r[22].d[0] ^ c.r[16].d[0];
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[6], c.r[19].w[0] + 8448u);  if (t) { goto L_003CF180; } }
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003CF160:
    set32(c.r[2], ld32((c.r[19].w[0] + 432u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF160u | kUnwind; return; } goto L_003CF160; } }
L_003CF180:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_003CF1B8; } }
    c.r[5].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 8448u)));
    c.budget -= 3;
L_003CF198:
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[19].w[0] + 8448u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF198u | kUnwind; return; } goto L_003CF198; }
L_003CF1B8:
    set32(c.r[2], 0u + 2u);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    if (c.r[7].d[0] == 0) c.r[2].d[0] = c.r[20].d[0];
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_003CF1E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 4u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], c.r[16].w[0] + 432u);
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], c.r[2].w[0] + 24360u);
    set32(c.r[6], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[2], c.r[6].w[0] + 320u);
    c.budget -= 14;
    { const bool t = c.r[6].d[0] == c.r[2].d[0]; c.r[10].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_003CF2B4; } }
    set32(c.r[11], 0u + 80u);
    set32(c.r[4], c.r[6].w[0] + 20u);
    c.budget -= 2;
L_003CF228:
    set32(c.r[3], c.r[6].w[0] + 36u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] + 52u);
    set32(c.r[8], c.r[6].w[0] + 68u);
    st32((c.r[6].w[0] + 24u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 40u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    st8((c.r[6].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[9], c.r[6].w[0] + 80u);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[6].w[0] + 56u), c.r[4].w[0]);  if (t) { goto L_003CF298; } }
    c.budget -= 1;
L_003CF258:
    st32((c.r[5].w[0] + 12u), c.r[6].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 8448u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    set32(c.r[2], ld32((c.r[16].w[0] + 432u)));
    c.r[4].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 20u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[8].d[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF258u | kUnwind; return; } goto L_003CF258; } }
L_003CF298:
    set32(c.r[3], ld32((c.r[10].w[0] + 4u)));
    c.r[6].d[0] = c.r[9].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 432u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[11].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    if (c.r[6].d[0] != c.r[2].d[0]) { set32(c.r[4], c.r[6].w[0] + 20u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF228u | kUnwind; return; } goto L_003CF228; }
L_003CF2B4:
    set32(c.r[4], ld32((c.r[16].w[0] + 432u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF2C0u); set32(c.r[4], c.r[4].w[0] + 240u);  if (depth < kMaxDepth) unit_00B3(c, 175u, depth + 1u); else { c.pc = 0x003CF700u; return; } if (c.pc != 0x003CF2C0u) [[unlikely]] return; }
L_003CF2C0:
    set32(c.r[2], ld32((c.r[16].w[0] + 8448u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 432u)));
    ld128((c.r[2].w[0] + 32u) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    c.f[1] = 0u;
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0] + 240u) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    c.r[3] = c.vu0.vf[3];
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 19;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], c.r[2].w[0] + 32u);  if (t) { goto L_003CF32C; } }
    set32(c.r[4], c.r[5].w[0] + 80u);
    st32((c.r[5].w[0] + 180u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 8448u)));
    st32((c.r[5].w[0] + 260u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 8;
L_003CF32C:
    set32(c.r[16], ld32((c.r[16].w[0] + 432u)));
    set32(c.r[17], 0u + 3u);
    c.budget -= 3;
L_003CF338:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF344u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_00B3(c, 175u, depth + 1u); else { c.pc = 0x003CF700u; return; } if (c.pc != 0x003CF344u) [[unlikely]] return; }
L_003CF344:
    c.budget -= 4;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF338u | kUnwind; return; } goto L_003CF338; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CF368:
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], c.r[4].w[0] + 432u);
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] <= 0; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_003CF3A8; } }
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_003CF388:
    set32(c.r[2], ld32((c.r[4].w[0] + 432u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 68u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 80u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF388u | kUnwind; return; } goto L_003CF388; } }
L_003CF3A8:
    set32(c.r[3], c.r[4].w[0] + 8448u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_003CF3E0; } }
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 8448u)));
    c.budget -= 2;
L_003CF3C0:
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 16u), 0u);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 8448u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF3C0u | kUnwind; return; } goto L_003CF3C0; }
L_003CF3E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xB8D10000u);
    c.r[1].d[0] = c.r[1].d[0] | 46871ull;
    c.f[4] = c.r[1].w[0];
    c.r[6].d[0] = c.r[12].d[0] + 0ull;
    c.f[3] = 0u;
    c.r[10].d[0] = 0ull + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[1].d[0] = c.r[1].d[0] | 26214ull;
    c.f[2] = c.r[1].w[0];
    c.r[11].d[0] = 0ull + 0ull;
    set32(c.r[13], 0u + 3u);
    st8((c.r[6].w[0] + 68u), static_cast<std::uint8_t>(c.r[13].w[0]));
    c.budget -= 12;
L_003CF410:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 20u);
    c.budget -= 2;
L_003CF418:
    set32(c.r[2], c.r[6].w[0] + c.r[9].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[10].d[0]; set32(c.r[7], c.r[8].w[0] << 4);  if (t) { goto L_003CF4D0; } }
    set32(c.r[2], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[3].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 2u, 2u, 1u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[6].w[0]) & ~15u, c.vu0.vf[1]);
    vu::opmula(c.vu0, 2u, 1u);
    vu::opmsub(c.vu0, 2u, 1u, 2u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 2u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    c.r[2] = c.vu0.vf[3];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[4]));
    c.budget -= 25;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_003CF4D0; } }
    c.f[1] = ld32((c.r[12].w[0] + 16u));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    fpu_compare(c, fp::key(c.f[3]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[2], ld32((c.r[3].w[0] + 12u)));  if (t) { goto L_003CF4B8; } }
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = ld32((c.r[2].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_003CF4D4; }
L_003CF4B8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    c.r[2].d[0] = ld8((c.r[6].w[0] + 68u));
    c.r[2].d[0] = c.r[2].d[0] ^ 3ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[11].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  if (t) { goto L_003CF4E0; } }
L_003CF4D0:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_003CF4D4:
    c.r[2].d[0] = c.r[8].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF418u | kUnwind; return; } goto L_003CF418; } }
L_003CF4E0:
    c.r[2].d[0] = c.r[8].d[0] ^ 3ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_003CF4F8; } }
    c.budget -= 2;
    if (c.r[11].d[0] == 0ull) { st8((c.r[6].w[0] + 68u), static_cast<std::uint8_t>(c.r[13].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF410u | kUnwind; return; } goto L_003CF410; }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 1;
L_003CF4F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CF500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_003CF534; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);  if (t) { goto L_003CF538; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D0E0000u);
    c.r[1].d[0] = c.r[1].d[0] | 64054ull;
    c.f[12] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF530u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00760000u);  if (depth < kMaxDepth) unit_0041(c, 360u, depth + 1u); else { c.pc = 0x00207528u; return; } if (c.pc != 0x003CF530u) [[unlikely]] return; }
L_003CF530:
    st32((c.r[16].w[0] - 23412u), c.f[0]);
    c.budget -= 1;
L_003CF534:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 1;
L_003CF538:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CF548:
    st32((c.r[6].w[0]), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x37270000u);
    c.r[1].d[0] = c.r[1].d[0] | 50604ull;
    c.f[1] = c.r[1].w[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[5].w[0]), 0u);
    set32(c.r[9], c.r[4].w[0] + 4u);
    st32((c.r[4].w[0]), c.f[1]);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.f[2] = ld32((c.r[2].w[0] + 24396u));
    st32((c.r[4].w[0] + 4u), c.f[2]);
    set32(c.r[2], ld32((c.r[7].w[0] + 20u)));
    ld128((c.r[8].w[0]) & ~15u, c.vu0.vf[2]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    vu::sub(c.vu0, 15u, 2u, 2u, 3u);
    ld128((c.r[7].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 3u, 1u, 2u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 3u, c.vu0.vf[3].w[1]);
    vu::maddbc(c.vu0, 8u, 3u, 4u, c.vu0.vf[3].w[2]);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[2]);
    c.r[2] = c.vu0.vf[3];
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 30;
    if (!(c.fcr31 & kFpuCondition)) { c.f[0] = fp::add(c.f[0], c.f[1]);  goto L_003CF5D8; }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0] + 4u), c.f[0]);  goto L_003CF5EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[9].w[0]));  if (t) { goto L_003CF5F0; } }
L_003CF5D8:
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 4;
    if ((c.fcr31 & kFpuCondition) != 0) { st32((c.r[4].w[0]), c.f[0]);  goto L_003CF5E8; }
L_003CF5E8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_003CF5EC:
    c.f[1] = ld32((c.r[9].w[0]));
    c.budget -= 1;
L_003CF5F0:
    c.f[0] = ld32((c.r[4].w[0]));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    if ((c.fcr31 & kFpuCondition) != 0) { set32(c.r[3], 0u + 4u);  goto L_003CF604; }
L_003CF604:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st8((c.r[7].w[0] + 68u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003CF620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF618u);  if (depth < kMaxDepth) unit_00B3(c, 145u, depth + 1u); else { c.pc = 0x003CED78u; return; } if (c.pc != 0x003CF618u) [[unlikely]] return; }
L_003CF618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_003CF628; } }
L_003CF620:
    set32(c.r[2], 0u + 2u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_003CF628:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CF630:
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    c.r[9].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[11].w[0] + 8u);
    c.r[8].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[7], c.r[2].w[0] - 1u);  if (t) { goto L_003CF6A8; } }
    c.budget -= 2;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_003CF6A8; } }
    c.r[10].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[11].w[0] + 8u)));
    c.budget -= 3;
L_003CF660:
    set32(c.r[2], c.r[7].w[0] << 2);
    set32(c.r[4], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[8], c.r[8].w[0] - 1u);
    set32(c.r[5], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[2].w[0]), c.r[6].w[0]);
    set32(c.r[7], c.r[7].w[0] - 1u);
    st32((c.r[9].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[10].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 16;
    { const bool t = c.r[8].d[0] == 0ull; st32((c.r[10].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_003CF6A8; } }
    c.budget -= 2;
    if (c.r[7].sd[0] >= 0) { set32(c.r[3], ld32((c.r[11].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF660u | kUnwind; return; } goto L_003CF660; }
L_003CF6A8:
    c.budget -= 2;
    { const bool t = c.r[8].sd[0] <= 0; c.r[7].d[0] = c.r[8].d[0] + 0ull;  if (t) { goto L_003CF6F4; } }
    set32(c.r[10], 0u + 80u);
    set32(c.r[8], c.r[11].w[0] + 432u);
    c.budget -= 2;
L_003CF6B8:
    set32(c.r[5], ld32((c.r[8].w[0] + 4u)));
    set32(c.r[7], c.r[7].w[0] - 1u);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st32((c.r[8].w[0] + 4u), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[10].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[4], ld32((c.r[9].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[11].w[0] + 432u)));
    set32(c.r[6], ld32((c.r[9].w[0])));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 15;
    { const bool t = c.r[7].d[0] != 0ull; st32((c.r[9].w[0] + 4u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003CF6B8u | kUnwind; return; } goto L_003CF6B8; } }
L_003CF6F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003CF700:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[2]);
    set32(c.r[2], ld32((c.r[4].w[0] + 52u)));
    vu::sub(c.vu0, 15u, 1u, 1u, 2u);
    st128((c.r[29].w[0]) & ~15u, c.vu0.vf[1]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[2]);
    vu::sub(c.vu0, 15u, 2u, 2u, 3u);
    vu::opmula(c.vu0, 1u, 2u);
    vu::opmsub(c.vu0, 1u, 2u, 1u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.vu0.vf[2]);
    vu::move(c.vu0, 15u, 3u, 1u);
    vu::mul(c.vu0, 14u, 5u, 3u, 3u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 5u, c.vu0.vf[5].w[1]);
    vu::maddbc(c.vu0, 8u, 5u, 4u, c.vu0.vf[5].w[2]);
    vu::rsqrt(c.vu0, c.vu0.vf[0].w[3], c.vu0.vf[5].w[0]);
    vu::mulbc(c.vu0, 14u, 3u, 3u, c.vu0.q);
    st128((c.r[4].w[0]) & ~15u, c.vu0.vf[3]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[1]);
    vu::mul(c.vu0, 14u, 2u, 3u, 1u);
    vu::addbc(c.vu0, 8u, 4u, 0u, c.vu0.vf[0].w[3]);
    vu::addabc(c.vu0, 8u, 2u, c.vu0.vf[2].w[1]);
    vu::maddbc(c.vu0, 8u, 2u, 4u, c.vu0.vf[2].w[2]);
    c.r[2] = c.vu0.vf[2];
    c.f[0] = c.r[2].w[0];
    st32((c.r[4].w[0] + 16u), c.f[0]);
    c.budget -= 36;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003CF790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF7A4u); c.r[5].d[0] = 0ull | 65535ull;  if (depth < kMaxDepth) unit_00B3(c, 168u, depth + 1u); else { c.pc = 0x003CF500u; return; } if (c.pc != 0x003CF7A4u) [[unlikely]] return; }
L_003CF7A4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF7B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CF808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF808u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CF808u) [[unlikely]] return; }
L_003CF808:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] >> 8);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CF844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF844u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CF844u) [[unlikely]] return; }
L_003CF844:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CF880; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CF880u) [[unlikely]] return; }
L_003CF880:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] >> 24);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CF8BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF8BCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CF8BCu) [[unlikely]] return; }
L_003CF8BC:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CF8F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF8F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CF8F4u) [[unlikely]] return; }
L_003CF8F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CF910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 29136u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[7], ld32((c.r[3].w[0] + 8208u)));
    set32(c.r[6], 0u + 31u);
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF954u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CF954u) [[unlikely]] return; }
L_003CF954:
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CF978:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[6].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CF9BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CF9BCu); c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CF9BCu) [[unlikely]] return; }
L_003CF9BC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CF9C8:
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 2;
L_003CF9D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[7].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA18u); c.r[4].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFA18u) [[unlikely]] return; }
L_003CFA18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003CFA28:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFA78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFA78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFA78u) [[unlikely]] return; }
L_003CFA78:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFAB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFAB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFAB0u) [[unlikely]] return; }
L_003CFAB0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CFAC8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFB20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFB20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFB20u) [[unlikely]] return; }
L_003CFB20:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[17].w[0]) >> 8));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFB5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFB5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFB5Cu) [[unlikely]] return; }
L_003CFB5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFB94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFB94u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFB94u) [[unlikely]] return; }
L_003CFB94:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CFBB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFC08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC08u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFC08u) [[unlikely]] return; }
L_003CFC08:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] >> 8);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFC44; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC44u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFC44u) [[unlikely]] return; }
L_003CFC44:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFC80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFC80u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFC80u) [[unlikely]] return; }
L_003CFC80:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFCB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFCB8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFCB8u) [[unlikely]] return; }
L_003CFCB8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CFCD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFD20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFD20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFD20u) [[unlikely]] return; }
L_003CFD20:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] >> 8);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFD5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFD5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFD5Cu) [[unlikely]] return; }
L_003CFD5C:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], c.r[17].w[0] >> 16);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] - 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_003CFD98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFD98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_00B3(c, 207u, depth + 1u); else { c.pc = 0x003CFDB0u; return; } if (c.pc != 0x003CFD98u) [[unlikely]] return; }
L_003CFD98:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003CFDB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[6], 0u + 31u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[7], ld32((c.r[18].w[0] + 8208u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 16;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFDF0u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CFDF0u) [[unlikely]] return; }
L_003CFDF0:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE08u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x003CFE08u) [[unlikely]] return; }
L_003CFE08:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 8208u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE30u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CFE30u) [[unlikely]] return; }
L_003CFE30:
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003CFE50:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[6], 0u + 31u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005B0000u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    set32(c.r[7], ld32((c.r[19].w[0] + 8208u)));
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 17;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFE94u); set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CFE94u) [[unlikely]] return; }
L_003CFE94:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 8u)));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFEB8u); set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0042(c, 199u, depth + 1u); else { c.pc = 0x0020B638u; return; } if (c.pc != 0x003CFEB8u) [[unlikely]] return; }
L_003CFEB8:
    set32(c.r[6], ld32((c.r[19].w[0] + 8208u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 32u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003CFED4u); set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003CFED4u) [[unlikely]] return; }
L_003CFED4:
    st32((c.r[16].w[0] + 8u), c.r[17].w[0]);
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[16].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003CFF00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[1].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00570000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[1].w[0];
    c.r[10].d[0] = c.r[4].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[2] = c.r[1].w[0];
    set32(c.r[2], c.r[2].w[0] - 29112u);
    st32((c.r[10].w[0] + 80u), c.f[1]);
    set32(c.r[4], c.r[10].w[0] + 80u);
    st32((c.r[10].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[9], 0u + 4u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[4].w[0] + 32u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 4u), c.f[2]);
    c.r[12].d[0] = c.r[5].d[0] + 0ull;
    st32((c.r[4].w[0] + 8u), c.f[0]);
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[1].d[0] = c.r[1].d[0] | 52429ull;
    c.f[1] = c.r[1].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00760000u);
    st32((c.r[29].w[0] + 16u), c.f[0]);
    set32(c.r[3], c.r[3].w[0] - 23408u);
    st32((c.r[29].w[0] + 28u), 0u);
    c.r[13].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0] + 20u), 0u);
    c.r[14].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[29].w[0] + 24u), 0u);
    c.r[9].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.f[1]);
    c.r[11].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), c.f[2]);
    st32((c.r[29].w[0] + 4u), c.f[2]);
    st32((c.r[29].w[0] + 12u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[5]);
    st32((c.r[29].w[0] + 16u), 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[2]);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    st32((c.r[29].w[0] + 24u), 0u);
    st128((c.r[10].w[0] + 96u) & ~15u, c.r[2]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    c.f[1] = c.r[1].w[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    st32((c.r[29].w[0] + 28u), 0u);
    st128((c.r[3].w[0]) & ~15u, c.r[5]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3EA30000u);
    c.r[1].d[0] = c.r[1].d[0] | 55050ull;
    c.f[5] = c.r[1].w[0];
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[2]);
    st128((c.r[3].w[0] + 32u) & ~15u, c.r[4]);
    st128((c.r[3].w[0] + 64u) & ~15u, c.r[2]);
    st32((c.r[3].w[0] + 16u), 0u);
    st32((c.r[3].w[0] + 48u), 0u);
    st32((c.r[3].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 16u), 0u);
    st32((c.r[8].w[0] + 4u), c.f[0]);
    st32((c.r[8].w[0] + 8u), c.f[0]);
    c.budget -= 64;
    [[clang::musttail]] return unit_00B4(c, 1u, depth);
}

}
