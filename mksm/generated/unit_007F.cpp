#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007F[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112,
    0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0,
};

void unit_007F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002FC000;
    case 2u: goto L_002FC060;
    case 3u: goto L_002FC098;
    case 4u: goto L_002FC0AC;
    case 5u: goto L_002FC138;
    case 6u: goto L_002FC140;
    case 7u: goto L_002FC16C;
    case 8u: goto L_002FC1B8;
    case 9u: goto L_002FC1C4;
    case 10u: goto L_002FC214;
    case 11u: goto L_002FC228;
    case 12u: goto L_002FC25C;
    case 13u: goto L_002FC270;
    case 14u: goto L_002FC2DC;
    case 15u: goto L_002FC350;
    case 16u: goto L_002FC39C;
    case 17u: goto L_002FC3B0;
    case 18u: goto L_002FC3DC;
    case 19u: goto L_002FC3F0;
    case 20u: goto L_002FC4A0;
    case 21u: goto L_002FC4E4;
    case 22u: goto L_002FC4F0;
    case 23u: goto L_002FC50C;
    case 24u: goto L_002FC520;
    case 25u: goto L_002FC530;
    case 26u: goto L_002FC56C;
    case 27u: goto L_002FC578;
    case 28u: goto L_002FC588;
    case 29u: goto L_002FC5D0;
    case 30u: goto L_002FC614;
    case 31u: goto L_002FC630;
    case 32u: goto L_002FC734;
    case 33u: goto L_002FC77C;
    case 34u: goto L_002FC928;
    case 35u: goto L_002FC954;
    case 36u: goto L_002FC9B0;
    case 37u: goto L_002FCA14;
    case 38u: goto L_002FCA44;
    case 39u: goto L_002FCA88;
    case 40u: goto L_002FCAEC;
    case 41u: goto L_002FCAFC;
    case 42u: goto L_002FCC28;
    case 43u: goto L_002FCC70;
    case 44u: goto L_002FCC88;
    case 45u: goto L_002FCCA4;
    case 46u: goto L_002FCCE0;
    case 47u: goto L_002FCEA8;
    case 48u: goto L_002FCEEC;
    case 49u: goto L_002FCF0C;
    case 50u: goto L_002FCF48;
    case 51u: goto L_002FD110;
    case 52u: goto L_002FD138;
    case 53u: goto L_002FD14C;
    case 54u: goto L_002FD198;
    case 55u: goto L_002FD230;
    case 56u: goto L_002FD258;
    case 57u: goto L_002FD26C;
    case 58u: goto L_002FD2B8;
    case 59u: goto L_002FD460;
    case 60u: goto L_002FD484;
    case 61u: goto L_002FD494;
    case 62u: goto L_002FD588;
    case 63u: goto L_002FD5AC;
    case 64u: goto L_002FD5BC;
    case 65u: goto L_002FD680;
    case 66u: goto L_002FD6B0;
    case 67u: goto L_002FD6C0;
    case 68u: goto L_002FD778;
    case 69u: goto L_002FDA18;
    case 70u: goto L_002FDBB8;
    case 71u: goto L_002FDBDC;
    case 72u: goto L_002FDBEC;
    case 73u: goto L_002FDCDC;
    case 74u: goto L_002FDE20;
    case 75u: goto L_002FDE48;
    case 76u: goto L_002FDE5C;
    case 77u: goto L_002FDEA8;
    case 78u: goto L_002FE050;
    case 79u: goto L_002FE078;
    case 80u: goto L_002FE08C;
    case 81u: goto L_002FE0D8;
    case 82u: goto L_002FE188;
    case 83u: goto L_002FE1B0;
    case 84u: goto L_002FE1C4;
    case 85u: goto L_002FE210;
    case 86u: goto L_002FE3B8;
    case 87u: goto L_002FE3E4;
    case 88u: goto L_002FE3F4;
    case 89u: goto L_002FE450;
    case 90u: goto L_002FE48C;
    case 91u: goto L_002FE4B0;
    case 92u: goto L_002FE4DC;
    case 93u: goto L_002FE4EC;
    case 94u: goto L_002FE548;
    case 95u: goto L_002FE584;
    case 96u: goto L_002FE5A8;
    case 97u: goto L_002FE5D4;
    case 98u: goto L_002FE5E4;
    case 99u: goto L_002FE640;
    case 100u: goto L_002FE67C;
    case 101u: goto L_002FE6A0;
    case 102u: goto L_002FE6CC;
    case 103u: goto L_002FE6DC;
    case 104u: goto L_002FE738;
    case 105u: goto L_002FE774;
    case 106u: goto L_002FE798;
    case 107u: goto L_002FE82C;
    case 108u: goto L_002FE850;
    case 109u: goto L_002FE870;
    case 110u: goto L_002FE8A8;
    case 111u: goto L_002FE8F0;
    case 112u: goto L_002FE8FC;
    case 113u: goto L_002FE908;
    case 114u: goto L_002FE91C;
    case 115u: goto L_002FE938;
    case 116u: goto L_002FE9E4;
    case 117u: goto L_002FEA18;
    case 118u: goto L_002FEA5C;
    case 119u: goto L_002FEA6C;
    case 120u: goto L_002FEB48;
    case 121u: goto L_002FEBA0;
    case 122u: goto L_002FEC20;
    case 123u: goto L_002FEC44;
    case 124u: goto L_002FEC58;
    case 125u: goto L_002FEC78;
    case 126u: goto L_002FEC98;
    case 127u: goto L_002FECB4;
    case 128u: goto L_002FECE8;
    case 129u: goto L_002FED94;
    case 130u: goto L_002FEDB8;
    case 131u: goto L_002FEE74;
    case 132u: goto L_002FEEDC;
    case 133u: goto L_002FEF04;
    case 134u: goto L_002FEF44;
    case 135u: goto L_002FEF60;
    case 136u: goto L_002FEF98;
    case 137u: goto L_002FEFC0;
    case 138u: goto L_002FEFD4;
    case 139u: goto L_002FF084;
    case 140u: goto L_002FF0B0;
    case 141u: goto L_002FF0D0;
    case 142u: goto L_002FF128;
    case 143u: goto L_002FF138;
    case 144u: goto L_002FF178;
    case 145u: goto L_002FF190;
    case 146u: goto L_002FF1AC;
    case 147u: goto L_002FF1C4;
    case 148u: goto L_002FF1DC;
    case 149u: goto L_002FF23C;
    case 150u: goto L_002FF250;
    case 151u: goto L_002FF280;
    case 152u: goto L_002FF2A0;
    case 153u: goto L_002FF2EC;
    case 154u: goto L_002FF314;
    case 155u: goto L_002FF320;
    case 156u: goto L_002FF37C;
    case 157u: goto L_002FF3B4;
    case 158u: goto L_002FF3CC;
    case 159u: goto L_002FF498;
    case 160u: goto L_002FF4A8;
    case 161u: goto L_002FF4BC;
    case 162u: goto L_002FF4DC;
    case 163u: goto L_002FF4F4;
    case 164u: goto L_002FF504;
    case 165u: goto L_002FF53C;
    case 166u: goto L_002FF550;
    case 167u: goto L_002FF568;
    case 168u: goto L_002FF594;
    case 169u: goto L_002FF5C8;
    case 170u: goto L_002FF6DC;
    case 171u: goto L_002FF77C;
    case 172u: goto L_002FF7AC;
    case 173u: goto L_002FF7FC;
    case 174u: goto L_002FF894;
    case 175u: goto L_002FF8D4;
    case 176u: goto L_002FF904;
    case 177u: goto L_002FFA84;
    case 178u: goto L_002FFAC0;
    case 179u: goto L_002FFAF8;
    case 180u: goto L_002FFB18;
    case 181u: goto L_002FFB2C;
    case 182u: goto L_002FFB48;
    case 183u: goto L_002FFB84;
    case 184u: goto L_002FFB98;
    case 185u: goto L_002FFBA4;
    case 186u: goto L_002FFBC8;
    case 187u: goto L_002FFBEC;
    case 188u: goto L_002FFBF8;
    case 189u: goto L_002FFC4C;
    case 190u: goto L_002FFCB8;
    case 191u: goto L_002FFD20;
    case 192u: goto L_002FFD3C;
    case 193u: goto L_002FFD50;
    case 194u: goto L_002FFD68;
    case 195u: goto L_002FFD80;
    case 196u: goto L_002FFDFC;
    case 197u: goto L_002FFE2C;
    case 198u: goto L_002FFE48;
    case 199u: goto L_002FFEC0;
    case 200u: goto L_002FFEE4;
    case 201u: goto L_002FFF08;
    case 202u: goto L_002FFF44;
    case 203u: goto L_002FFF64;
    case 204u: goto L_002FFF94;
    case 205u: goto L_002FFFF8;
    default: bad_entry(c, 0x002FC000u); return;
    }
L_002FC000:
    set32(c.r[2], 0u + 1056u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + 17040u);
    c.f[4] = ld32((c.r[29].w[0] + 96u));
    c.f[4] = fp::cvt_s_w(c.f[4]);
    set32(c.r[4], c.r[3].w[0] + 8u);
    c.f[3] = c.r[30].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[0] = ld32((c.r[18].w[0] + 128u));
    c.f[2] = ld32((c.r[18].w[0] + 136u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[3]);
    c.f[2] = fp::sub(c.f[2], c.f[4]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[1] = fp::sub(c.f[1], c.f[3]);
    st32((c.r[18].w[0] + 128u), c.f[0]);
    st32((c.r[18].w[0] + 136u), c.f[2]);
    st32((c.r[3].w[0]), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[4]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 24;
L_002FC060:
    set32(c.r[6], ld32((c.r[29].w[0] + 120u)));
    set32(c.r[16], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[6].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + 14208u);
    set32(c.r[17], c.r[29].w[0] + 72u);
    set32(c.r[18], c.r[29].w[0] + 76u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.f[12] = fp::add(c.f[12], c.f[22]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC098u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002FC098u) [[unlikely]] return; }
L_002FC098:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC0ACu);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002FC0ACu) [[unlikely]] return; }
L_002FC0AC:
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.f[13] = ld32((c.r[29].w[0] + 96u));
    c.f[13] = fp::cvt_s_w(c.f[13]);
    c.f[1] = ld32((c.r[29].w[0] + 76u));
    set32(c.r[4], 0u - 1u);
    st16((c.r[16].w[0] + 7686u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[3], c.f[2]);
    set32(c.r[4], ld32((c.r[29].w[0] + 100u)));
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[2], c.f[0]);
    c.f[12] = c.r[30].w[0];
    c.f[12] = fp::cvt_s_w(c.f[12]);
    st16((c.r[16].w[0] + 9020u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[29].w[0] + 108u)));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[3], 0u - c.r[17].w[0]);
    set32(c.r[2], 0u - c.r[18].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[16].w[0] + 208u), c.f[0]);
    st32((c.r[16].w[0] + 216u), c.f[1]);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC138u);  if (depth < kMaxDepth) unit_0079(c, 146u, depth + 1u); else { c.pc = 0x002E6398u; return; } if (c.pc != 0x002FC138u) [[unlikely]] return; }
L_002FC138:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC588; } }
L_002FC140:
    set32(c.r[2], c.r[22].w[0] + 1u);
    set32(c.r[18], 0u + 13248u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[17], c.r[5].w[0] + 14208u);
    set32(c.r[16], c.r[3].w[0] + c.r[17].w[0]);
    c.f[21] = ld32((c.r[16].w[0] + 128u));
    c.f[20] = ld32((c.r[16].w[0] + 136u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC16Cu);  if (depth < kMaxDepth) unit_0081(c, 135u, depth + 1u); else { c.pc = 0x00305C90u; return; } if (c.pc != 0x002FC16Cu) [[unlikely]] return; }
L_002FC16C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002FC188; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[2], c.r[2].w[0] + 25152u);
    c.f[20] = ld32((c.r[2].w[0] + 24u));
    c.f[21] = ld32((c.r[2].w[0] + 16u));
    c.budget -= 4;
