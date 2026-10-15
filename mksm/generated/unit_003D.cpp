#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003D[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130,
    0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144,
    0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0,
    0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0,
};

void unit_003D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F4000;
    case 2u: goto L_001F4004;
    case 3u: goto L_001F4024;
    case 4u: goto L_001F4048;
    case 5u: goto L_001F4064;
    case 6u: goto L_001F40B0;
    case 7u: goto L_001F40D0;
    case 8u: goto L_001F411C;
    case 9u: goto L_001F4168;
    case 10u: goto L_001F4188;
    case 11u: goto L_001F41AC;
    case 12u: goto L_001F41C8;
    case 13u: goto L_001F4214;
    case 14u: goto L_001F4234;
    case 15u: goto L_001F4280;
    case 16u: goto L_001F42CC;
    case 17u: goto L_001F42EC;
    case 18u: goto L_001F4310;
    case 19u: goto L_001F432C;
    case 20u: goto L_001F4378;
    case 21u: goto L_001F4398;
    case 22u: goto L_001F43E4;
    case 23u: goto L_001F4440;
    case 24u: goto L_001F4460;
    case 25u: goto L_001F4498;
    case 26u: goto L_001F44B8;
    case 27u: goto L_001F44C8;
    case 28u: goto L_001F4500;
    case 29u: goto L_001F454C;
    case 30u: goto L_001F456C;
    case 31u: goto L_001F4590;
    case 32u: goto L_001F45AC;
    case 33u: goto L_001F45F8;
    case 34u: goto L_001F4618;
    case 35u: goto L_001F4664;
    case 36u: goto L_001F46B0;
    case 37u: goto L_001F46D0;
    case 38u: goto L_001F46F4;
    case 39u: goto L_001F4710;
    case 40u: goto L_001F475C;
    case 41u: goto L_001F477C;
    case 42u: goto L_001F47C8;
    case 43u: goto L_001F4814;
    case 44u: goto L_001F4844;
    case 45u: goto L_001F486C;
    case 46u: goto L_001F4888;
    case 47u: goto L_001F48CC;
    case 48u: goto L_001F48F8;
    case 49u: goto L_001F4990;
    case 50u: goto L_001F49AC;
    case 51u: goto L_001F49D0;
    case 52u: goto L_001F49EC;
    case 53u: goto L_001F4A2C;
    case 54u: goto L_001F4A4C;
    case 55u: goto L_001F4A98;
    case 56u: goto L_001F4AE4;
    case 57u: goto L_001F4B04;
    case 58u: goto L_001F4B28;
    case 59u: goto L_001F4B44;
    case 60u: goto L_001F4B90;
    case 61u: goto L_001F4BB0;
    case 62u: goto L_001F4BFC;
    case 63u: goto L_001F4C48;
    case 64u: goto L_001F4C68;
    case 65u: goto L_001F4C8C;
    case 66u: goto L_001F4CA8;
    case 67u: goto L_001F4CF4;
    case 68u: goto L_001F4D14;
    case 69u: goto L_001F4D60;
    case 70u: goto L_001F4DAC;
    case 71u: goto L_001F4DDC;
    case 72u: goto L_001F4E04;
    case 73u: goto L_001F4E20;
    case 74u: goto L_001F4E64;
    case 75u: goto L_001F4E90;
    case 76u: goto L_001F4F28;
    case 77u: goto L_001F4F44;
    case 78u: goto L_001F4F68;
    case 79u: goto L_001F4F84;
    case 80u: goto L_001F4FC4;
    case 81u: goto L_001F4FE4;
    case 82u: goto L_001F507C;
    case 83u: goto L_001F5098;
    case 84u: goto L_001F50BC;
    case 85u: goto L_001F50D8;
    case 86u: goto L_001F5118;
    case 87u: goto L_001F5138;
    case 88u: goto L_001F51D0;
    case 89u: goto L_001F51EC;
    case 90u: goto L_001F5210;
    case 91u: goto L_001F522C;
    case 92u: goto L_001F526C;
    case 93u: goto L_001F528C;
    case 94u: goto L_001F5324;
    case 95u: goto L_001F5340;
    case 96u: goto L_001F5364;
    case 97u: goto L_001F5380;
    case 98u: goto L_001F53C0;
    case 99u: goto L_001F53E0;
    case 100u: goto L_001F542C;
    case 101u: goto L_001F5478;
    case 102u: goto L_001F5498;
    case 103u: goto L_001F54BC;
    case 104u: goto L_001F54D8;
    case 105u: goto L_001F5524;
    case 106u: goto L_001F5544;
    case 107u: goto L_001F55AC;
    case 108u: goto L_001F55C8;
    case 109u: goto L_001F5608;
    case 110u: goto L_001F5628;
    case 111u: goto L_001F5650;
    case 112u: goto L_001F5758;
    case 113u: goto L_001F5A60;
    case 114u: goto L_001F5A78;
    case 115u: goto L_001F5AB0;
    case 116u: goto L_001F67C8;
    case 117u: goto L_001F67E0;
    case 118u: goto L_001F68E8;
    case 119u: goto L_001F6930;
    case 120u: goto L_001F6950;
    case 121u: goto L_001F6980;
    case 122u: goto L_001F69A4;
    case 123u: goto L_001F69D8;
    case 124u: goto L_001F6A24;
    case 125u: goto L_001F6A34;
    case 126u: goto L_001F6A48;
    case 127u: goto L_001F6A58;
    case 128u: goto L_001F6A68;
    case 129u: goto L_001F6AEC;
    case 130u: goto L_001F6AFC;
    case 131u: goto L_001F6B10;
    case 132u: goto L_001F6B18;
    case 133u: goto L_001F6B20;
    case 134u: goto L_001F6B44;
    case 135u: goto L_001F6B60;
    case 136u: goto L_001F6BD0;
    case 137u: goto L_001F6BE0;
    case 138u: goto L_001F6BF0;
    case 139u: goto L_001F6C08;
    case 140u: goto L_001F6C20;
    case 141u: goto L_001F6C48;
    case 142u: goto L_001F6C58;
    case 143u: goto L_001F6C70;
    case 144u: goto L_001F6C7C;
    case 145u: goto L_001F6C90;
    case 146u: goto L_001F6C98;
    case 147u: goto L_001F6CA8;
    case 148u: goto L_001F6CB8;
    case 149u: goto L_001F6CF8;
    case 150u: goto L_001F6D08;
    case 151u: goto L_001F6D80;
    case 152u: goto L_001F6D98;
    case 153u: goto L_001F6DB0;
    case 154u: goto L_001F6DE0;
    case 155u: goto L_001F6DF8;
    case 156u: goto L_001F6E38;
    case 157u: goto L_001F6E44;
    case 158u: goto L_001F6E50;
    case 159u: goto L_001F6E5C;
    case 160u: goto L_001F6E68;
    case 161u: goto L_001F6E78;
    case 162u: goto L_001F6EB8;
    case 163u: goto L_001F6EC4;
    case 164u: goto L_001F6ED0;
    case 165u: goto L_001F6EE0;
    case 166u: goto L_001F6EF8;
    case 167u: goto L_001F6F50;
    case 168u: goto L_001F6F7C;
    case 169u: goto L_001F6F90;
    case 170u: goto L_001F6FA4;
    case 171u: goto L_001F6FB8;
    case 172u: goto L_001F6FCC;
    case 173u: goto L_001F6FE0;
    case 174u: goto L_001F6FF4;
    case 175u: goto L_001F7008;
    case 176u: goto L_001F701C;
    case 177u: goto L_001F7030;
    case 178u: goto L_001F7044;
    case 179u: goto L_001F7058;
    case 180u: goto L_001F706C;
    case 181u: goto L_001F7080;
    case 182u: goto L_001F7094;
    case 183u: goto L_001F70A0;
    case 184u: goto L_001F70A8;
    case 185u: goto L_001F70C8;
    case 186u: goto L_001F70E8;
    case 187u: goto L_001F7108;
    case 188u: goto L_001F7128;
    case 189u: goto L_001F7148;
    case 190u: goto L_001F7168;
    case 191u: goto L_001F71B8;
    case 192u: goto L_001F71D8;
    case 193u: goto L_001F71F8;
    case 194u: goto L_001F7238;
    case 195u: goto L_001F7260;
    case 196u: goto L_001F7278;
    case 197u: goto L_001F7298;
    case 198u: goto L_001F72D0;
    case 199u: goto L_001F72DC;
    case 200u: goto L_001F72E8;
    case 201u: goto L_001F7310;
    case 202u: goto L_001F7320;
    case 203u: goto L_001F7348;
    case 204u: goto L_001F7358;
    case 205u: goto L_001F7368;
    case 206u: goto L_001F7378;
    case 207u: goto L_001F7390;
    case 208u: goto L_001F73A0;
    case 209u: goto L_001F73B8;
    case 210u: goto L_001F73C8;
    case 211u: goto L_001F7460;
    case 212u: goto L_001F7468;
    case 213u: goto L_001F7470;
    case 214u: goto L_001F7490;
    case 215u: goto L_001F74C0;
    case 216u: goto L_001F74DC;
    case 217u: goto L_001F74F4;
    case 218u: goto L_001F7524;
    case 219u: goto L_001F7540;
    case 220u: goto L_001F7558;
    case 221u: goto L_001F7588;
    case 222u: goto L_001F75A4;
    case 223u: goto L_001F75BC;
    case 224u: goto L_001F75EC;
    case 225u: goto L_001F7604;
    case 226u: goto L_001F7634;
    case 227u: goto L_001F764C;
    case 228u: goto L_001F767C;
    case 229u: goto L_001F7694;
    case 230u: goto L_001F76C4;
    case 231u: goto L_001F76DC;
    case 232u: goto L_001F770C;
    case 233u: goto L_001F7724;
    case 234u: goto L_001F7754;
    case 235u: goto L_001F776C;
    case 236u: goto L_001F779C;
    case 237u: goto L_001F77B4;
    case 238u: goto L_001F77E4;
    case 239u: goto L_001F77FC;
    case 240u: goto L_001F782C;
    case 241u: goto L_001F7844;
    case 242u: goto L_001F7874;
    case 243u: goto L_001F788C;
    case 244u: goto L_001F78BC;
    case 245u: goto L_001F78D0;
    case 246u: goto L_001F7924;
    case 247u: goto L_001F7944;
    case 248u: goto L_001F7968;
    case 249u: goto L_001F797C;
    case 250u: goto L_001F7990;
    case 251u: goto L_001F79A4;
    case 252u: goto L_001F79B8;
    case 253u: goto L_001F79CC;
    case 254u: goto L_001F79E0;
    case 255u: goto L_001F79F4;
    case 256u: goto L_001F7A08;
    case 257u: goto L_001F7A20;
    case 258u: goto L_001F7A38;
    case 259u: goto L_001F7A54;
    case 260u: goto L_001F7A6C;
    case 261u: goto L_001F7A84;
    case 262u: goto L_001F7AA0;
    case 263u: goto L_001F7AB4;
    case 264u: goto L_001F7ACC;
    case 265u: goto L_001F7AE4;
    case 266u: goto L_001F7AFC;
    case 267u: goto L_001F7B14;
    case 268u: goto L_001F7B2C;
    case 269u: goto L_001F7B44;
    case 270u: goto L_001F7B5C;
    case 271u: goto L_001F7B74;
    case 272u: goto L_001F7B8C;
    case 273u: goto L_001F7BA4;
    case 274u: goto L_001F7BBC;
    case 275u: goto L_001F7BD4;
    case 276u: goto L_001F7BF4;
    case 277u: goto L_001F7C10;
    case 278u: goto L_001F7C2C;
    case 279u: goto L_001F7C48;
    case 280u: goto L_001F7C64;
    case 281u: goto L_001F7C80;
    case 282u: goto L_001F7C98;
    case 283u: goto L_001F7CB0;
    case 284u: goto L_001F7CCC;
    case 285u: goto L_001F7CEC;
    case 286u: goto L_001F7D04;
    case 287u: goto L_001F7D20;
    case 288u: goto L_001F7D3C;
    case 289u: goto L_001F7D54;
    case 290u: goto L_001F7D6C;
    case 291u: goto L_001F7D84;
    case 292u: goto L_001F7D9C;
    case 293u: goto L_001F7DB4;
    case 294u: goto L_001F7DCC;
    case 295u: goto L_001F7DE0;
    case 296u: goto L_001F7DFC;
    case 297u: goto L_001F7E14;
    case 298u: goto L_001F7E34;
    case 299u: goto L_001F7E50;
    case 300u: goto L_001F7E60;
    case 301u: goto L_001F7E74;
    case 302u: goto L_001F7E90;
    case 303u: goto L_001F7EA0;
    case 304u: goto L_001F7EB4;
    case 305u: goto L_001F7ED0;
    case 306u: goto L_001F7EE0;
    case 307u: goto L_001F7EF4;
    case 308u: goto L_001F7F10;
    case 309u: goto L_001F7F20;
    case 310u: goto L_001F7F34;
    case 311u: goto L_001F7F50;
    case 312u: goto L_001F7F60;
    case 313u: goto L_001F7F74;
    case 314u: goto L_001F7F90;
    case 315u: goto L_001F7FA0;
    case 316u: goto L_001F7FB4;
    case 317u: goto L_001F7FC4;
    case 318u: goto L_001F7FE4;
    case 319u: goto L_001F7FF4;
    default: bad_entry(c, 0x001F4000u); return;
    }