L_002FC188:
    set32(c.r[3], ld32((c.r[29].w[0] + 124u)));
    c.f[22] = c.r[23].w[0];
    c.f[22] = fp::cvt_s_w(c.f[22]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 136u));
    c.f[12] = ld32((c.r[2].w[0] + 128u));
    c.f[13] = fp::sub(c.f[20], c.f[13]);
    c.f[12] = fp::sub(c.f[21], c.f[12]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1B8u);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x002FC1B8u) [[unlikely]] return; }
L_002FC1B8:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC1C4u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x002FC1C4u) [[unlikely]] return; }
L_002FC1C4:
    c.f[23] = c.r[2].w[0];
    c.f[23] = fp::cvt_s_w(c.f[23]);
    c.budget -= 5;
    { const bool t = c.r[20].sd[0] <= 0;  if (t) { goto L_002FC340; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 104u)));
    set32(c.r[2], c.r[20].w[0] - c.r[19].w[0]);
    set32(c.r[5], ld32((c.r[29].w[0] + 116u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    if (c.r[3].d[0] != 0) c.r[20].d[0] = c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002FC240; } }
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    set32(c.r[17], c.r[29].w[0] + 80u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 84u);
    c.f[12] = fp::add(c.f[12], c.f[22]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC214u);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002FC214u) [[unlikely]] return; }
L_002FC214:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC228u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002FC228u) [[unlikely]] return; }
L_002FC228:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC280; } }
L_002FC240:
    c.f[12] = fp::add(c.f[23], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    set32(c.r[16], c.r[29].w[0] + 80u);
    set32(c.r[17], c.r[29].w[0] + 84u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC25Cu);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002FC25Cu) [[unlikely]] return; }
L_002FC25C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.f[12] = c.f[0];
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC270u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002FC270u) [[unlikely]] return; }
L_002FC270:
    c.f[0] = ld32((c.r[29].w[0] + 80u));
    c.f[1] = ld32((c.r[29].w[0] + 84u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.budget -= 4;
L_002FC280:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[30], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 12));
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    set32(c.r[17], 0u + 13248u);
    c.f[20] = c.r[30].w[0];
    c.f[20] = fp::cvt_s_w(c.f[20]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.f[21] = ld32((c.r[29].w[0] + 96u));
    c.f[21] = fp::cvt_s_w(c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[16], c.r[2].w[0] + 27456u);
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC2DCu);  if (depth < kMaxDepth) unit_0079(c, 184u, depth + 1u); else { c.pc = 0x002E6BD8u; return; } if (c.pc != 0x002FC2DCu) [[unlikely]] return; }
L_002FC2DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC340; } }
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], 0u + 1056u);
    set32(c.r[4], c.r[3].w[0] + 17040u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[4].w[0] + 8u);
    set32(c.r[5], c.r[16].w[0] - 13248u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[3].w[0] + 128u));
    c.f[0] = fp::add(c.f[0], c.f[20]);
    c.f[2] = ld32((c.r[3].w[0] + 136u));
    c.f[1] = fp::add(c.f[1], c.f[20]);
    c.f[2] = fp::add(c.f[2], c.f[21]);
    st32((c.r[4].w[0]), c.f[0]);
    st32((c.r[3].w[0] + 128u), c.f[1]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[3].w[0] + 136u), c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[21]);
    st32((c.r[2].w[0]), c.f[0]);
    c.budget -= 23;
L_002FC340:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC350u);  if (depth < kMaxDepth) unit_007F(c, 82u, depth + 1u); else { c.pc = 0x002FE188u; return; } if (c.pc != 0x002FC350u) [[unlikely]] return; }
L_002FC350:
    set32(c.r[5], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[16], 0u + 13248u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[6].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st16((c.r[3].w[0] + 9020u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[29].w[0] + 116u)));
    c.budget -= 10;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_002FC3C8; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 120u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.f[12] = ld32((c.r[2].w[0] + 148u));
    c.f[12] = fp::add(c.f[12], c.f[22]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC39Cu);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002FC39Cu) [[unlikely]] return; }
L_002FC39C:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.f[12] = c.f[0];
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC3B0u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002FC3B0u) [[unlikely]] return; }
L_002FC3B0:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC400; } }
L_002FC3C8:
    c.f[12] = fp::add(c.f[23], c.f[22]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45800000u);
    c.f[13] = c.r[1].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC3DCu);  if (depth < kMaxDepth) unit_0041(c, 405u, depth + 1u); else { c.pc = 0x00207AD0u; return; } if (c.pc != 0x002FC3DCu) [[unlikely]] return; }
L_002FC3DC:
    set32(c.r[4], c.r[29].w[0] + 56u);
    c.f[12] = c.f[0];
    set32(c.r[5], c.r[29].w[0] + 60u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC3F0u);  if (depth < kMaxDepth) unit_0045(c, 113u, depth + 1u); else { c.pc = 0x00215F18u; return; } if (c.pc != 0x002FC3F0u) [[unlikely]] return; }
L_002FC3F0:
    c.f[0] = ld32((c.r[29].w[0] + 56u));
    c.f[1] = ld32((c.r[29].w[0] + 60u));
    c.f[2] = fp::cvt_w_s(c.f[0]);
    set32(c.r[2], c.f[2]);
    c.budget -= 4;
L_002FC400:
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[3], c.f[0]);
    set32(c.r[4], ld32((c.r[29].w[0] + 108u)));
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], 0u - c.r[2].w[0]);
    set32(c.r[3], 0u - c.r[3].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[4], ld32((c.r[29].w[0] + 124u)));
    set32(c.r[2], 0u + 13248u);
    c.f[1] = c.r[17].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[0] = c.r[18].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[5].w[0] + 14208u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[5], c.r[4].w[0] + 13248u);
    set32(c.r[16], c.r[16].w[0] + 24656u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[16], c.r[16].w[0] + 16u);
    st32((c.r[3].w[0] + 216u), c.f[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0] + 208u), c.f[1]);
    set32(c.r[18], c.r[6].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[29].w[0] + 88u);
    set32(c.r[5], ld32((c.r[16].w[0] + 448u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 7694u)));
    set32(c.r[5], c.r[5].w[0] << 5);
    st32((c.r[29].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC4A0u);  if (depth < kMaxDepth) unit_0081(c, 206u, depth + 1u); else { c.pc = 0x00306728u; return; } if (c.pc != 0x002FC4A0u) [[unlikely]] return; }
L_002FC4A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 448u)));
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 6;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_002FC588; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC588; } }
    c.f[14] = ld32((c.r[18].w[0] + 216u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.f[12] = ld32((c.r[18].w[0] + 208u));
    c.f[13] = 0u;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC4E4u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002FC4E4u) [[unlikely]] return; }
L_002FC4E4:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC4F0u);  if (depth < kMaxDepth) unit_0045(c, 40u, depth + 1u); else { c.pc = 0x002149C8u; return; } if (c.pc != 0x002FC4F0u) [[unlikely]] return; }
L_002FC4F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[20] = c.f[0];
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[4], c.r[4].w[0] - 19312u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC50Cu);  if (depth < kMaxDepth) unit_0089(c, 11u, depth + 1u); else { c.pc = 0x003242A8u; return; } if (c.pc != 0x002FC50Cu) [[unlikely]] return; }
L_002FC50C:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC520u);  if (depth < kMaxDepth) unit_0045(c, 6u, depth + 1u); else { c.pc = 0x002140F8u; return; } if (c.pc != 0x002FC520u) [[unlikely]] return; }
L_002FC520:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC530u);  if (depth < kMaxDepth) unit_0044(c, 283u, depth + 1u); else { c.pc = 0x00213E30u; return; } if (c.pc != 0x002FC530u) [[unlikely]] return; }
L_002FC530:
    c.f[0] = ld32((c.r[29].w[0] + 40u));
    c.f[2] = ld32((c.r[29].w[0] + 32u));
    c.f[1] = ld32((c.r[29].w[0] + 36u));
    c.f[0] = fp::mul(c.f[0], c.f[20]);
    c.f[2] = fp::mul(c.f[2], c.f[20]);
    c.f[1] = fp::mul(c.f[1], c.f[20]);
    st32((c.r[29].w[0] + 40u), c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[2]);
    st32((c.r[29].w[0] + 36u), c.f[1]);
    c.f[13] = c.f[0];
    c.f[12] = c.f[2];
    st32((c.r[18].w[0] + 208u), c.f[2]);
    st32((c.r[18].w[0] + 216u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC56Cu);  if (depth < kMaxDepth) unit_0041(c, 395u, depth + 1u); else { c.pc = 0x002079A8u; return; } if (c.pc != 0x002FC56Cu) [[unlikely]] return; }
L_002FC56C:
    c.f[12] = c.f[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC578u);  if (depth < kMaxDepth) unit_0053(c, 10u, depth + 1u); else { c.pc = 0x0024C238u; return; } if (c.pc != 0x002FC578u) [[unlikely]] return; }
L_002FC578:
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.budget -= 4;
L_002FC588:
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
    c.f[23] = ld32((c.r[29].w[0] + 312u));
    c.f[22] = ld32((c.r[29].w[0] + 304u));
    c.f[21] = ld32((c.r[29].w[0] + 296u));
    c.f[20] = ld32((c.r[29].w[0] + 288u));
    set32(c.r[29], c.r[29].w[0] + 320u);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FC5D0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[30]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    c.r[30].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[19]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    c.r[18].d[0] = 0ull + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[23]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC614u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FC614u) [[unlikely]] return; }
L_002FC614:
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = c.r[30].d[0] + 0ull;
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 16464u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC630u);  if (depth < kMaxDepth) unit_007F(c, 70u, depth + 1u); else { c.pc = 0x002FDBB8u; return; } if (c.pc != 0x002FC630u) [[unlikely]] return; }
L_002FC630:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 16464u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC650; } }
    set32(c.r[4], c.r[4].w[0] - 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC660; } }
L_002FC650:
    set32(c.r[2], 0u - 2049u);
    set32(c.r[3], c.r[4].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_002FC660:
    set32(c.r[2], c.r[4].w[0] - 513u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1023ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC6AC; } }
    set32(c.r[5], c.r[21].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[4], c.r[2].w[0] + 14208u);
    c.r[10].d[0] = c.r[2].d[0] + 0ull;
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 113u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC6F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 16504u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC700; } }
L_002FC6AC:
    c.r[2].d[0] = c.r[4].sd[0] < -512ll ? 1ull : 0ull;
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[23], c.r[21].w[0] + 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC708; } }
    c.r[2].d[0] = c.r[4].sd[0] < -1535ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC708; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[10].w[0] + 14208u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC6F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 16504u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC700; } }
L_002FC6F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 16496u);
    c.budget -= 2;
L_002FC700:
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 2;
L_002FC708:
    set32(c.r[3], c.r[30].w[0] + 1u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    set32(c.r[20], c.r[10].w[0] + 14208u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[19], c.r[16].w[0] + c.r[20].w[0]);
    st32((c.r[19].w[0] + 10152u), c.r[17].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[10]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC734u);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FC734u) [[unlikely]] return; }
L_002FC734:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[10]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FC764; } }
    set32(c.r[3], 0u + 76u);
    set32(c.r[2], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 2192u)));
    if (c.r[3].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    c.budget -= 8;
L_002FC764:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002FC900; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[10]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC77Cu);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FC77Cu) [[unlikely]] return; }
L_002FC77C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 9934u)));
    c.r[7].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    ld128((c.r[29].w[0]) & ~15u, c.r[10]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002FC860; } }
    set32(c.r[3], 0u + 76u);
    set32(c.r[2], c.r[4].w[0] << 2);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC7EC; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002FC860; } }
    set32(c.r[2], 0u + 76u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FC860; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002FC860; } }
L_002FC7EC:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002FC828; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[10].w[0] + 14208u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 76u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[18], ld32((c.r[5].w[0] + 2192u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC900; } }
L_002FC828:
    set32(c.r[5], 0u + 13248u);
    set32(c.r[6], c.r[10].w[0] + 14208u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[7], 0u + 76u);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    set32(c.r[18], ld32((c.r[6].w[0] + 2192u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC900; } }
L_002FC860:
    set32(c.r[2], 0u + 76u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[10].w[0] + 14208u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 2192u);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FC8B8; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002FC8B8; } }
    set32(c.r[2], c.r[8].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FC8E4; } }