L_001F4000:
    c.budget -= 1;
L_001F4004:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4024u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4024u) [[unlikely]] return; }
L_001F4024:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 900u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4048u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4048u) [[unlikely]] return; }
L_001F4048:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4064u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4064u) [[unlikely]] return; }
L_001F4064:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F40B0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F40B0u) [[unlikely]] return; }
L_001F40B0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 88u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F40D0u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F40D0u) [[unlikely]] return; }
L_001F40D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F411C:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4168u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4168u) [[unlikely]] return; }
L_001F4168:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4188u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4188u) [[unlikely]] return; }
L_001F4188:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 1700u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41ACu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F41ACu) [[unlikely]] return; }
L_001F41AC:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F41C8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F41C8u) [[unlikely]] return; }
L_001F41C8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4214u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4214u) [[unlikely]] return; }
L_001F4214:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 92u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4234u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F4234u) [[unlikely]] return; }
L_001F4234:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F4280:
    set32(c.r[17], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 96u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[9], 0u - 1000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42CCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F42CCu) [[unlikely]] return; }
L_001F42CC:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F42ECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F42ECu) [[unlikely]] return; }
L_001F42EC:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4310u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4310u) [[unlikely]] return; }
L_001F4310:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F432Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F432Cu) [[unlikely]] return; }
L_001F432C:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4378u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4378u) [[unlikely]] return; }
L_001F4378:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 96u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4398u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F4398u) [[unlikely]] return; }
L_001F4398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F43E4:
    set32(c.r[3], ld32((c.r[29].w[0] + 128u)));
    set32(c.r[5], 0u + 1056u);
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    set32(c.r[6], c.r[29].w[0] + 16u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 17040u);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.r[19].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.f[12] = ld32((c.r[5].w[0]));
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[6].w[0] + 8u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4440u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4440u) [[unlikely]] return; }
L_001F4440:
    set32(c.r[3], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] - 14152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[2].w[0] - 6080u);
    set32(c.r[17], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
L_001F4460:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0;  if (t) { goto L_001F4474; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F44E0; } }
L_001F4474:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4498u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4498u) [[unlikely]] return; }
L_001F4498:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44B8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F44B8u) [[unlikely]] return; }
L_001F44B8:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F44C8u);  if (depth < kMaxDepth) unit_008B(c, 100u, depth + 1u); else { c.pc = 0x0032CC60u; return; } if (c.pc != 0x001F44C8u) [[unlikely]] return; }
L_001F44C8:
    c.f[1] = ld32((c.r[18].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_001F5590; } }
L_001F44E0:
    set32(c.r[19], c.r[19].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[2].d[0] = c.r[19].sd[0] < 67ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F4460u | kUnwind; return; } goto L_001F4460; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55CC; } }
L_001F4500:
    set32(c.r[17], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 96u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[9], 0u - 1000u);
    set32(c.r[6], ld32((c.r[17].w[0])));
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[1].w[0];
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F454Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F454Cu) [[unlikely]] return; }
L_001F454C:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F456Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F456Cu) [[unlikely]] return; }
L_001F456C:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u + 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4590u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4590u) [[unlikely]] return; }
L_001F4590:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F45ACu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F45ACu) [[unlikely]] return; }
L_001F45AC:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F45F8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F45F8u) [[unlikely]] return; }
L_001F45F8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 100u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4618u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F4618u) [[unlikely]] return; }
L_001F4618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 100u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F4664:
    set32(c.r[17], 0u + 268u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 96u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F46B0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F46B0u) [[unlikely]] return; }
L_001F46B0:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F46D0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F46D0u) [[unlikely]] return; }
L_001F46D0:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 900u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F46F4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F46F4u) [[unlikely]] return; }
L_001F46F4:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4710u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4710u) [[unlikely]] return; }
L_001F4710:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F475Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F475Cu) [[unlikely]] return; }
L_001F475C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 104u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F477Cu);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F477Cu) [[unlikely]] return; }
L_001F477C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 104u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F47C8:
    set32(c.r[18], 0u + 268u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[18].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[22].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 92u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4814u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4814u) [[unlikely]] return; }
L_001F4814:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4844u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4844u) [[unlikely]] return; }
L_001F4844:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F486Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F486Cu) [[unlikely]] return; }
L_001F486C:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4888u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4888u) [[unlikely]] return; }
L_001F4888:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F48CCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F48CCu) [[unlikely]] return; }
L_001F48CC:
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[9], c.r[29].w[0] + 108u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F48F8u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F48F8u) [[unlikely]] return; }
L_001F48F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F4944; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4944; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F4944:
    set32(c.r[17], 0u + 268u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + 96u);
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4990u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4990u) [[unlikely]] return; }
L_001F4990:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F49ACu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F49ACu) [[unlikely]] return; }
L_001F49AC:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F49D0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F49D0u) [[unlikely]] return; }
L_001F49D0:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F49ECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F49ECu) [[unlikely]] return; }
L_001F49EC:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4A2Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4A2Cu) [[unlikely]] return; }
L_001F4A2C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4A4Cu);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F4A4Cu) [[unlikely]] return; }
L_001F4A4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 108u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F4A98:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4AE4u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4AE4u) [[unlikely]] return; }
L_001F4AE4:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B04u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4B04u) [[unlikely]] return; }
L_001F4B04:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B28u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4B28u) [[unlikely]] return; }
L_001F4B28:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B44u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4B44u) [[unlikely]] return; }
L_001F4B44:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4B90u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4B90u) [[unlikely]] return; }
L_001F4B90:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 112u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4BB0u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F4BB0u) [[unlikely]] return; }
L_001F4BB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F4BFC:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C48u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4C48u) [[unlikely]] return; }
L_001F4C48:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C68u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4C68u) [[unlikely]] return; }
L_001F4C68:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 900u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4C8Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4C8Cu) [[unlikely]] return; }
L_001F4C8C:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4CA8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4CA8u) [[unlikely]] return; }
L_001F4CA8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4CF4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4CF4u) [[unlikely]] return; }
L_001F4CF4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 116u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4D14u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F4D14u) [[unlikely]] return; }
L_001F4D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F4D60:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4DACu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4DACu) [[unlikely]] return; }
L_001F4DAC:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4DDCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4DDCu) [[unlikely]] return; }
L_001F4DDC:
    set32(c.r[6], ld32((c.r[18].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.r[18].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E04u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4E04u) [[unlikely]] return; }
L_001F4E04:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E20u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4E20u) [[unlikely]] return; }
L_001F4E20:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E64u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4E64u) [[unlikely]] return; }
L_001F4E64:
    set32(c.r[2], c.r[29].w[0] + 48u);
    set32(c.r[9], c.r[29].w[0] + 120u);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[19].d[0] = c.r[9].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4E90u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F4E90u) [[unlikely]] return; }
L_001F4E90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F4EDC; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F4EDC; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F4EDC:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F28u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4F28u) [[unlikely]] return; }
L_001F4F28:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F44u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4F44u) [[unlikely]] return; }
L_001F4F44:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F68u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F4F68u) [[unlikely]] return; }
L_001F4F68:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4F84u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4F84u) [[unlikely]] return; }
L_001F4F84:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FC4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F4FC4u) [[unlikely]] return; }
L_001F4FC4:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F4FE4u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F4FE4u) [[unlikely]] return; }
L_001F4FE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F5030; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5030; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F5030:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F507Cu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F507Cu) [[unlikely]] return; }
L_001F507C:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5098u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F5098u) [[unlikely]] return; }
L_001F5098:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50BCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F50BCu) [[unlikely]] return; }
L_001F50BC:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F50D8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F50D8u) [[unlikely]] return; }
L_001F50D8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5118u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F5118u) [[unlikely]] return; }
L_001F5118:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5138u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F5138u) [[unlikely]] return; }
L_001F5138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F5184; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F5184; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F5184:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F51D0u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F51D0u) [[unlikely]] return; }
L_001F51D0:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F51ECu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F51ECu) [[unlikely]] return; }
L_001F51EC:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5210u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F5210u) [[unlikely]] return; }
L_001F5210:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F522Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F522Cu) [[unlikely]] return; }
L_001F522C:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F526Cu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F526Cu) [[unlikely]] return; }
L_001F526C:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F528Cu);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F528Cu) [[unlikely]] return; }
L_001F528C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F52D8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F52D8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F52D8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5324u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F5324u) [[unlikely]] return; }
L_001F5324:
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5340u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F5340u) [[unlikely]] return; }
L_001F5340:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5364u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F5364u) [[unlikely]] return; }
L_001F5364:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5380u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F5380u) [[unlikely]] return; }
L_001F5380:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F53C0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F53C0u) [[unlikely]] return; }
L_001F53C0:
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[22].d[0] + 0ull;
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[8], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F53E0u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F53E0u) [[unlikely]] return; }
L_001F53E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F542C:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5478u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F5478u) [[unlikely]] return; }
L_001F5478:
    set32(c.r[18], c.r[29].w[0] + 16u);
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.f[15] = c.f[20];
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5498u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F5498u) [[unlikely]] return; }
L_001F5498:
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], 0u - 500u);
    set32(c.r[10], 0u + 1u);
    c.r[4].d[0] = c.r[23].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54BCu);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x001F54BCu) [[unlikely]] return; }
L_001F54BC:
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[15] = c.f[20];
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F54D8u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F54D8u) [[unlikely]] return; }
L_001F54D8:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5524u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F5524u) [[unlikely]] return; }
L_001F5524:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 48u);
    set32(c.r[8], 0u + 3u);
    set32(c.r[9], c.r[29].w[0] + 124u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F5544u);  if (depth < kMaxDepth) unit_0045(c, 84u, depth + 1u); else { c.pc = 0x00215A08u; return; } if (c.pc != 0x001F5544u) [[unlikely]] return; }
L_001F5544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.f[1] = ld32((c.r[2].w[0] + 10136u));
    c.f[1] = fp::mul(c.f[1], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001F55C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 124u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F55C8; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 52u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55AC; } }
L_001F5590:
    set32(c.r[4], ld32((c.r[29].w[0] + 132u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[1] = ld32((c.r[29].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[2] = ld32((c.r[29].w[0] + 4u));
    set32(c.r[3], c.r[3].w[0] - 6624u);
    c.f[0] = ld32((c.r[29].w[0] + 8u));
    c.budget -= 7;
L_001F55AC:
    st32((c.r[2].w[0] - 6096u), c.r[4].w[0]);
    set32(c.r[2], 0u + 2u);
    st32((c.r[3].w[0] + 136u), c.f[0]);
    st32((c.r[3].w[0] + 128u), c.f[1]);
    st32((c.r[3].w[0] + 132u), c.f[2]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F55CC; } }
L_001F55C8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001F55CC:
    ld128((c.r[29].w[0] + 288u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 272u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 256u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 240u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 224u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 208u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 192u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 176u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[30]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.f[20] = ld32((c.r[29].w[0] + 304u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F5608:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[11], c.r[3].w[0] + 14208u);
    set32(c.r[9], c.r[2].w[0] - 26680u);
    c.r[10].d[0] = 0ull + 0ull;
    c.r[3].d[0] = 0ull + 0ull;
    c.r[12].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[13], 0u + 13248u);
    c.budget -= 8;
L_001F5628:
    set32(c.r[8], c.r[3].w[0] + 1u);
    c.r[5].d[0] = 0ull + 0ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[13].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[11].w[0] + 13248u);
    set32(c.r[3], c.r[2].w[0] + c.r[11].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 10;
L_001F5650:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F5684; } }
    c.r[10].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 13248u);
    c.r[2].d[0] = c.r[5].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5650u | kUnwind; return; } goto L_001F5650; } }
L_001F5684:
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5628u | kUnwind; return; } goto L_001F5628; } }
    set32(c.r[2], 0u + 30u);
    c.budget -= 3;
    { const bool t = c.r[10].d[0] != c.r[2].d[0];  if (t) { goto L_001F56DC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4E10000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[12].w[0] + 4864u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC5890000u);
    c.r[1].d[0] = c.r[1].d[0] | 32768ull;
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[1].d[0] = c.r[1].d[0] | 13107ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43E60000u);
    c.f[5] = c.r[1].w[0];
    c.budget -= 15;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F570C; } }
L_001F56DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3960000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[12].w[0] + 4864u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC6610000u);
    c.f[2] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[1].d[0] = c.r[1].d[0] | 39322ull;
    c.f[3] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[4] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43820000u);
    c.f[5] = c.r[1].w[0];
    c.budget -= 12;