L_002FC8B8:
    set32(c.r[2], 0u + 76u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[10].w[0] + 14208u);
    set32(c.r[4], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 2192u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FC8F0; } }
L_002FC8E4:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC900; } }
L_002FC8F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[2], c.r[2].w[0] + 31832u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[18], ld32((c.r[2].w[0] + 1520u)));
    c.budget -= 4;
L_002FC900:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[10].w[0] + 14208u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002FC944; } }
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC958; } }
L_002FC928:
    set32(c.r[2], c.r[9].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[18].d[0] = c.r[18].d[0] & c.r[3].d[0];
    c.r[18].d[0] = c.r[18].d[0] | c.r[4].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FC9D4; } }
L_002FC944:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FC954u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FC954u) [[unlikely]] return; }
L_002FC954:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FC958:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FC9D4; } }
    set32(c.r[3], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[4], c.r[4].w[0] + 14208u);
    set32(c.r[9], c.r[2].w[0] + 16512u);
    set32(c.r[5], 0u + 80u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = c.r[18].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 7694u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[2].w[0] + c.r[9].w[0]);
    c.budget -= 15;
L_002FC9B0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC928u | kUnwind; return; } goto L_002FC928; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.r[2].d[0] = c.r[7].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FC9B0u | kUnwind; return; } goto L_002FC9B0; } }
L_002FC9D4:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[10].w[0] + 27456u);
    mmi::mult(c, 0, c.r[30].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[17], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 9;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002FCA04; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCA14; } }
L_002FCA04:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA14u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FCA14u) [[unlikely]] return; }
L_002FCA14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCA50; } }
    set32(c.r[16], ld32((c.r[16].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] + 24688u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[16], c.r[16].w[0] << 5);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCA44u);  if (depth < kMaxDepth) unit_0097(c, 145u, depth + 1u); else { c.pc = 0x0035D538u; return; } if (c.pc != 0x002FCA44u) [[unlikely]] return; }
L_002FCA44:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[2].d[0] = ~(0ull | c.r[3].d[0]);
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[3].d[0];
    c.budget -= 3;
L_002FCA50:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
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
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FCA88:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[20].w[0] + 1u);
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    set32(c.r[21], c.r[3].w[0] + 14208u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.r[22].d[0] = c.r[3].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[21].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 22;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_002FCB44; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAECu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FCAECu) [[unlikely]] return; }
L_002FCAEC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCAFCu);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FCAFCu) [[unlikely]] return; }
L_002FCAFC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 19u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4016u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FCB44; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[4].w[0] << 1);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4168u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCB48; } }
L_002FCB44:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FCB48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCBF4; } }
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[20].w[0] + 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[22].w[0] + 14208u);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 113u));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 113u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002FCBBC; } }
    set32(c.r[16], c.r[16].w[0] + 19u);
    set32(c.r[2], 0u + 19u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002FCBA4; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002FCBB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCBF0; } }
L_002FCBA4:
    set32(c.r[16], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCBF0; } }
L_002FCBB0:
    set32(c.r[16], 0u + 19u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCBF0; } }
L_002FCBBC:
    set32(c.r[16], c.r[16].w[0] + 19u);
    set32(c.r[2], 0u + 21u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002FCBE0; } }
    set32(c.r[2], 0u + 22u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002FCBEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCBF0; } }
L_002FCBE0:
    set32(c.r[16], 0u + 22u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCBF0; } }
L_002FCBEC:
    set32(c.r[16], 0u + 21u);
    c.budget -= 1;
L_002FCBF0:
    set32(c.r[16], c.r[16].w[0] - 19u);
    c.budget -= 1;
L_002FCBF4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[22]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 128u);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FCC28:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    set32(c.r[21], c.r[17].w[0] + 14208u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[16].w[0] + 1u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[23].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC70u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FCC70u) [[unlikely]] return; }
L_002FCC70:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCC88u);  if (depth < kMaxDepth) unit_007F(c, 39u, depth + 1u); else { c.pc = 0x002FCA88u; return; } if (c.pc != 0x002FCC88u) [[unlikely]] return; }
L_002FCC88:
    set32(c.r[2], 0u + 13248u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[17].w[0] + c.r[21].w[0]);
    set32(c.r[20], ld32((c.r[18].w[0] + 10152u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCA4u);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FCCA4u) [[unlikely]] return; }
L_002FCCA4:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002FCCCC; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[8].w[0] << 1);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6904u)));
    c.budget -= 7;
L_002FCCCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002FCE74; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCCE0u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FCCE0u) [[unlikely]] return; }
L_002FCCE0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9934u)));
    c.r[16].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FCDC4; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[8].w[0] << 1);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6904u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FCD50; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FCDC4; } }
    set32(c.r[2], 0u + 38u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[21].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6904u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FCDC4; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FCDC4; } }
L_002FCD50:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FCD8C; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[23].w[0] + 14208u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 38u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6904u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCE74; } }
L_002FCD8C:
    set32(c.r[5], 0u + 13248u);
    set32(c.r[6], c.r[23].w[0] + 14208u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 38u);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6904u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCE74; } }
L_002FCDC4:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[16].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[23].w[0] + 14208u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 6904u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FCE1C; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FCE1C; } }
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FCE48; } }
L_002FCE1C:
    set32(c.r[3], 0u + 38u);
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[23].w[0] + 14208u);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6904u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FCE54; } }
L_002FCE48:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FCE74; } }
L_002FCE54:
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31832u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6992u)));
    st16((c.r[3].w[0] + 9028u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_002FCE74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
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
L_002FCEA8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[22], c.r[4].w[0] + 1u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    set32(c.r[20], c.r[16].w[0] + 14208u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[23].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCEECu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FCEECu) [[unlikely]] return; }
L_002FCEEC:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[2], 0u + 13248u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    mmi::mult(c, 0, c.r[22].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[18], c.r[17].w[0] + c.r[20].w[0]);
    set32(c.r[19], ld32((c.r[18].w[0] + 10152u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF0Cu);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FCF0Cu) [[unlikely]] return; }
L_002FCF0C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002FCF34; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[8].w[0] << 1);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7208u)));
    c.budget -= 7;
L_002FCF34:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002FD0DC; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FCF48u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FCF48u) [[unlikely]] return; }
L_002FCF48:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9934u)));
    c.r[10].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FD02C; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[8].w[0] << 1);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7208u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FCFB8; } }
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FD02C; } }
    set32(c.r[2], 0u + 38u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7208u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD02C; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FD02C; } }
L_002FCFB8:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FCFF4; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[23].w[0] + 14208u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 38u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7208u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD0DC; } }
L_002FCFF4:
    set32(c.r[5], 0u + 13248u);
    set32(c.r[6], c.r[23].w[0] + 14208u);
    mmi::mult(c, 0, c.r[10].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 38u);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 7208u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD0DC; } }
L_002FD02C:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[10].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[23].w[0] + 14208u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 7208u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD084; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FD084; } }
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD0B0; } }
L_002FD084:
    set32(c.r[3], 0u + 38u);
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[23].w[0] + 14208u);
    set32(c.r[7], c.r[2].w[0] + c.r[7].w[0]);
    mmi::mult(c, 0, c.r[10].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7208u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD0BC; } }
L_002FD0B0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD0DC; } }
L_002FD0BC:
    mmi::mult(c, 0, c.r[21].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31832u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 7296u)));
    st16((c.r[3].w[0] + 9030u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_002FD0DC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
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
L_002FD110:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD138u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FD138u) [[unlikely]] return; }
L_002FD138:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD14Cu);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FD14Cu) [[unlikely]] return; }
L_002FD14C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002FD18C; } }
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[17].w[0] + 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 974u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD20C; } }
L_002FD18C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD198u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FD198u) [[unlikely]] return; }
L_002FD198:
    set32(c.r[4], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FD1E4; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[7].w[0] << 1);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 974u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD20C; } }
L_002FD1E4:
    set32(c.r[4], 0u + 38u);
    set32(c.r[5], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[9].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 974u)));
    c.budget -= 10;
L_002FD20C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FD230:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD258u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FD258u) [[unlikely]] return; }
L_002FD258:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD26Cu);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FD26Cu) [[unlikely]] return; }
L_002FD26C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002FD2AC; } }
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[17].w[0] + 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 670u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD43C; } }
L_002FD2AC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD2B8u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FD2B8u) [[unlikely]] return; }
L_002FD2B8:
    set32(c.r[4], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FD3A8; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[8].w[0] << 1);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 670u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD334; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FD3A8; } }
    set32(c.r[2], 0u + 38u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 670u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD3A8; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FD3A8; } }
L_002FD334:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FD370; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 38u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 670u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD43C; } }
L_002FD370:
    set32(c.r[5], 0u + 13248u);
    set32(c.r[6], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 38u);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 670u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD43C; } }
L_002FD3A8:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + 14208u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 670u);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD400; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FD400; } }
    set32(c.r[2], c.r[10].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD43C; } }
L_002FD400:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] + 14208u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 670u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD43C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[3].w[0] + 31832u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 4;
L_002FD43C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FD460:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD484u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FD484u) [[unlikely]] return; }
L_002FD484:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD494u);  if (depth < kMaxDepth) unit_003D(c, 160u, depth + 1u); else { c.pc = 0x001F6E68u; return; } if (c.pc != 0x002FD494u) [[unlikely]] return; }
L_002FD494:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], 0u + 13248u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[16].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[3].w[0] + 14208u);
    set32(c.r[16], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 113u));
    c.r[4].d[0] = ld8((c.r[16].w[0] + 113u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9934u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 18;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002FD510; } }
    set32(c.r[2], 0u + 19u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4016u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD530; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[6].w[0] << 1);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD548; } }
L_002FD510:
    set32(c.r[2], 0u + 19u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4016u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD53C; } }
L_002FD530:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD558; } }
L_002FD53C:
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[6].w[0] << 1);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.budget -= 3;
L_002FD548:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 4168u)));
    c.budget -= 4;
L_002FD558:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002FD568; } }
    set32(c.r[2], 0u + 4096u);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_002FD568:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FD588:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5ACu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FD5ACu) [[unlikely]] return; }
L_002FD5AC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD5BCu);  if (depth < kMaxDepth) unit_003D(c, 160u, depth + 1u); else { c.pc = 0x001F6E68u; return; } if (c.pc != 0x002FD5BCu) [[unlikely]] return; }
L_002FD5BC:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], c.r[17].w[0] + 1u);
    set32(c.r[2], 0u + 38u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[7], c.r[3].w[0] + 3104u);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD620; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002FD620; } }
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD664; } }
L_002FD620:
    set32(c.r[4], 0u + 38u);
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], c.r[17].w[0] + 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[8].w[0] + 14208u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 3104u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD664; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[3].w[0] + 31832u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2432u)));
    c.budget -= 4;
L_002FD664:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FD680:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD6B0u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FD6B0u) [[unlikely]] return; }
L_002FD6B0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD6C0u);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FD6C0u) [[unlikely]] return; }
L_002FD6C0:
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[11].d[0] == 0ull;  if (t) { goto L_002FD76C; } }
    set32(c.r[2], 0u + 38u);
    set32(c.r[5], c.r[16].w[0] + 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[11].w[0] << 1);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], c.r[20].w[0] + 14208u);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1886u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD720; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1278u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD720; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1582u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD76C; } }
L_002FD720:
    set32(c.r[2], 0u + 38u);
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[20].w[0] + 14208u);
    set32(c.r[2], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0] + 1886u));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[4].w[0] + 10060u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 1278u));
    st16((c.r[4].w[0] + 10056u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 1582u));
    st16((c.r[4].w[0] + 10058u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDB94; } }
L_002FD76C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FD778u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FD778u) [[unlikely]] return; }
L_002FD778:
    set32(c.r[4], c.r[16].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[20].w[0] + 14208u);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002FD8C4; } }
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], c.r[11].w[0] << 1);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1886u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD828; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1278u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD828; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1582u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD828; } }
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002FD8C4; } }
    set32(c.r[2], 0u + 38u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1886u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FD81C; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1278u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD81C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1582u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD8C4; } }
L_002FD81C:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[2].d[0];  if (t) { goto L_002FD8C4; } }
L_002FD828:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[2].d[0];  if (t) { goto L_002FD880; } }
    set32(c.r[3], 0u + 13248u);
    set32(c.r[4], c.r[20].w[0] + 14208u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 38u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 1886u));
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[6].w[0] + 10060u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 1278u));
    st16((c.r[6].w[0] + 10056u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1582u));
    st16((c.r[6].w[0] + 10058u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDA0C; } }
L_002FD880:
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[20].w[0] + 14208u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 38u);
    set32(c.r[3], c.r[11].w[0] << 1);
    set32(c.r[6], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 1886u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[6].w[0] + 10060u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FD9C4; } }
L_002FD8C4:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[11].w[0] << 1);
    set32(c.r[8], c.r[20].w[0] + 14208u);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[9], c.r[8].w[0] + 1278u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD948; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[11].d[0] != c.r[2].d[0];  if (t) { goto L_002FD948; } }
    set32(c.r[5], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FD948; } }
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[8].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0] + 1886u));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st16((c.r[4].w[0] + 10060u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[6].w[0]));
    st16((c.r[4].w[0] + 10056u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 1582u));
    st16((c.r[4].w[0] + 10058u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDA0C; } }
L_002FD948:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[3], 0u + 38u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[20].w[0] + 14208u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[6].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1886u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD98C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1278u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FD98C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1582u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FD9DC; } }
L_002FD98C:
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[11].w[0] << 1);
    set32(c.r[5], c.r[20].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1886u));
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st16((c.r[6].w[0] + 10060u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 14;
L_002FD9C4:
    c.r[2].d[0] = ld16((c.r[7].w[0] + 1278u));
    st16((c.r[6].w[0] + 10056u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 1582u));
    st16((c.r[6].w[0] + 10058u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDA0C; } }
L_002FD9DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31832u);
    set32(c.r[7], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[3].w[0] + 1216u));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[2].w[0] + 608u));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 912u));
    st16((c.r[4].w[0] + 10060u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 10058u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 10056u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 12;
L_002FDA0C:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDA18u);  if (depth < kMaxDepth) unit_003D(c, 160u, depth + 1u); else { c.pc = 0x001F6E68u; return; } if (c.pc != 0x002FDA18u) [[unlikely]] return; }
L_002FDA18:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[6], c.r[20].w[0] + 14208u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FDACC; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[11].w[0] << 1);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[6].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 1886u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FDA7C; } }
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1278u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDA7C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1582u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FDACC; } }
L_002FDA7C:
    set32(c.r[3], 0u + 13248u);
    set32(c.r[4], c.r[20].w[0] + 14208u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 38u);
    set32(c.r[6], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld16((c.r[5].w[0] + 1886u));
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    st16((c.r[6].w[0] + 10060u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 1278u));
    st16((c.r[6].w[0] + 10056u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 1582u));
    st16((c.r[6].w[0] + 10058u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 20;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDB94; } }
L_002FDACC:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[3].w[0]);
    c.r[9].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[11].w[0] << 1);
    set32(c.r[6], c.r[20].w[0] + 14208u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[5].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1886u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDB18; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1278u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDB18; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 1582u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FDB64; } }
L_002FDB18:
    set32(c.r[2], 0u + 38u);
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[17].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[20].w[0] + 14208u);
    set32(c.r[2], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = ld16((c.r[3].w[0] + 1886u));
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    st16((c.r[4].w[0] + 10066u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[2].d[0] = ld16((c.r[7].w[0] + 1278u));
    st16((c.r[4].w[0] + 10062u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[5].w[0] + 1582u));
    st16((c.r[4].w[0] + 10064u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 19;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDB94; } }
L_002FDB64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[4], c.r[9].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31832u);
    set32(c.r[7], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[5].d[0] = ld16((c.r[3].w[0] + 1216u));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[6].d[0] = ld16((c.r[2].w[0] + 608u));
    c.r[3].d[0] = ld16((c.r[7].w[0] + 912u));
    st16((c.r[4].w[0] + 10066u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 10064u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 10062u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 12;
L_002FDB94:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FDBB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDBDCu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FDBDCu) [[unlikely]] return; }
L_002FDBDC:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDBECu);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FDBECu) [[unlikely]] return; }
L_002FDBEC:
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002FDCD0; } }
    set32(c.r[4], c.r[17].w[0] + 1u);
    set32(c.r[2], 0u + 13248u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[3].w[0] + 14208u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    c.r[12].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 11;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FDC98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16464u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDC54; } }
    set32(c.r[2], 0u + 19u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4016u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDDB0; } }
L_002FDC54:
    set32(c.r[5], 0u + 13248u);
    set32(c.r[6], c.r[12].w[0] + 14208u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 38u);
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9934u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 113u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4168u)));
    c.budget -= 15;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002FDDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDDF4; } }
L_002FDC98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16464u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDDBC; } }
    set32(c.r[2], 0u + 19u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4016u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDDB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDDBC; } }
L_002FDCD0:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDCDCu);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FDCDCu) [[unlikely]] return; }
L_002FDCDC:
    set32(c.r[5], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[6], c.r[4].w[0] + 14208u);
    c.r[9].d[0] = c.r[2].d[0] + 0ull;
    c.r[12].d[0] = c.r[4].d[0] + 0ull;
    c.r[11].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], c.r[7].w[0] + c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 12;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FDD80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16464u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDD3C; } }
    set32(c.r[2], 0u + 19u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4016u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDDB0; } }
L_002FDD3C:
    set32(c.r[5], 0u + 13248u);
    set32(c.r[6], c.r[12].w[0] + 14208u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 38u);
    set32(c.r[3], c.r[9].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9934u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 113u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4168u)));
    c.budget -= 15;
    { const bool t = c.r[8].d[0] != 0ull;  if (t) { goto L_002FDDFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDDF4; } }
L_002FDD80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 16464u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDDBC; } }
    set32(c.r[2], 0u + 19u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4016u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FDDBC; } }
L_002FDDB0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FDDFC; } }
L_002FDDBC:
    set32(c.r[5], 0u + 38u);
    set32(c.r[4], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[9].w[0] << 1);
    set32(c.r[3], c.r[12].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 113u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4168u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_002FDDFC; } }
L_002FDDF4:
    set32(c.r[2], 0u + 4096u);
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_002FDDFC:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[18]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 64u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FDE20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE48u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FDE48u) [[unlikely]] return; }
L_002FDE48:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDE5Cu);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FDE5Cu) [[unlikely]] return; }
L_002FDE5C:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002FDE9C; } }
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[17].w[0] + 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2800u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE02C; } }
L_002FDE9C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FDEA8u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FDEA8u) [[unlikely]] return; }
L_002FDEA8:
    set32(c.r[4], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FDF98; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[8].w[0] << 1);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2800u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDF24; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FDF98; } }
    set32(c.r[2], 0u + 38u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2800u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FDF98; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FDF98; } }
L_002FDF24:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FDF60; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 38u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 2800u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE02C; } }
L_002FDF60:
    set32(c.r[5], 0u + 13248u);
    set32(c.r[6], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 38u);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2800u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE02C; } }
L_002FDF98:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + 14208u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 2800u);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FDFF0; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FDFF0; } }
    set32(c.r[2], c.r[10].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE02C; } }
L_002FDFF0:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] + 14208u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2800u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE02C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[3].w[0] + 31832u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2128u)));
    c.budget -= 4;
L_002FE02C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE050:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE078u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FE078u) [[unlikely]] return; }
L_002FE078:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE08Cu);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FE08Cu) [[unlikely]] return; }
L_002FE08C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002FE0CC; } }
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[17].w[0] + 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 3104u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE164; } }
L_002FE0CC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE0D8u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FE0D8u) [[unlikely]] return; }
L_002FE0D8:
    set32(c.r[4], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[8], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[8].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FE124; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[7].w[0] << 1);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 3104u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE164; } }
L_002FE124:
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[2], c.r[19].w[0] + 14208u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 3104u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE164; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[3].w[0] + 31832u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2432u)));
    c.budget -= 4;
L_002FE164:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE188:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE1B0u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FE1B0u) [[unlikely]] return; }
L_002FE1B0:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE1C4u);  if (depth < kMaxDepth) unit_003D(c, 146u, depth + 1u); else { c.pc = 0x001F6C98u; return; } if (c.pc != 0x002FE1C4u) [[unlikely]] return; }
L_002FE1C4:
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == 0ull;  if (t) { goto L_002FE204; } }
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[17].w[0] + 1u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 3408u)));
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE394; } }
L_002FE204:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE210u);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FE210u) [[unlikely]] return; }
L_002FE210:
    set32(c.r[4], c.r[17].w[0] + 1u);
    set32(c.r[3], 0u + 13248u);
    c.r[11].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[5], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[8].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 9934u)));
    c.budget -= 10;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FE300; } }
    set32(c.r[3], 0u + 38u);
    set32(c.r[2], c.r[8].w[0] << 1);
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 3408u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FE28C; } }
    c.budget -= 2;
    { const bool t = c.r[6].sd[0] < 0;  if (t) { goto L_002FE300; } }
    set32(c.r[2], 0u + 38u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 3408u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FE300; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FE300; } }
L_002FE28C:
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FE2C8; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[5], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[6], 0u + 38u);
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 3408u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE394; } }
L_002FE2C8:
    set32(c.r[5], 0u + 13248u);
    set32(c.r[6], c.r[19].w[0] + 14208u);
    mmi::mult(c, 0, c.r[11].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[7], 0u + 38u);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 9934u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 3408u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE394; } }
L_002FE300:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[10].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[6].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[19].w[0] + 14208u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[5], c.r[3].w[0] + 3408u);
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 14;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FE358; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] != c.r[2].d[0];  if (t) { goto L_002FE358; } }
    set32(c.r[2], c.r[10].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE394; } }
L_002FE358:
    set32(c.r[2], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[11].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[19].w[0] + 14208u);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 3408u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE394; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00620000u);
    set32(c.r[3], c.r[3].w[0] + 31832u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2736u)));
    c.budget -= 4;
L_002FE394:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[19]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 80u);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE3B8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE3E4u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FE3E4u) [[unlikely]] return; }
L_002FE3E4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE3F4u);  if (depth < kMaxDepth) unit_003D(c, 147u, depth + 1u); else { c.pc = 0x001F6CA8u; return; } if (c.pc != 0x002FE3F4u) [[unlikely]] return; }
L_002FE3F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE434; } }
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[18].w[0] + 1u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 3104u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE48C; } }
L_002FE434:
    set32(c.r[17], 0u + 13248u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE450u);  if (depth < kMaxDepth) unit_003D(c, 161u, depth + 1u); else { c.pc = 0x001F6E78u; return; } if (c.pc != 0x002FE450u) [[unlikely]] return; }
L_002FE450:
    set32(c.r[3], 0u + 38u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] - 10144u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE48C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE48Cu);  if (depth < kMaxDepth) unit_007F(c, 78u, depth + 1u); else { c.pc = 0x002FE050u; return; } if (c.pc != 0x002FE48Cu) [[unlikely]] return; }
L_002FE48C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE4B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE4DCu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FE4DCu) [[unlikely]] return; }
L_002FE4DC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE4ECu);  if (depth < kMaxDepth) unit_003D(c, 147u, depth + 1u); else { c.pc = 0x001F6CA8u; return; } if (c.pc != 0x002FE4ECu) [[unlikely]] return; }
L_002FE4EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE52C; } }
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[18].w[0] + 1u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 670u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE584; } }
L_002FE52C:
    set32(c.r[17], 0u + 13248u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE548u);  if (depth < kMaxDepth) unit_003D(c, 161u, depth + 1u); else { c.pc = 0x001F6E78u; return; } if (c.pc != 0x002FE548u) [[unlikely]] return; }