L_001F570C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43960000u);
    c.f[6] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[7] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x43200000u);
    c.f[8] = c.r[1].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC3AA0000u);
    c.f[0] = c.r[1].w[0];
    st32((c.r[12].w[0] + 4864u), c.f[1]);
    st32((c.r[2].w[0] + 32u), c.f[0]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[3]);
    st32((c.r[2].w[0] + 12u), c.f[4]);
    st32((c.r[2].w[0] + 16u), c.f[5]);
    st32((c.r[2].w[0] + 20u), c.f[6]);
    st32((c.r[2].w[0] + 24u), c.f[7]);
    st32((c.r[2].w[0] + 28u), c.f[8]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F5758:
    set32(c.r[29], c.r[29].w[0] - 496u);
    st128((c.r[29].w[0] + 352u) & ~15u, c.r[30]);
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[30].w[0] + 756u);
    set32(c.r[3], c.r[30].w[0] + 784u);
    set32(c.r[4], c.r[30].w[0] + 812u);
    set32(c.r[5], c.r[30].w[0] + 840u);
    set32(c.r[6], c.r[30].w[0] + 868u);
    set32(c.r[7], c.r[30].w[0] + 896u);
    st32((c.r[29].w[0] + 252u), c.r[2].w[0]);
    set32(c.r[8], c.r[30].w[0] + 924u);
    st32((c.r[29].w[0] + 276u), c.r[3].w[0]);
    set32(c.r[9], c.r[30].w[0] + 952u);
    st32((c.r[29].w[0] + 300u), c.r[4].w[0]);
    set32(c.r[10], c.r[30].w[0] + 3052u);
    st32((c.r[29].w[0] + 324u), c.r[5].w[0]);
    set32(c.r[2], c.r[30].w[0] + 980u);
    st32((c.r[29].w[0] + 348u), c.r[6].w[0]);
    set32(c.r[3], c.r[30].w[0] + 1008u);
    st32((c.r[29].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[4], c.r[30].w[0] + 1036u);
    st32((c.r[29].w[0] + 44u), c.r[8].w[0]);
    set32(c.r[5], c.r[30].w[0] + 1064u);
    set32(c.r[6], c.r[30].w[0] + 1092u);
    set32(c.r[7], c.r[30].w[0] + 1120u);
    st32((c.r[29].w[0] + 68u), c.r[9].w[0]);
    set32(c.r[8], c.r[30].w[0] + 1148u);
    st32((c.r[29].w[0] + 120u), c.r[10].w[0]);
    set32(c.r[9], c.r[30].w[0] + 1176u);
    st32((c.r[29].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[10], c.r[30].w[0] + 1204u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + 1232u);
    st32((c.r[29].w[0] + 140u), c.r[4].w[0]);
    set32(c.r[3], c.r[30].w[0] + 1260u);
    st32((c.r[29].w[0] + 164u), c.r[5].w[0]);
    set32(c.r[4], c.r[30].w[0] + 1288u);
    st32((c.r[29].w[0] + 188u), c.r[6].w[0]);
    set32(c.r[5], c.r[30].w[0] + 1316u);
    st32((c.r[29].w[0] + 212u), c.r[7].w[0]);
    set32(c.r[6], c.r[30].w[0] + 1344u);
    st32((c.r[29].w[0] + 236u), c.r[8].w[0]);
    set32(c.r[7], c.r[30].w[0] + 1372u);
    st32((c.r[29].w[0] + 264u), c.r[9].w[0]);
    set32(c.r[8], c.r[30].w[0] + 1400u);
    st32((c.r[29].w[0] + 288u), c.r[10].w[0]);
    set32(c.r[9], c.r[30].w[0] + 1428u);
    st32((c.r[29].w[0] + 312u), c.r[2].w[0]);
    set32(c.r[10], c.r[30].w[0] + 1456u);
    st32((c.r[29].w[0] + 336u), c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + 1484u);
    st32((c.r[29].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[3], c.r[30].w[0] + 1512u);
    st32((c.r[29].w[0] + 32u), c.r[5].w[0]);
    set32(c.r[4], c.r[30].w[0] + 1540u);
    st32((c.r[29].w[0] + 56u), c.r[6].w[0]);
    set32(c.r[5], c.r[30].w[0] + 1568u);
    st32((c.r[29].w[0] + 80u), c.r[7].w[0]);
    set32(c.r[6], c.r[30].w[0] + 1596u);
    st128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    set32(c.r[7], c.r[30].w[0] + 1624u);
    st128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    set32(c.r[14], c.r[30].w[0] + 728u);
    st128((c.r[29].w[0] + 432u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 416u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 400u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 384u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 368u) & ~15u, c.r[23]);
    st32((c.r[29].w[0] + 104u), c.r[8].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[9].w[0]);
    set32(c.r[8], c.r[30].w[0] + 1652u);
    st32((c.r[29].w[0] + 152u), c.r[10].w[0]);
    set32(c.r[9], c.r[30].w[0] + 1680u);
    st32((c.r[29].w[0] + 176u), c.r[2].w[0]);
    set32(c.r[10], c.r[30].w[0] + 1708u);
    st32((c.r[29].w[0] + 200u), c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + 1736u);
    st32((c.r[29].w[0] + 224u), c.r[4].w[0]);
    set32(c.r[3], c.r[30].w[0] + 1764u);
    st32((c.r[29].w[0] + 248u), c.r[5].w[0]);
    set32(c.r[4], c.r[30].w[0] + 1792u);
    st32((c.r[29].w[0] + 272u), c.r[6].w[0]);
    set32(c.r[5], c.r[30].w[0] + 1820u);
    st32((c.r[29].w[0] + 296u), c.r[7].w[0]);
    set32(c.r[6], c.r[30].w[0] + 1848u);
    st32((c.r[29].w[0] + 320u), c.r[8].w[0]);
    set32(c.r[7], c.r[30].w[0] + 1876u);
    st32((c.r[29].w[0] + 344u), c.r[9].w[0]);
    set32(c.r[8], c.r[30].w[0] + 1904u);
    st32((c.r[29].w[0] + 16u), c.r[10].w[0]);
    set32(c.r[9], c.r[30].w[0] + 3080u);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[10], c.r[30].w[0] + 3108u);
    st32((c.r[29].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + 3136u);
    st32((c.r[29].w[0] + 88u), c.r[4].w[0]);
    set32(c.r[3], c.r[30].w[0] + 3164u);
    st32((c.r[29].w[0] + 112u), c.r[5].w[0]);
    set32(c.r[4], c.r[30].w[0] + 3192u);
    st32((c.r[29].w[0] + 136u), c.r[6].w[0]);
    set32(c.r[5], c.r[30].w[0] + 1932u);
    st32((c.r[29].w[0] + 160u), c.r[7].w[0]);
    set32(c.r[6], c.r[30].w[0] + 1960u);
    st32((c.r[29].w[0] + 184u), c.r[8].w[0]);
    set32(c.r[7], c.r[30].w[0] + 2968u);
    st32((c.r[29].w[0] + 144u), c.r[9].w[0]);
    set32(c.r[8], c.r[30].w[0] + 2996u);
    st32((c.r[29].w[0] + 168u), c.r[10].w[0]);
    set32(c.r[9], c.r[30].w[0] + 1988u);
    st32((c.r[29].w[0] + 192u), c.r[2].w[0]);
    set32(c.r[10], c.r[30].w[0] + 2016u);
    st32((c.r[29].w[0] + 216u), c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + 2044u);
    st32((c.r[29].w[0] + 240u), c.r[4].w[0]);
    set32(c.r[3], c.r[30].w[0] + 2072u);
    st32((c.r[29].w[0] + 208u), c.r[5].w[0]);
    set32(c.r[4], c.r[30].w[0] + 2100u);
    st32((c.r[29].w[0] + 232u), c.r[6].w[0]);
    set32(c.r[5], c.r[30].w[0] + 2128u);
    st32((c.r[29].w[0] + 48u), c.r[7].w[0]);
    set32(c.r[6], c.r[30].w[0] + 2156u);
    st32((c.r[29].w[0] + 72u), c.r[8].w[0]);
    set32(c.r[7], c.r[30].w[0] + 2184u);
    st32((c.r[29].w[0] + 260u), c.r[9].w[0]);
    set32(c.r[8], c.r[30].w[0] + 2212u);
    st32((c.r[29].w[0] + 284u), c.r[10].w[0]);
    set32(c.r[9], c.r[30].w[0] + 2240u);
    st32((c.r[29].w[0] + 308u), c.r[2].w[0]);
    set32(c.r[10], c.r[30].w[0] + 2268u);
    st32((c.r[29].w[0] + 332u), c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + 2296u);
    st32((c.r[29].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[3], c.r[30].w[0] + 2324u);
    st32((c.r[29].w[0] + 28u), c.r[5].w[0]);
    set32(c.r[4], c.r[30].w[0] + 2352u);
    st32((c.r[29].w[0] + 52u), c.r[6].w[0]);
    set32(c.r[5], c.r[30].w[0] + 2380u);
    st32((c.r[29].w[0] + 76u), c.r[7].w[0]);
    set32(c.r[6], c.r[30].w[0] + 2408u);
    st32((c.r[29].w[0] + 100u), c.r[8].w[0]);
    set32(c.r[7], c.r[30].w[0] + 2436u);
    set32(c.r[8], c.r[30].w[0] + 2464u);
    st32((c.r[29].w[0] + 124u), c.r[9].w[0]);
    set32(c.r[9], c.r[30].w[0] + 2492u);
    st32((c.r[29].w[0] + 148u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    set32(c.r[10], c.r[30].w[0] + 2520u);
    st32((c.r[29].w[0] + 196u), c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + 2548u);
    st32((c.r[29].w[0] + 220u), c.r[4].w[0]);
    set32(c.r[3], c.r[30].w[0] + 2576u);
    st32((c.r[29].w[0] + 244u), c.r[5].w[0]);
    set32(c.r[4], c.r[30].w[0] + 2604u);
    st32((c.r[29].w[0] + 268u), c.r[6].w[0]);
    set32(c.r[5], c.r[30].w[0] + 2632u);
    st32((c.r[29].w[0] + 292u), c.r[7].w[0]);
    set32(c.r[6], c.r[30].w[0] + 2660u);
    st32((c.r[29].w[0] + 316u), c.r[8].w[0]);
    set32(c.r[7], c.r[30].w[0] + 2688u);
    set32(c.r[8], c.r[30].w[0] + 2716u);
    st32((c.r[29].w[0] + 340u), c.r[9].w[0]);
    set32(c.r[9], c.r[30].w[0] + 2744u);
    st32((c.r[29].w[0] + 12u), c.r[10].w[0]);
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[10], c.r[30].w[0] + 2772u);
    st32((c.r[29].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], c.r[30].w[0] + 2800u);
    st32((c.r[29].w[0] + 84u), c.r[4].w[0]);
    set32(c.r[3], c.r[30].w[0] + 2828u);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    set32(c.r[4], c.r[30].w[0] + 2856u);
    st32((c.r[29].w[0] + 132u), c.r[6].w[0]);
    set32(c.r[5], c.r[30].w[0] + 2884u);
    st32((c.r[29].w[0] + 156u), c.r[7].w[0]);
    set32(c.r[6], c.r[30].w[0] + 2912u);
    st32((c.r[29].w[0] + 180u), c.r[8].w[0]);
    set32(c.r[7], c.r[30].w[0] + 2940u);
    st32((c.r[29].w[0] + 204u), c.r[9].w[0]);
    set32(c.r[8], c.r[30].w[0] + 3024u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00780000u);
    st32((c.r[29].w[0] + 280u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[29].w[0] + 304u), c.r[4].w[0]);
    set32(c.r[3], 0u + 90u);
    st32((c.r[29].w[0] + 24u), c.r[7].w[0]);
    set32(c.r[4], 0u - 1u);
    st32((c.r[29].w[0] + 228u), c.r[10].w[0]);
    set32(c.r[7], c.r[9].w[0] - 2360u);
    st32((c.r[29].w[0] + 328u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[6].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[8].w[0]);
    c.budget -= 194;
L_001F5A60:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[6], c.r[2].w[0] + 8u);
    set32(c.r[5], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[7].w[0] + 352u);
    set32(c.r[3], 0u + 88u);
    c.budget -= 6;
L_001F5A78:
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5A78u | kUnwind; return; } goto L_001F5A78; } }
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5A60u | kUnwind; return; } goto L_001F5A60; } }
    c.r[2].d[0] = c.r[14].d[0] + 0ull;
    set32(c.r[3], 0u + 88u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_001F5AB0:
    st32((c.r[2].w[0] + 12u), c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 16u), 0u);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    set32(c.r[2], c.r[2].w[0] + 28u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F5AB0u | kUnwind; return; } goto L_001F5AB0; } }
    set32(c.r[2], 0u + 198u);
    set32(c.r[5], 0u + 569u);
    st32((c.r[30].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], 0u + 592u);
    set32(c.r[2], 0u + 637u);
    set32(c.r[7], 0u + 626u);
    st32((c.r[30].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[9], 0u + 1213u);
    set32(c.r[2], 0u + 728u);
    st32((c.r[30].w[0] + 28u), c.r[5].w[0]);
    st32((c.r[30].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[10], 0u + 1201u);
    set32(c.r[2], 0u + 749u);
    st32((c.r[30].w[0] + 36u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[3], 0u + 378u);
    set32(c.r[2], 0u + 769u);
    st32((c.r[30].w[0] + 60u), c.r[7].w[0]);
    st32((c.r[30].w[0] + 116u), c.r[2].w[0]);
    set32(c.r[4], 0u + 541u);
    set32(c.r[2], 0u + 803u);
    st32((c.r[30].w[0] + 300u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 124u), c.r[2].w[0]);
    set32(c.r[25], 0u + 1078u);
    set32(c.r[2], 0u + 830u);
    st32((c.r[30].w[0] + 292u), c.r[10].w[0]);
    st32((c.r[30].w[0] + 132u), c.r[2].w[0]);
    set32(c.r[24], 0u + 1095u);
    set32(c.r[2], 0u + 862u);
    set32(c.r[23], 0u + 1111u);
    st32((c.r[30].w[0] + 140u), c.r[2].w[0]);
    set32(c.r[15], 0u + 1135u);
    set32(c.r[2], 0u + 878u);
    set32(c.r[13], 0u + 1149u);
    st32((c.r[30].w[0] + 148u), c.r[2].w[0]);
    set32(c.r[12], 0u + 1162u);
    set32(c.r[2], 0u + 902u);
    set32(c.r[11], 0u + 1182u);
    st32((c.r[30].w[0] + 156u), c.r[2].w[0]);
    set32(c.r[5], 0u + 662u);
    set32(c.r[2], 0u + 927u);
    set32(c.r[6], 0u + 691u);
    st32((c.r[30].w[0] + 164u), c.r[2].w[0]);
    set32(c.r[7], 0u + 708u);
    set32(c.r[2], 0u + 982u);
    set32(c.r[9], 0u + 1228u);
    st32((c.r[30].w[0] + 196u), c.r[2].w[0]);
    set32(c.r[8], 0u + 1246u);
    set32(c.r[2], 0u + 1013u);
    st32((c.r[30].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 212u), c.r[2].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[2], 0u + 1034u);
    st32((c.r[30].w[0] + 20u), c.r[4].w[0]);
    st32((c.r[30].w[0] + 220u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1253u);
    set32(c.r[2], 0u + 1066u);
    st32((c.r[30].w[0] + 76u), c.r[5].w[0]);
    st32((c.r[30].w[0] + 84u), c.r[6].w[0]);
    set32(c.r[4], 0u + 1265u);
    st32((c.r[30].w[0] + 92u), c.r[7].w[0]);
    set32(c.r[5], 0u + 1330u);
    st32((c.r[30].w[0] + 228u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1356u);
    st32((c.r[30].w[0] + 236u), c.r[25].w[0]);
    set32(c.r[2], c.r[10].w[0] - 2360u);
    st32((c.r[30].w[0] + 244u), c.r[24].w[0]);
    set32(c.r[10], 0u + 1466u);
    st32((c.r[30].w[0] + 252u), c.r[23].w[0]);
    set32(c.r[7], 0u + 1428u);
    st32((c.r[30].w[0] + 260u), c.r[15].w[0]);
    set32(c.r[22], 0u + 1997u);
    st32((c.r[30].w[0] + 268u), c.r[13].w[0]);
    set32(c.r[21], 0u + 2164u);
    st32((c.r[30].w[0] + 276u), c.r[12].w[0]);
    set32(c.r[20], 0u + 2302u);
    st32((c.r[30].w[0] + 284u), c.r[11].w[0]);
    set32(c.r[19], 0u + 2481u);
    st32((c.r[30].w[0] + 332u), c.r[9].w[0]);
    set32(c.r[18], 0u + 2519u);
    st32((c.r[30].w[0] + 356u), c.r[8].w[0]);
    set32(c.r[9], 0u + 1817u);
    set32(c.r[8], 0u + 1783u);
    st32((c.r[30].w[0] + 452u), c.r[10].w[0]);
    st32((c.r[30].w[0] + 540u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1856u);
    set32(c.r[8], 0u + 1904u);
    st32((c.r[30].w[0] + 548u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 556u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1952u);
    st32((c.r[30].w[0] + 572u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1962u);
    set32(c.r[8], 0u + 1976u);
    st32((c.r[30].w[0] + 364u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 372u), c.r[4].w[0]);
    set32(c.r[17], 0u + 2689u);
    st32((c.r[30].w[0] + 396u), c.r[5].w[0]);
    set32(c.r[16], 0u + 2834u);
    st32((c.r[30].w[0] + 420u), c.r[6].w[0]);
    set32(c.r[3], 0u + 1547u);
    st32((c.r[30].w[0] + 444u), c.r[7].w[0]);
    set32(c.r[4], 0u + 1565u);
    st32((c.r[30].w[0] + 612u), c.r[9].w[0]);
    set32(c.r[5], 0u + 1609u);
    st32((c.r[30].w[0] + 620u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1285u);
    st32((c.r[30].w[0] + 652u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1515u);
    set32(c.r[6], 0u + 1703u);
    set32(c.r[7], 0u + 1748u);
    set32(c.r[8], 0u + 1675u);
    st32((c.r[30].w[0] + 468u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 476u), c.r[4].w[0]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[30].w[0] + 500u), c.r[5].w[0]);
    set32(c.r[4], 0u + 199u);
    st32((c.r[30].w[0] + 524u), c.r[6].w[0]);
    set32(c.r[5], 0u + 379u);
    st32((c.r[30].w[0] + 532u), c.r[7].w[0]);
    set32(c.r[6], 0u + 2520u);
    st32((c.r[30].w[0] + 660u), c.r[22].w[0]);
    set32(c.r[7], 0u + 2835u);
    st32((c.r[30].w[0] + 668u), c.r[21].w[0]);
    st32((c.r[30].w[0] + 676u), c.r[20].w[0]);
    st32((c.r[30].w[0] + 692u), c.r[19].w[0]);
    st32((c.r[30].w[0] + 708u), c.r[18].w[0]);
    st32((c.r[30].w[0] + 716u), c.r[17].w[0]);
    st32((c.r[30].w[0] + 724u), c.r[16].w[0]);
    st32((c.r[30].w[0] + 380u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 460u), c.r[10].w[0]);
    st32((c.r[30].w[0] + 516u), c.r[8].w[0]);
    st32((c.r[30].w[0] + 436u), 0u);
    set32(c.r[8], 0u + 2662u);
    st32((c.r[30].w[0] + 596u), 0u);
    st32((c.r[2].w[0] + 332u), c.r[9].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1676u);
    st32((c.r[2].w[0] + 40u), c.r[9].w[0]);
    set32(c.r[10], 0u + 1516u);
    st32((c.r[2].w[0] + 156u), c.r[10].w[0]);
    set32(c.r[9], 0u + 138u);
    st32((c.r[2].w[0] + 324u), c.r[8].w[0]);
    set32(c.r[10], 0u + 170u);
    st32((c.r[2].w[0] + 336u), c.r[9].w[0]);
    set32(c.r[8], 0u + 153u);
    st32((c.r[2].w[0] + 340u), c.r[10].w[0]);
    set32(c.r[9], 0u + 159u);
    st32((c.r[2].w[0] + 348u), c.r[8].w[0]);
    set32(c.r[10], 0u + 519u);
    st32((c.r[2].w[0] + 352u), c.r[9].w[0]);
    set32(c.r[8], 0u + 354u);
    st32((c.r[2].w[0] + 172u), c.r[10].w[0]);
    set32(c.r[9], 0u + 2141u);
    st32((c.r[2].w[0] + 176u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1515u);
    st32((c.r[2].w[0] + 320u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1676u);
    st32((c.r[2].w[0] + 160u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1998u);
    st32((c.r[2].w[0] + 164u), c.r[10].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[8].w[0]);
    set32(c.r[10], 0u + 2690u);
    st32((c.r[30].w[0] + 1256u), c.r[4].w[0]);
    set32(c.r[8], 0u + 197u);
    st32((c.r[30].w[0] + 1312u), c.r[5].w[0]);
    set32(c.r[2], 0u + 393u);
    st32((c.r[30].w[0] + 2096u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 2264u), c.r[7].w[0]);
    st32((c.r[30].w[0] + 752u), c.r[4].w[0]);
    st32((c.r[30].w[0] + 780u), c.r[5].w[0]);
    st32((c.r[30].w[0] + 976u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 1060u), c.r[5].w[0]);
    st32((c.r[30].w[0] + 1088u), c.r[5].w[0]);
    st32((c.r[30].w[0] + 1116u), c.r[4].w[0]);
    st32((c.r[30].w[0] + 1144u), c.r[4].w[0]);
    st32((c.r[30].w[0] + 1228u), c.r[4].w[0]);
    st32((c.r[30].w[0] + 1284u), c.r[5].w[0]);
    set32(c.r[4], 0u + 2479u);
    st32((c.r[30].w[0] + 2012u), c.r[6].w[0]);
    set32(c.r[5], 0u + 1282u);
    st32((c.r[30].w[0] + 2040u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 2068u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 2152u), c.r[7].w[0]);
    set32(c.r[6], 0u + 2165u);
    st32((c.r[30].w[0] + 2180u), c.r[7].w[0]);
    st32((c.r[30].w[0] + 2208u), c.r[7].w[0]);
    st32((c.r[30].w[0] + 2236u), c.r[7].w[0]);
    st32((c.r[30].w[0] + 2320u), c.r[9].w[0]);
    set32(c.r[7], 0u + 2303u);
    st32((c.r[30].w[0] + 2348u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 2376u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 2432u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 2600u), c.r[10].w[0]);
    set32(c.r[9], 0u + 377u);
    set32(c.r[10], 0u + 2518u);
    st32((c.r[30].w[0] + 2768u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 2936u), c.r[7].w[0]);
    set32(c.r[6], 0u + 2833u);
    st32((c.r[30].w[0] + 748u), c.r[8].w[0]);
    set32(c.r[7], 0u + 1996u);
    st32((c.r[30].w[0] + 776u), c.r[9].w[0]);
    set32(c.r[8], 0u + 2687u);
    st32((c.r[30].w[0] + 972u), c.r[10].w[0]);
    set32(c.r[9], 0u + 2163u);
    set32(c.r[10], 0u + 2301u);
    st32((c.r[30].w[0] + 2148u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 2316u), c.r[7].w[0]);
    set32(c.r[6], 0u + 1998u);
    st32((c.r[30].w[0] + 2484u), c.r[8].w[0]);
    set32(c.r[7], 0u + 2690u);
    st32((c.r[30].w[0] + 2652u), c.r[9].w[0]);
    set32(c.r[8], 0u + 2165u);
    st32((c.r[30].w[0] + 2820u), c.r[10].w[0]);
    set32(c.r[9], 0u + 2303u);
    set32(c.r[10], 0u + 1973u);
    st32((c.r[30].w[0] + 2404u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 2488u), c.r[7].w[0]);
    set32(c.r[6], 0u + 1u);
    st32((c.r[30].w[0] + 2516u), c.r[7].w[0]);
    st32((c.r[30].w[0] + 2544u), c.r[7].w[0]);
    st32((c.r[30].w[0] + 2572u), c.r[7].w[0]);
    st32((c.r[30].w[0] + 2656u), c.r[8].w[0]);
    set32(c.r[7], 0u + 83u);
    st32((c.r[30].w[0] + 2684u), c.r[8].w[0]);
    st32((c.r[30].w[0] + 2712u), c.r[8].w[0]);
    st32((c.r[30].w[0] + 2740u), c.r[8].w[0]);
    st32((c.r[30].w[0] + 2824u), c.r[9].w[0]);
    set32(c.r[8], 0u + 9u);
    st32((c.r[30].w[0] + 2852u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 2880u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 2908u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 3048u), c.r[10].w[0]);
    set32(c.r[9], 0u + 10u);
    st32((c.r[30].w[0] + 3044u), c.r[10].w[0]);
    st32((c.r[30].w[0] + 1048u), c.r[3].w[0]);
    set32(c.r[10], 0u + 3u);
    st32((c.r[30].w[0] + 1132u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 1216u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 1300u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2056u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2084u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2224u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 376u), c.r[7].w[0]);
    set32(c.r[6], 0u + 4u);
    st32((c.r[30].w[0] + 456u), c.r[8].w[0]);
    set32(c.r[7], 0u + 5u);
    st32((c.r[30].w[0] + 512u), c.r[9].w[0]);
    set32(c.r[8], 0u + 6u);
    st32((c.r[30].w[0] + 528u), c.r[10].w[0]);
    set32(c.r[9], 0u + 82u);
    st32((c.r[30].w[0] + 536u), c.r[6].w[0]);
    set32(c.r[10], 0u + 56u);
    st32((c.r[30].w[0] + 544u), c.r[7].w[0]);
    set32(c.r[6], 0u + 68u);
    st32((c.r[30].w[0] + 568u), c.r[8].w[0]);
    set32(c.r[7], 0u + 74u);
    st32((c.r[30].w[0] + 648u), c.r[9].w[0]);
    set32(c.r[8], 0u + 7u);
    st32((c.r[30].w[0] + 656u), c.r[10].w[0]);
    set32(c.r[9], 0u + 8u);
    st32((c.r[30].w[0] + 664u), c.r[6].w[0]);
    set32(c.r[10], 0u + 62u);
    st32((c.r[30].w[0] + 672u), c.r[7].w[0]);
    set32(c.r[6], 0u + 50u);
    st32((c.r[30].w[0] + 688u), c.r[8].w[0]);
    set32(c.r[7], 0u + 194u);
    st32((c.r[30].w[0] + 704u), c.r[9].w[0]);
    set32(c.r[8], 0u + 196u);
    st32((c.r[30].w[0] + 712u), c.r[10].w[0]);
    set32(c.r[9], 0u + 213u);
    st32((c.r[30].w[0] + 720u), c.r[6].w[0]);
    set32(c.r[10], 0u + 375u);
    st32((c.r[30].w[0] + 728u), c.r[7].w[0]);
    set32(c.r[6], 0u + 376u);
    st32((c.r[30].w[0] + 520u), c.r[3].w[0]);
    set32(c.r[7], 0u + 2850u);
    st32((c.r[30].w[0] + 2252u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2392u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2420u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2560u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2588u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2728u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2756u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2896u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2924u), c.r[3].w[0]);
    st32((c.r[30].w[0]), 0u);
    st32((c.r[14].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[14].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1701u);
    st32((c.r[30].w[0] + 756u), c.r[10].w[0]);
    set32(c.r[10], 0u + 1707u);
    set32(c.r[3], ld32((c.r[29].w[0] + 252u)));
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[30].w[0] + 784u), c.r[8].w[0]);
    set32(c.r[3], 0u + 1747u);
    set32(c.r[9], ld32((c.r[29].w[0] + 276u)));
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[8], 0u + 1752u);
    st32((c.r[30].w[0] + 812u), c.r[3].w[0]);
    set32(c.r[9], 0u + 1782u);
    set32(c.r[6], ld32((c.r[29].w[0] + 300u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[3], 0u + 1787u);
    st32((c.r[30].w[0] + 840u), c.r[9].w[0]);
    set32(c.r[6], 0u + 1815u);
    set32(c.r[10], ld32((c.r[29].w[0] + 324u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[9], 0u + 1816u);
    st32((c.r[30].w[0] + 868u), c.r[6].w[0]);
    set32(c.r[10], 0u + 1902u);
    set32(c.r[8], ld32((c.r[29].w[0] + 348u)));
    st32((c.r[8].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[6], 0u + 2012u);
    st32((c.r[30].w[0] + 896u), c.r[10].w[0]);
    set32(c.r[8], 0u + 1903u);
    set32(c.r[3], ld32((c.r[29].w[0] + 20u)));
    st32((c.r[3].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[10], 0u + 2480u);
    st32((c.r[30].w[0] + 924u), c.r[4].w[0]);
    set32(c.r[3], 0u + 2515u);
    set32(c.r[8], 0u + 2517u);
    set32(c.r[9], ld32((c.r[29].w[0] + 44u)));
    st32((c.r[9].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[30].w[0] + 952u), c.r[3].w[0]);
    set32(c.r[9], 0u + 2534u);
    set32(c.r[3], 0u + 1285u);
    set32(c.r[4], ld32((c.r[29].w[0] + 68u)));
    st32((c.r[4].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 1515u);
    st32((c.r[30].w[0] + 3052u), c.r[5].w[0]);
    set32(c.r[4], 0u + 1512u);
    set32(c.r[10], ld32((c.r[29].w[0] + 120u)));
    st32((c.r[10].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2706u);
    st32((c.r[30].w[0] + 980u), c.r[4].w[0]);
    set32(c.r[10], 0u + 1672u);
    set32(c.r[8], ld32((c.r[29].w[0] + 92u)));
    st32((c.r[8].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[4], 0u + 1675u);
    st32((c.r[30].w[0] + 1008u), c.r[10].w[0]);
    set32(c.r[8], 0u + 389u);
    set32(c.r[3], ld32((c.r[29].w[0] + 116u)));
    st32((c.r[3].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[10], 0u + 390u);
    st32((c.r[30].w[0] + 1036u), c.r[8].w[0]);
    set32(c.r[3], 0u + 385u);
    set32(c.r[8], 0u + 386u);
    set32(c.r[9], ld32((c.r[29].w[0] + 140u)));
    st32((c.r[9].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[30].w[0] + 1064u), c.r[3].w[0]);
    set32(c.r[9], 0u + 211u);
    set32(c.r[3], 0u + 212u);
    set32(c.r[4], ld32((c.r[29].w[0] + 164u)));
    st32((c.r[4].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[8], 0u + 213u);
    st32((c.r[30].w[0] + 1092u), c.r[9].w[0]);
    set32(c.r[4], 0u + 2180u);
    set32(c.r[9], 0u + 209u);
    set32(c.r[10], ld32((c.r[29].w[0] + 188u)));
    st32((c.r[10].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[3], 0u + 210u);
    st32((c.r[30].w[0] + 1120u), c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 212u)));
    st32((c.r[10].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[8], 0u + 277u);
    st32((c.r[30].w[0] + 1148u), c.r[8].w[0]);
    set32(c.r[10], 0u + 279u);
    set32(c.r[3], 0u + 213u);
    set32(c.r[8], 0u + 467u);
    set32(c.r[9], ld32((c.r[29].w[0] + 236u)));
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[10], 0u + 469u);
    st32((c.r[30].w[0] + 1176u), c.r[8].w[0]);
    set32(c.r[3], 0u + 207u);
    set32(c.r[9], ld32((c.r[29].w[0] + 264u)));
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[10], 0u + 213u);
    st32((c.r[30].w[0] + 1204u), c.r[3].w[0]);
    set32(c.r[9], 0u + 208u);
    set32(c.r[3], 0u + 2317u);
    set32(c.r[8], ld32((c.r[29].w[0] + 288u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    set32(c.r[8], 0u + 205u);
    st32((c.r[30].w[0] + 1232u), c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 312u)));
    set32(c.r[8], 0u + 387u);
    st32((c.r[9].w[0] + 8u), c.r[10].w[0]);
    set32(c.r[10], 0u + 206u);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[30].w[0] + 1260u), c.r[8].w[0]);
    set32(c.r[10], 0u + 388u);
    set32(c.r[8], 0u + 391u);
    set32(c.r[9], ld32((c.r[29].w[0] + 336u)));
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[10], 0u + 392u);
    st32((c.r[30].w[0] + 1288u), c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 8u)));
    st32((c.r[9].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[2], 0u + 1905u);
    st32((c.r[30].w[0] + 1316u), c.r[2].w[0]);
    set32(c.r[9], 0u + 1903u);
    set32(c.r[10], 0u + 1906u);
    set32(c.r[8], ld32((c.r[29].w[0] + 32u)));
    st32((c.r[8].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    c.r[2].d[0] = c.r[30].d[0] + 0ull;
    st32((c.r[30].w[0] + 1344u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 56u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1907u);
    st32((c.r[30].w[0] + 1372u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1903u);
    set32(c.r[10], ld32((c.r[29].w[0] + 80u)));
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1816u);
    set32(c.r[9], 0u + 1818u);
    st32((c.r[30].w[0] + 1400u), c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 104u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 1819u);
    st32((c.r[30].w[0] + 1428u), c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 128u)));
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1820u);
    st32((c.r[30].w[0] + 1456u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1816u);
    set32(c.r[9], ld32((c.r[29].w[0] + 152u)));
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[8], 0u + 2482u);
    st32((c.r[30].w[0] + 1484u), c.r[8].w[0]);
    set32(c.r[10], 0u + 2480u);
    set32(c.r[9], ld32((c.r[29].w[0] + 176u)));
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[8], 0u + 2483u);
    st32((c.r[30].w[0] + 1512u), c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 200u)));
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[10], 0u + 2484u);
    st32((c.r[30].w[0] + 1540u), c.r[10].w[0]);
    set32(c.r[9], 0u + 2480u);
    set32(c.r[8], ld32((c.r[29].w[0] + 224u)));
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[10], 0u + 1784u);
    st32((c.r[30].w[0] + 1568u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1787u);
    set32(c.r[8], ld32((c.r[29].w[0] + 248u)));
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[10], 0u + 1785u);
    st32((c.r[30].w[0] + 1596u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 272u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1786u);
    st32((c.r[30].w[0] + 1624u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1787u);
    set32(c.r[10], ld32((c.r[29].w[0] + 296u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 1704u);
    st32((c.r[30].w[0] + 1652u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1707u);
    set32(c.r[10], ld32((c.r[29].w[0] + 320u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 1705u);
    st32((c.r[30].w[0] + 1680u), c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 344u)));
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1706u);
    st32((c.r[30].w[0] + 1708u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1707u);
    set32(c.r[9], ld32((c.r[29].w[0] + 16u)));
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[8], 0u + 1749u);
    st32((c.r[30].w[0] + 1736u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1752u);
    set32(c.r[9], ld32((c.r[29].w[0] + 40u)));
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[8], 0u + 1750u);
    st32((c.r[30].w[0] + 1764u), c.r[8].w[0]);
    set32(c.r[9], ld32((c.r[29].w[0] + 64u)));
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    set32(c.r[10], 0u + 1751u);
    st32((c.r[30].w[0] + 1792u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1752u);
    set32(c.r[8], ld32((c.r[29].w[0] + 88u)));
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[10], 0u + 1514u);
    st32((c.r[30].w[0] + 1820u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1516u);
    set32(c.r[8], ld32((c.r[29].w[0] + 112u)));
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[10], 0u + 1512u);
    st32((c.r[30].w[0] + 1848u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1515u);
    set32(c.r[8], ld32((c.r[29].w[0] + 136u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[30].w[0] + 1876u), c.r[10].w[0]);
    set32(c.r[8], ld32((c.r[29].w[0] + 160u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    set32(c.r[9], 0u + 1674u);
    st32((c.r[30].w[0] + 1904u), c.r[9].w[0]);
    set32(c.r[8], 0u + 1676u);
    set32(c.r[10], ld32((c.r[29].w[0] + 184u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 135u);
    st32((c.r[30].w[0] + 3080u), c.r[9].w[0]);
    set32(c.r[8], 0u + 136u);
    set32(c.r[10], ld32((c.r[29].w[0] + 144u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 167u);
    st32((c.r[30].w[0] + 3108u), c.r[9].w[0]);
    set32(c.r[8], 0u + 168u);
    set32(c.r[10], ld32((c.r[29].w[0] + 168u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 135u);
    st32((c.r[30].w[0] + 3136u), c.r[9].w[0]);
    set32(c.r[8], 0u + 136u);
    set32(c.r[10], ld32((c.r[29].w[0] + 192u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 150u);
    st32((c.r[30].w[0] + 3164u), c.r[9].w[0]);
    set32(c.r[8], 0u + 151u);
    set32(c.r[10], ld32((c.r[29].w[0] + 216u)));
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[8], 0u + 157u);
    set32(c.r[9], 0u + 156u);
    st32((c.r[30].w[0] + 3192u), c.r[9].w[0]);
    set32(c.r[10], ld32((c.r[29].w[0] + 240u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 520u);
    st32((c.r[30].w[0] + 1932u), c.r[9].w[0]);
    set32(c.r[8], 0u + 521u);
    set32(c.r[10], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 355u);
    st32((c.r[30].w[0] + 1960u), c.r[9].w[0]);
    set32(c.r[8], 0u + 356u);
    set32(c.r[10], ld32((c.r[29].w[0] + 232u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 2142u);
    st32((c.r[30].w[0] + 2968u), c.r[9].w[0]);
    set32(c.r[8], 0u + 2143u);
    set32(c.r[10], ld32((c.r[29].w[0] + 48u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 2663u);
    st32((c.r[30].w[0] + 2996u), c.r[9].w[0]);
    set32(c.r[8], 0u + 2664u);
    set32(c.r[10], ld32((c.r[29].w[0] + 72u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 2526u);
    st32((c.r[30].w[0] + 1988u), c.r[9].w[0]);
    set32(c.r[8], 0u + 2527u);
    set32(c.r[10], ld32((c.r[29].w[0] + 260u)));
    set32(c.r[9], 0u + 2534u);
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[9], 0u + 2529u);
    set32(c.r[10], 0u + 2528u);
    st32((c.r[30].w[0] + 2016u), c.r[10].w[0]);
    set32(c.r[10], 0u + 2534u);
    set32(c.r[8], ld32((c.r[29].w[0] + 284u)));
    st32((c.r[8].w[0] + 8u), c.r[10].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[10], 0u + 2531u);
    set32(c.r[8], 0u + 2530u);
    st32((c.r[30].w[0] + 2044u), c.r[8].w[0]);
    set32(c.r[8], 0u + 2534u);
    set32(c.r[9], ld32((c.r[29].w[0] + 308u)));
    st32((c.r[9].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    set32(c.r[8], 0u + 2533u);
    set32(c.r[9], 0u + 2532u);
    st32((c.r[30].w[0] + 2072u), c.r[9].w[0]);
    set32(c.r[9], 0u + 2534u);
    set32(c.r[10], ld32((c.r[29].w[0] + 332u)));
    st32((c.r[10].w[0] + 8u), c.r[9].w[0]);
    st32((c.r[10].w[0] + 4u), c.r[8].w[0]);
    set32(c.r[10], 0u + 2616u);
    st32((c.r[30].w[0] + 2100u), c.r[10].w[0]);
    set32(c.r[10], 0u + 2831u);
    set32(c.r[8], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[8].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[9], 0u + 2618u);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[30].w[0] + 2128u), c.r[10].w[0]);
    set32(c.r[9], 0u + 2832u);
    set32(c.r[10], 0u + 2841u);
    set32(c.r[8], ld32((c.r[29].w[0] + 28u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[9], 0u + 2842u);
    st32((c.r[30].w[0] + 2156u), c.r[10].w[0]);
    set32(c.r[10], 0u + 2848u);
    set32(c.r[8], ld32((c.r[29].w[0] + 52u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[9], 0u + 2849u);
    st32((c.r[30].w[0] + 2184u), c.r[10].w[0]);
    set32(c.r[10], 0u + 2844u);
    set32(c.r[8], ld32((c.r[29].w[0] + 76u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[9], 0u + 2845u);
    st32((c.r[30].w[0] + 2212u), c.r[10].w[0]);
    set32(c.r[10], 0u + 2846u);
    set32(c.r[8], ld32((c.r[29].w[0] + 100u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[9], 0u + 2847u);
    st32((c.r[30].w[0] + 2240u), c.r[10].w[0]);
    set32(c.r[10], 0u + 2943u);
    set32(c.r[8], ld32((c.r[29].w[0] + 124u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[9], 0u + 2946u);
    st32((c.r[30].w[0] + 2268u), c.r[10].w[0]);
    set32(c.r[10], 0u + 1994u);
    set32(c.r[8], ld32((c.r[29].w[0] + 148u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[9], 0u + 2004u);
    st32((c.r[30].w[0] + 2296u), c.r[10].w[0]);
    set32(c.r[8], 0u + 1995u);
    set32(c.r[7], ld32((c.r[29].w[0] + 172u)));
    st32((c.r[7].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[8], 0u + 2006u);
    st32((c.r[30].w[0] + 2324u), c.r[9].w[0]);
    set32(c.r[7], 0u + 2005u);
    set32(c.r[10], ld32((c.r[29].w[0] + 196u)));
    st32((c.r[10].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[7], 0u + 2008u);
    st32((c.r[30].w[0] + 2352u), c.r[8].w[0]);
    set32(c.r[10], 0u + 2007u);
    set32(c.r[9], ld32((c.r[29].w[0] + 220u)));
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[10], 0u + 2010u);
    st32((c.r[30].w[0] + 2380u), c.r[7].w[0]);
    set32(c.r[9], 0u + 2009u);
    set32(c.r[8], ld32((c.r[29].w[0] + 244u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[9], 0u + 2108u);
    st32((c.r[30].w[0] + 2408u), c.r[10].w[0]);
    set32(c.r[8], 0u + 2011u);
    set32(c.r[7], ld32((c.r[29].w[0] + 268u)));
    st32((c.r[7].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 2436u), c.r[9].w[0]);
    set32(c.r[7], 0u + 2684u);
    set32(c.r[9], 0u + 2686u);
    set32(c.r[10], ld32((c.r[29].w[0] + 292u)));
    st32((c.r[10].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[6], 0u + 2110u);
    st32((c.r[10].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 2464u), c.r[7].w[0]);
    set32(c.r[10], 0u + 2696u);
    set32(c.r[8], ld32((c.r[29].w[0] + 316u)));
    set32(c.r[7], 0u + 2697u);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[30].w[0] + 2492u), c.r[10].w[0]);
    set32(c.r[8], 0u + 2698u);
    set32(c.r[10], 0u + 2700u);
    set32(c.r[6], ld32((c.r[29].w[0] + 340u)));
    st32((c.r[6].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[30].w[0] + 2520u), c.r[8].w[0]);
    set32(c.r[6], 0u + 2701u);
    set32(c.r[8], 0u + 2703u);
    set32(c.r[9], ld32((c.r[29].w[0] + 12u)));
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[30].w[0] + 2548u), c.r[6].w[0]);
    set32(c.r[9], 0u + 2704u);
    set32(c.r[6], 0u + 2705u);
    set32(c.r[7], ld32((c.r[29].w[0] + 36u)));
    st32((c.r[7].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[30].w[0] + 2576u), c.r[9].w[0]);
    set32(c.r[7], 0u + 2795u);
    set32(c.r[9], 0u + 2797u);
    set32(c.r[10], ld32((c.r[29].w[0] + 60u)));
    st32((c.r[10].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[6], 0u + 2162u);
    st32((c.r[30].w[0] + 2604u), c.r[7].w[0]);
    set32(c.r[10], 0u + 2161u);
    set32(c.r[7], 0u + 2172u);
    set32(c.r[8], ld32((c.r[29].w[0] + 84u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[5].w[0]);
    set32(c.r[9], 0u + 2173u);
    st32((c.r[30].w[0] + 2632u), c.r[10].w[0]);
    set32(c.r[10], 0u + 2174u);
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[6], 0u + 2175u);
    st32((c.r[30].w[0] + 2660u), c.r[7].w[0]);
    set32(c.r[7], 0u + 2176u);
    set32(c.r[8], ld32((c.r[29].w[0] + 132u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[9], 0u + 2177u);
    st32((c.r[30].w[0] + 2688u), c.r[10].w[0]);
    set32(c.r[10], 0u + 2178u);
    set32(c.r[5], ld32((c.r[29].w[0] + 156u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[6], 0u + 2179u);
    st32((c.r[30].w[0] + 2716u), c.r[7].w[0]);
    set32(c.r[7], 0u + 2265u);
    set32(c.r[8], ld32((c.r[29].w[0] + 180u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[9], 0u + 2267u);
    st32((c.r[30].w[0] + 2744u), c.r[10].w[0]);
    set32(c.r[10], 0u + 2299u);
    set32(c.r[5], ld32((c.r[29].w[0] + 204u)));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[5].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[6], 0u + 2309u);
    st32((c.r[30].w[0] + 2772u), c.r[7].w[0]);
    set32(c.r[5], 0u + 2300u);
    set32(c.r[8], ld32((c.r[29].w[0] + 228u)));
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[8].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[9], 0u + 2315u);
    st32((c.r[30].w[0] + 2800u), c.r[10].w[0]);
    set32(c.r[8], 0u + 2310u);
    set32(c.r[4], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2311u);
    st32((c.r[30].w[0] + 2828u), c.r[6].w[0]);
    set32(c.r[4], 0u + 2316u);
    set32(c.r[7], ld32((c.r[29].w[0] + 280u)));
    st32((c.r[7].w[0] + 4u), c.r[8].w[0]);
    st32((c.r[7].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[8], 0u + 2313u);
    st32((c.r[30].w[0] + 2856u), c.r[9].w[0]);
    set32(c.r[7], 0u + 2312u);
    set32(c.r[10], ld32((c.r[29].w[0] + 304u)));
    st32((c.r[10].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[10].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], 0u + 2382u);
    st32((c.r[30].w[0] + 2884u), c.r[5].w[0]);
    set32(c.r[10], 0u + 2314u);
    set32(c.r[6], ld32((c.r[29].w[0] + 328u)));
    st32((c.r[6].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[7], 0u + 1973u);
    st32((c.r[30].w[0] + 2912u), c.r[8].w[0]);
    set32(c.r[6], 0u + 2384u);
    set32(c.r[9], ld32((c.r[29].w[0])));
    st32((c.r[9].w[0] + 4u), c.r[10].w[0]);
    st32((c.r[9].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[30].w[0] + 2940u), c.r[4].w[0]);
    set32(c.r[9], 0u + 1977u);
    set32(c.r[5], ld32((c.r[29].w[0] + 24u)));
    ld128((c.r[29].w[0] + 480u) & ~15u, c.r[16]);
    st32((c.r[5].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[30].w[0] + 3024u), c.r[7].w[0]);
    ld128((c.r[29].w[0] + 464u) & ~15u, c.r[17]);
    set32(c.r[8], ld32((c.r[29].w[0] + 96u)));
    ld128((c.r[29].w[0] + 448u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 432u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 416u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 400u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 384u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 368u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 352u) & ~15u, c.r[30]);
    st32((c.r[8].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[8].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[29], c.r[29].w[0] + 496u);
    c.budget -= 830;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F67C8:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[2], c.r[2].w[0] - 19888u);
    set32(c.r[4], 0u + 88u);
    set32(c.r[3], c.r[6].w[0] + 352u);
    c.budget -= 6;
L_001F67E0:
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 6;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F67E0u | kUnwind; return; } goto L_001F67E0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], c.r[3].w[0] - 19840u);
    set32(c.r[4], c.r[4].w[0] - 19792u);
    set32(c.r[5], c.r[5].w[0] - 19816u);
    set32(c.r[2], c.r[2].w[0] - 19864u);
    st32((c.r[6].w[0] + 340u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 76u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 84u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 88u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 92u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 100u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 108u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 124u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 128u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 140u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 144u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 148u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 152u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 156u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 160u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 164u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 60u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 48u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 52u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 56u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 180u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 184u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 192u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 196u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 208u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 328u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 312u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 316u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 216u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 232u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 240u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 252u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 256u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 264u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 276u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 280u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 288u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 292u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 300u), c.r[4].w[0]);
    st32((c.r[6].w[0] + 304u), c.r[4].w[0]);
    c.budget -= 59;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F68E8:
    set32(c.r[29], c.r[29].w[0] - 896u);
    c.r[2].d[0] = 0ull | 65535ull;
    st128((c.r[29].w[0] + 880u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 864u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 848u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 832u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 816u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 800u) & ~15u, c.r[21]);
    st64((c.r[29].w[0] + 784u), c.r[31].d[0]);
    c.budget -= 11;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001F6BA4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001F6B94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[19], c.r[2].w[0] + 10472u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6930u);  if (depth < kMaxDepth) unit_006B(c, 194u, depth + 1u); else { c.pc = 0x002AF7A0u; return; } if (c.pc != 0x001F6930u) [[unlikely]] return; }
L_001F6930:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 13720u);
    set32(c.r[20], c.r[29].w[0] + 768u);
    st32((c.r[19].w[0] + 12048u), c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[19].w[0] + 12052u);
    set32(c.r[2], 0u + 94u);
    c.budget -= 8;
L_001F6950:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6950u | kUnwind; return; } goto L_001F6950; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[18], c.r[2].w[0] + 12496u);
    set32(c.r[17], c.r[19].w[0] + 12052u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 6;
L_001F6980:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_001F6994; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F69A4; } }
L_001F6994:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69A4u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001F69A4u) [[unlikely]] return; }
L_001F69A4:
    c.r[2].d[0] = c.r[16].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6A70; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] + 12504u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001F69CC; } }
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F69D8; } }
L_001F69CC:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F69D8u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001F69D8u) [[unlikely]] return; }
L_001F69D8:
    c.r[2].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F69FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] + 12512u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F6A0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6A18; } }
L_001F69FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] + 12520u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001F6A18; } }
L_001F6A0C:
    st8((c.r[29].w[0] + 256u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6A24; } }
L_001F6A18:
    set32(c.r[4], c.r[29].w[0] + 256u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A24u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001F6A24u) [[unlikely]] return; }
L_001F6A24:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A34u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001F6A34u) [[unlikely]] return; }
L_001F6A34:
    set32(c.r[4], c.r[29].w[0] + 256u);
    set32(c.r[5], c.r[21].w[0] + 12528u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A48u);  if (depth < kMaxDepth) unit_00DD(c, 118u, depth + 1u); else { c.pc = 0x00475918u; return; } if (c.pc != 0x001F6A48u) [[unlikely]] return; }
L_001F6A48:
    set32(c.r[4], c.r[29].w[0] + 512u);
    set32(c.r[5], c.r[29].w[0] + 256u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A58u);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001F6A58u) [[unlikely]] return; }
L_001F6A58:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], c.r[29].w[0] + 512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6A68u);  if (depth < kMaxDepth) unit_00DD(c, 56u, depth + 1u); else { c.pc = 0x004749A8u; return; } if (c.pc != 0x001F6A68u) [[unlikely]] return; }
L_001F6A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6AEC; } }
L_001F6A70:
    set32(c.r[2], 0u + 91u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001F6A94; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] + 12536u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F6AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6AE0; } }
L_001F6A94:
    set32(c.r[2], 0u + 93u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001F6AB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] + 12552u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F6AD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6AE0; } }
L_001F6AB8:
    set32(c.r[2], 0u + 94u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001F6AEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] + 12560u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001F6AE0; } }
L_001F6AD4:
    st8((c.r[29].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6AEC; } }
L_001F6AE0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AECu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001F6AECu) [[unlikely]] return; }
L_001F6AEC:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6AFCu);  if (depth < kMaxDepth) unit_00DD(c, 71u, depth + 1u); else { c.pc = 0x00474DC4u; return; } if (c.pc != 0x001F6AFCu) [[unlikely]] return; }
L_001F6AFC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[17], c.r[17].w[0] + 256u);
    c.r[2].d[0] = c.r[16].sd[0] < 95ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6980u | kUnwind; return; } goto L_001F6980; } }
L_001F6B10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6B34; } }
L_001F6B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B20u);  if (depth < kMaxDepth) unit_0040(c, 160u, depth + 1u); else { c.pc = 0x00201CA0u; return; } if (c.pc != 0x001F6B20u) [[unlikely]] return; }
L_001F6B20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 13760u);
    st32((c.r[19].w[0] + 12048u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6B18u | kUnwind; return; } goto L_001F6B18; } }
L_001F6B34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[4], c.r[4].w[0] - 18688u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6B44u);  if (depth < kMaxDepth) unit_003D(c, 112u, depth + 1u); else { c.pc = 0x001F5758u; return; } if (c.pc != 0x001F6B44u) [[unlikely]] return; }
L_001F6B44:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], 0u - 15u);
    st32((c.r[29].w[0] + 768u), c.r[2].w[0]);
    set32(c.r[5], c.r[3].w[0] - 15464u);
    st32((c.r[5].w[0] + 364u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[20].w[0])));
    c.budget -= 7;
L_001F6B60:
    set32(c.r[2], ld32((c.r[5].w[0] + 364u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[6].sd[0] < 91ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 364u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6B60u | kUnwind; return; } goto L_001F6B60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6BA4; } }
L_001F6B94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] + 13760u);
    st32((c.r[3].w[0] + 22520u), c.r[2].w[0]);
    c.budget -= 4;
L_001F6BA4:
    ld128((c.r[29].w[0] + 880u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 864u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 848u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 832u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 816u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 800u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 784u));
    set32(c.r[29], c.r[29].w[0] + 896u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6BE0u);  if (depth < kMaxDepth) unit_003C(c, 68u, depth + 1u); else { c.pc = 0x001F09B0u; return; } if (c.pc != 0x001F6BE0u) [[unlikely]] return; }