L_002FE548:
    set32(c.r[3], 0u + 38u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] - 12578u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE584; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE584u);  if (depth < kMaxDepth) unit_007F(c, 55u, depth + 1u); else { c.pc = 0x002FD230u; return; } if (c.pc != 0x002FE584u) [[unlikely]] return; }
L_002FE584:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE5A8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE5D4u);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FE5D4u) [[unlikely]] return; }
L_002FE5D4:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE5E4u);  if (depth < kMaxDepth) unit_003D(c, 147u, depth + 1u); else { c.pc = 0x001F6CA8u; return; } if (c.pc != 0x002FE5E4u) [[unlikely]] return; }
L_002FE5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE624; } }
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[18].w[0] + 1u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2800u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE67C; } }
L_002FE624:
    set32(c.r[17], 0u + 13248u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE640u);  if (depth < kMaxDepth) unit_003D(c, 161u, depth + 1u); else { c.pc = 0x001F6E78u; return; } if (c.pc != 0x002FE640u) [[unlikely]] return; }
L_002FE640:
    set32(c.r[3], 0u + 38u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] - 10448u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE67C; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE67Cu);  if (depth < kMaxDepth) unit_007F(c, 74u, depth + 1u); else { c.pc = 0x002FDE20u; return; } if (c.pc != 0x002FE67Cu) [[unlikely]] return; }
L_002FE67C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE6A0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6CCu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FE6CCu) [[unlikely]] return; }
L_002FE6CC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE6DCu);  if (depth < kMaxDepth) unit_003D(c, 147u, depth + 1u); else { c.pc = 0x001F6CA8u; return; } if (c.pc != 0x002FE6DCu) [[unlikely]] return; }
L_002FE6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE71C; } }
    set32(c.r[4], 0u + 38u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[18].w[0] + 1u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 3408u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE774; } }
L_002FE71C:
    set32(c.r[17], 0u + 13248u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[16].w[0] + 27456u);
    set32(c.r[4], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE738u);  if (depth < kMaxDepth) unit_003D(c, 161u, depth + 1u); else { c.pc = 0x001F6E78u; return; } if (c.pc != 0x002FE738u) [[unlikely]] return; }
L_002FE738:
    set32(c.r[3], 0u + 38u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[17], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] - 9840u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE774; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE774u);  if (depth < kMaxDepth) unit_007F(c, 82u, depth + 1u); else { c.pc = 0x002FE188u; return; } if (c.pc != 0x002FE774u) [[unlikely]] return; }
L_002FE774:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[20]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 96u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FE798:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[3], 0u + 1056u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + 17040u);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[16]);
    set32(c.r[6], c.r[2].w[0] + 8u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[18]);
    set32(c.r[5], c.r[4].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[21]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[22]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[23]);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[22], c.r[7].w[0] + 14208u);
    c.r[23].d[0] = c.r[7].d[0] + 0ull;
    c.f[0] = ld32((c.r[5].w[0]));
    set32(c.r[21], c.r[19].w[0] + 1u);
    c.f[13] = ld32((c.r[2].w[0]));
    set32(c.r[18], 0u + 13248u);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[13] = fp::sub(c.f[13], c.f[0]);
    c.f[12] = ld32((c.r[4].w[0]));
    c.f[12] = fp::sub(c.f[1], c.f[12]);
    c.f[13] = c.f[13] ^ fp::kSign;
    c.budget -= 37;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE82Cu);  if (depth < kMaxDepth) unit_0045(c, 101u, depth + 1u); else { c.pc = 0x00215D70u; return; } if (c.pc != 0x002FE82Cu) [[unlikely]] return; }
L_002FE82C:
    mmi::mult(c, 0, c.r[21].w[0], c.r[18].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1024u);
    c.f[13] = c.r[2].w[0];
    c.f[13] = fp::cvt_s_w(c.f[13]);
    set32(c.r[16], c.r[3].w[0] + c.r[22].w[0]);
    c.f[12] = ld32((c.r[16].w[0] + 148u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE850u);  if (depth < kMaxDepth) unit_006E(c, 185u, depth + 1u); else { c.pc = 0x002BA8C0u; return; } if (c.pc != 0x002FE850u) [[unlikely]] return; }
L_002FE850:
    set32(c.r[2], 0u + 11u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_002FE870; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[5], 0u + 53u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE870u);  if (depth < kMaxDepth) unit_0081(c, 168u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x002FE870u) [[unlikely]] return; }
L_002FE870:
    mmi::mult(c, 0, c.r[20].w[0], c.r[18].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[3], c.r[2].w[0] + c.r[18].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[22].w[0]);
    c.r[18].d[0] = c.r[21].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7669u)));
    if (c.r[2].d[0] != 0) c.r[17].d[0] = c.r[2].d[0];
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002FE8AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE8A8u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FE8A8u) [[unlikely]] return; }
L_002FE8A8:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FE8AC:
    c.r[2].d[0] = ld16((c.r[4].w[0] + 40u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 5024u), c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE90C; } }
    set32(c.r[3], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(5ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE90C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - 18016u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x002FC000u < 16384u) { entry = entries_007F[(t - 0x002FC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FE8F0:
    set32(c.r[17], 0u + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE90C; } }
L_002FE8FC:
    set32(c.r[17], 0u + 9u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE90C; } }
L_002FE908:
    set32(c.r[17], 0u + 10u);
    c.budget -= 1;
L_002FE90C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE91Cu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FE91Cu) [[unlikely]] return; }
L_002FE91C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], 0u + 1u);
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    st32((c.r[16].w[0] + 16464u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE938u);  if (depth < kMaxDepth) unit_007F(c, 70u, depth + 1u); else { c.pc = 0x002FDBB8u; return; } if (c.pc != 0x002FE938u) [[unlikely]] return; }
L_002FE938:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 16464u), 0u);
    c.r[2].d[0] = c.r[4].sd[0] < 2049ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE958; } }
    set32(c.r[4], c.r[4].w[0] - 4096u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FE968; } }
L_002FE958:
    set32(c.r[2], 0u - 2049u);
    set32(c.r[3], c.r[4].w[0] + 4096u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[4].d[0] = c.r[3].d[0];
    c.budget -= 4;
L_002FE968:
    set32(c.r[2], c.r[4].w[0] - 513u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1023ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE990; } }
    c.r[2].d[0] = c.r[4].sd[0] < -512ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FE9A4; } }
    c.r[2].d[0] = c.r[4].sd[0] < -1535ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FE9A4; } }
L_002FE990:
    set32(c.r[2], 0u + 13248u);
    set32(c.r[4], c.r[23].w[0] + 14208u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 113u)));
    c.budget -= 5;
L_002FE9A4:
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    set32(c.r[4], 0u + 13248u);
    set32(c.r[6], c.r[23].w[0] + 14208u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[18].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[8], c.r[6].w[0] + 13248u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[4].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[3].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], 0u + 12u);
    st16((c.r[2].w[0] + 9008u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], c.r[7].w[0] + c.r[8].w[0]);
    st32((c.r[2].w[0] + 7700u), c.r[3].w[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FE9E4u);  if (depth < kMaxDepth) unit_007A(c, 114u, depth + 1u); else { c.pc = 0x002E95E0u; return; } if (c.pc != 0x002FE9E4u) [[unlikely]] return; }
L_002FE9E4:
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
L_002FEA18:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[17], 0u + 13248u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    set32(c.r[20], c.r[2].w[0] + 27456u);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[20].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEA5Cu);  if (depth < kMaxDepth) unit_003D(c, 148u, depth + 1u); else { c.pc = 0x001F6CB8u; return; } if (c.pc != 0x002FEA5Cu) [[unlikely]] return; }
L_002FEA5C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEA6Cu);  if (depth < kMaxDepth) unit_003D(c, 151u, depth + 1u); else { c.pc = 0x001F6D80u; return; } if (c.pc != 0x002FEA6Cu) [[unlikely]] return; }
L_002FEA6C:
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    mmi::mult(c, 0, c.r[19].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 3314u)));
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FEABC; } }
    set32(c.r[3], 0u + 152u);
    set32(c.r[2], c.r[7].w[0] << 3);
    mmi::mult(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[2].w[0] - 7560u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEABC; } }
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FEAF0; } }
L_002FEABC:
    set32(c.r[4], 0u + 152u);
    set32(c.r[3], 0u + 13248u);
    set32(c.r[5], c.r[19].w[0] + 1u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[7].w[0] << 3);
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[3], c.r[3].w[0] + 14208u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[3].w[0] + 5688u));
    c.budget -= 13;
L_002FEAF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002FEB14; } }
    set32(c.r[3], 0u + 152u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00620000u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[3].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 31832u);
    set32(c.r[3], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld64((c.r[2].w[0] + 5776u));
    c.budget -= 7;
L_002FEB14:
    c.r[2].d[0] = c.r[16].d[0] & 63ull;
    c.r[7].d[0] = c.r[2].d[0] << 32;
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 32);
    c.budget -= 5;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002FEB48; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[6], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEB48u);  if (depth < kMaxDepth) unit_0079(c, 183u, depth + 1u); else { c.pc = 0x002E6B68u; return; } if (c.pc != 0x002FEB48u) [[unlikely]] return; }
L_002FEB48:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 6);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 12);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 18);
    c.r[3].d[0] = c.r[3].d[0] & 63ull;
    c.r[4].d[0] = c.r[4].d[0] & 63ull;
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st16((c.r[18].w[0] + 9014u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 8938u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 9016u), static_cast<std::uint16_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[21]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 112u);
    c.budget -= 22;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FEBA0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[21]);
    set32(c.r[19], 0u + 1u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[22]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[23]);
    set32(c.r[22], c.r[20].w[0] + 25152u);
    set32(c.r[2], ld32((c.r[20].w[0] + 25152u)));
    c.r[23].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[16]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[18]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] == c.r[19].d[0];  if (t) { goto L_002FECB8; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[16], c.r[16].w[0] - 6080u);
    set32(c.r[17], c.r[17].w[0] + 14208u);
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[20].w[0] + 25152u), c.r[19].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC20u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002FEC20u) [[unlikely]] return; }
L_002FEC20:
    set32(c.r[18], c.r[22].w[0] + 16u);
    c.f[14] = ld32((c.r[16].w[0] + 136u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[12] = ld32((c.r[16].w[0] + 128u));
    c.f[13] = ld32((c.r[16].w[0] + 132u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[15] = c.r[1].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC44u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002FEC44u) [[unlikely]] return; }
L_002FEC44:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[20].w[0] + 25152u), c.r[19].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC58u);  if (depth < kMaxDepth) unit_0045(c, 31u, depth + 1u); else { c.pc = 0x00214688u; return; } if (c.pc != 0x002FEC58u) [[unlikely]] return; }
L_002FEC58:
    set32(c.r[2], c.r[21].w[0] << 1);
    set32(c.r[6], 0u - 1u);
    set32(c.r[2], c.r[22].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[17].w[0] + 13248u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 32u)));
    set32(c.r[7], 0u + 2u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC78u);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x002FEC78u) [[unlikely]] return; }