L_001F6BE0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6BF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[7].w[0] - 20496u);
    c.budget -= 6;
L_001F6C08:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001F6C28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C20u);  if (depth < kMaxDepth) unit_0049(c, 219u, depth + 1u); else { c.pc = 0x00226BA0u; return; } if (c.pc != 0x001F6C20u) [[unlikely]] return; }
L_001F6C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6C48; } }
L_001F6C28:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 16u);
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(38ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F6C08u | kUnwind; return; } goto L_001F6C08; } }
    set32(c.r[5], c.r[7].w[0] - 20496u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C48u);  if (depth < kMaxDepth) unit_0049(c, 219u, depth + 1u); else { c.pc = 0x00226BA0u; return; } if (c.pc != 0x001F6C48u) [[unlikely]] return; }
L_001F6C48:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6C58:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C70u);  if (depth < kMaxDepth) unit_006B(c, 51u, depth + 1u); else { c.pc = 0x002ADAC0u; return; } if (c.pc != 0x001F6C70u) [[unlikely]] return; }
L_001F6C70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6C7Cu);  if (depth < kMaxDepth) unit_003C(c, 68u, depth + 1u); else { c.pc = 0x001F09B0u; return; } if (c.pc != 0x001F6C7Cu) [[unlikely]] return; }
L_001F6C7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6C98:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6CA8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6CB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], 0u + 19u);
    c.budget -= 10;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_001F6D60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 20504u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F6CF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6CF8u);  if (depth < kMaxDepth) unit_003C(c, 275u, depth + 1u); else { c.pc = 0x001F2E40u; return; } if (c.pc != 0x001F6CF8u) [[unlikely]] return; }