L_002FEC78:
    set32(c.r[6], ld32((c.r[23].w[0] + 104u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[8], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEC98u);  if (depth < kMaxDepth) unit_007F(c, 130u, depth + 1u); else { c.pc = 0x002FEDB8u; return; } if (c.pc != 0x002FEC98u) [[unlikely]] return; }
L_002FEC98:
    st32((c.r[22].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    st32((c.r[20].w[0] + 25152u), 0u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FECB4u);  if (depth < kMaxDepth) unit_0043(c, 232u, depth + 1u); else { c.pc = 0x0020F750u; return; } if (c.pc != 0x002FECB4u) [[unlikely]] return; }
L_002FECB4:
    st32((c.r[20].w[0] + 25152u), 0u);
    c.budget -= 1;
L_002FECB8:
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
L_002FECE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 640u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FED30; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 11264u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 11264u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FED30; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FED30; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002FED30; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FED70; } }
L_002FED30:
    set32(c.r[3], ld32((c.r[4].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00720000u);
    set32(c.r[4], 0u + 1536u);
    set32(c.r[2], c.r[2].w[0] - 6944u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] - 984u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FEDA8; } }
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FED7C; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 13192u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FED7C; } }
L_002FED70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FEDA8; } }
L_002FED7C:
    c.r[2].d[0] = c.r[4].d[0] & 2ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEDA4; } }
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FED94u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x002FED94u) [[unlikely]] return; }
L_002FED94:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FEDA8; } }
L_002FEDA4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002FEDA8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FEDB8:
    set32(c.r[29], c.r[29].w[0] - 1296u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    st32((c.r[29].w[0] + 1072u), c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    st128((c.r[29].w[0] + 1152u) & ~15u, c.r[22]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st128((c.r[29].w[0] + 1168u) & ~15u, c.r[21]);
    set32(c.r[4], 0u + 13248u);
    c.r[3].d[0] = c.r[5].d[0] ^ 22ull;
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    mmi::mult(c, 0, c.r[22].w[0], c.r[4].w[0]);
    c.r[8].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[21].w[0], c.r[4].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    st128((c.r[29].w[0] + 1216u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 1200u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 1136u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 1248u) & ~15u, c.r[16]);
    set32(c.r[19], c.r[8].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 1232u) & ~15u, c.r[17]);
    set32(c.r[18], c.r[5].w[0] + c.r[2].w[0]);
    st128((c.r[29].w[0] + 1184u) & ~15u, c.r[20]);
    c.r[23].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    st128((c.r[29].w[0] + 1120u) & ~15u, c.r[30]);
    st64((c.r[29].w[0] + 1104u), c.r[31].d[0]);
    st32((c.r[29].w[0] + 1280u), c.f[22]);
    st32((c.r[29].w[0] + 1272u), c.f[21]);
    st32((c.r[29].w[0] + 1264u), c.f[20]);
    st32((c.r[29].w[0] + 1076u), c.r[7].w[0]);
    c.budget -= 29;
    { const bool t = c.r[23].d[0] == 0ull;  if (t) { goto L_002FEE3C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 10080u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEF04; } }
L_002FEE3C:
    set32(c.r[6], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 13192u)));
    st32((c.r[29].w[0] + 1080u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEE58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    st32((c.r[2].w[0] + 17996u), c.r[21].w[0]);
    c.budget -= 2;
L_002FEE58:
    st8((c.r[19].w[0] + 10086u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[29].w[0] + 1072u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 1076u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEE74u);  if (depth < kMaxDepth) unit_0005(c, 27u, depth + 1u); else { c.pc = 0x00114678u; return; } if (c.pc != 0x002FEE74u) [[unlikely]] return; }
L_002FEE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEF04; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[6], 0u + 1536u);
    set32(c.r[2], ld32((c.r[19].w[0] + 104u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00720000u);
    mmi::mult(c, 0, c.r[4].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[5].w[0] - 6944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] - 1524u);
    set32(c.r[2], c.r[2].w[0] - 1524u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[16], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[29].w[0] + 1084u), c.r[4].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 144u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FEEE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10079u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FEEE8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FEEE8; } }
L_002FEEDC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 85u, depth); } }
L_002FEEE8:
    set32(c.r[2], ld32((c.r[18].w[0] + 11188u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEF10; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FEF10; } }
L_002FEF04:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 85u, depth); } }
L_002FEF10:
    set32(c.r[2], 0u + 93u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FEF28; } }
    set32(c.r[2], 0u + 100u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FEF34; } }
L_002FEF28:
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
L_002FEF34:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF44u);  if (depth < kMaxDepth) unit_007F(c, 128u, depth + 1u); else { c.pc = 0x002FECE8u; return; } if (c.pc != 0x002FEF44u) [[unlikely]] return; }
L_002FEF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 19312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF60u);  if (depth < kMaxDepth) unit_0089(c, 140u, depth + 1u); else { c.pc = 0x003259F8u; return; } if (c.pc != 0x002FEF60u) [[unlikely]] return; }
L_002FEF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEFEC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8960u)));
    set32(c.r[3], 0u + 13248u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 8954u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[7].w[0] + 27456u);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[22].d[0];  if (t) { goto L_002FEFA0; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEF98u);  if (depth < kMaxDepth) unit_0036(c, 442u, depth + 1u); else { c.pc = 0x001DB538u; return; } if (c.pc != 0x002FEF98u) [[unlikely]] return; }
L_002FEF98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FEFEC; } }
L_002FEFA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 1072u)));
    c.r[2].d[0] = c.r[3].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FEFEC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFC0u);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x002FEFC0u) [[unlikely]] return; }
L_002FEFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FEFD4u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x002FEFD4u) [[unlikely]] return; }
L_002FEFD4:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 85u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
L_002FEFEC:
    c.r[3].d[0] = ld8((c.r[18].w[0] + 9040u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF020; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[3], c.r[22].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 2252u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF048; } }
L_002FF020:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF054; } }
    set32(c.r[4], 0u + 13248u);
    set32(c.r[3], c.r[22].w[0] + 1u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 2248u)));
    c.budget -= 7;
L_002FF048:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 85u, depth); } }
L_002FF054:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    set32(c.r[7], ld32((c.r[2].w[0] + 19740u)));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_002FF08C; } }
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 84u)));
    set32(c.r[4], c.r[7].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF084u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF084u) [[unlikely]] return; }
L_002FF084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 85u, depth); } }
L_002FF08C:
    set32(c.r[4], 0u + 13248u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[21].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[5].w[0] + 27456u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[22].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF0B0u);  if (depth < kMaxDepth) unit_006E(c, 72u, depth + 1u); else { c.pc = 0x002B8EA8u; return; } if (c.pc != 0x002FF0B0u) [[unlikely]] return; }
L_002FF0B0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    st32((c.r[29].w[0] + 1088u), c.r[21].w[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF0D0u);  if (depth < kMaxDepth) unit_006D(c, 192u, depth + 1u); else { c.pc = 0x002B7EA8u; return; } if (c.pc != 0x002FF0D0u) [[unlikely]] return; }
L_002FF0D0:
    set32(c.r[3], ld32((c.r[19].w[0] + 560u)));
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 548u)));
    st32((c.r[19].w[0] + 572u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 560u)));
    st32((c.r[18].w[0] + 572u), c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FF11C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7712u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF114; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7714u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[21].d[0];  if (t) { goto L_002FF11C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEEDCu | kUnwind; return; } goto L_002FEEDC; } }
L_002FF114:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[21].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEEDCu | kUnwind; return; } goto L_002FEEDC; } }
L_002FF11C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF128u);  if (depth < kMaxDepth) unit_0091(c, 99u, depth + 1u); else { c.pc = 0x00345108u; return; } if (c.pc != 0x002FF128u) [[unlikely]] return; }
L_002FF128:
    set32(c.r[4], c.r[16].w[0] + 28u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF138u);  if (depth < kMaxDepth) unit_0091(c, 105u, depth + 1u); else { c.pc = 0x00345200u; return; } if (c.pc != 0x002FF138u) [[unlikely]] return; }
L_002FF138:
    set32(c.r[3], ld32((c.r[29].w[0] + 1084u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 1512u)));
    set32(c.r[4], c.r[3].w[0] + 1512u);
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF168; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[18].w[0] + 10079u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 85u, depth); } }
L_002FF168:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF178u);  if (depth < kMaxDepth) unit_0091(c, 85u, depth + 1u); else { c.pc = 0x00344E90u; return; } if (c.pc != 0x002FF178u) [[unlikely]] return; }
L_002FF178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0];  if (t) { goto L_002FF190; } }
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF190u);  if (depth < kMaxDepth) unit_0091(c, 87u, depth + 1u); else { c.pc = 0x00344ED0u; return; } if (c.pc != 0x002FF190u) [[unlikely]] return; }
L_002FF190:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 62u));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF1ACu);  if (depth < kMaxDepth) unit_0091(c, 35u, depth + 1u); else { c.pc = 0x00344598u; return; } if (c.pc != 0x002FF1ACu) [[unlikely]] return; }
L_002FF1AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF1C4u);  if (depth < kMaxDepth) unit_0091(c, 72u, depth + 1u); else { c.pc = 0x00344B98u; return; } if (c.pc != 0x002FF1C4u) [[unlikely]] return; }
L_002FF1C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[17].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF1DCu);  if (depth < kMaxDepth) unit_0080(c, 128u, depth + 1u); else { c.pc = 0x00301F80u; return; } if (c.pc != 0x002FF1DCu) [[unlikely]] return; }
L_002FF1DC:
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    st32((c.r[29].w[0] + 1092u), c.r[17].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 78u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 16);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[21].d[0];  if (t) { goto L_002FF268; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 1072u)));
    c.r[2].d[0] = c.r[4].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF268; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 7700u)));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FF2EC; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00700000u);
    set32(c.r[4], c.r[5].w[0] - 19312u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF23Cu);  if (depth < kMaxDepth) unit_0088(c, 304u, depth + 1u); else { c.pc = 0x00323770u; return; } if (c.pc != 0x002FF23Cu) [[unlikely]] return; }
L_002FF23C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF250u);  if (depth < kMaxDepth) unit_0089(c, 142u, depth + 1u); else { c.pc = 0x00325A50u; return; } if (c.pc != 0x002FF250u) [[unlikely]] return; }
L_002FF250:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 85u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
L_002FF268:
    set32(c.r[6], ld32((c.r[29].w[0] + 1092u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_002FF2BC; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF280u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x002FF280u) [[unlikely]] return; }
L_002FF280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF294; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF2B0; } }
L_002FF294:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF2A0u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x002FF2A0u) [[unlikely]] return; }
L_002FF2A0:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF2B0; } }
    set32(c.r[3], ld32((c.r[29].w[0] + 1092u)));
    c.budget -= 1;
L_002FF2B0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF2C8; } }
L_002FF2BC:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF2CC; } }
L_002FF2C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002FF2CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF2EC; } }
    set32(c.r[5], c.r[22].w[0] + 1u);
    set32(c.r[4], ld32((c.r[29].w[0] + 1084u)));
    set32(c.r[5], c.r[5].w[0] << 16);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF2ECu);  if (depth < kMaxDepth) unit_0091(c, 40u, depth + 1u); else { c.pc = 0x00344668u; return; } if (c.pc != 0x002FF2ECu) [[unlikely]] return; }
L_002FF2EC:
    st16((c.r[18].w[0] + 10038u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 8954u)));
    c.r[2].d[0] = ~(0ull | c.r[2].d[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF304; } }
    st16((c.r[19].w[0] + 7696u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.budget -= 1;
L_002FF304:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[20], c.r[21].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF314u);  if (depth < kMaxDepth) unit_007A(c, 146u, depth + 1u); else { c.pc = 0x002E9BE0u; return; } if (c.pc != 0x002FF314u) [[unlikely]] return; }
L_002FF314:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF320u);  if (depth < kMaxDepth) unit_0070(c, 135u, depth + 1u); else { c.pc = 0x002C1978u; return; } if (c.pc != 0x002FF320u) [[unlikely]] return; }
L_002FF320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 18000u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FF3FC; } }
    set32(c.r[2], 0u + 13248u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[7].w[0] + 14208u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002FF3FC; } }
    set32(c.r[5], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002FF36C; } }
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF380; } }
L_002FF36C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF37Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FF37Cu) [[unlikely]] return; }
L_002FF37C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FF380:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 74u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 5024u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    ldl(c.r[2], (c.r[19].w[0] + 10287u));
    ldr(c.r[2], (c.r[19].w[0] + 10280u));
    set32(c.r[3], ld32((c.r[19].w[0] + 10288u)));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[18].w[0] + 10280u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF3B4u);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x00378980u; return; } if (c.pc != 0x002FF3B4u) [[unlikely]] return; }
L_002FF3B4:
    set32(c.r[16], c.r[16].w[0] << 8);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF3CCu);  if (depth < kMaxDepth) unit_0032(c, 409u, depth + 1u); else { c.pc = 0x001CBF48u; return; } if (c.pc != 0x002FF3CCu) [[unlikely]] return; }
L_002FF3CC:
    set32(c.r[3], 0u + 13248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[2].w[0] + 14208u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 9284u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0] + 9284u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
L_002FF3FC:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FF410; } }
    st32((c.r[19].w[0] + 10216u), 0u);
    c.budget -= 1;