L_001F6CF8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F6D08u);  if (depth < kMaxDepth) unit_007B(c, 174u, depth + 1u); else { c.pc = 0x002EEF60u; return; } if (c.pc != 0x001F6D08u) [[unlikely]] return; }
L_001F6D08:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F6D44; } }
    c.r[2].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6D60; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F6D50; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F6D5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6D60; } }
L_001F6D44:
    set32(c.r[18], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6D60; } }
L_001F6D50:
    set32(c.r[18], 0u + 21u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F6D60; } }
L_001F6D5C:
    set32(c.r[18], 0u + 22u);
    c.budget -= 1;
L_001F6D60:
    set32(c.r[2], c.r[18].w[0] - 19u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6D80:
    set32(c.r[2], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F6D98; } }
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6D98:
    set32(c.r[2], 0u - 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F6DB0; } }
    set32(c.r[2], 0u + 13u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6DB0:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 9040u));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[4].d[0];  if (t) { goto L_001F6DE0; } }
    set32(c.r[2], 0u + 15u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6DE0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_001F6DF8; } }
    set32(c.r[2], 0u + 14u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6DF8:
    set32(c.r[2], ld32((c.r[3].w[0] + 7700u)));
    set32(c.r[4], ld32((c.r[3].w[0] + 572u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 45ull;
    c.r[3].d[0] = c.r[4].d[0] | 8ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 27ull;
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6E50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 12944u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F6E38:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6E44:
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6E50:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6E5C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6E68:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6E78:
    set32(c.r[2], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[4], ld32((c.r[4].w[0] + 572u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 45ull;
    c.r[3].d[0] = c.r[4].d[0] | 8ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] & 27ull;
    c.r[2].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(17ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F6EC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13056u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F6EB8:
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6EC4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6ED0:
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6EE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005D0000u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0] + 28312u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6EF8:
    set32(c.r[3], ld32((c.r[4].w[0] + 7700u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F6F20; } }
    set32(c.r[2], 0u + 199u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001F6F20; } }
    set32(c.r[2], 0u + 198u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F6F40; } }
L_001F6F20:
    c.r[2].d[0] = ld64((c.r[4].w[0] + 560u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x03000000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F6F40; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 10140u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = 0ull;
    c.budget -= 3;
L_001F6F40:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6F50:
    set32(c.r[3], c.r[4].w[0] - 11u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(78ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F70A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13136u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F6F7C:
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6F90:
    set32(c.r[2], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6FA4:
    set32(c.r[2], ld32((c.r[5].w[0] + 56u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6FB8:
    set32(c.r[2], ld32((c.r[5].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6FCC:
    set32(c.r[2], ld32((c.r[5].w[0] + 52u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6FE0:
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F6FF4:
    set32(c.r[2], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7008:
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F701C:
    set32(c.r[2], ld32((c.r[5].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7030:
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7044:
    set32(c.r[2], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7058:
    set32(c.r[2], ld32((c.r[5].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F706C:
    set32(c.r[2], ld32((c.r[5].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7080:
    set32(c.r[2], ld32((c.r[5].w[0] + 40u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7094:
    set32(c.r[2], ld32((c.r[5].w[0] + 44u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[5].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 3;
L_001F70A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F70A8:
    set32(c.r[2], 0u + 28u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 18688u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 740u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F70C8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 18688u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F70E8:
    set32(c.r[2], 0u + 28u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 18688u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 744u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7108:
    set32(c.r[2], 0u + 28u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 18688u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 748u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7128:
    set32(c.r[2], 0u + 28u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] - 18688u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 752u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7148:
    set32(c.r[3], 0u + 28u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] - 17960u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7168:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00780000u);
    set32(c.r[3], ld32((c.r[5].w[0] + 10196u)));
    set32(c.r[2], c.r[2].w[0] - 2360u);
    set32(c.r[4], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_001F71B0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7694u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[3], c.r[3].w[0] - 18688u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.r[3].d[0] = ~(0ull | c.r[2].d[0]);
    if (c.r[3].d[0] == 0) c.r[2].d[0] = 0ull;
    c.budget -= 8;
L_001F71B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F71B8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] - 15464u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F71D8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u - 15u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[5].w[0] + 364u), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[7], 0u - 15u);
    c.budget -= 8;
L_001F71F8:
    set32(c.r[2], ld32((c.r[5].w[0] + 364u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[4].d[0] = c.r[6].sd[0] < 91ll ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0] + 364u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[5].w[0] + 364u), c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F71F8u | kUnwind; return; } goto L_001F71F8; } }
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[3].d[0] = 0ull + 0ull;
    set32(c.r[5], ld32((c.r[2].w[0] - 19736u)));
    c.budget -= 5;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001F728C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7694u)));
    set32(c.r[5], c.r[2].w[0] - 19768u);
    c.budget -= 5;
L_001F7260:
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_001F7278; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7278:
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F7260u | kUnwind; return; } goto L_001F7260; } }
L_001F728C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7298:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 7694u));
    set32(c.r[2], c.r[2].w[0] - 22u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(65ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F72DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 13456u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x001F4000u < 16384u) { entry = entries_003D[(t - 0x001F4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F72D0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F72DC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F72E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 13760u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[4].w[0] + 12048u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F7310; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7310u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x001F7310u) [[unlikely]] return; }
L_001F7310:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] + 13760u);
    c.r[5].d[0] = c.r[5].d[0] & 1ull;
    st32((c.r[4].w[0] + 12048u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F7348; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7348u);  if (depth < kMaxDepth) unit_008E(c, 257u, depth + 1u); else { c.pc = 0x0033ADD0u; return; } if (c.pc != 0x001F7348u) [[unlikely]] return; }
L_001F7348:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7358:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7368:
    set32(c.r[2], c.r[4].w[0] + 12052u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7378:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7390u);  if (depth < kMaxDepth) unit_003D(c, 118u, depth + 1u); else { c.pc = 0x001F68E8u; return; } if (c.pc != 0x001F7390u) [[unlikely]] return; }
L_001F7390:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F73A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[5].d[0] = 0ull | 65535ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F73B8u);  if (depth < kMaxDepth) unit_003D(c, 118u, depth + 1u); else { c.pc = 0x001F68E8u; return; } if (c.pc != 0x001F73B8u) [[unlikely]] return; }
L_001F73B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F73C8:
    set32(c.r[5], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[3], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[4].w[0] - 4872u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 15748u), c.r[5].w[0]);
    set32(c.r[7], c.r[7].w[0] - 26128u);
    st32((c.r[9].w[0] + 10120u), 0u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[10].w[0] - 5012u), c.r[5].w[0]);
    c.r[12].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st32((c.r[7].w[0] + 76u), 0u);
    c.r[13].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[14].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[12].w[0] - 17312u), 0u);
    st32((c.r[13].w[0] + 10124u), 0u);
    set32(c.r[8], c.r[8].w[0] + 19264u);
    st32((c.r[14].w[0] - 5016u), 0u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[8].w[0] + 8u), 0u);
    c.r[15].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[11].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    st32((c.r[15].w[0] - 5004u), 0u);
    st32((c.r[11].w[0] + 15208u), c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + 14664u);
    st32((c.r[6].w[0] + 188u), 0u);
    st32((c.r[7].w[0] + 20u), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    st32((c.r[8].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 40u), c.r[5].w[0]);
    st32((c.r[6].w[0] + 156u), 0u);
    st32((c.r[6].w[0] + 132u), 0u);
    c.budget -= 37;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7460:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7468:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F7470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 40u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7490u);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F7490u) [[unlikely]] return; }
L_001F7490:
    st32((c.r[29].w[0]), 0u);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[10], 0u - 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 14u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74C0u);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F74C0u) [[unlikely]] return; }
L_001F74C0:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74DCu);  if (depth < kMaxDepth) unit_0089(c, 314u, depth + 1u); else { c.pc = 0x00327BA0u; return; } if (c.pc != 0x001F74DCu) [[unlikely]] return; }
L_001F74DC:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 40u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F74F4u);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F74F4u) [[unlikely]] return; }
L_001F74F4:
    st32((c.r[29].w[0]), 0u);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[10], 0u - 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 46u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7524u);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F7524u) [[unlikely]] return; }
L_001F7524:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7540u);  if (depth < kMaxDepth) unit_0089(c, 314u, depth + 1u); else { c.pc = 0x00327BA0u; return; } if (c.pc != 0x001F7540u) [[unlikely]] return; }
L_001F7540:
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7558u);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F7558u) [[unlikely]] return; }
L_001F7558:
    st32((c.r[29].w[0]), 0u);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    c.r[10].d[0] = 0ull + 0ull;
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 71u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7588u);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F7588u) [[unlikely]] return; }
L_001F7588:
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75A4u);  if (depth < kMaxDepth) unit_0089(c, 314u, depth + 1u); else { c.pc = 0x00327BA0u; return; } if (c.pc != 0x001F75A4u) [[unlikely]] return; }
L_001F75A4:
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75BCu);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F75BCu) [[unlikely]] return; }
L_001F75BC:
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u - 2000u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 23u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F75ECu);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F75ECu) [[unlikely]] return; }
L_001F75EC:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7604u);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F7604u) [[unlikely]] return; }
L_001F7604:
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u - 2000u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 48u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7634u);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F7634u) [[unlikely]] return; }
L_001F7634:
    set32(c.r[4], 0u + 6u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F764Cu);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F764Cu) [[unlikely]] return; }
L_001F764C:
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u - 2000u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F767Cu);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F767Cu) [[unlikely]] return; }
L_001F767C:
    set32(c.r[4], 0u + 7u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7694u);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F7694u) [[unlikely]] return; }
L_001F7694:
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u - 2000u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 27u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76C4u);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F76C4u) [[unlikely]] return; }
L_001F76C4:
    set32(c.r[4], 0u + 8u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F76DCu);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F76DCu) [[unlikely]] return; }
L_001F76DC:
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u - 2000u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 48u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F770Cu);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F770Cu) [[unlikely]] return; }
L_001F770C:
    set32(c.r[4], 0u + 9u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7724u);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F7724u) [[unlikely]] return; }
L_001F7724:
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u - 2000u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 51u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7754u);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F7754u) [[unlikely]] return; }
L_001F7754:
    set32(c.r[4], 0u + 10u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F776Cu);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F776Cu) [[unlikely]] return; }
L_001F776C:
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u - 2000u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 30u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F779Cu);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F779Cu) [[unlikely]] return; }
L_001F779C:
    set32(c.r[4], 0u + 11u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77B4u);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F77B4u) [[unlikely]] return; }
L_001F77B4:
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u - 2000u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77E4u);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F77E4u) [[unlikely]] return; }
L_001F77E4:
    set32(c.r[4], 0u + 12u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F77FCu);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F77FCu) [[unlikely]] return; }
L_001F77FC:
    st32((c.r[29].w[0]), 0u);
    set32(c.r[8], 0u - 2000u);
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F782Cu);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F782Cu) [[unlikely]] return; }
L_001F782C:
    set32(c.r[4], 0u + 13u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7844u);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F7844u) [[unlikely]] return; }
L_001F7844:
    set32(c.r[8], 0u - 2000u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 57u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7874u);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F7874u) [[unlikely]] return; }