L_002FF410:
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 9032u)));
    st16((c.r[19].w[0] + 10212u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[19].w[0] + 9032u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF42C; } }
    st16((c.r[18].w[0] + 9034u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002FF42C:
    st16((c.r[18].w[0] + 9030u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 2u);
    st16((c.r[18].w[0] + 9826u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 9824u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 9028u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10085u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002FF450; } }
    st8((c.r[19].w[0] + 10085u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002FF450:
    set32(c.r[2], ld32((c.r[19].w[0] + 8992u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF464; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    st32((c.r[19].w[0] + 8992u), c.r[2].w[0]);
    c.budget -= 2;
L_002FF464:
    set32(c.r[2], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] + 14208u);
    st16((c.r[19].w[0] + 8954u), static_cast<std::uint16_t>(c.r[21].w[0]));
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00680000u);
    set32(c.r[16], c.r[16].w[0] + 9872u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 8968u), c.r[23].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF498u);  if (depth < kMaxDepth) unit_0089(c, 162u, depth + 1u); else { c.pc = 0x00325CC8u; return; } if (c.pc != 0x002FF498u) [[unlikely]] return; }
L_002FF498:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4A8u);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002FF4A8u) [[unlikely]] return; }
L_002FF4A8:
    st32((c.r[29].w[0] + 1096u), c.r[2].w[0]);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4BCu);  if (depth < kMaxDepth) unit_0062(c, 84u, depth + 1u); else { c.pc = 0x00289898u; return; } if (c.pc != 0x002FF4BCu) [[unlikely]] return; }
L_002FF4BC:
    set32(c.r[6], ld32((c.r[29].w[0] + 1096u)));
    set32(c.r[5], c.r[21].w[0] << 16);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 16));
    st32((c.r[6].w[0] + 944u), c.r[2].w[0]);
    st32((c.r[6].w[0] + 940u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4DCu);  if (depth < kMaxDepth) unit_0023(c, 244u, depth + 1u); else { c.pc = 0x0018F120u; return; } if (c.pc != 0x002FF4DCu) [[unlikely]] return; }
L_002FF4DC:
    set32(c.r[4], ld32((c.r[19].w[0] + 504u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FF504; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF4F4u);  if (depth < kMaxDepth) unit_009A(c, 134u, depth + 1u); else { c.pc = 0x00369FE0u; return; } if (c.pc != 0x002FF4F4u) [[unlikely]] return; }
L_002FF4F4:
    set32(c.r[4], ld32((c.r[18].w[0] + 504u)));
    set32(c.r[5], ld32((c.r[19].w[0] + 104u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF504u);  if (depth < kMaxDepth) unit_009A(c, 134u, depth + 1u); else { c.pc = 0x00369FE0u; return; } if (c.pc != 0x002FF504u) [[unlikely]] return; }
L_002FF504:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006F0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 25152u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FF568; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10054u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[16].d[0];  if (t) { goto L_002FF544; } }
    set32(c.r[7], ld32((c.r[19].w[0] + 28u)));
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF53Cu);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x002FF53Cu) [[unlikely]] return; }
L_002FF53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF568; } }
L_002FF544:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF550u);  if (depth < kMaxDepth) unit_006B(c, 142u, depth + 1u); else { c.pc = 0x002AECB0u; return; } if (c.pc != 0x002FF550u) [[unlikely]] return; }
L_002FF550:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] - 1u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], 0u - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF568u);  if (depth < kMaxDepth) unit_0079(c, 198u, depth + 1u); else { c.pc = 0x002E6F98u; return; } if (c.pc != 0x002FF568u) [[unlikely]] return; }
L_002FF568:
    set32(c.r[17], 0u + 13248u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[22].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[7].w[0] + 27456u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 16760u);
    set32(c.r[5], c.r[2].w[0] + c.r[16].w[0]);
    mmi::mult(c, 0, c.r[21].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[6], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF594u);  if (depth < kMaxDepth) unit_006E(c, 136u, depth + 1u); else { c.pc = 0x002B9A98u; return; } if (c.pc != 0x002FF594u) [[unlikely]] return; }
L_002FF594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    st16((c.r[18].w[0] + 10052u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 654u), static_cast<std::uint16_t>(0u));
    st16((c.r[18].w[0] + 8960u), static_cast<std::uint16_t>(c.r[22].w[0]));
    set32(c.r[3], ld32((c.r[29].w[0] + 1092u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FF5C8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006C0000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] - 4576u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF5C8u);  if (depth < kMaxDepth) unit_0078(c, 54u, depth + 1u); else { c.pc = 0x002E07B0u; return; } if (c.pc != 0x002FF5C8u) [[unlikely]] return; }
L_002FF5C8:
    set32(c.r[2], c.r[22].w[0] + 1u);
    set32(c.r[6], c.r[16].w[0] - 13248u);
    c.r[23].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[7], 0u + 3u);
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10044u)));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != c.r[7].d[0];  if (t) { goto L_002FF604; } }
    mmi::mult(c, 0, c.r[20].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10044u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002FF648; } }
L_002FF604:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002FF628; } }
    mmi::mult(c, 0, c.r[20].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10044u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_002FF648; } }
L_002FF628:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_002FF670; } }
    mmi::mult(c, 0, c.r[20].w[0], c.r[17].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10044u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002FF670; } }
L_002FF648:
    set32(c.r[3], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[4].w[0] + 14208u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 10098u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 85u, depth); } }
L_002FF670:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 660u)));
    set32(c.r[3], 0u + 13248u);
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    mmi::mult(c, 0, c.r[20].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.f[1] = c.r[4].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], c.r[5].w[0] + 14208u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.r[2].d[0] = ld64((c.r[3].w[0] + 560u));
    c.r[30].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10054u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    set32(c.r[6], ld32((c.r[29].w[0] + 1088u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld16((c.r[19].w[0] + 7680u));
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] << (c.r[6].w[0] & 31u));
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st16((c.r[19].w[0] + 7680u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF6DCu);  if (depth < kMaxDepth) unit_007B(c, 108u, depth + 1u); else { c.pc = 0x002ED760u; return; } if (c.pc != 0x002FF6DCu) [[unlikely]] return; }
L_002FF6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF71C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10079u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF700; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10056u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF71C; } }
L_002FF700:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7710u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF71C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7712u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002FF734; } }
L_002FF71C:
    c.r[2].d[0] = ld64((c.r[19].w[0] + 8928u));
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[3].d[0] = c.r[3].d[0] << 40;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
L_002FF734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 17280u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF760; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 104u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF760; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x006D0000u);
    st8((c.r[18].w[0] + 9968u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] - 17288u), 0u);
    c.budget -= 3;
L_002FF760:
    set32(c.r[7], ld32((c.r[29].w[0] + 1092u)));
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_002FF77C; } }
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF77Cu);  if (depth < kMaxDepth) unit_007C(c, 218u, depth + 1u); else { c.pc = 0x002F3AD0u; return; } if (c.pc != 0x002FF77Cu) [[unlikely]] return; }
L_002FF77C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 9038u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF7D4; } }
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] < 0;  if (t) { goto L_002FF7B0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF7ACu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FF7ACu) [[unlikely]] return; }
L_002FF7AC:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_002FF7B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0] - 5024u), c.r[4].w[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.budget -= 9;
L_002FF7D4:
    set32(c.r[5], ld32((c.r[18].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002FF7EC; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FF7FC; } }
L_002FF7EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF7FCu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FF7FCu) [[unlikely]] return; }
L_002FF7FC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[3].w[0] - 5024u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 29u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF828; } }
    c.f[0] = ld32((c.r[18].w[0] + 148u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 148u), c.f[0]);
    c.budget -= 6;
L_002FF828:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10097u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF854; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10095u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_002FF84C; } }
    set32(c.r[2], 0u + 30u);
    st8((c.r[18].w[0] + 8933u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 10096u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002FF84C:
    set32(c.r[2], 0u + 40u);
    st8((c.r[19].w[0] + 10095u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002FF854:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 69u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FF87C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF87C; } }
    set32(c.r[4], ld32((c.r[29].w[0] + 1092u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
L_002FF87C:
    set32(c.r[6], ld32((c.r[29].w[0] + 1072u)));
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.r[7].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF894u);  if (depth < kMaxDepth) unit_006D(c, 95u, depth + 1u); else { c.pc = 0x002B68A0u; return; } if (c.pc != 0x002FF894u) [[unlikely]] return; }
L_002FF894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF8B4; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 572u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st32((c.r[18].w[0] + 572u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 85u, depth); } }
L_002FF8B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], ld32((c.r[2].w[0] + 17992u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF8D4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF8D4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FF8D4u) [[unlikely]] return; }
L_002FF8D4:
    set32(c.r[2], ld32((c.r[19].w[0] + 12852u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF8EC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 12852u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
L_002FF8EC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 23136u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FF904u);  if (depth < kMaxDepth) unit_0074(c, 329u, depth + 1u); else { c.pc = 0x002D3940u; return; } if (c.pc != 0x002FF904u) [[unlikely]] return; }
L_002FF904:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[2], 0u + 30u);
    set32(c.r[6], c.r[5].w[0] + 14208u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[5], 0u + 13248u);
    st32((c.r[3].w[0] + 10112u), c.r[2].w[0]);
    mmi::mult(c, 0, c.r[20].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10129u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF94C; } }
    mmi::mult(c, 0, c.r[23].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x45000000u);
    c.f[1] = c.r[1].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 148u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 148u), c.f[0]);
    c.budget -= 7;
L_002FF94C:
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 9u);
    st8((c.r[18].w[0] + 8933u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FF97C; } }
    set32(c.r[2], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FF97C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 36u)));
    set32(c.r[2], 0u + 53u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FFA2C; } }
L_002FF97C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10079u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002FF9F0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10116u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_002FF9F0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10010u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF9B8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10012u)));
    c.r[2].d[0] = c.r[2].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF9F0; } }
L_002FF9B8:
    set32(c.r[2], c.r[19].w[0] + 10120u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10114u)));
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FF9E0; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002FF9E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10116u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FF9F0; } }
    st16((c.r[19].w[0] + 10118u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 1;
L_002FF9F0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 10214u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FFA0C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 7700u)));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FFA40; } }
L_002FFA0C:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 10010u));
    set32(c.r[3], 0u + 100u);
    st16((c.r[19].w[0] + 10014u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[19].w[0] + 10012u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 10010u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFA40; } }
L_002FFA2C:
    set32(c.r[3], 0u + 100u);
    set32(c.r[2], 0u + 1u);
    st16((c.r[19].w[0] + 10010u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 10014u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[19].w[0] + 10012u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_002FFA40:
    set32(c.r[2], ld32((c.r[19].w[0] + 36u)));
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[30].d[0] != c.r[2].d[0];  if (t) { goto L_002FFA54; } }
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 9012u)));
    c.budget -= 1;
L_002FFA54:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002FFB18; } }
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] >= 0;  if (t) { goto L_002FFA70; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFA84; } }
L_002FFA70:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFA84u);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FFA84u) [[unlikely]] return; }
L_002FFA84:
    set32(c.r[6], 0u + 13248u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    mmi::mult(c, 0, c.r[23].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[5], c.r[4].w[0] + 14208u);
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 74u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[7].w[0] - 5024u), c.r[2].w[0]);
    set32(c.r[4], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 7700u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_002FFAC8; } }
    set32(c.r[4], c.r[5].w[0] + 13248u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFAC0u);  if (depth < kMaxDepth) unit_001D(c, 122u, depth + 1u); else { c.pc = 0x00175668u; return; } if (c.pc != 0x002FFAC0u) [[unlikely]] return; }
L_002FFAC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFB18; } }
L_002FFAC8:
    mmi::mult(c, 0, c.r[20].w[0], c.r[6].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[4], 0u + 9u);
    set32(c.r[2], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 7700u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { goto L_002FFB00; } }
    mmi::mult(c, 0, c.r[22].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] + 13248u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFAF8u);  if (depth < kMaxDepth) unit_001D(c, 143u, depth + 1u); else { c.pc = 0x00175998u; return; } if (c.pc != 0x002FFAF8u) [[unlikely]] return; }
L_002FFAF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFB18; } }
L_002FFB00:
    mmi::mult(c, 0, c.r[22].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[4], c.r[5].w[0] + 13248u);
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB18u);  if (depth < kMaxDepth) unit_001D(c, 132u, depth + 1u); else { c.pc = 0x001757D0u; return; } if (c.pc != 0x002FFB18u) [[unlikely]] return; }
L_002FFB18:
    set32(c.r[4], ld32((c.r[19].w[0] + 104u)));
    set32(c.r[5], 0u + 11u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB2Cu);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002FFB2Cu) [[unlikely]] return; }
L_002FFB2C:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    set32(c.r[3], c.r[16].w[0] << 1);
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[3].d[0];
    set32(c.r[5], 0u + 12u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB48u);  if (depth < kMaxDepth) unit_002E(c, 462u, depth + 1u); else { c.pc = 0x001BB3F8u; return; } if (c.pc != 0x002FFB48u) [[unlikely]] return; }
L_002FFB48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FFB5C; } }
    set32(c.r[2], c.r[16].w[0] >> 31);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 3;
L_002FFB5C:
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    ldl(c.r[6], (c.r[19].w[0] + 10287u));
    ldr(c.r[6], (c.r[19].w[0] + 10280u));
    set32(c.r[7], ld32((c.r[19].w[0] + 10288u)));
    sdl(c.r[6], (c.r[29].w[0] + 7u));
    sdr(c.r[6], (c.r[29].w[0]));
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    set32(c.r[4], c.r[18].w[0] + 10280u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB84u);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x00378980u; return; } if (c.pc != 0x002FFB84u) [[unlikely]] return; }
L_002FFB84:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFB98u);  if (depth < kMaxDepth) unit_0032(c, 409u, depth + 1u); else { c.pc = 0x001CBF48u; return; } if (c.pc != 0x002FFB98u) [[unlikely]] return; }
L_002FFB98:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBA4u);  if (depth < kMaxDepth) unit_0039(c, 17u, depth + 1u); else { c.pc = 0x001E4208u; return; } if (c.pc != 0x002FFBA4u) [[unlikely]] return; }
L_002FFBA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FFBB8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], 0u + 60u);
    st32((c.r[3].w[0] + 13624u), c.r[2].w[0]);
    c.budget -= 3;
L_002FFBB8:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBC8u);  if (depth < kMaxDepth) unit_001D(c, 112u, depth + 1u); else { c.pc = 0x00175510u; return; } if (c.pc != 0x002FFBC8u) [[unlikely]] return; }
L_002FFBC8:
    set32(c.r[4], ld32((c.r[18].w[0] + 104u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00730000u);
    set32(c.r[2], c.r[2].w[0] + 24688u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBECu);  if (depth < kMaxDepth) unit_0097(c, 187u, depth + 1u); else { c.pc = 0x0035DC98u; return; } if (c.pc != 0x002FFBECu) [[unlikely]] return; }
L_002FFBEC:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFBF8u);  if (depth < kMaxDepth) unit_0093(c, 104u, depth + 1u); else { c.pc = 0x0034D498u; return; } if (c.pc != 0x002FFBF8u) [[unlikely]] return; }
L_002FFBF8:
    c.r[2].d[0] = ld64((c.r[18].w[0] + 560u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FFC24; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10079u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FFC24; } }
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFC58; } }
L_002FFC24:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10054u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { goto L_002FFC3C; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFC4C; } }
L_002FFC3C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFC4Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FFC4Cu) [[unlikely]] return; }
L_002FFC4C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[4].w[0] - 5024u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 14u));
    c.budget -= 3;
L_002FFC58:
    st8((c.r[18].w[0] + 10091u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 268u);
    set32(c.r[5], ld32((c.r[29].w[0] + 1076u)));
    mmi::mult(c, 0, c.r[21].w[0], c.r[2].w[0]);
    c.r[23].d[0] = c.lo.d[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[5].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[6], c.r[6].w[0] - 14152u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.f[0] = ld32((c.r[3].w[0] - 6492u));
    set32(c.r[20], c.r[4].w[0] - 6080u);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[7].d[0] = 0ull + 0ull;
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFCB8u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002FFCB8u) [[unlikely]] return; }
L_002FFCB8:
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10146u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_002FFD2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 113u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FFCE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2832u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[16], ld32((c.r[3].w[0])));
    c.budget -= 5;
L_002FFCE8:
    set32(c.r[2], c.r[16].w[0] << 2);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00650000u);
    set32(c.r[2], c.r[2].w[0] + c.r[23].w[0]);
    set32(c.r[3], c.r[3].w[0] - 14152u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    set32(c.r[10], 0u + 1u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD20u);  if (depth < kMaxDepth) unit_0049(c, 131u, depth + 1u); else { c.pc = 0x00225C40u; return; } if (c.pc != 0x002FFD20u) [[unlikely]] return; }
L_002FFD20:
    c.f[0] = ld32((c.r[20].w[0] + 132u));
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[17], c.f[1]);
    c.budget -= 3;
L_002FFD2C:
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD3Cu);  if (depth < kMaxDepth) unit_0008(c, 45u, depth + 1u); else { c.pc = 0x001206E0u; return; } if (c.pc != 0x002FFD3Cu) [[unlikely]] return; }
L_002FFD3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD50u);  if (depth < kMaxDepth) unit_0036(c, 442u, depth + 1u); else { c.pc = 0x001DB538u; return; } if (c.pc != 0x002FFD50u) [[unlikely]] return; }
L_002FFD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD68u);  if (depth < kMaxDepth) unit_0036(c, 442u, depth + 1u); else { c.pc = 0x001DB538u; return; } if (c.pc != 0x002FFD68u) [[unlikely]] return; }
L_002FFD68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFD80u);  if (depth < kMaxDepth) unit_0036(c, 442u, depth + 1u); else { c.pc = 0x001DB538u; return; } if (c.pc != 0x002FFD80u) [[unlikely]] return; }
L_002FFD80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 10124u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FFF14; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_002FFF14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10086u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FFF14; } }
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10002u)));
    c.budget -= 3;
    { const bool t = c.r[7].sd[0] < 0;  if (t) { goto L_002FFE04; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { goto L_002FFDCC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7694u)));
    set32(c.r[7], c.r[2].w[0] + 3u);
    c.budget -= 2;
L_002FFDCC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 10004u)));
    set32(c.r[2], c.r[3].w[0] - 6080u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.f[1] = ld32((c.r[2].w[0] + 136u));
    c.f[0] = ld32((c.r[2].w[0] + 128u));
    c.f[2] = fp::cvt_w_s(c.f[1]);
    set32(c.r[6], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    set32(c.r[4], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFDFCu);  if (depth < kMaxDepth) unit_0007(c, 404u, depth + 1u); else { c.pc = 0x0011F4A8u; return; } if (c.pc != 0x002FFDFCu) [[unlikely]] return; }
L_002FFDFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFF14; } }
L_002FFE04:
    c.budget -= 2;
    { const bool t = c.r[30].sd[0] >= 0;  if (t) { goto L_002FFE18; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFE2C; } }
L_002FFE18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x006B0000u);
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 12288u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFE2Cu);  if (depth < kMaxDepth) unit_006C(c, 148u, depth + 1u); else { c.pc = 0x002B1920u; return; } if (c.pc != 0x002FFE2Cu) [[unlikely]] return; }
L_002FFE2C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00630000u);
    set32(c.r[20], 0u + 1u);
    st32((c.r[3].w[0] - 5024u), c.r[2].w[0]);
    set32(c.r[23], 0u + 1u);
    st16((c.r[19].w[0] + 7708u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFEF0; } }
L_002FFE48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 7708u)));
    set32(c.r[4], 0u + 114u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[20].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[16].d[0] = ld64((c.r[2].w[0] + 8u));
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[20].d[0] != c.r[4].d[0];  if (t) { goto L_002FFEE4; } }
    set32(c.r[6], 0u + 6039u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_002FFE8C; } }
    set32(c.r[2], c.r[5].w[0] - 6040u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(91ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FFE98; } }
L_002FFE8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFEAC; } }
L_002FFE98:
    set32(c.r[2], c.r[5].w[0] - 6637u);
    set32(c.r[7], 0u + 3009u);
    c.r[3].d[0] = c.r[23].d[0] + 0ull;
    c.r[2].d[0] = c.r[7].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[3].d[0] = 0ull;
    c.budget -= 5;
L_002FFEAC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[23].d[0];  if (t) { goto L_002FFEE4; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFEC0u);  if (depth < kMaxDepth) unit_0079(c, 258u, depth + 1u); else { c.pc = 0x002E7F30u; return; } if (c.pc != 0x002FFEC0u) [[unlikely]] return; }
L_002FFEC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FFEE4; } }
    set32(c.r[8], ld32((c.r[29].w[0] + 1072u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[7].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFEE4u);  if (depth < kMaxDepth) unit_007A(c, 121u, depth + 1u); else { c.pc = 0x002E9700u; return; } if (c.pc != 0x002FFEE4u) [[unlikely]] return; }
L_002FFEE4:
    c.r[2].d[0] = ld16((c.r[19].w[0] + 7708u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[19].w[0] + 7708u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002FFEF0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull;  if (t) { goto L_002FFF14; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[30].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFF08u);  if (depth < kMaxDepth) unit_007A(c, 134u, depth + 1u); else { c.pc = 0x002E9A80u; return; } if (c.pc != 0x002FFF08u) [[unlikely]] return; }
L_002FFF08:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FFE48u | kUnwind; return; } goto L_002FFE48; } }
L_002FFF14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10137u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FFF28; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00630000u);
    st32((c.r[2].w[0] - 21440u), c.r[3].w[0]);
    c.budget -= 2;
L_002FFF28:
    set32(c.r[3], ld32((c.r[29].w[0] + 1092u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0080(c, 1u, depth); } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFF44u);  if (depth < kMaxDepth) unit_0068(c, 298u, depth + 1u); else { c.pc = 0x002A3B08u; return; } if (c.pc != 0x002FFF44u) [[unlikely]] return; }
L_002FFF44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FFF58; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFF70; } }
L_002FFF58:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFF64u);  if (depth < kMaxDepth) unit_0061(c, 226u, depth + 1u); else { c.pc = 0x00286440u; return; } if (c.pc != 0x002FFF64u) [[unlikely]] return; }
L_002FFF64:
    set32(c.r[4], ld32((c.r[29].w[0] + 1092u)));
    if (c.r[2].d[0] != 0) c.r[4].d[0] = 0ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
L_002FFF70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0080(c, 1u, depth); } }
    c.f[12] = ld32((c.r[18].w[0] + 128u));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.f[13] = ld32((c.r[18].w[0] + 132u));
    c.f[14] = ld32((c.r[18].w[0] + 136u));
    c.f[15] = 0u;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFF94u);  if (depth < kMaxDepth) unit_008B(c, 91u, depth + 1u); else { c.pc = 0x0032CB68u; return; } if (c.pc != 0x002FFF94u) [[unlikely]] return; }
L_002FFF94:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7694u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FFFB0; } }
    set32(c.r[2], 0u + 86u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FFFBC; } }
L_002FFFB0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 9289u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FFFC0; } }
L_002FFFBC:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_002FFFC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00520000u);
    c.f[14] = ld32((c.r[2].w[0] - 29220u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00700000u);
    c.f[15] = ld32((c.r[3].w[0] - 29216u));
    c.r[6].sd[0] = static_cast<std::int32_t>(0xDEC30000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[1].w[0];
    set32(c.r[4], c.r[4].w[0] - 22920u);
    c.f[13] = 0u;
    c.r[6].d[0] = c.r[6].d[0] | 49178ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FFFF8u);  if (depth < kMaxDepth) unit_0086(c, 232u, depth + 1u); else { c.pc = 0x0031AE78u; return; } if (c.pc != 0x002FFFF8u) [[unlikely]] return; }
L_002FFFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FEF04u | kUnwind; return; } goto L_002FEF04; } }
    [[clang::musttail]] return unit_0080(c, 1u, depth);
}

}