L_001F7874:
    set32(c.r[4], 0u + 14u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F788Cu);  if (depth < kMaxDepth) unit_0089(c, 316u, depth + 1u); else { c.pc = 0x00327C58u; return; } if (c.pc != 0x001F788Cu) [[unlikely]] return; }
L_001F788C:
    st32((c.r[29].w[0]), 0u);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 8u), 0u);
    set32(c.r[5], 0u + 36u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[8], 0u - 2000u);
    set32(c.r[9], 0u - 128u);
    set32(c.r[10], 0u + 2000u);
    set32(c.r[11], 0u - 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F78BCu);  if (depth < kMaxDepth) unit_0089(c, 219u, depth + 1u); else { c.pc = 0x003267C8u; return; } if (c.pc != 0x001F78BCu) [[unlikely]] return; }
L_001F78BC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F78D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 22560u);
    set32(c.r[6], ld32((c.r[17].w[0] + 22512u)));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    set32(c.r[17], c.r[17].w[0] + 22512u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0] + 120u), c.f[23]);
    set32(c.r[19], 0u + 5000u);
    st32((c.r[29].w[0] + 112u), c.f[22]);
    st32((c.r[29].w[0] + 104u), c.f[21]);
    st32((c.r[29].w[0] + 96u), c.f[20]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7924u);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F7924u) [[unlikely]] return; }
L_001F7924:
    c.f[20] = 0u;
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[18].w[0] + 24u);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[21] = c.r[1].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7944u);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F7944u) [[unlikely]] return; }
L_001F7944:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x44160000u);
    c.f[23] = c.r[1].w[0];
    set32(c.r[6], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[18].w[0] + 48u);
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0xC4160000u);
    c.f[22] = c.r[1].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7968u);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F7968u) [[unlikely]] return; }
L_001F7968:
    set32(c.r[6], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], c.r[18].w[0] + 72u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F797Cu);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F797Cu) [[unlikely]] return; }
L_001F797C:
    set32(c.r[6], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[5], c.r[18].w[0] + 96u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7990u);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F7990u) [[unlikely]] return; }
L_001F7990:
    set32(c.r[6], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[18].w[0] + 120u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79A4u);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F79A4u) [[unlikely]] return; }
L_001F79A4:
    set32(c.r[6], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[5], c.r[18].w[0] + 144u);
    set32(c.r[4], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79B8u);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F79B8u) [[unlikely]] return; }
L_001F79B8:
    set32(c.r[6], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[5], c.r[18].w[0] + 156u);
    set32(c.r[4], 0u + 7u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79CCu);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F79CCu) [[unlikely]] return; }
L_001F79CC:
    set32(c.r[6], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], c.r[18].w[0] + 180u);
    set32(c.r[4], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79E0u);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F79E0u) [[unlikely]] return; }
L_001F79E0:
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], c.r[18].w[0] + 204u);
    set32(c.r[4], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F79F4u);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F79F4u) [[unlikely]] return; }
L_001F79F4:
    set32(c.r[6], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[5], c.r[18].w[0] + 228u);
    set32(c.r[4], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A08u);  if (depth < kMaxDepth) unit_0088(c, 247u, depth + 1u); else { c.pc = 0x00322BF8u; return; } if (c.pc != 0x001F7A08u) [[unlikely]] return; }
L_001F7A08:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x002A0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 20696u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A20u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7A20u) [[unlikely]] return; }
L_001F7A20:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 14240u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A38u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7A38u) [[unlikely]] return; }
L_001F7A38:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] - 10360u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A54u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7A54u) [[unlikely]] return; }
L_001F7A54:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 26552u);
    set32(c.r[5], 0u + 21u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A6Cu);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7A6Cu) [[unlikely]] return; }
L_001F7A6C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 11984u);
    set32(c.r[5], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7A84u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7A84u) [[unlikely]] return; }
L_001F7A84:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 18744u);
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AA0u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7AA0u) [[unlikely]] return; }
L_001F7AA0:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 18u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AB4u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7AB4u) [[unlikely]] return; }
L_001F7AB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 16456u);
    set32(c.r[5], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7ACCu);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7ACCu) [[unlikely]] return; }
L_001F7ACC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 15128u);
    set32(c.r[5], 0u + 13u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AE4u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7AE4u) [[unlikely]] return; }
L_001F7AE4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 17192u);
    set32(c.r[5], 0u + 14u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7AFCu);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7AFCu) [[unlikely]] return; }
L_001F7AFC:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 17752u);
    set32(c.r[5], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B14u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7B14u) [[unlikely]] return; }
L_001F7B14:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 22160u);
    set32(c.r[5], 0u + 19u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B2Cu);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7B2Cu) [[unlikely]] return; }
L_001F7B2C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 23168u);
    set32(c.r[5], 0u + 22u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B44u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7B44u) [[unlikely]] return; }
L_001F7B44:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00290000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 21400u);
    set32(c.r[5], 0u + 20u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B5Cu);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7B5Cu) [[unlikely]] return; }
L_001F7B5C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 25208u);
    set32(c.r[5], 0u + 23u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B74u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7B74u) [[unlikely]] return; }
L_001F7B74:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] + 25936u);
    set32(c.r[5], 0u + 33u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7B8Cu);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7B8Cu) [[unlikely]] return; }
L_001F7B8C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BA4u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7BA4u) [[unlikely]] return; }
L_001F7BA4:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BBCu);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7BBCu) [[unlikely]] return; }
L_001F7BBC:
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BD4u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7BD4u) [[unlikely]] return; }
L_001F7BD4:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 29280u);
    set32(c.r[5], 0u + 22u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7BF4u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7BF4u) [[unlikely]] return; }
L_001F7BF4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 8816u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[6], 0u + 24u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C10u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7C10u) [[unlikely]] return; }
L_001F7C10:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 10584u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[6], 0u + 31u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C2Cu);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7C2Cu) [[unlikely]] return; }
L_001F7C2C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 1208u);
    set32(c.r[5], 0u + 26u);
    set32(c.r[6], 0u + 25u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C48u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7C48u) [[unlikely]] return; }
L_001F7C48:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 7160u);
    set32(c.r[5], 0u + 27u);
    set32(c.r[6], 0u + 35u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C64u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7C64u) [[unlikely]] return; }
L_001F7C64:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 4768u);
    set32(c.r[5], 0u + 17u);
    set32(c.r[6], 0u + 11u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C80u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7C80u) [[unlikely]] return; }
L_001F7C80:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 42u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7C98u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7C98u) [[unlikely]] return; }
L_001F7C98:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 43u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CB0u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7CB0u) [[unlikely]] return; }
L_001F7CB0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] + 30336u);
    set32(c.r[5], 0u + 45u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CCCu);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7CCCu) [[unlikely]] return; }
L_001F7CCC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] - 26312u);
    set32(c.r[5], 0u + 76u);
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], 0u + 9u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7CECu);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7CECu) [[unlikely]] return; }
L_001F7CEC:
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 77u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D04u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7D04u) [[unlikely]] return; }
L_001F7D04:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 4448u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D20u);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7D20u) [[unlikely]] return; }
L_001F7D20:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[7].w[0] - 7032u);
    set32(c.r[6], 0u + 34u);
    set32(c.r[5], 0u + 46u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D3Cu);  if (depth < kMaxDepth) unit_0066(c, 284u, depth + 1u); else { c.pc = 0x0029AE08u; return; } if (c.pc != 0x001F7D3Cu) [[unlikely]] return; }
L_001F7D3C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9224u);
    set32(c.r[5], 0u + 26u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D54u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7D54u) [[unlikely]] return; }
L_001F7D54:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 19616u);
    set32(c.r[5], 0u + 27u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D6Cu);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7D6Cu) [[unlikely]] return; }
L_001F7D6C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 9240u);
    set32(c.r[5], 0u + 28u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D84u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7D84u) [[unlikely]] return; }
L_001F7D84:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 18496u);
    set32(c.r[5], 0u + 29u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7D9Cu);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7D9Cu) [[unlikely]] return; }
L_001F7D9C:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 17304u);
    set32(c.r[5], 0u + 30u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DB4u);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7DB4u) [[unlikely]] return; }
L_001F7DB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00110000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - 21080u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DCCu);  if (depth < kMaxDepth) unit_0066(c, 285u, depth + 1u); else { c.pc = 0x0029AE38u; return; } if (c.pc != 0x001F7DCCu) [[unlikely]] return; }
L_001F7DCC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x001F0000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] + 2144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DE0u);  if (depth < kMaxDepth) unit_0066(c, 288u, depth + 1u); else { c.pc = 0x0029AEA8u; return; } if (c.pc != 0x001F7DE0u) [[unlikely]] return; }
L_001F7DE0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[23];
    c.f[13] = c.f[20];
    c.f[14] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7DFCu);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F7DFCu) [[unlikely]] return; }
L_001F7DFC:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00680000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 9920u);
    set32(c.r[4], c.r[17].w[0] + 144u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E14u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001F7E14u) [[unlikely]] return; }
L_001F7E14:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[2], 0u + 3500u);
    set32(c.r[18], c.r[18].w[0] + 10080u);
    set32(c.r[5], 0u + 9u);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[4], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E34u);  if (depth < kMaxDepth) unit_0068(c, 299u, depth + 1u); else { c.pc = 0x002A3B18u; return; } if (c.pc != 0x001F7E34u) [[unlikely]] return; }
L_001F7E34:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E50u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F7E50u) [[unlikely]] return; }
L_001F7E50:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E60u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001F7E60u) [[unlikely]] return; }
L_001F7E60:
    set32(c.r[5], 0u + 1u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[4], 0u + 14u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E74u);  if (depth < kMaxDepth) unit_0068(c, 299u, depth + 1u); else { c.pc = 0x002A3B18u; return; } if (c.pc != 0x001F7E74u) [[unlikely]] return; }
L_001F7E74:
    c.f[12] = c.f[23];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[14] = c.f[12];
    c.f[13] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7E90u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F7E90u) [[unlikely]] return; }
L_001F7E90:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7EA0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001F7EA0u) [[unlikely]] return; }
L_001F7EA0:
    set32(c.r[5], 0u + 3u);
    st32((c.r[18].w[0] + 12u), c.r[19].w[0]);
    set32(c.r[4], 0u + 15u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7EB4u);  if (depth < kMaxDepth) unit_0068(c, 299u, depth + 1u); else { c.pc = 0x002A3B18u; return; } if (c.pc != 0x001F7EB4u) [[unlikely]] return; }
L_001F7EB4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7ED0u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F7ED0u) [[unlikely]] return; }
L_001F7ED0:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7EE0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001F7EE0u) [[unlikely]] return; }
L_001F7EE0:
    set32(c.r[5], 0u + 2u);
    st32((c.r[18].w[0] + 8u), c.r[19].w[0]);
    set32(c.r[4], 0u + 26u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7EF4u);  if (depth < kMaxDepth) unit_0068(c, 299u, depth + 1u); else { c.pc = 0x002A3B18u; return; } if (c.pc != 0x001F7EF4u) [[unlikely]] return; }
L_001F7EF4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F10u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F7F10u) [[unlikely]] return; }
L_001F7F10:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F20u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001F7F20u) [[unlikely]] return; }
L_001F7F20:
    set32(c.r[5], 0u + 4u);
    st32((c.r[18].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F34u);  if (depth < kMaxDepth) unit_0068(c, 299u, depth + 1u); else { c.pc = 0x002A3B18u; return; } if (c.pc != 0x001F7F34u) [[unlikely]] return; }
L_001F7F34:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F50u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F7F50u) [[unlikely]] return; }
L_001F7F50:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F60u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001F7F60u) [[unlikely]] return; }
L_001F7F60:
    set32(c.r[5], 0u + 5u);
    st32((c.r[18].w[0] + 20u), c.r[19].w[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F74u);  if (depth < kMaxDepth) unit_0068(c, 299u, depth + 1u); else { c.pc = 0x002A3B18u; return; } if (c.pc != 0x001F7F74u) [[unlikely]] return; }
L_001F7F74:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[14] = c.f[22];
    c.f[15] = c.f[21];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7F90u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F7F90u) [[unlikely]] return; }
L_001F7F90:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 96u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FA0u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001F7FA0u) [[unlikely]] return; }
L_001F7FA0:
    st32((c.r[18].w[0] + 24u), c.r[19].w[0]);
    set32(c.r[4], 0u + 14u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FB4u);  if (depth < kMaxDepth) unit_0068(c, 299u, depth + 1u); else { c.pc = 0x002A3B18u; return; } if (c.pc != 0x001F7FB4u) [[unlikely]] return; }
L_001F7FB4:
    set32(c.r[5], 0u + 6u);
    set32(c.r[4], 0u + 15u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FC4u);  if (depth < kMaxDepth) unit_0068(c, 299u, depth + 1u); else { c.pc = 0x002A3B18u; return; } if (c.pc != 0x001F7FC4u) [[unlikely]] return; }
L_001F7FC4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[14] = c.r[1].w[0];
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = c.f[20];
    c.f[13] = c.f[20];
    c.f[15] = c.f[21];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FE4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x001F7FE4u) [[unlikely]] return; }
L_001F7FE4:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F7FF4u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x001F7FF4u) [[unlikely]] return; }
L_001F7FF4:
    set32(c.r[2], 0u + 3000u);
    set32(c.r[4], 0u + 14u);
    st32((c.r[18].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    [[clang::musttail]] return unit_003E(c, 1u, depth);
}

}
